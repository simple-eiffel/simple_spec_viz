/*
 * Code for class ARRAYED_LIST [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar447.h"
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

/* {ARRAYED_LIST}.make */
void F867_5785 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make", 866, Current, 0, 1, 8779);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_number_of_items", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	tr1 = RTLNSP2(eif_final_id(Y3460,Y3460_gen_type,Dftype(Current),281).id,EO_REF,arg1,sizeof(EIF_REFERENCE), EIF_FALSE);
	RT_SPECIAL_COUNT(tr1) = 0;
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("correct_position", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_empty", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
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

/* {ARRAYED_LIST}.make_filled */
void F867_5786 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make_filled", 866, Current, 0, 1, 8780);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_number_of_items", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_default", EX_PRE);
		tr1 = RTLNTY2(eif_final_id(Y3466,Y3466_gen_type,dftype,281), 0x00);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5304[Dtype(tr1)-965])(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	tr1 = RTLNTY2(eif_final_id(Y3466,Y3466_gen_type,dftype,281), 0x00);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5312[Dtype(tr1)-965])(tr1));
	tr1 = RTCCL(tr2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R3459[dtype-281])(Current, tr1, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("correct_position", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("filled", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4424[dtype-663])(Current))) {
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

/* {ARRAYED_LIST}.make_from_array */
void F867_5787 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("make_from_array", 866, Current, 0, 1, 8781);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("array_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("shared", EX_POST);
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4901[dtype-866])(Current));
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("correct_position", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("filled", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == ti4_1)) {
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

/* {ARRAYED_LIST}.make_from_iterable */
void F867_5788 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("make_from_iterable", 866, Current, 4, 1, 8782);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R4378[dtype-663])(Current, arg1));
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[dtype-866])(Current, loc3));
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(arg1))-365])(arg1));
	loc4 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc4)-334])(loc4));
		if (tb1) break;
		RTHOOK(5);
		loc2++;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc3)) {
			RTHOOK(7);
			loc3 = (EIF_INTEGER_32) loc2;
			RTHOOK(8);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5169[Dtype(RTCW(loc1))-898])(loc1, loc3));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
		}
		RTHOOK(10);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc4)-334])(loc4));
		tr2 = RTCCL(tr1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5154[Dtype(RTCW(loc1))-898])(loc1, tr2));
		RTHOOK(11);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc4)-334])(loc4));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.area */
EIF_REFERENCE F867_5789 (EIF_REFERENCE Current)
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
	
	RTEAA("area", 866, Current, 0, 0, 8783);
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

/* {ARRAYED_LIST}.item */
EIF_REFERENCE F867_5790 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("item", 866, Current, 0, 0, 8784);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4416[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("not_off", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4380[dtype-663])(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCK;
		RTHOOK(3);
		RTCT("index_is_valid", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4661[dtype-776])(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))), label_3);
		RTCK;
		RTJB;
label_3:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.i_th */
EIF_REFERENCE F867_5791 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("i_th", 866, Current, 0, 1, 8785);
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.at */
EIF_REFERENCE F867_5792 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("at", 866, Current, 0, 1, 8786);
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.first */
EIF_REFERENCE F867_5793 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("first", 866, Current, 0, 0, 8787);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.last */
EIF_REFERENCE F867_5794 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("last", 866, Current, 0, 0, 8788);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.index */
EIF_INTEGER_32 F867_5795 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
}


/* {ARRAYED_LIST}.cursor */
EIF_REFERENCE F867_5796 (EIF_REFERENCE Current)
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
	
	RTEAA("cursor", 866, Current, 0, 0, 8790);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(235, 0x01).id, 235, _OBJSIZ_0_0_0_1_0_0_0_0_);
	(nstcall = -1, F236_2747(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)));
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

/* {ARRAYED_LIST}.has */
EIF_BOOLEAN F867_5797 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("has", 866, Current, 3, 1, 8791);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) && (EIF_BOOLEAN)(arg1 != NULL))) {
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= loc3) || Result)) break;
			RTHOOK(5);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, loc2));
			Result = (EIF_BOOLEAN) RTEQ(arg1, tr1);
			RTHOOK(6);
			loc2++;
		}
	} else {
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= loc3) || Result)) break;
			RTHOOK(8);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, loc2));
			Result = (EIF_BOOLEAN) RTCEQ(arg1, tr1);
			RTHOOK(9);
			loc2++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current));
		}
		if (tb1) {
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
	return Result;
}

