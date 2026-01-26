/*
 * Code for class PHYSICS_POST_PROCESSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F5_181(EIF_REFERENCE);
extern EIF_TYPED_VALUE F5_182(EIF_REFERENCE);
extern EIF_TYPED_VALUE F5_183(EIF_REFERENCE);
extern EIF_TYPED_VALUE F5_184(EIF_REFERENCE);
extern EIF_TYPED_VALUE F5_185(EIF_REFERENCE);
extern EIF_TYPED_VALUE F5_186(EIF_REFERENCE);
extern EIF_TYPED_VALUE F5_187(EIF_REFERENCE);
extern EIF_TYPED_VALUE F5_188(EIF_REFERENCE);
extern EIF_TYPED_VALUE F5_189(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F5_190(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F5_191(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F5_192(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F5_193(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F5_194(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F5_195(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F5_196(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F5_197(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F5_198(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F5_199(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F5_9204(EIF_REFERENCE, int);
extern void EIF_Minit5(void);

#ifdef __cplusplus
}
#endif

#include <graphviz/gvc.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F5_195
static EIF_POINTER inline_F5_195 (EIF_POINTER arg1)
{
	return agfstnode((Agraph_t*)arg1);
	;
}
#define INLINE_F5_195
#endif
#ifndef INLINE_F5_196
static EIF_POINTER inline_F5_196 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	return agnxtnode((Agraph_t*)arg1, (Agnode_t*)arg2);
	;
}
#define INLINE_F5_196
#endif
#ifndef INLINE_F5_197
static EIF_REAL_64 inline_F5_197 (EIF_POINTER arg1)
{
	return ND_coord((Agnode_t*)arg1).x;
	;
}
#define INLINE_F5_197
#endif
#ifndef INLINE_F5_198
static EIF_REAL_64 inline_F5_198 (EIF_POINTER arg1)
{
	return ND_coord((Agnode_t*)arg1).y;
	;
}
#define INLINE_F5_198
#endif
#ifndef INLINE_F5_199
static void inline_F5_199 (EIF_POINTER arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3)
{
	char pos[100];
snprintf(pos, sizeof(pos), "%f,%f!", arg2, arg3);
agset((Agnode_t*)arg1, "pos", pos);
ND_coord((Agnode_t*)arg1).x = arg2;
ND_coord((Agnode_t*)arg1).y = arg3;
	;
}
#define INLINE_F5_199
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PHYSICS_POST_PROCESSOR}.make */
void F5_181 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 0, 188);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(4, Current, 188);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 188, 0x20000000, 1); /* target_width */
	*(EIF_REAL_64 *)(Current + RTWA(188, dtype)) = (EIF_REAL_64) (EIF_REAL_64) 792.0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 189, 0x20000000, 1); /* target_height */
	*(EIF_REAL_64 *)(Current + RTWA(189, dtype)) = (EIF_REAL_64) (EIF_REAL_64) 612.0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 190, 0x20000000, 1); /* margin */
	*(EIF_REAL_64 *)(Current + RTWA(190, dtype)) = (EIF_REAL_64) (EIF_REAL_64) 36.0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 191, 0x20000000, 1); /* boundary_force */
	*(EIF_REAL_64 *)(Current + RTWA(191, dtype)) = (EIF_REAL_64) (EIF_REAL_64) 0.1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 192, 0x20000000, 1); /* repulsion_force */
	*(EIF_REAL_64 *)(Current + RTWA(192, dtype)) = (EIF_REAL_64) (EIF_REAL_64) 0.5;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 193, 0x10000000, 1); /* iterations */
	*(EIF_INTEGER_32 *)(Current + RTWA(193, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 100L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 194, 0x20000000, 1); /* damping */
	*(EIF_REAL_64 *)(Current + RTWA(194, dtype)) = (EIF_REAL_64) (EIF_REAL_64) 0.85;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("reasonable_defaults", EX_POST);
		tb1 = '\0';
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(188, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(189, dtype));
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {PHYSICS_POST_PROCESSOR}.target_width */
EIF_TYPED_VALUE F5_182 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(188,Dtype(Current)));
	return r;
}


