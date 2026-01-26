/*
 * Code for class KL_STRING_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl290.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_STRING_ROUTINES}.make_from_string */
EIF_REFERENCE F862_5638 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,loc6);
	RTLR(3,loc7);
	RTLR(4,loc8);
	RTLR(5,tr1);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("make_from_string", 861, Current, 8, 1, 8641);
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
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(Result), loc3));
	RTHOOK(4);
	loc6 = Result;
	if ((EIF_TRUE)) {
		RTHOOK(5);
		loc7 = arg1;
		loc7 = RTRV(eif_new_type(1127, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_3_);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc2 > loc3)) break;
				RTHOOK(9);
				tc1 = (nstcall = 1, F1128_9156(loc7, loc2));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				RTHOOK(10);
				ti4_1 = (nstcall = 1, F1128_9157(loc7, loc2));
				loc2 = (EIF_INTEGER_32) ti4_1;
			}
		} else {
			RTHOOK(11);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
			loc5 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(12);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc1 > loc3)) break;
				RTHOOK(14);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
				loc4 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(15);
				if ((EIF_BOOLEAN) (loc4 > loc5)) {
					RTHOOK(16);
					loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				}
				RTHOOK(17);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R6206[Dtype(RTCW(Result))-1080])(Result, loc4));
				RTHOOK(18);
				loc1++;
			}
		}
	} else {
		RTHOOK(19);
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(1127, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(20);
			ti4_1 = *(EIF_INTEGER_32 *)(loc8+ _LNGOFF_1_1_0_3_);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(21);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc2 > loc3)) break;
				RTHOOK(23);
				ti4_1 = (nstcall = 1, F1128_9154(loc8, loc2));
				tu4_1 = (EIF_NATURAL_32) ti4_1;
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R6206[Dtype(RTCW(Result))-1080])(Result, tu4_1));
				RTHOOK(24);
				ti4_1 = (nstcall = 1, F1128_9157(loc8, loc2));
				loc2 = (EIF_INTEGER_32) ti4_1;
			}
		} else {
			RTHOOK(25);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6217[Dtype(RTCW(Result))-1080])(Result, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("new_string", EX_POST);
		if ((EIF_BOOLEAN)(Result != arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("initialized", EX_POST);
		if ((nstcall = 0, F862_5655(Current, Result, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.make_buffer */
EIF_REFERENCE F862_5639 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_buffer", 861, Current, 0, 1, 8642);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7732(RTCW(Result), (EIF_CHARACTER_8) '\000', arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {KL_STRING_ROUTINES}.has_substring */
EIF_BOOLEAN F862_5640 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("has_substring", 861, Current, 0, 2, 8643);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 == arg1)) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
			RTHOOK(6);
			ti4_1 = (nstcall = 0, F862_5651(Current, arg1, arg2, ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("false_if_too_small", EX_POST);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("true_if_initial", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L), ti4_1));
			tb2 = (nstcall = 0, F862_5655(Current, arg2, tr1));
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L), ti4_1));
			tb2 = (EIF_BOOLEAN) !(nstcall = 0, F862_5655(Current, arg2, tr1));
		}
		if (tb2) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 2L), ti4_1));
			tb1 = (EIF_BOOLEAN)(Result == (nstcall = 0, F862_5640(Current, tr1, arg2)));
		}
		if (tb1) {
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

/* {KL_STRING_ROUTINES}.is_decimal */
EIF_BOOLEAN F862_5641 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_decimal", 861, Current, 3, 1, 8644);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
			loc3 = (EIF_CHARACTER_32) tw1;
			RTHOOK(9);
			tb1 = '\01';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
			if (!(EIF_BOOLEAN) (loc3 < tw1)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
				tb1 = (EIF_BOOLEAN) (loc3 > tw1);
			}
			if (tb1) {
				RTHOOK(10);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(11);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.is_integer_64 */
EIF_BOOLEAN F862_5642 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc8 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_integer_64", 861, Current, 8, 1, 8645);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L)));
		loc7 = (EIF_CHARACTER_32) tw1;
		RTHOOK(6);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
		if ((EIF_BOOLEAN)(loc7 == tw1)) {
			RTHOOK(7);
			loc3++;
		} else {
			RTHOOK(8);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
			if ((EIF_BOOLEAN)(loc7 == tw1)) {
				RTHOOK(9);
				loc3++;
				RTHOOK(10);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(11);
		loc2 = (EIF_INTEGER_32) loc3;
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != loc2) || (EIF_BOOLEAN) (loc2 > loc1))) break;
			RTHOOK(13);
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc2));
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
			if ((EIF_BOOLEAN)(tw1 == tw2)) {
				RTHOOK(14);
				loc3++;
			}
			RTHOOK(15);
			loc2++;
		}
		RTHOOK(16);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc3) + ((EIF_INTEGER_32) 1L));
		RTHOOK(17);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 20L))) {
			RTHOOK(18);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(19);
			loc4 = (EIF_INTEGER_32) loc3;
			for (;;) {
				RTHOOK(20);
				if ((EIF_BOOLEAN) (loc4 > (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)))) break;
				RTHOOK(21);
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc4));
				loc7 = (EIF_CHARACTER_32) tw1;
				RTHOOK(22);
				tb1 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
				if (!(EIF_BOOLEAN) (loc7 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
					tb1 = (EIF_BOOLEAN) (loc7 > tw1);
				}
				if (tb1) {
					RTHOOK(23);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(24);
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(25);
					loc4++;
				}
			}
			RTHOOK(26);
			if ((EIF_BOOLEAN) (Result && (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 19L)))) {
				RTHOOK(27);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(28);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc1);
				for (;;) {
					RTHOOK(29);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || (EIF_BOOLEAN) (loc3 > loc4))) break;
					RTHOOK(30);
					tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc3));
					loc7 = (EIF_CHARACTER_32) tw1;
					RTHOOK(31);
					if (loc6) {
						RTHOOK(32);
						tr1 = RTOUCR(434,(nstcall = 0, F862_5690), (Current));
						tw1 = (nstcall = 1, F792_5435(RTCW(tr1), (EIF_INTEGER_32) (loc3 - loc5)));
						loc8 = (EIF_CHARACTER_32) tw1;
					} else {
						RTHOOK(33);
						tr1 = RTOUCR(435,(nstcall = 0, F862_5689), (Current));
						tw1 = (nstcall = 1, F792_5435(RTCW(tr1), (EIF_INTEGER_32) (loc3 - loc5)));
						loc8 = (EIF_CHARACTER_32) tw1;
					}
					RTHOOK(34);
					if ((EIF_BOOLEAN) (loc7 < loc8)) {
						RTHOOK(35);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(36);
						loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(37);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc7 == loc8);
						RTHOOK(38);
						loc3++;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.is_hexadecimal */
