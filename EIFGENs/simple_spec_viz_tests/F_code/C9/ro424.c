/*
 * Code for class ROUTINE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ro424.h"
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

/* {ROUTINE}.adapt */
void F1070_7548 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("adapt", 1069, Current, 0, 1, 14499);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("conforming", EX_PRE);
		RTTE((nstcall = 0, F1_6(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O6081[Dtype(arg1)-1069]);
	*(EIF_POINTER *)(Current + O6081[dtype-1069]) = (EIF_POINTER) tp1;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O6084[Dtype(arg1)-1069]);
	*(EIF_POINTER *)(Current + O6084[dtype-1069]) = (EIF_POINTER) tp1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(arg1) + O6082[Dtype(arg1)-1069]);
	*(EIF_POINTER *)(Current + O6082[dtype-1069]) = (EIF_POINTER) tp1;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6085[Dtype(arg1)-1069]);
	*(EIF_INTEGER_32 *)(Current + O6085[dtype-1069]) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O6086[Dtype(arg1)-1069]);
	*(EIF_BOOLEAN *)(Current + O6086[dtype-1069]) = (EIF_BOOLEAN) tb1;
	RTHOOK(10);
	tb1 = *(EIF_BOOLEAN *)(RTCW(arg1) + O6072[Dtype(arg1)-1069]);
	*(EIF_BOOLEAN *)(Current + O6072[dtype-1069]) = (EIF_BOOLEAN) tb1;
	RTHOOK(11);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6087[Dtype(arg1)-1069]);
	*(EIF_INTEGER_32 *)(Current + O6087[dtype-1069]) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6073[Dtype(arg1)-1069]);
	*(EIF_INTEGER_32 *)(Current + O6073[dtype-1069]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {ROUTINE}.operands */
EIF_REFERENCE F1070_7549 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {ROUTINE}.target */
EIF_REFERENCE F1070_7550 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("target", 1069, Current, 4, 0, 14501);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current + O6072[dtype-1069])) {
		RTHOOK(2);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(3);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			ti4_1 = (nstcall = 1, F997_6397(loc1));
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F997_6368(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			loc2 = RTCCL(tr1);
			loc2 = RTRV(eif_new_type(0, 0x01),loc2);
			if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			RTHOOK(4);
			Result = (EIF_REFERENCE) RTCCL(loc2);
		}
	} else {
		RTHOOK(5);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_1 = (nstcall = 1, F997_6397(loc3));
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F997_6368(loc3, ((EIF_INTEGER_32) 1L)));
			loc4 = RTCCL(tr1);
			loc4 = RTRV(eif_new_type(0, 0x01),loc4);
			if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(6);
			Result = (EIF_REFERENCE) RTCCL(loc4);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.hash_code */
EIF_INTEGER_32 F1070_7551 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("hash_code", 1069, Current, 0, 0, 14502);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + O6081[dtype-1069]);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + O6085[dtype-1069]);
	ti4_3 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_2)));
	ti4_2 = eif_bit_xor(ti4_1,ti4_3);
	Result = (EIF_INTEGER_32) ti4_2;
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

/* {ROUTINE}.precondition */
EIF_BOOLEAN F1070_7552 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("precondition", 1069, Current, 0, 1, 14503);
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

/* {ROUTINE}.postcondition */
EIF_BOOLEAN F1070_7553 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("postcondition", 1069, Current, 0, 1, 14504);
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

