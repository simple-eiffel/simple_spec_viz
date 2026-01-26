/*
 * Code for class RT_DBG_INTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt244.h"
#include "eif_internal.h"
#include "eif_debug.h"
#include "eif_macros.h"
#include "eif_eiffel.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F279_3728
static int inline_F279_3728 (EIF_POINTER arg1)
{
	return (int) (eif_is_expanded(HEADER(arg1)->ov_flags))
	;
}
#define INLINE_F279_3728
#endif
#ifndef INLINE_F279_3729
static EIF_INTEGER_32 inline_F279_3729 (EIF_NATURAL_32 arg1)
{
	return (EIF_INTEGER_32) (ei_eif_type((uint32) arg1))
	;
}
#define INLINE_F279_3729
#endif
#ifndef INLINE_F279_3730
static EIF_NATURAL_32 inline_F279_3730 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_32) (System(To_dtype(arg2)).cn_types[arg1])
	;
}
#define INLINE_F279_3730
#endif
#ifndef INLINE_F279_3733
static EIF_REFERENCE inline_F279_3733 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	return (EIF_REFERENCE) rt_dbg_stack_value((uint32)arg1, (uint32)arg2, (uint32)arg3, (uint32)arg4);
#else
	return NULL;
#endif
	;
}
#define INLINE_F279_3733
#endif
#ifndef INLINE_F279_3738
static EIF_INTEGER_32 inline_F279_3738 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_BOOL; a_val.it_bool = (EIF_BOOLEAN) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3738
#endif
#ifndef INLINE_F279_3739
static EIF_INTEGER_32 inline_F279_3739 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_CHAR; a_val.it_c1 = (EIF_CHARACTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3739
#endif
#ifndef INLINE_F279_3740
static EIF_INTEGER_32 inline_F279_3740 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_WCHAR; a_val.it_c4 = (EIF_WIDE_CHAR) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3740
#endif
#ifndef INLINE_F279_3741
static EIF_INTEGER_32 inline_F279_3741 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT8; a_val.it_n1 = (EIF_NATURAL_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3741
#endif
#ifndef INLINE_F279_3742
static EIF_INTEGER_32 inline_F279_3742 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT16; a_val.it_n2 = (EIF_NATURAL_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3742
#endif
#ifndef INLINE_F279_3743
static EIF_INTEGER_32 inline_F279_3743 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT32; a_val.it_n4 = (EIF_NATURAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3743
#endif
#ifndef INLINE_F279_3744
static EIF_INTEGER_32 inline_F279_3744 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_UINT64; a_val.it_n8 = (EIF_NATURAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3744
#endif
#ifndef INLINE_F279_3745
static EIF_INTEGER_32 inline_F279_3745 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT8; a_val.it_i1 = (EIF_INTEGER_8) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3745
#endif
#ifndef INLINE_F279_3746
static EIF_INTEGER_32 inline_F279_3746 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT16; a_val.it_i2 = (EIF_INTEGER_16) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3746
#endif
#ifndef INLINE_F279_3747
static EIF_INTEGER_32 inline_F279_3747 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT32; a_val.it_i4 = (EIF_INTEGER_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3747
#endif
#ifndef INLINE_F279_3748
static EIF_INTEGER_32 inline_F279_3748 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_INT64; a_val.it_i8 = (EIF_INTEGER_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3748
#endif
#ifndef INLINE_F279_3749
static EIF_INTEGER_32 inline_F279_3749 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL32; a_val.it_r4 = (EIF_REAL_32) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3749
#endif
#ifndef INLINE_F279_3750
static EIF_INTEGER_32 inline_F279_3750 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_REAL64; a_val.it_r8 = (EIF_REAL_64) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3750
#endif
#ifndef INLINE_F279_3751
static EIF_INTEGER_32 inline_F279_3751 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; a_val.type = SK_POINTER; a_val.it_p = (EIF_POINTER) arg4;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3751
#endif
#ifndef INLINE_F279_3752
static EIF_INTEGER_32 inline_F279_3752 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_REF; 
	a_val.it_ref = (EIF_REFERENCE) &(arg4);
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3752
#endif
#ifndef INLINE_F279_3753
static EIF_INTEGER_32 inline_F279_3753 (EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	#ifdef WORKBENCH
	EIF_TYPED_VALUE a_val; 
	a_val.type = SK_VOID; 
	a_val.it_ref = (char*) 0;
	return rt_dbg_set_stack_value ((uint32)arg1, (uint32)arg2, (uint32)arg3, (EIF_TYPED_VALUE*) &a_val);
#else
	return 0;
#endif
	;
}
#define INLINE_F279_3753
#endif
#ifndef INLINE_F279_3754
static void inline_F279_3754 (EIF_INTEGER_32 arg1)
{
	#ifdef WORKBENCH
	EIF_GET_CONTEXT; is_inside_rt_eiffel_code = arg1;
#endif
	;
}
#define INLINE_F279_3754
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DBG_INTERNAL}.object_field_count */
EIF_INTEGER_32 F279_3716 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("object_field_count", 278, Current, 0, 1, 3716);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(301,(nstcall = 0, F279_3757), (Current));
	tr2 = RTCCL(arg1);
	(nstcall = 1, F281_3778(RTCW(tr1), tr2));
	RTHOOK(3);
	tr1 = RTOUCR(301,(nstcall = 0, F279_3757), (Current));
	ti4_1 = (nstcall = 1, F276_3615(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_records */
EIF_REFERENCE F279_3717 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("object_records", 278, Current, 4, 1, 3717);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	loc2 = (nstcall = 0, F279_3716(Current, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {866,0xFF01,913,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc3 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F867_5785(RTCW(loc3), loc2));
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			tr1 = RTCCL(arg1);
			tr1 = (nstcall = 0, F279_3725(Current, loc1, tr1));
			loc4 = tr1;
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc3))-663])(loc3, loc4));
			}
			RTHOOK(9);
			loc1++;
		}
		RTHOOK(10);
		Result = (EIF_REFERENCE) loc3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_is_expanded */
