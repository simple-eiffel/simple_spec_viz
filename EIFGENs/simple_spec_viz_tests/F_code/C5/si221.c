/*
 * Code for class SIMPLE_JSON_PATCH_REPLACE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si221.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_PATCH_REPLACE}.make */
void F249_3100 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("make", 248, Current, 0, 2, 3102);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F246_3080(Current, arg1));
	RTHOOK(5);
	(nstcall = 0, F246_3081(Current, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("path_set", EX_POST);
		tr1 = (nstcall = 0, F246_3077(Current));
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 == arg2)) {
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
}

/* {SIMPLE_JSON_PATCH_REPLACE}.op */
EIF_REFERENCE F249_3101 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(325)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("op", 248, Current, 0, 0, 3103);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("replace",7,1413879909)));
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

/* {SIMPLE_JSON_PATCH_REPLACE}.is_valid */
EIF_BOOLEAN F249_3102 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_valid", 248, Current, 0, 0, 3104);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = (nstcall = 0, F246_3077(Current));
	tb2 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_REPLACE}.requires_value */
EIF_BOOLEAN F249_3103 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {SIMPLE_JSON_PATCH_REPLACE}.requires_from */
EIF_BOOLEAN F249_3104 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {SIMPLE_JSON_PATCH_REPLACE}.apply */
EIF_REFERENCE F249_3105 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLR(8,Result);
	RTLR(9,tr3);
	RTLR(10,tr4);
	RTLIU(11);
	
	RTEAA("apply", 248, Current, 4, 1, 3107);
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
		tb1 = (nstcall = 0, F249_3102(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(242, 0x01).id, 242, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F246_3077(Current));
	tb1 = (nstcall = 1, F243_2969(RTCW(loc1), tr1));
	if (tb1) {
		RTHOOK(5);
		tr1 = (nstcall = 1, F243_2970(RTCW(loc1), arg1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc3 = tr1;
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && EIF_TEST(loc3))) {
			RTHOOK(7);
			tr1 = RTLNS(eif_new_type(249, 0x01).id, 249, _OBJSIZ_3_0_0_0_0_0_0_0_);
			tr2 = (nstcall = 0, F246_3077(Current));
			(nstcall = -1, F250_3106(RTCW(tr1), tr2, loc3));
			loc4 = tr1;
			if ((EIF_TRUE)) {
				RTHOOK(8);
				tr1 = (nstcall = 1, F250_3111(loc4, arg1));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(9);
				tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr2 = (nstcall = 1, F1076_7660(RTMS_EX_H("Internal error in replace operation",35,517698926)));
				(nstcall = -1, F20_390(RTCW(tr1), tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(10);
			tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Target does not exist at path: ",31,726863648);
			tr3 = (nstcall = 0, F246_3077(Current));
			tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr4));
			tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
			(nstcall = -1, F20_390(RTCW(tr1), tr2));
			Result = (EIF_REFERENCE) tr1;
		}
	} else {
		RTHOOK(11);
		tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Invalid path: ",14,1159791136);
		tr3 = (nstcall = 0, F246_3077(Current));
		tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr4));
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
		(nstcall = -1, F20_390(RTCW(tr1), tr2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_REPLACE}._invariant */
void F249_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 220, Current, 0, 0);
	RTIT("valid_definition", Current);
	tb1 = (nstcall = 0, F249_3102(Current));
	tb2 = '\0';
	tr1 = (nstcall = 0, F246_3077(Current));
	tb3 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb2 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if ((EIF_BOOLEAN)(tb1 == tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit221 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
