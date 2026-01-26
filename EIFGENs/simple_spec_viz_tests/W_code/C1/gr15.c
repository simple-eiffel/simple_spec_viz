/*
 * Code for class GRAPHVIZ_RENDERER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F15_341(EIF_REFERENCE);
extern void F15_342(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_343(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_344(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_345(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_346(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_347(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_348(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_349(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_350(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_351(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_352(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_353(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_354(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_355(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_356(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_357(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_358(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_359(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_360(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_361(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_362(EIF_REFERENCE);
extern EIF_TYPED_VALUE F15_363(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_364(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F15_365(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_366(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F15_367(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_368(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_369(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F15_370(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_371(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F15_372(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F15_9214(EIF_REFERENCE, int);
extern void EIF_Minit15(void);

#ifdef __cplusplus
}
#endif

#include <graphviz/gvc.h>
#include <stdlib.h>
#include "eif_helpers.h"
#include <graphviz/cgraph.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F15_362
static EIF_POINTER inline_F15_362 (void)
{
	return gvContext();
	;
}
#define INLINE_F15_362
#endif
#ifndef INLINE_F15_363
static EIF_POINTER inline_F15_363 (EIF_POINTER arg1)
{
	return gvcVersion((GVC_t*)arg1);
	;
}
#define INLINE_F15_363
#endif
#ifndef INLINE_F15_364
static EIF_POINTER inline_F15_364 (EIF_POINTER arg1)
{
	return agmemread((const char*)arg1);
	;
}
#define INLINE_F15_364
#endif
#ifndef INLINE_F15_365
static void inline_F15_365 (EIF_POINTER arg1)
{
	agclose((Agraph_t*)arg1);
	;
}
#define INLINE_F15_365
#endif
#ifndef INLINE_F15_366
static EIF_INTEGER_32 inline_F15_366 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	return gvLayout((GVC_t*)arg1, (Agraph_t*)arg2, (const char*)arg3);
	;
}
#define INLINE_F15_366
#endif
#ifndef INLINE_F15_367
static void inline_F15_367 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	gvFreeLayout((GVC_t*)arg1, (Agraph_t*)arg2);
	;
}
#define INLINE_F15_367
#endif
#ifndef INLINE_F15_368
static EIF_INTEGER_32 inline_F15_368 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4, EIF_POINTER arg5)
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
#define INLINE_F15_368
#endif
#ifndef INLINE_F15_369
static EIF_INTEGER_32 inline_F15_369 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_POINTER arg4)
{
	return gvRenderFilename((GVC_t*)arg1, (Agraph_t*)arg2, (const char*)arg3, (const char*)arg4);
	;
}
#define INLINE_F15_369
#endif
#ifndef INLINE_F15_370
static void inline_F15_370 (EIF_POINTER arg1)
{
	gvFreeRenderData((char*)arg1);
	;
}
#define INLINE_F15_370
#endif
#ifndef INLINE_F15_371
static EIF_INTEGER_32 inline_F15_371 (EIF_POINTER arg1)
{
	return gvFreeContext((GVC_t*)arg1);
	;
}
#define INLINE_F15_371
#endif
#ifndef INLINE_F15_372
static EIF_INTEGER_32 inline_F15_372 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return _putenv_s((const char*)arg1, (const char*)arg2);
	;
}
#define INLINE_F15_372
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GRAPHVIZ_RENDERER}.default_create */
void F15_341 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 362);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 362);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(344, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {GRAPHVIZ_RENDERER}.make */
void F15_342 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 14, Current, 2, 0, 363);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 363);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 345, 0x10000000, 1); /* timeout_ms */
	*(EIF_INTEGER_32 *)(Current + RTWA(345, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 30000L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 346, 0xF8000165, 0); /* engine */
	tr1 = RTMS_EX_H("neato",5,1701730415);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(346, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAL(1, 0xF80000D1, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(209, 0x01).id);
	tr2 = RTMS_EX_H("D:\\prod\\simple_graphviz\\bin",27,1137859182);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(2, 0xF80000D1, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(209, 0x01).id);
	tr2 = RTMS_EX_H("GVPLUGINDIR",11,1548684370);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc2))(loc2)).it_p);
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc1))(loc1)).it_p);
	up2 = tp2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(374, dtype))(Current, up1x, up2x)).it_i4);
	RTNHOOK(5,1);
	eif_do_nothing_value.it_i4 = ti4_1;
	RTHOOK(6);
	RTDBGAL(2, 0xF80000D1, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(209, 0x01).id);
	tr2 = RTMS_EX_H("GVBINDIR",8,1795399506);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(6,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc2))(loc2)).it_p);
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc1))(loc1)).it_p);
	up2 = tp2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(374, dtype))(Current, up1x, up2x)).it_i4);
	RTNHOOK(7,1);
	eif_do_nothing_value.it_i4 = ti4_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 363, 0x40000000, 1); /* gvc_context */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(364, dtype))(Current)).it_p);
	*(EIF_POINTER *)(Current + RTWA(363, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("default_timeout", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(345, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 30000L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("default_engine", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		tr2 = RTMS_EX_H("neato",5,1701730415);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("context_created", EX_POST);
		tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(tp1 != tp2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {GRAPHVIZ_RENDERER}.timeout_ms */
EIF_TYPED_VALUE F15_343 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(345,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_RENDERER}.engine */
EIF_TYPED_VALUE F15_344 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(346,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_RENDERER}.post_processor */
EIF_TYPED_VALUE F15_345 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(347,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_RENDERER}.set_timeout */
EIF_TYPED_VALUE F15_346 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 367);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 367);
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
	RTDBGAA(Current, dtype, 345, 0x10000000, 1); /* timeout_ms */
	*(EIF_INTEGER_32 *)(Current + RTWA(345, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	RTDBGAL(0, 0xF800000E, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("timeout_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(345, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_is_current", EX_POST);
		if (RTCEQ(Result, Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.set_engine */
EIF_TYPED_VALUE F15_347 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_engine";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 368);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 368);
	RTCC(arg1, 14, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("engine_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("engine_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(355, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 346, 0xF8000165, 0); /* engine */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(346, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(0, 0xF800000E, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("engine_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("result_is_current", EX_POST);
		if (RTCEQ(Result, Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.set_post_processor */
EIF_TYPED_VALUE F15_348 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_post_processor";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 369);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 369);
	if (arg1) {
		RTCC(arg1, 14, l_feature_name, 1, eif_new_type(4, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 347, 0xF8000004, 0); /* post_processor */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(347, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(0, 0xF800000E, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("processor_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(347, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if (RTCEQ(Result, Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.enable_boundary_constraints */
EIF_TYPED_VALUE F15_349 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "enable_boundary_constraints";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 14, Current, 1, 2, 370);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 370);
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
	RTDBGAL(1, 0xF8000004, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(4, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(187, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur8_1 = arg1;
	ur8_2 = arg2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(195, "set_target_size", loc1))(loc1, ur8_1x, ur8_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 347, 0xF8000004, 0); /* post_processor */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(347, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAL(0, 0xF800000E, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("processor_enabled", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(347, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("result_is_current", EX_POST);
		if (RTCEQ(Result, Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur8_1
#undef ur8_2
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.disable_boundary_constraints */
EIF_TYPED_VALUE F15_350 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_boundary_constraints";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 371);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 371);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 347, 0xF8000004, 0); /* post_processor */
	*(EIF_REFERENCE *)(Current + RTWA(347, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(2);
	RTDBGAL(0, 0xF800000E, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("processor_disabled", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(347, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if (RTCEQ(Result, Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {GRAPHVIZ_RENDERER}.is_graphviz_available */
EIF_TYPED_VALUE F15_351 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_graphviz_available";
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 372);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 372);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GRAPHVIZ_RENDERER}.graphviz_version */
EIF_TYPED_VALUE F15_352 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "graphviz_version";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 14, Current, 2, 0, 373);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 373);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(tp1 != tp2)) {
		RTHOOK(2);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(365, dtype))(Current, up1x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(3);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc1 != tp1)) {
			RTHOOK(4);
			RTDBGAL(2, 0xF80000D1, 0, 0); /* loc2 */
			tr1 = RTLN(eif_new_type(209, 0x01).id);
			up1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2561, Dtype(tr1)))(tr1, up1x);
			RTNHOOK(4,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(5);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2573, "string", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {GRAPHVIZ_RENDERER}.is_valid_engine */
EIF_TYPED_VALUE F15_353 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_engine";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 374);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 374);
	RTCC(arg1, 14, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tr1 = RTMS_EX_H("dot",3,6582132);
	ur1 = tr1;
	tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg1))(arg1, ur1x)).it_b);
	if (!tb7) {
		tr1 = RTMS_EX_H("neato",5,1701730415);
		ur1 = tr1;
		tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg1))(arg1, ur1x)).it_b);
		tb6 = tb7;
	}
	if (!tb6) {
		tr1 = RTMS_EX_H("fdp",3,6710384);
		ur1 = tr1;
		tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg1))(arg1, ur1x)).it_b);
		tb5 = tb6;
	}
	if (!tb5) {
		tr1 = RTMS_EX_H("circo",5,1769864559);
		ur1 = tr1;
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg1))(arg1, ur1x)).it_b);
		tb4 = tb5;
	}
	if (!tb4) {
		tr1 = RTMS_EX_H("twopi",5,2004682857);
		ur1 = tr1;
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg1))(arg1, ur1x)).it_b);
		tb3 = tb4;
	}
	if (!tb3) {
		tr1 = RTMS_EX_H("osage",5,1936615781);
		ur1 = tr1;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg1))(arg1, ur1x)).it_b);
		tb2 = tb3;
	}
	if (!tb2) {
		tr1 = RTMS_EX_H("sfdp",4,1936090224);
		ur1 = tr1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg1))(arg1, ur1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.is_version_sufficient */
EIF_TYPED_VALUE F15_354 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_version_sufficient";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
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
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 14, Current, 7, 0, 375);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 375);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000165, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(354, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	loc7 = RTCCL(loc1);
	if (EIF_TEST(loc7)) {
		RTHOOK(3);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		uc1 = (EIF_CHARACTER_8) '.';
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6247, "index_of", loc7))(loc7, uc1x, ui4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", loc7))(loc7, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6172, "to_integer", tr1))(tr1)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(6269, "count", loc7));
			if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
				RTHOOK(8);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				uc1 = (EIF_CHARACTER_8) '.';
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6247, "index_of", loc7))(loc7, uc1x, ui4_1x)).it_i4);
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(9);
				if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
					RTHOOK(10);
					RTDBGAL(6, 0xF8000165, 0, 0); /* loc6 */
					ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", loc7))(loc7, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc6 = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(11);
					RTDBGAL(6, 0xF8000165, 0, 0); /* loc6 */
					ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(6269, "count", loc7));
					ui4_2 = ti4_1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", loc7))(loc7, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc6 = (EIF_REFERENCE) RTCCL(tr1);
				}
				RTHOOK(12);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6138, "is_integer", loc6))(loc6)).it_b);
				if (tb1) {
					RTHOOK(13);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6172, "to_integer", loc6))(loc6)).it_i4);
					loc5 = (EIF_INTEGER_32) ti4_1;
				}
			}
			RTHOOK(14);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ui4_1 = loc4;
			ui4_2 = loc5;
			ui4_3 = ((EIF_INTEGER_32) 2L);
			ui4_4 = ((EIF_INTEGER_32) 40L);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(357, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_b);
			Result = (EIF_BOOLEAN) tb1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uc1
}

