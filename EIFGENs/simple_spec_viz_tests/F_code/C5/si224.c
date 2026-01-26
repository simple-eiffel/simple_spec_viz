/*
 * Code for class SIMPLE_JSON_PATCH_REMOVE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si224.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_PATCH_REMOVE}.make */
void F252_3123 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 251, Current, 0, 1, 3130);
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
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F246_3080(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("path_set", EX_POST);
		tr1 = (nstcall = 0, F246_3077(Current));
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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

/* {SIMPLE_JSON_PATCH_REMOVE}.op */
EIF_REFERENCE F252_3124 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(319)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("op", 251, Current, 0, 0, 3131);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("remove",6,2060930149)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_empty", EX_POST);
		tb1 = (nstcall = 1, F667_4976(RTCW(Result)));
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

/* {SIMPLE_JSON_PATCH_REMOVE}.is_valid */
EIF_BOOLEAN F252_3125 (EIF_REFERENCE Current)
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
	
	RTEAA("is_valid", 251, Current, 0, 0, 3132);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F246_3077(Current));
	tb1 = (nstcall = 1, F667_4976(RTCW(tr1)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_REMOVE}.requires_value */
EIF_BOOLEAN F252_3126 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {SIMPLE_JSON_PATCH_REMOVE}.requires_from */
EIF_BOOLEAN F252_3127 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {SIMPLE_JSON_PATCH_REMOVE}.apply */
EIF_REFERENCE F252_3128 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,Result);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,loc5);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLIU(13);
	
	RTEAA("apply", 251, Current, 7, 1, 3135);
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
		tb1 = (nstcall = 0, F252_3125(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(3);
		RTCT("document_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_2);
		RTCK;
		RTHOOK(4);
		RTCT("path_not_empty", EX_PRE);
		tr1 = (nstcall = 0, F246_3077(Current));
		tb1 = (nstcall = 1, F667_4976(RTCW(tr1)));
		RTTE((EIF_BOOLEAN) !tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(242, 0x01).id, 242, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = (nstcall = 0, F246_3077(Current));
	tb1 = (nstcall = 1, F243_2969(RTCW(loc1), tr1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(7);
		tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("Invalid JSON Pointer path: ",27,1108276768);
		tr3 = (nstcall = 0, F246_3077(Current));
		tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr4));
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
		(nstcall = -1, F21_402(RTCW(tr1), tr2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		tr1 = (nstcall = 1, F243_2971(RTCW(loc1), arg1));
		loc2 = (EIF_REFERENCE) tr1;
		if (~in_assertion) {
			RTHOOK(9);
			RTCT("parent_navigation_succeeded", EX_CHECK);
			if ((!((EIF_BOOLEAN)(loc2 != NULL)) || ((EIF_BOOLEAN) 1))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 == NULL)) {
			RTHOOK(11);
			tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("Parent not found for path: ",27,1296457760);
			tr3 = (nstcall = 0, F246_3077(Current));
			tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr4));
			tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
			(nstcall = -1, F21_402(RTCW(tr1), tr2));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(12);
			tr1 = (nstcall = 1, F243_2968(RTCW(loc1)));
			loc3 = (EIF_REFERENCE) tr1;
			if (~in_assertion) {
				RTHOOK(13);
				RTCT("last_segment_extracted", EX_CHECK);
				tb1 = (nstcall = 1, F667_4976(RTCW(loc3)));
				if ((EIF_BOOLEAN) !tb1) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(14);
			tb1 = (nstcall = 1, F154_2063(RTCW(loc2)));
			if (tb1) {
				if (~in_assertion) {
					RTHOOK(15);
					RTCT("parent_confirmed_object", EX_CHECK);
					tb1 = (nstcall = 1, F154_2063(RTCW(loc2)));
					if (tb1) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(16);
				tr1 = (nstcall = 1, F154_2076(RTCW(loc2)));
				tb1 = (nstcall = 1, F155_2095(RTCW(tr1), loc3));
				if (tb1) {
					if (~in_assertion) {
						RTHOOK(17);
						RTCT("key_exists_in_object", EX_CHECK);
						tr1 = (nstcall = 1, F154_2076(RTCW(loc2)));
						tb1 = (nstcall = 1, F155_2095(RTCW(tr1), loc3));
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
					RTHOOK(18);
					tr1 = (nstcall = 0, F246_3077(Current));
					tr1 = (nstcall = 0, F252_3129(Current, arg1, tr1, loc3));
					loc5 = (EIF_REFERENCE) tr1;
					if (~in_assertion) {
						RTHOOK(19);
						RTCT("modified_document_created", EX_CHECK);
						if ((EIF_BOOLEAN)(loc5 != NULL)) {
							RTCK;
						} else {
							RTCF;
						}
					}
					RTHOOK(20);
					tr1 = (nstcall = 1, F243_2971(RTCW(loc1), loc5));
					loc6 = tr1;
					if (EIF_TEST(loc6)) {
						RTHOOK(21);
						tb1 = (nstcall = 1, F154_2063(loc6));
						if (tb1) {
							if (~in_assertion) {
								RTHOOK(22);
								RTCT("key_was_removed", EX_CHECK);
								tr1 = (nstcall = 1, F154_2076(loc6));
								tb1 = (nstcall = 1, F155_2095(RTCW(tr1), loc3));
								if ((EIF_BOOLEAN) !tb1) {
									RTCK;
								} else {
									RTCF;
								}
							}
						}
					}
					RTHOOK(23);
					tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_1_0_0_0_0_0_0_);
					(nstcall = -1, F21_401(RTCW(tr1), loc5));
					Result = (EIF_REFERENCE) tr1;
				} else {
					if (~in_assertion) {
						RTHOOK(24);
						RTCT("key_does_not_exist_in_object", EX_CHECK);
						tr1 = (nstcall = 1, F154_2076(RTCW(loc2)));
						tb1 = (nstcall = 1, F155_2095(RTCW(tr1), loc3));
						if ((EIF_BOOLEAN) !tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
					RTHOOK(25);
					tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_1_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("Property \'",10,1926064167);
					tr3 = (nstcall = 1, F1076_7654(RTCW(loc3)));
					tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
					tr2 = RTMS_EX_H("\' does not exist at path: ",26,1797217312);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr3))-1079])(tr3, tr2));
					tr3 = (nstcall = 0, F246_3077(Current));
					tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
					tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr4));
					tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
					(nstcall = -1, F21_402(RTCW(tr1), tr2));
					Result = (EIF_REFERENCE) tr1;
				}
			} else {
				RTHOOK(26);
				tb1 = (nstcall = 1, F154_2064(RTCW(loc2)));
				if (tb1) {
					if (~in_assertion) {
						RTHOOK(27);
						RTCT("parent_confirmed_array", EX_CHECK);
						tb1 = (nstcall = 1, F154_2064(RTCW(loc2)));
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
					RTHOOK(28);
					tb1 = (nstcall = 1, F1076_7632(RTCW(loc3)));
					if (tb1) {
						RTHOOK(29);
						ti4_1 = (nstcall = 1, F1076_7666(RTCW(loc3)));
						loc4 = (EIF_INTEGER_32) ti4_1;
						if (~in_assertion) {
							RTHOOK(30);
							RTCT("valid_integer_extracted", EX_CHECK);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L)))) {
								RTCK;
							} else {
								RTCF;
							}
						}
						RTHOOK(31);
						tb1 = '\0';
						if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
							tr1 = (nstcall = 1, F154_2078(RTCW(loc2)));
							ti4_1 = (nstcall = 1, F156_2131(RTCW(tr1)));
							tb1 = (EIF_BOOLEAN) (loc4 < ti4_1);
						}
						if (tb1) {
							if (~in_assertion) {
								RTHOOK(32);
								RTCT("index_in_bounds", EX_CHECK);
								tb1 = '\0';
								if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L))) {
									tr1 = (nstcall = 1, F154_2078(RTCW(loc2)));
									ti4_1 = (nstcall = 1, F156_2131(RTCW(tr1)));
									tb1 = (EIF_BOOLEAN) (loc4 < ti4_1);
								}
								if (tb1) {
									RTCK;
								} else {
									RTCF;
								}
							}
							RTHOOK(33);
							tr1 = (nstcall = 0, F246_3077(Current));
							tr1 = (nstcall = 0, F252_3130(Current, arg1, tr1, loc4));
							loc5 = (EIF_REFERENCE) tr1;
							RTHOOK(34);
							tr1 = (nstcall = 1, F243_2971(RTCW(loc1), loc5));
							loc7 = tr1;
							if (EIF_TEST(loc7)) {
								RTHOOK(35);
								tb1 = (nstcall = 1, F154_2064(loc7));
								if (tb1) {
									if (~in_assertion) {
										RTHOOK(36);
										RTCT("array_item_removed", EX_CHECK);
										tr1 = (nstcall = 1, F154_2078(loc7));
										ti4_1 = (nstcall = 1, F156_2131(RTCW(tr1)));
										tr1 = (nstcall = 1, F154_2078(RTCW(loc2)));
										ti4_2 = (nstcall = 1, F156_2131(RTCW(tr1)));
										if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)))) {
											RTCK;
										} else {
											RTCF;
										}
									}
								}
							}
							RTHOOK(37);
							tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_1_0_0_0_0_0_0_);
							(nstcall = -1, F21_401(RTCW(tr1), loc5));
							Result = (EIF_REFERENCE) tr1;
						} else {
							if (~in_assertion) {
								RTHOOK(38);
								RTCT("index_out_of_bounds", EX_CHECK);
								tb1 = '\01';
								if (!(EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L))) {
									tr1 = (nstcall = 1, F154_2078(RTCW(loc2)));
									ti4_1 = (nstcall = 1, F156_2131(RTCW(tr1)));
									tb1 = (EIF_BOOLEAN) (loc4 >= ti4_1);
								}
								if (tb1) {
									RTCK;
								} else {
									RTCF;
								}
							}
							RTHOOK(39);
							tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_1_0_0_0_0_0_0_);
							tr2 = RTMS_EX_H("Array index ",12,1175449120);
							tr3 = eif_out__i4_s1(loc4);
							tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
							tr2 = RTMS_EX_H(" out of bounds at path: ",24,1659305248);
							tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr3))-1079])(tr3, tr2));
							tr3 = (nstcall = 0, F246_3077(Current));
							tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
							tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr4));
							tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
							(nstcall = -1, F21_402(RTCW(tr1), tr2));
							Result = (EIF_REFERENCE) tr1;
						}
					} else {
						if (~in_assertion) {
							RTHOOK(40);
							RTCT("key_not_valid_integer", EX_CHECK);
							tb1 = (nstcall = 1, F1076_7632(RTCW(loc3)));
							if ((EIF_BOOLEAN) !tb1) {
								RTCK;
							} else {
								RTCF;
							}
						}
						RTHOOK(41);
						tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_1_0_0_0_0_0_0_);
						tr2 = RTMS_EX_H("Invalid array index \'",21,558005287);
						tr3 = (nstcall = 1, F1076_7654(RTCW(loc3)));
						tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
						tr2 = RTMS_EX_H("\' at path: ",11,676234272);
						tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr3))-1079])(tr3, tr2));
						tr3 = (nstcall = 0, F246_3077(Current));
						tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
						tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr4));
						tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
						(nstcall = -1, F21_402(RTCW(tr1), tr2));
						Result = (EIF_REFERENCE) tr1;
					}
				} else {
					if (~in_assertion) {
						RTHOOK(42);
						RTCT("parent_neither_object_nor_array", EX_CHECK);
						tb1 = '\0';
						tb2 = (nstcall = 1, F154_2063(RTCW(loc2)));
						if ((EIF_BOOLEAN) !tb2) {
							tb2 = (nstcall = 1, F154_2064(RTCW(loc2)));
							tb1 = (EIF_BOOLEAN) !tb2;
						}
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
					RTHOOK(43);
					tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_1_0_0_0_0_0_0_);
					tr2 = RTMS_EX_H("Parent is neither object nor array at path: ",44,459621664);
					tr3 = (nstcall = 0, F246_3077(Current));
					tr4 = (nstcall = 1, F1076_7654(RTCW(tr3)));
					tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr4));
					tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
					(nstcall = -1, F21_402(RTCW(tr1), tr2));
					Result = (EIF_REFERENCE) tr1;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(44);
		RTCT("success_means_modified", EX_POST);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_2_0_);
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(RTCW(Result));
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(45);
		RTCT("failure_means_error", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, F21_404(RTCW(Result)));
		if (tb2) {
			tb2 = (nstcall = 1, F21_408(RTCW(Result)));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(46);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_REMOVE}.clone_and_remove_from_object */
