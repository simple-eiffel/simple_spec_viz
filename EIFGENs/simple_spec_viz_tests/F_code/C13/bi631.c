/*
 * Code for class BILINEAR [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi631.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BILINEAR}.off */
EIF_BOOLEAN F538_4905 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("off", 537, Current, 0, 0, 6123);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current))) {
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BILINEAR}.search */
void F538_4908 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("search", 537, Current, 0, 1, 6124);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current))) {
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current));
	}
	if (tb1) {
		RTHOOK(2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4394[dtype-663])(Current));
	}
	RTHOOK(3);
	(nstcall = 0, F520_4891(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("object_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F520_4895(Current))) {
			tb2 = *(EIF_BOOLEAN *)(Current + O4373[dtype-488]);
		}
		if (tb2) {
			tb1 = (arg1 == (nstcall = 0, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4379[dtype-663])(Current)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("item_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F520_4895(Current))) {
			tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O4373[dtype-488]);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(arg1 == (nstcall = 0, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4379[dtype-663])(Current)));
		}
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
}

/* {BILINEAR}._invariant */
void F538_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 630, Current, 0, 0);
	RTIT("not_both", Current);
	tb1 = '\0';
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current))) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current));
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("before_constraint", Current);
	tb1 = '\01';
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current))) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4380[dtype-663])(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit631 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
