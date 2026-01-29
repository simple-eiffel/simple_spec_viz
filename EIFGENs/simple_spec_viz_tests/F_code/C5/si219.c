/*
 * Code for class SIMPLE_JSON_PATCH_COPY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si219.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_PATCH_COPY}.make */
void F247_3088 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("make", 246, Current, 0, 2, 3088);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("from_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("from_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("to_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("to_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	(nstcall = 0, F246_3082(Current, arg1));
	RTHOOK(6);
	(nstcall = 0, F246_3080(Current, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("from_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("path_set", EX_POST);
		tr1 = (nstcall = 0, F246_3077(Current));
		if ((EIF_BOOLEAN)(tr1 == arg2)) {
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

/* {SIMPLE_JSON_PATCH_COPY}.op */
EIF_REFERENCE F247_3089 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(327)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("op", 246, Current, 0, 0, 3089);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("copy",4,1668247673)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_empty", EX_POST);
		tb1 = (nstcall = 1, F666_4976(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

/* {SIMPLE_JSON_PATCH_COPY}.is_valid */
EIF_BOOLEAN F247_3090 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("is_valid", 246, Current, 1, 0, 3090);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	tr1 = (nstcall = 0, F246_3077(Current));
	tb3 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc1 = tr1;
		tb2 = EIF_TEST(loc1);
	}
	if (tb2) {
		tb2 = (nstcall = 1, F666_4976(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_COPY}.requires_value */
EIF_BOOLEAN F247_3091 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {SIMPLE_JSON_PATCH_COPY}.requires_from */
EIF_BOOLEAN F247_3092 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {SIMPLE_JSON_PATCH_COPY}.apply */
EIF_REFERENCE F247_3093 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,tr2);
	RTLR(9,Result);
	RTLR(10,tr3);
	RTLIU(11);
	
	RTEAA("apply", 246, Current, 5, 1, 3093);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("document_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("operation_is_valid", EX_PRE);
		tb1 = (nstcall = 0, F247_3090(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(242, 0x01).id, 242, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F1_29(RTCW(tr1)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tb1 = (nstcall = 1, F243_2969(RTCW(loc1), loc3));
		if (tb1) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F243_2970(RTCW(loc1), arg1));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(7);
			loc4 = loc2;
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				tr1 = RTLNS(eif_new_type(249, 0x01).id, 249, _OBJSIZ_3_0_0_0_0_0_0_0_);
				tr2 = (nstcall = 0, F246_3077(Current));
				(nstcall = -1, F250_3106(RTCW(tr1), tr2, loc4));
				loc5 = tr1;
				if ((EIF_TRUE)) {
					RTHOOK(9);
					tr1 = (nstcall = 1, F250_3111(loc5, arg1));
					Result = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(10);
					tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
					tr2 = (nstcall = 1, F1076_7660(RTMS_EX_H("Internal error creating add operation",37,1298238574)));
					(nstcall = -1, F20_390(RTCW(tr1), tr2));
					Result = (EIF_REFERENCE) tr1;
				}
			} else {
				RTHOOK(11);
				tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Source value not found at path: ",32,1759044640);
				tr3 = (nstcall = 1, F1076_7654(loc3));
				tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
				tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
				(nstcall = -1, F20_390(RTCW(tr1), tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(12);
			tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Invalid from path: ",19,1392593952);
			tr3 = (nstcall = 1, F1076_7654(loc3));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
			tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
			(nstcall = -1, F20_390(RTCW(tr1), tr2));
			Result = (EIF_REFERENCE) tr1;
		}
	} else {
		RTHOOK(13);
		tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = (nstcall = 1, F1076_7660(RTMS_EX_H("No from path specified for copy operation",41,763244142)));
		(nstcall = -1, F20_390(RTCW(tr1), tr2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_COPY}._invariant */
void F247_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	RTEAINV(l_feature_name, 218, Current, 1, 0);
	RTIT("valid_definition", Current);
	tb1 = (nstcall = 0, F247_3090(Current));
	tb2 = '\0';
	tb3 = '\0';
	tr1 = (nstcall = 0, F246_3077(Current));
	tb4 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb4) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc1 = tr1;
		tb3 = EIF_TEST(loc1);
	}
	if (tb3) {
		tb3 = (nstcall = 1, F666_4976(loc1));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if ((EIF_BOOLEAN)(tb1 == tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit219 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
