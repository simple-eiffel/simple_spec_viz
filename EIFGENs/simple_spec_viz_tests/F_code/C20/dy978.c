/*
 * Code for class DYNAMIC_CHAIN [INTEGER_64]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "dy978.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DYNAMIC_CHAIN}.extendible */
EIF_BOOLEAN F824_5513 (EIF_REFERENCE Current)
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
	
	RTEAA("extendible", 823, Current, 0, 0, 8350);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DYNAMIC_CHAIN}.prune */
void F824_5519 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune", 823, Current, 0, 1, 8345);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F879_5810(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F879_5822(Current, arg1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) !(nstcall = 0, F532_4895(Current))) {
		RTHOOK(4);
		(nstcall = 0, F879_5839(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DYNAMIC_CHAIN}.prune_all */
void F824_5520 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune_all", 823, Current, 0, 1, 8346);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F879_5810(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F879_5816(Current));
	RTHOOK(3);
	(nstcall = 0, F879_5822(Current, arg1));
	for (;;) {
		RTHOOK(4);
		if ((nstcall = 0, F532_4895(Current))) break;
		RTHOOK(5);
		(nstcall = 0, F879_5839(Current));
		RTHOOK(6);
		(nstcall = 0, F879_5822(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("no_more_occurrences", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F879_5797(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_exhausted", EX_POST);
		if ((nstcall = 0, F532_4895(Current))) {
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

/* {DYNAMIC_CHAIN}.remove_i_th */
void F824_5523 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,loc2);
	RTLR(7,tr6);
	RTLR(8,loc3);
	RTLIU(9);
	
	RTEAA("remove_i_th", 823, Current, 3, 1, 8347);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F879_5810(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F879_5812(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F879_5806(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		RTE_OT
		tr2 = (nstcall = 0, F1_14(Current));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = (nstcall = 0, F1_14(Current));
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 > arg1)) {
		RTHOOK(5);
		loc1--;
	}
	RTHOOK(6);
	(nstcall = 0, F879_5820(Current, arg1));
	RTHOOK(7);
	(nstcall = 0, F879_5839(Current));
	RTHOOK(8);
	(nstcall = 0, F879_5820(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F879_5806(Current)) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("same_index_if_below", EX_POST);
		if ((!((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) <= arg1)) || ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("new_index_if_above", EX_POST);
		if ((!((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > arg1)) || ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("same_leading_items", EX_POST);
		RTCO(tr3);
		tr6 = (nstcall = 1, F879_5799(RTCV(tr2)));
		loc2 = (EIF_REFERENCE) tr6;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc2)-334])(loc2));
			if (tb2) break;
			RTHOOK(13);
			tb3 = '\01';
			ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4308[Dtype(loc2)-398])(loc2));
			if ((EIF_BOOLEAN) (ti4_4 < arg1)) {
				ti8_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_64 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc2)-334])(loc2));
				ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4308[Dtype(loc2)-398])(loc2));
				tb3 = (EIF_BOOLEAN)(ti8_1 == (nstcall = 0, F879_5791(Current, ti4_4)));
			}
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc2)-334])(loc2));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("same_trailing_items", EX_POST);
		RTCO(tr5);
		tr6 = (nstcall = 1, F879_5799(RTCV(tr4)));
		loc3 = (EIF_REFERENCE) tr6;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc3)-334])(loc3));
			if (tb2) break;
			RTHOOK(15);
			tb3 = '\01';
			ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4308[Dtype(loc3)-398])(loc3));
			if ((EIF_BOOLEAN) (ti4_4 > arg1)) {
				ti8_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_64 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
				ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4308[Dtype(loc3)-398])(loc3));
				tb3 = (EIF_BOOLEAN)(ti8_1 == (nstcall = 0, F879_5791(Current, (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L)))));
			}
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc3)-334])(loc3));
		}
		if (tb1) {
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
}

/* {DYNAMIC_CHAIN}.wipe_out */
void F824_5524 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wipe_out", 823, Current, 0, 0, 8348);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F879_5810(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F879_5816(Current));
	for (;;) {
		RTHOOK(3);
		if ((nstcall = 0, F678_4976(Current))) break;
		RTHOOK(4);
		(nstcall = 0, F879_5839(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F678_4976(Current))) {
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

/* {DYNAMIC_CHAIN}.duplicate */
EIF_REFERENCE F824_5525 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("duplicate", 823, Current, 2, 1, 8349);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off_unless_after", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F809_5504(Current))) {
			tb1 = (nstcall = 0, F839_5528(Current));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_subchain", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F879_5847(Current));
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current + O4373[dtype-488])) {
		RTHOOK(5);
		(nstcall = 1, F502_4878(RTCW(Result)));
	}
	RTHOOK(6);
	loc1 = (nstcall = 0, F879_5796(Current));
	for (;;) {
		RTHOOK(7);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc2 == arg1)) {
			tb1 = (nstcall = 0, F532_4895(Current));
		}
		if (tb1) break;
		RTHOOK(8);
		ti8_1 = (nstcall = 0, F879_5790(Current));
		(nstcall = 1, F879_5826(RTCW(Result), ti8_1));
		RTHOOK(9);
		(nstcall = 0, F879_5818(Current));
		RTHOOK(10);
		loc2++;
	}
	RTHOOK(11);
	(nstcall = 0, F879_5821(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit978 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