EIF_BOOLEAN F862_5643 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_hexadecimal", 861, Current, 3, 1, 8646);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
			loc3 = (EIF_CHARACTER_32) tw1;
			RTHOOK(9);
			tb1 = '\0';
			tb2 = '\0';
			tb3 = '\01';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
			if (!(EIF_BOOLEAN) (loc3 < tw1)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
				tb3 = (EIF_BOOLEAN) (loc3 > tw1);
			}
			if (tb3) {
				tb3 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
				if (!(EIF_BOOLEAN) (loc3 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'f';
					tb3 = (EIF_BOOLEAN) (loc3 > tw1);
				}
				tb2 = tb3;
			}
			if (tb2) {
				tb2 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
				if (!(EIF_BOOLEAN) (loc3 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'F';
					tb2 = (EIF_BOOLEAN) (loc3 > tw1);
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(10);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(11);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.is_base64 */
EIF_BOOLEAN F862_5644 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_base64", 861, Current, 3, 1, 8647);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
			loc3 = (EIF_CHARACTER_32) tw1;
			RTHOOK(9);
			tb1 = '\0';
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			tb5 = '\0';
			tb6 = '\0';
			tb7 = '\0';
			tb8 = '\0';
			tb9 = '\0';
			tb10 = '\01';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
			if (!(EIF_BOOLEAN) (loc3 < tw1)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
				tb10 = (EIF_BOOLEAN) (loc3 > tw1);
			}
			if (tb10) {
				tb10 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
				if (!(EIF_BOOLEAN) (loc3 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
					tb10 = (EIF_BOOLEAN) (loc3 > tw1);
				}
				tb9 = tb10;
			}
			if (tb9) {
				tb9 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
				if (!(EIF_BOOLEAN) (loc3 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
					tb9 = (EIF_BOOLEAN) (loc3 > tw1);
				}
				tb8 = tb9;
			}
			if (tb8) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
				tb7 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb7) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
				tb6 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb6) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
				tb5 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb5) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
				tb4 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb4) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
				tb3 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb3) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				tb2 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb2) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				tb1 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb1) {
				RTHOOK(10);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(11);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.new_empty_string */
EIF_REFERENCE F862_5645 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("new_empty_string", 861, Current, 2, 2, 8648);
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
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
	tb1 = (nstcall = 1, F1_7(arg1, tr1));
	if (tb1) {
		RTHOOK(4);
		Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(Result), arg2));
	} else {
		RTHOOK(5);
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			RTCT0("attached {STRING} uc_string.new_empty_string (n) as l_new_empty_string", EX_CHECK);
			tr1 = (nstcall = 1, F1128_9078(loc1, arg2));
			loc2 = tr1;
			if ((EIF_TRUE)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(7);
			Result = (EIF_REFERENCE) loc2;
		} else {
			RTHOOK(8);
			tr1 = (nstcall = 1, F1_14(arg1));
			Result = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R6234[Dtype(RTCW(Result))-1080])(Result));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("same_type", EX_POST);
		tb1 = (nstcall = 1, F1_7(Result, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("new_string_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* {KL_STRING_ROUTINES}.new_empty_string_8 */
EIF_REFERENCE F862_5646 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("new_empty_string_8", 861, Current, 1, 2, 8649);
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
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
	tb1 = (nstcall = 1, F1_7(arg1, tr1));
	if (tb1) {
		RTHOOK(4);
		Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(Result), arg2));
	} else {
		RTHOOK(5);
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F1128_9078(loc1, arg2));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			tr1 = (nstcall = 1, F1_14(arg1));
			Result = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R6234[Dtype(RTCW(Result))-1080])(Result));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("new_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("same_type", EX_POST);
		tb1 = (nstcall = 1, F1_7(Result, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("new_string_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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
	return Result;
}

/* {KL_STRING_ROUTINES}.to_utf16_be */
EIF_REFERENCE F862_5647 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc8);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("to_utf16_be", 861, Current, 8, 1, 8650);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc8 = arg1;
	loc8 = RTRV(eif_new_type(1127, 0x01),loc8);
	if (EIF_TEST(loc8)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1128_9144(loc8));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(Result), loc2));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
			loc7 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(9);
			tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
			tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc7));
			if (tb1) {
				RTHOOK(10);
				ti4_1 = (EIF_INTEGER_32) loc7;
				loc3 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(11);
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(12);
			tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
			tb1 = (nstcall = 1, F1122_8787(RTCW(tr1), loc3));
			if (tb1) {
				RTHOOK(13);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 256L));
				RTHOOK(14);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 256L));
				RTHOOK(15);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc4));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				RTHOOK(16);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc5));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			} else {
				RTHOOK(17);
				tr1 = RTOUCR(439,(nstcall = 0, F126_1762), (Current));
				ti4_1 = (nstcall = 1, F861_5622(RTCW(tr1), loc3));
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(19);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(20);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc4));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				RTHOOK(21);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc5));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				RTHOOK(22);
				tr1 = RTOUCR(439,(nstcall = 0, F126_1762), (Current));
				ti4_1 = (nstcall = 1, F861_5623(RTCW(tr1), loc3));
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(23);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(24);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(25);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc4));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				RTHOOK(26);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc5));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			}
			RTHOOK(27);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("to_utf16_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("valid_utf16", EX_POST);
		tr1 = RTOUCR(439,(nstcall = 0, F126_1762), (Current));
		tb1 = (nstcall = 1, F861_5603(RTCW(tr1), Result));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.to_utf16_le */
EIF_REFERENCE F862_5648 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc8);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("to_utf16_le", 861, Current, 8, 1, 8651);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc8 = arg1;
	loc8 = RTRV(eif_new_type(1127, 0x01),loc8);
	if (EIF_TEST(loc8)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1128_9145(loc8));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(Result), loc2));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
			loc7 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(9);
			tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
			tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc7));
			if (tb1) {
				RTHOOK(10);
				ti4_1 = (EIF_INTEGER_32) loc7;
				loc3 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(11);
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(12);
			tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
			tb1 = (nstcall = 1, F1122_8787(RTCW(tr1), loc3));
			if (tb1) {
				RTHOOK(13);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 256L));
				RTHOOK(14);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 256L));
				RTHOOK(15);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc5));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				RTHOOK(16);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc4));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			} else {
				RTHOOK(17);
				tr1 = RTOUCR(439,(nstcall = 0, F126_1762), (Current));
				ti4_1 = (nstcall = 1, F861_5622(RTCW(tr1), loc3));
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(19);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(20);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc5));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				RTHOOK(21);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc4));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				RTHOOK(22);
				tr1 = RTOUCR(439,(nstcall = 0, F126_1762), (Current));
				ti4_1 = (nstcall = 1, F861_5623(RTCW(tr1), loc3));
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(23);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(24);
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(25);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc5));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				RTHOOK(26);
				tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
				tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc4));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			}
			RTHOOK(27);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("to_utf16_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("valid_utf16", EX_POST);
		tr1 = RTOUCR(439,(nstcall = 0, F126_1762), (Current));
		tr2 = RTOUCR(439,(nstcall = 0, F126_1762), (Current));
		tr3 = RTOUCR(440,(nstcall = 1, F861_5607), (RTCW(tr2)));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr3))-1079])(tr3, Result));
		tb1 = (nstcall = 1, F861_5603(RTCW(tr1), tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.to_utf32_be */
EIF_REFERENCE F862_5649 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("to_utf32_be", 861, Current, 9, 1, 8652);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc9 = arg1;
	loc9 = RTRV(eif_new_type(1127, 0x01),loc9);
	if (EIF_TEST(loc9)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1128_9146(loc9));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(Result), (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * loc6)));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc6)) break;
			RTHOOK(8);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(9);
			tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
			tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc8));
			if (tb1) {
				RTHOOK(10);
				ti4_1 = (EIF_INTEGER_32) loc8;
				loc7 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(11);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(12);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(14);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(15);
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(16);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / ((EIF_INTEGER_32) 256L));
			RTHOOK(17);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(18);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			RTHOOK(19);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc3));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			RTHOOK(20);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc4));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			RTHOOK(21);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc5));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			RTHOOK(22);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("to_utf32_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("valid_utf32", EX_POST);
		tr1 = RTOUCR(441,(nstcall = 0, F125_1761), (Current));
		tb1 = (nstcall = 1, F860_5586(RTCW(tr1), Result));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.to_utf32_le */
EIF_REFERENCE F862_5650 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("to_utf32_le", 861, Current, 9, 1, 8653);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc9 = arg1;
	loc9 = RTRV(eif_new_type(1127, 0x01),loc9);
	if (EIF_TEST(loc9)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1128_9147(loc9));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(Result), (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * loc6)));
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc6)) break;
			RTHOOK(8);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(9);
			tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
			tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc8));
			if (tb1) {
				RTHOOK(10);
				ti4_1 = (EIF_INTEGER_32) loc8;
				loc7 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(11);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(12);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(14);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(15);
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(16);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / ((EIF_INTEGER_32) 256L));
			RTHOOK(17);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(18);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc5));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			RTHOOK(19);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc4));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			RTHOOK(20);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc3));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			RTHOOK(21);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			tc1 = (nstcall = 1, F350_4651(RTCW(tr1), loc2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
			RTHOOK(22);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("to_utf32_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("valid_utf32", EX_POST);
		tr1 = RTOUCR(441,(nstcall = 0, F125_1761), (Current));
		tr2 = RTOUCR(441,(nstcall = 0, F125_1761), (Current));
		tr3 = RTOUCR(442,(nstcall = 1, F860_5588), (RTCW(tr2)));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr3))-1079])(tr3, Result));
		tb1 = (nstcall = 1, F860_5586(RTCW(tr1), tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.substring_index */
EIF_INTEGER_32 F862_5651 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc9 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc11);
	RTLR(3,loc12);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("substring_index", 861, Current, 12, 3, 8654);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L))) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			tb1 = (EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(arg2 == arg1)) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(6);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		RTHOOK(7);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		loc10 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			Result = (EIF_INTEGER_32) arg3;
		} else {
			RTHOOK(10);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc10) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			if ((EIF_BOOLEAN) (arg3 <= loc7)) {
				RTHOOK(12);
				loc11 = arg1;
				loc11 = RTRV(eif_new_type(1127, 0x01),loc11);
				if (EIF_TEST(loc11)) {
					RTHOOK(13);
					ti4_1 = (nstcall = 1, F1128_9069(loc11, arg2, arg3));
					Result = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(14);
					loc12 = arg2;
					loc12 = RTRV(eif_new_type(1127, 0x01),loc12);
					if (EIF_TEST(loc12)) {
						RTHOOK(15);
						tr1 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
						tr2 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
						tb1 = (nstcall = 1, F1_7(tr1, tr2));
						if (tb1) {
							RTHOOK(16);
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
							loc9 = (EIF_NATURAL_32) tu4_1;
						} else {
							RTHOOK(17);
							loc9 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 4294967295U);
						}
						RTHOOK(18);
						ti4_1 = *(EIF_INTEGER_32 *)(loc12+ _LNGOFF_1_1_0_3_);
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(19);
						loc6 = (EIF_INTEGER_32) arg3;
						for (;;) {
							RTHOOK(20);
							if ((EIF_BOOLEAN) (loc6 > loc7)) break;
							RTHOOK(21);
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(22);
							loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(23);
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(24);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(25);
								tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc2));
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(26);
								if ((EIF_BOOLEAN) (loc4 > loc9)) {
									RTHOOK(27);
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(28);
								ti4_1 = (nstcall = 1, F1128_9154(loc12, loc1));
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc5 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(29);
								if ((EIF_BOOLEAN) (loc5 > loc9)) {
									RTHOOK(30);
									loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(31);
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									RTHOOK(32);
									loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(33);
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(34);
									loc2++;
									RTHOOK(35);
									ti4_1 = (nstcall = 1, F1128_9157(loc12, loc1));
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(36);
							if (loc8) {
								RTHOOK(37);
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(38);
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(39);
								loc6++;
							}
						}
					} else {
						RTHOOK(40);
						ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R6157[Dtype(RTCW(arg1))-1079])(arg1, arg2, arg3));
						Result = (EIF_INTEGER_32) ti4_1;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(41);
		RTCT("valid_result", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) (arg3 <= Result)) {
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
				ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
				tb2 = (EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(42);
		RTCT("zero_if_absent", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, arg3, ti4_1));
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !(nstcall = 0, F862_5640(Current, tr1, arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(43);
		RTCT("at_this_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result >= arg3)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, Result, (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L))));
			tb1 = (nstcall = 0, F862_5655(Current, arg2, tr1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(44);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result > arg3)) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, arg3, (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 2L))));
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F862_5640(Current, tr1, arg2));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.case_insensitive_hash_code */
EIF_INTEGER_32 F862_5652 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("case_insensitive_hash_code", 861, Current, 2, 1, 8655);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		ti4_1 = eif_bit_shift_left((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L)),((EIF_INTEGER_32) 8L));
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
		tr1 = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_CHARACTER_32 *)tr1 = tw1;
		tw2 = (nstcall = 1, F1028_7426(RTCW(tr1)));
		ti4_2 = (EIF_INTEGER_32) (tw2);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
		RTHOOK(6);
		loc1++;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(8);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("hash_code_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {KL_STRING_ROUTINES}.concat */
EIF_REFERENCE F862_5653 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLR(7,loc2);
	RTLR(8,loc3);
	RTLR(9,tr3);
	RTLIU(10);
	
	RTEAA("concat", 861, Current, 3, 2, 8656);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
	tr2 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
	tb1 = (nstcall = 1, F1_7(tr1, tr2));
	if (tb1) {
		RTHOOK(4);
		Result = (nstcall = 0, F862_5654(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		tb1 = '\0';
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1084, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			tr1 = (nstcall = 0, F862_5678(Current, arg2));
			tr2 = (nstcall = 1, F1076_7660(RTCW(tr1)));
			tr1 = (nstcall = 1, F1085_8031(loc1, tr2));
			loc2 = tr1;
			loc2 = RTRV(eif_new_type(1080, 0x01),loc2);
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			RTHOOK(6);
			Result = (EIF_REFERENCE) loc2;
		} else {
			RTHOOK(7);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(arg1))-1079])(arg1));
			tr2 = (nstcall = 0, F862_5678(Current, arg2));
			tr3 = (nstcall = 1, F1076_7660(RTCW(tr2)));
			tr2 = (nstcall = 1, F1085_8031(RTCW(tr1), tr3));
			loc3 = tr2;
			loc3 = RTRV(eif_new_type(1080, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				RTHOOK(8);
				Result = (EIF_REFERENCE) loc3;
			} else {
				RTHOOK(9);
				Result = (nstcall = 0, F862_5654(Current, arg1, arg2));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("concat_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("concat_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("initial", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L), ti4_1));
		if ((nstcall = 0, F862_5656(Current, tr1, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("final", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		if ((nstcall = 0, F862_5656(Current, tr1, arg2))) {
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

/* {KL_STRING_ROUTINES}.concat_string_8 */
EIF_REFERENCE F862_5654 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,tr2);
	RTLR(9,Current);
	RTLIU(10);
	
	RTEAA("concat_string_8", 861, Current, 4, 2, 8657);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1128_9072(loc1, arg2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		loc2 = arg2;
		loc2 = RTRV(eif_new_type(1127, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F1128_9073(loc2, arg1));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			loc3 = arg1;
			loc3 = RTRV(eif_new_type(1078, 0x01),loc3);
			loc4 = arg2;
			loc4 = RTRV(eif_new_type(1078, 0x01),loc4);
			if ((EIF_BOOLEAN) (EIF_TEST(loc3) && EIF_TEST(loc4))) {
				RTHOOK(8);
				tr1 = (nstcall = 1, F1076_7654(loc3));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, loc4));
				Result = (EIF_REFERENCE) tr2;
			} else {
				RTHOOK(9);
				tr1 = RTLNS(eif_new_type(1127, 0x01).id, 1127, _OBJSIZ_1_1_0_6_0_0_0_0_);
				(nstcall = -1, F1128_9052(RTCW(tr1), arg1));
				tr2 = (nstcall = 1, F1128_9072(RTCW(tr1), arg2));
				Result = (EIF_REFERENCE) tr2;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("concat_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("concat_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("initial", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L), ti4_1));
		if ((nstcall = 0, F862_5656(Current, tr1, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("final", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		if ((nstcall = 0, F862_5656(Current, tr1, arg2))) {
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

/* {KL_STRING_ROUTINES}.elks_same_string */
EIF_BOOLEAN F862_5655 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc6);
	RTLR(3,loc7);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,loc8);
	RTLR(8,loc9);
	RTLIU(9);
	
	RTEAA("elks_same_string", 861, Current, 9, 2, 8658);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 == arg1)) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTHOOK(6);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(7);
			loc6 = arg1;
			loc6 = RTRV(eif_new_type(1127, 0x01),loc6);
			if (EIF_TEST(loc6)) {
				RTHOOK(8);
				tb1 = (nstcall = 1, F1128_9095(loc6, arg2));
				Result = (EIF_BOOLEAN) tb1;
			} else {
				RTHOOK(9);
				loc7 = arg2;
				loc7 = RTRV(eif_new_type(1127, 0x01),loc7);
				if (EIF_TEST(loc7)) {
					RTHOOK(10);
					tb1 = (nstcall = 1, F1128_9095(loc7, arg1));
					Result = (EIF_BOOLEAN) tb1;
				} else {
					RTHOOK(11);
					tr1 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
					tr2 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
					tb1 = (nstcall = 1, F1_7(tr1, tr2));
					if (tb1) {
						RTHOOK(12);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
						loc5 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(13);
						loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(14);
						ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(15);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						for (;;) {
							RTHOOK(16);
							if ((EIF_BOOLEAN) (loc1 > loc2)) break;
							RTHOOK(17);
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
							loc3 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(18);
							if ((EIF_BOOLEAN) (loc3 > loc5)) {
								RTHOOK(19);
								loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
							}
							RTHOOK(20);
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg2))-1079])(arg2, loc1));
							loc4 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(21);
							if ((EIF_BOOLEAN) (loc4 > loc5)) {
								RTHOOK(22);
								loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
							}
							RTHOOK(23);
							if ((EIF_BOOLEAN)(loc3 != loc4)) {
								RTHOOK(24);
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								RTHOOK(25);
								loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(26);
								loc1++;
							}
						}
					} else {
						RTHOOK(27);
						tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6152[Dtype(RTCW(arg1))-1079])(arg1, arg2));
						Result = (EIF_BOOLEAN) tb1;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("definition_string_32", EX_POST);
		tb1 = '\01';
		tr1 = RTMS_EX_H("",0,0);
		tr2 = RTMS32_EX_H("",0,0);
		tb2 = (nstcall = 1, F1_7(tr1, tr2));
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(Result == (nstcall = 0, F862_5656(Current, arg1, arg2)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("string_8", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		tr1 = RTMS_EX_H("",0,0);
		tr2 = RTMS_EX_H("",0,0);
		tb4 = (nstcall = 1, F1_7(tr1, tr2));
		if (tb4) {
			loc8 = arg1;
			loc8 = RTRV(eif_new_type(1078, 0x01),loc8);
			tb3 = EIF_TEST(loc8);
		}
		if (tb3) {
			loc9 = arg2;
			loc9 = RTRV(eif_new_type(1078, 0x01),loc9);
			tb2 = EIF_TEST(loc9);
		}
		if (tb2) {
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6249[Dtype(loc8)-1079])(loc8));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6249[Dtype(loc9)-1079])(loc9));
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(tr1))-0])(tr1, tr2));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.same_string */
EIF_BOOLEAN F862_5656 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("same_string", 861, Current, 2, 2, 8659);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 == arg1)) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTHOOK(6);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(7);
			loc1 = arg1;
			loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
			if (EIF_TEST(loc1)) {
				RTHOOK(8);
				tb1 = (nstcall = 1, F1128_9096(loc1, arg2));
				Result = (EIF_BOOLEAN) tb1;
			} else {
				RTHOOK(9);
				loc2 = arg2;
				loc2 = RTRV(eif_new_type(1127, 0x01),loc2);
				if (EIF_TEST(loc2)) {
					RTHOOK(10);
					tb1 = (nstcall = 1, F1128_9096(loc2, arg1));
					Result = (EIF_BOOLEAN) tb1;
				} else {
					RTHOOK(11);
					tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6152[Dtype(RTCW(arg1))-1079])(arg1, arg2));
					Result = (EIF_BOOLEAN) tb1;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tb2 = '\01';
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
				tb3 = '\0';
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L)));
				tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg2))-1079])(arg2, ((EIF_INTEGER_32) 1L)));
				if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
					tb4 = '\01';
					ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
					if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
						ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
						tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 2L), ti4_1));
						ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
						tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg2))-1079])(arg2, ((EIF_INTEGER_32) 2L), ti4_1));
						tb4 = (nstcall = 0, F862_5656(Current, tr1, tr2));
					}
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("elks_same_string", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (nstcall = 0, F862_5655(Current, arg1, arg2));
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

/* {KL_STRING_ROUTINES}.same_case_insensitive */
EIF_BOOLEAN F862_5657 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 loc1 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc7);
	RTLR(3,loc8);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("same_case_insensitive", 861, Current, 8, 2, 8660);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s1_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s2_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(8);
			loc7 = arg1;
			loc7 = RTRV(eif_new_type(1127, 0x01),loc7);
			loc8 = arg2;
			loc8 = RTRV(eif_new_type(1127, 0x01),loc8);
			if ((EIF_BOOLEAN) (EIF_TEST(loc7) || EIF_TEST(loc8))) {
				RTHOOK(9);
				loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(10);
					if ((EIF_BOOLEAN) (loc5 > loc6)) break;
					RTHOOK(11);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc5));
					loc3 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(12);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg2))-1079])(arg2, loc5));
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(13);
					if ((EIF_BOOLEAN)(loc3 == loc4)) {
						RTHOOK(14);
						loc5++;
					} else {
						RTHOOK(15);
						tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
						tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc3));
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(16);
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(17);
							loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(18);
							tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
							tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc4));
							if ((EIF_BOOLEAN) !tb1) {
								RTHOOK(19);
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								RTHOOK(20);
								loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(21);
								tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
								ti4_1 = (EIF_INTEGER_32) loc3;
								ti4_1 = (nstcall = 1, F1103_8401(RTCW(tr1), ti4_1));
								tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
								ti4_2 = (EIF_INTEGER_32) loc4;
								ti4_2 = (nstcall = 1, F1103_8401(RTCW(tr1), ti4_2));
								if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
									RTHOOK(22);
									loc5++;
								} else {
									RTHOOK(23);
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(24);
									loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
								}
							}
						}
					}
				}
			} else {
				RTHOOK(25);
				loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(26);
					if ((EIF_BOOLEAN) (loc5 > loc6)) break;
					RTHOOK(27);
					tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc5));
					loc1 = (EIF_CHARACTER_32) tw1;
					RTHOOK(28);
					tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg2))-1079])(arg2, loc5));
					loc2 = (EIF_CHARACTER_32) tw1;
					RTHOOK(29);
					if ((EIF_BOOLEAN)(loc1 == loc2)) {
						RTHOOK(30);
						loc5++;
					} else {
						RTHOOK(31);
						tr1 = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
						*(EIF_CHARACTER_32 *)tr1 = loc1;
						tw1 = (nstcall = 1, F1028_7428(RTCW(tr1)));
						tr1 = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
						*(EIF_CHARACTER_32 *)tr1 = loc2;
						tw2 = (nstcall = 1, F1028_7428(RTCW(tr1)));
						if ((EIF_BOOLEAN)(tw1 == tw2)) {
							RTHOOK(32);
							loc5++;
						} else {
							RTHOOK(33);
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(34);
							loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.is_less */
EIF_BOOLEAN F862_5658 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_less", 861, Current, 0, 2, 8661);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F862_5659(Current, arg1, arg2));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.three_way_comparison */
EIF_INTEGER_32 F862_5659 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc8);
	RTLR(3,loc9);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("three_way_comparison", 861, Current, 9, 2, 8662);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 == arg1)) {
		RTHOOK(4);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(5);
		loc8 = arg1;
		loc8 = RTRV(eif_new_type(1127, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F1128_9098(loc8, arg2));
			Result = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(7);
			loc9 = arg2;
			loc9 = RTRV(eif_new_type(1127, 0x01),loc9);
			if (EIF_TEST(loc9)) {
				RTHOOK(8);
				ti4_1 = (nstcall = 1, F1128_9098(loc9, arg1));
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
			} else {
				RTHOOK(9);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(10);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(11);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(12);
					loc2 = (EIF_INTEGER_32) loc3;
				} else {
					RTHOOK(13);
					loc2 = (EIF_INTEGER_32) loc4;
				}
				RTHOOK(14);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(15);
					if ((EIF_BOOLEAN) (loc1 > loc2)) break;
					RTHOOK(16);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(17);
					tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg2))-1079])(arg2, loc1));
					loc6 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc5 == loc6)) {
						RTHOOK(19);
						loc1++;
					} else {
						RTHOOK(20);
						if ((EIF_BOOLEAN) (loc5 < loc6)) {
							RTHOOK(21);
							loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(22);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(23);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(24);
							loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(25);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(26);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
				RTHOOK(27);
				if ((EIF_BOOLEAN) !loc7) {
					RTHOOK(28);
					if ((EIF_BOOLEAN) (loc3 < loc4)) {
						RTHOOK(29);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					} else {
						RTHOOK(30);
						if ((EIF_BOOLEAN)(loc3 != loc4)) {
							RTHOOK(31);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("equal_zero", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (nstcall = 0, F862_5656(Current, arg1, arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.three_way_case_insensitive_comparison */
EIF_INTEGER_32 F862_5660 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("three_way_case_insensitive_comparison", 861, Current, 0, 2, 8663);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F862_5661(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.three_way_lower_case_comparison */
EIF_INTEGER_32 F862_5661 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("three_way_lower_case_comparison", 861, Current, 11, 2, 8664);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 == arg1)) {
		RTHOOK(4);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(5);
		loc10 = arg1;
		loc10 = RTRV(eif_new_type(1127, 0x01),loc10);
		loc11 = arg2;
		loc11 = RTRV(eif_new_type(1127, 0x01),loc11);
		if ((EIF_BOOLEAN) (EIF_TEST(loc10) || EIF_TEST(loc11))) {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(9);
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(10);
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(11);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(13);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
				loc7 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(14);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg2))-1079])(arg2, loc1));
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc7 == loc8)) {
					RTHOOK(16);
					loc1++;
				} else {
					RTHOOK(17);
					tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
					tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc7));
					if (tb1) {
						RTHOOK(18);
						tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
						ti4_1 = (EIF_INTEGER_32) loc7;
						ti4_1 = (nstcall = 1, F1103_8401(RTCW(tr1), ti4_1));
						tu4_1 = (EIF_NATURAL_32) ti4_1;
						loc7 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(19);
					tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
					tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc8));
					if (tb1) {
						RTHOOK(20);
						tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
						ti4_1 = (EIF_INTEGER_32) loc8;
						ti4_1 = (nstcall = 1, F1103_8401(RTCW(tr1), ti4_1));
						tu4_1 = (EIF_NATURAL_32) ti4_1;
						loc8 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc7 == loc8)) {
						RTHOOK(22);
						loc1++;
					} else {
						RTHOOK(23);
						if ((EIF_BOOLEAN) (loc7 < loc8)) {
							RTHOOK(24);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(25);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(26);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(27);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(28);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(29);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
			RTHOOK(30);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(31);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(32);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(33);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(34);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		} else {
			RTHOOK(35);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(36);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(37);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(38);
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(39);
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(40);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(41);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(42);
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
				loc5 = (EIF_CHARACTER_32) tw1;
				RTHOOK(43);
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg2))-1079])(arg2, loc1));
				loc6 = (EIF_CHARACTER_32) tw1;
				RTHOOK(44);
				if ((EIF_BOOLEAN)(loc5 == loc6)) {
					RTHOOK(45);
					loc1++;
				} else {
					RTHOOK(46);
					tr1 = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
					*(EIF_CHARACTER_32 *)tr1 = loc5;
					tw1 = (nstcall = 1, F1028_7428(RTCW(tr1)));
					loc5 = (EIF_CHARACTER_32) tw1;
					RTHOOK(47);
					tr1 = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
					*(EIF_CHARACTER_32 *)tr1 = loc6;
					tw1 = (nstcall = 1, F1028_7428(RTCW(tr1)));
					loc6 = (EIF_CHARACTER_32) tw1;
					RTHOOK(48);
					if ((EIF_BOOLEAN)(loc5 == loc6)) {
						RTHOOK(49);
						loc1++;
					} else {
						RTHOOK(50);
						if ((EIF_BOOLEAN) (loc5 < loc6)) {
							RTHOOK(51);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(52);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(53);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(54);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(55);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(56);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
			RTHOOK(57);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(58);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(59);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(60);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(61);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(62);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.three_way_upper_case_comparison */
EIF_INTEGER_32 F862_5662 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("three_way_upper_case_comparison", 861, Current, 11, 2, 8665);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 == arg1)) {
		RTHOOK(4);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(5);
		loc10 = arg1;
		loc10 = RTRV(eif_new_type(1127, 0x01),loc10);
		loc11 = arg2;
		loc11 = RTRV(eif_new_type(1127, 0x01),loc11);
		if ((EIF_BOOLEAN) (EIF_TEST(loc10) || EIF_TEST(loc11))) {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(9);
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(10);
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(11);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(13);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
				loc7 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(14);
				tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg2))-1079])(arg2, loc1));
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc7 == loc8)) {
					RTHOOK(16);
					loc1++;
				} else {
					RTHOOK(17);
					tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
					tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc7));
					if (tb1) {
						RTHOOK(18);
						tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
						ti4_1 = (EIF_INTEGER_32) loc7;
						ti4_1 = (nstcall = 1, F1103_8402(RTCW(tr1), ti4_1));
						tu4_1 = (EIF_NATURAL_32) ti4_1;
						loc7 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(19);
					tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
					tb1 = (nstcall = 1, F1122_8786(RTCW(tr1), loc8));
					if (tb1) {
						RTHOOK(20);
						tr1 = RTOUCR(438,(nstcall = 0, F266_3394), (Current));
						ti4_1 = (EIF_INTEGER_32) loc8;
						ti4_1 = (nstcall = 1, F1103_8402(RTCW(tr1), ti4_1));
						tu4_1 = (EIF_NATURAL_32) ti4_1;
						loc8 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc7 == loc8)) {
						RTHOOK(22);
						loc1++;
					} else {
						RTHOOK(23);
						if ((EIF_BOOLEAN) (loc7 < loc8)) {
							RTHOOK(24);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(25);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(26);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(27);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(28);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(29);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
			RTHOOK(30);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(31);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(32);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(33);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(34);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		} else {
			RTHOOK(35);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(36);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(37);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(38);
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(39);
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(40);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(41);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(42);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
				tw1 = (EIF_CHARACTER_32) tc1;
				loc5 = (EIF_CHARACTER_32) tw1;
				RTHOOK(43);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg2))-776])(arg2, loc1));
				tw1 = (EIF_CHARACTER_32) tc1;
				loc6 = (EIF_CHARACTER_32) tw1;
				RTHOOK(44);
				if ((EIF_BOOLEAN)(loc5 == loc6)) {
					RTHOOK(45);
					loc1++;
				} else {
					RTHOOK(46);
					tr1 = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
					*(EIF_CHARACTER_32 *)tr1 = loc5;
					tw1 = (nstcall = 1, F1028_7426(RTCW(tr1)));
					loc5 = (EIF_CHARACTER_32) tw1;
					RTHOOK(47);
					tr1 = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
					*(EIF_CHARACTER_32 *)tr1 = loc6;
					tw1 = (nstcall = 1, F1028_7426(RTCW(tr1)));
					loc6 = (EIF_CHARACTER_32) tw1;
					RTHOOK(48);
					if ((EIF_BOOLEAN)(loc5 == loc6)) {
						RTHOOK(49);
						loc1++;
					} else {
						RTHOOK(50);
						if ((EIF_BOOLEAN) (loc5 < loc6)) {
							RTHOOK(51);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(52);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(53);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(54);
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(55);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(56);
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
			RTHOOK(57);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(58);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(59);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(60);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(61);
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(62);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.cloned_string */
EIF_REFERENCE F862_5663 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("cloned_string", 861, Current, 0, 1, 8666);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1_14(arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("cloned_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_type", EX_POST);
		tb1 = (nstcall = 1, F1_7(Result, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_equal", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(Result))-0])(Result, arg1));
		if (tb1) {
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

/* {KL_STRING_ROUTINES}.appended_string */
EIF_REFERENCE F862_5664 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(16);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,tr8);
	RTLR(10,Current);
	RTLR(11,tr9);
	RTLR(12,tr10);
	RTLR(13,Result);
	RTLR(14,loc1);
	RTLR(15,loc2);
	RTLIU(16);
	
	RTEAA("appended_string", 861, Current, 2, 2, 8667);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr5 = (nstcall = 1, F1_14(arg1));
		tr4 = tr5;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_4 = ti4_5;
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		RTE_OT
		tr8 = (nstcall = 1, F1_14(arg2));
		tr7 = tr8;
		tr8 = NULL;
		RTE_O
		tr8 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr9 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
	tr10 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
	tb1 = (nstcall = 1, F1_7(tr9, tr10));
	if (tb1) {
		RTHOOK(4);
		Result = (nstcall = 0, F862_5665(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1080, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			tr9 = (nstcall = 0, F862_5678(Current, arg2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6217[Dtype(loc1)-1080])(loc1, tr9));
			RTHOOK(7);
			Result = (EIF_REFERENCE) loc1;
		} else {
			RTHOOK(8);
			tr9 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(arg1))-1079])(arg1));
			loc2 = tr9;
			loc2 = RTRV(eif_new_type(1080, 0x01),loc2);
			if (EIF_TEST(loc2)) {
				RTHOOK(9);
				tr9 = (nstcall = 0, F862_5678(Current, arg2));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6217[Dtype(loc2)-1080])(loc2, tr9));
				RTHOOK(10);
				Result = (EIF_REFERENCE) loc2;
			} else {
				RTHOOK(11);
				Result = (nstcall = 0, F862_5665(Current, arg1, arg2));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("new_count", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("initial", EX_POST);
		RTCO(tr3);
		tr9 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L), ti4_3));
		RTCO(tr5);
		if ((nstcall = 0, F862_5656(Current, tr9, tr4))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("final", EX_POST);
		RTCO(tr6);
		ti4_5 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr9 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, (EIF_INTEGER_32) (ti4_4 + ((EIF_INTEGER_32) 1L)), ti4_5));
		RTCO(tr8);
		if ((nstcall = 0, F862_5656(Current, tr9, tr7))) {
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

/* {KL_STRING_ROUTINES}.appended_string_8 */
EIF_REFERENCE F862_5665 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(17);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,tr8);
	RTLR(10,loc1);
	RTLR(11,Result);
	RTLR(12,loc2);
	RTLR(13,Current);
	RTLR(14,loc3);
	RTLR(15,loc4);
	RTLR(16,tr9);
	RTLIU(17);
	
	RTEAA("appended_string_8", 861, Current, 4, 2, 8668);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr5 = (nstcall = 1, F1_14(arg1));
		tr4 = tr5;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_4 = ti4_5;
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		RTE_OT
		tr8 = (nstcall = 1, F1_14(arg2));
		tr7 = tr8;
		tr8 = NULL;
		RTE_O
		tr8 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		(nstcall = 1, F1128_9104(loc1, arg2));
		RTHOOK(5);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(6);
		loc2 = arg2;
		loc2 = RTRV(eif_new_type(1127, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(7);
			Result = (nstcall = 0, F862_5654(Current, arg1, arg2));
		} else {
			RTHOOK(8);
			loc3 = arg1;
			loc3 = RTRV(eif_new_type(1080, 0x01),loc3);
			loc4 = arg2;
			loc4 = RTRV(eif_new_type(1078, 0x01),loc4);
			if ((EIF_BOOLEAN) (EIF_TEST(loc3) && EIF_TEST(loc4))) {
				RTHOOK(9);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(loc3)-1080])(loc3, loc4));
				RTHOOK(10);
				Result = (EIF_REFERENCE) loc3;
			} else {
				RTHOOK(11);
				Result = (nstcall = 0, F862_5654(Current, arg1, arg2));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("new_count", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("initial", EX_POST);
		RTCO(tr3);
		tr9 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L), ti4_3));
		RTCO(tr5);
		if ((nstcall = 0, F862_5656(Current, tr9, tr4))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("final", EX_POST);
		RTCO(tr6);
		ti4_5 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr9 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, (EIF_INTEGER_32) (ti4_4 + ((EIF_INTEGER_32) 1L)), ti4_5));
		RTCO(tr8);
		if ((nstcall = 0, F862_5656(Current, tr9, tr7))) {
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

/* {KL_STRING_ROUTINES}.appended_substring */
EIF_REFERENCE F862_5666 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,Current);
	RTLR(10,tr8);
	RTLR(11,tr9);
	RTLR(12,Result);
	RTLR(13,loc1);
	RTLR(14,loc2);
	RTLIU(15);
	
	RTEAA("appended_substring", 861, Current, 2, 4, 8669);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = (nstcall = 1, F1_14(arg1));
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_3 = ti4_4;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		tr7 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg2))-1079])(arg2, arg3, arg4));
		tr6 = tr7;
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	tr8 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
	tr9 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
	tb1 = (nstcall = 1, F1_7(tr8, tr9));
	if (tb1) {
		RTHOOK(7);
		Result = (nstcall = 0, F862_5667(Current, arg1, arg2, arg3, arg4));
	} else {
		RTHOOK(8);
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1080, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTHOOK(9);
			tr8 = (nstcall = 0, F862_5678(Current, arg2));
			(nstcall = 1, F1078_7713(loc1, tr8, arg3, arg4));
			RTHOOK(10);
			Result = (EIF_REFERENCE) loc1;
		} else {
			RTHOOK(11);
			tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(arg1))-1079])(arg1));
			loc2 = tr8;
			loc2 = RTRV(eif_new_type(1080, 0x01),loc2);
			if (EIF_TEST(loc2)) {
				RTHOOK(12);
				tr8 = (nstcall = 0, F862_5678(Current, arg2));
				(nstcall = 1, F1078_7713(loc2, tr8, arg3, arg4));
				RTHOOK(13);
				Result = (EIF_REFERENCE) loc2;
			} else {
				RTHOOK(14);
				Result = (nstcall = 0, F862_5667(Current, arg1, arg2, arg3, arg4));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg4) - arg3) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("initial", EX_POST);
		RTCO(tr2);
		tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L), ti4_2));
		RTCO(tr4);
		if ((nstcall = 0, F862_5656(Current, tr8, tr3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("final", EX_POST);
		RTCO(tr5);
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)), ti4_4));
		RTCO(tr7);
		if ((nstcall = 0, F862_5656(Current, tr8, tr6))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.appended_substring_8 */
EIF_REFERENCE F862_5667 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(17);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,loc2);
	RTLR(10,Result);
	RTLR(11,loc3);
	RTLR(12,loc1);
	RTLR(13,tr8);
	RTLR(14,loc4);
	RTLR(15,loc5);
	RTLR(16,Current);
	RTLIU(17);
	
	RTEAA("appended_substring_8", 861, Current, 5, 4, 8670);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = (nstcall = 1, F1_14(arg1));
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		ti4_3 = ti4_4;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		tr7 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg2))-1079])(arg2, arg3, arg4));
		tr6 = tr7;
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(1127, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		(nstcall = 1, F1128_9111(loc2, arg2, arg3, arg4));
		RTHOOK(8);
		Result = (EIF_REFERENCE) loc2;
	} else {
		RTHOOK(9);
		loc3 = arg2;
		loc3 = RTRV(eif_new_type(1127, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(10);
			ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			tr8 = (nstcall = 1, F1128_9078(loc3, (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_4 + arg4) - arg3) + ((EIF_INTEGER_32) 1L))));
			loc1 = (EIF_REFERENCE) tr8;
			RTHOOK(11);
			(nstcall = 1, F1128_9104(RTCW(loc1), arg1));
			RTHOOK(12);
			(nstcall = 1, F1128_9111(RTCW(loc1), arg2, arg3, arg4));
			RTHOOK(13);
			Result = (EIF_REFERENCE) loc1;
		} else {
			RTHOOK(14);
			loc4 = arg1;
			loc4 = RTRV(eif_new_type(1080, 0x01),loc4);
			loc5 = arg2;
			loc5 = RTRV(eif_new_type(1078, 0x01),loc5);
			if ((EIF_BOOLEAN) (EIF_TEST(loc4) && EIF_TEST(loc5))) {
				RTHOOK(15);
				(nstcall = 1, F1081_7845(loc4, loc5, arg3, arg4));
				RTHOOK(16);
				Result = (EIF_REFERENCE) loc4;
			} else {
				RTHOOK(17);
				loc1 = RTLNS(eif_new_type(1127, 0x01).id, 1127, _OBJSIZ_1_1_0_6_0_0_0_0_);
				(nstcall = -1, F1128_9052(RTCW(loc1), arg1));
				RTHOOK(18);
				(nstcall = 1, F1128_9111(RTCW(loc1), arg2, arg3, arg4));
				RTHOOK(19);
				Result = (EIF_REFERENCE) loc1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg4) - arg3) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("initial", EX_POST);
		RTCO(tr2);
		tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L), ti4_2));
		RTCO(tr4);
		if ((nstcall = 0, F862_5656(Current, tr8, tr3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("final", EX_POST);
		RTCO(tr5);
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr8 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(Result))-1079])(Result, (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L)), ti4_4));
		RTCO(tr7);
		if ((nstcall = 0, F862_5656(Current, tr8, tr6))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.append_substring_to_string */
void F862_5668 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	RTLR(8,loc3);
	RTLR(9,tr6);
	RTLR(10,Current);
	RTLIU(11);
	
	RTEAA("append_substring_to_string", 861, Current, 3, 4, 8671);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_codes", EX_PRE);
		tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = arg3;
		tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), arg4));
		tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc2)-334])(loc2));
			if (tb2) break;
			RTHOOK(4);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc2)-334])(loc2));
			ti4_2 = ti4_1;
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg2))-1079])(arg2, ti4_2));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_NATURAL_32)) R6120[Dtype(RTCW(arg1))-1079])(arg1, tu4_1));
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc2)-334])(loc2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = (nstcall = 1, F1_14(arg1));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(tr2))-1079])(tr2));
		tr1 = tr3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg2))-1079])(arg2, arg3, arg4));
		tr5 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(tr4))-1079])(tr4));
		tr3 = tr5;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(8);
	loc3 = arg1;
	loc3 = RTRV(eif_new_type(1127, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(9);
		(nstcall = 1, F1128_9111(loc3, arg2, arg3, arg4));
	} else {
		RTHOOK(10);
		loc1 = (EIF_INTEGER_32) arg3;
		for (;;) {
			RTHOOK(11);
			if ((EIF_BOOLEAN) (loc1 > arg4)) break;
			RTHOOK(12);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg2))-1079])(arg2, loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R6206[Dtype(RTCW(arg1))-1080])(arg1, tu4_1));
			RTHOOK(13);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("appended", EX_POST);
		tr5 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(arg1))-1079])(arg1));
		RTCO(tr2);
		RTCO(tr4);
		tr6 = (nstcall = 1, F1085_8031(RTCV(tr1), tr3));
		tb1 = (nstcall = 1, F1083_7921(RTCW(tr5), tr6));
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
}

