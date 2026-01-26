/*
 * Code for class CHAIN [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ch574.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CHAIN}.first */
EIF_INTEGER_32 F799_5489 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("first", 798, Current, 1, 0, 7961);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4381[dtype-663])(Current));
	RTHOOK(4);
	Result = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
	RTHOOK(5);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {CHAIN}.last */
EIF_INTEGER_32 F799_5490 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("last", 798, Current, 1, 0, 7962);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4393[dtype-663])(Current));
	RTHOOK(4);
	Result = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
	RTHOOK(5);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {CHAIN}.has */
EIF_BOOLEAN F799_5491 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has", 798, Current, 1, 1, 7963);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(2);
	Result = (nstcall = 0, F522_4889(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current));
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

/* {CHAIN}.index_of */
EIF_INTEGER_32 F799_5492 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("index_of", 798, Current, 1, 2, 7964);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_occurrences", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(3);
	Result = (nstcall = 0, F522_4890(Current, arg1, arg2));
	RTHOOK(4);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("non_negative_result", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {CHAIN}.i_th */
EIF_INTEGER_32 F799_5493 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("i_th", 798, Current, 1, 1, 7965);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4410[dtype-776])(Current, (EIF_REFERENCE) &arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4661[dtype-776])(Current, arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(4);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4723[dtype-856])(Current, arg1));
	RTHOOK(5);
	Result = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
	RTHOOK(6);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {CHAIN}.at */
EIF_INTEGER_32 F799_5494 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("at", 798, Current, 1, 1, 7966);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4410[dtype-776])(Current, (EIF_REFERENCE) &arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4723[dtype-856])(Current, arg1));
	RTHOOK(4);
	Result = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
	RTHOOK(5);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {CHAIN}.occurrences */
EIF_INTEGER_32 F799_5495 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("occurrences", 798, Current, 1, 1, 7967);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(2);
	Result = (nstcall = 0, F522_4893(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("non_negative_occurrences", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {CHAIN}.lower */
EIF_INTEGER_32 F799_5496 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {CHAIN}.start */
void F799_5497 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("start", 798, Current, 0, 0, 7969);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current))) {
		RTHOOK(2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4723[dtype-856])(Current, ((EIF_INTEGER_32) 1L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("at_first", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4724[dtype-856])(Current));
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

/* {CHAIN}.finish */
void F799_5498 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("finish", 798, Current, 0, 0, 7970);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4723[dtype-856])(Current, ti4_1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("at_last", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4725[dtype-856])(Current));
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

/* {CHAIN}.move */
void F799_5499 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("move", 798, Current, 3, 1, 7971);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		for (;;) {
			RTHOOK(2);
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc1 == arg1)) {
				tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current));
			}
			if (tb1) break;
			RTHOOK(3);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4394[dtype-663])(Current));
			RTHOOK(4);
			loc1++;
		}
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current));
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + arg1);
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc3 <= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(8);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4381[dtype-663])(Current));
				RTHOOK(9);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
			} else {
				RTHOOK(10);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4381[dtype-663])(Current));
				RTHOOK(11);
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(12);
					if ((EIF_BOOLEAN)(loc2 == loc3)) break;
					RTHOOK(13);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4394[dtype-663])(Current));
					RTHOOK(14);
					loc2++;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("too_far_right", EX_POST);
		tb2 = '\01';
		RTCO(tr1);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + arg1) > (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)))) {
			tb2 = (nstcall = 0, F522_4895(Current));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("too_far_left", EX_POST);
		tb2 = '\01';
		RTCO(tr2);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_2 + arg1) < ((EIF_INTEGER_32) 1L))) {
			tb2 = (nstcall = 0, F522_4895(Current));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("expected_index", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F522_4895(Current))) {
			RTCO(tr3);
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == (EIF_INTEGER_32) (ti4_3 + arg1));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {CHAIN}.go_i_th */
void F799_5500 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("go_i_th", 798, Current, 0, 1, 7972);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_cursor_index", EX_PRE);
		RTTE((nstcall = 0, F799_5505(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current));
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4722[dtype-856])(Current, (EIF_INTEGER_32) (arg1 - ti4_1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("position_expected", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == arg1)) {
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

/* {CHAIN}.valid_index */
EIF_BOOLEAN F799_5501 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_index", 798, Current, 0, 1, 7973);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) ((nstcall = 0, F799_5496(Current)) <= arg1)) {
				tb2 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4659[dtype-776])(Current)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("valid_index_definition", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
			tb1 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {CHAIN}.isfirst */
EIF_BOOLEAN F799_5502 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("isfirst", 798, Current, 0, 0, 7974);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current))) {
		Result = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_position", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current));
		}
		if (tb1) {
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

/* {CHAIN}.islast */
EIF_BOOLEAN F799_5503 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("islast", 798, Current, 0, 0, 7975);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current))) {
		Result = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_position", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current));
		}
		if (tb1) {
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

/* {CHAIN}.off */
EIF_BOOLEAN F799_5504 (EIF_REFERENCE Current)
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
	
	RTEAA("off", 798, Current, 0, 0, 7976);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == ((EIF_INTEGER_32) 0L))) {
		Result = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == (EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) + ((EIF_INTEGER_32) 1L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {CHAIN}.valid_cursor_index */
EIF_BOOLEAN F799_5505 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_cursor_index", 798, Current, 0, 1, 7977);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) + ((EIF_INTEGER_32) 1L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_cursor_index_definition", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) + ((EIF_INTEGER_32) 1L)));
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

