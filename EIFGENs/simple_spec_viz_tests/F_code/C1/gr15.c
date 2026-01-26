/*
 * Code for class GRAPHVIZ_RENDERER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "gr15.h"
#include <graphviz/gvc.h>
#include <stdlib.h>
#include "eif_helpers.h"
#include <graphviz/cgraph.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F18_362
static EIF_POINTER inline_F18_362 (void)
{
	return gvContext();
	;
}
#define INLINE_F18_362
#endif
#ifndef INLINE_F18_363
static EIF_POINTER inline_F18_363 (EIF_POINTER arg1)
{
	return gvcVersion((GVC_t*)arg1);
	;
}
#define INLINE_F18_363
#endif
#ifndef INLINE_F18_364
static EIF_POINTER inline_F18_364 (EIF_POINTER arg1)
{
	return agmemread((const char*)arg1);
	;
}
#define INLINE_F18_364
#endif
#ifndef INLINE_F18_365
static void inline_F18_365 (EIF_POINTER arg1)
{
	agclose((Agraph_t*)arg1);
	;
}
#define INLINE_F18_365
#endif
#ifndef INLINE_F18_366
static EIF_INTEGER_32 inline_F18_366 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return gvLayout((GVC_t*)arg1, (Agraph_t*)arg2, (const char*)arg3);
	;
}
#define INLINE_F18_366
#endif
#ifndef INLINE_F18_367
static void inline_F18_367 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gvFreeLayout((GVC_t*)arg1, (Agraph_t*)arg2);
	;
}
#define INLINE_F18_367
#endif
#ifndef INLINE_F18_368
static EIF_INTEGER_32 inline_F18_368 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_POINTER arg5)
{
	char* result = NULL;
unsigned int len = 0;
int ret = gvRenderData((GVC_t*)arg1, (Agraph_t*)arg2,
                        (const char*)arg3, &result, &len);
*((char**)arg4) = result;
*((int*)arg5) = (int)len;
return ret;
	;
}
#define INLINE_F18_368
#endif
#ifndef INLINE_F18_369
static EIF_INTEGER_32 inline_F18_369 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return gvRenderFilename((GVC_t*)arg1, (Agraph_t*)arg2, (const char*)arg3, (const char*)arg4);
	;
}
#define INLINE_F18_369
#endif
#ifndef INLINE_F18_370
static void inline_F18_370 (EIF_POINTER arg1)
{
	gvFreeRenderData((char*)arg1);
	;
}
#define INLINE_F18_370
#endif
#ifndef INLINE_F18_371
static EIF_INTEGER_32 inline_F18_371 (EIF_POINTER arg1)
{
	return gvFreeContext((GVC_t*)arg1);
	;
}
#define INLINE_F18_371
#endif
#ifndef INLINE_F18_372
static EIF_INTEGER_32 inline_F18_372 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return _putenv_s((const char*)arg1, (const char*)arg2);
	;
}
#define INLINE_F18_372
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GRAPHVIZ_RENDERER}.default_create */
void F18_341 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("default_create", 17, Current, 0, 0, 362);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F18_342(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_RENDERER}.make */
void F18_342 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("make", 17, Current, 2, 0, 363);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30000L);
	RTHOOK(2);
	tr1 = RTMS_EX_H("neato",5,1701730415);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("D:\\prod\\simple_graphviz\\bin",27,1137859182);
	(nstcall = -1, F238_2749(RTCW(tr1), tr2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("GVPLUGINDIR",11,1548684370);
	(nstcall = -1, F238_2749(RTCW(tr1), tr2));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tp1 = (nstcall = 1, F238_2771(RTCW(loc2)));
	tp2 = (nstcall = 1, F238_2771(RTCW(loc1)));
	ti4_1 = (nstcall = 0, F18_372(Current, tp1, tp2));
	eif_do_nothing_value.it_i4 = ti4_1;
	RTHOOK(6);
	tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr2 = RTMS_EX_H("GVBINDIR",8,1795399506);
	(nstcall = -1, F238_2749(RTCW(tr1), tr2));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tp1 = (nstcall = 1, F238_2771(RTCW(loc2)));
	tp2 = (nstcall = 1, F238_2771(RTCW(loc1)));
	ti4_1 = (nstcall = 0, F18_372(Current, tp1, tp2));
	eif_do_nothing_value.it_i4 = ti4_1;
	RTHOOK(8);
	tp1 = (nstcall = 0, F18_362(Current));
	*(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_) = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("default_timeout", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 30000L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("default_engine", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("neato",5,1701730415);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("context_created", EX_POST);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
		tp2 = (nstcall = 0, F1_33(Current));
		if ((EIF_BOOLEAN)(tp1 != tp2)) {
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

/* {GRAPHVIZ_RENDERER}.timeout_ms */
EIF_INTEGER_32 F18_343 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
}


/* {GRAPHVIZ_RENDERER}.engine */
EIF_REFERENCE F18_344 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {GRAPHVIZ_RENDERER}.post_processor */
EIF_REFERENCE F18_345 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {GRAPHVIZ_RENDERER}.set_timeout */
EIF_REFERENCE F18_346 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("set_timeout", 17, Current, 0, 1, 367);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("timeout_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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

/* {GRAPHVIZ_RENDERER}.set_engine */
EIF_REFERENCE F18_347 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("set_engine", 17, Current, 0, 1, 368);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("engine_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("engine_valid", EX_PRE);
		tb1 = (nstcall = 0, F18_353(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("engine_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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
	return Result;
}

/* {GRAPHVIZ_RENDERER}.set_post_processor */
EIF_REFERENCE F18_348 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("set_post_processor", 17, Current, 0, 1, 369);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("processor_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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

/* {GRAPHVIZ_RENDERER}.enable_boundary_constraints */
EIF_REFERENCE F18_349 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("enable_boundary_constraints", 17, Current, 1, 2, 370);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_width", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_height", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg2, tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(7, 0x01).id, 7, _OBJSIZ_0_0_0_1_0_0_0_6_);
	(nstcall = -1, F8_181(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 1, F8_189(RTCW(loc1), arg1, arg2));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(5);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	RTHOOK(6);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("processor_enabled", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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

/* {GRAPHVIZ_RENDERER}.disable_boundary_constraints */
EIF_REFERENCE F18_350 (EIF_REFERENCE Current)
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
	
	RTEAA("disable_boundary_constraints", 17, Current, 0, 0, 371);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTHOOK(2);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("processor_disabled", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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

/* {GRAPHVIZ_RENDERER}.is_graphviz_available */
EIF_BOOLEAN F18_351 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_graphviz_available", 17, Current, 0, 0, 372);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
	tp2 = (nstcall = 0, F1_33(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.graphviz_version */
EIF_REFERENCE F18_352 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("graphviz_version", 17, Current, 2, 0, 373);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
	tp2 = (nstcall = 0, F1_33(Current));
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
		tp1 = (nstcall = 0, F18_363(Current, tp1));
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(3);
		tp1 = (nstcall = 0, F1_33(Current));
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			RTHOOK(4);
			tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
			(nstcall = -1, F238_2751(RTCW(tr1), loc1));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(5);
			tr1 = (nstcall = 1, F238_2763(RTCW(loc2)));
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

/* {GRAPHVIZ_RENDERER}.is_valid_engine */
EIF_BOOLEAN F18_353 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_valid_engine", 17, Current, 0, 1, 374);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("engine_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tr1 = RTMS_EX_H("dot",3,6582132);
	tb7 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg1))-1079])(arg1, tr1));
	if (!tb7) {
		tr1 = RTMS_EX_H("neato",5,1701730415);
		tb7 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg1))-1079])(arg1, tr1));
		tb6 = tb7;
	}
	if (!tb6) {
		tr1 = RTMS_EX_H("fdp",3,6710384);
		tb6 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg1))-1079])(arg1, tr1));
		tb5 = tb6;
	}
	if (!tb5) {
		tr1 = RTMS_EX_H("circo",5,1769864559);
		tb5 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg1))-1079])(arg1, tr1));
		tb4 = tb5;
	}
	if (!tb4) {
		tr1 = RTMS_EX_H("twopi",5,2004682857);
		tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg1))-1079])(arg1, tr1));
		tb3 = tb4;
	}
	if (!tb3) {
		tr1 = RTMS_EX_H("osage",5,1936615781);
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg1))-1079])(arg1, tr1));
		tb2 = tb3;
	}
	if (!tb2) {
		tr1 = RTMS_EX_H("sfdp",4,1936090224);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg1))-1079])(arg1, tr1));
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.is_version_sufficient */
EIF_BOOLEAN F18_354 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc7);
	RTLR(4,loc6);
	RTLIU(5);
	
	RTEAA("is_version_sufficient", 17, Current, 7, 0, 375);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F18_352(Current));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc7 = loc1;
	if (EIF_TEST(loc7)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R6247[Dtype(loc7)-1079])(loc7, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L)));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(loc7)-1079])(loc7, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
			ti4_1 = (nstcall = 1, F1076_7666(RTCW(tr1)));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
				RTHOOK(8);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R6247[Dtype(loc7)-1079])(loc7, (EIF_CHARACTER_8) '.', (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(9);
				if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(10);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(loc7)-1079])(loc7, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
					loc6 = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(11);
					ti4_1 = *(EIF_INTEGER_32 *)(loc7+ _LNGOFF_1_1_0_2_);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(loc7)-1079])(loc7, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), ti4_1));
					loc6 = (EIF_REFERENCE) tr1;
				}
				RTHOOK(12);
				tb1 = (nstcall = 1, F1076_7632(RTCW(loc6)));
				if (tb1) {
					RTHOOK(13);
					ti4_1 = (nstcall = 1, F1076_7666(RTCW(loc6)));
					loc5 = (EIF_INTEGER_32) ti4_1;
				}
			}
			RTHOOK(14);
			tb1 = (nstcall = 0, F18_355(Current, loc4, loc5, ((EIF_INTEGER_32) 2L), ((EIF_INTEGER_32) 40L)));
			Result = (EIF_BOOLEAN) tb1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.is_version_sufficient_check */
