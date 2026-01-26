/*
 * Code for class SED_STORABLE_FACILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se203.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_STORABLE_FACILITIES}.session_store */
void F229_2709 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("session_store", 228, Current, 1, 3, 2709);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg2)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F229_2725(Current, arg2));
	RTHOOK(5);
	(nstcall = 1, F265_3378(RTCW(arg2)));
	RTHOOK(6);
	(nstcall = 1, F110_1563(RTCW(arg2), ((EIF_NATURAL_32) 1U)));
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F148_1986(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 1, F148_1988(RTCW(loc1)));
	RTHOOK(9);
	(nstcall = 1, F265_3380(RTCW(arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.basic_store */
void F229_2710 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("basic_store", 228, Current, 1, 3, 2710);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg2)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F229_2726(Current, arg2));
	RTHOOK(5);
	(nstcall = 1, F265_3378(RTCW(arg2)));
	RTHOOK(6);
	(nstcall = 1, F110_1563(RTCW(arg2), ((EIF_NATURAL_32) 2U)));
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F148_1986(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 1, F148_1988(RTCW(loc1)));
	RTHOOK(9);
	(nstcall = 1, F265_3380(RTCW(arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.independent_store */
void F229_2711 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("independent_store", 228, Current, 1, 3, 2711);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg2)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F229_2727(Current, arg2));
	RTHOOK(5);
	(nstcall = 1, F265_3378(RTCW(arg2)));
	RTHOOK(6);
	(nstcall = 1, F110_1563(RTCW(arg2), ((EIF_NATURAL_32) 4U)));
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F148_1986(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 1, F148_1988(RTCW(loc1)));
	RTHOOK(9);
	(nstcall = 1, F265_3380(RTCW(arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.store */
void F229_2712 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("store", 228, Current, 1, 2, 2712);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg2)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F229_2727(Current, arg2));
	RTHOOK(5);
	(nstcall = 1, F265_3378(RTCW(arg2)));
	RTHOOK(6);
	(nstcall = 1, F110_1563(RTCW(arg2), ((EIF_NATURAL_32) 4U)));
	RTHOOK(7);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F148_1986(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 1, F148_1988(RTCW(loc1)));
	RTHOOK(9);
	(nstcall = 1, F265_3380(RTCW(arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.store_in_medium */
void F229_2713 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("store_in_medium", 228, Current, 0, 2, 2713);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_medium_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_medium_writable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3714[Dtype(RTCW(arg2))-310])(arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_medium_support_storable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3721[Dtype(RTCW(arg2))-310])(arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTCCL(arg1);
	tr2 = RTLNS(eif_new_type(264, 0x01).id, 264, _OBJSIZ_2_4_0_3_0_0_0_0_);
	(nstcall = -1, F265_3375(RTCW(tr2), arg2));
	(nstcall = 0, F229_2712(Current, tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_STORABLE_FACILITIES}.retrieved */
EIF_REFERENCE F229_2714 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("retrieved", 228, Current, 2, 2, 2714);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3381(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 1, F265_3377(RTCW(arg1)));
	RTHOOK(4);
	tu4_1 = (nstcall = 1, F110_1552(RTCW(arg1)));
	switch (tu4_1) {
		case 1U:
			RTHOOK(5);
			loc1 = (nstcall = 0, F229_2722(Current, arg1));
			break;
		case 2U:
			RTHOOK(6);
			loc1 = (nstcall = 0, F229_2723(Current, arg1));
			break;
		case 4U:
			RTHOOK(7);
			loc1 = (nstcall = 0, F229_2724(Current, arg1));
			break;
		case 3U:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {866,0xFF01,38,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc2 = RTLNSMART(typres0.id);
			}
			(nstcall = -1, F867_5785(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
			RTHOOK(9);
			tr1 = RTLNS(eif_new_type(39, 0x01).id, 39, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr2 = (nstcall = 1, F40_767(RTCW(tr1)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr2));
			RTHOOK(10);
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
			break;
		default:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {866,0xFF01,38,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc2 = RTLNSMART(typres0.id);
			}
			(nstcall = -1, F867_5785(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
			RTHOOK(12);
			tr1 = RTLNS(eif_new_type(39, 0x01).id, 39, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr2 = (nstcall = 1, F40_766(RTCW(tr1)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr2));
			RTHOOK(13);
			RTAR(Current, loc2);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
			break;
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(15);
		(nstcall = 1, F219_2532(RTCW(loc1), arg2));
		RTHOOK(16);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		RTHOOK(17);
		tb1 = (nstcall = 1, F219_2530(RTCW(loc1)));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(19);
			(nstcall = 1, F109_1499(RTCW(arg1)));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_STORABLE_FACILITIES}.retrieved_from_medium */
EIF_REFERENCE F229_2715 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("retrieved_from_medium", 228, Current, 0, 1, 2715);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_medium_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_medium_open_for_reading", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3713[Dtype(RTCW(arg1))-310])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_medium_support_storable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3721[Dtype(RTCW(arg1))-310])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(264, 0x01).id, 264, _OBJSIZ_2_4_0_3_0_0_0_0_);
	(nstcall = -1, F265_3374(RTCW(tr1), arg1));
	Result = (nstcall = 0, F229_2714(Current, tr1, (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_STORABLE_FACILITIES}.retrieved_error */
EIF_REFERENCE F229_2716 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("retrieved_error", 228, Current, 1, 0, 2716);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F665_4976(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F867_5794(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_STORABLE_FACILITIES}.retrieved_errors */
EIF_REFERENCE F229_2717 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SED_STORABLE_FACILITIES}.session_deserializer */
EIF_REFERENCE F229_2722 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("session_deserializer", 228, Current, 0, 1, 2722);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3381(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(55,(nstcall = 0, F229_2728), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F219_2531(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("session_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.basic_deserializer */
EIF_REFERENCE F229_2723 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("basic_deserializer", 228, Current, 0, 1, 2723);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3381(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(56,(nstcall = 0, F229_2729), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F219_2531(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("basic_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.recoverable_deserializer */
EIF_REFERENCE F229_2724 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("recoverable_deserializer", 228, Current, 0, 1, 2724);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3381(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(57,(nstcall = 0, F229_2730), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F219_2531(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("recoverable_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.session_serializer */
EIF_REFERENCE F229_2725 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("session_serializer", 228, Current, 0, 1, 2725);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(58,(nstcall = 0, F229_2731), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F148_1987(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("session_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.basic_serializer */
EIF_REFERENCE F229_2726 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("basic_serializer", 228, Current, 0, 1, 2726);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(59,(nstcall = 0, F229_2732), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F148_1987(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("basic_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.recoverable_serializer */
EIF_REFERENCE F229_2727 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("recoverable_serializer", 228, Current, 0, 1, 2727);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTOUCR(60,(nstcall = 0, F229_2733), (Current, arg1));
	RTHOOK(4);
	(nstcall = 1, F148_1987(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("independent_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SED_STORABLE_FACILITIES}.internal_session_deserializer */
static EIF_REFERENCE F229_2728_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(55)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_session_deserializer", 228, Current, 0, 1, 2703);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3381(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(218, 0x01).id, 218, _OBJSIZ_7_1_0_1_0_0_0_0_);
	(nstcall = -1, F219_2525(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("session_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F229_2728 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(55,F229_2728_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_basic_deserializer */
static EIF_REFERENCE F229_2729_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(56)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_basic_deserializer", 228, Current, 0, 1, 2704);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3381(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(219, 0x01).id, 219, _OBJSIZ_7_1_0_1_0_0_0_0_);
	(nstcall = -1, F219_2525(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("basic_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F229_2729 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(56,F229_2729_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_recoverable_deserializer */
static EIF_REFERENCE F229_2730_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(57)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_recoverable_deserializer", 228, Current, 0, 1, 2705);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_reader_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_reader_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3381(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(865, 0x01).id, 865, _OBJSIZ_12_5_0_1_0_0_0_0_);
	(nstcall = -1, F866_5753(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("recoverable_deserializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F229_2730 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(57,F229_2730_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_session_serializer */
static EIF_REFERENCE F229_2731_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(58)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_session_serializer", 228, Current, 0, 1, 2706);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(147, 0x01).id, 147, _OBJSIZ_5_2_0_1_0_0_0_0_);
	(nstcall = -1, F148_1979(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("session_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F229_2731 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(58,F229_2731_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_basic_serializer */
static EIF_REFERENCE F229_2732_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(59)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_basic_serializer", 228, Current, 0, 1, 2707);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(148, 0x01).id, 148, _OBJSIZ_5_2_0_1_0_0_0_0_);
	(nstcall = -1, F148_1979(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("basic_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F229_2732 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(59,F229_2732_body,(Current,arg1));
}

/* {SED_STORABLE_FACILITIES}.internal_recoverable_serializer */
static EIF_REFERENCE F229_2733_body (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(60)

	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_recoverable_serializer", 228, Current, 0, 1, 2708);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_writer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_writer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(149, 0x01).id, 149, _OBJSIZ_5_2_0_1_0_0_0_0_);
	(nstcall = -1, F148_1979(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("internal_recoverable_serializer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F229_2733 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	return RTOUCR(60,F229_2733_body,(Current,arg1));
}

void EIF_Minit203 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
