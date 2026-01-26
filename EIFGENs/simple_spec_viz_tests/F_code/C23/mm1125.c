/*
 * Code for class MML_RELATION [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mm1125.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MML_RELATION}.default_create */
void F268_3398 (EIF_REFERENCE Current)
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
	
	RTEAA("default_create", 267, Current, 0, 0, 3385);
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
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ((EIF_INTEGER_32) 0L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {MML_RELATION}.singleton */
void F268_3399 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,arg2);
	RTLIU(5);
	
	RTEAA("singleton", 267, Current, 0, 2, 3386);
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
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTCCL(arg1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(tr1))-663])(tr1, tr2));
	RTHOOK(3);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTCCL(arg2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(tr1))-663])(tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {MML_RELATION}.has */
EIF_BOOLEAN F268_3400 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,arg2);
	RTLIU(6);
	
	RTEAA("has", 267, Current, 1, 2, 3387);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = Result;
		}
		if (tb1) break;
		RTHOOK(3);
		tb2 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc1));
		tr1 = RTCCL(tr2);
		tr3 = RTCCL(arg1);
		tb3 = (nstcall = 0, F267_3397(Current, tr1, tr3));
		if (tb3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc1));
			tr1 = RTCCL(tr2);
			tr3 = RTCCL(arg2);
			tb3 = (nstcall = 0, F267_3397(Current, tr1, tr3));
			tb2 = tb3;
		}
		if (tb2) {
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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

/* {MML_RELATION}.is_empty */
EIF_BOOLEAN F268_3401 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 267, Current, 0, 0, 3388);
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

/* {MML_RELATION}.domain */
EIF_REFERENCE F268_3402 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("domain", 267, Current, 4, 0, 3389);
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
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(4);
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc1))-743])(loc1));
			if (!(EIF_BOOLEAN) (loc3 > ti4_2)) {
				tb1 = loc4;
			}
			if (tb1) break;
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc2));
			tr1 = RTCCL(tr2);
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(loc1))-776])(loc1, (EIF_REFERENCE) &loc3));
			tr4 = RTCCL(tr3);
			tb2 = (nstcall = 0, F267_3397(Current, tr1, tr4));
			if (tb2) {
				RTHOOK(8);
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(9);
			loc3++;
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) !loc4) {
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc2));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
		}
		RTHOOK(12);
		loc2++;
	}
	RTHOOK(13);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,271,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 271, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3209[Dtype(RTCW(tr1))-271])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.range */
EIF_REFERENCE F268_3403 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("range", 267, Current, 4, 0, 3390);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ti4_1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(4);
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc1))-743])(loc1));
			if (!(EIF_BOOLEAN) (loc3 > ti4_2)) {
				tb1 = loc4;
			}
			if (tb1) break;
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc2));
			tr1 = RTCCL(tr2);
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(loc1))-776])(loc1, (EIF_REFERENCE) &loc3));
			tr4 = RTCCL(tr3);
			tb2 = (nstcall = 0, F267_3397(Current, tr1, tr4));
			if (tb2) {
				RTHOOK(8);
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
			RTHOOK(9);
			loc3++;
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) !loc4) {
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc2));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
		}
		RTHOOK(12);
		loc2++;
	}
	RTHOOK(13);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,271,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 271, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3209[Dtype(RTCW(tr1))-271])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.image_of */
EIF_REFERENCE F268_3404 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("image_of", 267, Current, 0, 1, 3391);
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
	tr2 = RTCCL(arg1);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3190[Dtype(RTCW(tr1))-271])(tr1, tr2));
	tr1 = (nstcall = 0, F268_3405(Current, tr1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.image */
EIF_REFERENCE F268_3405 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("image", 267, Current, 0, 1, 3392);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F268_3410(Current, arg1));
	tr2 = (nstcall = 1, F268_3403(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.count */
EIF_INTEGER_32 F268_3406 (EIF_REFERENCE Current)
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
	
	RTEAA("count", 267, Current, 0, 0, 3393);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.is_model_equal */
EIF_BOOLEAN F268_3407 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLIU(7);
	
	RTEAA("is_model_equal", 267, Current, 2, 1, 3394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	loc2 = arg1;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,267,0xFFF8,1,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc2 = RTRV(typres0,loc2);
	}
	if (EIF_TEST(loc2)) {
		ti4_1 = (nstcall = 0, F268_3406(Current));
		ti4_2 = (nstcall = 1, F268_3406(loc2));
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
			tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr3))-776])(tr3, (EIF_REFERENCE) &loc1));
			tr3 = RTCCL(tr4);
			tb2 = (nstcall = 1, F268_3400(loc2, tr1, tr3));
			Result = (EIF_BOOLEAN) tb2;
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

