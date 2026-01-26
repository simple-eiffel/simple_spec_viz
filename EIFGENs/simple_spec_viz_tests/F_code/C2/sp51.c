/*
 * Code for class SPEC_LOADER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sp51.h"
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

/* {SPEC_LOADER}.make */
void F54_946 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make", 53, Current, 0, 0, 968);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(244, 1).id);
	(nstcall = -1, F1_29(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("json_parser_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
}

/* {SPEC_LOADER}.json_parser */
EIF_REFERENCE F54_947 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SPEC_LOADER}.last_error */
EIF_REFERENCE F54_948 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SPEC_LOADER}.load_from_file */
EIF_REFERENCE F54_949 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("load_from_file", 53, Current, 1, 1, 971);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1076_7660(RTCW(arg1)));
	tr2 = (nstcall = 1, F245_3003(RTCW(tr1), tr2));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(6);
		tr1 = (nstcall = 0, F54_951(Current, loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F245_3009(RTCW(tr1)));
		if (tb1) {
			RTHOOK(8);
			tr1 = RTMS_EX_H("Failed to parse JSON file: ",27,463242784);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg1));
			tr1 = RTMS_EX_H(" - ",3,2108704);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
			tr2 = *(EIF_REFERENCE *)(Current);
			tr3 = (nstcall = 1, F245_3013(RTCW(tr2)));
			tr2 = (nstcall = 1, F1076_7654(RTCW(tr3)));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, tr2));
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(9);
			tr1 = RTMS_EX_H("Failed to parse JSON file or file not found: ",45,1590977824);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg1));
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("error_on_failure", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((!((EIF_BOOLEAN)(Result == NULL)) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {SPEC_LOADER}.load_from_string */
EIF_REFERENCE F54_950 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,Result);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("load_from_string", 53, Current, 2, 1, 972);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("json_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("json_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = (nstcall = 1, F1076_7660(RTCW(arg1)));
	(nstcall = -1, F1083_7899(RTCW(tr1), tr2));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F245_2995(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		tr1 = (nstcall = 0, F54_951(Current, loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F245_3009(RTCW(tr1)));
		if (tb1) {
			RTHOOK(9);
			tr1 = RTMS_EX_H("Failed to parse JSON - ",23,80898592);
			tr2 = *(EIF_REFERENCE *)(Current);
			tr3 = (nstcall = 1, F245_3013(RTCW(tr2)));
			tr2 = (nstcall = 1, F1076_7654(RTCW(tr3)));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(10);
			tr1 = RTMS_EX_H("Failed to parse JSON",20,1032745550);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("error_on_failure", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((!((EIF_BOOLEAN)(Result == NULL)) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
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
	return Result;
}

/* {SPEC_LOADER}.parse_document */
EIF_REFERENCE F54_951 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,loc2);
	RTLR(5,loc5);
	RTLR(6,loc3);
	RTLR(7,Result);
	RTLR(8,loc6);
	RTLR(9,Current);
	RTLR(10,loc7);
	RTLR(11,loc8);
	RTLR(12,loc9);
	RTLIU(13);
	
	RTEAA("parse_document", 53, Current, 9, 1, 973);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, F154_2063(RTCW(arg1)));
	if (tb1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F154_2076(RTCW(arg1)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("name",4,1851878757)));
		tr1 = (nstcall = 1, F155_2097(RTCW(loc1), tr1));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(5);
			tr1 = (nstcall = 1, F1076_7654(loc4));
			loc2 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(6);
			tr1 = RTMS_EX_H("Unnamed",7,1683977572);
			loc2 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(7);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("version",7,1397649262)));
		tr1 = (nstcall = 1, F155_2097(RTCW(loc1), tr1));
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTHOOK(8);
			tr1 = (nstcall = 1, F1076_7654(loc5));
			loc3 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(9);
			tr1 = RTMS_EX_H("0.1.0",5,775343664);
			loc3 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_6_0_0_0_0_0_0_0_);
		(nstcall = -1, F48_868(RTCW(tr1), loc2, loc3));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("states",6,1862008179)));
		tr1 = (nstcall = 1, F155_2103(RTCW(loc1), tr1));
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			RTHOOK(12);
			(nstcall = 0, F54_952(Current, loc6, Result));
		}
		RTHOOK(13);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("transitions",11,1045225075)));
		tr1 = (nstcall = 1, F155_2103(RTCW(loc1), tr1));
		loc7 = tr1;
		if (EIF_TEST(loc7)) {
			RTHOOK(14);
			(nstcall = 0, F54_953(Current, loc7, Result));
		}
		RTHOOK(15);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("screens",7,1796104051)));
		tr1 = (nstcall = 1, F155_2103(RTCW(loc1), tr1));
		loc8 = tr1;
		if (EIF_TEST(loc8)) {
			RTHOOK(16);
			(nstcall = 0, F54_954(Current, loc8, Result));
		}
		RTHOOK(17);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("traceability",12,820470393)));
		tr1 = (nstcall = 1, F155_2102(RTCW(loc1), tr1));
		loc9 = tr1;
		if (EIF_TEST(loc9)) {
			RTHOOK(18);
			(nstcall = 0, F54_956(Current, loc9, Result));
		}
	} else {
		RTHOOK(19);
		tr1 = RTMS_EX_H("Root JSON value must be an object",33,1417929076);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {SPEC_LOADER}.parse_states */
void F54_952 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc11);
	RTLR(6,loc5);
	RTLR(7,tr2);
	RTLR(8,loc12);
	RTLR(9,loc6);
	RTLR(10,loc13);
	RTLR(11,loc7);
	RTLR(12,loc14);
	RTLR(13,loc10);
	RTLR(14,loc4);
	RTLR(15,loc15);
	RTLR(16,loc16);
	RTLR(17,Current);
	RTLR(18,loc17);
	RTLIU(19);
	
	RTEAA("parse_states", 53, Current, 17, 2, 974);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F156_2131(RTCW(arg1)));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		tr1 = (nstcall = 1, F156_2133(RTCW(arg1), loc1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tb1 = (nstcall = 1, F154_2063(RTCW(loc2)));
		if (tb1) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F154_2076(RTCW(loc2)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("id",2,26980)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc11 = tr1;
			if (EIF_TEST(loc11)) {
				RTHOOK(9);
				tr1 = (nstcall = 1, F1076_7654(loc11));
				loc5 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(10);
				tr1 = RTMS_EX_H("S-",2,21293);
				tr2 = eif_out__i4_s1(loc1);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
				loc5 = (EIF_REFERENCE) tr2;
			}
			RTHOOK(11);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("name",4,1851878757)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc12 = tr1;
			if (EIF_TEST(loc12)) {
				RTHOOK(12);
				tr1 = (nstcall = 1, F1076_7654(loc12));
				loc6 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(13);
				tr1 = RTMS_EX_H("state_",6,1862008159);
				tr2 = eif_out__i4_s1(loc1);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
				loc6 = (EIF_REFERENCE) tr2;
			}
			RTHOOK(14);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("description",11,801826414)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc13 = tr1;
			if (EIF_TEST(loc13)) {
				RTHOOK(15);
				tr1 = (nstcall = 1, F1076_7654(loc13));
				loc7 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(16);
				tr1 = RTMS_EX_H("",0,0);
				loc7 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(17);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("is_initial",10,153132140)));
			tb1 = (nstcall = 1, F155_2101(RTCW(loc3), tr1));
			loc8 = (EIF_BOOLEAN) tb1;
			RTHOOK(18);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("is_final",8,1880034924)));
			tb1 = (nstcall = 1, F155_2101(RTCW(loc3), tr1));
			loc9 = (EIF_BOOLEAN) tb1;
			RTHOOK(19);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("screen",6,2146107246)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc14 = tr1;
			if (EIF_TEST(loc14)) {
				RTHOOK(20);
				tr1 = (nstcall = 1, F1076_7654(loc14));
				loc10 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(21);
				loc10 = (EIF_REFERENCE) NULL;
			}
			RTHOOK(22);
			tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
			(nstcall = -1, F52_920(RTCW(tr1), loc5, loc6, loc7));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(23);
			(nstcall = 1, F52_930(RTCW(loc4), loc8));
			RTHOOK(24);
			(nstcall = 1, F52_931(RTCW(loc4), loc9));
			RTHOOK(25);
			loc15 = loc10;
			if (EIF_TEST(loc15)) {
				RTHOOK(26);
				(nstcall = 1, F52_932(RTCW(loc4), loc15));
			}
			RTHOOK(27);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("entry_actions",13,607752819)));
			tr1 = (nstcall = 1, F155_2103(RTCW(loc3), tr1));
			loc16 = tr1;
			if (EIF_TEST(loc16)) {
				RTHOOK(28);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_4_);
				(nstcall = 0, F54_957(Current, loc16, tr1));
			}
			RTHOOK(29);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("exit_actions",12,1580135027)));
			tr1 = (nstcall = 1, F155_2103(RTCW(loc3), tr1));
			loc17 = tr1;
			if (EIF_TEST(loc17)) {
				RTHOOK(30);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_5_);
				(nstcall = 0, F54_957(Current, loc17, tr1));
			}
			RTHOOK(31);
			(nstcall = 1, F48_883(RTCW(arg2), loc4));
		}
		RTHOOK(32);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {SPEC_LOADER}.parse_transitions */