/* {PHYSICS_POST_PROCESSOR}.target_height */
EIF_TYPED_VALUE F5_183 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(189,Dtype(Current)));
	return r;
}


/* {PHYSICS_POST_PROCESSOR}.margin */
EIF_TYPED_VALUE F5_184 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(190,Dtype(Current)));
	return r;
}


/* {PHYSICS_POST_PROCESSOR}.boundary_force */
EIF_TYPED_VALUE F5_185 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(191,Dtype(Current)));
	return r;
}


/* {PHYSICS_POST_PROCESSOR}.repulsion_force */
EIF_TYPED_VALUE F5_186 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(192,Dtype(Current)));
	return r;
}


/* {PHYSICS_POST_PROCESSOR}.iterations */
EIF_TYPED_VALUE F5_187 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(193,Dtype(Current)));
	return r;
}


/* {PHYSICS_POST_PROCESSOR}.damping */
EIF_TYPED_VALUE F5_188 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(194,Dtype(Current)));
	return r;
}


/* {PHYSICS_POST_PROCESSOR}.set_target_size */
EIF_TYPED_VALUE F5_189 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_target_size";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 2, 176);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(4, Current, 176);
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
	RTDBGAA(Current, dtype, 188, 0x20000000, 1); /* target_width */
	*(EIF_REAL_64 *)(Current + RTWA(188, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 189, 0x20000000, 1); /* target_height */
	*(EIF_REAL_64 *)(Current + RTWA(189, dtype)) = (EIF_REAL_64) arg2;
	RTHOOK(5);
	RTDBGAL(0, 0xF8000004, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("width_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(188, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("height_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(189, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg2
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}.set_target_size_inches */
EIF_TYPED_VALUE F5_190 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_target_size_inches";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 2, 177);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(4, Current, 177);
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
	RTDBGAA(Current, dtype, 188, 0x20000000, 1); /* target_width */
	*(EIF_REAL_64 *)(Current + RTWA(188, dtype)) = (EIF_REAL_64) (EIF_REAL_64) (arg1 * (EIF_REAL_64) 72.0);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 189, 0x20000000, 1); /* target_height */
	*(EIF_REAL_64 *)(Current + RTWA(189, dtype)) = (EIF_REAL_64) (EIF_REAL_64) (arg2 * (EIF_REAL_64) 72.0);
	RTHOOK(5);
	RTDBGAL(0, 0xF8000004, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("width_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(188, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, (EIF_REAL_64) (arg1 * (EIF_REAL_64) 72.0))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("height_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(189, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, (EIF_REAL_64) (arg2 * (EIF_REAL_64) 72.0))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef arg2
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}.set_margin */
EIF_TYPED_VALUE F5_191 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_margin";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 1, 178);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(4, Current, 178);
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
	RTDBGAA(Current, dtype, 190, 0x20000000, 1); /* margin */
	*(EIF_REAL_64 *)(Current + RTWA(190, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000004, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("margin_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
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
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}.set_boundary_force */
EIF_TYPED_VALUE F5_192 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_boundary_force";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 1, 179);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(4, Current, 179);
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
	RTDBGAA(Current, dtype, 191, 0x20000000, 1); /* boundary_force */
	*(EIF_REAL_64 *)(Current + RTWA(191, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000004, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("force_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(191, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
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
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}.set_iterations */
EIF_TYPED_VALUE F5_193 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_iterations";
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
	
	RTEAA(l_feature_name, 4, Current, 0, 1, 180);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(4, Current, 180);
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
	RTDBGAA(Current, dtype, 193, 0x10000000, 1); /* iterations */
	*(EIF_INTEGER_32 *)(Current + RTWA(193, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000004, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("iterations_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(193, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}.process_graph */
EIF_TYPED_VALUE F5_194 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_graph";
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
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc26);
	RTLR(5,loc16);
	RTLR(6,loc27);
	RTLR(7,loc28);
	RTLR(8,loc29);
	RTLIU(9);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REAL64, &loc4);
	RTLU(SK_REAL64, &loc5);
	RTLU(SK_REAL64, &loc6);
	RTLU(SK_REAL64, &loc7);
	RTLU(SK_REAL64, &loc8);
	RTLU(SK_REAL64, &loc9);
	RTLU(SK_REAL64, &loc10);
	RTLU(SK_REAL64, &loc11);
	RTLU(SK_REAL64, &loc12);
	RTLU(SK_REAL64, &loc13);
	RTLU(SK_REAL64, &loc14);
	RTLU(SK_REAL64, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REAL64, &loc17);
	RTLU(SK_REAL64, &loc18);
	RTLU(SK_REAL64, &loc19);
	RTLU(SK_REAL64, &loc20);
	RTLU(SK_REAL64, &loc21);
	RTLU(SK_REAL64, &loc22);
	RTLU(SK_REAL64, &loc23);
	RTLU(SK_REAL64, &loc24);
	RTLU(SK_INT32, &loc25);
	RTLU(SK_REF, &loc26);
	RTLU(SK_REF, &loc27);
	RTLU(SK_REF, &loc28);
	RTLU(SK_REF, &loc29);
	
	RTEAA(l_feature_name, 4, Current, 29, 2, 181);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(4, Current, 181);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_gvc", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_graph", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg2 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(3, 0xF80001BE, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,446,0xFF01,0xFFF9,5,309,350,338,338,338,338,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 100L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4897, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5922, 338))(Current)).it_r8);
	loc6 = (EIF_REAL_64) tr8_1;
	RTHOOK(5);
	RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5922, 338))(Current)).it_r8);
	loc7 = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5921, 338))(Current)).it_r8);
	loc8 = (EIF_REAL_64) tr8_1;
	RTHOOK(7);
	RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5921, 338))(Current)).it_r8);
	loc9 = (EIF_REAL_64) tr8_1;
	RTHOOK(8);
	RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
	up1 = arg2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(201, dtype))(Current, up1x)).it_p);
	loc1 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(9);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(loc1 == tp1)) break;
		RTHOOK(10);
		RTDBGAL(4, 0x20000000, 1, 0); /* loc4 */
		up1 = loc1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(203, dtype))(Current, up1x)).it_r8);
		loc4 = (EIF_REAL_64) tr8_1;
		RTHOOK(11);
		RTDBGAL(5, 0x20000000, 1, 0); /* loc5 */
		up1 = loc1;
		tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(204, dtype))(Current, up1x)).it_r8);
		loc5 = (EIF_REAL_64) tr8_1;
		RTHOOK(12);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,5,309,350,338,338,338,338,0xFFFF};
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
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4401, "extend", loc3))(loc3, ur1x);
		RTHOOK(13);
		RTDBGAL(6, 0x20000000, 1, 0); /* loc6 */
		ur8_1 = loc4;
		tr8_1 = eif_min_real64 (loc6,ur8_1);
		loc6 = (EIF_REAL_64) tr8_1;
		RTHOOK(14);
		RTDBGAL(7, 0x20000000, 1, 0); /* loc7 */
		ur8_1 = loc5;
		tr8_1 = eif_min_real64 (loc7,ur8_1);
		loc7 = (EIF_REAL_64) tr8_1;
		RTHOOK(15);
		RTDBGAL(8, 0x20000000, 1, 0); /* loc8 */
		ur8_1 = loc4;
		tr8_1 = eif_max_real64 (loc8,ur8_1);
		loc8 = (EIF_REAL_64) tr8_1;
		RTHOOK(16);
		RTDBGAL(9, 0x20000000, 1, 0); /* loc9 */
		ur8_1 = loc5;
		tr8_1 = eif_max_real64 (loc9,ur8_1);
		loc9 = (EIF_REAL_64) tr8_1;
		RTHOOK(17);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(18);
		RTDBGAL(1, 0x40000000, 1, 0); /* loc1 */
		up1 = arg2;
		up2 = loc1;
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(202, dtype))(Current, up1x, up2x)).it_p);
		loc1 = (EIF_POINTER) tp2;
	}
	RTHOOK(19);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(20);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(21);
		RTDBGAL(14, 0x20000000, 1, 0); /* loc14 */
		loc14 = (EIF_REAL_64) (EIF_REAL_64) (loc8 - loc6);
		RTHOOK(22);
		RTDBGAL(15, 0x20000000, 1, 0); /* loc15 */
		loc15 = (EIF_REAL_64) (EIF_REAL_64) (loc9 - loc7);
		RTHOOK(23);
		RTDBGAL(12, 0x20000000, 1, 0); /* loc12 */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(188, dtype));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc12 = (EIF_REAL_64) (EIF_REAL_64) (tr8_1 - (EIF_REAL_64) (tr8_2 * tr8_3));
		RTHOOK(24);
		RTDBGAL(13, 0x20000000, 1, 0); /* loc13 */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(189, dtype));
		tr8_2 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
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
			RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
			loc10 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc12) /  (EIF_REAL_64) (loc14));
			RTHOOK(27);
			RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
			loc11 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc13) /  (EIF_REAL_64) (loc15));
			RTHOOK(28);
			RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
			ur8_1 = loc11;
			tr8_1 = eif_min_real64 (loc10,ur8_1);
			loc10 = (EIF_REAL_64) tr8_1;
			RTHOOK(29);
			RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
			loc11 = (EIF_REAL_64) loc10;
		} else {
			RTHOOK(30);
			RTDBGAL(10, 0x20000000, 1, 0); /* loc10 */
			loc10 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
			RTHOOK(31);
			RTDBGAL(11, 0x20000000, 1, 0); /* loc11 */
			loc11 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
		}
		RTHOOK(32);
		RTDBGAL(19, 0x20000000, 1, 0); /* loc19 */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(188, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc19 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(33);
		RTDBGAL(20, 0x20000000, 1, 0); /* loc20 */
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(189, dtype));
		tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
		loc20 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1) /  (EIF_REAL_64) (tr8_2));
		RTHOOK(34);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc26 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc26))(loc26)).it_b);
			if (tb1) break;
			RTHOOK(35);
			RTDBGAL(16, 0xF8000135, 0, 0); /* loc16 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc26))(loc26)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc16 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(36);
			tr8_1 = eif_real_64_item(RTCW(loc16),2);
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			
			eif_put_real_64_item(RTCW(loc16),2,(EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_1 - loc6) - (EIF_REAL_64) ((EIF_REAL_64) (loc14) /  (EIF_REAL_64) (tr8_2))) * loc10) + loc19));
			RTHOOK(37);
			tr8_3 = eif_real_64_item(RTCW(loc16),3);
			tr8_4 = (EIF_REAL_64) (((EIF_INTEGER_32) 2L));
			
			eif_put_real_64_item(RTCW(loc16),3,(EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_3 - loc7) - (EIF_REAL_64) ((EIF_REAL_64) (loc15) /  (EIF_REAL_64) (tr8_4))) * loc11) + loc20));
			RTHOOK(38);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc26))(loc26);
		}
		RTHOOK(39);
		RTDBGAL(25, 0x10000000, 1, 0); /* loc25 */
		loc25 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(40);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(193, dtype));
			if ((EIF_BOOLEAN) (loc25 > ti4_1)) break;
			RTHOOK(41);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc27 = (EIF_REFERENCE) RTCCL(tr1);
			for (;;) {
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc27))(loc27)).it_b);
				if (tb2) break;
				RTHOOK(42);
				RTDBGAL(16, 0xF8000135, 0, 0); /* loc16 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc27))(loc27)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc16 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(43);
				RTDBGAL(17, 0x20000000, 1, 0); /* loc17 */
				loc17 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
				RTHOOK(44);
				RTDBGAL(18, 0x20000000, 1, 0); /* loc18 */
				loc18 = (EIF_REAL_64) (EIF_REAL_64) 0.0;
				RTHOOK(45);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc28 = (EIF_REFERENCE) RTCCL(tr1);
				for (;;) {
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc28))(loc28)).it_b);
					if (tb3) break;
					RTHOOK(46);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc28))(loc28)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					tp2 = eif_pointer_item(RTCW(tr1),1);
					tp3 = eif_pointer_item(RTCW(loc16),1);
					if ((EIF_BOOLEAN)(tp2 != tp3)) {
						RTHOOK(47);
						RTDBGAL(21, 0x20000000, 1, 0); /* loc21 */
						tr8_5 = eif_real_64_item(RTCW(loc16),2);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc28))(loc28)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr8_6 = eif_real_64_item(RTCW(tr1),2);
						loc21 = (EIF_REAL_64) (EIF_REAL_64) (tr8_5 - tr8_6);
						RTHOOK(48);
						RTDBGAL(22, 0x20000000, 1, 0); /* loc22 */
						tr8_5 = eif_real_64_item(RTCW(loc16),3);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc28))(loc28)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						tr8_6 = eif_real_64_item(RTCW(tr1),3);
						loc22 = (EIF_REAL_64) (EIF_REAL_64) (tr8_5 - tr8_6);
						RTHOOK(49);
						RTDBGAL(23, 0x20000000, 1, 0); /* loc23 */
						loc23 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (loc21 * loc21) + (EIF_REAL_64) (loc22 * loc22));
						RTHOOK(50);
						if ((EIF_BOOLEAN) eif_is_less_real_64 (loc23, (EIF_REAL_64) 1.0)) {
							RTHOOK(51);
							RTDBGAL(23, 0x20000000, 1, 0); /* loc23 */
							loc23 = (EIF_REAL_64) (EIF_REAL_64) 1.0;
						}
						RTHOOK(52);
						RTDBGAL(24, 0x20000000, 1, 0); /* loc24 */
						tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(192, dtype));
						loc24 = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (tr8_5 * (EIF_REAL_64) 10000.0)) /  (EIF_REAL_64) (loc23));
						RTHOOK(53);
						RTDBGAL(17, 0x20000000, 1, 0); /* loc17 */
						loc17 += (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc24 * loc21)) /  (EIF_REAL_64) (loc23));
						RTHOOK(54);
						RTDBGAL(18, 0x20000000, 1, 0); /* loc18 */
						loc18 += (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) (loc24 * loc22)) /  (EIF_REAL_64) (loc23));
					}
					RTHOOK(55);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc28))(loc28);
				}
				RTHOOK(56);
				tr8_5 = eif_real_64_item(RTCW(loc16),2);
				tr8_6 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
				if ((EIF_BOOLEAN) eif_is_less_real_64 (tr8_5, tr8_6)) {
					RTHOOK(57);
					RTDBGAL(17, 0x20000000, 1, 0); /* loc17 */
					tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(191, dtype));
					tr8_6 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
					tr8_7 = eif_real_64_item(RTCW(loc16),2);
					loc17 += (EIF_REAL_64) (tr8_5 * (EIF_REAL_64) (tr8_6 - tr8_7));
				}
				RTHOOK(58);
				tr8_5 = eif_real_64_item(RTCW(loc16),2);
				tr8_6 = *(EIF_REAL_64 *)(Current + RTWA(188, dtype));
				tr8_7 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
				if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_5, (EIF_REAL_64) (tr8_6 - tr8_7))) {
					RTHOOK(59);
					RTDBGAL(17, 0x20000000, 1, 0); /* loc17 */
					tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(191, dtype));
					tr8_6 = eif_real_64_item(RTCW(loc16),2);
					tr8_7 = *(EIF_REAL_64 *)(Current + RTWA(188, dtype));
					tr8_8 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
					loc17 -= (EIF_REAL_64) (tr8_5 * (EIF_REAL_64) (tr8_6 - (EIF_REAL_64) (tr8_7 - tr8_8)));
				}
				RTHOOK(60);
				tr8_5 = eif_real_64_item(RTCW(loc16),3);
				tr8_6 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
				if ((EIF_BOOLEAN) eif_is_less_real_64 (tr8_5, tr8_6)) {
					RTHOOK(61);
					RTDBGAL(18, 0x20000000, 1, 0); /* loc18 */
					tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(191, dtype));
					tr8_6 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
					tr8_7 = eif_real_64_item(RTCW(loc16),3);
					loc18 += (EIF_REAL_64) (tr8_5 * (EIF_REAL_64) (tr8_6 - tr8_7));
				}
				RTHOOK(62);
				tr8_5 = eif_real_64_item(RTCW(loc16),3);
				tr8_6 = *(EIF_REAL_64 *)(Current + RTWA(189, dtype));
				tr8_7 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
				if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_5, (EIF_REAL_64) (tr8_6 - tr8_7))) {
					RTHOOK(63);
					RTDBGAL(18, 0x20000000, 1, 0); /* loc18 */
					tr8_5 = *(EIF_REAL_64 *)(Current + RTWA(191, dtype));
					tr8_6 = eif_real_64_item(RTCW(loc16),3);
					tr8_7 = *(EIF_REAL_64 *)(Current + RTWA(189, dtype));
					tr8_8 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
					loc18 -= (EIF_REAL_64) (tr8_5 * (EIF_REAL_64) (tr8_6 - (EIF_REAL_64) (tr8_7 - tr8_8)));
				}
				RTHOOK(64);
				RTDBGAL(21, 0x20000000, 1, 0); /* loc21 */
				tr8_5 = eif_real_64_item(RTCW(loc16),2);
				loc21 = (EIF_REAL_64) (EIF_REAL_64) (loc19 - tr8_5);
				RTHOOK(65);
				RTDBGAL(22, 0x20000000, 1, 0); /* loc22 */
				tr8_5 = eif_real_64_item(RTCW(loc16),3);
				loc22 = (EIF_REAL_64) (EIF_REAL_64) (loc20 - tr8_5);
				RTHOOK(66);
				RTDBGAL(17, 0x20000000, 1, 0); /* loc17 */
				loc17 += (EIF_REAL_64) (loc21 * (EIF_REAL_64) 0.005);
				RTHOOK(67);
				RTDBGAL(18, 0x20000000, 1, 0); /* loc18 */
				loc18 += (EIF_REAL_64) (loc22 * (EIF_REAL_64) 0.005);
				RTHOOK(68);
				tr8_5 = eif_real_64_item(RTCW(loc16),4);
				tr8_6 = *(EIF_REAL_64 *)(Current + RTWA(194, dtype));
				
				eif_put_real_64_item(RTCW(loc16),4,(EIF_REAL_64) ((EIF_REAL_64) (tr8_5 + loc17) * tr8_6));
				RTHOOK(69);
				tr8_7 = eif_real_64_item(RTCW(loc16),5);
				tr8_8 = *(EIF_REAL_64 *)(Current + RTWA(194, dtype));
				
				eif_put_real_64_item(RTCW(loc16),5,(EIF_REAL_64) ((EIF_REAL_64) (tr8_7 + loc18) * tr8_8));
				RTHOOK(70);
				tr8_9 = eif_real_64_item(RTCW(loc16),4);
				tr8_10 = eif_abs_real64 (tr8_9);
				if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_10, (EIF_REAL_64) 50.0)) {
					RTHOOK(71);
					tr8_9 = eif_real_64_item(RTCW(loc16),4);
					tr1 = RTLN(eif_new_type(338, 0x00).id);
					*(EIF_REAL_64 *)tr1 = tr8_9;
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5917, "sign", tr1))(tr1)).it_i4);
					tr8_9 = (EIF_REAL_64) (ti4_2);
					
					eif_put_real_64_item(RTCW(loc16),4,(EIF_REAL_64) ((EIF_REAL_64) 50.0 * tr8_9));
				}
				RTHOOK(72);
				tr8_10 = eif_real_64_item(RTCW(loc16),5);
				tr8_11 = eif_abs_real64 (tr8_10);
				if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_11, (EIF_REAL_64) 50.0)) {
					RTHOOK(73);
					tr8_10 = eif_real_64_item(RTCW(loc16),5);
					tr1 = RTLN(eif_new_type(338, 0x00).id);
					*(EIF_REAL_64 *)tr1 = tr8_10;
					ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5917, "sign", tr1))(tr1)).it_i4);
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
				tr8_16 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
				ur8_1 = tr8_16;
				tr8_17 = eif_max_real64 (tr8_15,ur8_1);
				tr8_15 = *(EIF_REAL_64 *)(Current + RTWA(188, dtype));
				tr8_16 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
				ur8_1 = (EIF_REAL_64) (tr8_15 - tr8_16);
				tr8_18 = eif_min_real64 (tr8_17,ur8_1);
				
				eif_put_real_64_item(RTCW(loc16),2,tr8_18);
				RTHOOK(77);
				tr8_15 = eif_real_64_item(RTCW(loc16),3);
				tr8_16 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
				ur8_1 = tr8_16;
				tr8_17 = eif_max_real64 (tr8_15,ur8_1);
				tr8_15 = *(EIF_REAL_64 *)(Current + RTWA(189, dtype));
				tr8_16 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
				ur8_1 = (EIF_REAL_64) (tr8_15 - tr8_16);
				tr8_19 = eif_min_real64 (tr8_17,ur8_1);
				
				eif_put_real_64_item(RTCW(loc16),3,tr8_19);
				RTHOOK(78);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc27))(loc27);
			}
			RTHOOK(79);
			RTDBGAL(25, 0x10000000, 1, 0); /* loc25 */
			loc25++;
		}
		RTHOOK(80);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc29 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc29))(loc29)).it_b);
			if (tb4) break;
			RTHOOK(81);
			RTDBGAL(16, 0xF8000135, 0, 0); /* loc16 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc29))(loc29)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc16 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(82);
			tp2 = eif_pointer_item(RTCW(loc16),1);
			up1 = tp2;
			tr8_15 = eif_real_64_item(RTCW(loc16),2);
			ur8_1 = tr8_15;
			tr8_16 = eif_real_64_item(RTCW(loc16),3);
			ur8_2 = tr8_16;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(205, dtype))(Current, up1x, ur8_1x, ur8_2x);
			RTHOOK(83);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc29))(loc29);
		}
		RTHOOK(84);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(85);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(33);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}.c_agfstnode */
