/*
 * Code for class MML_MAP [G#1, G#2]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mm1124.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MML_MAP}.default_create */
void F269_3419 (EIF_REFERENCE Current)
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
	
	RTEAA("default_create", 268, Current, 0, 0, 3400);
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

/* {MML_MAP}.singleton */
void F269_3420 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("singleton", 268, Current, 0, 2, 3401);
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

/* {MML_MAP}.has */
EIF_BOOLEAN F269_3421 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("has", 268, Current, 1, 1, 3402);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = Result;
		}
		if (tb1) break;
		RTHOOK(3);
		tr1 = RTCCL(arg1);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr2))-776])(tr2, (EIF_REFERENCE) &loc1));
		tr2 = RTCCL(tr3);
		tb2 = (nstcall = 0, F267_3397(Current, tr1, tr2));
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

/* {MML_MAP}.is_empty */
EIF_BOOLEAN F269_3422 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 268, Current, 0, 0, 3403);
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

/* {MML_MAP}.is_constant */
EIF_BOOLEAN F269_3423 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("is_constant", 268, Current, 1, 1, 3404);
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
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(4);
		tr1 = RTCCL(arg1);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr2))-776])(tr2, (EIF_REFERENCE) &loc1));
		tr2 = RTCCL(tr3);
		tb2 = (nstcall = 0, F267_3397(Current, tr1, tr2));
		if ((EIF_BOOLEAN) !tb2) {
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

/* {MML_MAP}.for_all */
EIF_BOOLEAN F269_3424 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTEAA("for_all", 268, Current, 1, 1, 3405);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_has_two_args", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_0_);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), tr1, tr3);
		tb3 = tb2;
		Result = (EIF_BOOLEAN) tb3;
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

/* {MML_MAP}.exists */
EIF_BOOLEAN F269_3425 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTEAA("exists", 268, Current, 1, 1, 3406);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_has_two_args", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_0_);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = Result;
		}
		if (tb1) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc1));
		tr1 = RTCCL(tr2);
		tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr3))-776])(tr3, (EIF_REFERENCE) &loc1));
		tr3 = RTCCL(tr4);
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), tr1, tr3);
		tb3 = tb2;
		Result = (EIF_BOOLEAN) tb3;
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

/* {MML_MAP}.item */
EIF_REFERENCE F269_3426 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("item", 268, Current, 1, 1, 3407);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_domain", EX_PRE);
		tr1 = (nstcall = 0, F269_3427(Current));
		tr2 = RTCCL(arg1);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(tr1))-271])(tr1, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F269_3442(Current, tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	if (~in_assertion) {
		RTHOOK(3);
		RTCT("key_found", EX_CHECK);
		if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_MAP}.domain */
EIF_REFERENCE F269_3427 (EIF_REFERENCE Current)
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
	
	RTEAA("domain", 268, Current, 0, 0, 3408);
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

/* {MML_MAP}.range */
EIF_REFERENCE F269_3428 (EIF_REFERENCE Current)
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
	
	RTEAA("range", 268, Current, 4, 0, 3409);
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

/* {MML_MAP}.image */
EIF_REFERENCE F269_3429 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("image", 268, Current, 0, 1, 3410);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F269_3436(Current, arg1));
	tr2 = (nstcall = 1, F269_3428(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_MAP}.sequence_image */
EIF_REFERENCE F269_3430 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
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
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("sequence_image", 268, Current, 2, 1, 3411);
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
	ti4_1 = (nstcall = 1, F271_3479(RTCW(arg1)));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, ti4_1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F271_3479(RTCW(arg1)));
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(4);
		tr1 = (nstcall = 0, F269_3427(Current));
		tr2 = (nstcall = 1, F271_3475(RTCW(arg1), loc2));
		tr3 = RTCCL(tr2);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(tr1))-271])(tr1, tr3));
		if (tb1) {
			RTHOOK(5);
			tr1 = (nstcall = 1, F271_3475(RTCW(arg1), loc2));
			tr2 = RTCCL(tr1);
			tr1 = (nstcall = 0, F269_3426(Current, tr2));
			tr2 = RTCCL(tr1);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr2));
		}
		RTHOOK(6);
		loc2++;
	}
	RTHOOK(7);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,270,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 270, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F271_3497(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_MAP}.to_bag */
EIF_REFERENCE F269_3431 (EIF_REFERENCE Current)
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
	
	RTEAA("to_bag", 268, Current, 0, 0, 3412);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,269,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		tr1 = RTLNS(typres0.id, 269, _OBJSIZ_2_0_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1_14(tr2));
	(nstcall = -1, F270_3464(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_MAP}.count */
EIF_INTEGER_32 F269_3432 (EIF_REFERENCE Current)
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
	
	RTEAA("count", 268, Current, 0, 0, 3413);
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

/* {MML_MAP}.is_model_equal */
EIF_BOOLEAN F269_3433 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("is_model_equal", 268, Current, 2, 1, 3414);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	loc2 = arg1;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,268,0xFFF8,1,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc2 = RTRV(typres0,loc2);
	}
	if (EIF_TEST(loc2)) {
		tr1 = (nstcall = 0, F269_3427(Current));
		tr2 = (nstcall = 1, F269_3427(loc2));
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3089[Dtype(RTCW(tr1))-267])(tr1, tr2));
		tb1 = tb2;
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
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc1));
			tr1 = RTCCL(tr2);
			tr3 = *(EIF_REFERENCE *)(Current);
			tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr3))-776])(tr3, (EIF_REFERENCE) &loc1));
			tr3 = RTCCL(tr4);
			tr3 = (nstcall = 1, F269_3426(loc2, tr3));
			tr4 = RTCCL(tr3);
			tb2 = (nstcall = 0, F267_3397(Current, tr1, tr4));
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

