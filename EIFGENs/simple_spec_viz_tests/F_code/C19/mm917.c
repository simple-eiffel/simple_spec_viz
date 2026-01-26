/*
 * Code for class MML_BAG [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mm917.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MML_BAG}.default_create */
void F270_3443 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("default_create", 269, Current, 0, 0, 3423);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ((EIF_INTEGER_32) 0L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F869_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {MML_BAG}.singleton */
void F270_3444 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("singleton", 269, Current, 0, 1, 3424);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	(nstcall = 0, F270_3445(Current, tr1, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {MML_BAG}.multiple */
void F270_3445 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("multiple", 269, Current, 0, 2, 3425);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		(nstcall = 0, F270_3443(Current));
	} else {
		RTHOOK(4);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ((EIF_INTEGER_32) 1L)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTCCL(arg1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(tr1))-663])(tr1, tr2));
		RTHOOK(6);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F869_5785(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(nstcall = 1, F869_5826(RTCW(tr1), arg2));
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) arg2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {MML_BAG}.has */
EIF_BOOLEAN F270_3446 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("has", 269, Current, 0, 1, 3426);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F270_3450(Current, tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.is_empty */
EIF_BOOLEAN F270_3447 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_empty", 269, Current, 0, 0, 3427);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[Dtype(RTCW(tr1))-663])(tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.is_constant */
EIF_BOOLEAN F270_3448 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_constant", 269, Current, 1, 1, 3428);
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
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F869_5806(RTCW(tr1)));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F869_5791(RTCW(tr1), loc1));
		if ((EIF_BOOLEAN)(ti4_1 != arg1)) {
			RTHOOK(5);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(6);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.domain */
EIF_REFERENCE F270_3449 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("domain", 269, Current, 0, 0, 3429);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,271,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0.id, 271, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = (nstcall = 1, F1_14(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3209[Dtype(RTCW(tr1))-271])(tr1, tr3));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.occurrences */
EIF_INTEGER_32 F270_3450 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("occurrences", 269, Current, 1, 1, 3430);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F270_3465(Current, tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F869_5791(RTCW(tr1), loc1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.count */
EIF_INTEGER_32 F270_3451 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
}


/* {MML_BAG}.is_model_equal */
EIF_BOOLEAN F270_3452 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("is_model_equal", 269, Current, 2, 1, 3432);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	loc2 = arg1;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,269,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc2 = RTRV(typres0,loc2);
	}
	if (EIF_TEST(loc2)) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(loc2+ _LNGOFF_2_0_0_0_);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	if (tb1) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			tb1 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
			if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
				tb1 = (EIF_BOOLEAN) !Result;
			}
			if (tb1) break;
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc1));
			tr1 = RTCCL(tr2);
			ti4_1 = (nstcall = 1, F270_3450(loc2, tr1));
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, F869_5791(RTCW(tr1), loc1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
			RTHOOK(6);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.extended */
EIF_REFERENCE F270_3453 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA("extended", 269, Current, 0, 1, 3433);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	tr1 = (nstcall = 0, F270_3454(Current, tr1, ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("one_more", EX_POST);
		tr1 = RTCCL(arg1);
		ti4_1 = (nstcall = 1, F270_3450(RTCW(Result), tr1));
		tr1 = RTCCL(arg1);
		ti4_2 = (nstcall = 0, F270_3450(Current, tr1));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
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

/* {MML_BAG}.extended_multiple */
EIF_REFERENCE F270_3454 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("extended_multiple", 269, Current, 4, 2, 3434);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr1 = RTCCL(arg1);
		ti4_1 = (nstcall = 0, F270_3465(Current, tr1));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current);
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, F1_14(tr1));
			loc2 = (EIF_REFERENCE) tr2;
			RTHOOK(7);
			ti4_1 = (nstcall = 1, F869_5791(RTCW(loc2), loc3));
			(nstcall = 1, F869_5824(RTCW(loc2), (EIF_INTEGER_32) (ti4_1 + arg2), loc3));
		} else {
			RTHOOK(8);
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
			(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(10);
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
				if ((EIF_BOOLEAN) (loc4 > ti4_1)) break;
				RTHOOK(11);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc4));
				tr1 = RTCCL(tr2);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
				RTHOOK(12);
				loc4++;
			}
			RTHOOK(13);
			tr1 = RTCCL(arg1);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, F869_5806(RTCW(tr2)));
			(nstcall = -1, F869_5785(RTCW(tr1), (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(15);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(16);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				ti4_2 = (nstcall = 1, F869_5806(RTCW(tr1)));
				if ((EIF_BOOLEAN) (loc4 > ti4_2)) break;
				RTHOOK(17);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				ti4_3 = (nstcall = 1, F869_5791(RTCW(tr1), loc4));
				(nstcall = 1, F869_5826(RTCW(loc2), ti4_3));
				RTHOOK(18);
				loc4++;
			}
			RTHOOK(19);
			(nstcall = 1, F869_5826(RTCW(loc2), arg2));
		}
		RTHOOK(20);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,269,0xFFF8,1,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 269, _OBJSIZ_2_0_0_1_0_0_0_0_);
		}
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		(nstcall = -1, F270_3463(RTCW(tr1), loc1, loc2, (EIF_INTEGER_32) (ti4_3 + arg2)));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(21);
		Result = (EIF_REFERENCE) Current;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.removed */
