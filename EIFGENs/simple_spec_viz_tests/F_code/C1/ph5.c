/*
 * Code for class PHYSICS_POST_PROCESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ph5.h"
#include <graphviz/gvc.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F8_195
static EIF_POINTER inline_F8_195 (EIF_POINTER arg1)
{
	return agfstnode((Agraph_t*)arg1);
	;
}
#define INLINE_F8_195
#endif
#ifndef INLINE_F8_196
static EIF_POINTER inline_F8_196 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return agnxtnode((Agraph_t*)arg1, (Agnode_t*)arg2);
	;
}
#define INLINE_F8_196
#endif
#ifndef INLINE_F8_197
static EIF_REAL_64 inline_F8_197 (EIF_POINTER arg1)
{
	return ND_coord((Agnode_t*)arg1).x;
	;
}
#define INLINE_F8_197
#endif
#ifndef INLINE_F8_198
static EIF_REAL_64 inline_F8_198 (EIF_POINTER arg1)
{
	return ND_coord((Agnode_t*)arg1).y;
	;
}
#define INLINE_F8_198
#endif
#ifndef INLINE_F8_199
static void inline_F8_199 (EIF_POINTER arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3)
{
	char pos[100];
snprintf(pos, sizeof(pos), "%f,%f!", arg2, arg3);
agset((Agnode_t*)arg1, "pos", pos);
ND_coord((Agnode_t*)arg1).x = arg2;
ND_coord((Agnode_t*)arg1).y = arg3;
	;
}
#define INLINE_F8_199
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PHYSICS_POST_PROCESSOR}.make */
void F8_181 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 7, Current, 0, 0, 188);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) 792.0;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_) = (EIF_REAL_64) (EIF_REAL_64) 612.0;
	RTHOOK(3);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_) = (EIF_REAL_64) (EIF_REAL_64) 36.0;
	RTHOOK(4);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_) = (EIF_REAL_64) (EIF_REAL_64) 0.1;
	RTHOOK(5);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_4_) = (EIF_REAL_64) (EIF_REAL_64) 0.5;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(7);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_5_) = (EIF_REAL_64) (EIF_REAL_64) 0.85;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("reasonable_defaults", EX_POST);
		tb1 = '\0';
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
			tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tb1 = (EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2);
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

/* {PHYSICS_POST_PROCESSOR}.target_width */
EIF_REAL_64 F8_182 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
}


/* {PHYSICS_POST_PROCESSOR}.target_height */
EIF_REAL_64 F8_183 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
}


/* {PHYSICS_POST_PROCESSOR}.margin */
EIF_REAL_64 F8_184 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
}


/* {PHYSICS_POST_PROCESSOR}.boundary_force */
EIF_REAL_64 F8_185 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_);
}


/* {PHYSICS_POST_PROCESSOR}.repulsion_force */
EIF_REAL_64 F8_186 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_4_);
}


/* {PHYSICS_POST_PROCESSOR}.iterations */
EIF_INTEGER_32 F8_187 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {PHYSICS_POST_PROCESSOR}.damping */
EIF_REAL_64 F8_188 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_5_);
}


/* {PHYSICS_POST_PROCESSOR}.set_target_size */
EIF_REFERENCE F8_189 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("set_target_size", 7, Current, 0, 2, 176);
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
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) arg1;
	RTHOOK(4);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_) = (EIF_REAL_64) arg2;
	RTHOOK(5);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("width_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("height_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg2)) {
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
	return Result;
}

/* {PHYSICS_POST_PROCESSOR}.set_target_size_inches */
EIF_REFERENCE F8_190 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("set_target_size_inches", 7, Current, 0, 2, 177);
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
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) (arg1 * (EIF_REAL_64) 72.0);
	RTHOOK(4);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_) = (EIF_REAL_64) (EIF_REAL_64) (arg2 * (EIF_REAL_64) 72.0);
	RTHOOK(5);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("width_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, (EIF_REAL_64) (arg1 * (EIF_REAL_64) 72.0))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("height_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, (EIF_REAL_64) (arg2 * (EIF_REAL_64) 72.0))) {
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
	return Result;
}