EIF_TYPED_VALUE F5_195 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_agfstnode";
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
	
	RTEAA(l_feature_name, 4, Current, 0, 1, 182);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(4, Current, 182);
	RTIV(Current, RTAL);
	Result = inline_F5_195 ((EIF_POINTER) arg1);
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

/* {PHYSICS_POST_PROCESSOR}.c_agnxtnode */
EIF_TYPED_VALUE F5_196 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_agnxtnode";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 2, 183);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(4, Current, 183);
	RTIV(Current, RTAL);
	Result = inline_F5_196 ((EIF_POINTER) arg1, (EIF_POINTER) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg2
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}.c_nd_coord_x */
EIF_TYPED_VALUE F5_197 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_nd_coord_x";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 1, 184);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(4, Current, 184);
	RTIV(Current, RTAL);
	Result = inline_F5_197 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}.c_nd_coord_y */
EIF_TYPED_VALUE F5_198 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "c_nd_coord_y";
	RTEX;
#define arg1 arg1x.it_p
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 1, 185);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(4, Current, 185);
	RTIV(Current, RTAL);
	Result = inline_F5_198 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}.c_set_node_pos */
void F5_199 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_set_node_pos";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_r8
#define arg3 arg3x.it_r8
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r8 = * (EIF_REAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU(SK_REAL64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 4, Current, 0, 3, 186);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(4, Current, 186);
	RTIV(Current, RTAL);
	inline_F5_199 ((EIF_POINTER) arg1, (EIF_REAL_64) arg2, (EIF_REAL_64) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {PHYSICS_POST_PROCESSOR}._invariant */
void F5_9204 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 4, Current, 0, 9203);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("positive_target_width", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(188, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("positive_target_height", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(189, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("non_negative_margin", Current);
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(190, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_boundary_force", Current);
	tb1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(191, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(191, dtype));
		tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_repulsion_force", Current);
	tb1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(192, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(192, dtype));
		tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("positive_iterations", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(193, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_damping", Current);
	tb1 = '\0';
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(194, dtype));
	tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	if ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, tr8_2)) {
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(194, dtype));
		tb1 = (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, (EIF_REAL_64) 1.0);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
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