EIF_BOOLEAN F279_3718 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("object_is_expanded", 278, Current, 0, 1, 3718);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = EIF_TEST ((nstcall = 0, F279_3728(Current, arg1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_index_at */
EIF_INTEGER_32 F279_3719 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("field_index_at", 278, Current, 2, 2, 3719);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj /= Void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTOUCR(301,(nstcall = 0, F279_3757), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F281_3778(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F276_3615(RTCW(loc2)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F276_3576(RTCW(loc2), loc1));
		if ((EIF_BOOLEAN)(arg1 == ti4_1)) {
			RTHOOK(7);
			Result = (EIF_INTEGER_32) loc1;
		}
		RTHOOK(8);
		loc1--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_name_at */
EIF_REFERENCE F279_3720 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
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
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("field_name_at", 278, Current, 1, 2, 3720);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj /= Void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg2);
	loc1 = (nstcall = 0, F279_3719(Current, arg1, tr1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTOUCR(301,(nstcall = 0, F279_3757), (Current));
		tr2 = RTCCL(arg2);
		(nstcall = 1, F281_3778(RTCW(tr1), tr2));
		RTHOOK(5);
		tr1 = RTOUCR(301,(nstcall = 0, F279_3757), (Current));
		tr2 = (nstcall = 1, F276_3575(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.field_at */
EIF_REFERENCE F279_3721 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("field_at", 278, Current, 1, 3, 3721);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (nstcall = 0, F279_3723(Current, arg2));
	RTHOOK(4);
	switch (loc1) {
		case 3L:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(1035, 0x00).id, 1035, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F76_1132(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 2L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F76_1130(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 12L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F76_1131(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 13L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(1020, 0x00).id, 1020, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F76_1133(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 14L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F76_1134(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 15L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F76_1135(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 16L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(1014, 0x00).id, 1014, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F76_1136(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 9L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(1011, 0x00).id, 1011, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F76_1137(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 10L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(1008, 0x00).id, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F76_1138(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 4L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F76_1139(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 11L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F76_1140(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 5L:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(1023, 0x00).id, 1023, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F76_1141(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 6L:
			RTHOOK(17);
			Result = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F76_1143(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 0L:
			RTHOOK(18);
			Result = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F76_1142(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
		case 1L:
			RTHOOK(19);
			Result = (nstcall = 0, F76_1128(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.stack_value_at */
EIF_REFERENCE F279_3722 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("stack_value_at", 278, Current, 0, 4, 3722);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F279_3733(Current, arg1, arg2, arg3, arg4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.eif_type */
EIF_INTEGER_32 F279_3723 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("eif_type", 278, Current, 0, 1, 3723);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F279_3729(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.rt_dynamic_type */
EIF_INTEGER_32 F279_3724 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("rt_dynamic_type", 278, Current, 0, 1, 3724);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F279_3731(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("rt_dynamic_type_nonnegative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {RT_DBG_INTERNAL}.object_record */
EIF_REFERENCE F279_3725 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("object_record", 278, Current, 2, 2, 3725);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTOUCR(301,(nstcall = 0, F279_3757), (Current));
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	(nstcall = 1, F281_3778(RTCW(loc2), tr1));
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F276_3577(RTCW(loc2), arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F276_3576(RTCW(loc2), arg1));
	tu4_1 = (nstcall = 0, F279_3730(Current, arg1, loc1));
	tr1 = RTCCL(arg2);
	Result = (nstcall = 0, F279_3726(Current, ti4_1, tu4_1, tr1));
	RTHOOK(6);
	switch (loc1) {
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,958,1011,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 958, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti1_1 = (nstcall = 1, F276_3589(RTCW(loc2), arg1));
			(nstcall = -1, F959_6232(RTCW(Result), tr1, arg1, loc1, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,952,1008,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 952, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti2_1 = (nstcall = 1, F276_3590(RTCW(loc2), arg1));
			(nstcall = -1, F953_6232(RTCW(Result), tr1, arg1, loc1, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,947,1005,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 947, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			ti4_1 = (nstcall = 1, F276_3591(RTCW(loc2), arg1));
			(nstcall = -1, F948_6232(RTCW(Result), tr1, arg1, loc1, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,948,1002,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 948, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			ti8_1 = (nstcall = 1, F276_3592(RTCW(loc2), arg1));
			(nstcall = -1, F949_6232(RTCW(Result), tr1, arg1, loc1, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,955,1020,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 955, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu1_1 = (nstcall = 1, F276_3585(RTCW(loc2), arg1));
			(nstcall = -1, F956_6232(RTCW(Result), tr1, arg1, loc1, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,956,999,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 956, _OBJSIZ_2_0_1_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu2_1 = (nstcall = 1, F276_3586(RTCW(loc2), arg1));
			(nstcall = -1, F957_6232(RTCW(Result), tr1, arg1, loc1, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,1017,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 950, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tu4_1 = (nstcall = 1, F276_3587(RTCW(loc2), arg1));
			(nstcall = -1, F951_6232(RTCW(Result), tr1, arg1, loc1, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,951,1014,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 951, _OBJSIZ_2_0_0_2_0_0_1_0_);
			}
			tr1 = RTCCL(arg2);
			tu8_1 = (nstcall = 1, F276_3588(RTCW(loc2), arg1));
			(nstcall = -1, F952_6232(RTCW(Result), tr1, arg1, loc1, tu8_1));
			break;
		case 0L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,945,1068,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 945, _OBJSIZ_2_0_0_2_0_1_0_0_);
			}
			tr1 = RTCCL(arg2);
			tp1 = (nstcall = 1, F276_3594(RTCW(loc2), arg1));
			(nstcall = -1, F946_6232(RTCW(Result), tr1, arg1, loc1, tp1));
			break;
		case 1L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,944,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 944, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F276_3562(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F945_6232(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 7L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,944,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 944, _OBJSIZ_3_0_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr2 = (nstcall = 1, F276_3561(RTCW(loc2), arg1));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F945_6232(RTCW(Result), tr1, arg1, loc1, tr3));
			break;
		case 3L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,946,1035,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 946, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tb1 = (nstcall = 1, F276_3584(RTCW(loc2), arg1));
			(nstcall = -1, F947_6232(RTCW(Result), tr1, arg1, loc1, tb1));
			break;
		case 5L:
			RTHOOK(19);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,954,1023,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 954, _OBJSIZ_2_0_0_2_1_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tr4_1 = (nstcall = 1, F276_3593(RTCW(loc2), arg1));
			(nstcall = -1, F955_6232(RTCW(Result), tr1, arg1, loc1, tr4_1));
			break;
		case 6L:
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,953,1026,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 953, _OBJSIZ_2_0_0_2_0_0_0_1_);
			}
			tr1 = RTCCL(arg2);
			tr8_1 = (nstcall = 1, F276_3595(RTCW(loc2), arg1));
			(nstcall = -1, F954_6232(RTCW(Result), tr1, arg1, loc1, tr8_1));
			break;
		case 2L:
			RTHOOK(21);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,949,1032,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 949, _OBJSIZ_2_1_0_2_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tc1 = (nstcall = 1, F276_3582(RTCW(loc2), arg1));
			(nstcall = -1, F950_6232(RTCW(Result), tr1, arg1, loc1, tc1));
			break;
		case 12L:
			RTHOOK(22);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,957,1029,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 957, _OBJSIZ_2_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg2);
			tw1 = (nstcall = 1, F276_3583(RTCW(loc2), arg1));
			(nstcall = -1, F958_6232(RTCW(Result), tr1, arg1, loc1, tw1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_attribute_record */
EIF_REFERENCE F279_3726 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("object_attribute_record", 278, Current, 2, 3, 3726);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F279_3723(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,933,1035,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 933, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tb1 = (nstcall = 0, F76_1132(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F934_6216(RTCW(Result), tr1, arg1, loc1, arg2, tb1));
			break;
		case 2L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,930,1032,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 930, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tc1 = (nstcall = 0, F76_1130(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F931_6216(RTCW(Result), tr1, arg1, loc1, arg2, tc1));
			break;
		case 12L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,936,1029,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 936, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tw1 = (nstcall = 0, F76_1131(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F937_6216(RTCW(Result), tr1, arg1, loc1, arg2, tw1));
			break;
		case 9L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,940,1011,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 940, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti1_1 = (nstcall = 0, F76_1137(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F941_6216(RTCW(Result), tr1, arg1, loc1, arg2, ti1_1));
			break;
		case 10L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,939,1008,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 939, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti2_1 = (nstcall = 0, F76_1138(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F940_6216(RTCW(Result), tr1, arg1, loc1, arg2, ti2_1));
			break;
		case 4L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,935,1005,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 935, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			ti4_1 = (nstcall = 0, F76_1139(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F936_6216(RTCW(Result), tr1, arg1, loc1, arg2, ti4_1));
			break;
		case 11L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,934,1002,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 934, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			ti8_1 = (nstcall = 0, F76_1140(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F935_6216(RTCW(Result), tr1, arg1, loc1, arg2, ti8_1));
			break;
		case 13L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,931,1020,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 931, _OBJSIZ_2_1_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F76_1133(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F932_6216(RTCW(Result), tr1, arg1, loc1, arg2, tu1_1));
			break;
		case 14L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,943,999,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 943, _OBJSIZ_2_0_1_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu2_1 = (nstcall = 0, F76_1134(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F944_6216(RTCW(Result), tr1, arg1, loc1, arg2, tu2_1));
			break;
		case 15L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,938,1017,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 938, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F76_1133(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu4_1 = (EIF_NATURAL_32) tu1_1;
			(nstcall = -1, F939_6216(RTCW(Result), tr1, arg1, loc1, arg2, tu4_1));
			break;
		case 16L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,937,1014,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 937, _OBJSIZ_2_0_0_3_0_0_1_0_);
			}
			tr1 = RTCCL(arg3);
			tu1_1 = (nstcall = 0, F76_1133(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tu8_1 = (EIF_NATURAL_64) tu1_1;
			(nstcall = -1, F938_6216(RTCW(Result), tr1, arg1, loc1, arg2, tu8_1));
			break;
		case 5L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,941,1023,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 941, _OBJSIZ_2_0_0_3_1_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr4_1 = (nstcall = 0, F76_1141(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F942_6216(RTCW(Result), tr1, arg1, loc1, arg2, tr4_1));
			break;
		case 6L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,942,1026,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 942, _OBJSIZ_2_0_0_3_0_0_0_1_);
			}
			tr1 = RTCCL(arg3);
			tr8_1 = (nstcall = 0, F76_1143(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F943_6216(RTCW(Result), tr1, arg1, loc1, arg2, tr8_1));
			break;
		case 0L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,932,1068,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 932, _OBJSIZ_2_0_0_3_0_1_0_0_);
			}
			tr1 = RTCCL(arg3);
			tp1 = (nstcall = 0, F76_1142(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			(nstcall = -1, F933_6216(RTCW(Result), tr1, arg1, loc1, arg2, tp1));
			break;
		case 1L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,929,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 929, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 0, F76_1128(Current, arg1, arg3, ((EIF_INTEGER_32) 0L)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F930_6216(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
			break;
		case 7L:
			RTHOOK(19);
			loc2 = RTLNS(eif_new_type(280, 0x01).id, 280, _OBJSIZ_1_0_0_2_0_0_0_0_);
			tr1 = RTCCL(arg3);
			(nstcall = -1, F281_3771(RTCW(loc2), tr1, arg1));
			RTHOOK(20);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,929,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 929, _OBJSIZ_3_0_0_3_0_0_0_0_);
			}
			tr1 = RTCCL(arg3);
			tr2 = (nstcall = 1, F281_3772(RTCW(loc2)));
			tr3 = RTCCL(tr2);
			(nstcall = -1, F930_6216(RTCW(Result), tr1, arg1, loc1, arg2, tr3));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.object_local_record */
EIF_REFERENCE F279_3727 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_NATURAL_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("object_local_record", 278, Current, 1, 3, 3727);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F279_3723(Current, arg3));
	RTHOOK(2);
	switch (loc1) {
		case 3L:
			RTHOOK(3);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,915,1035,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 915, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F916_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 2L:
			RTHOOK(4);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,918,1032,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 918, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F919_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 12L:
			RTHOOK(5);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,919,1029,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 919, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F920_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 13L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,924,1020,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 924, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F925_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 14L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,925,999,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 925, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F926_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 15L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,917,1017,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 917, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F918_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 16L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,923,1014,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 923, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F924_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 9L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,921,1011,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 921, _OBJSIZ_1_1_0_4_0_0_0_0_);
			}
			(nstcall = -1, F922_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 10L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,922,1008,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 922, _OBJSIZ_1_0_1_4_0_0_0_0_);
			}
			(nstcall = -1, F923_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 4L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,920,1005,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 920, _OBJSIZ_1_0_0_5_0_0_0_0_);
			}
			(nstcall = -1, F921_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 11L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,916,1002,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 916, _OBJSIZ_1_0_0_4_0_0_1_0_);
			}
			(nstcall = -1, F917_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 5L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,927,1023,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 927, _OBJSIZ_1_0_0_4_1_0_0_0_);
			}
			(nstcall = -1, F928_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 6L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,926,1026,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 926, _OBJSIZ_1_0_0_4_0_0_0_1_);
			}
			(nstcall = -1, F927_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 0L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,928,1068,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 928, _OBJSIZ_1_0_0_4_0_1_0_0_);
			}
			(nstcall = -1, F929_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 1L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,914,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 914, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F915_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case 7L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,914,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNS(typres0.id, 914, _OBJSIZ_2_0_0_4_0_0_0_0_);
			}
			(nstcall = -1, F915_6198(RTCW(Result), arg1, arg2, loc1, arg3));
			break;
		case -2L:
			break;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(20);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R5191[Dtype(RTCW(Result))-914])(Result));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_object_is_expanded */
EIF_BOOLEAN F279_3728 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_object_is_expanded", 278, Current, 0, 1, 3728);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F279_3728 ((EIF_POINTER) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_eif_type */
EIF_INTEGER_32 F279_3729 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("c_eif_type", 278, Current, 0, 1, 3729);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3729 ((EIF_NATURAL_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_field_type */
EIF_NATURAL_32 F279_3730 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_rt_field_type", 278, Current, 0, 2, 3730);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3730 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_dynamic_type */
EIF_INTEGER_32 F279_3731 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_rt_dynamic_type", 278, Current, 0, 1, 3731);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) Dtype(((EIF_REFERENCE) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.set_field_at */
void F279_3732 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg3);
	RTLIU(4);
	
	RTEAA("set_field_at", 278, Current, 15, 4, 3732);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F279_3723(Current, arg2));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(1035, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				(nstcall = 0, F76_1171(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(1032, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				(nstcall = 0, F76_1169(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(1029, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				(nstcall = 0, F76_1170(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(1020, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				(nstcall = 0, F76_1172(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(999, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				(nstcall = 0, F76_1173(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(1017, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				(nstcall = 0, F76_1174(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(1014, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				(nstcall = 0, F76_1175(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(1011, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				(nstcall = 0, F76_1176(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(1008, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				(nstcall = 0, F76_1177(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(1005, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				(nstcall = 0, F76_1178(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(1002, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				(nstcall = 0, F76_1179(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_32 *), eif_new_type(1023, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				(nstcall = 0, F76_1180(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_REAL_64 *), eif_new_type(1026, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				(nstcall = 0, F76_1168(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg3);
			RTOB(*(EIF_POINTER *), eif_new_type(1068, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				(nstcall = 0, F76_1181(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			tr1 = RTCCL(arg3);
			(nstcall = 0, F76_1167(Current, arg1, arg4, ((EIF_INTEGER_32) 0L), tr1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.c_stack_value_at */
EIF_REFERENCE F279_3733 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("c_stack_value_at", 278, Current, 0, 4, 3733);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3733 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.set_stack_value_at */
EIF_INTEGER_32 F279_3737 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4, EIF_REFERENCE arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_8 loc5 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_16 loc6 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc8 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_8 loc9 = (EIF_INTEGER_8) 0;
	EIF_INTEGER_16 loc10 = (EIF_INTEGER_16) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc12 = (EIF_INTEGER_64) 0;
	EIF_REAL_32 loc13 = (EIF_REAL_32) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_POINTER loc15 = (EIF_POINTER) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg5);
	RTLIU(3);
	
	RTEAA("set_stack_value_at", 278, Current, 16, 5, 3737);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_loc_type_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) || (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F279_3723(Current, arg4));
	RTHOOK(3);
	switch (loc1) {
		case 3L:
			RTHOOK(4);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_BOOLEAN *), eif_new_type(1035, 0x00), tr1, loc2, tb1);
			if (tb1) {
				RTHOOK(5);
				Result = (nstcall = 0, F279_3738(Current, arg1, arg2, arg3, loc2));
			}
			break;
		case 2L:
			RTHOOK(6);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_8 *), eif_new_type(1032, 0x00), tr1, loc3, tb1);
			if (tb1) {
				RTHOOK(7);
				Result = (nstcall = 0, F279_3739(Current, arg1, arg2, arg3, loc3));
			}
			break;
		case 12L:
			RTHOOK(8);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_CHARACTER_32 *), eif_new_type(1029, 0x00), tr1, loc4, tb1);
			if (tb1) {
				RTHOOK(9);
				Result = (nstcall = 0, F279_3740(Current, arg1, arg2, arg3, loc4));
			}
			break;
		case 13L:
			RTHOOK(10);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_8 *), eif_new_type(1020, 0x00), tr1, loc5, tb1);
			if (tb1) {
				RTHOOK(11);
				Result = (nstcall = 0, F279_3741(Current, arg1, arg2, arg3, loc5));
			}
			break;
		case 14L:
			RTHOOK(12);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_16 *), eif_new_type(999, 0x00), tr1, loc6, tb1);
			if (tb1) {
				RTHOOK(13);
				Result = (nstcall = 0, F279_3742(Current, arg1, arg2, arg3, loc6));
			}
			break;
		case 15L:
			RTHOOK(14);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_32 *), eif_new_type(1017, 0x00), tr1, loc7, tb1);
			if (tb1) {
				RTHOOK(15);
				Result = (nstcall = 0, F279_3743(Current, arg1, arg2, arg3, loc7));
			}
			break;
		case 16L:
			RTHOOK(16);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_NATURAL_64 *), eif_new_type(1014, 0x00), tr1, loc8, tb1);
			if (tb1) {
				RTHOOK(17);
				Result = (nstcall = 0, F279_3744(Current, arg1, arg2, arg3, loc8));
			}
			break;
		case 9L:
			RTHOOK(18);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_8 *), eif_new_type(1011, 0x00), tr1, loc9, tb1);
			if (tb1) {
				RTHOOK(19);
				Result = (nstcall = 0, F279_3745(Current, arg1, arg2, arg3, loc9));
			}
			break;
		case 10L:
			RTHOOK(20);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_16 *), eif_new_type(1008, 0x00), tr1, loc10, tb1);
			if (tb1) {
				RTHOOK(21);
				Result = (nstcall = 0, F279_3746(Current, arg1, arg2, arg3, loc10));
			}
			break;
		case 4L:
			RTHOOK(22);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_32 *), eif_new_type(1005, 0x00), tr1, loc11, tb1);
			if (tb1) {
				RTHOOK(23);
				Result = (nstcall = 0, F279_3747(Current, arg1, arg2, arg3, loc11));
			}
			break;
		case 11L:
			RTHOOK(24);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_INTEGER_64 *), eif_new_type(1002, 0x00), tr1, loc12, tb1);
			if (tb1) {
				RTHOOK(25);
				Result = (nstcall = 0, F279_3748(Current, arg1, arg2, arg3, loc12));
			}
			break;
		case 5L:
			RTHOOK(26);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_32 *), eif_new_type(1023, 0x00), tr1, loc13, tb1);
			if (tb1) {
				RTHOOK(27);
				Result = (nstcall = 0, F279_3749(Current, arg1, arg2, arg3, loc13));
			}
			break;
		case 6L:
			RTHOOK(28);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_REAL_64 *), eif_new_type(1026, 0x00), tr1, loc14, tb1);
			if (tb1) {
				RTHOOK(29);
				Result = (nstcall = 0, F279_3750(Current, arg1, arg2, arg3, loc14));
			}
			break;
		case 0L:
			RTHOOK(30);
			tr1 = RTCCL(arg5);
			RTOB(*(EIF_POINTER *), eif_new_type(1068, 0x00), tr1, loc15, tb1);
			if (tb1) {
				RTHOOK(31);
				Result = (nstcall = 0, F279_3751(Current, arg1, arg2, arg3, loc15));
			}
			break;
		case 1L:
			RTHOOK(32);
			if ((EIF_BOOLEAN)(arg5 != NULL)) {
				RTHOOK(33);
				Result = (nstcall = 0, F279_3752(Current, arg1, arg2, arg3, arg5));
			} else {
				RTHOOK(34);
				Result = (nstcall = 0, F279_3753(Current, arg1, arg2, arg3));
			}
			break;
		default:
			RTHOOK(35);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_boolean_stack_value */
EIF_INTEGER_32 F279_3738 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
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
	
	RTEAA("c_set_boolean_stack_value", 278, Current, 0, 4, 3738);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3738 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_BOOLEAN) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_8_stack_value */
EIF_INTEGER_32 F279_3739 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
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
	
	RTEAA("c_set_character_8_stack_value", 278, Current, 0, 4, 3739);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3739 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_character_32_stack_value */
EIF_INTEGER_32 F279_3740 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
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
	
	RTEAA("c_set_character_32_stack_value", 278, Current, 0, 4, 3740);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3740 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_CHARACTER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_8_stack_value */
EIF_INTEGER_32 F279_3741 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
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
	
	RTEAA("c_set_natural_8_stack_value", 278, Current, 0, 4, 3741);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3741 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_16_stack_value */
EIF_INTEGER_32 F279_3742 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
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
	
	RTEAA("c_set_natural_16_stack_value", 278, Current, 0, 4, 3742);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3742 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_32_stack_value */
EIF_INTEGER_32 F279_3743 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
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
	
	RTEAA("c_set_natural_32_stack_value", 278, Current, 0, 4, 3743);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3743 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_natural_64_stack_value */
EIF_INTEGER_32 F279_3744 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
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
	
	RTEAA("c_set_natural_64_stack_value", 278, Current, 0, 4, 3744);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3744 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_NATURAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_8_stack_value */
EIF_INTEGER_32 F279_3745 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
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
	
	RTEAA("c_set_integer_8_stack_value", 278, Current, 0, 4, 3745);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3745 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_8) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_16_stack_value */
EIF_INTEGER_32 F279_3746 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
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
	
	RTEAA("c_set_integer_16_stack_value", 278, Current, 0, 4, 3746);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3746 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_16) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_32_stack_value */
EIF_INTEGER_32 F279_3747 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("c_set_integer_32_stack_value", 278, Current, 0, 4, 3747);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3747 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_integer_64_stack_value */
EIF_INTEGER_32 F279_3748 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
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
	
	RTEAA("c_set_integer_64_stack_value", 278, Current, 0, 4, 3748);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3748 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_32_stack_value */
EIF_INTEGER_32 F279_3749 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
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
	
	RTEAA("c_set_real_32_stack_value", 278, Current, 0, 4, 3749);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3749 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_32) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_real_64_stack_value */
EIF_INTEGER_32 F279_3750 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
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
	
	RTEAA("c_set_real_64_stack_value", 278, Current, 0, 4, 3750);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3750 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_REAL_64) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_pointer_stack_value */
EIF_INTEGER_32 F279_3751 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
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
	
	RTEAA("c_set_pointer_stack_value", 278, Current, 0, 4, 3751);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3751 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_reference_stack_value */
EIF_INTEGER_32 F279_3752 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
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
	
	RTEAA("c_set_reference_stack_value", 278, Current, 0, 4, 3752);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ref_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F279_3752 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_set_void_stack_value */
EIF_INTEGER_32 F279_3753 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_set_void_stack_value", 278, Current, 0, 3, 3753);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F279_3753 ((EIF_INTEGER_32) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_INTERNAL}.c_rt_set_is_inside_rt_eiffel_code */
void F279_3754 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_rt_set_is_inside_rt_eiffel_code", 278, Current, 0, 1, 3754);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F279_3754 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {RT_DBG_INTERNAL}.test_locals */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F279_3755 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,arg3);
	RTLR(6,loc3);
	RTLR(7,saved_except);
	RTLIU(8);
	RTXSLS;
	
	RTEAA("test_locals", 278, Current, 3, 4, 3755);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc2) {
		RTHOOK(2);
		(nstcall = 0, F279_3754(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("----------------------------------\012",35,1470523914)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tr1 = RTMS32_EX_H("L\000\000\000o\000\000\000c\000\000\000 \000\000\000#\000\000\000",5,1869350947);
		tr2 = eif_out__i4_s1(arg2);
		tr3 = (nstcall = 1, F1076_7660(RTCW(tr2)));
		tr2 = (nstcall = 1, F1085_8031(tr1, tr3));
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("(stack depth=",13,1888178493)));
		tr1 = (nstcall = 1, F1085_8031(RTCW(tr2), tr1));
		tr2 = eif_out__i4_s1(arg1);
		tr3 = (nstcall = 1, F1076_7660(RTCW(tr2)));
		tr2 = (nstcall = 1, F1085_8031(RTCW(tr1), tr3));
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(")",1,41)));
		tr1 = (nstcall = 1, F1085_8031(RTCW(tr2), tr1));
		(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTLNS(eif_new_type(1083, 0x00).id, 1083, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = RTMS_EX_H(": should be ",12,282022432);
			(nstcall = -1, F1084_7951(RTCW(tr1), tr2));
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5299[Dtype(RTCW(tr2))-965])(tr2));
			tr2 = (nstcall = 1, F1084_7960(RTCW(tr1), tr3));
			(nstcall = 1, F1085_8012(RTCW(loc1), tr2));
		}
		RTHOOK(7);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		RTHOOK(8);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(9);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(" -> ",4,539835936)));
		(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		RTHOOK(10);
		tr1 = (nstcall = 0, F279_3722(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4));
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F1_5(loc3));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5299[Dtype(RTCW(tr1))-965])(tr1));
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("=",1,61)));
			tr1 = (nstcall = 1, F1084_7960(RTCW(tr2), tr1));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(loc3)-0])(loc3));
			tr3 = (nstcall = 1, F1076_7660(RTCW(tr2)));
			tr2 = (nstcall = 1, F1084_7960(RTCW(tr1), tr3));
			(nstcall = 1, F1085_8012(RTCW(loc1), tr2));
		} else {
			RTHOOK(12);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("Void object",11,160638836)));
			(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		}
		RTHOOK(13);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F279_3754(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F279_3754(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(18);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.test_set_local */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F279_3756 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,arg3);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	
	RTEAA("test_set_local", 278, Current, 3, 4, 3756);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc3) {
		RTHOOK(2);
		(nstcall = 0, F279_3754(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("----------------------------------\012",35,1470523914)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tr1 = RTMS32_EX_H("S\000\000\000e\000\000\000t\000\000\000L\000\000\000o\000\000\000c\000\000\000 \000\000\000#\000\000\000",8,1411988515);
		tr2 = eif_out__i4_s1(arg2);
		tr3 = (nstcall = 1, F1076_7660(RTCW(tr2)));
		tr2 = (nstcall = 1, F1085_8031(tr1, tr3));
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("(stack depth=",13,1888178493)));
		tr1 = (nstcall = 1, F1085_8031(RTCW(tr2), tr1));
		tr2 = eif_out__i4_s1(arg1);
		tr3 = (nstcall = 1, F1076_7660(RTCW(tr2)));
		tr2 = (nstcall = 1, F1085_8031(RTCW(tr1), tr3));
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(")",1,41)));
		tr1 = (nstcall = 1, F1085_8031(RTCW(tr2), tr1));
		(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 != NULL)) {
			RTHOOK(6);
			tr1 = RTLNS(eif_new_type(1083, 0x00).id, 1083, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr2 = RTMS_EX_H(": value ",8,992027424);
			(nstcall = -1, F1084_7951(RTCW(tr1), tr2));
			tr2 = (nstcall = 1, F1_5(arg3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5299[Dtype(RTCW(tr2))-965])(tr2));
			tr2 = (nstcall = 1, F1084_7960(RTCW(tr1), tr3));
			(nstcall = 1, F1085_8012(RTCW(loc1), tr2));
		} else {
			RTHOOK(7);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(": value Void",12,962399588)));
			(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		}
		RTHOOK(8);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		RTHOOK(9);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(10);
		tr1 = RTCCL(arg3);
		loc2 = (nstcall = 0, F279_3737(Current, arg1, ((EIF_INTEGER_32) 1L), arg2, arg4, tr1));
		RTHOOK(11);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(" -> ",4,539835936)));
		(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		RTHOOK(12);
		tr1 = RTMS32_EX_H("R\000\000\000e\000\000\000s\000\000\000u\000\000\000l\000\000\000t\000\000\000 \000\000\000=\000\000\000 \000\000\000",9,495958816);
		tr2 = eif_out__i4_s1(loc2);
		tr3 = (nstcall = 1, F1076_7660(RTCW(tr2)));
		tr2 = (nstcall = 1, F1085_8031(tr1, tr3));
		(nstcall = 1, F1085_8012(RTCW(loc1), tr2));
		RTHOOK(13);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F1085_8012(RTCW(loc1), tr1));
		RTHOOK(14);
		(nstcall = 0, F1_27(Current, loc1));
		RTHOOK(15);
		(nstcall = 0, F279_3754(Current, ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(16);
		tr1 = RTMS_EX_H("Rescued\012",8,1510780426);
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(17);
		(nstcall = 0, F279_3754(Current, ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(18);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(20);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {RT_DBG_INTERNAL}.reflected_object */
static EIF_REFERENCE F279_3757_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(301)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflected_object", 278, Current, 0, 0, 3757);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(280, 0x01).id, 280, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F281_3769(RTCW(tr1), Current));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F279_3757 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(301,F279_3757_body,(Current));
}

/* {RT_DBG_INTERNAL}.reflector */
static EIF_REFERENCE F279_3758_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(300)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reflector", 278, Current, 0, 0, 3758);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(276, 0x01).id, 276, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F279_3758 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(300,F279_3758_body,(Current));
}

void EIF_Minit244 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