/* {ROUTINE}.empty_operands */
EIF_REFERENCE F1070_7554 (EIF_REFERENCE Current)
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
	
	RTEAA("empty_operands", 1069, Current, 0, 0, 14505);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(eif_gen_param(Dftype(Current), 1).id);
	(nstcall = -1, F1_29(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty_operands_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {ROUTINE}.is_equal */
EIF_BOOLEAN F1070_7556 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
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
	
	RTEAA("is_equal", 1069, Current, 0, 1, 14507);
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
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tb5 = '\0';
	tb6 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	if (RTEQ(tr1, tr2)) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		tb6 = RTEQ(tr1, tr2);
	}
	if (tb6) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		tb5 = RTEQ(tr1, tr2);
	}
	if (tb5) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O6081[Dtype(arg1)-1069]);
		tb4 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O6081[dtype-1069]) == tp1);
	}
	if (tb4) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6085[Dtype(arg1)-1069]);
		tb3 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6085[dtype-1069]) == ti4_1);
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6087[Dtype(arg1)-1069]);
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6087[dtype-1069]) == ti4_1);
	}
	if (tb2) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O6084[Dtype(arg1)-1069]);
		tb1 = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O6084[dtype-1069]) == tp1);
	}
	if (tb1) {
		tp1 = *(EIF_POINTER *)(RTCW(arg1) + O6082[Dtype(arg1)-1069]);
		Result = (EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O6082[dtype-1069]) == tp1);
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