void F54_953 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc10);
	RTLR(6,loc5);
	RTLR(7,tr2);
	RTLR(8,loc11);
	RTLR(9,loc6);
	RTLR(10,loc12);
	RTLR(11,loc7);
	RTLR(12,loc13);
	RTLR(13,loc8);
	RTLR(14,loc14);
	RTLR(15,loc9);
	RTLR(16,loc4);
	RTLR(17,loc15);
	RTLR(18,Current);
	RTLIU(19);
	
	RTEAA("parse_transitions", 53, Current, 15, 2, 975);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F156_2131(RTCW(arg1)));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		tr1 = (nstcall = 1, F156_2133(RTCW(arg1), loc1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tb1 = (nstcall = 1, F154_2063(RTCW(loc2)));
		if (tb1) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F154_2076(RTCW(loc2)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("id",2,26980)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc10 = tr1;
			if (EIF_TEST(loc10)) {
				RTHOOK(9);
				tr1 = (nstcall = 1, F1076_7654(loc10));
				loc5 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(10);
				tr1 = RTMS_EX_H("T-",2,21549);
				tr2 = eif_out__i4_s1(loc1);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
				loc5 = (EIF_REFERENCE) tr2;
			}
			RTHOOK(11);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("event",5,1987134580)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc11 = tr1;
			if (EIF_TEST(loc11)) {
				RTHOOK(12);
				tr1 = (nstcall = 1, F1076_7654(loc11));
				loc6 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(13);
				tr1 = RTMS_EX_H("event_",6,1901217887);
				tr2 = eif_out__i4_s1(loc1);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
				loc6 = (EIF_REFERENCE) tr2;
			}
			RTHOOK(14);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("from",4,1718775661)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc12 = tr1;
			if (EIF_TEST(loc12)) {
				RTHOOK(15);
				tr1 = (nstcall = 1, F1076_7654(loc12));
				loc7 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(16);
				tr1 = RTMS_EX_H("",0,0);
				loc7 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(17);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("to",2,29807)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc13 = tr1;
			if (EIF_TEST(loc13)) {
				RTHOOK(18);
				tr1 = (nstcall = 1, F1076_7654(loc13));
				loc8 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(19);
				tr1 = RTMS_EX_H("",0,0);
				loc8 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(20);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("label",5,1634667884)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc14 = tr1;
			if (EIF_TEST(loc14)) {
				RTHOOK(21);
				tr1 = (nstcall = 1, F1076_7654(loc14));
				loc9 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(22);
				loc9 = (EIF_REFERENCE) loc6;
			}
			RTHOOK(23);
			tr1 = RTLNS(eif_new_type(42, 0x01).id, 42, _OBJSIZ_6_0_0_0_0_0_0_0_);
			(nstcall = -1, F43_799(RTCW(tr1), loc5, loc6, loc7, loc8, loc9));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(24);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("requirements",12,1331203955)));
			tr1 = (nstcall = 1, F155_2103(RTCW(loc3), tr1));
			loc15 = tr1;
			if (EIF_TEST(loc15)) {
				RTHOOK(25);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_5_);
				(nstcall = 0, F54_957(Current, loc15, tr1));
			}
			RTHOOK(26);
			(nstcall = 1, F48_884(RTCW(arg2), loc4));
		}
		RTHOOK(27);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
}

