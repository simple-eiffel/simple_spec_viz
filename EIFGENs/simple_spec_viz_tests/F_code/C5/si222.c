/*
 * Code for class SIMPLE_JSON_PATCH_ADD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si222.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_PATCH_ADD}.make */
void F250_3106 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("make", 249, Current, 0, 2, 3109);
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

/* {SIMPLE_JSON_PATCH_ADD}.op */
EIF_REFERENCE F250_3107 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(324)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("op", 249, Current, 0, 0, 3110);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("add",3,6382692)));
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

/* {SIMPLE_JSON_PATCH_ADD}.is_valid */
EIF_BOOLEAN F250_3108 (EIF_REFERENCE Current)
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
	
	RTEAA("is_valid", 249, Current, 0, 0, 3111);
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

/* {SIMPLE_JSON_PATCH_ADD}.requires_value */
EIF_BOOLEAN F250_3109 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {SIMPLE_JSON_PATCH_ADD}.requires_from */
EIF_BOOLEAN F250_3110 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {SIMPLE_JSON_PATCH_ADD}.apply */
EIF_REFERENCE F250_3111 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,Result);
	RTLR(7,loc2);
	RTLR(8,loc6);
	RTLR(9,loc3);
	RTLR(10,loc4);
	RTLR(11,tr3);
	RTLR(12,tr4);
	RTLIU(13);
	
	RTEAA("apply", 249, Current, 6, 1, 3114);
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
		tb1 = (nstcall = 0, F250_3108(Current));
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
	tb1 = '\01';
	tr1 = (nstcall = 0, F246_3077(Current));
	tr2 = (nstcall = 1, F1076_7660(RTMS_EX_H("/",1,47)));
	tb2 = (nstcall = 1, F1083_7921(RTCW(tr1), tr2));
	if (!tb2) {
		tr1 = (nstcall = 0, F246_3077(Current));
		tr2 = (nstcall = 1, F1076_7660(RTMS_EX_H("",0,0)));
		tb2 = (nstcall = 1, F1083_7921(RTCW(tr1), tr2));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTHOOK(6);
			tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
			(nstcall = -1, F20_389(RTCW(tr1), loc5));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = (nstcall = 1, F1076_7660(RTMS_EX_H("No value provided for add operation",35,1112195950)));
			(nstcall = -1, F20_390(RTCW(tr1), tr2));
			Result = (EIF_REFERENCE) tr1;
		}
	} else {
		RTHOOK(8);
		tr1 = (nstcall = 0, F246_3077(Current));
		tb1 = (nstcall = 1, F243_2969(RTCW(loc1), tr1));
		if (tb1) {
			RTHOOK(9);
			tr1 = (nstcall = 1, F243_2971(RTCW(loc1), arg1));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			loc6 = tr1;
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != NULL) && EIF_TEST(loc6))) {
				RTHOOK(11);
				tr1 = (nstcall = 1, F243_2968(RTCW(loc1)));
				loc3 = (EIF_REFERENCE) tr1;
				RTHOOK(12);
				tb1 = (nstcall = 1, F154_2063(RTCW(loc2)));
				if (tb1) {
					RTHOOK(13);
					tr1 = (nstcall = 0, F246_3077(Current));
					tr1 = (nstcall = 0, F250_3112(Current, arg1, tr1, loc3, loc6));
					loc4 = (EIF_REFERENCE) tr1;
					RTHOOK(14);
					tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
					(nstcall = -1, F20_389(RTCW(tr1), loc4));
					Result = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(15);
					tb1 = (nstcall = 1, F154_2064(RTCW(loc2)));
					if (tb1) {
						RTHOOK(16);
						tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("-",1,45)));
						tb1 = (nstcall = 1, F1083_7921(RTCW(loc3), tr1));
						if (tb1) {
							RTHOOK(17);
							tr1 = (nstcall = 0, F246_3077(Current));
							tr1 = (nstcall = 0, F250_3113(Current, arg1, tr1, loc6));
							loc4 = (EIF_REFERENCE) tr1;
							RTHOOK(18);
							tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
							(nstcall = -1, F20_389(RTCW(tr1), loc4));
							Result = (EIF_REFERENCE) tr1;
						} else {
							RTHOOK(19);
							tb1 = (nstcall = 0, F250_3115(Current, loc3));
							if (tb1) {
								RTHOOK(20);
								tr1 = (nstcall = 0, F246_3077(Current));
								ti4_1 = (nstcall = 1, F1076_7666(RTCW(loc3)));
								tr1 = (nstcall = 0, F250_3114(Current, arg1, tr1, ti4_1, loc6));
								loc4 = (EIF_REFERENCE) tr1;
								RTHOOK(21);
								tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
								(nstcall = -1, F20_389(RTCW(tr1), loc4));
								Result = (EIF_REFERENCE) tr1;
							} else {
								RTHOOK(22);
								tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
								tr2 = RTMS_EX_H("Invalid array index: ",21,558011936);
								tr3 = (nstcall = 1, F1076_7654(RTCW(loc3)));
								tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
								tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
								(nstcall = -1, F20_390(RTCW(tr1), tr2));
								Result = (EIF_REFERENCE) tr1;
							}
						}
					} else {
						RTHOOK(23);
						tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Parent is not a container at path: ",35,1094692896);
						tr3 = (nstcall = 0, F246_3077(Current));
						tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
						tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr4));
						tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
						(nstcall = -1, F20_390(RTCW(tr1), tr2));
						Result = (EIF_REFERENCE) tr1;
					}
				}
			} else {
				RTHOOK(24);
				tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr2 = RTMS_EX_H("Parent not found or value missing for path: ",44,1102811424);
				tr3 = (nstcall = 0, F246_3077(Current));
				tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
				tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr4));
				tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
				(nstcall = -1, F20_390(RTCW(tr1), tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(25);
			tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Invalid path: ",14,1159791136);
			tr3 = (nstcall = 0, F246_3077(Current));
			tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr4));
			tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
			(nstcall = -1, F20_390(RTCW(tr1), tr2));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_ADD}.clone_and_add_to_object */