/* {ROUTINE}.valid_operands */
EIF_BOOLEAN F1070_7557 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("valid_operands", 1069, Current, 4, 1, 14508);
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
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + O6073[dtype-1069]);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	} else {
		RTHOOK(3);
		if (RTS_CI (EIF_TRUE, arg1)) {
			RTS_BI (arg1);
			ti4_1 = (nstcall = 1, F997_6397(arg1));
			RTS_EI;
		} else {
			RTS_AC (0, arg1);
			RTS_CALL (F997_6397, eif_scr1, 0, &(ti4_1));
		}
		if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current + O6073[dtype-1069]))) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(5);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(6);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current + O6073[dtype-1069])) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(7);
				if (RTS_CI (EIF_TRUE, arg1)) {
					RTS_BI (arg1);
					tu1_1 = (nstcall = 1, F997_6477(arg1, loc1));
					RTS_EI;
				} else {
					RTS_AC (1, arg1);
					RTS_AA (loc1, it_i4, SK_INT32, 1);
					RTS_CALL (F997_6477, eif_scr2, 0, &(tu1_1));
				}
				ti4_1 = (EIF_INTEGER_32) tu1_1;
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(8);
				loc4 = (nstcall = 0, F1070_7581(Current, loc1));
				RTHOOK(9);
				switch (loc2) {
					case 1L:
						RTHOOK(10);
						tr1 = RTLNTY2(eif_new_type(1035, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F981_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 2L:
						RTHOOK(11);
						tr1 = RTLNTY2(eif_new_type(1032, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F979_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 14L:
						RTHOOK(12);
						tr1 = RTLNTY2(eif_new_type(1029, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F980_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 6L:
						RTHOOK(13);
						tr1 = RTLNTY2(eif_new_type(1011, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F975_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 7L:
						RTHOOK(14);
						tr1 = RTLNTY2(eif_new_type(1008, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F976_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 8L:
						RTHOOK(15);
						tr1 = RTLNTY2(eif_new_type(1005, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F977_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 9L:
						RTHOOK(16);
						tr1 = RTLNTY2(eif_new_type(1002, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F978_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 10L:
						RTHOOK(17);
						tr1 = RTLNTY2(eif_new_type(1020, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F971_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 11L:
						RTHOOK(18);
						tr1 = RTLNTY2(eif_new_type(999, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F972_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 12L:
						RTHOOK(19);
						tr1 = RTLNTY2(eif_new_type(1017, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F973_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 13L:
						RTHOOK(20);
						tr1 = RTLNTY2(eif_new_type(1014, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F974_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 5L:
						RTHOOK(21);
						tr1 = RTLNTY2(eif_new_type(1068, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F967_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 4L:
						RTHOOK(22);
						tr1 = RTLNTY2(eif_new_type(1023, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F970_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 3L:
						RTHOOK(23);
						tr1 = RTLNTY2(eif_new_type(1026, 0x00), 0x00);
						ti4_1 = (nstcall = 1, F969_6341(tr1));
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc4 == ti4_1);
						break;
					case 0L:
						RTHOOK(24);
						if (RTS_CI (EIF_TRUE, arg1)) {
							RTS_BI (arg1);
							tr1 = (nstcall = 1, F997_6368(RTCW(arg1), loc1));
							RTS_EI;
						} else {
							RTS_AC (1, arg1);
							RTS_AA (loc1, it_i4, SK_INT32, 1);
							RTS_CALL (F997_6368, eif_scr3, 0, &(tr1));
						}
						loc3 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(25);
						if ((nstcall = 0, F277_3633(Current, loc4))) {
							RTHOOK(26);
							Result = '\0';
							if ((EIF_BOOLEAN)(loc3 != NULL)) {
								tr1 = RTCCL(loc3);
								ti4_1 = (nstcall = 0, F76_1087(Current, tr1));
								Result = (nstcall = 0, F277_3623(Current, ti4_1, loc4));
							}
						} else {
							RTHOOK(27);
							Result = '\01';
							if (!(EIF_BOOLEAN)(loc3 == NULL)) {
								tr1 = RTCCL(loc3);
								ti4_1 = (nstcall = 0, F76_1087(Current, tr1));
								Result = (nstcall = 0, F277_3623(Current, ti4_1, loc4));
							}
						}
						break;
					default:
						RTHOOK(28);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						break;
				}
				RTHOOK(29);
				loc1++;
			}
		}
	}
	RTHOOK(30);
	if ((EIF_BOOLEAN) (Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O6072[dtype-1069]))) {
		RTHOOK(31);
		Result = '\0';
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb2 = (nstcall = 1, F997_6400(RTCW(arg1)));
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (F997_6400, eif_scr4, 0, &(tb2));
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tr1 = (nstcall = 1, F997_6368(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
				RTS_EI;
			} else {
				RTS_AC (1, arg1);
				RTS_AA (((EIF_INTEGER_32) 1L), it_i4, SK_INT32, 1);
				RTS_CALL (F997_6368, eif_scr3, 0, &(tr1));
			}
			Result = (EIF_BOOLEAN)(tr1 != NULL);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.valid_target */
EIF_BOOLEAN F1070_7558 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("valid_target", 1069, Current, 0, 1, 14509);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		ti4_1 = (nstcall = 1, F997_6397(arg1));
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(2);
		tb1 = (nstcall = 1, F997_6441(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
		if (tb1) {
			RTHOOK(3);
			tr1 = (nstcall = 1, F997_6370(arg1, ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
		} else {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.is_target_closed */
EIF_BOOLEAN F1070_7559 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O6072[Dtype(Current)-1069]);
}


/* {ROUTINE}.open_count */
EIF_INTEGER_32 F1070_7560 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O6073[Dtype(Current)-1069]);
}


/* {ROUTINE}.set_operands */
void F1070_7561 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
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
	
	RTEAA("set_operands", 1069, Current, 0, 1, 14512);
	RTSA(Dtype(Current));
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
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("operands_set", EX_POST);
		tb1 = '\01';
		if (!(!((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) || (RTEQ(*(EIF_REFERENCE *)(Current), arg1)))) {
			tb2 = '\01';
			if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
				tb3 = '\01';
				if (!(EIF_BOOLEAN)(arg1 == NULL)) {
					tb4 = (nstcall = 1, F997_6400(RTCW(arg1)));
					tb3 = tb4;
				}
				tb2 = tb3;
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
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ROUTINE}.set_target */
void F1070_7562 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("set_target", 1069, Current, 2, 1, 14513);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_target_closed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current + O6072[dtype-1069]), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F1070_7550(Current)) != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("same_target_type", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 0, F1070_7550(Current));
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			tr1 = RTCCL(arg1);
			tb2 = (nstcall = 1, F1_7(loc2, tr1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		tr1 = RTCCL(arg1);
		(nstcall = 1, F997_6401(RTCW(loc1), tr1, ((EIF_INTEGER_32) 1L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("target_set", EX_POST);
		if (RTCEQ((nstcall = 0, F1070_7550(Current)), arg1)) {
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

/* {ROUTINE}.copy */
void F1070_7563 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("copy", 1069, Current, 1, 1, 14514);
	RTSA(Dtype(Current));
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
		(nstcall = 0, F1_16(Current, arg1));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F1_14(loc1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
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
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {ROUTINE}.flexible_call */
void F1070_7566 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("flexible_call", 1069, Current, 4, 1, 14515);
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
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6076[dtype-1070])(Current, loc1));
	} else {
		RTHOOK(4);
		loc3 = arg1;
		loc3 = RTRV(eif_gen_param(dftype, 1),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc3)) {
			RTHOOK(5);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6076[dtype-1070])(Current, loc3));
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
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6076[dtype-1070])(Current, loc4));
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
}

/* {ROUTINE}.correct_mismatch */
void F1070_7567 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("correct_mismatch", 1069, Current, 0, 0, 14516);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ROUTINE}.closed_operands */
EIF_REFERENCE F1070_7568 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {ROUTINE}.closed_count */
EIF_INTEGER_32 F1070_7569 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("closed_count", 1069, Current, 1, 0, 14518);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F997_6397(loc1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.rout_disp */
EIF_POINTER F1070_7570 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O6081[Dtype(Current)-1069]);
}


/* {ROUTINE}.calc_rout_addr */
EIF_POINTER F1070_7571 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O6082[Dtype(Current)-1069]);
}


/* {ROUTINE}.open_map */
EIF_REFERENCE F1070_7572 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {ROUTINE}.encaps_rout_disp */
EIF_POINTER F1070_7573 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current + O6084[Dtype(Current)-1069]);
}


/* {ROUTINE}.routine_id */
EIF_INTEGER_32 F1070_7574 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O6085[Dtype(Current)-1069]);
}


/* {ROUTINE}.is_basic */
EIF_BOOLEAN F1070_7575 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O6086[Dtype(Current)-1069]);
}


/* {ROUTINE}.written_type_id_inline_agent */
EIF_INTEGER_32 F1070_7576 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O6087[Dtype(Current)-1069]);
}


/* {ROUTINE}.set_rout_disp */
void F1070_7577 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg9);
	RTLR(1,Current);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_rout_disp", 1069, Current, 0, 10, 14526);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_routine_id_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg7) {
			tb1 = (nstcall = 0, F1070_7558(Current, arg9));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F1070_7579(Current, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ROUTINE}.set_rout_disp_final */
void F1070_7578 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_REFERENCE arg4, EIF_BOOLEAN arg5, EIF_INTEGER_32 arg6)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg4);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_rout_disp_final", 1069, Current, 0, 6, 14527);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg5) {
			tb1 = (nstcall = 0, F1070_7558(Current, arg4));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_POINTER *)(Current + O6081[dtype-1069]) = (EIF_POINTER) arg1;
	RTHOOK(3);
	*(EIF_POINTER *)(Current + O6084[dtype-1069]) = (EIF_POINTER) arg2;
	RTHOOK(4);
	*(EIF_POINTER *)(Current + O6082[dtype-1069]) = (EIF_POINTER) arg3;
	RTHOOK(5);
	RTAR(Current, arg4);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg4;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current + O6072[dtype-1069]) = (EIF_BOOLEAN) arg5;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O6073[dtype-1069]) = (EIF_INTEGER_32) arg6;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {ROUTINE}.set_rout_disp_int */
void F1070_7579 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_BOOLEAN arg6, EIF_BOOLEAN arg7, EIF_INTEGER_32 arg8, EIF_REFERENCE arg9, EIF_INTEGER_32 arg10)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg9);
	RTLR(1,Current);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_rout_disp_int", 1069, Current, 0, 10, 14528);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_routine_id_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) -1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("target_valid", EX_PRE);
		tb1 = '\01';
		if (arg7) {
			tb1 = (nstcall = 0, F1070_7558(Current, arg9));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_POINTER *)(Current + O6081[dtype-1069]) = (EIF_POINTER) arg1;
	RTHOOK(4);
	*(EIF_POINTER *)(Current + O6084[dtype-1069]) = (EIF_POINTER) arg2;
	RTHOOK(5);
	*(EIF_POINTER *)(Current + O6082[dtype-1069]) = (EIF_POINTER) arg3;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O6085[dtype-1069]) = (EIF_INTEGER_32) arg4;
	RTHOOK(7);
	RTAR(Current, arg5);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg5;
	RTHOOK(8);
	*(EIF_BOOLEAN *)(Current + O6086[dtype-1069]) = (EIF_BOOLEAN) arg6;
	RTHOOK(9);
	*(EIF_BOOLEAN *)(Current + O6072[dtype-1069]) = (EIF_BOOLEAN) arg7;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current + O6087[dtype-1069]) = (EIF_INTEGER_32) arg8;
	RTHOOK(11);
	RTAR(Current, arg9);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg9;
	RTHOOK(12);
	*(EIF_INTEGER_32 *)(Current + O6073[dtype-1069]) = (EIF_INTEGER_32) arg10;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("rout_disp_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O6081[dtype-1069]) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("encaps_rout_disp_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O6084[dtype-1069]) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("calc_rout_addr_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current + O6082[dtype-1069]) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("routine_id_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6085[dtype-1069]) == arg4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("open_map_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("is_target_closed_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O6072[dtype-1069]) == arg7)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("is_basic_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current + O6086[dtype-1069]) == arg6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("written_type_id_inline_agent_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6087[dtype-1069]) == arg8)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("closed_operands_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg9)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("open_count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O6073[dtype-1069]) == arg10)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {ROUTINE}.open_types */