/* {SPEC_LOADER}.parse_screens */
void F54_954 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(16);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc8);
	RTLR(6,loc5);
	RTLR(7,tr2);
	RTLR(8,loc9);
	RTLR(9,loc6);
	RTLR(10,loc10);
	RTLR(11,loc7);
	RTLR(12,loc4);
	RTLR(13,loc11);
	RTLR(14,Current);
	RTLR(15,loc12);
	RTLIU(16);
	
	RTEAA("parse_screens", 53, Current, 12, 2, 976);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F156_2131(RTCW(arg1)));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		tr1 = (nstcall = 1, F156_2133(RTCW(arg1), loc1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tb1 = (nstcall = 1, F154_2063(RTCW(loc2)));
		if (tb1) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F154_2076(RTCW(loc2)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("id",2,26980)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc8 = tr1;
			if (EIF_TEST(loc8)) {
				RTHOOK(9);
				tr1 = (nstcall = 1, F1076_7654(loc8));
				loc5 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(10);
				tr1 = RTMS_EX_H("SCR-",4,1396920877);
				tr2 = eif_out__i4_s1(loc1);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
				loc5 = (EIF_REFERENCE) tr2;
			}
			RTHOOK(11);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("name",4,1851878757)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc9 = tr1;
			if (EIF_TEST(loc9)) {
				RTHOOK(12);
				tr1 = (nstcall = 1, F1076_7654(loc9));
				loc6 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(13);
				tr1 = RTMS_EX_H("Screen ",7,722335264);
				tr2 = eif_out__i4_s1(loc1);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
				loc6 = (EIF_REFERENCE) tr2;
			}
			RTHOOK(14);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("description",11,801826414)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc10 = tr1;
			if (EIF_TEST(loc10)) {
				RTHOOK(15);
				tr1 = (nstcall = 1, F1076_7654(loc10));
				loc7 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(16);
				tr1 = RTMS_EX_H("",0,0);
				loc7 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(17);
			tr1 = RTLNS(eif_new_type(52, 0x01).id, 52, _OBJSIZ_5_0_0_0_0_0_0_0_);
			(nstcall = -1, F53_935(RTCW(tr1), loc5, loc6, loc7));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(18);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("widgets",7,1707135091)));
			tr1 = (nstcall = 1, F155_2103(RTCW(loc3), tr1));
			loc11 = tr1;
			if (EIF_TEST(loc11)) {
				RTHOOK(19);
				(nstcall = 0, F54_955(Current, loc11, loc4));
			}
			RTHOOK(20);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("requirements",12,1331203955)));
			tr1 = (nstcall = 1, F155_2103(RTCW(loc3), tr1));
			loc12 = tr1;
			if (EIF_TEST(loc12)) {
				RTHOOK(21);
				tr1 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_4_);
				(nstcall = 0, F54_957(Current, loc12, tr1));
			}
			RTHOOK(22);
			(nstcall = 1, F48_885(RTCW(arg2), loc4));
		}
		RTHOOK(23);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
}