EIF_REFERENCE F250_3112 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,arg4);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,Result);
	RTLR(8,Current);
	RTLIU(9);
	
	RTEAA("clone_and_add_to_object", 249, Current, 3, 4, 3115);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 1, F154_2082(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_8_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = (nstcall = 1, F245_2995(RTCW(loc2), loc1));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(7);
		Result = (EIF_REFERENCE) loc3;
	} else {
		RTHOOK(8);
		Result = (EIF_REFERENCE) arg1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_ADD}.clone_and_append_to_array */
EIF_REFERENCE F250_3113 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,Result);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("clone_and_append_to_array", 249, Current, 3, 3, 3116);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 1, F154_2082(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_8_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = (nstcall = 1, F245_2995(RTCW(loc2), loc1));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(6);
		Result = (EIF_REFERENCE) loc3;
	} else {
		RTHOOK(7);
		Result = (EIF_REFERENCE) arg1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_ADD}.clone_and_insert_into_array */
EIF_REFERENCE F250_3114 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,Result);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("clone_and_insert_into_array", 249, Current, 3, 4, 3117);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 1, F154_2082(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_8_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = (nstcall = 1, F245_2995(RTCW(loc2), loc1));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(7);
		Result = (EIF_REFERENCE) loc3;
	} else {
		RTHOOK(8);
		Result = (EIF_REFERENCE) arg1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_ADD}.is_valid_array_index */
EIF_BOOLEAN F250_3115 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_valid_array_index", 249, Current, 0, 1, 3118);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("str_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1076_7632(RTCW(arg1)));
	if (tb2) {
		ti4_1 = (nstcall = 1, F1076_7666(RTCW(arg1)));
		tb1 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_ADD}._invariant */
void F250_1 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 221, Current, 0, 0);
	RTIT("valid_definition", Current);
	tb1 = (nstcall = 0, F250_3108(Current));
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

void EIF_Minit222 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