/* {KL_STRING_ROUTINES}.replaced_substring */
EIF_REFERENCE F862_5669 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,Result);
	RTLR(8,loc2);
	RTLR(9,loc1);
	RTLR(10,loc3);
	RTLR(11,loc4);
	RTLIU(12);
	
	RTEAA("replaced_substring", 861, Current, 4, 4, 8672);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg3), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L))));
		tr2 = (nstcall = 0, F862_5664(Current, tr2, arg2));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L)), ti4_1));
		tr1 = (nstcall = 0, F862_5664(Current, tr2, tr3));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	tr3 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
	tr4 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
	tb1 = (nstcall = 1, F1_7(tr3, tr4));
	if (tb1) {
		RTHOOK(7);
		Result = (nstcall = 0, F862_5670(Current, arg1, arg2, arg3, arg4));
	} else {
		RTHOOK(8);
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(1084, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(9);
			loc1 = (EIF_REFERENCE) loc2;
		} else {
			RTHOOK(10);
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(arg1))-1079])(arg1));
			loc1 = (EIF_REFERENCE) tr3;
		}
		RTHOOK(11);
		tr3 = (nstcall = 0, F862_5678(Current, arg2));
		loc3 = tr3;
		loc3 = RTRV(eif_new_type(1082, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(12);
			(nstcall = 1, F1085_7988(RTCW(loc1), loc3, arg3, arg4));
		} else {
			RTHOOK(13);
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(arg2))-1079])(arg2));
			(nstcall = 1, F1085_7988(RTCW(loc1), tr3, arg3, arg4));
		}
		RTHOOK(14);
		loc4 = loc1;
		loc4 = RTRV(eif_new_type(1080, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(15);
			Result = (EIF_REFERENCE) loc4;
		} else {
			RTHOOK(16);
			Result = (nstcall = 0, F862_5670(Current, arg1, arg2, arg3, arg4));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("replaced_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("replaced", EX_POST);
		RTCO(tr2);
		if ((nstcall = 0, F862_5656(Current, Result, tr1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.replaced_substring_8 */
EIF_REFERENCE F862_5670 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLR(5,tr3);
	RTLR(6,loc1);
	RTLR(7,Result);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,tr4);
	RTLIU(11);
	
	RTEAA("replaced_substring_8", 861, Current, 3, 4, 8673);
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
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg3), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L))));
		tr2 = (nstcall = 0, F862_5665(Current, tr2, arg2));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L)), ti4_1));
		tr1 = (nstcall = 0, F862_5665(Current, tr2, tr3));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(7);
		(nstcall = 1, F1128_9126(loc1, arg2, arg3, arg4));
		RTHOOK(8);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(9);
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(1080, 0x01),loc2);
		loc3 = arg2;
		loc3 = RTRV(eif_new_type(1078, 0x01),loc3);
		if ((EIF_BOOLEAN) (EIF_TEST(loc2) && EIF_TEST(loc3))) {
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6281[Dtype(loc2)-1080])(loc2, loc3, arg3, arg4));
			RTHOOK(11);
			Result = (EIF_REFERENCE) loc2;
		} else {
			RTHOOK(12);
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L))));
			tr3 = (nstcall = 0, F862_5665(Current, tr3, arg2));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L)), ti4_1));
			Result = (nstcall = 0, F862_5665(Current, tr3, tr4));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("replaced_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("replaced", EX_POST);
		RTCO(tr2);
		if ((nstcall = 0, F862_5656(Current, Result, tr1))) {
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

/* {KL_STRING_ROUTINES}.replaced_all_substrings */
EIF_REFERENCE F862_5671 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
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
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc6);
	RTLR(5,Result);
	RTLR(6,tr1);
	RTLR(7,loc7);
	RTLR(8,tr2);
	RTLR(9,loc8);
	RTLR(10,loc5);
	RTLIU(11);
	
	RTEAA("replaced_all_substrings", 861, Current, 8, 3, 8674);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	loc4 = (nstcall = 0, F862_5651(Current, arg1, arg2, loc3));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		loc6 = arg1;
		loc6 = RTRV(eif_new_type(1080, 0x01),loc6);
		if (EIF_TEST(loc6)) {
			RTHOOK(10);
			Result = (nstcall = 0, F862_5645(Current, loc6, loc1));
		} else {
			RTHOOK(11);
			Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F1079_7731(RTCW(Result), loc1));
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tr1 = (nstcall = 0, F862_5666(Current, Result, arg1, loc3, (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L))));
			Result = (EIF_REFERENCE) tr1;
			RTHOOK(14);
			tr1 = (nstcall = 0, F862_5664(Current, Result, arg3));
			Result = (EIF_REFERENCE) tr1;
			RTHOOK(15);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc2);
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc3 > loc1)) {
				RTHOOK(17);
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(18);
				loc4 = (nstcall = 0, F862_5651(Current, arg1, arg2, loc3));
			}
		}
		RTHOOK(19);
		tr1 = (nstcall = 0, F862_5666(Current, Result, arg1, loc3, loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		
		RTHOOK(20);
		loc7 = arg1;
		loc7 = RTRV(eif_new_type(1080, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			RTHOOK(21);
			Result = (EIF_REFERENCE) loc7;
		} else {
			RTHOOK(22);
			tb1 = '\0';
			tr1 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
			tr2 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
			tb2 = (nstcall = 1, F1_7(tr1, tr2));
			if ((EIF_BOOLEAN) !tb2) {
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(arg1))-1079])(arg1));
				loc8 = tr1;
				loc8 = RTRV(eif_new_type(1080, 0x01),loc8);
				tb1 = EIF_TEST(loc8);
			}
			if (tb1) {
				RTHOOK(23);
				Result = (EIF_REFERENCE) loc8;
			} else {
				RTHOOK(24);
				loc5 = RTLNS(eif_new_type(1127, 0x01).id, 1127, _OBJSIZ_1_1_0_6_0_0_0_0_);
				(nstcall = -1, F1128_9052(RTCW(loc5), arg1));
				RTHOOK(25);
				Result = (EIF_REFERENCE) loc5;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("replaced_all_substrings_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.replaced_all_substrings_8 */
EIF_REFERENCE F862_5672 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc5);
	RTLR(5,Result);
	RTLR(6,tr1);
	RTLR(7,loc6);
	RTLIU(8);
	
	RTEAA("replaced_all_substrings_8", 861, Current, 6, 3, 8675);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	loc4 = (nstcall = 0, F862_5651(Current, arg1, arg2, loc3));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		loc5 = arg1;
		loc5 = RTRV(eif_new_type(1080, 0x01),loc5);
		if (EIF_TEST(loc5)) {
			RTHOOK(10);
			Result = (nstcall = 0, F862_5646(Current, loc5, loc1));
		} else {
			RTHOOK(11);
			Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F1079_7731(RTCW(Result), loc1));
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			tr1 = (nstcall = 0, F862_5667(Current, Result, arg1, loc3, (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L))));
			Result = (EIF_REFERENCE) tr1;
			RTHOOK(14);
			tr1 = (nstcall = 0, F862_5665(Current, Result, arg3));
			Result = (EIF_REFERENCE) tr1;
			RTHOOK(15);
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc2);
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc3 > loc1)) {
				RTHOOK(17);
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(18);
				loc4 = (nstcall = 0, F862_5651(Current, arg1, arg2, loc3));
			}
		}
		RTHOOK(19);
		tr1 = (nstcall = 0, F862_5667(Current, Result, arg1, loc3, loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		
		RTHOOK(20);
		loc6 = arg1;
		loc6 = RTRV(eif_new_type(1080, 0x01),loc6);
		if (EIF_TEST(loc6)) {
			RTHOOK(21);
			Result = (EIF_REFERENCE) loc6;
		} else {
			RTHOOK(22);
			Result = RTLNS(eif_new_type(1127, 0x01).id, 1127, _OBJSIZ_1_1_0_6_0_0_0_0_);
			(nstcall = -1, F1128_9052(RTCW(Result), arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("replaced_all_substrings_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.replaced_first_substring */
EIF_REFERENCE F862_5673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
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
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc5);
	RTLR(5,Result);
	RTLR(6,tr1);
	RTLR(7,loc6);
	RTLR(8,tr2);
	RTLR(9,loc7);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("replaced_first_substring", 861, Current, 7, 3, 8676);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc3 = (nstcall = 0, F862_5651(Current, arg1, arg2, ((EIF_INTEGER_32) 1L)));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		loc5 = arg1;
		loc5 = RTRV(eif_new_type(1080, 0x01),loc5);
		if (EIF_TEST(loc5)) {
			RTHOOK(9);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg3))-1079])(arg3));
			Result = (nstcall = 0, F862_5645(Current, loc5, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) + ti4_1)));
		} else {
			RTHOOK(10);
			Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg3))-1079])(arg3));
			(nstcall = -1, F1079_7731(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) + ti4_1)));
		}
		RTHOOK(11);
		tr1 = (nstcall = 0, F862_5666(Current, Result, arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		tr1 = (nstcall = 0, F862_5664(Current, Result, arg3));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(13);
		tr1 = (nstcall = 0, F862_5666(Current, Result, arg1, (EIF_INTEGER_32) (loc3 + loc2), loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		
		RTHOOK(14);
		loc6 = arg1;
		loc6 = RTRV(eif_new_type(1080, 0x01),loc6);
		if (EIF_TEST(loc6)) {
			RTHOOK(15);
			Result = (EIF_REFERENCE) loc6;
		} else {
			RTHOOK(16);
			tb1 = '\0';
			tr1 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
			tr2 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
			tb2 = (nstcall = 1, F1_7(tr1, tr2));
			if ((EIF_BOOLEAN) !tb2) {
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6167[Dtype(RTCW(arg1))-1079])(arg1));
				loc7 = tr1;
				loc7 = RTRV(eif_new_type(1080, 0x01),loc7);
				tb1 = EIF_TEST(loc7);
			}
			if (tb1) {
				RTHOOK(17);
				Result = (EIF_REFERENCE) loc7;
			} else {
				RTHOOK(18);
				loc4 = RTLNS(eif_new_type(1127, 0x01).id, 1127, _OBJSIZ_1_1_0_6_0_0_0_0_);
				(nstcall = -1, F1128_9052(RTCW(loc4), arg1));
				RTHOOK(19);
				Result = (EIF_REFERENCE) loc4;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("replaced_first_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.replaced_first_substring_8 */
EIF_REFERENCE F862_5674 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,Result);
	RTLR(6,tr1);
	RTLR(7,loc5);
	RTLIU(8);
	
	RTEAA("replaced_first_substring_8", 861, Current, 5, 3, 8677);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc3 = (nstcall = 0, F862_5651(Current, arg1, arg2, ((EIF_INTEGER_32) 1L)));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		loc4 = arg1;
		loc4 = RTRV(eif_new_type(1080, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(9);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg3))-1079])(arg3));
			Result = (nstcall = 0, F862_5646(Current, loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) + ti4_1)));
		} else {
			RTHOOK(10);
			Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg3))-1079])(arg3));
			(nstcall = -1, F1079_7731(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) + ti4_1)));
		}
		RTHOOK(11);
		tr1 = (nstcall = 0, F862_5667(Current, Result, arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		tr1 = (nstcall = 0, F862_5665(Current, Result, arg3));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(13);
		tr1 = (nstcall = 0, F862_5667(Current, Result, arg1, (EIF_INTEGER_32) (loc3 + loc2), loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		
		RTHOOK(14);
		loc5 = arg1;
		loc5 = RTRV(eif_new_type(1080, 0x01),loc5);
		if (EIF_TEST(loc5)) {
			RTHOOK(15);
			Result = (EIF_REFERENCE) loc5;
		} else {
			RTHOOK(16);
			Result = RTLNS(eif_new_type(1127, 0x01).id, 1127, _OBJSIZ_1_1_0_6_0_0_0_0_);
			(nstcall = -1, F1128_9052(RTCW(Result), arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("replaced_first_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {KL_STRING_ROUTINES}.as_readable_string_8_no_uc_string */
EIF_REFERENCE F862_5675 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("as_readable_string_8_no_uc_string", 861, Current, 2, 1, 8678);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1128_9149(loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		Result = (EIF_REFERENCE) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("as_readable_string_8_no_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("aliasing", EX_POST);
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(1127, 0x01),loc2);
		if ((!((EIF_BOOLEAN) !EIF_TEST(loc2)) || ((EIF_BOOLEAN)(Result == arg1)))) {
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

/* {KL_STRING_ROUTINES}.as_string_8_no_uc_string */
EIF_REFERENCE F862_5676 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("as_string_8_no_uc_string", 861, Current, 2, 1, 8679);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1128_9149(loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		Result = (EIF_REFERENCE) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("as_string_8_no_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("aliasing", EX_POST);
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(1127, 0x01),loc2);
		if ((!((EIF_BOOLEAN) !EIF_TEST(loc2)) || ((EIF_BOOLEAN)(Result == arg1)))) {
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

/* {KL_STRING_ROUTINES}.as_string_no_uc_string */
EIF_REFERENCE F862_5677 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("as_string_no_uc_string", 861, Current, 3, 1, 8680);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tb1 = '\0';
		tr1 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
		tr2 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
		tb2 = (nstcall = 1, F1_7(tr1, tr2));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = (nstcall = 1, F1128_9148(loc1));
			loc2 = tr1;
			loc2 = RTRV(eif_new_type(1080, 0x01),loc2);
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			RTHOOK(4);
			Result = (EIF_REFERENCE) loc2;
		} else {
			RTHOOK(5);
			tr1 = (nstcall = 1, F1128_9149(loc1));
			Result = (EIF_REFERENCE) tr1;
		}
	} else {
		RTHOOK(6);
		Result = (EIF_REFERENCE) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("as_string_no_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("aliasing", EX_POST);
		loc3 = arg1;
		loc3 = RTRV(eif_new_type(1127, 0x01),loc3);
		if ((!((EIF_BOOLEAN) !EIF_TEST(loc3)) || ((EIF_BOOLEAN)(Result == arg1)))) {
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
	return Result;
}

/* {KL_STRING_ROUTINES}.as_readable_string_general_no_uc_string */
EIF_REFERENCE F862_5678 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("as_readable_string_general_no_uc_string", 861, Current, 2, 1, 8681);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1127, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = RTOUCR(436,(nstcall = 0, F862_5687), (Current));
		tr2 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
		tb1 = (nstcall = 1, F1_7(tr1, tr2));
		if (tb1) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F1128_9149(loc1));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(5);
			tr1 = (nstcall = 1, F1128_9148(loc1));
			Result = (EIF_REFERENCE) tr1;
		}
	} else {
		RTHOOK(6);
		Result = (EIF_REFERENCE) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("as_readable_string_general_no_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("aliasing", EX_POST);
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(1127, 0x01),loc2);
		if ((!((EIF_BOOLEAN) !EIF_TEST(loc2)) || ((EIF_BOOLEAN)(Result == arg1)))) {
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
	return Result;
}

/* {KL_STRING_ROUTINES}.as_string */
EIF_REFERENCE F862_5679 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("as_string", 861, Current, 2, 1, 8682);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1080, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = RTOUCR(437,(nstcall = 0, F862_5688), (Current));
		tb2 = (nstcall = 1, F1_7(arg1, tr1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(4);
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(1127, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			tr1 = (nstcall = 1, F1128_9149(loc2));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(6);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6249[Dtype(RTCW(arg1))-1079])(arg1));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("as_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(Result, tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("aliasing", EX_POST);
		tb1 = '\01';
		tr1 = RTMS_EX_H("",0,0);
		tb2 = (nstcall = 1, F1_7(arg1, tr1));
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(Result == arg1);
		}
		if (tb1) {
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

/* {KL_STRING_ROUTINES}.hexadecimal_to_integer */
EIF_INTEGER_32 F862_5680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("hexadecimal_to_integer", 861, Current, 2, 1, 8630);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("hexadecimal", EX_PRE);
		RTTE((nstcall = 0, F862_5643(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		Result *= ((EIF_INTEGER_32) 16L);
		RTHOOK(7);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
		switch (tw1) {
			case (EIF_CHARACTER_8) '0':
				break;
			case (EIF_CHARACTER_8) '1':
				RTHOOK(8);
				Result++;
				break;
			case (EIF_CHARACTER_8) '2':
				RTHOOK(9);
				Result += ((EIF_INTEGER_32) 2L);
				break;
			case (EIF_CHARACTER_8) '3':
				RTHOOK(10);
				Result += ((EIF_INTEGER_32) 3L);
				break;
			case (EIF_CHARACTER_8) '4':
				RTHOOK(11);
				Result += ((EIF_INTEGER_32) 4L);
				break;
			case (EIF_CHARACTER_8) '5':
				RTHOOK(12);
				Result += ((EIF_INTEGER_32) 5L);
				break;
			case (EIF_CHARACTER_8) '6':
				RTHOOK(13);
				Result += ((EIF_INTEGER_32) 6L);
				break;
			case (EIF_CHARACTER_8) '7':
				RTHOOK(14);
				Result += ((EIF_INTEGER_32) 7L);
				break;
			case (EIF_CHARACTER_8) '8':
				RTHOOK(15);
				Result += ((EIF_INTEGER_32) 8L);
				break;
			case (EIF_CHARACTER_8) '9':
				RTHOOK(16);
				Result += ((EIF_INTEGER_32) 9L);
				break;
			case (EIF_CHARACTER_8) 'A':
			case (EIF_CHARACTER_8) 'a':
				RTHOOK(17);
				Result += ((EIF_INTEGER_32) 10L);
				break;
			case (EIF_CHARACTER_8) 'B':
			case (EIF_CHARACTER_8) 'b':
				RTHOOK(18);
				Result += ((EIF_INTEGER_32) 11L);
				break;
			case (EIF_CHARACTER_8) 'C':
			case (EIF_CHARACTER_8) 'c':
				RTHOOK(19);
				Result += ((EIF_INTEGER_32) 12L);
				break;
			case (EIF_CHARACTER_8) 'D':
			case (EIF_CHARACTER_8) 'd':
				RTHOOK(20);
				Result += ((EIF_INTEGER_32) 13L);
				break;
			case (EIF_CHARACTER_8) 'E':
			case (EIF_CHARACTER_8) 'e':
				RTHOOK(21);
				Result += ((EIF_INTEGER_32) 14L);
				break;
			case (EIF_CHARACTER_8) 'F':
			case (EIF_CHARACTER_8) 'f':
				RTHOOK(22);
				Result += ((EIF_INTEGER_32) 15L);
				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(23);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.to_integer_64 */
EIF_INTEGER_64 F862_5681 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("to_integer_64", 861, Current, 0, 1, 8631);
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
		RTCT("integer_64_string", EX_PRE);
		RTTE((nstcall = 0, F862_5642(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti8_1 = (nstcall = 1, F1076_7668(RTCW(arg1)));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_STRING_ROUTINES}.left_adjust */
void F862_5682 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("left_adjust", 861, Current, 2, 1, 8632);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
		switch (tw1) {
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				RTHOOK(6);
				loc1++;
				break;
			default:
				RTHOOK(7);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				break;
		}
	}
	RTHOOK(8);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R6231[Dtype(RTCW(arg1))-1080])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("left_adjusted", EX_POST);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L)));
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
			if ((EIF_BOOLEAN)(tw1 != tw2)) {
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L)));
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
				tb4 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb4) {
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L)));
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				tb3 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb3) {
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L)));
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				tb2 = (EIF_BOOLEAN)(tw1 != tw2);
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
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {KL_STRING_ROUTINES}.right_adjust */
void F862_5683 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("right_adjust", 861, Current, 2, 1, 8633);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc2));
		switch (tw1) {
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				RTHOOK(6);
				loc2--;
				break;
			default:
				RTHOOK(7);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				break;
		}
	}
	RTHOOK(8);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R6225[Dtype(RTCW(arg1))-1080])(arg1, loc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("right_adjusted", EX_POST);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ti4_1));
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
			if ((EIF_BOOLEAN)(tw1 != tw2)) {
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ti4_1));
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
				tb4 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb4) {
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ti4_1));
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				tb3 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb3) {
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ti4_1));
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				tb2 = (EIF_BOOLEAN)(tw1 != tw2);
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
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {KL_STRING_ROUTINES}.wipe_out */
void F862_5684 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("wipe_out", 861, Current, 0, 1, 8634);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R6225[Dtype(RTCW(arg1))-1080])(arg1, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("wiped_out", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* {KL_STRING_ROUTINES}.prune_all_trailing */
void F862_5685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_CHARACTER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("prune_all_trailing", 861, Current, 0, 2, 8635);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		if (!tb2) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ti4_1));
			tb1 = (EIF_BOOLEAN)(tw1 != arg2);
		}
		if (tb1) break;
		RTHOOK(3);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R6233[Dtype(RTCW(arg1))-1080])(arg1, ((EIF_INTEGER_32) 1L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_more_trailing", EX_POST);
		tb2 = '\01';
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		if (!tb3) {
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, ti4_1));
			tb2 = (EIF_BOOLEAN)(tw1 != arg2);
		}
		if (tb2) {
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

/* {KL_STRING_ROUTINES}.resize_buffer */
void F862_5686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("resize_buffer", 861, Current, 1, 2, 8636);
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
		RTHOOK(3);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (arg2 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ti4_1);
	RTHOOK(5);
	(nstcall = 1, F1081_7876(RTCW(arg1), arg2));
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '#'));
		RTHOOK(8);
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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

