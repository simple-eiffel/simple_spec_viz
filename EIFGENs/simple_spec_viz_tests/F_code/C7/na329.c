/*
 * Code for class NATURAL_16_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na329.h"
#include <math.h>
#include "eif_helpers.h"
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

/* {NATURAL_16_REF}.item */
EIF_NATURAL_16 F1016_7083 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
}


/* {NATURAL_16_REF}.hash_code */
EIF_INTEGER_32 F1016_7084 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 1015, Current, 0, 0, 13913);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {NATURAL_16_REF}.sign */
EIF_INTEGER_32 F1016_7085 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("sign", 1015, Current, 0, 0, 13914);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) > (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("three_way", EX_POST);
		tr1 = (nstcall = 0, F1016_7087(Current));
		tr2 = RTCCL(tr1);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, F259_3267(Current, tr2)))) {
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
	return Result;
}

/* {NATURAL_16_REF}.one */
EIF_REFERENCE F1016_7086 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("one", 1015, Current, 0, 0, 13915);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F1016_7093(RTCW(Result), (EIF_NATURAL_16) ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {NATURAL_16_REF}.zero */
EIF_REFERENCE F1016_7087 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("zero", 1015, Current, 0, 0, 13916);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F1016_7093(RTCW(Result), (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {NATURAL_16_REF}.ascii_char */
EIF_CHARACTER_8 F1016_7088 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("ascii_char", 1015, Current, 0, 0, 13917);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character_code", EX_PRE);
		RTTE((nstcall = 0, F1016_7098(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tc1 = (EIF_CHARACTER_8) tu2_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.is_less */
EIF_BOOLEAN F1016_7091 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_less", 1015, Current, 0, 1, 13920);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tu2_1 < tu2_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2903[Dtype(RTCW(arg1))-253])(arg1, tr1));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.is_equal */
EIF_BOOLEAN F1016_7092 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_equal", 1015, Current, 0, 1, 13921);
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
	tu2_1 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 == tu2_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, F1_9(Current, tr1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tr1 = RTCCL(arg1);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2903[Dtype(Current)-253])(Current, tr1));
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = RTCCL(Current);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2903[Dtype(RTCW(arg1))-253])(arg1, tr1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {NATURAL_16_REF}.set_item */
void F1016_7093 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_item", 1015, Current, 0, 1, 13922);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) = (EIF_NATURAL_16) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) == arg1)) {
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

/* {NATURAL_16_REF}.divisible */
EIF_BOOLEAN F1016_7094 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("divisible", 1015, Current, 0, 1, 13923);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value", EX_POST);
		tu2_1 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L)))) {
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
	return Result;
}

/* {NATURAL_16_REF}.exponentiable */
EIF_BOOLEAN F1016_7095 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("exponentiable", 1015, Current, 3, 1, 13924);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(1000, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		Result = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		if (!(EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			Result = (EIF_BOOLEAN)(*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
		}
	} else {
		RTHOOK(4);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(1021, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			Result = '\01';
			tr4_1 = *(EIF_REAL_32 *)(loc2+ _R32OFF_0_0_0_0_0_);
			if (!((EIF_BOOLEAN) eif_is_greater_equal_real_32 (tr4_1, (EIF_REAL_32) (EIF_REAL_64) 0.0))) {
				Result = (EIF_BOOLEAN)(*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
			}
		} else {
			RTHOOK(6);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(1024, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				RTHOOK(7);
				Result = '\01';
				tr8_1 = *(EIF_REAL_64 *)(loc3+ _R64OFF_0_0_0_0_0_0_0_0_);
				if (!(EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
					Result = (EIF_BOOLEAN)(*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("safe_values", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		tr1 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
		tb4 = (nstcall = 1, F1_6(arg1, tr1));
		if (tb4) {
			tb3 = (EIF_BOOLEAN)(*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
		}
		if (!tb3) {
			tb3 = '\0';
			tr1 = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) 0.0;
			tb4 = (nstcall = 1, F1_6(arg1, tr1));
			if (tb4) {
				tb3 = (EIF_BOOLEAN) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) > (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
			}
			tb2 = tb3;
		}
		if (tb2) {
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
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.is_hashable */
EIF_BOOLEAN F1016_7096 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_hashable", 1015, Current, 0, 0, 13925);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.is_valid_character_code */
EIF_BOOLEAN F1016_7097 (EIF_REFERENCE Current)
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
	
	RTEAA("is_valid_character_code", 1015, Current, 0, 0, 13926);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1016_7098(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.is_valid_character_8_code */
EIF_BOOLEAN F1016_7098 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_valid_character_8_code", 1015, Current, 0, 0, 13927);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 255L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
			ti4_1 = (EIF_INTEGER_32) tu2_1;
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 255L));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {NATURAL_16_REF}.is_valid_character_32_code */
EIF_BOOLEAN F1016_7099 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_valid_character_32_code", 1015, Current, 0, 0, 13928);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		if ((EIF_BOOLEAN) (tu4_1 >= ((EIF_NATURAL_32) 0U))) {
			tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
			tu4_1 = (EIF_NATURAL_32) tu2_1;
			tb1 = (EIF_BOOLEAN) (tu4_1 <= ((EIF_NATURAL_32) 4294967295U));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {NATURAL_16_REF}.plus */
EIF_REFERENCE F1016_7100 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("plus", 1015, Current, 0, 1, 13929);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F1016_7093(RTCW(Result), (EIF_NATURAL_16) (tu2_1 + tu2_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("commutative", EX_POST);
		tr1 = RTCCL(Current);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R5223[Dtype(RTCW(arg1))-997])(arg1, tr1));
		if (RTEQ(Result, tr1)) {
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

/* {NATURAL_16_REF}.minus */
EIF_REFERENCE F1016_7101 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("minus", 1015, Current, 0, 1, 13930);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F1016_7093(RTCW(Result), (EIF_NATURAL_16) (tu2_1 - tu2_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {NATURAL_16_REF}.product */
EIF_REFERENCE F1016_7102 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("product", 1015, Current, 0, 1, 13931);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F1016_7093(RTCW(Result), (EIF_NATURAL_16) (tu2_1 * tu2_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {NATURAL_16_REF}.quotient */
EIF_REAL_64 F1016_7103 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("quotient", 1015, Current, 0, 1, 13932);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F1016_7094(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tu2_1) /  (EIF_REAL_64) (tu2_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.identity */
EIF_REFERENCE F1016_7104 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("identity", 1015, Current, 0, 0, 13933);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	(nstcall = 1, F1016_7093(RTCW(Result), (EIF_NATURAL_16) *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {NATURAL_16_REF}.unapplicable_opposite */
EIF_REFERENCE F1016_7105 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("unapplicable_opposite", 1015, Current, 0, 0, 13934);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("not_applicable", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.integer_quotient */
EIF_REFERENCE F1016_7106 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("integer_quotient", 1015, Current, 0, 1, 13935);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F1016_7094(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F1016_7093(RTCW(Result), (EIF_NATURAL_16) (tu2_1 / tu2_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
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

/* {NATURAL_16_REF}.integer_remainder */
EIF_REFERENCE F1016_7107 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("integer_remainder", 1015, Current, 0, 1, 13936);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F1016_7094(Current, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 1, F1016_7093(RTCW(Result), (EIF_NATURAL_16) (tu2_1 % tu2_2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
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

/* {NATURAL_16_REF}.power */
EIF_REAL_64 F1016_7108 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("power", 1015, Current, 0, 1, 13937);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (tu2_1), (EIF_REAL_64) (arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.interval */
EIF_REFERENCE F1016_7109 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("interval", 1015, Current, 0, 1, 13938);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(776, 0x01).id, 776, _OBJSIZ_0_1_0_2_0_0_0_0_);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	(nstcall = -1, F777_5390(RTCW(Result), ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.make_from_reference */
void F1016_7110 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_reference", 1015, Current, 0, 1, 13939);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	(nstcall = 0, F1016_7093(Current, tu2_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		tu2_1 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) == tu2_1)) {
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

/* {NATURAL_16_REF}.to_reference */
EIF_REFERENCE F1016_7111 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("to_reference", 1015, Current, 0, 0, 13940);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1015, 0x01).id, 1015, _OBJSIZ_0_0_1_0_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F1016_7093(RTCW(Result), *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {NATURAL_16_REF}.to_boolean */
EIF_BOOLEAN F1016_7112 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_boolean", 1015, Current, 0, 0, 13941);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_1 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_8 */
EIF_NATURAL_8 F1016_7113 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_8", 1015, Current, 0, 0, 13942);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu1_1 = (EIF_NATURAL_8) tu2_1;
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_16 */
EIF_NATURAL_16 F1016_7114 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_16", 1015, Current, 0, 0, 13943);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = (EIF_NATURAL_16) tu2_1;
	Result = (EIF_NATURAL_16) tu2_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_32 */
EIF_NATURAL_32 F1016_7115 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_32", 1015, Current, 0, 0, 13944);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu4_1 = (EIF_NATURAL_32) tu2_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.as_natural_64 */
EIF_NATURAL_64 F1016_7116 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_64", 1015, Current, 0, 0, 13945);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu8_1 = (EIF_NATURAL_64) tu2_1;
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.as_integer_8 */
EIF_INTEGER_8 F1016_7117 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_8", 1015, Current, 0, 0, 13946);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti1_1 = (EIF_INTEGER_8) tu2_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.as_integer_16 */
EIF_INTEGER_16 F1016_7118 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_16", 1015, Current, 0, 0, 13947);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.as_integer_32 */
EIF_INTEGER_32 F1016_7119 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_32", 1015, Current, 0, 0, 13948);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.as_integer_64 */
EIF_INTEGER_64 F1016_7120 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_64", 1015, Current, 0, 0, 13949);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti8_1 = (EIF_INTEGER_64) tu2_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_natural_8 */
EIF_NATURAL_8 F1016_7121 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_8", 1015, Current, 0, 0, 13950);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_big", EX_PRE);
		tu2_1 = (EIF_NATURAL_16) ((EIF_NATURAL_8) 255U);
		RTTE((EIF_BOOLEAN) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) <= tu2_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_8, (EIF_REFERENCE)) R5792[dtype-1015])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_natural_16 */
EIF_NATURAL_16 F1016_7122 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_16", 1015, Current, 0, 0, 13951);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_natural_32 */
EIF_NATURAL_32 F1016_7123 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_32", 1015, Current, 0, 0, 13952);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE)) R5794[dtype-1015])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_natural_64 */
EIF_NATURAL_64 F1016_7124 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_natural_64", 1015, Current, 0, 0, 13953);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_NATURAL_64, (EIF_REFERENCE)) R5795[dtype-1015])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_integer_8 */
EIF_INTEGER_8 F1016_7125 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_8", 1015, Current, 0, 0, 13954);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_big", EX_PRE);
		tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_8) 127L);
		RTTE((EIF_BOOLEAN) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) <= tu2_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_8, (EIF_REFERENCE)) R5796[dtype-1015])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_integer_16 */
EIF_INTEGER_16 F1016_7126 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_16", 1015, Current, 0, 0, 13955);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_big", EX_PRE);
		tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_16) 32767L);
		RTTE((EIF_BOOLEAN) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) <= tu2_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_16, (EIF_REFERENCE)) R5797[dtype-1015])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_integer_32 */
EIF_INTEGER_32 F1016_7127 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_32", 1015, Current, 0, 0, 13956);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5798[dtype-1015])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_integer_64 */
EIF_INTEGER_64 F1016_7128 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_integer_64", 1015, Current, 0, 0, 13957);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_64, (EIF_REFERENCE)) R5799[dtype-1015])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_real_32 */
EIF_REAL_32 F1016_7129 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 tr4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_real_32", 1015, Current, 0, 0, 13958);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tr4_1 = (EIF_REAL_32) (tu2_1);
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_real_64 */
EIF_REAL_64 F1016_7130 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_NATURAL_16 tu2_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_real_64", 1015, Current, 0, 0, 13959);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tr8_1 = (EIF_REAL_64) (tu2_1);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_binary_string */
EIF_REFERENCE F1016_7131 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("to_binary_string", 1015, Current, 3, 0, 13960);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7732(RTCW(Result), (EIF_CHARACTER_8) '0', loc1));
	RTHOOK(3);
	loc2 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		tu2_1 = eif_bit_and(loc2,(EIF_NATURAL_16) ((EIF_INTEGER_32) 1L));
		tr1 = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)tr1 = tu2_1;
		tc1 = (nstcall = 1, F1016_7132(RTCW(tr1)));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(Result))-776])(Result, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc1));
		RTHOOK(6);
		tu2_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 1L));
		loc2 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(7);
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("binary", EX_POST);
		tr1 = (nstcall = 1, F1079_7751(RTCW(Result)));
		loc3 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, F426_4812(loc3));
			if (tb2) break;
			RTHOOK(11);
			tr1 = RTMS_EX_H("01",2,12337);
			tc1 = (nstcall = 1, F426_4803(loc3));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4370[Dtype(tr1)-663])(tr1, (EIF_REFERENCE) &tc1));
			tb1 = tb3;
			(nstcall = 1, F426_4818(loc3));
		}
		if (tb1) {
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

/* {NATURAL_16_REF}.to_binary_character */
EIF_CHARACTER_8 F1016_7132 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_binary_character", 1015, Current, 0, 0, 13961);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tb1 = (EIF_BOOLEAN) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) <= (EIF_NATURAL_16) ((EIF_INTEGER_32) 1L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) '0') + ti4_1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("01",2,12337);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4370[Dtype(tr1)-663])(tr1, (EIF_REFERENCE) &Result));
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
	return Result;
}

/* {NATURAL_16_REF}.to_octal_string */
EIF_REFERENCE F1016_7133 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("to_octal_string", 1015, Current, 3, 0, 13962);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr8_1 = (EIF_REAL_64) ceil ((double)(EIF_REAL_64) ((EIF_REAL_64) (((EIF_INTEGER_32) 16L)) /  (EIF_REAL_64) (((EIF_INTEGER_32) 3L))));
	ti4_1 = (EIF_INTEGER_32) tr8_1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7732(RTCW(Result), (EIF_CHARACTER_8) '0', loc1));
	RTHOOK(3);
	loc2 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		tu2_1 = eif_bit_and(loc2,(EIF_NATURAL_16) ((EIF_INTEGER_32) 7L));
		tr1 = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)tr1 = tu2_1;
		tc1 = (nstcall = 1, F1016_7134(RTCW(tr1)));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(Result))-776])(Result, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc1));
		RTHOOK(6);
		tu2_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 3L));
		loc2 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(7);
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		tr8_1 = (EIF_REAL_64) ceil ((double)(EIF_REAL_64) ((EIF_REAL_64) (((EIF_INTEGER_32) 16L)) /  (EIF_REAL_64) (((EIF_INTEGER_32) 3L))));
		ti4_2 = (EIF_INTEGER_32) tr8_1;
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("octal", EX_POST);
		tr1 = (nstcall = 1, F1079_7751(RTCW(Result)));
		loc3 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, F426_4812(loc3));
			if (tb2) break;
			RTHOOK(11);
			tr1 = RTMS_EX_H("01234567",8,2025887031);
			tc1 = (nstcall = 1, F426_4803(loc3));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4370[Dtype(tr1)-663])(tr1, (EIF_REFERENCE) &tc1));
			tb1 = tb3;
			(nstcall = 1, F426_4818(loc3));
		}
		if (tb1) {
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

/* {NATURAL_16_REF}.to_octal_character */
EIF_CHARACTER_8 F1016_7134 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_octal_character", 1015, Current, 0, 0, 13963);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tb1 = (EIF_BOOLEAN) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) <= (EIF_NATURAL_16) ((EIF_INTEGER_32) 7L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) '0') + ti4_1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("01234567",8,2025887031);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4370[Dtype(tr1)-663])(tr1, (EIF_REFERENCE) &Result));
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
	return Result;
}