/* {SPEC_LOADER}.parse_widgets */
void F54_955 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc12);
	RTLR(6,loc5);
	RTLR(7,loc13);
	RTLR(8,loc6);
	RTLR(9,tr2);
	RTLR(10,loc14);
	RTLR(11,loc7);
	RTLR(12,loc15);
	RTLR(13,loc4);
	RTLR(14,Current);
	RTLIU(15);
	
	RTEAA("parse_widgets", 53, Current, 15, 2, 977);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("screen_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F156_2131(RTCW(arg1)));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		tr1 = (nstcall = 1, F156_2133(RTCW(arg1), loc1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tb1 = (nstcall = 1, F154_2063(RTCW(loc2)));
		if (tb1) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F154_2076(RTCW(loc2)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("type",4,1954115685)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc12 = tr1;
			if (EIF_TEST(loc12)) {
				RTHOOK(9);
				tr1 = (nstcall = 1, F1076_7654(loc12));
				loc5 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(10);
				tr1 = RTMS_EX_H("text",4,1952807028);
				loc5 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(11);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("id",2,26980)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc13 = tr1;
			if (EIF_TEST(loc13)) {
				RTHOOK(12);
				tr1 = (nstcall = 1, F1076_7654(loc13));
				loc6 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(13);
				tr1 = RTMS_EX_H("widget_",7,1707135071);
				tr2 = eif_out__i4_s1(loc1);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
				loc6 = (EIF_REFERENCE) tr2;
			}
			RTHOOK(14);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("label",5,1634667884)));
			tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
			loc14 = tr1;
			if (EIF_TEST(loc14)) {
				RTHOOK(15);
				tr1 = (nstcall = 1, F1076_7654(loc14));
				loc7 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(16);
				tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("placeholder",11,55840882)));
				tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
				loc15 = tr1;
				if (EIF_TEST(loc15)) {
					RTHOOK(17);
					tr1 = (nstcall = 1, F1076_7654(loc15));
					loc7 = (EIF_REFERENCE) tr1;
				} else {
					RTHOOK(18);
					tr1 = RTMS_EX_H("",0,0);
					loc7 = (EIF_REFERENCE) tr1;
				}
			}
			RTHOOK(19);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("x",1,120)));
			ti8_1 = (nstcall = 1, F155_2098(RTCW(loc3), tr1));
			ti4_2 = (EIF_INTEGER_32) ti8_1;
			loc8 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(20);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("y",1,121)));
			ti8_1 = (nstcall = 1, F155_2098(RTCW(loc3), tr1));
			ti4_2 = (EIF_INTEGER_32) ti8_1;
			loc9 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(21);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("width",5,1769105000)));
			ti8_1 = (nstcall = 1, F155_2098(RTCW(loc3), tr1));
			ti4_2 = (EIF_INTEGER_32) ti8_1;
			loc10 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(22);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("height",6,1973632628)));
			ti8_1 = (nstcall = 1, F155_2098(RTCW(loc3), tr1));
			ti4_2 = (EIF_INTEGER_32) ti8_1;
			loc11 = (EIF_INTEGER_32) ti4_2;
			RTHOOK(23);
			tr1 = RTLNS(eif_new_type(45, 0x01).id, 45, _OBJSIZ_3_0_0_4_0_0_0_0_);
			(nstcall = -1, F46_839(RTCW(tr1), loc5, loc6, loc7));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(24);
			(nstcall = 1, F46_853(RTCW(loc4), loc8, loc9));
			RTHOOK(25);
			(nstcall = 1, F46_854(RTCW(loc4), loc10, loc11));
			RTHOOK(26);
			(nstcall = 1, F53_944(RTCW(arg2), loc4));
		}
		RTHOOK(27);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
}

