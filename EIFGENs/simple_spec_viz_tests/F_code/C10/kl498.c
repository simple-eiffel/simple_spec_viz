/*
 * Code for class KL_TYPE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl498.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_TYPE}.same_objects */
EIF_BOOLEAN F1094_8208 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,arg2);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("same_objects", 1093, Current, 0, 2, 15124);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	tr2 = RTCCL(arg2);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R6497[dtype-1093])(Current, tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_TYPE}.same_detachable_objects */
EIF_BOOLEAN F1094_8209 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("same_detachable_objects", 1093, Current, 4, 2, 15125);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (RTCEQ(arg1, arg2)) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (RTCEQ(arg1, arg1) || RTCEQ(arg2, arg2))) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(5);
			tb1 = '\0';
			loc1 = RTCCL(arg1);
			loc1 = RTRV(eif_new_type(1024, 0x01),loc1);
			if (EIF_TEST(loc1)) {
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5926[Dtype(loc1)-1024])(loc1));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(6);
				Result = '\0';
				loc2 = RTCCL(arg2);
				loc2 = RTRV(eif_new_type(1024, 0x01),loc2);
				if (EIF_TEST(loc2)) {
					tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5926[Dtype(loc2)-1024])(loc2));
					Result = tb1;
				}
			} else {
				RTHOOK(7);
				tb1 = '\0';
				loc3 = RTCCL(arg1);
				loc3 = RTRV(eif_new_type(1021, 0x01),loc3);
				if (EIF_TEST(loc3)) {
					tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5892[Dtype(loc3)-1021])(loc3));
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(8);
					Result = '\0';
					loc4 = RTCCL(arg2);
					loc4 = RTRV(eif_new_type(1021, 0x01),loc4);
					if (EIF_TEST(loc4)) {
						tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5892[Dtype(loc4)-1021])(loc4));
						Result = tb1;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit498 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
