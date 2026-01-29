/*
 * Code for class LINKED_LIST [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li1059.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKED_LIST}.make */
void F858_5539 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 857, Current, 0, 0, 8530);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_before", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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
}

/* {LINKED_LIST}.make_from_iterable */
void F858_5540 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("make_from_iterable", 857, Current, 1, 1, 8531);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F858_5539(Current));
	RTHOOK(2);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(arg1))-365])(arg1));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc1)-334])(loc1));
		if (tb1) break;
		RTHOOK(3);
		ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc1)-334])(loc1));
		(nstcall = 0, F858_5566(Current, ti4_1));
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc1)-334])(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.item */
EIF_INTEGER_32 F858_5541 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("item", 857, Current, 1, 0, 8532);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("readable", EX_PRE);
		RTTE((nstcall = 0, F858_5549(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F858_5552(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTCT0("attached active as a", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_1_0_0_0_);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.first */
EIF_INTEGER_32 F858_5542 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("first", 857, Current, 1, 0, 8533);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F667_4976(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0("attached first_element as f", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_1_0_0_0_);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.last */
EIF_INTEGER_32 F858_5543 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("last", 857, Current, 1, 0, 8534);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F667_4976(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0("attached last_element as l", EX_CHECK);
	tr1 = (nstcall = 0, F858_5582(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_1_0_0_0_);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.index */
EIF_INTEGER_32 F858_5544 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("index", 857, Current, 2, 0, 8535);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(2);
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			RTHOOK(4);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(5);
			loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			RTHOOK(6);
			loc2 = *(EIF_REFERENCE *)(Current);
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == loc1) || (EIF_BOOLEAN)(loc2 == NULL))) break;
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
				loc2 = (EIF_REFERENCE) tr1;
				RTHOOK(9);
				Result++;
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

/* {LINKED_LIST}.cursor */
EIF_REFERENCE F858_5545 (EIF_REFERENCE Current)
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
	
	RTEAA("cursor", 857, Current, 0, 0, 8536);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,233,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y4237,Y4237_gen_type,Dftype(Current),350);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 233, _OBJSIZ_1_2_0_0_0_0_0_0_);
	}
	(nstcall = -1, F234_2741(RTCW(Result), *(EIF_REFERENCE *)(Current + _REFACS_1_), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("cursor_not_void", EX_POST);
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

/* {LINKED_LIST}.new_cursor */
EIF_REFERENCE F858_5546 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 857, Current, 0, 0, 8537);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,414,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y4237,Y4237_gen_type,Dftype(Current),350);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 414, _OBJSIZ_2_1_0_4_0_0_0_0_);
	}
	(nstcall = -1, F401_4770(RTCW(Result), Current));
	RTHOOK(2);
	(nstcall = 1, F415_4793(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {LINKED_LIST}.first_element */
EIF_REFERENCE F858_5547 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {LINKED_LIST}.count */
EIF_INTEGER_32 F858_5548 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
}


/* {LINKED_LIST}.readable */
EIF_BOOLEAN F858_5549 (EIF_REFERENCE Current)
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
	
	RTEAA("readable", 857, Current, 0, 0, 8540);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F858_5552(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.after */
EIF_BOOLEAN F858_5550 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


/* {LINKED_LIST}.before */
EIF_BOOLEAN F858_5551 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {LINKED_LIST}.off */
EIF_BOOLEAN F858_5552 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("off", 857, Current, 0, 0, 8543);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result || tb1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.isfirst */
EIF_BOOLEAN F858_5553 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("isfirst", 857, Current, 0, 0, 8544);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) && (EIF_BOOLEAN)(tr1 == tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("valid_position", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F667_4976(Current));
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

/* {LINKED_LIST}.islast */
EIF_BOOLEAN F858_5554 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("islast", 857, Current, 1, 0, 8545);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_))) {
		RTHOOK(2);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(3);
		Result = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			Result = (EIF_BOOLEAN)(tr1 == NULL);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_position", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F667_4976(Current));
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

/* {LINKED_LIST}.valid_cursor */
EIF_BOOLEAN F858_5555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("valid_cursor", 857, Current, 3, 1, 8546);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = arg1;
	loc3 = RTRV(eif_final_id(Y4421,Y4421_gen_type,dftype,630),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(2);
		loc1 = *(EIF_REFERENCE *)(Current);
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(loc3);
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		Result = '\01';
		tb1 = *(EIF_BOOLEAN *)(loc3+ _CHROFF_1_0_);
		if (!tb1) {
			tb1 = *(EIF_BOOLEAN *)(loc3+ _CHROFF_1_1_);
			Result = tb1;
		}
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (Result || (EIF_BOOLEAN)(loc1 == NULL))) break;
			RTHOOK(6);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == loc2);
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			loc1 = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.full */
EIF_BOOLEAN F858_5556 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {LINKED_LIST}.is_inserted */
EIF_BOOLEAN F858_5557 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_inserted", 857, Current, 1, 1, 8548);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F858_5582(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		
		RTHOOK(3);
		Result = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
		if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
			Result = (EIF_BOOLEAN)(arg1 == (nstcall = 0, F858_5541(Current)));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.start */