EIF_REFERENCE F270_3455 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA("removed", 269, Current, 0, 1, 3435);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	tr1 = (nstcall = 0, F270_3456(Current, tr1, ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.removed_multiple */
EIF_REFERENCE F270_3456 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("removed_multiple", 269, Current, 4, 2, 3436);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F270_3465(Current, tr1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(4);
		Result = (EIF_REFERENCE) Current;
	} else {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F869_5791(RTCW(tr1), loc3));
		if ((EIF_BOOLEAN) (ti4_1 <= arg2)) {
			RTHOOK(6);
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
			(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
			(nstcall = -1, F869_5785(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
				if ((EIF_BOOLEAN) (loc4 > ti4_1)) break;
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc4 != loc3)) {
					RTHOOK(11);
					tr1 = *(EIF_REFERENCE *)(Current);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc4));
					tr1 = RTCCL(tr2);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
					RTHOOK(12);
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
					ti4_2 = (nstcall = 1, F869_5791(RTCW(tr1), loc4));
					(nstcall = 1, F869_5826(RTCW(loc2), ti4_2));
				}
				RTHOOK(13);
				loc4++;
			}
			RTHOOK(14);
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,269,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNS(typres0.id, 269, _OBJSIZ_2_0_0_1_0_0_0_0_);
			}
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_3 = (nstcall = 1, F869_5791(RTCW(tr2), loc3));
			(nstcall = -1, F270_3463(RTCW(tr1), loc1, loc2, (EIF_INTEGER_32) (ti4_2 - ti4_3)));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, F1_14(tr1));
			loc2 = (EIF_REFERENCE) tr2;
			RTHOOK(16);
			ti4_2 = (nstcall = 1, F869_5791(RTCW(loc2), loc3));
			(nstcall = 1, F869_5824(RTCW(loc2), (EIF_INTEGER_32) (ti4_2 - arg2), loc3));
			RTHOOK(17);
			{
				EIF_TYPE_INDEX typarr0[] = {0xFF01,269,0xFFF8,1,0xFFFF};
				EIF_TYPE typres0;
				
				typres0 = eif_compound_id(dftype, typarr0);
				tr1 = RTLNS(typres0.id, 269, _OBJSIZ_2_0_0_1_0_0_0_0_);
			}
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
			(nstcall = -1, F270_3463(RTCW(tr1), tr2, loc2, (EIF_INTEGER_32) (ti4_2 - arg2)));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.removed_all */
EIF_REFERENCE F270_3457 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("removed_all", 269, Current, 0, 1, 3437);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	tr2 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F270_3450(Current, tr2));
	tr1 = (nstcall = 0, F270_3456(Current, tr1, ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.restricted */
EIF_REFERENCE F270_3458 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,arg1);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("restricted", 269, Current, 4, 1, 3438);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ti4_1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
	(nstcall = -1, F869_5785(RTCW(tr1), ti4_1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
		tr1 = RTCCL(tr2);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(arg1))-271])(arg1, tr1));
		if (tb1) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, F869_5791(RTCW(tr1), loc3));
			(nstcall = 1, F869_5826(RTCW(loc2), ti4_2));
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, F869_5791(RTCW(tr1), loc3));
			loc4 += ti4_2;
		}
		RTHOOK(10);
		loc3++;
	}
	RTHOOK(11);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,269,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 269, _OBJSIZ_2_0_0_1_0_0_0_0_);
	}
	(nstcall = -1, F270_3463(RTCW(tr1), loc1, loc2, loc4));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.union */