/* {GRAPHVIZ_RENDERER}.is_version_sufficient_check */
EIF_TYPED_VALUE F15_355 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "is_version_sufficient_check";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 4, 343);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 343);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > arg3) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == arg3) && (EIF_BOOLEAN) (arg2 >= arg4)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.render_svg */
EIF_TYPED_VALUE F15_356 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "render_svg";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,tr1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 344);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 344);
	RTCC(arg1, 14, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	RTDBGAL(0, 0xF800001D, 0,0); /* Result */
	ur1 = RTCCL(arg1);
	tr1 = RTMS_EX_H("svg",3,7566951);
	ur2 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(361, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.render_pdf */
EIF_TYPED_VALUE F15_357 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "render_pdf";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,tr1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 345);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 345);
	RTCC(arg1, 14, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	RTDBGAL(0, 0xF800001D, 0,0); /* Result */
	ur1 = RTCCL(arg1);
	tr1 = RTMS_EX_H("pdf",3,7365734);
	ur2 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(361, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.render_png */
EIF_TYPED_VALUE F15_358 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "render_png";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,tr1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 346);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 346);
	RTCC(arg1, 14, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	RTDBGAL(0, 0xF800001D, 0,0); /* Result */
	ur1 = RTCCL(arg1);
	tr1 = RTMS_EX_H("png",3,7368295);
	ur2 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(361, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.render */
EIF_TYPED_VALUE F15_359 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "render";
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
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE up5x = {{0}, SK_POINTER};
#define up5 up5x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
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
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,loc7);
	RTLR(6,tr2);
	RTLR(7,Result);
	RTLR(8,loc4);
	RTLR(9,loc5);
	RTLR(10,loc6);
	RTLR(11,tr3);
	RTLR(12,loc9);
	RTLR(13,loc8);
	RTLIU(14);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_INT32, &loc11);
	
	RTEAA(l_feature_name, 14, Current, 11, 2, 347);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 347);
	RTCC(arg1, 14, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg2, 14, l_feature_name, 2, eif_new_type(357, 0x01), 0x01);
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
		ur1 = tr1;
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg2))(arg2, ur1x)).it_b);
		if (!tb3) {
			tr1 = RTMS_EX_H("pdf",3,7365734);
			ur1 = tr1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg2))(arg2, ur1x)).it_b);
			tb2 = tb3;
		}
		if (!tb2) {
			tr1 = RTMS_EX_H("png",3,7368295);
			ur1 = tr1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", arg2))(arg2, ur1x)).it_b);
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
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(353, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		RTDBGAL(7, 0xF800000F, 0, 0); /* loc7 */
		tr1 = RTLN(eif_new_type(15, 0x01).id);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(378, 15))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr2 = RTMS_EX_H("GraphViz library not available",30,548644709);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(375, Dtype(tr1)))(tr1, ui4_1x, ur1x);
		RTNHOOK(5,1);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(0, 0xF800001D, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(29, 0x01).id);
		ur1 = RTCCL(loc7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(584, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(6,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(7);
		RTDBGAL(4, 0xF80000D1, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(209, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(7,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc4))(loc4)).it_p);
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(366, dtype))(Current, up1x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(9);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc1 == tp1)) {
			RTHOOK(10);
			RTDBGAL(7, 0xF800000F, 0, 0); /* loc7 */
			tr1 = RTLN(eif_new_type(15, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(380, 15))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr2 = RTMS_EX_H("Failed to parse DOT source",26,98247269);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(375, Dtype(tr1)))(tr1, ui4_1x, ur1x);
			RTNHOOK(10,1);
			loc7 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(11);
			RTDBGAL(0, 0xF800001D, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(29, 0x01).id);
			ur1 = RTCCL(loc7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(584, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(12);
			RTDBGAL(5, 0xF80000D1, 0, 0); /* loc5 */
			tr1 = RTLN(eif_new_type(209, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(12,1);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(13);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
			up1 = tp1;
			up2 = loc1;
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc5))(loc5)).it_p);
			up3 = tp2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(368, dtype))(Current, up1x, up2x, up3x)).it_i4);
			loc10 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc10 != ((EIF_INTEGER_32) 0L))) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				tr2 = RTMS_EX_H("neato",5,1701730415);
				ur1 = tr2;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(15);
				RTDBGAL(5, 0xF80000D1, 0, 0); /* loc5 */
				tr1 = RTLN(eif_new_type(209, 0x01).id);
				tr2 = RTMS_EX_H("fdp",3,6710384);
				ur1 = tr2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(15,1);
				loc5 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(16);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
				up1 = tp1;
				up2 = loc1;
				tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc5))(loc5)).it_p);
				up3 = tp2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(368, dtype))(Current, up1x, up2x, up3x)).it_i4);
				loc10 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(17);
			RTDBGAL(6, 0xF80000D1, 0, 0); /* loc6 */
			tr1 = RTLN(eif_new_type(209, 0x01).id);
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(17,1);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(18);
			RTDBGAL(11, 0x10000000, 1, 0); /* loc11 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
			up1 = tp1;
			up2 = loc1;
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc6))(loc6)).it_p);
			up3 = tp2;
			up4 = (EIF_POINTER *) &(loc2);
			up5 = (EIF_INTEGER_32 *) &(loc3);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(370, dtype))(Current, up1x, up2x, up3x, up4x, up5x)).it_i4);
			loc11 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(19);
			if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(20);
				tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
				up1 = tp1;
				up2 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(369, dtype))(Current, up1x, up2x);
			}
			RTHOOK(21);
			tb1 = '\01';
			if (!(EIF_BOOLEAN)(loc11 != ((EIF_INTEGER_32) 0L))) {
				tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
				tb1 = (EIF_BOOLEAN)(loc2 == tp1);
			}
			if (tb1) {
				RTHOOK(22);
				up1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(367, dtype))(Current, up1x);
				RTHOOK(23);
				RTDBGAL(7, 0xF800000F, 0, 0); /* loc7 */
				tr1 = RTLN(eif_new_type(15, 0x01).id);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(381, 15))(Current)).it_i4);
				ui4_1 = ti4_1;
				tr2 = RTMS_EX_H("Render failed for format: ",26,907792160);
				ur1 = RTCCL(arg2);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(375, Dtype(tr1)))(tr1, ui4_1x, ur1x);
				RTNHOOK(23,1);
				loc7 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(24);
				RTDBGAL(0, 0xF800001D, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(29, 0x01).id);
				ur1 = RTCCL(loc7);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(584, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(24,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(25);
				RTDBGAL(9, 0xF80000FC, 0, 0); /* loc9 */
				tr1 = RTLN(eif_new_type(252, 0x01).id);
				up1 = loc2;
				ui4_1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(3587, Dtype(tr1)))(tr1, up1x, ui4_1x);
				RTNHOOK(25,1);
				loc9 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(26);
				RTDBGAL(8, 0xF8000165, 0, 0); /* loc8 */
				tr1 = RTLN(eif_new_type(357, 0x01).id);
				ui4_1 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
				RTNHOOK(26,1);
				loc8 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(27);
				up1 = loc2;
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ui4_2 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6276, "from_c_substring", loc8))(loc8, up1x, ui4_1x, ui4_2x);
				RTHOOK(28);
				up1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(372, dtype))(Current, up1x);
				RTHOOK(29);
				up1 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(367, dtype))(Current, up1x);
				RTHOOK(30);
				RTDBGAL(0, 0xF800001D, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(29, 0x01).id);
				ur1 = RTCCL(loc8);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(583, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(30,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.render_to_file */
EIF_TYPED_VALUE F15_360 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "render_to_file";
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
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc6);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,ur1);
	RTLR(8,Result);
	RTLR(9,loc2);
	RTLR(10,loc3);
	RTLR(11,loc4);
	RTLR(12,loc5);
	RTLR(13,tr3);
	RTLR(14,loc9);
	RTLIU(15);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 14, Current, 9, 3, 348);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(14, Current, 348);
	RTCC(arg1, 14, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg2, 14, l_feature_name, 2, eif_new_type(357, 0x01), 0x01);
	RTCC(arg3, 14, l_feature_name, 3, eif_new_type(357, 0x01), 0x01);
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
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", arg3))(arg3)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(353, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		RTDBGAL(6, 0xF800000F, 0, 0); /* loc6 */
		tr1 = RTLN(eif_new_type(15, 0x01).id);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(378, 15))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr2 = RTMS_EX_H("GraphViz library not available",30,548644709);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(375, Dtype(tr1)))(tr1, ui4_1x, ur1x);
		RTNHOOK(6,1);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(0, 0xF800001D, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(29, 0x01).id);
		ur1 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(584, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(7,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(8);
		RTDBGAL(2, 0xF80000D1, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(209, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(8,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc2))(loc2)).it_p);
		up1 = tp1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(366, dtype))(Current, up1x)).it_p);
		loc1 = (EIF_POINTER) tp1;
		RTHOOK(10);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc1 == tp1)) {
			RTHOOK(11);
			RTDBGAL(6, 0xF800000F, 0, 0); /* loc6 */
			tr1 = RTLN(eif_new_type(15, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(380, 15))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr2 = RTMS_EX_H("Failed to parse DOT source",26,98247269);
			ur1 = tr2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(375, Dtype(tr1)))(tr1, ui4_1x, ur1x);
			RTNHOOK(11,1);
			loc6 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(12);
			RTDBGAL(0, 0xF800001D, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(29, 0x01).id);
			ur1 = RTCCL(loc6);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(584, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(13);
			RTDBGAL(3, 0xF80000D1, 0, 0); /* loc3 */
			tr1 = RTLN(eif_new_type(209, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(13,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(14);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
			up1 = tp1;
			up2 = loc1;
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc3))(loc3)).it_p);
			up3 = tp2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(368, dtype))(Current, up1x, up2x, up3x)).it_i4);
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(15);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc7 != ((EIF_INTEGER_32) 0L))) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				tr2 = RTMS_EX_H("neato",5,1701730415);
				ur1 = tr2;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(16);
				RTDBGAL(3, 0xF80000D1, 0, 0); /* loc3 */
				tr1 = RTLN(eif_new_type(209, 0x01).id);
				tr2 = RTMS_EX_H("fdp",3,6710384);
				ur1 = tr2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(16,1);
				loc3 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(17);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
				up1 = tp1;
				up2 = loc1;
				tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc3))(loc3)).it_p);
				up3 = tp2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(368, dtype))(Current, up1x, up2x, up3x)).it_i4);
				loc7 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(18);
			RTDBGAL(4, 0xF80000D1, 0, 0); /* loc4 */
			tr1 = RTLN(eif_new_type(209, 0x01).id);
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(18,1);
			loc4 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(19);
			RTDBGAL(5, 0xF80000D1, 0, 0); /* loc5 */
			tr1 = RTLN(eif_new_type(209, 0x01).id);
			ur1 = RTCCL(arg3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2559, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(19,1);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(20);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
			up1 = tp1;
			up2 = loc1;
			tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc4))(loc4)).it_p);
			up3 = tp2;
			tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2581, "item", loc5))(loc5)).it_p);
			up4 = tp3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(371, dtype))(Current, up1x, up2x, up3x, up4x)).it_i4);
			loc8 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(21);
			if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(22);
				tp1 = *(EIF_POINTER *)(Current + RTWA(363, dtype));
				up1 = tp1;
				up2 = loc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(369, dtype))(Current, up1x, up2x);
			}
			RTHOOK(23);
			up1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(367, dtype))(Current, up1x);
			RTHOOK(24);
			if ((EIF_BOOLEAN)(loc8 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(25);
				RTDBGAL(6, 0xF800000F, 0, 0); /* loc6 */
				tr1 = RTLN(eif_new_type(15, 0x01).id);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(381, 15))(Current)).it_i4);
				ui4_1 = ti4_1;
				tr2 = RTMS_EX_H("Render to file failed: ",23,465444640);
				ur1 = RTCCL(arg3);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(375, Dtype(tr1)))(tr1, ui4_1x, ur1x);
				RTNHOOK(25,1);
				loc6 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(26);
				RTDBGAL(0, 0xF800001D, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(29, 0x01).id);
				ur1 = RTCCL(loc6);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(584, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(26,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(27);
				RTDBGAL(9, 0xF800011A, 0, 0); /* loc9 */
				tr1 = RTLN(eif_new_type(282, 0x01).id);
				ur1 = RTCCL(arg3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4449, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(27,1);
				loc9 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(28);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3712, "exists", loc9))(loc9)).it_b);
				if (tb1) {
					RTHOOK(29);
					RTDBGAL(0, 0xF800001D, 0,0); /* Result */
					tr1 = RTLN(eif_new_type(29, 0x01).id);
					ur1 = RTCCL(arg3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(583, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(29,1);
					Result = (EIF_REFERENCE) RTCCL(tr1);
				} else {
					RTHOOK(30);
					RTDBGAL(6, 0xF800000F, 0, 0); /* loc6 */
					tr1 = RTLN(eif_new_type(15, 0x01).id);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(381, 15))(Current)).it_i4);
					ui4_1 = ti4_1;
					tr2 = RTMS_EX_H("Output file not created: ",25,327560992);
					ur1 = RTCCL(arg3);
					tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr3);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(375, Dtype(tr1)))(tr1, ui4_1x, ur1x);
					RTNHOOK(30,1);
					loc6 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(31);
					RTDBGAL(0, 0xF800001D, 0,0); /* Result */
					tr1 = RTLN(eif_new_type(29, 0x01).id);
					ur1 = RTCCL(loc6);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(584, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(31,1);
					Result = (EIF_REFERENCE) RTCCL(tr1);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.gvc_context */
EIF_TYPED_VALUE F15_361 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(363,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_RENDERER}.c_gv_context */
EIF_TYPED_VALUE F15_362 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_gv_context";
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 0, 350);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 350);
	RTIV(Current, RTAL);
	Result = inline_F15_362 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
}