void F858_5558 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("start", 857, Current, 0, 0, 8549);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(4);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("at_first", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F667_4976(Current))) {
			tb1 = (nstcall = 0, F858_5553(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("empty_convention", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F667_4976(Current))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
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

/* {LINKED_LIST}.finish */
void F858_5559 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("finish", 857, Current, 1, 0, 8550);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTHOOK(3);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("at_last", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F667_4976(Current))) {
			tb1 = (nstcall = 0, F858_5554(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("empty_convention", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F667_4976(Current))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
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

/* {LINKED_LIST}.forth */
void F858_5560 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("forth", 857, Current, 1, 0, 8551);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F858_5544(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(4);
		if ((nstcall = 0, F667_4976(Current))) {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	} else {
		RTHOOK(6);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(7);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
			tb1 = (EIF_BOOLEAN)(tr2 != NULL);
		}
		if (tb1) {
			RTHOOK(8);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(9);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("moved_forth", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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
}

/* {LINKED_LIST}.back */
void F858_5561 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("back", 857, Current, 0, 0, 8552);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((nstcall = 0, F667_4976(Current))) {
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(5);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			RTHOOK(6);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(7);
			if ((nstcall = 0, F858_5553(Current))) {
				RTHOOK(8);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(9);
				tr1 = (nstcall = 0, F858_5579(Current));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.move */
void F858_5562 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,tr7);
	RTLR(8,tr8);
	RTLR(9,loc3);
	RTLR(10,tr9);
	RTLIU(11);
	
	RTEAA("move", 857, Current, 3, 1, 8553);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F858_5544(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, F858_5544(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, F858_5544(Current));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (nstcall = 0, F858_5544(Current));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = (nstcall = 0, F858_5544(Current));
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_6 = (nstcall = 0, F858_5544(Current));
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		RTE_OT
		ti4_7 = (nstcall = 0, F858_5544(Current));
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		RTE_OT
		ti4_8 = (nstcall = 0, F858_5544(Current));
		tr8 = NULL;
		RTE_O
		tr8 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			RTHOOK(3);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(4);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
		RTHOOK(5);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg1) || (EIF_BOOLEAN)(loc3 == NULL))) break;
			RTHOOK(7);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc3;
			RTHOOK(8);
			tr9 = *(EIF_REFERENCE *)(RTCW(loc3));
			loc3 = (EIF_REFERENCE) tr9;
			RTHOOK(9);
			loc1++;
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			RTHOOK(11);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(12);
			RTAR(Current, loc3);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc3;
		}
	} else {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(14);
			loc2 = (nstcall = 0, F858_5544(Current));
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + arg1);
			RTHOOK(15);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(16);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(17);
			tr9 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr9);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr9;
			RTHOOK(18);
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(19);
				(nstcall = 0, F858_5562(Current, loc2));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("too_far_right", EX_POST);
		tb1 = '\01';
		RTCO(tr6);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_6 + arg1) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))) {
			tb1 = (nstcall = 0, F521_4895(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("too_far_left", EX_POST);
		tb1 = '\01';
		RTCO(tr7);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_7 + arg1) < ((EIF_INTEGER_32) 1L))) {
			tb1 = (nstcall = 0, F521_4895(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("expected_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F521_4895(Current))) {
			RTCO(tr8);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == (EIF_INTEGER_32) (ti4_8 + arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("moved_if_inbounds", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		RTCO(tr1);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + arg1) >= ((EIF_INTEGER_32) 0L))) {
			RTCO(tr2);
			tb2 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_2 + arg1) <= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L)));
		}
		if (tb2) {
			RTCO(tr3);
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == (EIF_INTEGER_32) (ti4_3 + arg1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("before_set", EX_POST);
		tb1 = '\01';
		RTCO(tr4);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_4 + arg1) <= ((EIF_INTEGER_32) 0L))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("after_set", EX_POST);
		tb1 = '\01';
		RTCO(tr5);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_5 + arg1) >= (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L)))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.go_i_th */