/* {MML_MAP}.updated */
EIF_REFERENCE F269_3434 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
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
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,arg2);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("updated", 268, Current, 4, 2, 3415);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F269_3442(Current, tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, F1_14(tr1));
		loc4 = (EIF_REFERENCE) tr2;
		RTHOOK(4);
		tr1 = RTCCL(arg2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(loc4))-776])(loc4, tr1, (EIF_REFERENCE) &loc1));
		RTHOOK(5);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,268,0xFFF8,1,0xFFF8,2,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 268, _OBJSIZ_2_0_0_0_0_0_0_0_);
		}
		tr2 = *(EIF_REFERENCE *)(Current);
		(nstcall = -1, F269_3441(RTCW(tr1), tr2, loc4));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,1,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc2));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc3))-663])(loc3, tr1));
			RTHOOK(10);
			loc2++;
		}
		RTHOOK(11);
		tr1 = RTCCL(arg1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc3))-663])(loc3, tr1));
		RTHOOK(12);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))));
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(13);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
			if ((EIF_BOOLEAN) (loc2 > ti4_2)) break;
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc2));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc4))-663])(loc4, tr1));
			RTHOOK(16);
			loc2++;
		}
		RTHOOK(17);
		tr1 = RTCCL(arg2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc4))-663])(loc4, tr1));
		RTHOOK(18);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,268,0xFFF8,1,0xFFF8,2,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 268, _OBJSIZ_2_0_0_0_0_0_0_0_);
		}
		(nstcall = -1, F269_3441(RTCW(tr1), loc3, loc4));
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("has_key", EX_POST);
		tr1 = (nstcall = 1, F269_3427(RTCW(Result)));
		tr2 = RTCCL(arg1);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(tr1))-271])(tr1, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("has_value", EX_POST);
		tr1 = RTCCL(arg1);
		tr1 = (nstcall = 1, F269_3426(RTCW(Result), tr1));
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_MAP}.removed */
EIF_REFERENCE F269_3435 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN tb1;
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
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("removed", 268, Current, 4, 1, 3416);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTCCL(arg1);
	ti4_1 = (nstcall = 0, F269_3442(Current, tr1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
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
		RTHOOK(4);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
			if ((EIF_BOOLEAN) (loc4 > ti4_1)) break;
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc4 != loc3)) {
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc4));
				tr1 = RTCCL(tr2);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
				RTHOOK(9);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc4));
				tr1 = RTCCL(tr2);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
			}
			RTHOOK(10);
			loc4++;
		}
		RTHOOK(11);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,268,0xFFF8,1,0xFFF8,2,0xFFFF};
			EIF_TYPE typres0;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 268, _OBJSIZ_2_0_0_0_0_0_0_0_);
		}
		(nstcall = -1, F269_3441(RTCW(tr1), loc1, loc2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(12);
		Result = (EIF_REFERENCE) Current;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("not_has_key", EX_POST);
		tr1 = (nstcall = 1, F269_3427(RTCW(Result)));
		tr2 = RTCCL(arg1);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(tr1))-271])(tr1, tr2));
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

/* {MML_MAP}.restricted */
EIF_REFERENCE F269_3436 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("restricted", 268, Current, 3, 1, 3417);
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
		EIF_TYPE_INDEX typarr0[] = {0xFF01,268,0xFFF8,1,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 268, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F269_3441(RTCW(tr1), loc1, loc2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_MAP}.override */
EIF_REFERENCE F269_3437 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,loc2);
	RTLR(6,tr3);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("override", 268, Current, 3, 1, 3418);
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
		EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr2))-743])(tr2));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R4897[Dtype(RTCW(tr1))-866])(tr1, (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_1)) break;
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
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
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_2)) break;
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
		tr1 = RTCCL(tr2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
		RTHOOK(10);
		loc3++;
	}
	RTHOOK(11);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_3 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(tr1))-743])(tr1));
		if ((EIF_BOOLEAN) (loc3 > ti4_3)) break;
		RTHOOK(13);
		tr1 = (nstcall = 1, F269_3427(RTCW(arg1)));
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr2))-776])(tr2, (EIF_REFERENCE) &loc3));
		tr2 = RTCCL(tr3);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(tr1))-271])(tr1, tr2));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, tr1));
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr1))-776])(tr1, (EIF_REFERENCE) &loc3));
			tr1 = RTCCL(tr2);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
		}
		RTHOOK(16);
		loc3++;
	}
	RTHOOK(17);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,268,0xFFF8,1,0xFFF8,2,0xFFFF};
		EIF_TYPE typres0;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 268, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F269_3441(RTCW(tr1), loc1, loc2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_MAP}.inverse */
EIF_REFERENCE F269_3438 (EIF_REFERENCE Current)
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
	
	RTEAA("inverse", 268, Current, 0, 0, 3419);
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

/* {MML_MAP}.keys */
EIF_REFERENCE F269_3439 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {MML_MAP}.values */
EIF_REFERENCE F269_3440 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {MML_MAP}.make_from_lists */
void F269_3441 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("make_from_lists", 268, Current, 0, 2, 3397);
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

/* {MML_MAP}.index_of_key */
EIF_INTEGER_32 F269_3442 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("index_of_key", 268, Current, 1, 1, 3398);
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
			tb1 = (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) break;
		RTHOOK(3);
		tr1 = RTCCL(arg1);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(tr2))-776])(tr2, (EIF_REFERENCE) &loc1));
		tr2 = RTCCL(tr3);
		tb2 = (nstcall = 0, F267_3397(Current, tr1, tr2));
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

/* {MML_MAP}._invariant */
void F269_1 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 1123, Current, 0, 0);
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

void EIF_Minit1124 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