EIF_REFERENCE F252_3129 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg3);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc5);
	RTLR(6,loc3);
	RTLR(7,arg2);
	RTLR(8,loc4);
	RTLR(9,Result);
	RTLR(10,Current);
	RTLIU(11);
	
	RTEAA("clone_and_remove_from_object", 251, Current, 5, 3, 3136);
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
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg3)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
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
	loc5 = tr1;
	if (EIF_TEST(loc5)) {
		RTHOOK(7);
		tr1 = RTLNS(eif_new_type(242, 0x01).id, 242, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F1_29(RTCW(tr1)));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		tb1 = (nstcall = 1, F243_2969(RTCW(loc3), arg2));
		if (tb1) {
			RTHOOK(9);
			tr1 = (nstcall = 1, F243_2971(RTCW(loc3), loc5));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			tb1 = '\0';
			if ((EIF_BOOLEAN)(loc4 != NULL)) {
				tb2 = (nstcall = 1, F154_2063(RTCW(loc4)));
				tb1 = tb2;
			}
			if (tb1) {
				if (~in_assertion) {
					RTHOOK(11);
					RTCT("parent_is_object", EX_CHECK);
					tr1 = (nstcall = 1, F154_2076(RTCW(loc4)));
					if ((EIF_BOOLEAN)(tr1 != NULL)) {
						RTCK;
					} else {
						RTCF;
					}
				}
				if (~in_assertion) {
					RTHOOK(12);
					RTCT("key_exists_before_removal", EX_CHECK);
					tr1 = (nstcall = 1, F154_2076(RTCW(loc4)));
					tb1 = (nstcall = 1, F155_2095(RTCW(tr1), arg3));
					if (tb1) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(13);
				tr1 = (nstcall = 1, F154_2076(RTCW(loc4)));
				(nstcall = 1, F155_2121(RTCW(tr1), arg3));
				if (~in_assertion) {
					RTHOOK(14);
					RTCT("key_removed_successfully", EX_CHECK);
					tr1 = (nstcall = 1, F154_2076(RTCW(loc4)));
					tb1 = (nstcall = 1, F155_2095(RTCW(tr1), arg3));
					if ((EIF_BOOLEAN) !tb1) {
						RTCK;
					} else {
						RTCF;
					}
				}
			}
		}
		RTHOOK(15);
		Result = (EIF_REFERENCE) loc5;
	} else {
		RTHOOK(16);
		Result = (EIF_REFERENCE) arg1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_REMOVE}.clone_and_remove_from_array */
EIF_REFERENCE F252_3130 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
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
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,Result);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("clone_and_remove_from_array", 251, Current, 3, 3, 3137);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F154_2082(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(244, 0x01).id, 244, _OBJSIZ_8_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 1, F245_2995(RTCW(loc2), loc1));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(5);
		Result = (EIF_REFERENCE) loc3;
	} else {
		RTHOOK(6);
		Result = (EIF_REFERENCE) arg1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_PATCH_REMOVE}.extract_array_index */
EIF_INTEGER_32 F252_3131 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("extract_array_index", 251, Current, 1, 1, 3128);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_format", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("[",1,91)));
		tb2 = (nstcall = 1, F1083_7932(RTCW(arg1), tr1));
		if (tb2) {
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("]",1,93)));
			tb2 = (nstcall = 1, F1083_7933(RTCW(arg1), tr1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	tr1 = (nstcall = 1, F1085_8059(RTCW(arg1), ((EIF_INTEGER_32) 2L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tb1 = (nstcall = 1, F1076_7632(RTCW(loc1)));
	if (tb1) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F1076_7666(RTCW(loc1)));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {SIMPLE_JSON_PATCH_REMOVE}._invariant */
void F252_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 223, Current, 0, 0);
	RTIT("valid_definition", Current);
	tb1 = (nstcall = 0, F252_3125(Current));
	tr1 = (nstcall = 0, F246_3077(Current));
	tb2 = (nstcall = 1, F667_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) !tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit224 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
