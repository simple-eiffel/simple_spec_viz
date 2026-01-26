/*
 * Code for class GC_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "gc384.h"
#include "eif_memory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1111_8497
static EIF_INTEGER_32 inline_F1111_8497 (void)
{
	return sizeof(struct gacstat);
	;
}
#define INLINE_F1111_8497
#endif
#ifndef INLINE_F1111_8498
static EIF_INTEGER_32 inline_F1111_8498 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) ((struct gacstat *) arg1)->count;
	;
}
#define INLINE_F1111_8498
#endif
#ifndef INLINE_F1111_8499
static EIF_INTEGER_32 inline_F1111_8499 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) ((struct gacstat *) arg1)->mem_used;
	;
}
#define INLINE_F1111_8499
#endif
#ifndef INLINE_F1111_8500
static EIF_INTEGER_32 inline_F1111_8500 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) ((struct gacstat *) arg1)->mem_collect;
	;
}
#define INLINE_F1111_8500
#endif
#ifndef INLINE_F1111_8501
static EIF_INTEGER_32 inline_F1111_8501 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) ((struct gacstat *) arg1)->mem_avg;
	;
}
#define INLINE_F1111_8501
#endif
#ifndef INLINE_F1111_8502
static EIF_INTEGER_32 inline_F1111_8502 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) ((struct gacstat *) arg1)->real_time;
	;
}
#define INLINE_F1111_8502
#endif
#ifndef INLINE_F1111_8503
static EIF_INTEGER_32 inline_F1111_8503 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) ((struct gacstat *) arg1)->real_avg;
	;
}
#define INLINE_F1111_8503
#endif
#ifndef INLINE_F1111_8504
static EIF_INTEGER_32 inline_F1111_8504 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) ((struct gacstat *) arg1)->real_itime;
	;
}
#define INLINE_F1111_8504
#endif
#ifndef INLINE_F1111_8505
static EIF_INTEGER_32 inline_F1111_8505 (EIF_POINTER arg1)
{
	return (EIF_INTEGER) ((struct gacstat *) arg1)->real_iavg;
	;
}
#define INLINE_F1111_8505
#endif
#ifndef INLINE_F1111_8506
static EIF_REAL_64 inline_F1111_8506 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->cpu_total_time;
	;
}
#define INLINE_F1111_8506
#endif
#ifndef INLINE_F1111_8507
static EIF_REAL_64 inline_F1111_8507 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->cpu_time;
	;
}
#define INLINE_F1111_8507
#endif
#ifndef INLINE_F1111_8508
static EIF_REAL_64 inline_F1111_8508 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->cpu_avg;
	;
}
#define INLINE_F1111_8508
#endif
#ifndef INLINE_F1111_8509
static EIF_REAL_64 inline_F1111_8509 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->cpu_itime;
	;
}
#define INLINE_F1111_8509
#endif
#ifndef INLINE_F1111_8510
static EIF_REAL_64 inline_F1111_8510 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->cpu_iavg;
	;
}
#define INLINE_F1111_8510
#endif
#ifndef INLINE_F1111_8511
static EIF_REAL_64 inline_F1111_8511 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->sys_total_time;
	;
}
#define INLINE_F1111_8511
#endif
#ifndef INLINE_F1111_8512
static EIF_REAL_64 inline_F1111_8512 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->sys_time;
	;
}
#define INLINE_F1111_8512
#endif
#ifndef INLINE_F1111_8513
static EIF_REAL_64 inline_F1111_8513 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->sys_avg;
	;
}
#define INLINE_F1111_8513
#endif
#ifndef INLINE_F1111_8514
static EIF_REAL_64 inline_F1111_8514 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->sys_itime;
	;
}
#define INLINE_F1111_8514
#endif
#ifndef INLINE_F1111_8515
static EIF_REAL_64 inline_F1111_8515 (EIF_POINTER arg1)
{
	return ((struct gacstat *) arg1)->sys_iavg;
	;
}
#define INLINE_F1111_8515
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GC_INFO}.make */
void F1111_8474 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 1110, Current, 0, 1, 15393);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("memory_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F137_1869(Current));
	RTHOOK(3);
	(nstcall = 0, F1111_8475(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("type_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == arg1)) {
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

/* {GC_INFO}.update */
void F1111_8475 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("update", 1110, Current, 0, 1, 15394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("memory_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (nstcall = 0, F137_1872(Current));
	(nstcall = 0, F1111_8495(Current, tp1, arg1));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("type_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == arg1)) {
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

/* {GC_INFO}.type */
EIF_INTEGER_32 F1111_8476 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
}


/* {GC_INFO}.cycle_count */
EIF_INTEGER_32 F1111_8477 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cycle_count", 1110, Current, 0, 0, 15396);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8498(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.memory_used */
EIF_INTEGER_32 F1111_8478 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("memory_used", 1110, Current, 0, 0, 15397);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8499(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.collected */
EIF_INTEGER_32 F1111_8479 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("collected", 1110, Current, 0, 0, 15398);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8500(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.collected_average */
EIF_INTEGER_32 F1111_8480 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("collected_average", 1110, Current, 0, 0, 15399);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8501(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.real_time */
EIF_INTEGER_32 F1111_8481 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_time", 1110, Current, 0, 0, 15400);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8502(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.real_time_average */
EIF_INTEGER_32 F1111_8482 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_time_average", 1110, Current, 0, 0, 15401);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8503(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.real_interval_time */
EIF_INTEGER_32 F1111_8483 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_interval_time", 1110, Current, 0, 0, 15402);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8504(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.real_interval_time_average */
EIF_INTEGER_32 F1111_8484 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_interval_time_average", 1110, Current, 0, 0, 15403);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8505(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.cpu_total_time */
EIF_REAL_64 F1111_8485 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cpu_total_time", 1110, Current, 0, 0, 15404);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8506(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.cpu_time */
EIF_REAL_64 F1111_8486 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cpu_time", 1110, Current, 0, 0, 15405);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8507(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.cpu_time_average */
EIF_REAL_64 F1111_8487 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cpu_time_average", 1110, Current, 0, 0, 15406);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8508(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.cpu_interval_time */
EIF_REAL_64 F1111_8488 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cpu_interval_time", 1110, Current, 0, 0, 15407);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8509(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.cpu_interval_time_average */
EIF_REAL_64 F1111_8489 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cpu_interval_time_average", 1110, Current, 0, 0, 15408);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8510(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.sys_total_time */
EIF_REAL_64 F1111_8490 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("sys_total_time", 1110, Current, 0, 0, 15409);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8511(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.sys_time */
EIF_REAL_64 F1111_8491 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("sys_time", 1110, Current, 0, 0, 15410);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8512(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.sys_time_average */
EIF_REAL_64 F1111_8492 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("sys_time_average", 1110, Current, 0, 0, 15411);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8513(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.sys_interval_time */
EIF_REAL_64 F1111_8493 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("sys_interval_time", 1110, Current, 0, 0, 15412);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8514(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.sys_interval_time_average */
EIF_REAL_64 F1111_8494 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("sys_interval_time_average", 1110, Current, 0, 0, 15413);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F137_1872(Current));
	Result = (nstcall = 0, F1111_8515(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.gc_stat */
void F1111_8495 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("gc_stat", 1110, Current, 0, 2, 15414);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_gc_stat(arg1, arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {GC_INFO}.structure_size */
EIF_INTEGER_32 F1111_8496 (EIF_REFERENCE Current)
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
	
	RTEAA("structure_size", 1110, Current, 0, 0, 15415);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1111_8497(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
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

/* {GC_INFO}.c_sizeof_gacstat */
EIF_INTEGER_32 F1111_8497 (EIF_REFERENCE Current)
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
	
	RTEAA("c_sizeof_gacstat", 1110, Current, 0, 0, 15416);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8497 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_count */
EIF_INTEGER_32 F1111_8498 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_count", 1110, Current, 0, 1, 15417);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8498 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_mem_used */
EIF_INTEGER_32 F1111_8499 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_mem_used", 1110, Current, 0, 1, 15418);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8499 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_mem_collect */
EIF_INTEGER_32 F1111_8500 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_mem_collect", 1110, Current, 0, 1, 15419);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8500 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_mem_avg */
EIF_INTEGER_32 F1111_8501 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_mem_avg", 1110, Current, 0, 1, 15420);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8501 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_real_time */
EIF_INTEGER_32 F1111_8502 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_real_time", 1110, Current, 0, 1, 15421);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8502 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_real_avg */
EIF_INTEGER_32 F1111_8503 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_real_avg", 1110, Current, 0, 1, 15422);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8503 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_real_itime */
EIF_INTEGER_32 F1111_8504 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_real_itime", 1110, Current, 0, 1, 15423);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8504 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_real_iavg */
EIF_INTEGER_32 F1111_8505 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_real_iavg", 1110, Current, 0, 1, 15424);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8505 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_cpu_total_time */
EIF_REAL_64 F1111_8506 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_cpu_total_time", 1110, Current, 0, 1, 15425);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8506 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_cpu_time */
EIF_REAL_64 F1111_8507 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_cpu_time", 1110, Current, 0, 1, 15426);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8507 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_cpu_avg */
EIF_REAL_64 F1111_8508 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_cpu_avg", 1110, Current, 0, 1, 15427);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8508 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_cpu_itime */
EIF_REAL_64 F1111_8509 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_cpu_itime", 1110, Current, 0, 1, 15428);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8509 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_cpu_iavg */
EIF_REAL_64 F1111_8510 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_cpu_iavg", 1110, Current, 0, 1, 15429);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8510 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_sys_total_time */
EIF_REAL_64 F1111_8511 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sys_total_time", 1110, Current, 0, 1, 15430);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8511 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_sys_time */
EIF_REAL_64 F1111_8512 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sys_time", 1110, Current, 0, 1, 15431);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8512 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_sys_avg */
EIF_REAL_64 F1111_8513 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sys_avg", 1110, Current, 0, 1, 15432);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8513 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_sys_itime */
EIF_REAL_64 F1111_8514 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sys_itime", 1110, Current, 0, 1, 15433);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8514 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {GC_INFO}.c_sys_iavg */
EIF_REAL_64 F1111_8515 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sys_iavg", 1110, Current, 0, 1, 15434);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F1111_8515 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit384 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