/* {GRAPHVIZ_RENDERER}.c_gvc_version */
EIF_TYPED_VALUE F15_363 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_gvc_version";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 351);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 351);
	RTIV(Current, RTAL);
	Result = inline_F15_363 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.c_agmemread */
EIF_TYPED_VALUE F15_364 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_agmemread";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 352);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 352);
	RTIV(Current, RTAL);
	Result = inline_F15_364 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.c_agclose */
void F15_365 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_agclose";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 353);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 353);
	RTIV(Current, RTAL);
	inline_F15_365 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.c_gv_layout */
EIF_TYPED_VALUE F15_366 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_gv_layout";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 3, 354);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 354);
	RTIV(Current, RTAL);
	Result = inline_F15_366 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.c_gv_free_layout */
void F15_367 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_gv_free_layout";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 2, 355);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 355);
	RTIV(Current, RTAL);
	inline_F15_367 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.c_gv_render_data */
EIF_TYPED_VALUE F15_368 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "c_gv_render_data";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
#define arg5 arg5x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_POINTER *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 5, 356);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 356);
	RTIV(Current, RTAL);
	Result = inline_F15_368 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4, (EIF_POINTER) arg5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.c_gv_render_filename */
EIF_TYPED_VALUE F15_369 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_gv_render_filename";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 4, 357);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 357);
	RTIV(Current, RTAL);
	Result = inline_F15_369 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.c_gv_free_render_data */
void F15_370 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_gv_free_render_data";
	RTEX;
#define arg1 arg1x.it_p
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 358);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 358);
	RTIV(Current, RTAL);
	inline_F15_370 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.c_gv_free_context */
EIF_TYPED_VALUE F15_371 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_gv_free_context";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 1, 359);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 359);
	RTIV(Current, RTAL);
	Result = inline_F15_371 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {GRAPHVIZ_RENDERER}.c_set_env_var */
EIF_TYPED_VALUE F15_372 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_set_env_var";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 14, Current, 0, 2, 360);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(14, Current, 360);
	RTIV(Current, RTAL);
	Result = inline_F15_372 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_RENDERER}._invariant */
void F15_9214 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 14, Current, 0, 9213);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("timeout_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(345, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("engine_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("engine_valid", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(346, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(355, dtype))(Current, ur1x)).it_b);
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef ur1
}

void EIF_Minit15 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