/* {KL_STRING_ROUTINES}.dummy_string */

EIF_REFERENCE F862_5687 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (436,RTMS_EX_H("",0,0));
}

/* {KL_STRING_ROUTINES}.dummy_string_8 */

EIF_REFERENCE F862_5688 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (437,RTMS_EX_H("",0,0));
}

/* {KL_STRING_ROUTINES}.max_integer_64_digits */
static EIF_REFERENCE F862_5689_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(435)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("max_integer_64_digits", 861, Current, 0, 0, 8639);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {912,1029,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 19L),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 19L;
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
	*((EIF_CHARACTER_32 *)tr2+0) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+1) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+2) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+3) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+4) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+5) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+6) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	*((EIF_CHARACTER_32 *)tr2+7) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+8) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '6';
	*((EIF_CHARACTER_32 *)tr2+9) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+10) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '5';
	*((EIF_CHARACTER_32 *)tr2+11) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '4';
	*((EIF_CHARACTER_32 *)tr2+12) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+13) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+14) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '5';
	*((EIF_CHARACTER_32 *)tr2+15) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+16) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	*((EIF_CHARACTER_32 *)tr2+17) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+18) = (EIF_CHARACTER_32) tw1;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F913_6145)(tr2);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("ninteen_digits", EX_POST);
		ti4_1 = (nstcall = 1, F792_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 19L))) {
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

EIF_REFERENCE F862_5689 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(435,F862_5689_body,(Current));
}

/* {KL_STRING_ROUTINES}.min_negative_integer_64_digits */
static EIF_REFERENCE F862_5690_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(434)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("min_negative_integer_64_digits", 861, Current, 0, 0, 8640);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {912,1029,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 19L),sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 19L;
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
	*((EIF_CHARACTER_32 *)tr2+0) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+1) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+2) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+3) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+4) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+5) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+6) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	*((EIF_CHARACTER_32 *)tr2+7) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+8) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '6';
	*((EIF_CHARACTER_32 *)tr2+9) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+10) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '5';
	*((EIF_CHARACTER_32 *)tr2+11) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '4';
	*((EIF_CHARACTER_32 *)tr2+12) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+13) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+14) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '5';
	*((EIF_CHARACTER_32 *)tr2+15) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+16) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	*((EIF_CHARACTER_32 *)tr2+17) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+18) = (EIF_CHARACTER_32) tw1;
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F913_6145)(tr2);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("ninteen_digits", EX_POST);
		ti4_1 = (nstcall = 1, F792_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 19L))) {
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

EIF_REFERENCE F862_5690 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(434,F862_5690_body,(Current));
}

void EIF_Minit290 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