EIF_BOOLEAN F18_355 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("is_version_sufficient_check", 17, Current, 0, 4, 343);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > arg3) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == arg3) && (EIF_BOOLEAN) (arg2 >= arg4)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.render_svg */
EIF_REFERENCE F18_356 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("render_svg", 17, Current, 0, 1, 344);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dot_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTMS_EX_H("svg",3,7566951);
	tr1 = (nstcall = 0, F18_359(Current, arg1, tr1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {GRAPHVIZ_RENDERER}.render_pdf */
EIF_REFERENCE F18_357 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("render_pdf", 17, Current, 0, 1, 345);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dot_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTMS_EX_H("pdf",3,7365734);
	tr1 = (nstcall = 0, F18_359(Current, arg1, tr1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {GRAPHVIZ_RENDERER}.render_png */
EIF_REFERENCE F18_358 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("render_png", 17, Current, 0, 1, 346);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dot_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTMS_EX_H("png",3,7368295);
	tr1 = (nstcall = 0, F18_359(Current, arg1, tr1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {GRAPHVIZ_RENDERER}.render */
EIF_REFERENCE F18_359 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc7);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,loc6);
	RTLR(10,tr3);
	RTLR(11,loc9);
	RTLR(12,loc8);
	RTLIU(13);
	
	RTEAA("render", 17, Current, 11, 2, 347);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dot_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("format_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("format_valid", EX_PRE);
		tb1 = '\01';
		tb2 = '\01';
		tr1 = RTMS_EX_H("svg",3,7566951);
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg2))-1079])(arg2, tr1));
		if (!tb3) {
			tr1 = RTMS_EX_H("pdf",3,7365734);
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg2))-1079])(arg2, tr1));
			tb2 = tb3;
		}
		if (!tb2) {
			tr1 = RTMS_EX_H("png",3,7368295);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(arg2))-1079])(arg2, tr1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = (nstcall = 0, F18_351(Current));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr2 = RTMS_EX_H("GraphViz library not available",30,548644709);
		(nstcall = -1, F19_373(RTCW(tr1), ((EIF_INTEGER_32) 1L), tr2));
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(32, 0x01).id, 32, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F33_585(RTCW(tr1), loc7));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(7);
		tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F238_2749(RTCW(tr1), arg1));
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		tp1 = (nstcall = 1, F238_2771(RTCW(loc4)));
		tp1 = (nstcall = 0, F18_364(Current, tp1));
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(9);
		tp1 = (nstcall = 0, F1_33(Current));
		if ((EIF_BOOLEAN)(loc1 == tp1)) {
			RTHOOK(10);
			tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_1_0_0_1_0_0_0_0_);
			tr2 = RTMS_EX_H("Failed to parse DOT source",26,98247269);
			(nstcall = -1, F19_373(RTCW(tr1), ((EIF_INTEGER_32) 3L), tr2));
			loc7 = (EIF_REFERENCE) tr1;
			RTHOOK(11);
			tr1 = RTLNS(eif_new_type(32, 0x01).id, 32, _OBJSIZ_2_1_0_0_0_0_0_0_);
			(nstcall = -1, F33_585(RTCW(tr1), loc7));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(12);
			tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(Current);
			(nstcall = -1, F238_2749(RTCW(tr1), tr2));
			loc5 = (EIF_REFERENCE) tr1;
			RTHOOK(13);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
			tp2 = (nstcall = 1, F238_2771(RTCW(loc5)));
			ti4_1 = (nstcall = 0, F18_366(Current, tp1, loc1, tp2));
			loc10 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc10 != ((EIF_INTEGER_32) 0L))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTMS_EX_H("neato",5,1701730415);
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(15);
				tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
				tr2 = RTMS_EX_H("fdp",3,6710384);
				(nstcall = -1, F238_2749(RTCW(tr1), tr2));
				loc5 = (EIF_REFERENCE) tr1;
				RTHOOK(16);
				tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
				tp2 = (nstcall = 1, F238_2771(RTCW(loc5)));
				ti4_1 = (nstcall = 0, F18_366(Current, tp1, loc1, tp2));
				loc10 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(17);
			tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
			(nstcall = -1, F238_2749(RTCW(tr1), arg2));
			loc6 = (EIF_REFERENCE) tr1;
			RTHOOK(18);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
			tp2 = (nstcall = 1, F238_2771(RTCW(loc6)));
			ti4_1 = (nstcall = 0, F18_368(Current, tp1, loc1, tp2, (EIF_POINTER *) &(loc2), (EIF_INTEGER_32 *) &(loc3)));
			loc11 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(19);
			if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(20);
				tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
				(nstcall = 0, F18_367(Current, tp1, loc1));
			}
			RTHOOK(21);
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc11 != ((EIF_INTEGER_32) 0L))) {
				tp1 = (nstcall = 0, F1_33(Current));
				tb1 = (EIF_BOOLEAN)(loc2 == tp1);
			}
			if (tb1) {
				RTHOOK(22);
				(nstcall = 0, F18_365(Current, loc1));
				RTHOOK(23);
				tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_1_0_0_1_0_0_0_0_);
				tr2 = RTMS_EX_H("Render failed for format: ",26,907792160);
				tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, arg2));
				(nstcall = -1, F19_373(RTCW(tr1), ((EIF_INTEGER_32) 4L), tr3));
				loc7 = (EIF_REFERENCE) tr1;
				RTHOOK(24);
				tr1 = RTLNS(eif_new_type(32, 0x01).id, 32, _OBJSIZ_2_1_0_0_0_0_0_0_);
				(nstcall = -1, F33_585(RTCW(tr1), loc7));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(25);
				tr1 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
				(nstcall = -1, F303_3911(RTCW(tr1), loc2, loc3));
				loc9 = (EIF_REFERENCE) tr1;
				RTHOOK(26);
				tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F1079_7731(RTCW(tr1), loc3));
				loc8 = (EIF_REFERENCE) tr1;
				RTHOOK(27);
				(nstcall = 1, F1081_7807(RTCW(loc8), loc2, ((EIF_INTEGER_32) 1L), loc3));
				RTHOOK(28);
				(nstcall = 0, F18_370(Current, loc2));
				RTHOOK(29);
				(nstcall = 0, F18_365(Current, loc1));
				RTHOOK(30);
				tr1 = RTLNS(eif_new_type(32, 0x01).id, 32, _OBJSIZ_2_1_0_0_0_0_0_0_);
				(nstcall = -1, F33_584(RTCW(tr1), loc8));
				Result = (EIF_REFERENCE) tr1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.render_to_file */