/* {ARRAYED_LIST}.to_array */
EIF_REFERENCE F867_5798 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("to_array", 866, Current, 0, 0, 8792);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,777,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3466,Y3466_gen_type,Dftype(Current),281);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 777, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4685[Dtype(RTCW(Result))-777])(Result, *(EIF_REFERENCE *)(Current)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("to_array_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("array_lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("array_upper_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("shared_area", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4901[dtype-866])(Current));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
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

/* {ARRAYED_LIST}.new_cursor */
EIF_REFERENCE F867_5799 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 866, Current, 0, 0, 8793);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,435,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3466,Y3466_gen_type,Dftype(Current),281);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 435, _OBJSIZ_2_0_0_2_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4337[Dtype(RTCW(Result))-435])(Result, Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
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

/* {ARRAYED_LIST}.do_all */
void F867_5800 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("do_all", 866, Current, 0, 1, 8794);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("action_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5138[Dtype(RTCW(tr2))-898])(tr2));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R5174[Dtype(RTCW(tr1))-898])(tr1, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.do_if */
void F867_5801 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("do_if", 866, Current, 0, 2, 8795);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("action_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("test_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5138[Dtype(RTCW(tr2))-898])(tr2));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R5175[Dtype(RTCW(tr1))-898])(tr1, arg1, arg2, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.there_exists */
EIF_BOOLEAN F867_5802 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("there_exists", 866, Current, 0, 1, 8796);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5138[Dtype(RTCW(tr2))-898])(tr2));
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R5176[Dtype(RTCW(tr1))-898])(tr1, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.for_all */
EIF_BOOLEAN F867_5803 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("for_all", 866, Current, 0, 1, 8797);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5138[Dtype(RTCW(tr2))-898])(tr2));
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R5177[Dtype(RTCW(tr1))-898])(tr1, arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("empty", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.do_all_with_index */
void F867_5804 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("do_all_with_index", 866, Current, 4, 1, 8798);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	loc4 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(7);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc4))-776])(loc4, loc1));
		tr2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), tr2, loc2);
		RTHOOK(8);
		loc2++;
		RTHOOK(9);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.do_if_with_index */
void F867_5805 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("do_if_with_index", 866, Current, 4, 2, 8799);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	loc4 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(8);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc4))-776])(loc4, loc1));
		tr2 = RTCCL(tr1);
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_), tr2, loc2);
		tb2 = tb1;
		if (tb2) {
			RTHOOK(9);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc4))-776])(loc4, loc1));
			tr2 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), tr2, loc2);
		}
		RTHOOK(10);
		loc2++;
		RTHOOK(11);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.count */