/* {MML_RELATION}.extended */
EIF_REFERENCE F268_3408 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("extended", 267, Current, 3, 2, 3395);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	tr2 = RTCCL(arg2);
	tb1 = (nstcall = 1, F268_3400(Current, tr1, tr2));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
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
		tr1 = RTCCL(arg1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
		RTHOOK(8);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
			if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
			RTHOOK(12);
			loc3++;
		}
		RTHOOK(13);
		tr1 = RTCCL(arg2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
		RTHOOK(14);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,267,0xFFF8,1,0xFFF8,2,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 267, _OBJSIZ_2_0_0_0_0_0_0_0_);
		}
		(nstcall = -1, F268_3418(RTCW(tr1), loc1, loc2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(15);
		Result = (EIF_REFERENCE) Current;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("has_pair", EX_POST);
		tr1 = RTCCL(arg1);
		tr2 = RTCCL(arg2);
		tb1 = (nstcall = 1, F268_3400(RTCW(Result), tr1, tr2));
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

/* {MML_RELATION}.removed */
EIF_REFERENCE F268_3409 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,arg1);
	RTLR(6,tr3);
	RTLR(7,arg2);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("removed", 267, Current, 4, 2, 3396);
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
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ti4_1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
		RTHOOK(5);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !loc4) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			tr3 = RTCCL(arg1);
			tb3 = (nstcall = 0, F267_3397(Current, tr1, tr3));
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			tr3 = RTCCL(arg2);
			tb2 = (nstcall = 0, F267_3397(Current, tr1, tr3));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
		}
		RTHOOK(9);
		loc3++;
	}
	RTHOOK(10);
	if (loc4) {
		RTHOOK(11);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,267,0xFFF8,1,0xFFF8,2,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 267, _OBJSIZ_2_0_0_0_0_0_0_0_);
		}
		(nstcall = -1, F268_3418(RTCW(tr1), loc1, loc2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(12);
		Result = (EIF_REFERENCE) Current;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("not_has_pair", EX_POST);
		tr1 = RTCCL(arg1);
		tr2 = RTCCL(arg2);
		tb1 = (nstcall = 1, F268_3400(RTCW(Result), tr1, tr2));
		if ((EIF_BOOLEAN) !tb1) {
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
	return Result;
}

/* {MML_RELATION}.restricted */
EIF_REFERENCE F268_3410 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("restricted", 267, Current, 3, 1, 3375);
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
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ti4_1));
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
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(arg1))-271])(arg1, tr1));
		if (tb1) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
		}
		RTHOOK(8);
		loc3++;
	}
	RTHOOK(9);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,267,0xFFF8,1,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 267, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F268_3418(RTCW(tr1), loc1, loc2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.inverse */
EIF_REFERENCE F268_3411 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("inverse", 267, Current, 0, 0, 3376);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,267,0xFFF8,2,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0.id, 267, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1_14(tr2));
	tr2 = *(EIF_REFERENCE *)(Current);
	tr4 = (nstcall = 1, F1_14(tr2));
	(nstcall = -1, F268_3418(RTCW(tr1), tr3, tr4));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.union */
EIF_REFERENCE F268_3412 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("union", 267, Current, 4, 1, 3377);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F268_3414(Current, arg1));
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(RTCW(loc4));
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_1_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc4));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
		tr1 = RTCCL(tr2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
		RTHOOK(7);
		loc3++;
	}
	RTHOOK(8);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_1_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_1_);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
		tr1 = RTCCL(tr2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
		RTHOOK(11);
		loc3++;
	}
	RTHOOK(12);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(13);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_3)) break;
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
		tr1 = RTCCL(tr2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
		RTHOOK(15);
		loc3++;
	}
	RTHOOK(16);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(17);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		ti4_4 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_4)) break;
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
		tr1 = RTCCL(tr2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
		RTHOOK(19);
		loc3++;
	}
	RTHOOK(20);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,267,0xFFF8,1,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 267, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F268_3418(RTCW(tr1), loc1, loc2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.intersection */
EIF_REFERENCE F268_3413 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,arg1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("intersection", 267, Current, 3, 1, 3378);
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
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ti4_1));
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
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr3))-776])(tr3, (EIF_REFERENCE) &loc3));
		tr3 = RTCCL(tr4);
		tb1 = (nstcall = 1, F268_3400(RTCW(arg1), tr1, tr3));
		if (tb1) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
		}
		RTHOOK(8);
		loc3++;
	}
	RTHOOK(9);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,267,0xFFF8,1,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 267, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F268_3418(RTCW(tr1), loc1, loc2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.difference */
EIF_REFERENCE F268_3414 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,arg1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("difference", 267, Current, 3, 1, 3379);
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
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ti4_1));
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
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr3))-776])(tr3, (EIF_REFERENCE) &loc3));
		tr3 = RTCCL(tr4);
		tb1 = (nstcall = 1, F268_3400(RTCW(arg1), tr1, tr3));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
		}
		RTHOOK(8);
		loc3++;
	}
	RTHOOK(9);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,267,0xFFF8,1,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 267, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F268_3418(RTCW(tr1), loc1, loc2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.sym_difference */
EIF_REFERENCE F268_3415 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("sym_difference", 267, Current, 0, 1, 3380);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F268_3412(Current, arg1));
	tr2 = (nstcall = 1, F268_3413(Current, arg1));
	tr2 = (nstcall = 1, F268_3414(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_RELATION}.lefts */
EIF_REFERENCE F268_3416 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {MML_RELATION}.rights */
EIF_REFERENCE F268_3417 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {MML_RELATION}.make_from_lists */
void F268_3418 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("make_from_lists", 267, Current, 0, 2, 3383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("same_count", EX_PRE);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg2))-743])(arg2));
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
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {MML_RELATION}._invariant */
void F268_1 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 1124, Current, 0, 0);
	RTIT("same_count", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit1125 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
