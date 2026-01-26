/*
 * Code for class UC_UNICODE_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc395.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {UC_UNICODE_ROUTINES}.valid_non_surrogate_code */
EIF_BOOLEAN F1122_8785 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("valid_non_surrogate_code", 1121, Current, 0, 1, 15708);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 55296L))) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 57343L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1114111L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UNICODE_ROUTINES}.valid_non_surrogate_natural_32_code */
EIF_BOOLEAN F1122_8786 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("valid_non_surrogate_natural_32_code", 1121, Current, 0, 1, 15709);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_NATURAL_32) 0U)) && (EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 55296U))) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_NATURAL_32) 57343U)) && (EIF_BOOLEAN) (arg1 <= ((EIF_NATURAL_32) 1114111U))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UNICODE_ROUTINES}.is_bmp_code */
EIF_BOOLEAN F1122_8787 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_bmp_code", 1121, Current, 0, 1, 15710);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 65535L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UNICODE_ROUTINES}.valid_ascii_code */
EIF_BOOLEAN F1122_8788 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("valid_ascii_code", 1121, Current, 0, 1, 15711);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 127L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 127L))))) {
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

/* {UC_UNICODE_ROUTINES}.is_ascii_string */
EIF_BOOLEAN F1122_8789 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_ascii_string", 1121, Current, 3, 1, 15712);
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
	loc3 = arg1;
	loc3 = RTRV(eif_new_type(1127, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(3);
		tb1 = (nstcall = 1, F1128_9091(loc3));
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, loc1));
			if ((EIF_BOOLEAN) (((EIF_NATURAL_32) 127U) < tu4_1)) {
				RTHOOK(9);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(10);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(11);
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UNICODE_ROUTINES}.code_to_string */
EIF_REFERENCE F1122_8790 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("code_to_string", 1121, Current, 1, 1, 15713);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_valid", EX_PRE);
		RTTE((nstcall = 0, F1103_8399(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
	ti4_1 = RTOUCB(EIF_INTEGER_32,431,(nstcall = 1, F264_3368), (RTCW(tr1)));
	if ((EIF_BOOLEAN) (arg1 <= ti4_1)) {
		RTHOOK(3);
		Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(Result), ((EIF_INTEGER_32) 1L)));
		RTHOOK(4);
		tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
		tc1 = (nstcall = 1, F350_4651(RTCW(tr1), arg1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
	} else {
		RTHOOK(5);
		loc1 = RTLNS(eif_new_type(1128, 0x01).id, 1128, _OBJSIZ_1_1_0_6_0_0_0_0_);
		(nstcall = -1, F1128_9049(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
		RTHOOK(6);
		(nstcall = 1, F1128_9106(RTCW(loc1), arg1));
		RTHOOK(7);
		Result = (EIF_REFERENCE) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("code_set", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L)));
		ti4_1 = (EIF_INTEGER_32) tu4_1;
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {UC_UNICODE_ROUTINES}.natural_32_code_to_string */
EIF_REFERENCE F1122_8791 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("natural_32_code_to_string", 1121, Current, 1, 1, 15714);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 <= ((EIF_NATURAL_32) 1114111U))) {
			ti4_1 = (EIF_INTEGER_32) arg1;
			tb1 = (nstcall = 0, F1103_8399(Current, ti4_1));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
	ti4_1 = RTOUCB(EIF_INTEGER_32,431,(nstcall = 1, F264_3368), (RTCW(tr1)));
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
		RTHOOK(3);
		Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(Result), ((EIF_INTEGER_32) 1L)));
		RTHOOK(4);
		tc1 = (EIF_CHARACTER_8) arg1;
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
	} else {
		RTHOOK(5);
		loc1 = RTLNS(eif_new_type(1128, 0x01).id, 1128, _OBJSIZ_1_1_0_6_0_0_0_0_);
		(nstcall = -1, F1128_9049(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
		RTHOOK(6);
		ti4_1 = (EIF_INTEGER_32) arg1;
		(nstcall = 1, F1128_9106(RTCW(loc1), ti4_1));
		RTHOOK(7);
		Result = (EIF_REFERENCE) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("code_set", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tu4_1 == arg1)) {
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

void EIF_Minit395 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