/* {PHYSICS_POST_PROCESSOR}.set_margin */
EIF_REFERENCE F8_191 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("set_margin", 7, Current, 0, 1, 178);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_) = (EIF_REAL_64) arg1;
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("margin_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
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

/* {PHYSICS_POST_PROCESSOR}.set_boundary_force */
EIF_REFERENCE F8_192 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("set_boundary_force", 7, Current, 0, 1, 179);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_range", EX_PRE);
		tb1 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1)) {
			tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (arg1, (EIF_REAL_64) 1.0);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_) = (EIF_REAL_64) arg1;
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("force_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
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

/* {PHYSICS_POST_PROCESSOR}.set_iterations */
EIF_REFERENCE F8_193 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("set_iterations", 7, Current, 0, 1, 180);
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
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("iterations_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {PHYSICS_POST_PROCESSOR}.process_graph */
EIF_BOOLEAN F8_194 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc4 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc5 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc6 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc7 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc8 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc9 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc10 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc11 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc12 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc13 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc14 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc15 = (EIF_REAL_64) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REAL_64 loc17 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc18 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc19 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc20 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc21 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc22 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc23 = (EIF_REAL_64) 0;
	EIF_REAL_64 loc24 = (EIF_REAL_64) 0;
	EIF_INTEGER_32 loc25 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc26 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc27 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc28 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc29 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_REAL_64 tr8_4;
	EIF_REAL_64 tr8_5;
	EIF_REAL_64 tr8_6;
	EIF_REAL_64 tr8_7;
	EIF_REAL_64 tr8_8;
	EIF_REAL_64 tr8_9;
	EIF_REAL_64 tr8_10;
	EIF_REAL_64 tr8_11;
	EIF_REAL_64 tr8_12;
	EIF_REAL_64 tr8_13;
	EIF_REAL_64 tr8_14;
	EIF_REAL_64 tr8_15;
	EIF_REAL_64 tr8_16;
	EIF_REAL_64 tr8_17;
	EIF_REAL_64 tr8_18;
	EIF_REAL_64 tr8_19;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,loc26);
	RTLR(4,loc16);
	RTLR(5,loc27);
	RTLR(6,loc28);
	RTLR(7,loc29);
	RTLIU(8);
	
	RTEAA("process_graph", 7, Current, 29, 2, 181);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_gvc", EX_PRE);
		tp1 = (nstcall = 0, F1_33(Current));
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_graph", EX_PRE);
		tp1 = (nstcall = 0, F1_33(Current));
		RTTE((EIF_BOOLEAN)(arg2 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,0xFFF9,5,996,1068,1026,1026,1026,1026,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 100L)));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc6 = (EIF_REAL_64) 1.7976931348623157e+308;
	RTHOOK(5);
	loc7 = (EIF_REAL_64) 1.7976931348623157e+308;
	RTHOOK(6);
	loc8 = (EIF_REAL_64) -1.7976931348623157e+308;
	RTHOOK(7);
	loc9 = (EIF_REAL_64) -1.7976931348623157e+308;
	RTHOOK(8);
	tp1 = (nstcall = 0, F8_195(Current, arg2));
	loc1 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(9);
		tp1 = (nstcall = 0, F1_33(Current));
		if ((EIF_BOOLEAN)(loc1 == tp1)) break;
		RTHOOK(10);
		tr8_1 = (nstcall = 0, F8_197(Current, loc1));
		loc4 = (EIF_REAL_64) tr8_1;
		RTHOOK(11);
		tr8_1 = (nstcall = 0, F8_198(Current, loc1));
		loc5 = (EIF_REAL_64) tr8_1;
		RTHOOK(12);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,996,1068,1026,1026,1026,1026,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 6, 1);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_p = loc1;
		((EIF_TYPED_VALUE *)tr1+2)->it_r8 = loc4;
		((EIF_TYPED_VALUE *)tr1+3)->it_r8 = loc5;
		((EIF_TYPED_VALUE *)tr1+4)->it_r8 = (EIF_REAL_64) 0.0;
		((EIF_TYPED_VALUE *)tr1+5)->it_r8 = (EIF_REAL_64) 0.0;
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc3))-663])(loc3, tr1));
		RTHOOK(13);
		tr8_1 = eif_min_real64 (loc6,loc4);
		loc6 = (EIF_REAL_64) tr8_1;
		RTHOOK(14);
		tr8_1 = eif_min_real64 (loc7,loc5);
		loc7 = (EIF_REAL_64) tr8_1;
		RTHOOK(15);
		tr8_1 = eif_max_real64 (loc8,loc4);
		loc8 = (EIF_REAL_64) tr8_1;
		RTHOOK(16);
		tr8_1 = eif_max_real64 (loc9,loc5);
		loc9 = (EIF_REAL_64) tr8_1;
		RTHOOK(17);
		loc2++;
		RTHOOK(18);
		tp2 = (nstcall = 0, F8_196(Current, arg2, loc1));
		loc1 = (EIF_POINTER) tp2;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(20);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(21);
		loc14 = (EIF_REAL_64) (EIF_REAL_64) (loc8 - loc6);
		RTHOOK(22);
		loc15 = (EIF_REAL_64) (EIF_REAL_64) (loc9 - loc7);
		RTHOOK(23);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
		tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc12 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) (tr8_2 * tr8_3));
		RTHOOK(24);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
		tr8_2 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc13 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) (tr8_2 * tr8_3));
		RTHOOK(25);
		tb1 = '\0';
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (loc14, tr8_1)) {
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			tb1 = (EIF_BOOLEAN) eif_is_greater_real_64 (loc15, tr8_1);
		}
		if (tb1) {
			RTHOOK(26);
			loc10 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc12) /  (EIF_REAL_64) (loc14));
			RTHOOK(27);
			loc11 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc13) /  (EIF_REAL_64) (loc15));
			RTHOOK(28);
			tr8_1 = eif_min_real64 (loc10,loc11);
			loc10 = (EIF_REAL_64) tr8_1;
			RTHOOK(29);
			loc11 = (EIF_REAL_64) loc10;
		} else {
			RTHOOK(30);
			loc10 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
			RTHOOK(31);
			loc11 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
		}
		RTHOOK(32);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc19 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(33);
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc20 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(34);
		tr1 = (nstcall = 1, F867_5799(RTCW(loc3)));
		loc26 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, F421_4812(loc26));
			if (tb1) break;
			RTHOOK(35);
			tr1 = (nstcall = 1, F421_4803(loc26));
			loc16 = (EIF_REFERENCE) tr1;
			RTHOOK(36);
			tr8_1 = eif_real_64_item(RTCW(loc16),2);
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			
			eif_put_real_64_item(RTCW(loc16),2,(EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - loc6) - (EIF_REAL_64) ((EIF_REAL_64) (loc14) /  (EIF_REAL_64) (tr8_2))) * loc10) + loc19));
			RTHOOK(37);
			tr8_3 = eif_real_64_item(RTCW(loc16),3);
			tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			
			eif_put_real_64_item(RTCW(loc16),3,(EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_3 - loc7) - (EIF_REAL_64) ((EIF_REAL_64) (loc15) /  (EIF_REAL_64) (tr8_4))) * loc11) + loc20));
			RTHOOK(38);
			(nstcall = 1, F421_4818(loc26));
		}
		RTHOOK(39);
		loc25 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(40);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
			if ((EIF_BOOLEAN) (loc25 > ti4_1)) break;
			RTHOOK(41);
			tr1 = (nstcall = 1, F867_5799(RTCW(loc3)));
			loc27 = (EIF_REFERENCE) tr1;
			for (;;) {
				tb2 = (nstcall = 1, F421_4812(loc27));
				if (tb2) break;
				RTHOOK(42);
				tr1 = (nstcall = 1, F421_4803(loc27));
				loc16 = (EIF_REFERENCE) tr1;
				RTHOOK(43);
				loc17 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
				RTHOOK(44);
				loc18 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
				RTHOOK(45);
				tr1 = (nstcall = 1, F867_5799(RTCW(loc3)));
				loc28 = (EIF_REFERENCE) tr1;
				for (;;) {
					tb3 = (nstcall = 1, F421_4812(loc28));
					if (tb3) break;
					RTHOOK(46);
					tr1 = (nstcall = 1, F421_4803(loc28));
					tp2 = eif_pointer_item(RTCW(tr1),1);
					tp3 = eif_pointer_item(RTCW(loc16),1);
					if ((EIF_BOOLEAN)(tp2 != tp3)) {
						RTHOOK(47);
						tr8_5 = eif_real_64_item(RTCW(loc16),2);
						tr1 = (nstcall = 1, F421_4803(loc28));
						tr8_6 = eif_real_64_item(RTCW(tr1),2);
						loc21 = (EIF_REAL_64) (EIF_REAL_64) (tr8_5 - tr8_6);
						RTHOOK(48);
						tr8_5 = eif_real_64_item(RTCW(loc16),3);
						tr1 = (nstcall = 1, F421_4803(loc28));
						tr8_6 = eif_real_64_item(RTCW(tr1),3);
						loc22 = (EIF_REAL_64) (EIF_REAL_64) (tr8_5 - tr8_6);
						RTHOOK(49);
						loc23 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc21 * loc21) + (EIF_REAL_64) (loc22 * loc22));
						RTHOOK(50);
						if ((EIF_BOOLEAN) eif_is_less_real_64 (loc23, (EIF_REAL_64) 1.0)) {
							RTHOOK(51);
							loc23 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
						}
						RTHOOK(52);
						tr8_5 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_4_);
						loc24 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_5 * (EIF_REAL_64) 10000.0)) /  (EIF_REAL_64) (loc23));
						RTHOOK(53);
						loc17 += (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc24 * loc21)) /  (EIF_REAL_64) (loc23));
						RTHOOK(54);
						loc18 += (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc24 * loc22)) /  (EIF_REAL_64) (loc23));
					}
					RTHOOK(55);
					(nstcall = 1, F421_4818(loc28));
				}
				RTHOOK(56);
				tr8_5 = eif_real_64_item(RTCW(loc16),2);
				tr8_6 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
				if ((EIF_BOOLEAN) eif_is_less_real_64 (tr8_5, tr8_6)) {
					RTHOOK(57);
					tr8_5 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_);
					tr8_6 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
					tr8_7 = eif_real_64_item(RTCW(loc16),2);
					loc17 += (EIF_REAL_64) (tr8_5 * (EIF_REAL_64) (tr8_6 - tr8_7));
				}
				RTHOOK(58);
				tr8_5 = eif_real_64_item(RTCW(loc16),2);
				tr8_6 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
				tr8_7 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
				if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_5, (EIF_REAL_64) (tr8_6 - tr8_7))) {
					RTHOOK(59);
					tr8_5 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_);
					tr8_6 = eif_real_64_item(RTCW(loc16),2);
					tr8_7 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
					tr8_8 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
					loc17 -= (EIF_REAL_64) (tr8_5 * (EIF_REAL_64) (tr8_6 - (EIF_REAL_64) (tr8_7 - tr8_8)));
				}
				RTHOOK(60);
				tr8_5 = eif_real_64_item(RTCW(loc16),3);
				tr8_6 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
				if ((EIF_BOOLEAN) eif_is_less_real_64 (tr8_5, tr8_6)) {
					RTHOOK(61);
					tr8_5 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_);
					tr8_6 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
					tr8_7 = eif_real_64_item(RTCW(loc16),3);
					loc18 += (EIF_REAL_64) (tr8_5 * (EIF_REAL_64) (tr8_6 - tr8_7));
				}
				RTHOOK(62);
				tr8_5 = eif_real_64_item(RTCW(loc16),3);
				tr8_6 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
				tr8_7 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
				if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_5, (EIF_REAL_64) (tr8_6 - tr8_7))) {
					RTHOOK(63);
					tr8_5 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_);
					tr8_6 = eif_real_64_item(RTCW(loc16),3);
					tr8_7 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
					tr8_8 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
					loc18 -= (EIF_REAL_64) (tr8_5 * (EIF_REAL_64) (tr8_6 - (EIF_REAL_64) (tr8_7 - tr8_8)));
				}
				RTHOOK(64);
				tr8_5 = eif_real_64_item(RTCW(loc16),2);
				loc21 = (EIF_REAL_64) (EIF_REAL_64) (loc19 - tr8_5);
				RTHOOK(65);
				tr8_5 = eif_real_64_item(RTCW(loc16),3);
				loc22 = (EIF_REAL_64) (EIF_REAL_64) (loc20 - tr8_5);
				RTHOOK(66);
				loc17 += (EIF_REAL_64) (loc21 * (EIF_REAL_64) 0.005);
				RTHOOK(67);
				loc18 += (EIF_REAL_64) (loc22 * (EIF_REAL_64) 0.005);
				RTHOOK(68);
				tr8_5 = eif_real_64_item(RTCW(loc16),4);
				tr8_6 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_5_);
				
				eif_put_real_64_item(RTCW(loc16),4,(EIF_REAL_64) ((EIF_REAL_64) (tr8_5 + loc17) * tr8_6));
				RTHOOK(69);
				tr8_7 = eif_real_64_item(RTCW(loc16),5);
				tr8_8 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_5_);
				
				eif_put_real_64_item(RTCW(loc16),5,(EIF_REAL_64) ((EIF_REAL_64) (tr8_7 + loc18) * tr8_8));
				RTHOOK(70);
				tr8_9 = eif_real_64_item(RTCW(loc16),4);
				tr8_10 = eif_abs_real64 (tr8_9);
				if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_10, (EIF_REAL_64) 50.0)) {
					RTHOOK(71);
					tr8_9 = eif_real_64_item(RTCW(loc16),4);
					tr1 = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
					*(EIF_REAL_64 *)tr1 = tr8_9;
					ti4_2 = (nstcall = 1, F1025_7341(RTCW(tr1)));
					tr8_9 = (EIF_REAL_64) (ti4_2);
					
					eif_put_real_64_item(RTCW(loc16),4,(EIF_REAL_64) ((EIF_REAL_64) 50.0 * tr8_9));
				}
				RTHOOK(72);
				tr8_10 = eif_real_64_item(RTCW(loc16),5);
				tr8_11 = eif_abs_real64 (tr8_10);
				if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_11, (EIF_REAL_64) 50.0)) {
					RTHOOK(73);
					tr8_10 = eif_real_64_item(RTCW(loc16),5);
					tr1 = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
					*(EIF_REAL_64 *)tr1 = tr8_10;
					ti4_2 = (nstcall = 1, F1025_7341(RTCW(tr1)));
					tr8_10 = (EIF_REAL_64) (ti4_2);
					
					eif_put_real_64_item(RTCW(loc16),5,(EIF_REAL_64) ((EIF_REAL_64) 50.0 * tr8_10));
				}
				RTHOOK(74);
				tr8_11 = eif_real_64_item(RTCW(loc16),2);
				tr8_12 = eif_real_64_item(RTCW(loc16),4);
				
				eif_put_real_64_item(RTCW(loc16),2,(EIF_REAL_64) (tr8_11 + tr8_12));
				RTHOOK(75);
				tr8_13 = eif_real_64_item(RTCW(loc16),3);
				tr8_14 = eif_real_64_item(RTCW(loc16),5);
				
				eif_put_real_64_item(RTCW(loc16),3,(EIF_REAL_64) (tr8_13 + tr8_14));
				RTHOOK(76);
				tr8_15 = eif_real_64_item(RTCW(loc16),2);
				tr8_16 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
				tr8_17 = eif_max_real64 (tr8_15,tr8_16);
				tr8_15 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
				tr8_16 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
				tr8_18 = eif_min_real64 (tr8_17,(EIF_REAL_64) (tr8_15 - tr8_16));
				
				eif_put_real_64_item(RTCW(loc16),2,tr8_18);
				RTHOOK(77);
				tr8_15 = eif_real_64_item(RTCW(loc16),3);
				tr8_16 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
				tr8_17 = eif_max_real64 (tr8_15,tr8_16);
				tr8_15 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
				tr8_16 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
				tr8_19 = eif_min_real64 (tr8_17,(EIF_REAL_64) (tr8_15 - tr8_16));
				
				eif_put_real_64_item(RTCW(loc16),3,tr8_19);
				RTHOOK(78);
				(nstcall = 1, F421_4818(loc27));
			}
			RTHOOK(79);
			loc25++;
		}
		RTHOOK(80);
		tr1 = (nstcall = 1, F867_5799(RTCW(loc3)));
		loc29 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb4 = (nstcall = 1, F421_4812(loc29));
			if (tb4) break;
			RTHOOK(81);
			tr1 = (nstcall = 1, F421_4803(loc29));
			loc16 = (EIF_REFERENCE) tr1;
			RTHOOK(82);
			tp2 = eif_pointer_item(RTCW(loc16),1);
			tr8_15 = eif_real_64_item(RTCW(loc16),2);
			tr8_16 = eif_real_64_item(RTCW(loc16),3);
			(nstcall = 0, F8_199(Current, tp2, tr8_15, tr8_16));
			RTHOOK(83);
			(nstcall = 1, F421_4818(loc29));
		}
		RTHOOK(84);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(85);
	RTLE;
	RTEE;
	return Result;
}

