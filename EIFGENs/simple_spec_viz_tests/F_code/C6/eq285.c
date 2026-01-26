/*
 * Code for class EQA_TEST_OUTPUT_BUFFER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq285.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_TEST_OUTPUT_BUFFER}.make */
void F746_5352 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 745, Current, 0, 1, 6894);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_size_greater_one", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTMS_EX_H("test_output_buffer",18,1570355058);
	(nstcall = 0, F745_5288(Current, tr1));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1079_7731(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.buffer_size */
EIF_INTEGER_32 F746_5353 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.count */
EIF_INTEGER_32 F746_5354 (EIF_REFERENCE Current)
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
	
	RTEAA("count", 745, Current, 0, 0, 6896);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
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

/* {EQA_TEST_OUTPUT_BUFFER}.content */
EIF_REFERENCE F746_5355 (EIF_REFERENCE Current)
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
	
	RTEAA("content", 745, Current, 0, 0, 6897);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_truncated", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F746_5362(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1079_7733(RTCW(Result), *(EIF_REFERENCE *)(Current + _REFACS_5_)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.leading_content */
EIF_REFERENCE F746_5356 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("leading_content", 745, Current, 1, 0, 6898);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("truncated", EX_PRE);
		RTTE((nstcall = 0, F746_5362(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F746_5360(Current));
	RTHOOK(3);
	Result = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1079_7731(RTCW(Result), loc1));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, ((EIF_INTEGER_32) 1L), loc1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.closing_content */
EIF_REFERENCE F746_5357 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("closing_content", 745, Current, 1, 0, 6899);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("truncated", EX_PRE);
		RTTE((nstcall = 0, F746_5362(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F746_5360(Current));
	RTHOOK(3);
	Result = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1079_7731(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) - loc1)));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, ti4_1, ti4_2));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr2));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) > (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) - ((EIF_INTEGER_32) 1L))));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.formatted_content */