EIF_INTEGER_32 F867_5806 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("count", 866, Current, 0, 0, 8800);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5138[Dtype(RTCW(tr1))-898])(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_non_negative", EX_POST);
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

/* {ARRAYED_LIST}.capacity */
EIF_INTEGER_32 F867_5807 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("capacity", 866, Current, 0, 0, 8801);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5139[Dtype(RTCW(tr1))-898])(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("capacity_non_negative", EX_POST);
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

/* {ARRAYED_LIST}.upper */
EIF_INTEGER_32 F867_5808 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("upper", 866, Current, 0, 0, 8802);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5138[Dtype(RTCW(tr1))-898])(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)))) {
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

/* {ARRAYED_LIST}.is_equal */
EIF_BOOLEAN F867_5809 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("is_equal", 866, Current, 1, 1, 8803);
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
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		tb1 = '\0';
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == ti4_3)) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
		}
		if (tb1) {
			RTHOOK(5);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
				RTHOOK(6);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(7);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(8);
					tb1 = '\01';
					if (!(EIF_BOOLEAN) !Result) {
						tb1 = (EIF_BOOLEAN) (loc1 > (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4905[dtype-866])(Current)));
					}
					if (tb1) break;
					RTHOOK(9);
					tr2 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &loc1));
					tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(arg1))-776])(arg1, (EIF_REFERENCE) &loc1));
					Result = (EIF_BOOLEAN) RTEQ(tr2, tr3);
					RTHOOK(10);
					loc1++;
				}
			} else {
				RTHOOK(11);
				tr2 = *(EIF_REFERENCE *)(Current);
				tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
				ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R5151[Dtype(RTCW(tr2))-898])(tr2, tr3, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_3));
				Result = (EIF_BOOLEAN) tb2;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("consistent", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb2 = Result;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("indices_unchanged", EX_POST);
		tb2 = '\0';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
			ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
			RTCO(tr1);
			tb2 = (EIF_BOOLEAN)(ti4_3 == ti4_2);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("true_implies_same_size", EX_POST);
		tb2 = '\01';
		if (Result) {
			ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
			tb2 = (EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == ti4_3);
		}
		if (tb2) {
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
	return Result;
}

/* {ARRAYED_LIST}.prunable */
EIF_BOOLEAN F867_5810 (EIF_REFERENCE Current)
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
	
	RTEAA("prunable", 866, Current, 0, 0, 8804);
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

/* {ARRAYED_LIST}.valid_cursor */
EIF_BOOLEAN F867_5811 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_cursor", 866, Current, 1, 1, 8805);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(235, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4726[dtype-856])(Current, ti4_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.valid_index */
EIF_BOOLEAN F867_5812 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("valid_index", 866, Current, 0, 1, 8806);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1)) {
		Result = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4658[dtype-776])(Current)) <= arg1)) {
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

/* {ARRAYED_LIST}.is_inserted */
EIF_BOOLEAN F867_5813 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_inserted", 866, Current, 0, 1, 8807);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
		RTHOOK(2);
		Result = '\01';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4721[dtype-856])(Current));
		if (!RTCEQ(arg1, tr1)) {
			tb1 = '\0';
			if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4380[dtype-663])(Current))) {
				tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
				tb1 = RTCEQ(arg1, tr1);
			}
			Result = tb1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.all_default */
EIF_BOOLEAN F867_5814 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTEAA("all_default", 866, Current, 0, 0, 8808);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_default", EX_PRE);
		tr1 = RTLNTY2(eif_final_id(Y3466,Y3466_gen_type,dftype,281), 0x00);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5304[Dtype(tr1)-965])(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTLNTY2(eif_final_id(Y3466,Y3466_gen_type,dftype,281), 0x00);
	tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5312[Dtype(tr2)-965])(tr2));
	tr2 = RTCCL(tr3);
	tr4 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4659[Dtype(RTCW(tr4))-776])(tr4));
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R5150[Dtype(RTCW(tr1))-898])(tr1, tr2, ((EIF_INTEGER_32) 0L), ti4_1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.move */
void F867_5815 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("move", 866, Current, 0, 1, 8809);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) += arg1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > (EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(3);
		ti4_4 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_4 + ((EIF_INTEGER_32) 1L));
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("too_far_right", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + arg1) > (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4391[dtype-663])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("too_far_left", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_2 + arg1) < ((EIF_INTEGER_32) 1L))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4391[dtype-663])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("expected_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4391[dtype-663])(Current))) {
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (ti4_3 + arg1));
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

/* {ARRAYED_LIST}.start */
void F867_5816 (EIF_REFERENCE Current)
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
	
	RTEAA("start", 866, Current, 0, 0, 8810);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("at_first", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4724[dtype-856])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("after_when_empty", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current));
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

/* {ARRAYED_LIST}.finish */
void F867_5817 (EIF_REFERENCE Current)
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
	
	RTEAA("finish", 866, Current, 0, 0, 8811);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("at_last", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4725[dtype-856])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("before_when_empty", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current));
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

/* {ARRAYED_LIST}.forth */
void F867_5818 (EIF_REFERENCE Current)
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
	
	RTEAA("forth", 866, Current, 0, 0, 8812);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_after", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("moved_forth", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {ARRAYED_LIST}.back */
void F867_5819 (EIF_REFERENCE Current)
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
	
	RTEAA("back", 866, Current, 0, 0, 8813);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))--;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.go_i_th */
void F867_5820 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("go_i_th", 866, Current, 0, 1, 8814);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_cursor_index", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R4726[dtype-856])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("position_expected", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == arg1)) {
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

