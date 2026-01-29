/*
 * Code for class SIMPLE_ENCODING_DETECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si20.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_ENCODING_DETECTOR}.make */
void F23_423 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 22, Current, 0, 0, 432);
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

/* {SIMPLE_ENCODING_DETECTOR}.detect_encoding */
EIF_REFERENCE F23_424 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("detect_encoding", 22, Current, 0, 1, 433);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F23_426(Current, arg1));
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-8",5,1414538040)));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tb1 = (nstcall = 0, F23_429(Current, arg1));
		if (tb1) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-32LE",8,345477701)));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(5);
			tb1 = (nstcall = 0, F23_430(Current, arg1));
			if (tb1) {
				RTHOOK(6);
				tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-32BE",8,345475141)));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(7);
				tb1 = (nstcall = 0, F23_427(Current, arg1));
				if (tb1) {
					RTHOOK(8);
					tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-16LE",8,312185413)));
					Result = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(9);
					tb1 = (nstcall = 0, F23_428(Current, arg1));
					if (tb1) {
						RTHOOK(10);
						tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-16BE",8,312182853)));
						Result = (EIF_REFERENCE) tr1;
					} else {
						RTHOOK(11);
						tb1 = (nstcall = 0, F23_432(Current, arg1));
						if (tb1) {
							RTHOOK(12);
							tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-8",5,1414538040)));
							Result = (EIF_REFERENCE) tr1;
						} else {
							RTHOOK(13);
							tb1 = (nstcall = 0, F23_433(Current, arg1));
							if (tb1) {
								RTHOOK(14);
								tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("ASCII",5,1397417801)));
								Result = (EIF_REFERENCE) tr1;
							} else {
								RTHOOK(15);
								tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("ISO-8859-1",10,1255164721)));
								Result = (EIF_REFERENCE) tr1;
							}
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("result_not_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 1, F666_4976(RTCW(Result)));
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
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.detect_encoding_with_confidence */
EIF_REFERENCE F23_425 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc2 = (EIF_REAL_64) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("detect_encoding_with_confidence", 22, Current, 2, 1, 434);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F23_426(Current, arg1));
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-8",5,1414538040)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		loc2 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
	} else {
		RTHOOK(4);
		tb1 = '\01';
		tb2 = (nstcall = 0, F23_429(Current, arg1));
		if (!tb2) {
			tb2 = (nstcall = 0, F23_430(Current, arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-32",6,1345129266)));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(6);
			loc2 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
		} else {
			RTHOOK(7);
			tb1 = '\01';
			tb2 = (nstcall = 0, F23_427(Current, arg1));
			if (!tb2) {
				tb2 = (nstcall = 0, F23_428(Current, arg1));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(8);
				tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-16",6,1345128758)));
				loc1 = (EIF_REFERENCE) tr1;
				RTHOOK(9);
				loc2 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
			} else {
				RTHOOK(10);
				tb1 = (nstcall = 0, F23_432(Current, arg1));
				if (tb1) {
					RTHOOK(11);
					tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("UTF-8",5,1414538040)));
					loc1 = (EIF_REFERENCE) tr1;
					RTHOOK(12);
					tb1 = (nstcall = 0, F23_434(Current, arg1));
					if (tb1) {
						RTHOOK(13);
						loc2 = (EIF_REAL_64) (EIF_REAL_64) 0.95;
					} else {
						RTHOOK(14);
						loc2 = (EIF_REAL_64) (EIF_REAL_64) 0.7;
					}
				} else {
					RTHOOK(15);
					tb1 = (nstcall = 0, F23_433(Current, arg1));
					if (tb1) {
						RTHOOK(16);
						tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("ASCII",5,1397417801)));
						loc1 = (EIF_REFERENCE) tr1;
						RTHOOK(17);
						loc2 = (EIF_REAL_64) (EIF_REAL_64) 0.8;
					} else {
						RTHOOK(18);
						tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("ISO-8859-1",10,1255164721)));
						loc1 = (EIF_REFERENCE) tr1;
						RTHOOK(19);
						loc2 = (EIF_REAL_64) (EIF_REAL_64) 0.5;
					}
				}
			}
		}
	}
	RTHOOK(20);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,996,0xFF01,1084,1026,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = loc1;
	RTAR(tr1,loc1);
	((EIF_TYPED_VALUE *)tr1+2)->it_r8 = loc2;
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("confidence_valid", EX_POST);
		tb1 = '\0';
		tr8_1 = eif_real_64_item(RTCW(Result),2);
		if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
			tr8_1 = eif_real_64_item(RTCW(Result),2);
			tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) 1.0);
		}
		if (tb1) {
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
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.has_utf8_bom */
EIF_BOOLEAN F23_426 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has_utf8_bom", 22, Current, 0, 1, 435);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 3L))) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 1L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 239L));
	}
	if (tb3) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 2L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 187L));
	}
	if (tb2) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 3L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 191L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.has_utf16_le_bom */