EIF_REFERENCE F18_360 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
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
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc6);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,Result);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLR(12,tr3);
	RTLR(13,loc9);
	RTLIU(14);
	
	RTEAA("render_to_file", 17, Current, 9, 3, 348);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("dot_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("format_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg3)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tb1 = (nstcall = 0, F18_351(Current));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr2 = RTMS_EX_H("GraphViz library not available",30,548644709);
		(nstcall = -1, F19_373(RTCW(tr1), ((EIF_INTEGER_32) 1L), tr2));
		loc6 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		tr1 = RTLNS(eif_new_type(32, 0x01).id, 32, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F33_585(RTCW(tr1), loc6));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F238_2749(RTCW(tr1), arg1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		tp1 = (nstcall = 1, F238_2771(RTCW(loc2)));
		tp1 = (nstcall = 0, F18_364(Current, tp1));
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(10);
		tp1 = (nstcall = 0, F1_33(Current));
		if ((EIF_BOOLEAN)(loc1 == tp1)) {
			RTHOOK(11);
			tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_1_0_0_1_0_0_0_0_);
			tr2 = RTMS_EX_H("Failed to parse DOT source",26,98247269);
			(nstcall = -1, F19_373(RTCW(tr1), ((EIF_INTEGER_32) 3L), tr2));
			loc6 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			tr1 = RTLNS(eif_new_type(32, 0x01).id, 32, _OBJSIZ_2_1_0_0_0_0_0_0_);
			(nstcall = -1, F33_585(RTCW(tr1), loc6));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(13);
			tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(Current);
			(nstcall = -1, F238_2749(RTCW(tr1), tr2));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(14);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
			tp2 = (nstcall = 1, F238_2771(RTCW(loc3)));
			ti4_1 = (nstcall = 0, F18_366(Current, tp1, loc1, tp2));
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(15);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) 0L))) {
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = RTMS_EX_H("neato",5,1701730415);
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(16);
				tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
				tr2 = RTMS_EX_H("fdp",3,6710384);
				(nstcall = -1, F238_2749(RTCW(tr1), tr2));
				loc3 = (EIF_REFERENCE) tr1;
				RTHOOK(17);
				tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
				tp2 = (nstcall = 1, F238_2771(RTCW(loc3)));
				ti4_1 = (nstcall = 0, F18_366(Current, tp1, loc1, tp2));
				loc7 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(18);
			tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
			(nstcall = -1, F238_2749(RTCW(tr1), arg2));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(19);
			tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
			(nstcall = -1, F238_2749(RTCW(tr1), arg3));
			loc5 = (EIF_REFERENCE) tr1;
			RTHOOK(20);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
			tp2 = (nstcall = 1, F238_2771(RTCW(loc4)));
			tp3 = (nstcall = 1, F238_2771(RTCW(loc5)));
			ti4_1 = (nstcall = 0, F18_369(Current, tp1, loc1, tp2, tp3));
			loc8 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(21);
			if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(22);
				tp1 = *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
				(nstcall = 0, F18_367(Current, tp1, loc1));
			}
			RTHOOK(23);
			(nstcall = 0, F18_365(Current, loc1));
			RTHOOK(24);
			if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(25);
				tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_1_0_0_1_0_0_0_0_);
				tr2 = RTMS_EX_H("Render to file failed: ",23,465444640);
				tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, arg3));
				(nstcall = -1, F19_373(RTCW(tr1), ((EIF_INTEGER_32) 4L), tr3));
				loc6 = (EIF_REFERENCE) tr1;
				RTHOOK(26);
				tr1 = RTLNS(eif_new_type(32, 0x01).id, 32, _OBJSIZ_2_1_0_0_0_0_0_0_);
				(nstcall = -1, F33_585(RTCW(tr1), loc6));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(27);
				tr1 = RTLNS(eif_new_type(743, 0x01).id, 743, _OBJSIZ_4_6_2_4_1_1_2_1_);
				(nstcall = -1, F743_5007(RTCW(tr1), arg3));
				loc9 = (EIF_REFERENCE) tr1;
				RTHOOK(28);
				tb1 = (nstcall = 1, F743_5042(RTCW(loc9)));
				if (tb1) {
					RTHOOK(29);
					tr1 = RTLNS(eif_new_type(32, 0x01).id, 32, _OBJSIZ_2_1_0_0_0_0_0_0_);
					(nstcall = -1, F33_584(RTCW(tr1), arg3));
					Result = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(30);
					tr1 = RTLNS(eif_new_type(18, 0x01).id, 18, _OBJSIZ_1_0_0_1_0_0_0_0_);
					tr2 = RTMS_EX_H("Output file not created: ",25,327560992);
					tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, arg3));
					(nstcall = -1, F19_373(RTCW(tr1), ((EIF_INTEGER_32) 4L), tr3));
					loc6 = (EIF_REFERENCE) tr1;
					RTHOOK(31);
					tr1 = RTLNS(eif_new_type(32, 0x01).id, 32, _OBJSIZ_2_1_0_0_0_0_0_0_);
					(nstcall = -1, F33_585(RTCW(tr1), loc6));
					Result = (EIF_REFERENCE) tr1;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.gvc_context */