/* {NATURAL_16_REF}.to_hex_string */
EIF_REFERENCE F1016_7135 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("to_hex_string", 1015, Current, 3, 0, 13964);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) / ((EIF_INTEGER_32) 4L));
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7732(RTCW(Result), (EIF_CHARACTER_8) '0', loc1));
	RTHOOK(3);
	loc2 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		tu2_1 = eif_bit_and(loc2,(EIF_NATURAL_16) ((EIF_INTEGER_32) 15L));
		tr1 = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)tr1 = tu2_1;
		tc1 = (nstcall = 1, F1016_7136(RTCW(tr1)));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(Result))-776])(Result, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc1));
		RTHOOK(6);
		tu2_1 = eif_bit_shift_right(loc2,((EIF_INTEGER_32) 4L));
		loc2 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(7);
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) / ((EIF_INTEGER_32) 4L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("hexadecimal", EX_POST);
		tr1 = (nstcall = 1, F1079_7751(RTCW(Result)));
		loc3 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, F426_4812(loc3));
			if (tb2) break;
			RTHOOK(11);
			tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
			tc1 = (nstcall = 1, F426_4803(loc3));
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4370[Dtype(tr1)-663])(tr1, (EIF_REFERENCE) &tc1));
			tb1 = tb3;
			(nstcall = 1, F426_4818(loc3));
		}
		if (tb1) {
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

/* {NATURAL_16_REF}.to_hex_character */
EIF_CHARACTER_8 F1016_7136 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_hex_character", 1015, Current, 1, 0, 13965);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		tb1 = '\0';
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		ti4_1 = (EIF_INTEGER_32) tu2_1;
		if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= ti4_1)) {
			tb1 = (EIF_BOOLEAN) (*(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_) <= (EIF_NATURAL_16) ((EIF_INTEGER_32) 15L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	ti4_1 = (EIF_INTEGER_32) tu2_1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 9L))) {
		RTHOOK(4);
		tc1 = (EIF_CHARACTER_8) '0';
	} else {
		RTHOOK(5);
		tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) 'A') - ((EIF_INTEGER_32) 10L));
		tc1 = tc2;
	}
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + loc1);
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4370[Dtype(tr1)-663])(tr1, (EIF_REFERENCE) &Result));
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
	return Result;
}

