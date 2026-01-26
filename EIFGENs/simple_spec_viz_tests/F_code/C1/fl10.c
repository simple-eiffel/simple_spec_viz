/*
 * Code for class FLOWCHART_BUILDER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fl10.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FLOWCHART_BUILDER}.make */
void F13_255 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("make", 12, Current, 0, 1, 253);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
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
	tr1 = RTLNSMART(eif_new_type(29, 1).id);
	tr2 = RTMS_EX_H("Flowchart",9,1878286452);
	(nstcall = -1, F30_518(RTCW(tr1), tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	tr1 = RTMS_EX_H("rankdir",7,1389421170);
	tr3 = RTMS_EX_H("TB",2,21570);
	(nstcall = 1, F12_250(RTCW(tr2), tr1, tr3));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	tr1 = RTMS_EX_H("splines",7,1889313395);
	tr3 = RTMS_EX_H("ortho",5,1921084015);
	(nstcall = 1, F12_250(RTCW(tr2), tr1, tr3));
	RTHOOK(6);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("renderer_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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

/* {FLOWCHART_BUILDER}.renderer */
EIF_REFERENCE F13_256 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {FLOWCHART_BUILDER}.graph */
EIF_REFERENCE F13_257 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FLOWCHART_BUILDER}.last_node_id */
EIF_REFERENCE F13_258 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {FLOWCHART_BUILDER}.has_decision */
EIF_BOOLEAN F13_259 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_decision", 12, Current, 0, 0, 257);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FLOWCHART_BUILDER}.start */
EIF_REFERENCE F13_260 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("start", 12, Current, 2, 1, 258);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("label_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = RTMS_EX_H("start",5,1953426548);
	tr2 = (nstcall = 0, F13_275(Current, tr2));
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_542(RTCW(tr2), loc2));
	loc1 = (EIF_REFERENCE) tr3;
	RTHOOK(4);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("label",5,1634667884);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, arg1));
	RTHOOK(5);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("shape",5,1752099429);
	tr4 = RTMS_EX_H("box",3,6451064);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(6);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("style",5,1954997861);
	tr4 = RTMS_EX_H("rounded,filled",14,76887140);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(7);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("fillcolor",9,204136562);
	tr4 = RTMS_EX_H("lightgreen",10,1388687470);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(8);
	(nstcall = 0, F13_276(Current, loc2));
	RTHOOK(9);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc2;
	RTHOOK(10);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("node_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {FLOWCHART_BUILDER}.end_node */
EIF_REFERENCE F13_261 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("end_node", 12, Current, 2, 1, 259);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("label_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = RTMS_EX_H("end",3,6647396);
	tr2 = (nstcall = 0, F13_275(Current, tr2));
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_542(RTCW(tr2), loc2));
	loc1 = (EIF_REFERENCE) tr3;
	RTHOOK(4);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("label",5,1634667884);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, arg1));
	RTHOOK(5);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("shape",5,1752099429);
	tr4 = RTMS_EX_H("box",3,6451064);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(6);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("style",5,1954997861);
	tr4 = RTMS_EX_H("rounded,filled",14,76887140);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(7);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("fillcolor",9,204136562);
	tr4 = RTMS_EX_H("lightcoral",10,1339176044);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(8);
	(nstcall = 0, F13_276(Current, loc2));
	RTHOOK(9);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc2;
	RTHOOK(10);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("node_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {FLOWCHART_BUILDER}.process */
EIF_REFERENCE F13_262 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("process", 12, Current, 2, 1, 260);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("label_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = RTMS_EX_H("proc",4,1886547811);
	tr2 = (nstcall = 0, F13_275(Current, tr2));
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_542(RTCW(tr2), loc2));
	loc1 = (EIF_REFERENCE) tr3;
	RTHOOK(4);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("label",5,1634667884);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, arg1));
	RTHOOK(5);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("shape",5,1752099429);
	tr4 = RTMS_EX_H("box",3,6451064);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(6);
	(nstcall = 0, F13_276(Current, loc2));
	RTHOOK(7);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc2;
	RTHOOK(8);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("node_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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

/* {FLOWCHART_BUILDER}.decision */
EIF_REFERENCE F13_263 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,loc1);
	RTLR(8,tr3);
	RTLR(9,tr4);
	RTLR(10,Result);
	RTLIU(11);
	
	RTEAA("decision", 12, Current, 2, 3, 261);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("label_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("yes_label_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("no_label_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(4);
	tr2 = RTMS_EX_H("dec",3,6579555);
	tr2 = (nstcall = 0, F13_275(Current, tr2));
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_542(RTCW(tr2), loc2));
	loc1 = (EIF_REFERENCE) tr3;
	RTHOOK(6);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("label",5,1634667884);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, arg1));
	RTHOOK(7);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("shape",5,1752099429);
	tr4 = RTMS_EX_H("diamond",7,835335268);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(8);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("style",5,1954997861);
	tr4 = RTMS_EX_H("filled",6,2020389732);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(9);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("fillcolor",9,204136562);
	tr4 = RTMS_EX_H("lightyellow",11,1323013239);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(10);
	(nstcall = 0, F13_276(Current, loc2));
	RTHOOK(11);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) loc2;
	RTHOOK(12);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg2;
	RTHOOK(13);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) arg3;
	RTHOOK(14);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc2;
	RTHOOK(15);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("node_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {FLOWCHART_BUILDER}.io_node */
EIF_REFERENCE F13_264 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("io_node", 12, Current, 2, 1, 262);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("label_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = RTMS_EX_H("io",2,26991);
	tr2 = (nstcall = 0, F13_275(Current, tr2));
	loc2 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_542(RTCW(tr2), loc2));
	loc1 = (EIF_REFERENCE) tr3;
	RTHOOK(4);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("label",5,1634667884);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, arg1));
	RTHOOK(5);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr3 = RTMS_EX_H("shape",5,1752099429);
	tr4 = RTMS_EX_H("parallelogram",13,1985545581);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	RTHOOK(6);
	(nstcall = 0, F13_276(Current, loc2));
	RTHOOK(7);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc2;
	RTHOOK(8);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("node_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_523(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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

/* {FLOWCHART_BUILDER}.link */
EIF_REFERENCE F13_265 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("link", 12, Current, 1, 2, 263);
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
		RTCT("to_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_524(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_543(RTCW(tr2), arg1, arg2));
	loc1 = (EIF_REFERENCE) tr3;
	RTHOOK(4);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("edge_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_524(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {FLOWCHART_BUILDER}.link_yes */
EIF_REFERENCE F13_266 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("link_yes", 12, Current, 3, 1, 264);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("decision_exists", EX_PRE);
		tb1 = (nstcall = 0, F13_259(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_524(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc2 = tr2;
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc3 = tr2;
	if ((EIF_BOOLEAN) (EIF_TEST(loc2) && EIF_TEST(loc3))) {
		RTHOOK(4);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = (nstcall = 1, F30_543(RTCW(tr2), loc2, arg1));
		loc1 = (EIF_REFERENCE) tr3;
		RTHOOK(5);
		tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		tr3 = RTMS_EX_H("label",5,1634667884);
		(nstcall = 1, F12_250(RTCW(tr2), tr3, loc3));
	}
	RTHOOK(6);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("edge_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_524(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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
	return Result;
}

/* {FLOWCHART_BUILDER}.link_no */
EIF_REFERENCE F13_267 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc1);
	RTLR(7,tr3);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("link_no", 12, Current, 3, 1, 265);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("target_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("decision_exists", EX_PRE);
		tb1 = (nstcall = 0, F13_259(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_524(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc2 = tr2;
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	loc3 = tr2;
	if ((EIF_BOOLEAN) (EIF_TEST(loc2) && EIF_TEST(loc3))) {
		RTHOOK(4);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr3 = (nstcall = 1, F30_543(RTCW(tr2), loc2, arg1));
		loc1 = (EIF_REFERENCE) tr3;
		RTHOOK(5);
		tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		tr3 = RTMS_EX_H("label",5,1634667884);
		(nstcall = 1, F12_250(RTCW(tr2), tr3, loc3));
	}
	RTHOOK(6);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("edge_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_524(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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
	return Result;
}

/* {FLOWCHART_BUILDER}.to_dot */
EIF_REFERENCE F13_268 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA("to_dot", 12, Current, 0, 0, 266);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F30_544(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {FLOWCHART_BUILDER}.to_svg */
EIF_REFERENCE F13_269 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("to_svg", 12, Current, 0, 0, 267);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_544(RTCW(tr2)));
	tr2 = (nstcall = 1, F18_356(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {FLOWCHART_BUILDER}.to_svg_file */
EIF_REFERENCE F13_270 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("to_svg_file", 12, Current, 0, 1, 268);
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_544(RTCW(tr2)));
	tr2 = RTMS_EX_H("svg",3,7566951);
	tr2 = (nstcall = 1, F18_360(RTCW(tr1), tr3, tr2, arg1));
	Result = (EIF_REFERENCE) tr2;
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

/* {FLOWCHART_BUILDER}.node_counter */
EIF_INTEGER_32 F13_271 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_0_0_0_);
}


/* {FLOWCHART_BUILDER}.last_decision_id */
EIF_REFERENCE F13_272 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {FLOWCHART_BUILDER}.last_yes_label */
EIF_REFERENCE F13_273 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {FLOWCHART_BUILDER}.last_no_label */
EIF_REFERENCE F13_274 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {FLOWCHART_BUILDER}.next_id */
EIF_REFERENCE F13_275 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("next_id", 12, Current, 0, 1, 273);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_0_0_0_))++;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	(nstcall = -1, F1079_7731(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 5L))));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, arg1));
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_6_0_0_0_);
	(nstcall = 1, F1081_7847(RTCW(Result), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {FLOWCHART_BUILDER}.auto_link */
void F13_276 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,arg1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("auto_link", 12, Current, 3, 1, 274);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(loc2)-1079])(loc2, loc3));
			tb1 = tb2;
		}
		if (tb1) {
		} else {
			RTHOOK(3);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = (nstcall = 1, F30_543(RTCW(tr1), loc2, arg1));
			loc1 = (EIF_REFERENCE) tr2;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {FLOWCHART_BUILDER}._invariant */
void F13_1 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 9, Current, 0, 0);
	RTIT("renderer_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("graph_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit10 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