EIF_POINTER F18_361 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_2_0_0_1_0_0_);
}


/* {GRAPHVIZ_RENDERER}.c_gv_context */
EIF_POINTER F18_362 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_gv_context", 17, Current, 0, 0, 350);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F18_362 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.c_gvc_version */
EIF_POINTER F18_363 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_gvc_version", 17, Current, 0, 1, 351);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F18_363 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.c_agmemread */
EIF_POINTER F18_364 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_agmemread", 17, Current, 0, 1, 352);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F18_364 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.c_agclose */
void F18_365 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_agclose", 17, Current, 0, 1, 353);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F18_365 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_RENDERER}.c_gv_layout */
EIF_INTEGER_32 F18_366 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
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
	
	RTEAA("c_gv_layout", 17, Current, 0, 3, 354);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F18_366 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.c_gv_free_layout */
void F18_367 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_gv_free_layout", 17, Current, 0, 2, 355);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F18_367 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_RENDERER}.c_gv_render_data */
EIF_INTEGER_32 F18_368 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_POINTER arg5)
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
	
	RTEAA("c_gv_render_data", 17, Current, 0, 5, 356);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F18_368 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4, (EIF_POINTER) arg5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.c_gv_render_filename */
EIF_INTEGER_32 F18_369 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
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
	
	RTEAA("c_gv_render_filename", 17, Current, 0, 4, 357);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F18_369 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.c_gv_free_render_data */
void F18_370 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_gv_free_render_data", 17, Current, 0, 1, 358);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F18_370 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_RENDERER}.c_gv_free_context */
EIF_INTEGER_32 F18_371 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_gv_free_context", 17, Current, 0, 1, 359);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F18_371 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}.c_set_env_var */
EIF_INTEGER_32 F18_372 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
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
	
	RTEAA("c_set_env_var", 17, Current, 0, 2, 360);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F18_372 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RENDERER}._invariant */
void F18_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 14, Current, 0, 0);
	RTIT("timeout_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_0_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("engine_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("engine_valid", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 0, F18_353(Current, tr1));
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit15 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
