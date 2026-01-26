/*
 * Code for class SIMPLE_JSON_ERROR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si17.h"
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

/* {SIMPLE_JSON_ERROR}.make */
void F20_389 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 19, Current, 0, 1, 394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("message_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("message_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("no_position", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(ti4_3 == ((EIF_INTEGER_32) 0L)))) {
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

/* {SIMPLE_JSON_ERROR}.make_with_position */
void F20_390 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("make_with_position", 19, Current, 0, 3, 395);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("message_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("json_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_position", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_) = (EIF_INTEGER_32) arg3;
	RTHOOK(6);
	(nstcall = 0, F20_400(Current, arg2, arg3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("message_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("position_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("line_positive", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("column_positive", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
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
}

/* {SIMPLE_JSON_ERROR}.message */
EIF_REFERENCE F20_391 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SIMPLE_JSON_ERROR}.line */
EIF_INTEGER_32 F20_392 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {SIMPLE_JSON_ERROR}.column */
EIF_INTEGER_32 F20_393 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
}


/* {SIMPLE_JSON_ERROR}.position */
EIF_INTEGER_32 F20_394 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
}


/* {SIMPLE_JSON_ERROR}.has_position */
EIF_BOOLEAN F20_395 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("has_position", 19, Current, 0, 0, 400);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)))) {
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

/* {SIMPLE_JSON_ERROR}.has_line_column */
EIF_BOOLEAN F20_396 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("has_line_column", 19, Current, 0, 0, 401);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))))) {
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

/* {SIMPLE_JSON_ERROR}.to_string */
EIF_REFERENCE F20_397 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("to_string", 19, Current, 0, 0, 402);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = -1, F1083_7899(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("contains_message", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F1076_7645(RTCW(Result), tr1));
		if (tb1) {
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

/* {SIMPLE_JSON_ERROR}.to_string_with_position */
EIF_REFERENCE F20_398 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("to_string_with_position", 19, Current, 0, 0, 403);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F20_396(Current));
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(Current);
		(nstcall = -1, F1083_7899(RTCW(tr1), tr2));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(" (line: ",8,730504736)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		tr1 = eif_out__i4_s1(ti4_1);
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr1)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr2));
		RTHOOK(5);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(", column: ",10,504609568)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tr1 = eif_out__i4_s1(ti4_1);
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr1)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr2));
		RTHOOK(7);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(")",1,41)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
	} else {
		RTHOOK(8);
		tb1 = (nstcall = 0, F20_395(Current));
		if (tb1) {
			RTHOOK(9);
			tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(Current);
			(nstcall = -1, F1083_7899(RTCW(tr1), tr2));
			Result = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(" (position: ",12,1385097760)));
			(nstcall = 1, F1085_8012(RTCW(Result), tr1));
			RTHOOK(11);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
			tr1 = eif_out__i4_s1(ti4_1);
			tr2 = (nstcall = 1, F1076_7660(RTCW(tr1)));
			(nstcall = 1, F1085_8012(RTCW(Result), tr2));
			RTHOOK(12);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(")",1,41)));
			(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		} else {
			RTHOOK(13);
			tr1 = (nstcall = 0, F20_397(Current));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ERROR}.to_detailed_string */
EIF_REFERENCE F20_399 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("to_detailed_string", 19, Current, 0, 0, 404);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = -1, F1083_7899(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tb1 = (nstcall = 0, F20_396(Current));
	if (tb1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012  Line: ",9,1525841952)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		tr1 = eif_out__i4_s1(ti4_1);
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr1)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr2));
		RTHOOK(5);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012  Column: ",11,1908207648)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tr1 = eif_out__i4_s1(ti4_1);
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr1)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr2));
		RTHOOK(7);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012  Position: ",13,2142342688)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
		tr1 = eif_out__i4_s1(ti4_1);
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr1)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr2));
	} else {
		RTHOOK(9);
		tb1 = (nstcall = 0, F20_395(Current));
		if (tb1) {
			RTHOOK(10);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012  Position: ",13,2142342688)));
			(nstcall = 1, F1085_8012(RTCW(Result), tr1));
			RTHOOK(11);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
			tr1 = eif_out__i4_s1(ti4_1);
			tr2 = (nstcall = 1, F1076_7660(RTCW(tr1)));
			(nstcall = 1, F1085_8012(RTCW(Result), tr2));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ERROR}.calculate_line_and_column */
void F20_400 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("calculate_line_and_column", 19, Current, 3, 2, 405);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("json_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (~in_assertion) {
		RTHOOK(6);
		RTCT("valid_index", EX_LINV);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 1L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (loc1 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("index_advances_toward_target", EX_LINV);
		if ((EIF_BOOLEAN) (loc1 <= arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("line_positive", EX_LINV);
		if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("column_positive", EX_LINV);
		if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("characters_examined", EX_LINV);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(11);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 >= arg2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (loc1 > ti4_1);
		}
		if (tb1) break;
		RTHOOK(12);
		tw1 = (nstcall = 1, F1085_7979(RTCW(arg1), loc1));
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(13);
			loc2++;
			RTHOOK(14);
			loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(15);
			tw1 = (nstcall = 1, F1085_7979(RTCW(arg1), loc1));
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
			if ((EIF_BOOLEAN)(tw1 == tw2)) {
			} else {
				RTHOOK(16);
				loc3++;
			}
		}
		RTHOOK(17);
		loc1++;
		if (~in_assertion) {
			RTHOOK(6);
			RTCT("valid_index", EX_LINV);
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 1L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
				tb1 = (EIF_BOOLEAN) (loc1 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(7);
			RTCT("index_advances_toward_target", EX_LINV);
			if ((EIF_BOOLEAN) (loc1 <= arg2)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(8);
			RTCT("line_positive", EX_LINV);
			if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 1L))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(9);
			RTCT("column_positive", EX_LINV);
			if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 1L))) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(10);
			RTCT("characters_examined", EX_LINV);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)) <= ti4_1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(18);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) loc2;
	RTHOOK(19);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) loc3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("line_positive", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("column_positive", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_ERROR}._invariant */
void F20_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 16, Current, 0, 0);
	RTIT("message_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("line_non_negative", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("column_non_negative", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("position_non_negative", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("position_implies_line_column", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F20_396(Current));
	if (tb2) {
		tb2 = (nstcall = 0, F20_395(Current));
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit17 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