/* {ARRAYED_LIST}.go_to */
void F867_5821 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("go_to", 866, Current, 1, 1, 8815);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("cursor_position_valid", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4422[dtype-856])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(235, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.search */
void F867_5822 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("search", 866, Current, 4, 1, 8816);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_2 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)),((EIF_INTEGER_32) 0L));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) && (EIF_BOOLEAN)(arg1 != NULL))) {
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			RTHOOK(6);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, loc2));
			loc4 = (EIF_BOOLEAN) RTEQ(arg1, tr1);
			RTHOOK(7);
			loc2++;
		}
	} else {
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, loc2));
			loc4 = (EIF_BOOLEAN) RTCEQ(arg1, tr1);
			RTHOOK(10);
			loc2++;
		}
	}
	RTHOOK(11);
	if (loc4) {
		RTHOOK(12);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc2;
	} else {
		RTHOOK(13);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("object_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4391[dtype-663])(Current))) {
			tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
		}
		if (tb2) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4379[dtype-663])(Current));
			tb1 = RTEQ(arg1, tr1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("item_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4391[dtype-663])(Current))) {
			tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
		}
		if (tb2) {
			tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4379[dtype-663])(Current));
			tb1 = RTCEQ(arg1, tr1);
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

/* {ARRAYED_LIST}.put_front */
void F867_5823 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("put_front", 866, Current, 0, 1, 8817);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4397[dtype-663])(Current)), label_1);
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
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
		RTHOOK(3);
		tr2 = RTCCL(arg1);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[dtype-663])(Current, tr2));
	} else {
		RTHOOK(4);
		tr2 = RTCCL(arg1);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4909[dtype-866])(Current, tr2, ((EIF_INTEGER_32) 1L)));
	}
	RTHOOK(5);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("item_inserted", EX_POST);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4720[dtype-856])(Current)), arg1)) {
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

/* {ARRAYED_LIST}.put_i_th */
void F867_5824 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("put_i_th", 866, Current, 0, 2, 8818);
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5152[Dtype(RTCW(tr1))-898])(tr1, tr2, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &arg2)), arg1)) {
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

/* {ARRAYED_LIST}.force */
void F867_5825 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTEAA("force", 866, Current, 2, 1, 8819);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4397[dtype-663])(Current)), label_1);
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
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5139[Dtype(RTCW(loc2))-898])(loc2));
	if ((EIF_BOOLEAN) (loc1 > ti4_2)) {
		RTHOOK(5);
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4440[dtype-776])(Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5169[Dtype(RTCW(loc2))-898])(loc2, (EIF_INTEGER_32) (loc1 + ti4_2)));
		loc2 = (EIF_REFERENCE) tr2;
		RTHOOK(6);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	}
	RTHOOK(7);
	tr2 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5154[Dtype(RTCW(loc2))-898])(loc2, tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("item_inserted", EX_POST);
		tr2 = RTCCL(arg1);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4370[dtype-663])(Current, tr2))) {
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

/* {ARRAYED_LIST}.extend */
void F867_5826 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTEAA("extend", 866, Current, 2, 1, 8820);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4397[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5139[Dtype(RTCW(loc2))-898])(loc2));
	if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
		RTHOOK(5);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4440[dtype-776])(Current));
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5169[Dtype(RTCW(loc2))-898])(loc2, (EIF_INTEGER_32) (loc1 + ti4_1)));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	}
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5154[Dtype(RTCW(loc2))-898])(loc2, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("item_inserted", EX_POST);
		tr1 = RTCCL(arg1);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4399[dtype-663])(Current, tr1))) {
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

/* {ARRAYED_LIST}.put_left */
void F867_5827 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("put_left", 866, Current, 0, 1, 8821);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4397[dtype-663])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current)), label_1);
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
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	tb1 = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current))) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current));
	}
	if (tb1) {
		RTHOOK(4);
		tr2 = RTCCL(arg1);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[dtype-663])(Current, tr2));
	} else {
		RTHOOK(5);
		tr2 = RTCCL(arg1);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4909[dtype-866])(Current, tr2, ti4_3));
	}
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))++;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("new_index", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
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

/* {ARRAYED_LIST}.put_right */
void F867_5828 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("put_right", 866, Current, 0, 1, 8822);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4397[dtype-663])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_after", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current)), label_1);
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
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)))) {
		RTHOOK(4);
		tr2 = RTCCL(arg1);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[dtype-663])(Current, tr2));
	} else {
		RTHOOK(5);
		tr2 = RTCCL(arg1);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R4909[dtype-866])(Current, tr2, (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_index", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2)) {
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

/* {ARRAYED_LIST}.replace */
void F867_5829 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("replace", 866, Current, 0, 1, 8823);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("writable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4417[dtype-663])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("replaceable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4418[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTCCL(arg1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[dtype-776])(Current, tr1, (EIF_REFERENCE) &ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("item_replaced", EX_POST);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current)), arg1)) {
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

/* {ARRAYED_LIST}.merge_left */
void F867_5830 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("merge_left", 866, Current, 2, 1, 8824);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4397[dtype-663])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current)), label_1);
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
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		RTE_OT
		ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		ti4_4 = ti4_5;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	RTHOOK(6);
	ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_5;
	RTHOOK(7);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))--;
	RTHOOK(8);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4734[dtype-856])(Current, arg1));
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("new_index", EX_POST);
		RTCO(tr3);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (ti4_3 + ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("other_is_empty", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[Dtype(RTCW(arg1))-663])(arg1));
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