/* {CHAIN}.put */
void F799_5506 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put", 798, Current, 0, 1, 7978);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writeable", EX_PRE);
		RTTE((nstcall = 0, F715_5000(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replaceable", EX_PRE);
		RTTE((nstcall = 0, F619_4936(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4419[dtype-663])(Current, (EIF_REFERENCE) &arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("same_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_inserted", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4399[dtype-663])(Current, (EIF_REFERENCE) &arg1))) {
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

/* {CHAIN}.put_i_th */
void F799_5507 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("put_i_th", 798, Current, 1, 2, 7979);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4410[dtype-776])(Current, (EIF_REFERENCE) &arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4410[dtype-776])(Current, (EIF_REFERENCE) &arg2)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(4);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4723[dtype-856])(Current, arg2));
	RTHOOK(5);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4419[dtype-663])(Current, (EIF_REFERENCE) &arg1));
	RTHOOK(6);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &arg2)) == arg1)) {
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

/* {CHAIN}.append */
void F799_5508 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("append", 798, Current, 2, 1, 7980);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(4);
		loc1 = (nstcall = 0, F1_14(Current));
	}
	RTHOOK(5);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(6);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4381[Dtype(RTCW(loc1))-663])(loc1));
	for (;;) {
		RTHOOK(7);
		tb1 = (nstcall = 1, F522_4895(RTCW(loc1)));
		if (tb1) break;
		RTHOOK(8);
		ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[Dtype(RTCW(loc1))-663])(loc1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[dtype-663])(Current, (EIF_REFERENCE) &ti4_2));
		RTHOOK(9);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4393[dtype-663])(Current));
		RTHOOK(10);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4394[Dtype(RTCW(loc1))-663])(loc1));
	}
	RTHOOK(11);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) >= ti4_1)) {
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

/* {CHAIN}.fill */
void F799_5509 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("fill", 798, Current, 2, 1, 7981);
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
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F814_5513(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4377[Dtype(RTCW(arg1))-663])(arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(5);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4381[Dtype(RTCW(loc1))-663])(loc1));
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) !(nstcall = 0, F814_5513(Current))) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4380[Dtype(RTCW(loc1))-663])(loc1));
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(7);
		ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4379[Dtype(RTCW(loc1))-663])(loc1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[dtype-663])(Current, (EIF_REFERENCE) &ti4_1));
		RTHOOK(8);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4393[dtype-663])(Current));
		RTHOOK(9);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4394[Dtype(RTCW(loc1))-663])(loc1));
	}
	RTHOOK(10);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {CHAIN}.swap */
void F799_5510 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("swap", 798, Current, 3, 1, 7982);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4380[dtype-663])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4661[dtype-776])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &arg1));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4421[dtype-856])(Current));
	RTHOOK(4);
	loc1 = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
	RTHOOK(5);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4723[dtype-856])(Current, arg1));
	RTHOOK(6);
	loc2 = (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
	RTHOOK(7);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4419[dtype-663])(Current, (EIF_REFERENCE) &loc1));
	RTHOOK(8);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4423[dtype-856])(Current, loc3));
	RTHOOK(9);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4419[dtype-663])(Current, (EIF_REFERENCE) &loc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("swapped_to_item", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("swapped_from_item", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &arg1)) == ti4_2)) {
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
}

/* {CHAIN}.remove */
void F799_5512 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("remove", 798, Current, 0, 0, 7983);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4398[dtype-663])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, F715_5000(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {CHAIN}._invariant */
void F799_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 573, Current, 0, 0);
	RTIT("non_negative_index", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("index_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) <= (EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("off_definition", Current);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == ((EIF_INTEGER_32) 0L))) {
		tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == (EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) + ((EIF_INTEGER_32) 1L)));
	}
	if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4380[dtype-663])(Current)) == tb1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("isfirst_definition", Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current))) {
		tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == ((EIF_INTEGER_32) 1L));
	}
	if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4724[dtype-856])(Current)) == tb1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("islast_definition", Current);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F668_4976(Current))) {
		tb1 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current)) == (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)));
	}
	if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4725[dtype-856])(Current)) == tb1)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("item_corresponds_to_index", Current);
	tb1 = '\01';
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4380[dtype-663])(Current))) {
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4388[dtype-663])(Current));
		tb1 = (EIF_BOOLEAN)((nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current)) == (nstcall = 0, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &ti4_1)));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit574 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