EIF_BOOLEAN F23_427 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has_utf16_le_bom", 22, Current, 0, 1, 436);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 1L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L));
	}
	if (tb3) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 2L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 254L));
	}
	if (tb2) {
		tb2 = (nstcall = 0, F23_429(Current, arg1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.has_utf16_be_bom */
EIF_BOOLEAN F23_428 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has_utf16_be_bom", 22, Current, 0, 1, 437);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 1L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 254L));
	}
	if (tb2) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 2L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.has_utf32_le_bom */
EIF_BOOLEAN F23_429 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has_utf32_le_bom", 22, Current, 0, 1, 438);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L))) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 1L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb4 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L));
	}
	if (tb4) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 2L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 254L));
	}
	if (tb3) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 3L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (tb2) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 4L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.has_utf32_be_bom */
EIF_BOOLEAN F23_430 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has_utf32_be_bom", 22, Current, 0, 1, 439);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L))) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 1L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb4 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (tb4) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 2L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb3 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (tb3) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 3L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 254L));
	}
	if (tb2) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 4L)));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.strip_bom */
EIF_REFERENCE F23_431 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("strip_bom", 22, Current, 0, 1, 440);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F23_426(Current, arg1));
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 4L), ti4_1));
		tr3 = (nstcall = 1, F1076_7654(RTCW(tr2)));
		(nstcall = -1, F1079_7733(RTCW(tr1), tr3));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tb1 = '\01';
		tb2 = (nstcall = 0, F23_429(Current, arg1));
		if (!tb2) {
			tb2 = (nstcall = 0, F23_430(Current, arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(4);
			tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 5L), ti4_1));
			tr3 = (nstcall = 1, F1076_7654(RTCW(tr2)));
			(nstcall = -1, F1079_7733(RTCW(tr1), tr3));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(5);
			tb1 = '\01';
			tb2 = (nstcall = 0, F23_427(Current, arg1));
			if (!tb2) {
				tb2 = (nstcall = 0, F23_428(Current, arg1));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(6);
				tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 3L), ti4_1));
				tr3 = (nstcall = 1, F1076_7654(RTCW(tr2)));
				(nstcall = -1, F1079_7733(RTCW(tr1), tr3));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(7);
				tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
				tr2 = (nstcall = 1, F1076_7654(RTCW(arg1)));
				(nstcall = -1, F1079_7733(RTCW(tr1), tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_ENCODING_DETECTOR}.is_valid_utf8 */
EIF_BOOLEAN F23_432 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_valid_utf8", 22, Current, 3, 1, 441);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(4);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 128L))) {
			RTHOOK(6);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 192L))) {
				RTHOOK(8);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(9);
				if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 224L))) {
					RTHOOK(10);
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(11);
					if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 240L))) {
						RTHOOK(12);
						loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
					} else {
						RTHOOK(13);
						if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 248L))) {
							RTHOOK(14);
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
						} else {
							RTHOOK(15);
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						}
					}
				}
			}
		}
		RTHOOK(16);
		if ((EIF_BOOLEAN) (Result && (EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)))) {
			for (;;) {
				RTHOOK(17);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) !Result)) break;
				RTHOOK(18);
				loc1++;
				RTHOOK(19);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
				if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
					RTHOOK(20);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(21);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
					ti4_1 = (EIF_INTEGER_32) (tc1);
					loc3 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(22);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 128L)) && (EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 192L)));
				}
				RTHOOK(23);
				loc2--;
			}
		}
		RTHOOK(24);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.looks_like_ascii */
EIF_BOOLEAN F23_433 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("looks_like_ascii", 22, Current, 1, 1, 442);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(4);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 128L));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.has_multibyte_utf8 */
EIF_BOOLEAN F23_434 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has_multibyte_utf8", 22, Current, 1, 1, 430);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = Result;
		}
		if (tb1) break;
		RTHOOK(3);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
		ti4_1 = (EIF_INTEGER_32) (tc1);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 128L));
		RTHOOK(4);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ENCODING_DETECTOR}.high_byte_percentage */
EIF_REAL_64 F23_435 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("high_byte_percentage", 22, Current, 2, 1, 431);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(3);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
		ti4_2 = (EIF_INTEGER_32) (tc1);
		if ((EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 128L))) {
			RTHOOK(4);
			loc1++;
		}
		RTHOOK(5);
		loc2++;
	}
	RTHOOK(6);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	if ((EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
		Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc1) /  (EIF_REAL_64) (ti4_2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("valid_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (Result, (EIF_REAL_64) 0.0) && (EIF_BOOLEAN) eif_is_less_equal_real_64 (Result, (EIF_REAL_64) 1.0))) {
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

void EIF_Minit20 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