/* {NATURAL_16_REF}.to_character */
EIF_CHARACTER_8 F1016_7137 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character", 1015, Current, 0, 0, 13966);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		RTTE((nstcall = 0, F1016_7098(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tc1 = (EIF_CHARACTER_8) tu2_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_character_8 */
EIF_CHARACTER_8 F1016_7138 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_8", 1015, Current, 0, 0, 13967);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		RTTE((nstcall = 0, F1016_7098(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tc1 = (EIF_CHARACTER_8) tu2_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.to_character_32 */
EIF_CHARACTER_32 F1016_7139 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_16 tu2_1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_32", 1015, Current, 0, 0, 13968);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		RTTE((nstcall = 0, F1016_7099(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tw1 = (EIF_CHARACTER_32) tu2_1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.bit_and */
EIF_REFERENCE F1016_7140 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("bit_and", 1015, Current, 0, 1, 13969);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	tu2_3 = eif_bit_and(tu2_1,tu2_2);
	(nstcall = 1, F1016_7093(RTCW(Result), tu2_3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_and_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {NATURAL_16_REF}.bit_or */
EIF_REFERENCE F1016_7141 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("bit_or", 1015, Current, 0, 1, 13970);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	tu2_3 = eif_bit_or(tu2_1,tu2_2);
	(nstcall = 1, F1016_7093(RTCW(Result), tu2_3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_or_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {NATURAL_16_REF}.bit_xor */
EIF_REFERENCE F1016_7142 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("bit_xor", 1015, Current, 0, 1, 13971);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = *(EIF_NATURAL_16 *)(RTCW(arg1)+ _I16OFF_0_0_0_);
	tu2_3 = eif_bit_xor(tu2_1,tu2_2);
	(nstcall = 1, F1016_7093(RTCW(Result), tu2_3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_xor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {NATURAL_16_REF}.bit_not */
EIF_REFERENCE F1016_7143 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("bit_not", 1015, Current, 0, 0, 13972);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(2);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = eif_bit_not(tu2_1);
	(nstcall = 1, F1016_7093(RTCW(Result), tu2_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("bit_not_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {NATURAL_16_REF}.bit_shift */
EIF_NATURAL_16 F1016_7144 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("bit_shift", 1015, Current, 0, 1, 13973);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_greater_than_minus_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) -16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5825[dtype-1015])(Current, arg1));
		tu2_1 = *(EIF_NATURAL_16 *)(RTCW(tr1)+ _I16OFF_0_0_0_);
		Result = (EIF_NATURAL_16) tu2_1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5824[dtype-1015])(Current, (EIF_INTEGER_32) -arg1));
		tu2_1 = *(EIF_NATURAL_16 *)(RTCW(tr1)+ _I16OFF_0_0_0_);
		Result = (EIF_NATURAL_16) tu2_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.bit_shift_left */
EIF_REFERENCE F1016_7145 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("bit_shift_left", 1015, Current, 0, 1, 13974);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = eif_bit_shift_left(tu2_1,arg1);
	(nstcall = 1, F1016_7093(RTCW(Result), tu2_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_left_not_void", EX_POST);
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

/* {NATURAL_16_REF}.bit_shift_right */
EIF_REFERENCE F1016_7146 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("bit_shift_right", 1015, Current, 0, 1, 13975);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F1_29(RTCW(Result)));
	RTHOOK(4);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = eif_bit_shift_right(tu2_1,arg1);
	(nstcall = 1, F1016_7093(RTCW(Result), tu2_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_right_not_void", EX_POST);
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

/* {NATURAL_16_REF}.bit_test */
EIF_BOOLEAN F1016_7147 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("bit_test", 1015, Current, 0, 1, 13976);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
	tu2_2 = eif_bit_shift_left(((EIF_NATURAL_16) 1U),arg1);
	tu2_3 = eif_bit_and(tu2_1,tu2_2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu2_3 != (EIF_NATURAL_16) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.set_bit */
EIF_NATURAL_16 F1016_7148 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_bit", 1015, Current, 0, 2, 13977);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_16", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (arg1) {
		RTHOOK(4);
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		tu2_2 = eif_bit_shift_left(((EIF_NATURAL_16) 1U),arg2);
		tu2_3 = eif_bit_or(tu2_1,tu2_2);
		Result = (EIF_NATURAL_16) tu2_3;
	} else {
		RTHOOK(5);
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		tu2_2 = eif_bit_shift_left(((EIF_NATURAL_16) 1U),arg2);
		tu2_3 = eif_bit_not(tu2_2);
		tu2_2 = eif_bit_and(tu2_1,tu2_3);
		Result = (EIF_NATURAL_16) tu2_2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.set_bit_with_mask */
EIF_NATURAL_16 F1016_7149 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_bit_with_mask", 1015, Current, 0, 2, 13978);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		tu2_2 = eif_bit_or(tu2_1,arg2);
		Result = (EIF_NATURAL_16) tu2_2;
	} else {
		RTHOOK(3);
		tu2_1 = *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_);
		tu2_2 = eif_bit_not(arg2);
		tu2_3 = eif_bit_and(tu2_1,tu2_2);
		Result = (EIF_NATURAL_16) tu2_3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16_REF}.out */
EIF_REFERENCE F1016_7150 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("out", 1015, Current, 0, 0, 13979);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(Result), ((EIF_INTEGER_32) 5L)));
	RTHOOK(2);
	(nstcall = 1, F1081_7852(RTCW(Result), *(EIF_NATURAL_16 *)(Current+ _I16OFF_0_0_0_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

void EIF_Minit329 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