/* {ARRAYED_LIST}.merge_right */
void F867_5831 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTEAA("merge_right", 866, Current, 1, 1, 8825);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4397[dtype-663])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_after", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current)), label_1);
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
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(5);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[Dtype(RTCW(arg1))-663])(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_4);
		RTHOOK(7);
		tr3 = *(EIF_REFERENCE *)(Current);
		ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5139[Dtype(RTCW(tr3))-898])(tr3));
		if ((EIF_BOOLEAN) (loc1 > ti4_4)) {
			RTHOOK(8);
			tr3 = *(EIF_REFERENCE *)(Current);
			tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5169[Dtype(RTCW(tr3))-898])(tr3, loc1));
			RTAR(Current, tr4);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr4;
		}
		RTHOOK(9);
		tr3 = *(EIF_REFERENCE *)(Current);
		tr4 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_5 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R5158[Dtype(RTCW(tr3))-898])(tr3, tr4, ((EIF_INTEGER_32) 0L), ti4_4, ti4_5));
		RTHOOK(10);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4405[Dtype(RTCW(arg1))-663])(arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("same_index", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("other_is_empty", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[Dtype(RTCW(arg1))-663])(arg1));
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
}

/* {ARRAYED_LIST}.append */
void F867_5832 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("append", 866, Current, 4, 1, 8826);
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
	loc4 = arg1;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3466,Y3466_gen_type,dftype,281);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc4 = RTRV(typres0,loc4);
	}
	if (EIF_TEST(loc4)) {
		RTHOOK(3);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(loc4)-743])(loc4));
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
			RTHOOK(6);
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(loc4)-743])(loc4));
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_2);
			RTHOOK(7);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5139[Dtype(RTCW(tr2))-898])(tr2));
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) {
				RTHOOK(8);
				tr2 = *(EIF_REFERENCE *)(Current);
				tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5169[Dtype(RTCW(tr2))-898])(tr2, loc3));
				RTAR(Current, tr3);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr3;
			}
			RTHOOK(9);
			tr2 = *(EIF_REFERENCE *)(Current);
			tr3 = *(EIF_REFERENCE *)(loc4);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R5159[Dtype(RTCW(tr2))-898])(tr2, tr3, ((EIF_INTEGER_32) 0L), loc2, loc1));
		}
	} else {
		RTHOOK(10);
		(nstcall = 0, F797_5508(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
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
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.grow */
void F867_5833 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("grow", 866, Current, 0, 1, 8827);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("resizable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4437[dtype-776])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5139[Dtype(RTCW(tr1))-898])(tr1));
	if ((EIF_BOOLEAN) (arg1 > ti4_1)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5169[Dtype(RTCW(tr1))-898])(tr1, arg1));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_capacity", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4436[dtype-776])(Current)) >= arg1)) {
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

/* {ARRAYED_LIST}.resize */
void F867_5834 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("resize", 866, Current, 0, 1, 8828);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("resizable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4437[dtype-776])(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_capacity_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4436[dtype-776])(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4442[dtype-776])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("capacity_set", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4436[dtype-776])(Current)) >= arg1)) {
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

/* {ARRAYED_LIST}.trim */
void F867_5835 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	
	RTEAA("trim", 866, Current, 1, 0, 8829);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4902[dtype-866])(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	RTHOOK(2);
	tr4 = *(EIF_REFERENCE *)(Current);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5139[Dtype(RTCW(tr4))-898])(tr4));
	if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
		RTHOOK(3);
		tr4 = *(EIF_REFERENCE *)(Current);
		tr5 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R5169[Dtype(RTCW(tr4))-898])(tr4, loc1));
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr5;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("same_count", EX_POST);
		RTCO(tr3);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("minimal_capacity", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4436[dtype-776])(Current)) == (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_items", EX_POST);
		tr4 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4902[dtype-866])(Current));
		RTCO(tr2);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4690[Dtype(RTCW(tr4))-777])(tr4, tr1));
		if (tb1) {
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

/* {ARRAYED_LIST}.copy */
void F867_5836 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA("copy", 866, Current, 0, 1, 8830);
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
		(nstcall = 0, F1_16(Current, arg1));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3465[dtype-281])(Current, tr2));
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
		RTCT("equal_areas", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		if (RTEQ(tr1, tr2)) {
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

/* {ARRAYED_LIST}.duplicate */
EIF_REFERENCE F867_5837 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("duplicate", 866, Current, 1, 1, 8831);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_off_unless_after", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4380[dtype-663])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current));
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
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current))) {
		RTHOOK(4);
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4910[dtype-866])(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(5);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_3 = eif_min_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)),arg1);
		loc1 = (EIF_INTEGER_32) ti4_3;
		RTHOOK(6);
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4910[dtype-866])(Current, loc1));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R5159[Dtype(RTCW(tr1))-898])(tr1, *(EIF_REFERENCE *)(Current), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 0L), loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAYED_LIST}.prune */
void F867_5838 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("prune", 866, Current, 0, 1, 8832);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4398[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		for (;;) {
			RTHOOK(5);
			tb1 = '\01';
			if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current))) {
				tb1 = RTEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current)), arg1);
			}
			if (tb1) break;
			RTHOOK(6);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4394[dtype-663])(Current));
		}
	} else {
		for (;;) {
			RTHOOK(7);
			tb2 = '\01';
			if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current))) {
				tb2 = RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current)), arg1);
			}
			if (tb2) break;
			RTHOOK(8);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4394[dtype-663])(Current));
		}
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current))) {
		RTHOOK(10);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4420[dtype-663])(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.remove */
void F867_5839 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove", 866, Current, 0, 0, 8833);
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
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4417[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)))) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_4 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		ti4_5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R5160[Dtype(RTCW(tr1))-898])(tr1, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (ti4_4 - ti4_5)));
	}
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5166[Dtype(RTCW(tr1))-898])(tr1, ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("after_when_empty", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("index", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
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

/* {ARRAYED_LIST}.remove_i_th */
void F867_5840 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,loc1);
	RTLR(8,tr7);
	RTLR(9,loc2);
	RTLIU(10);
	
	RTEAA("remove_i_th", 866, Current, 2, 1, 8834);
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
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4410[dtype-776])(Current, (EIF_REFERENCE) &arg1)), label_1);
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
	if ((EIF_BOOLEAN) (arg1 < (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)))) {
		RTHOOK(4);
		tr6 = *(EIF_REFERENCE *)(Current);
		ti4_4 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R5160[Dtype(RTCW(tr6))-898])(tr6, arg1, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (ti4_4 - arg1)));
	}
	RTHOOK(5);
	tr6 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5166[Dtype(RTCW(tr6))-898])(tr6, ((EIF_INTEGER_32) 1L)));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > arg1)) {
		RTHOOK(7);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_index_if_below", EX_POST);
		if ((!((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) <= arg1)) || ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("new_index_if_above", EX_POST);
		if ((!((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > arg1)) || ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("same_leading_items", EX_POST);
		RTCO(tr3);
		tr6 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCV(tr2))-365])(tr2));
		loc1 = (EIF_REFERENCE) tr6;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc1)-334])(loc1));
			if (tb2) break;
			RTHOOK(12);
			tb3 = '\01';
			ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4308[Dtype(loc1)-398])(loc1));
			if ((EIF_BOOLEAN) (ti4_4 < arg1)) {
				tr6 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc1)-334])(loc1));
				ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4308[Dtype(loc1)-398])(loc1));
				tr7 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &ti4_4));
				tb3 = RTCEQ(tr6, tr7);
			}
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc1)-334])(loc1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("same_trailing_items", EX_POST);
		RTCO(tr5);
		tr6 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCV(tr4))-365])(tr4));
		loc2 = (EIF_REFERENCE) tr6;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc2)-334])(loc2));
			if (tb2) break;
			RTHOOK(14);
			tb3 = '\01';
			ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4308[Dtype(loc2)-398])(loc2));
			if ((EIF_BOOLEAN) (ti4_4 > arg1)) {
				tr6 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc2)-334])(loc2));
				ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4308[Dtype(loc2)-398])(loc2));
				ti4_5 = (EIF_INTEGER_32) (ti4_4 - ((EIF_INTEGER_32) 1L));
				tr7 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &ti4_5));
				tb3 = RTCEQ(tr6, tr7);
			}
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc2)-334])(loc2));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.prune_all */
void F867_5841 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc6);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTEAA("prune_all", 866, Current, 6, 1, 8835);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4398[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc5 = *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
	RTHOOK(3);
	loc6 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)))) break;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (loc2 - loc3))) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(9);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc6))-776])(loc6, (EIF_INTEGER_32) (loc1 + loc3)));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5152[Dtype(RTCW(loc6))-898])(loc6, tr2, loc1));
			}
			RTHOOK(10);
			if (loc5) {
				RTHOOK(11);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc6))-776])(loc6, loc1));
				loc4 = (EIF_BOOLEAN) RTEQ(arg1, tr1);
			} else {
				RTHOOK(12);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc6))-776])(loc6, loc1));
				loc4 = (EIF_BOOLEAN) RTCEQ(arg1, tr1);
			}
			RTHOOK(13);
			if (loc4) {
				RTHOOK(14);
				loc3++;
			} else {
				RTHOOK(15);
				loc1++;
			}
		} else {
			RTHOOK(16);
			loc1++;
		}
	}
	RTHOOK(17);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R5166[Dtype(RTCW(loc6))-898])(loc6, loc3));
	RTHOOK(18);
	ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("no_more_occurrences", EX_POST);
		tr1 = RTCCL(arg1);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4370[dtype-663])(Current, tr1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("is_exhausted", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4391[dtype-663])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("is_after", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[dtype-663])(Current))) {
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

/* {ARRAYED_LIST}.remove_left */
void F867_5842 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove_left", 866, Current, 0, 0, 8836);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("left_exists", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > ((EIF_INTEGER_32) 1L)), label_1);
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
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))--;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4420[dtype-663])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("new_index", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)))) {
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

/* {ARRAYED_LIST}.remove_right */
void F867_5843 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("remove_right", 866, Current, 0, 0, 8837);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("right_exists", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current))), label_1);
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
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))++;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4420[dtype-663])(Current));
	RTHOOK(4);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))--;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_index", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2)) {
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