void F858_5563 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("go_i_th", 857, Current, 0, 1, 8554);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_cursor_index", EX_PRE);
		RTTE((nstcall = 0, F798_5505(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(7);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(8);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(9);
			tr1 = (nstcall = 0, F858_5582(Current));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(10);
			ti4_1 = (nstcall = 0, F858_5544(Current));
			(nstcall = 0, F858_5562(Current, (EIF_INTEGER_32) (arg1 - ti4_1)));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("position_expected", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == arg1)) {
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

/* {LINKED_LIST}.go_to */
void F858_5564 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("go_to", 857, Current, 1, 1, 8555);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("cursor_position_valid", EX_PRE);
		RTTE((nstcall = 0, F858_5555(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_final_id(Y4421,Y4421_gen_type,dftype,630),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_1_0_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) tb1;
		RTHOOK(4);
		tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_1_1_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) tb1;
		RTHOOK(5);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				RTHOOK(8);
				tr1 = (nstcall = 0, F858_5582(Current));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(loc1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			}
		}
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.put_front */
void F858_5565 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("put_front", 857, Current, 1, 1, 8556);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F813_5513(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = (nstcall = 0, F858_5578(Current, arg1));
	RTHOOK(3);
	(nstcall = 1, F120_1627(RTCW(loc1), *(EIF_REFERENCE *)(Current)));
	RTHOOK(4);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	RTHOOK(5);
	tb1 = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		tb1 = (nstcall = 0, F667_4976(Current));
	}
	if (tb1) {
		RTHOOK(6);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(7);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("item_inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5542(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.extend */
void F858_5566 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLIU(3);
	
	RTEAA("extend", 857, Current, 2, 1, 8557);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F813_5513(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F858_5578(Current, arg1));
	RTHOOK(3);
	if ((nstcall = 0, F667_4976(Current))) {
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		RTHOOK(5);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(6);
		loc2 = (nstcall = 0, F858_5582(Current));
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(8);
			(nstcall = 1, F120_1627(RTCW(loc2), loc1));
			RTHOOK(9);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
				RTHOOK(10);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
			}
		}
	}
	RTHOOK(11);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("item_inserted", EX_POST);
		if ((nstcall = 0, F858_5557(Current, arg1))) {
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

/* {LINKED_LIST}.put_left */
void F858_5567 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("put_left", 857, Current, 3, 1, 8558);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F813_5513(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_2 = (nstcall = 0, F858_5544(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == NULL)) {
		RTHOOK(5);
		(nstcall = 0, F858_5565(Current, arg1));
	} else {
		RTHOOK(6);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
			RTHOOK(7);
			(nstcall = 0, F858_5561(Current));
			RTHOOK(8);
			(nstcall = 0, F858_5568(Current, arg1));
			RTHOOK(9);
			(nstcall = 0, F858_5562(Current, ((EIF_INTEGER_32) 2L)));
		} else {
			RTHOOK(10);
			ti4_3 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_0_0_0_);
			loc1 = (nstcall = 0, F858_5578(Current, ti4_3));
			RTHOOK(11);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc2));
			(nstcall = 1, F120_1627(RTCW(loc1), tr2));
			RTHOOK(12);
			(nstcall = 1, F116_1624(RTCW(loc2), arg1));
			RTHOOK(13);
			(nstcall = 1, F120_1627(RTCW(loc2), loc1));
			RTHOOK(14);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
			RTHOOK(15);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("new_index", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("previous_exists", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5579(Current)) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("item_inserted", EX_POST);
		tb1 = '\0';
		tr2 = (nstcall = 0, F858_5579(Current));
		loc3 = tr2;
		if (EIF_TEST(loc3)) {
			ti4_3 = *(EIF_INTEGER_32 *)(loc3+ _LNGOFF_1_0_0_0_);
			tb1 = (EIF_BOOLEAN)(ti4_3 == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.put_right */
void F858_5568 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("put_right", 857, Current, 4, 1, 8559);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F813_5513(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_after", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_2 = (nstcall = 0, F858_5544(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = (nstcall = 0, F858_5578(Current, arg1));
	
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		RTHOOK(5);
		(nstcall = 1, F120_1627(RTCW(loc1), *(EIF_REFERENCE *)(Current)));
		RTHOOK(6);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		RTHOOK(7);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(8);
		loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(10);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc2));
			(nstcall = 1, F120_1627(RTCW(loc1), tr2));
			RTHOOK(11);
			(nstcall = 1, F120_1627(RTCW(loc2), loc1));
		}
	}
	RTHOOK(12);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("same_index", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("next_exists", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5580(Current)) != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("item_inserted", EX_POST);
		tb3 = '\01';
		if ((EIF_BOOLEAN) !tb1) {
			tb4 = '\0';
			tr2 = (nstcall = 0, F858_5580(Current));
			loc3 = tr2;
			if (EIF_TEST(loc3)) {
				ti4_3 = *(EIF_INTEGER_32 *)(loc3+ _LNGOFF_1_0_0_0_);
				tb4 = (EIF_BOOLEAN)(ti4_3 == arg1);
			}
			tb3 = tb4;
		}
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("item_inserted_before", EX_POST);
		tb3 = '\01';
		if (tb2) {
			tb4 = '\0';
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc4 = tr2;
			if (EIF_TEST(loc4)) {
				ti4_3 = *(EIF_INTEGER_32 *)(loc4+ _LNGOFF_1_0_0_0_);
				tb4 = (EIF_BOOLEAN)(ti4_3 == arg1);
			}
			tb3 = tb4;
		}
		if (tb3) {
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

/* {LINKED_LIST}.replace */
void F858_5569 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("replace", 857, Current, 1, 1, 8560);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, F714_5000(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replaceable", EX_PRE);
		RTTE((nstcall = 0, F618_4936(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(5);
		(nstcall = 1, F116_1624(RTCW(loc1), arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("item_replaced", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5541(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.merge_left */
void F858_5570 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc4);
	RTLR(6,tr4);
	RTLR(7,loc1);
	RTLR(8,loc3);
	RTLIU(9);
	
	RTEAA("merge_left", 857, Current, 4, 1, 8561);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F813_5513(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_current", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, F858_5544(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		ti4_4 = ti4_5;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	tr4 = (nstcall = 1, F858_5582(RTCW(arg1)));
	loc4 = tr4;
	if (EIF_TEST(loc4)) {
		RTHOOK(6);
		tr4 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc1 = (EIF_REFERENCE) tr4;
		RTHOOK(7);
		ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		loc2 = (EIF_INTEGER_32) ti4_5;
		RTHOOK(8);
		(nstcall = 1, F858_5575(RTCW(arg1)));
		
		RTHOOK(9);
		if ((nstcall = 0, F667_4976(Current))) {
			RTHOOK(10);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
			RTHOOK(11);
			tr4 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr4);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr4;
		} else {
			RTHOOK(12);
			if ((nstcall = 0, F858_5553(Current))) {
				RTHOOK(13);
				(nstcall = 1, F120_1627(loc4, *(EIF_REFERENCE *)(Current)));
				RTHOOK(14);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
			} else {
				RTHOOK(15);
				loc3 = (nstcall = 0, F858_5579(Current));
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(17);
					(nstcall = 1, F120_1627(RTCW(loc3), loc1));
				}
				RTHOOK(18);
				(nstcall = 1, F120_1627(loc4, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
			}
		}
		RTHOOK(19);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_)) += loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("new_index", EX_POST);
		RTCO(tr2);
		RTCO(tr3);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == (EIF_INTEGER_32) (ti4_3 + ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("other_is_empty", EX_POST);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
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
}

/* {LINKED_LIST}.merge_right */
void F858_5571 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc4);
	RTLR(5,tr3);
	RTLR(6,loc1);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("merge_right", 857, Current, 4, 1, 8562);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F813_5513(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_after", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_current", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != Current), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 0, F858_5544(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	tr3 = (nstcall = 1, F858_5582(RTCW(arg1)));
	loc4 = tr3;
	if (EIF_TEST(loc4)) {
		RTHOOK(6);
		tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc1 = (EIF_REFERENCE) tr3;
		RTHOOK(7);
		ti4_4 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_3_0_0_);
		loc2 = (EIF_INTEGER_32) ti4_4;
		RTHOOK(8);
		(nstcall = 1, F858_5575(RTCW(arg1)));
		
		RTHOOK(9);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc3 == NULL)) {
			RTHOOK(11);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
			RTHOOK(12);
			tr3 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr3);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr3;
		} else {
			RTHOOK(13);
			if ((EIF_BOOLEAN) !(nstcall = 0, F858_5554(Current))) {
				RTHOOK(14);
				tr3 = *(EIF_REFERENCE *)(RTCW(loc3));
				(nstcall = 1, F120_1627(loc4, tr3));
			}
			RTHOOK(15);
			(nstcall = 1, F120_1627(RTCW(loc3), loc1));
		}
		RTHOOK(16);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_)) += loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("same_index", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("other_is_empty", EX_POST);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.remove */
void F858_5572 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLIU(6);
	
	RTEAA("remove", 857, Current, 4, 0, 8563);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F601_4931(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, F714_5000(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(5);
		if ((nstcall = 0, F858_5553(Current))) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
			RTHOOK(7);
			(nstcall = 1, F120_1628(RTCW(loc2)));
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == ((EIF_INTEGER_32) 1L))) {
				
				RTHOOK(10);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			RTHOOK(11);
			if ((nstcall = 0, F858_5554(Current))) {
				RTHOOK(12);
				tr1 = (nstcall = 0, F858_5579(Current));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
				RTHOOK(13);
				loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				RTHOOK(14);
				if ((EIF_BOOLEAN)(loc3 != NULL)) {
					RTHOOK(15);
					(nstcall = 1, F120_1628(RTCW(loc3)));
				}
				RTHOOK(16);
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(17);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
				loc1 = (EIF_REFERENCE) tr1;
				RTHOOK(18);
				loc4 = (nstcall = 0, F858_5579(Current));
				RTHOOK(19);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTHOOK(20);
					(nstcall = 1, F120_1627(RTCW(loc4), loc1));
				}
				RTHOOK(21);
				(nstcall = 1, F120_1628(RTCW(loc2)));
				RTHOOK(22);
				RTAR(Current, loc1);
				*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
			}
		}
		RTHOOK(23);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
		RTHOOK(24);
		(nstcall = 0, F858_5583(Current, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("after_when_empty", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F667_4976(Current))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.remove_left */
void F858_5573 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove_left", 857, Current, 0, 0, 8564);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("left_exists", EX_PRE);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F858_5544(Current)) > ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_2 = (nstcall = 0, F858_5544(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	(nstcall = 0, F858_5562(Current, ((EIF_INTEGER_32) -2L)));
	RTHOOK(3);
	(nstcall = 0, F858_5574(Current));
	RTHOOK(4);
	(nstcall = 0, F858_5560(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_index", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.remove_right */
void F858_5574 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("remove_right", 857, Current, 4, 0, 8565);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("right_exists", EX_PRE);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F858_5544(Current)) < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_);
		RTE_OT
		ti4_2 = (nstcall = 0, F858_5544(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		RTHOOK(3);
		loc2 = *(EIF_REFERENCE *)(Current);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(5);
			loc1 = (EIF_REFERENCE) loc2;
			RTHOOK(6);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc2));
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
			RTHOOK(7);
			loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(9);
				(nstcall = 1, F120_1628(RTCW(loc3)));
			}
			RTHOOK(10);
			tr2 = *(EIF_REFERENCE *)(Current);
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
		}
	} else {
		RTHOOK(11);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(12);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(13);
			tr2 = *(EIF_REFERENCE *)(RTCW(loc3));
			loc4 = (EIF_REFERENCE) tr2;
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				RTHOOK(15);
				loc1 = (EIF_REFERENCE) loc4;
				RTHOOK(16);
				tr2 = *(EIF_REFERENCE *)(RTCW(loc4));
				(nstcall = 1, F120_1627(RTCW(loc3), tr2));
				RTHOOK(17);
				(nstcall = 1, F120_1628(RTCW(loc4)));
			}
		}
	}
	RTHOOK(18);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_))--;
	RTHOOK(19);
	(nstcall = 0, F858_5583(Current, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("new_count", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("same_index", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F858_5544(Current)) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.wipe_out */
void F858_5575 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wipe_out", 857, Current, 0, 0, 8566);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F601_4931(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F858_5584(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F667_4976(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_before", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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
}

/* {LINKED_LIST}.copy */
void F858_5576 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("copy", 857, Current, 1, 1, 8567);
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
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(6);
			(nstcall = 0, F858_5584(Current));
			RTHOOK(7);
			tr1 = (nstcall = 1, F858_5545(RTCW(arg1)));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			(nstcall = 1, F858_5558(RTCW(arg1)));
			for (;;) {
				RTHOOK(9);
				tb1 = (nstcall = 1, F858_5552(RTCW(arg1)));
				if (tb1) break;
				RTHOOK(10);
				ti4_1 = (nstcall = 1, F858_5541(RTCW(arg1)));
				(nstcall = 0, F858_5566(Current, ti4_1));
				RTHOOK(11);
				(nstcall = 0, F858_5559(Current));
				RTHOOK(12);
				(nstcall = 1, F858_5560(RTCW(arg1)));
			}
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(14);
				(nstcall = 1, F858_5564(RTCW(arg1), loc1));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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

/* {LINKED_LIST}.new_chain */
EIF_REFERENCE F858_5577 (EIF_REFERENCE Current)
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
	
	RTEAA("new_chain", 857, Current, 0, 0, 8568);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, F858_5539(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
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

/* {LINKED_LIST}.new_cell */
EIF_REFERENCE F858_5578 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("new_cell", 857, Current, 0, 1, 8569);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,119,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y4415,Y4415_gen_type,Dftype(Current),615);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 119, _OBJSIZ_1_0_0_1_0_0_0_0_);
	}
	(nstcall = -1, F116_1624(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
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

/* {LINKED_LIST}.previous */
EIF_REFERENCE F858_5579 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("previous", 857, Current, 1, 0, 8570);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(2);
		Result = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	} else {
		RTHOOK(3);
		tb1 = '\01';
		if (!(nstcall = 0, F858_5553(Current))) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
		}
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(4);
			loc1 = *(EIF_REFERENCE *)(Current);
			for (;;) {
				RTHOOK(5);
				tb1 = '\01';
				if (!(EIF_BOOLEAN)(loc1 == NULL)) {
					tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
					tb1 = (EIF_BOOLEAN)(tr1 == *(EIF_REFERENCE *)(Current + _REFACS_1_));
				}
				if (tb1) break;
				RTHOOK(6);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
				loc1 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(7);
			Result = (EIF_REFERENCE) loc1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.next */
EIF_REFERENCE F858_5580 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("next", 857, Current, 1, 0, 8571);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		RTHOOK(2);
		Result = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	} else {
		RTHOOK(3);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.active */
EIF_REFERENCE F858_5581 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {LINKED_LIST}.last_element */
EIF_REFERENCE F858_5582 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("last_element", 857, Current, 1, 0, 8573);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	for (;;) {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTHOOK(3);
		Result = (EIF_REFERENCE) loc1;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		loc1 = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {LINKED_LIST}.cleanup_after_remove */
void F858_5583 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("cleanup_after_remove", 857, Current, 0, 1, 8574);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void_cell", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {LINKED_LIST}.internal_wipe_out */
void F858_5584 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("internal_wipe_out", 857, Current, 0, 0, 8575);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F601_4931(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F667_4976(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_before", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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

/* {LINKED_LIST}._invariant */
void F858_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTEAINV(l_feature_name, 1058, Current, 0, 0);
	RTIT("prunable", Current);
	if ((nstcall = 0, F601_4931(Current))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("empty_constraint", Current);
	tb1 = '\01';
	if ((nstcall = 0, F667_4976(Current))) {
		tb1 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL) && (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("not_void_unless_empty", Current);
	tb1 = '\01';
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == NULL)) {
		tb1 = (nstcall = 0, F667_4976(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("before_constraint", Current);
	if ((!(*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) || ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == *(EIF_REFERENCE *)(Current))))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("after_constraint", Current);
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 0, F858_5582(Current));
		tb1 = (EIF_BOOLEAN)(tr1 == tr2);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit1059 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