EIF_REFERENCE F746_5358 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("formatted_content", 745, Current, 0, 0, 6900);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F746_5362(Current))) {
		RTHOOK(2);
		Result = RTLNSMART(eif_new_type(1080, 1).id);
		(nstcall = -1, F1079_7731(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) + ((EIF_INTEGER_32) 100L))));
		RTHOOK(3);
		tr1 = (nstcall = 0, F746_5356(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(4);
		tr1 = RTOUCR(146,(nstcall = 0, F746_5383), (Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(5);
		tr1 = (nstcall = 0, F746_5357(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr1));
	} else {
		RTHOOK(6);
		Result = (nstcall = 0, F746_5355(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.buffer */
EIF_REFERENCE F746_5359 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.split_position */
EIF_INTEGER_32 F746_5360 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("split_position", 745, Current, 0, 0, 6902);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result / ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.truncated_start_position */
EIF_INTEGER_32 F746_5361 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
}


/* {EQA_TEST_OUTPUT_BUFFER}.is_truncated */
EIF_BOOLEAN F746_5362 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_truncated", 745, Current, 0, 0, 6904);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.exists */
EIF_BOOLEAN F746_5363 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.readable */
EIF_BOOLEAN F746_5364 (EIF_REFERENCE Current)
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
	
	RTEAA("readable", 745, Current, 0, 0, 6906);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F717_5000(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_TEST_OUTPUT_BUFFER}.wipe_out */
void F746_5365 (EIF_REFERENCE Current)
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
	
	RTEAA("wipe_out", 745, Current, 0, 0, 6907);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R6234[Dtype(RTCW(tr1))-1080])(tr1));
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_string */
void F746_5366 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLIU(6);
	
	RTEAA("put_string", 745, Current, 8, 1, 6908);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(4);
		loc1 = (nstcall = 0, F746_5360(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(tr1))-1080])(tr1, tr2));
		}
		RTHOOK(8);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
		if ((EIF_BOOLEAN) (ti4_1 > loc2)) {
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			loc3 = (EIF_INTEGER_32) loc2;
		} else {
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(15);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - ti4_1) + ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) + loc3) - loc6);
			RTHOOK(17);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc6) - ((EIF_INTEGER_32) 1L))));
			tr2 = (nstcall = 1, F1076_7654(RTCW(tr1)));
			loc7 = (EIF_REFERENCE) tr2;
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6281[Dtype(RTCW(tr1))-1080])(tr1, loc7, ti4_1, ti4_2));
			RTHOOK(19);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, (EIF_INTEGER_32) (loc4 + loc6), ti4_1));
			tr2 = (nstcall = 1, F1076_7654(RTCW(tr1)));
			loc8 = (EIF_REFERENCE) tr2;
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6281[Dtype(RTCW(tr1))-1080])(tr1, loc8, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(21);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) loc5;
		} else {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, loc4, ti4_1));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6281[Dtype(RTCW(tr1))-1080])(tr1, tr2, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + loc3) - ((EIF_INTEGER_32) 1L))));
			RTHOOK(23);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
				RTHOOK(24);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(25);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_)) += loc3;
			}
		}
	} else {
		RTHOOK(26);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(tr1))-1080])(tr1, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putstring */
void F746_5367 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc7);
	RTLR(5,loc8);
	RTLIU(6);
	
	RTEAA("putstring", 745, Current, 8, 1, 6909);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ti4_2) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(4);
		loc1 = (nstcall = 0, F746_5360(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(tr1))-1080])(tr1, tr2));
		}
		RTHOOK(8);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
		if ((EIF_BOOLEAN) (ti4_1 > loc2)) {
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			loc3 = (EIF_INTEGER_32) loc2;
		} else {
			RTHOOK(12);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(14);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_) + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(15);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 - ti4_1) + ((EIF_INTEGER_32) 1L));
			RTHOOK(16);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) + loc3) - loc6);
			RTHOOK(17);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + loc6) - ((EIF_INTEGER_32) 1L))));
			tr2 = (nstcall = 1, F1076_7654(RTCW(tr1)));
			loc7 = (EIF_REFERENCE) tr2;
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6281[Dtype(RTCW(tr1))-1080])(tr1, loc7, ti4_1, ti4_2));
			RTHOOK(19);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, (EIF_INTEGER_32) (loc4 + loc6), ti4_1));
			tr2 = (nstcall = 1, F1076_7654(RTCW(tr1)));
			loc8 = (EIF_REFERENCE) tr2;
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6281[Dtype(RTCW(tr1))-1080])(tr1, loc8, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(21);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) loc5;
		} else {
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, loc4, ti4_1));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6281[Dtype(RTCW(tr1))-1080])(tr1, tr2, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + loc3) - ((EIF_INTEGER_32) 1L))));
			RTHOOK(23);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) + loc3) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
				RTHOOK(24);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(25);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_)) += loc3;
			}
		}
	} else {
		RTHOOK(26);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(tr1))-1080])(tr1, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_character */
void F746_5368 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("put_character", 745, Current, 2, 1, 6910);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F746_5360(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		} else {
			RTHOOK(7);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ti4_1)) {
				RTHOOK(9);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(10);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_))++;
			}
		}
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &arg1, (EIF_REFERENCE) &loc2));
	} else {
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(tr1))-1080])(tr1, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putchar */
void F746_5369 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("putchar", 745, Current, 2, 1, 6911);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F746_5360(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
		} else {
			RTHOOK(7);
			loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_);
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ti4_1)) {
				RTHOOK(9);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(10);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_))++;
			}
		}
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &arg1, (EIF_REFERENCE) &loc2));
	} else {
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(tr1))-1080])(tr1, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_boolean */
void F746_5370 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("put_boolean", 745, Current, 0, 1, 6912);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTAOMS(5369,2);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		RTCOMS(tr1,5369,0,"True",4,1416787301);
	} else {
		RTHOOK(4);
		RTCOMS(tr2,5369,1,"False",5,1635034981);
		tr1 = tr2;
	}
	(nstcall = 0, F746_5366(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putbool */
void F746_5371 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("putbool", 745, Current, 0, 1, 6913);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTAOMS(5370,2);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		RTCOMS(tr1,5370,0,"True",4,1416787301);
	} else {
		RTHOOK(4);
		RTCOMS(tr2,5370,1,"False",5,1635034981);
		tr1 = tr2;
	}
	(nstcall = 0, F746_5366(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_new_line */
void F746_5372 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_new_line", 745, Current, 0, 0, 6914);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F746_5368(Current, (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.new_line */
void F746_5373 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("new_line", 745, Current, 0, 0, 6915);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F746_5368(Current, (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_double */
void F746_5374 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("put_double", 745, Current, 1, 1, 6916);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F1081_7856(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F746_5366(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putdouble */
void F746_5375 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("putdouble", 745, Current, 1, 1, 6917);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F1081_7856(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F746_5366(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.put_real */
void F746_5376 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("put_real", 745, Current, 1, 1, 6918);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F1081_7855(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F746_5366(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.putreal */
void F746_5377 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("putreal", 745, Current, 1, 1, 6919);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
	RTHOOK(3);
	(nstcall = 1, F1081_7855(RTCW(loc1), arg1));
	RTHOOK(4);
	(nstcall = 0, F746_5366(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {EQA_TEST_OUTPUT_BUFFER}.flush */
void F746_5378 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("flush", 745, Current, 0, 0, 6920);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F743_5066(Current)), label_1);
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

/* {EQA_TEST_OUTPUT_BUFFER}.dispose */
void F746_5379 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 745, Current, 0, 0, 6921);
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

/* {EQA_TEST_OUTPUT_BUFFER}.back */
void F746_5380 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("back", 745, Current, 0, 0, 6922);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_before", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F743_5039(Current)), label_1);
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

/* {EQA_TEST_OUTPUT_BUFFER}.end_of_file */
EIF_BOOLEAN F746_5381 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("end_of_file", 745, Current, 0, 0, 6923);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F743_5066(Current)), label_1);
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
	return (EIF_BOOLEAN) 0;
}

/* {EQA_TEST_OUTPUT_BUFFER}.file_close */
void F746_5382 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_close", 745, Current, 0, 1, 6924);
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

/* {EQA_TEST_OUTPUT_BUFFER}.m_truncated */

EIF_REFERENCE F746_5383 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (146,RTMS_EX_H("\012\012---------------------------\012Truncated section\012---------------------------\012\012",77,1121374730));
}

/* {EQA_TEST_OUTPUT_BUFFER}._invariant */
void F746_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 284, Current, 0, 0);
	RTIT("buffer_capacity_at_least_buffer_size", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6147[Dtype(RTCW(tr1))-1079])(tr1));
	if ((EIF_BOOLEAN) (ti4_1 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("buffer_count_not_greater_buffer_size", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_truncated_start_position", Current);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) <= ti4_1)) {
		tb2 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) == ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_5_) > (nstcall = 0, F746_5360(Current)));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("truncated_implies_buffer_full", Current);
	tb1 = '\01';
	if ((nstcall = 0, F746_5362(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN)(ti4_1 == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_7_2_4_));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit285 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