EIF_REFERENCE F1070_7580 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {ROUTINE}.open_operand_type */
EIF_INTEGER_32 F1070_7581 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("open_operand_type", 1069, Current, 1, 1, 14530);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("within_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current + O6073[dtype-1069])), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(5);
		{
			static EIF_TYPE_INDEX typarr0[] = {779,1005,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F780_5430(RTCW(loc1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 1L), *(EIF_INTEGER_32 *)(Current + O6073[dtype-1069])));
		RTHOOK(6);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(7);
	ti4_1 = (nstcall = 1, F780_5435(RTCW(loc1), arg1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(9);
		tr1 = RTLNTY2(eif_gen_param(dftype, 1), 0x00);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5301[Dtype(tr1)-965])(tr1, arg1));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5302[Dtype(RTCW(tr2))-965])(tr2));
		Result = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		(nstcall = 1, F780_5454(RTCW(loc1), Result, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.type_id_of */
EIF_INTEGER_32 F1070_7582 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("type_id_of", 1069, Current, 0, 1, 14531);
	RTSA(Dtype(Current));
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
		RTCT("False", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tr1 = (nstcall = 1, F1_5(arg1));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (F1_5, eif_scr5, 0, &(tr1));
	}
	if (RTS_CI (EIF_TRUE, tr1)) {
		RTS_BI (tr1);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5302[Dtype(RTCW(tr1))-965])(tr1));
		RTS_EI;
	} else {
		RTS_AC (0, tr1);
		RTS_CALL (R5302[Dtype(tr1)-965], eif_scr1, 0, &(ti4_1));
	}
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.adapt_from */
void F1070_7583 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("adapt_from", 1069, Current, 0, 1, 14532);
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
		RTCT("conforming", EX_PRE);
		RTTE((nstcall = 0, F1_6(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F1070_7548(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ROUTINE}.arguments */
EIF_REFERENCE F1070_7584 (EIF_REFERENCE Current)
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
	
	RTEAA("arguments", 1069, Current, 0, 0, 14533);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ROUTINE}.set_arguments */
void F1070_7585 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_arguments", 1069, Current, 0, 1, 14534);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1070_7561(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ROUTINE}.valid_arguments */
EIF_BOOLEAN F1070_7586 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("valid_arguments", 1069, Current, 0, 1, 14535);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1070_7557(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit424 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
