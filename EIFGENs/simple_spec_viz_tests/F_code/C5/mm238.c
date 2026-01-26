/*
 * Code for class MML_MODEL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mm238.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MML_MODEL}.is_model_non_equal */
EIF_BOOLEAN F267_3396 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_model_non_equal", 266, Current, 0, 1, 3373);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3089[dtype-267])(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3089[dtype-267])(Current, arg1));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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

/* {MML_MODEL}.model_equals */
EIF_BOOLEAN F267_3397 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLIU(9);
	
	RTEAA("model_equals", 266, Current, 6, 2, 3374);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (arg2);
	uarg = uarg1 || uarg2;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg2);
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(266, 0x01),loc1);
	if ((loc1) && RTS_OS (Current, loc1)) loc1 = (EIF_REFERENCE) 0;
	loc2 = RTCCL(arg2);
	loc2 = RTRV(eif_new_type(266, 0x01),loc2);
	if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
	if ((EIF_BOOLEAN) (EIF_TEST(loc1) && EIF_TEST(loc2))) {
		RTHOOK(2);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3089[Dtype(loc1)-267])(loc1, loc2));
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) RTEQ(arg1, arg2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("models_use_model_equality", EX_POST);
		tb1 = '\01';
		loc3 = RTCCL(arg1);
		loc3 = RTRV(eif_new_type(266, 0x01),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		loc4 = RTCCL(arg2);
		loc4 = RTRV(eif_new_type(266, 0x01),loc4);
		if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
		if ((EIF_BOOLEAN) (EIF_TEST(loc3) && EIF_TEST(loc4))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3089[Dtype(loc3)-267])(loc3, loc4));
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("non_models_use_object_equality", EX_POST);
		loc5 = RTCCL(arg1);
		loc5 = RTRV(eif_new_type(266, 0x01),loc5);
		if ((loc5) && RTS_OS (Current, loc5)) loc5 = (EIF_REFERENCE) 0;
		loc6 = RTCCL(arg2);
		loc6 = RTRV(eif_new_type(266, 0x01),loc6);
		if ((loc6) && RTS_OS (Current, loc6)) loc6 = (EIF_REFERENCE) 0;
		if ((!((EIF_BOOLEAN) ((EIF_BOOLEAN) !EIF_TEST(loc5) || (EIF_BOOLEAN) !EIF_TEST(loc6))) || ((EIF_BOOLEAN)(Result == RTEQ(arg1, arg2))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit238 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