/* {ARRAYED_LIST}.wipe_out */
void F867_5844 (EIF_REFERENCE Current)
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
	
	RTEAA("wipe_out", 866, Current, 0, 0, 8838);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4398[dtype-663])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5172[Dtype(RTCW(tr1))-898])(tr1));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[dtype-663])(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_before", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[dtype-743])(Current))) {
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

/* {ARRAYED_LIST}.swap */
void F867_5845 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,loc1);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLIU(8);
	
	RTEAA("swap", 866, Current, 1, 1, 8839);
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
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &arg1));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr3 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
	RTHOOK(4);
	tr5 = *(EIF_REFERENCE *)(Current);
	tr6 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr5))-776])(tr5, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	tr5 = RTCCL(tr6);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4419[dtype-663])(Current, tr5));
	RTHOOK(5);
	tr5 = *(EIF_REFERENCE *)(Current);
	tr6 = RTCCL(loc1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5152[Dtype(RTCW(tr5))-898])(tr5, tr6, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("swapped_to_item", EX_POST);
		tr5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[dtype-663])(Current));
		RTCO(tr2);
		tr6 = tr1;
		if (RTCEQ(tr5, tr6)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("swapped_from_item", EX_POST);
		tr5 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &arg1));
		RTCO(tr4);
		tr6 = tr3;
		if (RTCEQ(tr5, tr6)) {
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

/* {ARRAYED_LIST}.correct_mismatch */
void F867_5846 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("correct_mismatch", 866, Current, 5, 0, 8840);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\0';
	tr1 = RTOUCR(12,(nstcall = 0, F864_5720), (Current));
	tr2 = RTMS_EX_H("area_v2",7,1288217906);
	tb5 = (nstcall = 1, F886_5910(RTCW(tr1), tr2));
	if ((EIF_BOOLEAN) !tb5) {
		tr1 = RTOUCR(12,(nstcall = 0, F864_5720), (Current));
		tr2 = RTMS_EX_H("area",4,1634887009);
		tr2 = (nstcall = 1, F886_5908(RTCW(tr1), tr2));
		loc2 = RTCCL(tr2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y3466,Y3466_gen_type,dftype,281);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			loc2 = RTRV(typres0,loc2);
		}
		tb4 = EIF_TEST(loc2);
	}
	if (tb4) {
		tr2 = RTOUCR(12,(nstcall = 0, F864_5720), (Current));
		tr3 = RTMS_EX_H("count",5,1870727284);
		tr3 = (nstcall = 1, F886_5908(RTCW(tr2), tr3));
		tr1 = RTCCL(tr3);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(1005, 0x00), tr1, loc3, tb4);
		tb3 = tb4;
	}
	if (tb3) {
		tr2 = RTOUCR(12,(nstcall = 0, F864_5720), (Current));
		tr3 = RTMS_EX_H("object_comparison",17,2049833582);
		tr3 = (nstcall = 1, F886_5908(RTCW(tr2), tr3));
		tr1 = RTCCL(tr3);
		RTOB(*(EIF_BOOLEAN *), eif_new_type(1035, 0x00), tr1, loc4, tb3);
		tb2 = tb3;
	}
	if (tb2) {
		tr2 = RTOUCR(12,(nstcall = 0, F864_5720), (Current));
		tr3 = RTMS_EX_H("index",5,1852879736);
		tr3 = (nstcall = 1, F886_5908(RTCW(tr2), tr3));
		tr1 = RTCCL(tr3);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(1005, 0x00), tr1, loc5, tb2);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNSP2(eif_final_id(Y3460,Y3460_gen_type,dftype,281).id,EO_REF,loc3,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr1) = 0;
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN)(loc1 == loc3)) break;
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(loc2)-776])(loc2, loc1));
			tr3 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5154[Dtype(RTCW(tr1))-898])(tr1, tr3));
			RTHOOK(6);
			loc1++;
		}
		RTHOOK(7);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) loc4;
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc5;
	} else {
		RTHOOK(9);
		(nstcall = 0, F864_5719(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.new_chain */
EIF_REFERENCE F867_5847 (EIF_REFERENCE Current)
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
	
	RTEAA("new_chain", 866, Current, 0, 0, 8841);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_REFERENCE) Current;
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

/* {ARRAYED_LIST}.force_i_th */
void F867_5848 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
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
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("force_i_th", 866, Current, 0, 2, 8842);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) + ((EIF_INTEGER_32) 1L)) > (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4436[dtype-776])(Current)))) {
		RTHOOK(2);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4440[dtype-776])(Current));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4442[dtype-776])(Current, (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	}
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5153[Dtype(RTCW(tr1))-898])(tr1, tr2, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ARRAYED_LIST}.insert */
void F867_5849 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTEAA("insert", 866, Current, 0, 2, 8843);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
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
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) + ((EIF_INTEGER_32) 1L)) > (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4436[dtype-776])(Current)))) {
		RTHOOK(4);
		ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
		ti4_4 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4440[dtype-776])(Current));
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4442[dtype-776])(Current, (EIF_INTEGER_32) (ti4_3 + ti4_4)));
	}
	RTHOOK(5);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32)) R5160[Dtype(RTCW(tr2))-898])(tr2, (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L)), arg2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_3 - arg2) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(6);
	tr2 = RTCCL(arg1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[dtype-776])(Current, tr2, (EIF_REFERENCE) &arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[dtype-743])(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("index_unchanged", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("insertion_done", EX_POST);
		if (RTCEQ((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[dtype-776])(Current, (EIF_REFERENCE) &arg2)), arg1)) {
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

/* {ARRAYED_LIST}.new_filled_list */
EIF_REFERENCE F867_5850 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("new_filled_list", 866, Current, 0, 1, 8844);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(Dftype(Current));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(Result))-866])(Result, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_filled_list_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("new_filled_list_count_set", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[Dtype(RTCW(Result))-663])(Result));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("new_filled_list_before", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4395[Dtype(RTCW(Result))-743])(Result));
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

/* {ARRAYED_LIST}._invariant */
void F867_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 446, Current, 0, 0);
	RTIT("prunable", Current);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4398[Dtype(Current)-663])(Current))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit447 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