/* {PHYSICS_POST_PROCESSOR}.c_agfstnode */
EIF_POINTER F8_195 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_agfstnode", 7, Current, 0, 1, 182);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F8_195 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PHYSICS_POST_PROCESSOR}.c_agnxtnode */
EIF_POINTER F8_196 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
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
	
	RTEAA("c_agnxtnode", 7, Current, 0, 2, 183);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F8_196 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PHYSICS_POST_PROCESSOR}.c_nd_coord_x */
EIF_REAL_64 F8_197 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_nd_coord_x", 7, Current, 0, 1, 184);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F8_197 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PHYSICS_POST_PROCESSOR}.c_nd_coord_y */
EIF_REAL_64 F8_198 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_nd_coord_y", 7, Current, 0, 1, 185);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F8_198 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PHYSICS_POST_PROCESSOR}.c_set_node_pos */
void F8_199 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_node_pos", 7, Current, 0, 3, 186);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F8_199 ((EIF_POINTER) arg1, (EIF_REAL_64) arg2, (EIF_REAL_64) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PHYSICS_POST_PROCESSOR}._invariant */
void F8_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 4, Current, 0, 0);
	RTIT("positive_target_width", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_0_);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("positive_target_height", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_1_);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("non_negative_margin", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_2_);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_boundary_force", Current);
	tb1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_3_);
		tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_repulsion_force", Current);
	tb1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_4_);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_4_);
		tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("positive_iterations", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_damping", Current);
	tb1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_5_);
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_0_0_0_1_0_0_0_5_);
		tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit5 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