/* {SPEC_LOADER}.parse_traceability */
void F54_956 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc4);
	RTLR(6,loc2);
	RTLR(7,tr2);
	RTLR(8,loc5);
	RTLR(9,Current);
	RTLR(10,loc6);
	RTLR(11,loc7);
	RTLR(12,loc8);
	RTLIU(13);
	
	RTEAA("parse_traceability", 53, Current, 8, 2, 978);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("requirements_to_states",22,1418967923)));
	tr1 = (nstcall = 1, F155_2102(RTCW(arg1), tr1));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F155_2123(loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = (nstcall = 1, F778_5439(RTCW(loc1)));
		loc4 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, F421_4812(loc4));
			if (tb1) break;
			RTHOOK(6);
			tr1 = (nstcall = 1, F421_4803(loc4));
			tr2 = (nstcall = 1, F1076_7654(RTCW(tr1)));
			loc2 = (EIF_REFERENCE) tr2;
			RTHOOK(7);
			tr1 = (nstcall = 1, F421_4803(loc4));
			tr1 = (nstcall = 1, F155_2103(loc3, tr1));
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_5_);
				tr2 = (nstcall = 0, F54_958(Current, loc5));
				(nstcall = 1, F50_902(RTCW(tr1), loc2, tr2));
			}
			RTHOOK(9);
			(nstcall = 1, F421_4818(loc4));
		}
	}
	RTHOOK(10);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("states_to_screens",17,483713651)));
	tr1 = (nstcall = 1, F155_2102(RTCW(arg1), tr1));
	loc6 = tr1;
	if (EIF_TEST(loc6)) {
		RTHOOK(11);
		tr1 = (nstcall = 1, F155_2123(loc6));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		tr1 = (nstcall = 1, F778_5439(RTCW(loc1)));
		loc7 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb2 = (nstcall = 1, F421_4812(loc7));
			if (tb2) break;
			RTHOOK(13);
			tr1 = (nstcall = 1, F421_4803(loc7));
			tr2 = (nstcall = 1, F1076_7654(RTCW(tr1)));
			loc2 = (EIF_REFERENCE) tr2;
			RTHOOK(14);
			tr1 = (nstcall = 1, F421_4803(loc7));
			tr1 = (nstcall = 1, F155_2097(loc6, tr1));
			loc8 = tr1;
			if (EIF_TEST(loc8)) {
				RTHOOK(15);
				tr1 = *(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_5_);
				tr2 = (nstcall = 1, F1076_7654(loc8));
				(nstcall = 1, F50_903(RTCW(tr1), loc2, tr2));
			}
			RTHOOK(16);
			(nstcall = 1, F421_4818(loc7));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {SPEC_LOADER}.parse_string_list */
void F54_957 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("parse_string_list", 53, Current, 2, 2, 979);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F156_2131(RTCW(arg1)));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(5);
		tr1 = (nstcall = 1, F156_2133(RTCW(arg1), loc1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tb1 = (nstcall = 1, F154_2058(RTCW(loc2)));
		if (tb1) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F154_2065(RTCW(loc2)));
			tr2 = (nstcall = 1, F1076_7654(RTCW(tr1)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(arg2))-663])(arg2, tr2));
		}
		RTHOOK(8);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SPEC_LOADER}.array_to_string_list */
EIF_REFERENCE F54_958 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("array_to_string_list", 53, Current, 0, 1, 980);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = (nstcall = 1, F156_2131(RTCW(arg1)));
	(nstcall = -1, F867_5785(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 0, F54_957(Current, arg1, Result));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SPEC_LOADER}._invariant */
void F54_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 50, Current, 0, 0);
	RTIT("json_parser_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit51 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