EIF_REFERENCE F270_3459 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("union", 269, Current, 4, 1, 3439);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	ti4_2 = (nstcall = 1, F869_5806(RTCW(tr2)));
	(nstcall = -1, F869_5785(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
		tr1 = RTCCL(tr2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
		RTHOOK(6);
		loc3++;
	}
	RTHOOK(7);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F869_5806(RTCW(tr1)));
		if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_3 = (nstcall = 1, F869_5791(RTCW(tr1), loc3));
		(nstcall = 1, F869_5826(RTCW(loc2), ti4_3));
		RTHOOK(10);
		loc3++;
	}
	RTHOOK(11);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_3)) break;
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
		tr1 = RTCCL(tr2);
		ti4_4 = (nstcall = 0, F270_3466(Current, tr1, loc1));
		loc4 = (EIF_INTEGER_32) ti4_4;
		RTHOOK(14);
		if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(15);
			ti4_4 = (nstcall = 1, F869_5791(RTCW(loc2), loc4));
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
			ti4_5 = (nstcall = 1, F869_5791(RTCW(tr1), loc3));
			(nstcall = 1, F869_5824(RTCW(loc2), (EIF_INTEGER_32) (ti4_4 + ti4_5), loc4));
		} else {
			RTHOOK(16);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
			RTHOOK(17);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
			ti4_4 = (nstcall = 1, F869_5791(RTCW(tr1), loc3));
			(nstcall = 1, F869_5826(RTCW(loc2), ti4_4));
		}
		RTHOOK(18);
		loc3++;
	}
	RTHOOK(19);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,269,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 269, _OBJSIZ_2_0_0_1_0_0_0_0_);
	}
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	ti4_5 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_0_0_0_);
	(nstcall = -1, F270_3463(RTCW(tr1), loc1, loc2, (EIF_INTEGER_32) (ti4_4 + ti4_5)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.difference */
EIF_REFERENCE F270_3460 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,arg1);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("difference", 269, Current, 5, 1, 3440);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ti4_1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
	(nstcall = -1, F869_5785(RTCW(tr1), ti4_1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
		tr1 = RTCCL(tr2);
		ti4_2 = (nstcall = 1, F270_3450(RTCW(arg1), tr1));
		loc4 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F869_5791(RTCW(tr1), loc3));
		if ((EIF_BOOLEAN) (loc4 < ti4_2)) {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, F869_5791(RTCW(tr1), loc3));
			(nstcall = 1, F869_5826(RTCW(loc2), (EIF_INTEGER_32) (ti4_2 - loc4)));
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, F869_5791(RTCW(tr1), loc3));
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + ti4_2) - loc4);
		}
		RTHOOK(10);
		loc3++;
	}
	RTHOOK(11);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,269,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 269, _OBJSIZ_2_0_0_1_0_0_0_0_);
	}
	(nstcall = -1, F270_3463(RTCW(tr1), loc1, loc2, loc5));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.keys */
EIF_REFERENCE F270_3461 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {MML_BAG}.values */
EIF_REFERENCE F270_3462 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {MML_BAG}.make_from_lists */
void F270_3463 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_from_lists", 269, Current, 0, 3, 3443);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("same_count", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		ti4_2 = (nstcall = 1, F869_5806(RTCW(arg2)));
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) arg3;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {MML_BAG}.make_from_list */
void F270_3464 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_list", 269, Current, 1, 1, 3444);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNSMART(typres0.id);
	}
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
	(nstcall = -1, F869_5785(RTCW(tr1), ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(6);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(arg1))-776])(arg1, (EIF_REFERENCE) &loc1));
		tr2 = RTCCL(tr1);
		(nstcall = 0, F270_3467(Current, tr2));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MML_BAG}.index_of */
EIF_INTEGER_32 F270_3465 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("index_of", 269, Current, 0, 1, 3445);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 0, F270_3466(Current, tr1, tr2));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_BAG}.index_of_in_list */
EIF_INTEGER_32 F270_3466 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("index_of_in_list", 269, Current, 1, 2, 3446);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg2))-743])(arg2));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) break;
		RTHOOK(3);
		tr1 = RTCCL(arg1);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(arg2))-776])(arg2, (EIF_REFERENCE) &loc1));
		tr3 = RTCCL(tr2);
		tb2 = (nstcall = 0, F267_3397(Current, tr1, tr3));
		if (tb2) {
			RTHOOK(4);
			Result = (EIF_INTEGER_32) loc1;
		}
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

/* {MML_BAG}.add_occurrence */
void F270_3467 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("add_occurrence", 269, Current, 1, 1, 3447);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F270_3465(Current, tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, F869_5791(RTCW(tr2), loc1));
		(nstcall = 1, F869_5824(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), loc1));
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTCCL(arg1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(tr1))-663])(tr1, tr2));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(nstcall = 1, F869_5826(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	}
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_))++;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {MML_BAG}._invariant */
void F270_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 916, Current, 0, 0);
	RTIT("same_count", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = (nstcall = 1, F869_5806(RTCW(tr1)));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit917 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
