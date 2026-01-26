/*
 * Code for class KL_ARRAY_ROUTINES [INTEGER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl829.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_ARRAY_ROUTINES}.make_from_array */
EIF_REFERENCE F349_4642 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("make_from_array", 348, Current, 1, 2, 4699);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
	Result = (nstcall = 0, F349_4646(Current, arg1, ti4_1, ti4_2, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_1 = (nstcall = 1, F786_5442(RTCW(Result)));
		ti4_2 = (nstcall = 1, F786_5442(RTCW(arg1)));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_items", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_0_);
		tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), ti4_2));
		tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc1)-334])(loc1));
			if (tb2) break;
			RTHOOK(7);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc1)-334])(loc1));
			ti4_2 = ti4_1;
			ti1_1 = (nstcall = 1, F786_5435(RTCW(Result), ti4_2));
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc1)-334])(loc1));
			ti4_2 = ti4_1;
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
			ti1_2 = (nstcall = 1, F786_5435(RTCW(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + ti4_1) - arg2)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1096,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr1 = RTLNS(typres0.id, 1096, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1097_8208(RTCW(tr1), ti1_1, ti1_2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc1)-334])(loc1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_ARRAY_ROUTINES}.make_empty_with_lower */
EIF_REFERENCE F349_4643 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("make_empty_with_lower", 348, Current, 1, 1, 4700);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,785,0xFFF8,1,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 785, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		(nstcall = -1, F786_5429(RTCW(Result)));
	} else {
		RTHOOK(3);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,795,0xFFF8,1,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc1 = RTLNS(typres0.id, 795, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		(nstcall = -1, F786_5429(RTCW(loc1)));
		RTHOOK(4);
		(nstcall = 1, F796_5488(RTCW(loc1), arg1));
		RTHOOK(5);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,785,0xFFF8,1,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 785, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		(nstcall = -1, F786_5432(RTCW(Result), loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_empty", EX_POST);
		tb1 = (nstcall = 1, F674_4976(RTCW(Result)));
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

/* {KL_ARRAY_ROUTINES}.has */
EIF_BOOLEAN F349_4644 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_8 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has", 348, Current, 2, 2, 4701);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		ti1_1 = (nstcall = 1, F786_5435(RTCW(arg1), loc1));
		if ((EIF_BOOLEAN)(ti1_1 == arg2)) {
			RTHOOK(6);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(8);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_ARRAY_ROUTINES}.has_void */
EIF_BOOLEAN F349_4645 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("has_void", 348, Current, 2, 1, 4702);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNTY2(eif_gen_param(Dftype(Current), 1), 0x00);
	tb1 = (nstcall = 1, F975_6347(tr1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		loc2 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(6);
			ti1_1 = (nstcall = 1, F786_5435(RTCW(arg1), loc1));
			if (EIF_FALSE) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(8);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(9);
				loc1++;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_ARRAY_ROUTINES}.subarray */
EIF_REFERENCE F349_4646 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("subarray", 348, Current, 1, 4, 4703);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		RTTE((EIF_BOOLEAN) (arg2 >= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (arg3 < arg2)) {
		RTHOOK(6);
		Result = (nstcall = 0, F349_4643(Current, arg4));
	} else {
		RTHOOK(7);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,785,0xFFF8,1,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 785, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		ti1_1 = (nstcall = 1, F786_5435(RTCW(arg1), arg2));
		(nstcall = -1, F786_5430(RTCW(Result), ti1_1, arg4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg4 + arg3) - arg2)));
		RTHOOK(8);
		(nstcall = 0, F349_4648(Current, Result, arg1, arg2, arg3, arg4));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("count_set", EX_POST);
		ti4_1 = (nstcall = 1, F786_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("same_items", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_0_);
		tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), ti4_2));
		tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc1)-334])(loc1));
			if (tb2) break;
			RTHOOK(13);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc1)-334])(loc1));
			ti4_2 = ti4_1;
			ti1_1 = (nstcall = 1, F786_5435(RTCW(Result), ti4_2));
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc1)-334])(loc1));
			ti4_2 = ti4_1;
			ti1_2 = (nstcall = 1, F786_5435(RTCW(arg1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg2) - arg4)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1096,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNS(typres0.id, 1096, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1097_8208(RTCW(tr1), ti1_1, ti1_2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc1)-334])(loc1));
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

/* {KL_ARRAY_ROUTINES}.cloned_array */
EIF_REFERENCE F349_4647 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("cloned_array", 348, Current, 0, 1, 4704);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
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
		tr1 = RTOUCR(415,(nstcall = 0, F343_4575), (Current));
		tb1 = (nstcall = 1, F3_44(RTCW(tr1), Result, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_equal", EX_POST);
		tb1 = (nstcall = 1, F786_5445(RTCW(Result), arg1));
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

/* {KL_ARRAY_ROUTINES}.subcopy */
void F349_4648 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32 arg5)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 ti1_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("subcopy", 348, Current, 1, 5, 4705);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_same", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != arg2), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("start_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_1_);
		RTTE((EIF_BOOLEAN) (arg3 >= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("end_pos_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("index_pos_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		RTTE((EIF_BOOLEAN) (arg5 >= ti4_1), label_1);
		RTCK;
		RTHOOK(8);
		RTCT("enough_space", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 - arg5) >= (EIF_INTEGER_32) (arg4 - arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(9);
	if ((EIF_BOOLEAN) (arg3 <= arg4)) {
		RTHOOK(10);
		(nstcall = 1, F786_5459(RTCW(arg1), arg2, arg3, arg4, arg5));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("copied", EX_POST);
		tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
		tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), (EIF_INTEGER_32) (arg4 - arg3)));
		tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
		loc1 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc1)-334])(loc1));
			if (tb2) break;
			RTHOOK(12);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc1)-334])(loc1));
			ti4_2 = ti4_1;
			ti1_1 = (nstcall = 1, F786_5435(RTCW(arg1), (EIF_INTEGER_32) (arg5 + ti4_2)));
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc1)-334])(loc1));
			ti4_2 = ti4_1;
			ti1_2 = (nstcall = 1, F786_5435(RTCW(arg2), (EIF_INTEGER_32) (arg3 + ti4_2)));
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,1096,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(Dftype(Current), typarr0);
				tr1 = RTLNS(typres0.id, 1096, _OBJSIZ_0_0_0_0_0_0_0_0_);
			}
			tb1 = (nstcall = 0, F1097_8208(RTCW(tr1), ti1_1, ti1_2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc1)-334])(loc1));
		}
		if (tb1) {
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
}

/* {KL_ARRAY_ROUTINES}.resize */
void F349_4649 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("resize", 348, Current, 0, 3, 4706);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_min_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_max_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 >= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("has_default", EX_PRE);
		tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
		tb1 = (nstcall = 1, F975_6344(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
	ti1_1 = (nstcall = 1, F975_6355(tr1));
	(nstcall = 0, F349_4650(Current, arg1, ti1_1, arg2, arg3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("upper_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {KL_ARRAY_ROUTINES}.resize_with_default */
void F349_4650 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_8 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("resize_with_default", 348, Current, 0, 4, 4698);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_min_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_max_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg4 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg3 <= arg4)) {
		RTHOOK(5);
		(nstcall = 1, F786_5475(RTCW(arg1), arg2, arg3, arg4));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("upper_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

void EIF_Minit829 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
