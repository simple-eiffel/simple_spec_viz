/*
 * Code for class FUNCTION [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fu561.h"
#include "eif_rout_obj.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1072_7599
static EIF_REFERENCE inline_F1072_7599 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
{
	#ifdef WORKBENCH
	EIF_REFERENCE result;
	if (arg1 != 0) {
		return (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
			arg2, arg3, arg4).it_r;
	} else {
		rout_obj_call_function_dynamic (
			arg5,
			arg6,
			arg7,
			arg3,
			arg8,
			arg4,
			arg9,
			arg10, 
			&result);
		return result;
	}
#else
	return (FUNCTION_CAST(EIF_REFERENCE, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) arg1)(
		arg2, arg3, arg4);
#endif
	;
}
#define INLINE_F1072_7599
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FUNCTION}.last_result */
EIF_REFERENCE F1072_7590 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O6100[Dtype(Current)-1071]);
}


/* {FUNCTION}.call */
void F1072_7591 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("call", 1071, Current, 0, 1, 14555);
	RTSA(dtype);
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		RTTE((nstcall = 0, F1070_7557(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6101[dtype-1071])(Current, arg1));
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O6100[dtype-1071]) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {FUNCTION}.item */
EIF_REFERENCE F1072_7592 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("item", 1071, Current, 1, 1, 14556);
	RTSA(dtype);
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		RTTE((nstcall = 0, F1070_7557(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F1070_7569(Current));
	RTHOOK(3);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_POINTER, EIF_POINTER, EIF_POINTER, EIF_POINTER, EIF_INTEGER_32, EIF_BOOLEAN, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_POINTER)) R6105[dtype-1071])(Current, *(EIF_POINTER *)(Current + O6084[dtype-1069]), *(EIF_POINTER *)(Current + O6082[dtype-1069]), *(EIF_REFERENCE *)(Current + _REFACS_1_), arg1, *(EIF_INTEGER_32 *)(Current + O6085[dtype-1069]), *(EIF_BOOLEAN *)(Current + O6086[dtype-1069]), *(EIF_INTEGER_32 *)(Current + O6087[dtype-1069]), loc1, *(EIF_INTEGER_32 *)(Current + O6073[dtype-1069]), *(EIF_REFERENCE *)(Current + _REFACS_2_)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {FUNCTION}.apply */
void F1072_7593 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("apply", 1071, Current, 0, 0, 14557);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		RTTE((nstcall = 0, F1070_7557(Current, *(EIF_REFERENCE *)(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6101[dtype-1071])(Current, *(EIF_REFERENCE *)(Current)));
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O6100[dtype-1071]) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FUNCTION}.is_equal */
EIF_BOOLEAN F1072_7594 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 1071, Current, 0, 1, 14558);
	RTSA(dtype);
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
	Result = '\0';
	if ((nstcall = 0, F1070_7556(Current, arg1))) {
		tr1 = *(EIF_REFERENCE *)(Current + O6100[dtype-1071]);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6100[Dtype(RTCW(arg1))-1071])(arg1));
		Result = RTEQ(tr1, tr2);
	}
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
		if ((nstcall = 0, F1_9(Current, arg1))) {
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {FUNCTION}.copy */
void F1072_7595 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("copy", 1071, Current, 0, 1, 14549);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		(nstcall = 0, F1070_7563(Current, arg1));
		RTHOOK(5);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6100[Dtype(RTCW(arg1))-1071])(arg1));
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + O6100[dtype-1071]) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_call_status", EX_POST);
		tb1 = '\01';
		tb2 = EIF_TRUE;
		if (tb2) {
			tb1 = EIF_TRUE;
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
}

/* {FUNCTION}.eval */
EIF_REFERENCE F1072_7596 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("eval", 1071, Current, 0, 1, 14550);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		RTTE((nstcall = 0, F1070_7557(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6101[dtype-1071])(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FUNCTION}.clear_last_result */
void F1072_7597 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("clear_last_result", 1071, Current, 1, 0, 14551);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + O6100[dtype-1071]) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {FUNCTION}.flexible_item */
EIF_REFERENCE F1072_7598 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,Result);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("flexible_item", 1071, Current, 4, 1, 14552);
	RTSA(dtype);
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_operands", EX_PRE);
		RTTE((nstcall = 0, F1070_7557(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6101[dtype-1071])(Current, loc1));
	} else {
		RTHOOK(4);
		loc3 = arg1;
		loc3 = RTRV(eif_gen_param(dftype, 1),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc3)) {
			RTHOOK(5);
			Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6101[dtype-1071])(Current, loc3));
		} else {
			RTHOOK(6);
			RTCT0("from_precondition", EX_CHECK);
			tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5302[Dtype(tr1)-965])(tr1));
			tr1 = (nstcall = 0, F76_1092(Current, ti4_1));
			loc4 = tr1;
			loc4 = RTRV(eif_gen_param(dftype, 1),loc4);
			if (EIF_TEST(loc4)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(7);
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb1 = (nstcall = 1, F997_6390(arg1));
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (F997_6390, eif_scr4, 0, &(tb1));
			}
			if (tb1) {
				RTHOOK(8);
				(nstcall = 1, F997_6392(loc4));
			}
			RTHOOK(9);
			ti4_1 = (nstcall = 1, F997_6397(loc4));
			loc2 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(10);
				if ((EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L))) break;
				RTHOOK(11);
				if (RTS_CI (EIF_TRUE, arg1)) {
					RTS_BI (arg1);
					tr1 = (nstcall = 1, F997_6368(RTCW(arg1), loc2));
					RTS_EI;
				} else {
					RTS_AC (1, arg1);
					RTS_AA (loc2, it_i4, SK_INT32, 1);
					RTS_CALL (F997_6368, eif_scr3, 0, &(tr1));
				}
				tr2 = RTCCL(tr1);
				(nstcall = 1, F997_6401(loc4, tr2, loc2));
				RTHOOK(12);
				loc2--;
			}
			RTHOOK(13);
			Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6101[dtype-1071])(Current, loc4));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {FUNCTION}.fast_item */
EIF_REFERENCE F1072_7599 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6, EIF_INTEGER_32 arg7, EIF_INTEGER_32 arg8, EIF_INTEGER_32 arg9, EIF_POINTER arg10)
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
	
	RTEAA("fast_item", 1071, Current, 0, 10, 14553);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1072_7599 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32) arg5, (EIF_BOOLEAN) arg6, (EIF_INTEGER_32) arg7, (EIF_INTEGER_32) arg8, (EIF_INTEGER_32) arg9, (EIF_POINTER) arg10);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {
		if (RTAT(eif_final_id(Y6106,Y6106_gen_type,Dftype(Current),1071))) {RTEC(EN_FAIL);}
	}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit561 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
