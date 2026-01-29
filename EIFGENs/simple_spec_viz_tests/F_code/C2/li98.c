/*
 * Code for class LIB_TESTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li98.h"
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

/* {LIB_TESTS}.sample_json */
EIF_REFERENCE F124_1699 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("sample_json", 123, Current, 0, 0, 1729);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H(
		"{\012  \"name\": \"Test App\",\012  \"version\": \"1.0.0\",\012  \"states\": [\012    {\012      \"id\": \"S-001\",\012      \"name\": \"idle\",\012      \"description\": \"Waiting for input\",\012      \"is_initial\": true,\012      \"screen\": \"SCR-001\",\012      \"entry_actions\": [\"show_prompt\"]\012    },\012    {\012      \"id\": \"S-002\",\012      \"name\": \"processing\",\012      \"description\": \"Processing command\",\012      \"screen\": \"SCR-002\"\012    },\012    {\012      \"id\": \"S-003\",\012      \"name\": \"complete\",\012      \"description\": \"Command finished\",\012      \"is_final\": true,\012      \"screen"
		"\": \"SCR-003\"\012    }\012  ],\012  \"transitions\": [\012    {\012      \"id\": \"T-001\",\012      \"event\": \"run\",\012      \"from\": \"S-001\",\012      \"to\": \"S-002\",\012      \"label\": \"run command\",\012      \"requirements\": [\"FR-001\", \"UC-001\"]\012    },\012    {\012      \"id\": \"T-002\",\012      \"event\": \"success\",\012      \"from\": \"S-002\",\012      \"to\": \"S-003\",\012      \"label\": \"success\"\012    },\012    {\012      \"id\": \"T-003\",\012      \"event\": \"error\",\012      \"from\": \"S-002\",\012      \"to\": \"S-001\",\012      \"label\": \"error\"\012    }\012  ],\012  \"screens\": [\012    {\012      \"id\": \"SCR-"
		"001\",\012      \"name\": \"Main Prompt\",\012      \"description\": \"CLI prompt\",\012      \"widgets\": [\012        {\"type\": \"text\", \"id\": \"prompt\", \"label\": \"devkit>\", \"x\": 10, \"y\": 10},\012        {\"type\": \"text_field\", \"id\": \"input\", \"placeholder\": \"Enter command\", \"x\": 80, \"y\": 10, \"width\": 300}\012      ],\012      \"requirements\": [\"FR-020\"]\012    },\012    {\012      \"id\": \"SCR-002\",\012      \"name\": \"Processing\",\012      \"widgets\": [\012        {\"type\": \"text\", \"id\": \"status\", \"label\": \"Processing...\", \"x\": 10, \"y\": 10},\012        {\"type\": \"prog"
		"ress_bar\", \"id\": \"progress\", \"x\": 10, \"y\": 40, \"width\": 200}\012      ]\012    },\012    {\012      \"id\": \"SCR-003\",\012      \"name\": \"Complete\",\012      \"widgets\": [\012        {\"type\": \"text\", \"id\": \"result\", \"label\": \"Done!\", \"x\": 10, \"y\": 10},\012        {\"type\": \"button\", \"id\": \"ok_btn\", \"label\": \"OK\", \"x\": 10, \"y\": 50, \"width\": 80}\012      ]\012    }\012  ],\012  \"traceability\": {\012    \"requirements_to_states\": {\012      \"FR-001\": [\"S-001\", \"S-002\"],\012      \"UC-001\": [\"S-001\", \"T-001\", \"S-002\"]\012    },\012    \"states_to_screens\": {\012      \"S-0"
		"01\": \"SCR-001\",\012      \"S-002\": \"SCR-002\",\012      \"S-003\": \"SCR-003\"\012    }\012  }\012}",2126,987481469);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {LIB_TESTS}.test_spec_state_creation */
void F124_1700 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_spec_state_creation", 123, Current, 1, 0, 1730);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("idle",4,1768189029);
	tr4 = RTMS_EX_H("Waiting for input",17,1804122484);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	tr2 = RTMS_EX_H("idle",4,1768189029);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(4);
	tr1 = RTMS_EX_H("description",11,801826414);
	tr2 = RTMS_EX_H("Waiting for input",17,1804122484);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(5);
	tr1 = RTMS_EX_H("not initial by default",22,607839860);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_6_0_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("not final by default",20,2019729780);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_6_1_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_state_initial_final */
void F124_1701 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_spec_state_initial_final", 123, Current, 1, 0, 1731);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("start",5,1953426548);
	tr4 = RTMS_EX_H("Initial state",13,456604773);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F52_930(RTCW(loc1), (EIF_BOOLEAN) 1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("is_initial",10,153132140);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_6_0_);
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-002",5,758770226);
	tr3 = RTMS_EX_H("end",3,6647396);
	tr4 = RTMS_EX_H("Final state",11,1698673509);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	(nstcall = 1, F52_931(RTCW(loc1), (EIF_BOOLEAN) 1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("is_final",8,1880034924);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_6_1_);
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_state_screen_association */
void F124_1702 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("test_spec_state_screen_association", 123, Current, 2, 0, 1732);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("idle",4,1768189029);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("no screen initially",19,680660345);
	tb1 = (nstcall = 1, F52_929(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("SCR-001",7,1863641393);
	(nstcall = 1, F52_932(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("has screen",10,917423470);
	tb1 = (nstcall = 1, F52_929(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("screen_id",9,1810566500);
		tr2 = RTMS_EX_H("SCR-001",7,1863641393);
		(nstcall = 0, F123_1663(Current, tr1, tr2, loc2));
	} else {
		RTHOOK(7);
		tr1 = RTMS_EX_H("screen_id_attached",18,1816176228);
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) 0));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_state_actions */
void F124_1703 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_spec_state_actions", 123, Current, 1, 0, 1733);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("idle",4,1768189029);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("show_prompt",11,1980132212);
	(nstcall = 1, F52_933(RTCW(loc1), tr1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("clear_prompt",12,2135298932);
	(nstcall = 1, F52_934(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("entry action count",18,59826548);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	tr1 = RTMS_EX_H("exit action count",17,257138036);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_5_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(6);
	tr1 = RTMS_EX_H("has entry action",16,1950956142);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	tr3 = (nstcall = 1, F867_5791(RTCW(tr2), ((EIF_INTEGER_32) 1L)));
	tr2 = RTMS_EX_H("show_prompt",11,1980132212);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr3))-1079])(tr3, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(7);
	tr1 = RTMS_EX_H("has exit action",15,1860528750);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_5_);
	tr3 = (nstcall = 1, F867_5791(RTCW(tr2), ((EIF_INTEGER_32) 1L)));
	tr2 = RTMS_EX_H("clear_prompt",12,2135298932);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr3))-1079])(tr3, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_transition_creation */
void F124_1704 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("test_spec_transition_creation", 123, Current, 1, 0, 1734);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(42, 0x01).id, 42, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	tr3 = RTMS_EX_H("run",3,7501166);
	tr4 = RTMS_EX_H("S-001",5,758770225);
	tr5 = RTMS_EX_H("S-002",5,758770226);
	tr6 = RTMS_EX_H("run command",11,448918116);
	(nstcall = -1, F43_799(RTCW(tr1), tr2, tr3, tr4, tr5, tr6));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(3);
	tr1 = RTMS_EX_H("event",5,1987134580);
	tr2 = RTMS_EX_H("run",3,7501166);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(4);
	tr1 = RTMS_EX_H("from",4,1718775661);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(5);
	tr1 = RTMS_EX_H("to",2,29807);
	tr2 = RTMS_EX_H("S-002",5,758770226);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(6);
	tr1 = RTMS_EX_H("label",5,1634667884);
	tr2 = RTMS_EX_H("run command",11,448918116);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(7);
	tr1 = RTMS_EX_H("not self-loop",13,911080560);
	tb1 = (nstcall = 1, F43_806(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_transition_self_loop */
void F124_1705 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("test_spec_transition_self_loop", 123, Current, 1, 0, 1735);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(42, 0x01).id, 42, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	tr3 = RTMS_EX_H("retry",5,1703005817);
	tr4 = RTMS_EX_H("S-001",5,758770225);
	tr5 = RTMS_EX_H("S-001",5,758770225);
	tr6 = RTMS_EX_H("retry",5,1703005817);
	(nstcall = -1, F43_799(RTCW(tr1), tr2, tr3, tr4, tr5, tr6));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("is self-loop",12,667200624);
	tb1 = (nstcall = 1, F43_806(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_transition_requirements */
void F124_1706 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,tr6);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("test_spec_transition_requirements", 123, Current, 1, 0, 1736);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(42, 0x01).id, 42, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	tr3 = RTMS_EX_H("run",3,7501166);
	tr4 = RTMS_EX_H("S-001",5,758770225);
	tr5 = RTMS_EX_H("S-002",5,758770226);
	tr6 = RTMS_EX_H("run",3,7501166);
	(nstcall = -1, F43_799(RTCW(tr1), tr2, tr3, tr4, tr5, tr6));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("FR-001",6,896388145);
	(nstcall = 1, F43_807(RTCW(loc1), tr1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("UC-001",6,925764145);
	(nstcall = 1, F43_807(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("requirement count",17,1278510196);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_5_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
	RTHOOK(5);
	tr1 = RTMS_EX_H("has FR-001",10,1815184177);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_5_);
	tr3 = (nstcall = 1, F867_5791(RTCW(tr2), ((EIF_INTEGER_32) 1L)));
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr3))-1079])(tr3, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("has UC-001",10,1844560177);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_5_);
	tr3 = (nstcall = 1, F867_5791(RTCW(tr2), ((EIF_INTEGER_32) 2L)));
	tr2 = RTMS_EX_H("UC-001",6,925764145);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr3))-1079])(tr3, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_screen_creation */
void F124_1707 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_spec_screen_creation", 123, Current, 1, 0, 1737);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(52, 0x01).id, 52, _OBJSIZ_5_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	tr3 = RTMS_EX_H("Main Prompt",11,1331902324);
	tr4 = RTMS_EX_H("CLI prompt",10,1424465780);
	(nstcall = -1, F53_935(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	tr2 = RTMS_EX_H("Main Prompt",11,1331902324);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(4);
	tr1 = RTMS_EX_H("description",11,801826414);
	tr2 = RTMS_EX_H("CLI prompt",10,1424465780);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(5);
	tr1 = RTMS_EX_H("widgets empty",13,625152889);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	tb1 = (nstcall = 1, F665_4976(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_screen_widgets */
void F124_1708 (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,loc2);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("test_spec_screen_widgets", 123, Current, 2, 0, 1738);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(52, 0x01).id, 52, _OBJSIZ_5_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	tr3 = RTMS_EX_H("Main",4,1298229614);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F53_935(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("button",6,2147362158);
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	tr4 = RTMS_EX_H("Click me",8,543627621);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F53_944(RTCW(loc1), loc2));
	RTHOOK(4);
	tr1 = RTMS_EX_H("widget count",12,955978868);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	tr1 = RTMS_EX_H("find widget by id",17,205327460);
	tr2 = RTMS_EX_H("btn1",4,1651797553);
	tr2 = (nstcall = 1, F53_941(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(6);
	tr1 = RTMS_EX_H("widget type filter",18,680552562);
	tr2 = RTMS_EX_H("button",6,2147362158);
	tr2 = (nstcall = 1, F53_942(RTCW(loc1), tr2));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_widget_creation */
void F124_1709 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_spec_widget_creation", 123, Current, 1, 0, 1739);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("button",6,2147362158);
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	tr4 = RTMS_EX_H("Submit",6,1815420788);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("type",4,1954115685);
	tr2 = RTMS_EX_H("button",6,2147362158);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(3);
	tr1 = RTMS_EX_H("id",2,26980);
	tr2 = RTMS_EX_H("btn1",4,1651797553);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(4);
	tr1 = RTMS_EX_H("label",5,1634667884);
	tr2 = RTMS_EX_H("Submit",6,1815420788);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(5);
	tr1 = RTMS_EX_H("is_button",9,347600750);
	tb1 = (nstcall = 1, F51_910(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_widget_types */
void F124_1710 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_spec_widget_types", 123, Current, 1, 0, 1740);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("text",4,1952807028);
	tr3 = RTMS_EX_H("lbl1",4,1818389553);
	tr4 = RTMS_EX_H("Hello",5,1702157423);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_text",7,1340871028);
	tb1 = (nstcall = 1, F51_911(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("text_field",10,1098830436);
	tr3 = RTMS_EX_H("inp1",4,1768845361);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("is_text_field",13,111261284);
	tb1 = (nstcall = 1, F51_912(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("progress_bar",12,1044565874);
	tr3 = RTMS_EX_H("prog1",5,1920763697);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTMS_EX_H("is_progress_bar",15,459073906);
	tb1 = (nstcall = 1, F51_913(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(7);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("checkbox",8,681675896);
	tr3 = RTMS_EX_H("chk1",4,1667787569);
	tr4 = RTMS_EX_H("Accept",6,1796147828);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTMS_EX_H("is_checkbox",11,1846495608);
	tb1 = (nstcall = 1, F51_914(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(9);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("dropdown",8,1323285614);
	tr3 = RTMS_EX_H("sel1",4,1936026673);
	tr4 = RTMS_EX_H("Choose",6,2002101093);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	tr1 = RTMS_EX_H("is_dropdown",11,340625518);
	tb1 = (nstcall = 1, F51_915(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_widget_position_size */
void F124_1711 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_spec_widget_position_size", 123, Current, 1, 0, 1741);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("button",6,2147362158);
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	tr4 = RTMS_EX_H("OK",2,20299);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F51_916(RTCW(loc1), ((EIF_INTEGER_32) 100L), ((EIF_INTEGER_32) 200L)));
	RTHOOK(3);
	(nstcall = 1, F51_917(RTCW(loc1), ((EIF_INTEGER_32) 80L), ((EIF_INTEGER_32) 25L)));
	RTHOOK(4);
	tr1 = RTMS_EX_H("x",1,120);
	tr2 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr2 = ((EIF_INTEGER_32) 100L);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_3_0_0_0_);
	tr3 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr3 = ti4_1;
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(5);
	tr1 = RTMS_EX_H("y",1,121);
	tr2 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr2 = ((EIF_INTEGER_32) 200L);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_3_0_0_1_);
	tr3 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr3 = ti4_1;
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(6);
	tr1 = RTMS_EX_H("width",5,1769105000);
	tr2 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr2 = ((EIF_INTEGER_32) 80L);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_3_0_0_2_);
	tr3 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr3 = ti4_1;
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(7);
	tr1 = RTMS_EX_H("height",6,1973632628);
	tr2 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr2 = ((EIF_INTEGER_32) 25L);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_3_0_0_3_);
	tr3 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr3 = ti4_1;
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_widget_display_text */
void F124_1712 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_spec_widget_display_text", 123, Current, 1, 0, 1742);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("button",6,2147362158);
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	tr4 = RTMS_EX_H("OK",2,20299);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("button display",14,120877689);
	tr2 = RTMS_EX_H("[button] btn1: \"OK\"",19,1483033634);
	tr3 = (nstcall = 1, F51_918(RTCW(loc1)));
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("checkbox",8,681675896);
	tr3 = RTMS_EX_H("chk1",4,1667787569);
	tr4 = RTMS_EX_H("Accept",6,1796147828);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("checkbox display",16,1214910073);
	tr2 = RTMS_EX_H("[checkbox] chk1: \"Accept\"",25,1048033314);
	tr3 = (nstcall = 1, F51_918(RTCW(loc1)));
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_document_creation */
void F124_1713 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("test_spec_document_creation", 123, Current, 1, 0, 1743);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Test App",8,82952304);
	tr3 = RTMS_EX_H("1.0.0",5,775285808);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("name",4,1851878757);
	tr2 = RTMS_EX_H("Test App",8,82952304);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(3);
	tr1 = RTMS_EX_H("version",7,1397649262);
	tr2 = RTMS_EX_H("1.0.0",5,775285808);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(4);
	tr1 = RTMS_EX_H("states empty",12,424744569);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	tb1 = (nstcall = 1, F665_4976(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("transitions empty",17,1905525113);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	tb1 = (nstcall = 1, F665_4976(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("screens empty",13,1240463993);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	tb1 = (nstcall = 1, F665_4976(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_document_add_elements */
void F124_1714 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLR(5,tr4);
	RTLR(6,Current);
	RTLR(7,loc3);
	RTLR(8,tr5);
	RTLR(9,tr6);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("test_spec_document_add_elements", 123, Current, 4, 0, 1744);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Test",4,1415934836);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("idle",4,1768189029);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F47_865(RTCW(loc1), loc2));
	RTHOOK(4);
	tr1 = RTMS_EX_H("state count",11,527377780);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(42, 0x01).id, 42, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	tr3 = RTMS_EX_H("run",3,7501166);
	tr4 = RTMS_EX_H("S-001",5,758770225);
	tr5 = RTMS_EX_H("S-002",5,758770226);
	tr6 = RTMS_EX_H("run",3,7501166);
	(nstcall = -1, F43_799(RTCW(tr1), tr2, tr3, tr4, tr5, tr6));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F47_866(RTCW(loc1), loc3));
	RTHOOK(7);
	tr1 = RTMS_EX_H("transition count",16,1380409972);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(8);
	tr1 = RTLNS(eif_new_type(52, 0x01).id, 52, _OBJSIZ_5_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	tr3 = RTMS_EX_H("Main",4,1298229614);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F53_935(RTCW(tr1), tr2, tr3, tr4));
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	(nstcall = 1, F47_867(RTCW(loc1), loc4));
	RTHOOK(10);
	tr1 = RTMS_EX_H("screen count",12,228574836);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_document_queries */
void F124_1715 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLR(5,tr4);
	RTLR(6,loc3);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("test_spec_document_queries", 123, Current, 3, 0, 1745);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Test",4,1415934836);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("idle",4,1768189029);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F52_930(RTCW(loc2), (EIF_BOOLEAN) 1));
	RTHOOK(4);
	(nstcall = 1, F47_865(RTCW(loc1), loc2));
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-002",5,758770226);
	tr3 = RTMS_EX_H("done",4,1685024357);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F52_931(RTCW(loc3), (EIF_BOOLEAN) 1));
	RTHOOK(7);
	(nstcall = 1, F47_865(RTCW(loc1), loc3));
	RTHOOK(8);
	tr1 = RTMS_EX_H("find state by id",16,1130600036);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr2 = (nstcall = 1, F47_857(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(9);
	tr1 = RTMS_EX_H("initial state",13,482524773);
	tr2 = (nstcall = 1, F47_859(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(10);
	tr1 = RTMS_EX_H("final states count",18,1259783796);
	tr2 = (nstcall = 1, F47_860(RTCW(loc1)));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_loader_from_string */
void F124_1716 (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("test_loader_from_string", 123, Current, 3, 0, 1746);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("doc loaded",10,1171999076);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 != NULL)));
	RTHOOK(4);
	loc3 = loc2;
	if (EIF_TEST(loc3)) {
		RTHOOK(5);
		tr1 = RTMS_EX_H("name",4,1851878757);
		tr2 = RTMS_EX_H("Test App",8,82952304);
		tr3 = *(EIF_REFERENCE *)(loc3);
		(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
		RTHOOK(6);
		tr1 = RTMS_EX_H("version",7,1397649262);
		tr2 = RTMS_EX_H("1.0.0",5,775285808);
		tr3 = *(EIF_REFERENCE *)(loc3 + _REFACS_1_);
		(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
		RTHOOK(7);
		tr1 = RTMS_EX_H("states loaded",13,1121685348);
		tr2 = *(EIF_REFERENCE *)(loc3 + _REFACS_2_);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))));
		RTHOOK(8);
		tr1 = RTMS_EX_H("transitions loaded",18,97578596);
		tr2 = *(EIF_REFERENCE *)(loc3 + _REFACS_3_);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))));
		RTHOOK(9);
		tr1 = RTMS_EX_H("screens loaded",14,1640316516);
		tr2 = *(EIF_REFERENCE *)(loc3 + _REFACS_4_);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_loader_states_parsed */
void F124_1717 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("test_loader_states_parsed", 123, Current, 4, 0, 1747);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = loc2;
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("initial state exists",20,1720477555);
		tr2 = (nstcall = 1, F47_859(loc3));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
		RTHOOK(5);
		tr1 = (nstcall = 1, F47_859(loc3));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H("initial name",12,101305701);
			tr2 = RTMS_EX_H("idle",4,1768189029);
			tr3 = *(EIF_REFERENCE *)(loc4 + _REFACS_1_);
			(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
			RTHOOK(7);
			tr1 = RTMS_EX_H("has entry actions",17,1229457011);
			tr2 = *(EIF_REFERENCE *)(loc4 + _REFACS_4_);
			ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
			(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))));
		}
		RTHOOK(8);
		tr1 = RTMS_EX_H("final states exist",18,1410008948);
		tr2 = (nstcall = 1, F47_860(loc3));
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_loader_transitions_parsed */
void F124_1718 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("test_loader_transitions_parsed", 123, Current, 4, 0, 1748);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc4 = loc2;
	if (EIF_TEST(loc4)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("S-001",5,758770225);
		tr1 = (nstcall = 1, F47_861(loc4, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = RTMS_EX_H("transitions from S-001",22,567754033);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(loc3)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
		RTHOOK(6);
		tb1 = (nstcall = 1, F665_4976(RTCW(loc3)));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			tr1 = RTMS_EX_H("has requirements",16,1467906675);
			tr2 = (nstcall = 1, F867_5793(RTCW(loc3)));
			tr3 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_5_);
			ti4_1 = (nstcall = 1, F867_5806(RTCW(tr3)));
			(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_loader_screens_parsed */
void F124_1719 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("test_loader_screens_parsed", 123, Current, 4, 0, 1749);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = loc2;
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("SCR-001",7,1863641393);
		tr1 = (nstcall = 1, F47_858(loc3, tr1));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(5);
			tr1 = RTMS_EX_H("widgets loaded",14,886699876);
			tr2 = *(EIF_REFERENCE *)(loc4 + _REFACS_3_);
			ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
			(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
			RTHOOK(6);
			tr1 = RTMS_EX_H("has text widget",15,1348096372);
			tr2 = RTMS_EX_H("prompt",6,2090519668);
			tr2 = (nstcall = 1, F53_941(loc4, tr2));
			(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
			RTHOOK(7);
			tr1 = RTMS_EX_H("has input widget",16,120907892);
			tr2 = RTMS_EX_H("input",5,1853670260);
			tr2 = (nstcall = 1, F53_941(loc4, tr2));
			(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
		} else {
			RTHOOK(8);
			tr1 = RTMS_EX_H("screen SCR-001 found",20,1537775204);
			(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) 0));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_loader_traceability_parsed */
void F124_1720 (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("test_loader_traceability_parsed", 123, Current, 3, 0, 1750);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc3 = loc2;
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("req-to-states loaded",20,654666340);
		tr2 = *(EIF_REFERENCE *)(loc3 + _REFACS_5_);
		tr3 = RTMS_EX_H("FR-001",6,896388145);
		tr3 = (nstcall = 1, F49_877(RTCW(tr2), tr3));
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr3)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
		RTHOOK(5);
		tr1 = RTMS_EX_H("state-to-screen loaded",22,1447772004);
		tr2 = *(EIF_REFERENCE *)(loc3 + _REFACS_5_);
		tr3 = RTMS_EX_H("S-001",5,758770225);
		tr3 = (nstcall = 1, F49_878(RTCW(tr2), tr3));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr3 != NULL)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_traceability_matrix */
void F124_1721 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("test_traceability_matrix", 123, Current, 3, 0, 1751);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(48, 0x01).id, 48, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F49_874(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("S-002",5,758770226);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("FR-001",6,896388145);
	(nstcall = 1, F49_884(RTCW(loc1), tr1, loc2));
	RTHOOK(6);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	(nstcall = 1, F49_885(RTCW(loc1), tr1, tr2));
	RTHOOK(7);
	tr1 = RTMS_EX_H("requirement exists",18,684681843);
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	tr2 = (nstcall = 1, F49_877(RTCW(loc1), tr2));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
	RTHOOK(8);
	tr1 = RTMS_EX_H("screen mapping",14,1952294759);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr2 = (nstcall = 1, F49_878(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(9);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	tr1 = (nstcall = 1, F49_878(RTCW(loc1), tr1));
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(10);
		tr1 = RTMS_EX_H("screen value",12,2140731493);
		tr2 = RTMS_EX_H("SCR-001",7,1863641393);
		(nstcall = 0, F123_1663(Current, tr1, tr2, loc3));
	} else {
		RTHOOK(11);
		tr1 = RTMS_EX_H("screen_value_attached",21,677952100);
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) 0));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_traceability_reverse_lookup */
void F124_1722 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("test_traceability_reverse_lookup", 123, Current, 2, 0, 1752);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(48, 0x01).id, 48, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F49_874(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("S-002",5,758770226);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("FR-001",6,896388145);
	(nstcall = 1, F49_884(RTCW(loc1), tr1, loc2));
	RTHOOK(6);
	tr1 = RTMS_EX_H("FR-002",6,896388146);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	(nstcall = 1, F49_886(RTCW(loc1), tr1, tr2));
	RTHOOK(7);
	tr1 = RTMS_EX_H("requirements for S-001",22,591392561);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr2 = (nstcall = 1, F49_881(RTCW(loc1), tr2));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
	RTHOOK(8);
	tr1 = RTMS_EX_H("requirements for S-002",22,591392562);
	tr2 = RTMS_EX_H("S-002",5,758770226);
	tr2 = (nstcall = 1, F49_881(RTCW(loc1), tr2));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_state_diagram_generator */
void F124_1723 (EIF_REFERENCE Current)
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
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc5);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("test_state_diagram_generator", 123, Current, 5, 0, 1753);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc5 = loc2;
	if (EIF_TEST(loc5)) {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F48_868(RTCW(tr1)));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = (nstcall = 1, F48_872(RTCW(loc3), loc5));
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tr1 = RTMS_EX_H("DOT not empty",13,528035193);
		tb1 = (nstcall = 1, F670_4976(RTCW(loc4)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
		RTHOOK(7);
		tr1 = RTMS_EX_H("has digraph",11,2054835560);
		tr2 = RTMS_EX_H("digraph",7,918350440);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc4))-1079])(loc4, tr2));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(8);
		tr1 = RTMS_EX_H("has idle state",14,1134164837);
		tr2 = RTMS_EX_H("idle",4,1768189029);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc4))-1079])(loc4, tr2));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(9);
		tr1 = RTMS_EX_H("has processing state",20,1897643877);
		tr2 = RTMS_EX_H("processing",10,1808455271);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc4))-1079])(loc4, tr2));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_state_diagram_svg_generation */
void F124_1724 (EIF_REFERENCE Current)
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
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc5);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("test_state_diagram_svg_generation", 123, Current, 5, 0, 1754);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc5 = loc2;
	if (EIF_TEST(loc5)) {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F48_868(RTCW(tr1)));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = (nstcall = 1, F48_870(RTCW(loc3), loc5));
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tr1 = RTMS_EX_H("is_success",10,619583603);
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc4)+ _CHROFF_3_0_);
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(7);
		tr1 = RTMS_EX_H("content not empty",17,166253177);
		tr2 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_1_);
		tb1 = (nstcall = 1, F670_4976(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
		RTHOOK(8);
		tr1 = RTMS_EX_H("is SVG",6,749654087);
		tb1 = (nstcall = 1, F46_847(RTCW(loc4)));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_screen_mockup_generator */
void F124_1725 (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,Current);
	RTLIU(9);
	
	RTEAA("test_screen_mockup_generator", 123, Current, 4, 0, 1755);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(52, 0x01).id, 52, _OBJSIZ_5_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	tr3 = RTMS_EX_H("Test Screen",11,148143470);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F53_935(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("button",6,2147362158);
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	tr4 = RTMS_EX_H("OK",2,20299);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F51_916(RTCW(loc2), ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 10L)));
	RTHOOK(4);
	(nstcall = 1, F53_944(RTCW(loc1), loc2));
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(43, 0x01).id, 43, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F44_808(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = (nstcall = 1, F44_812(RTCW(loc3), loc1));
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = RTMS_EX_H("DOT not empty",13,528035193);
	tb1 = (nstcall = 1, F670_4976(RTCW(loc4)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(8);
	tr1 = RTMS_EX_H("has digraph",11,2054835560);
	tr2 = RTMS_EX_H("digraph",7,918350440);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc4))-1079])(loc4, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(9);
	tr1 = RTMS_EX_H("has record shape",16,1633539173);
	tr2 = RTMS_EX_H("record",6,1893156964);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc4))-1079])(loc4, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_screen_mockup_all */
void F124_1726 (EIF_REFERENCE Current)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc5);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLR(8,loc6);
	RTLIU(9);
	
	RTEAA("test_screen_mockup_all", 123, Current, 6, 0, 1756);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc5 = loc2;
	if (EIF_TEST(loc5)) {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(43, 0x01).id, 43, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F44_808(RTCW(tr1)));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = (nstcall = 1, F44_811(RTCW(loc3), loc5));
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tr1 = RTMS_EX_H("result count matches screens",28,583896947);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(loc4)));
		tr2 = *(EIF_REFERENCE *)(loc5 + _REFACS_4_);
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ti4_2)));
		RTHOOK(7);
		tr1 = RTMS_EX_H("all successful",14,1645779052);
		tr2 = (nstcall = 1, F867_5799(RTCW(loc4)));
		loc6 = (EIF_REFERENCE) tr2;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, F421_4812(loc6));
			if (tb2) break;
			RTHOOK(8);
			tr2 = (nstcall = 1, F421_4803(loc6));
			tb3 = *(EIF_BOOLEAN *)(RTCW(tr2)+ _CHROFF_3_0_);
			tb1 = tb3;
			(nstcall = 1, F421_4818(loc6));
		}
		(nstcall = 0, F112_1585(Current, tr1, tb1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_traceability_report_generator */
void F124_1727 (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc5);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLIU(9);
	
	RTEAA("test_traceability_report_generator", 123, Current, 5, 0, 1757);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	loc5 = loc2;
	if (EIF_TEST(loc5)) {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(55, 0x01).id, 55, _OBJSIZ_0_0_0_0_0_0_0_0_);
		(nstcall = -1, F56_972(RTCW(tr1)));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = (nstcall = 1, F56_973(RTCW(loc3), loc5));
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tr1 = RTMS_EX_H("is_success",10,619583603);
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc4)+ _CHROFF_3_0_);
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(7);
		tr1 = RTMS_EX_H("is markdown",11,961166446);
		tb1 = (nstcall = 1, F46_848(RTCW(loc4)));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(8);
		tr1 = RTMS_EX_H("has header",10,610533746);
		tr2 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_1_);
		tr3 = RTMS_EX_H("# Traceability Matrix",21,34159736);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(tr2))-1079])(tr2, tr3));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(9);
		tr1 = RTMS_EX_H("has states section",18,677644398);
		tr2 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_1_);
		tr3 = RTMS_EX_H("## States",9,650350707);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(tr2))-1079])(tr2, tr3));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(10);
		tr1 = RTMS_EX_H("has requirements section",24,49342574);
		tr2 = *(EIF_REFERENCE *)(RTCW(loc4) + _REFACS_1_);
		tr3 = RTMS_EX_H("## Requirements",15,1759221619);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(tr2))-1079])(tr2, tr3));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_simple_spec_viz_facade */
void F124_1728 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("test_simple_spec_viz_facade", 123, Current, 3, 0, 1758);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(54, 0x01).id, 54, _OBJSIZ_5_0_0_0_0_0_0_0_);
	(nstcall = -1, F55_959(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F55_966(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("doc loaded",10,1171999076);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 != NULL)));
	RTHOOK(4);
	loc3 = loc2;
	if (EIF_TEST(loc3)) {
		RTHOOK(5);
		tr1 = RTMS_EX_H("state diagram success",21,930223475);
		tr2 = (nstcall = 1, F55_967(RTCW(loc1), loc3));
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr2)+ _CHROFF_3_0_);
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(6);
		tr1 = RTMS_EX_H("mockups count",13,929473908);
		tr2 = (nstcall = 1, F55_968(RTCW(loc1), loc3));
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))));
		RTHOOK(7);
		tr1 = RTMS_EX_H("traceability success",20,1121148275);
		tr2 = (nstcall = 1, F55_969(RTCW(loc1), loc3));
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr2)+ _CHROFF_3_0_);
		(nstcall = 0, F112_1585(Current, tr1, tb1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_end_to_end_file_generation */
void F124_1729 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("test_end_to_end_file_generation", 123, Current, 0, 0, 1759);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("devkit_cli.json",15,731244142);
	tr2 = RTMS_EX_H("DevKit CLI",10,1802431049);
	(nstcall = 0, F124_1730(Current, tr1, tr2));
	RTHOOK(2);
	tr1 = RTMS_EX_H("devkit_windows.json",19,42889582);
	tr2 = RTMS_EX_H("DevKit Windows GUI",18,461934665);
	(nstcall = 0, F124_1730(Current, tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_specification_pipeline */
void F124_1730 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(17);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc9);
	RTLR(3,tr1);
	RTLR(4,loc11);
	RTLR(5,loc10);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,tr2);
	RTLR(9,loc5);
	RTLR(10,loc6);
	RTLR(11,loc1);
	RTLR(12,loc2);
	RTLR(13,Current);
	RTLR(14,loc12);
	RTLR(15,loc7);
	RTLR(16,loc8);
	RTLIU(17);
	
	RTEAA("test_specification_pipeline", 123, Current, 12, 2, 1760);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("input_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("input_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F670_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("spec_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(316, 0x01).id, 316, _OBJSIZ_0_0_0_1_0_0_0_0_);
	loc9 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("SIMPLE_EIFFEL",13,1537229900);
	tr1 = (nstcall = 1, F317_4506(RTCW(loc9), tr1));
	loc11 = tr1;
	if (EIF_TEST(loc11)) {
		RTHOOK(6);
		loc10 = (EIF_REFERENCE) loc11;
	} else {
		RTHOOK(7);
		tr1 = RTMS_EX_H("D:/prod",7,1866785124);
		loc10 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(8);
	tr1 = RTMS_EX_H("/simple_spec_viz/test/test_data/outputs",39,596205171);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(loc10))-1079])(loc10, tr1));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTMS_EX_H("/simple_spec_viz/test/test_data/inputs/",39,1941292847);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(loc10))-1079])(loc10, tr1));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, arg1));
	loc4 = (EIF_REFERENCE) tr2;
	RTHOOK(10);
	tr1 = RTMS_EX_H("/state_machine.svg",18,630250343);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(loc3))-1079])(loc3, tr1));
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	tr1 = RTMS_EX_H("/traceability.md",16,1751101284);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(loc3))-1079])(loc3, tr1));
	loc6 = (EIF_REFERENCE) tr1;
	RTHOOK(12);
	tr1 = RTLNS(eif_new_type(54, 0x01).id, 54, _OBJSIZ_5_0_0_0_0_0_0_0_);
	(nstcall = -1, F55_959(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(13);
	tr1 = (nstcall = 1, F55_965(RTCW(loc1), loc4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(14);
	tr1 = RTMS_EX_H("doc loaded: ",12,1368646688);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg2));
	(nstcall = 0, F112_1585(Current, tr2, (EIF_BOOLEAN)(loc2 != NULL)));
	RTHOOK(15);
	loc12 = loc2;
	if (EIF_TEST(loc12)) {
		RTHOOK(16);
		tr1 = RTMS_EX_H("generate_all succeeded: ",24,866269984);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg2));
		tb1 = (nstcall = 1, F55_970(RTCW(loc1), loc12, loc3));
		(nstcall = 0, F112_1585(Current, tr2, tb1));
		RTHOOK(17);
		tr1 = RTLNS(eif_new_type(744, 0x01).id, 744, _OBJSIZ_5_7_2_4_1_1_2_1_);
		(nstcall = -1, F743_5009(RTCW(tr1), loc5));
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(18);
		tb1 = '\0';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3712[Dtype(RTCW(loc7))-310])(loc7));
		if (tb2) {
			tb2 = (nstcall = 1, F743_5067(RTCW(loc7)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(19);
			tr1 = RTMS_EX_H("state_machine.svg has content: ",31,1678426912);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg2));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc7))-743])(loc7));
			(nstcall = 0, F112_1585(Current, tr2, (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))));
			RTHOOK(20);
			(nstcall = 1, F743_5094(RTCW(loc7)));
		} else {
			RTHOOK(21);
			tr1 = RTMS_EX_H("state_machine.svg created: ",27,432653600);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg2));
			(nstcall = 0, F112_1585(Current, tr2, (EIF_BOOLEAN) 0));
		}
		RTHOOK(22);
		tr1 = RTLNS(eif_new_type(744, 0x01).id, 744, _OBJSIZ_5_7_2_4_1_1_2_1_);
		(nstcall = -1, F743_5009(RTCW(tr1), loc6));
		loc8 = (EIF_REFERENCE) tr1;
		RTHOOK(23);
		tb1 = '\0';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3712[Dtype(RTCW(loc8))-310])(loc8));
		if (tb2) {
			tb2 = (nstcall = 1, F743_5067(RTCW(loc8)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(24);
			tr1 = RTMS_EX_H("traceability.md has content: ",29,2091122208);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg2));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc8))-743])(loc8));
			(nstcall = 0, F112_1585(Current, tr2, (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))));
			RTHOOK(25);
			(nstcall = 1, F743_5094(RTCW(loc8)));
		} else {
			RTHOOK(26);
			tr1 = RTMS_EX_H("traceability.md created: ",25,581744672);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg2));
			(nstcall = 0, F112_1585(Current, tr2, (EIF_BOOLEAN) 0));
		}
		RTHOOK(27);
		tr1 = RTMS_EX_H("screen mockups created: ",24,1417542432);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg2));
		tr1 = *(EIF_REFERENCE *)(loc12 + _REFACS_4_);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
		(nstcall = 0, F112_1585(Current, tr2, (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_viz_result_success */
void F124_1731 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("test_spec_viz_result_success", 123, Current, 1, 0, 1761);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(45, 0x01).id, 45, _OBJSIZ_3_1_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("test",4,1952805748);
	tr3 = RTMS_EX_H("<svg>...</svg>",14,333340478);
	(nstcall = -1, F46_839(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_success",10,619583603);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_3_0_);
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("not failure",11,1839278181);
	tb1 = (nstcall = 1, F46_845(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("content set",11,1823309428);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tb1 = (nstcall = 1, F670_4976(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("no error",8,2042790770);
	tr2 = (nstcall = 1, F46_843(RTCW(loc1)));
	tb1 = (nstcall = 1, F670_4976(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_viz_result_failure */
void F124_1732 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("test_spec_viz_result_failure", 123, Current, 1, 0, 1762);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(45, 0x01).id, 45, _OBJSIZ_3_1_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("test",4,1952805748);
	tr3 = RTMS_EX_H("Something went wrong",20,178397287);
	(nstcall = -1, F46_840(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("not success",11,1827185267);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_3_0_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("is_failure",10,631676517);
	tb1 = (nstcall = 1, F46_845(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("content empty",13,321594745);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tb1 = (nstcall = 1, F670_4976(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("has error",9,1597311858);
	tr2 = (nstcall = 1, F46_843(RTCW(loc1)));
	tb1 = (nstcall = 1, F670_4976(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_svg_renderer_rect */
void F124_1733 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("test_svg_renderer_rect", 123, Current, 2, 0, 1763);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(44, 0x01).id, 44, _OBJSIZ_0_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("#FFFFFF",7,1753412166);
	tr2 = RTMS_EX_H("#000000",7,1339443248);
	tr1 = (nstcall = 1, F45_819(RTCW(loc1), ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 20L), ((EIF_INTEGER_32) 100L), ((EIF_INTEGER_32) 50L), tr1, tr2));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("has rect tag",12,1092162151);
	tr2 = RTMS_EX_H("<rect",5,1919708020);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc2))-1079])(loc2, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("has x",5,1635733624);
	tr2 = RTMS_EX_H("x=\"10\"",6,810047010);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc2))-1079])(loc2, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("has y",5,1635733625);
	tr2 = RTMS_EX_H("y=\"20\"",6,812078626);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc2))-1079])(loc2, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("has width",9,1445538920);
	tr2 = RTMS_EX_H("width=\"100\"",11,515221026);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc2))-1079])(loc2, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(7);
	tr1 = RTMS_EX_H("has height",10,744948852);
	tr2 = RTMS_EX_H("height=\"50\"",11,291926050);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc2))-1079])(loc2, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_svg_renderer_text */
void F124_1734 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("test_svg_renderer_text", 123, Current, 2, 0, 1764);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(44, 0x01).id, 44, _OBJSIZ_0_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("Hello",5,1702157423);
	tr2 = (nstcall = 1, F45_836(RTCW(loc1)));
	tr1 = (nstcall = 1, F45_821(RTCW(loc1), ((EIF_INTEGER_32) 10L), ((EIF_INTEGER_32) 20L), tr1, tr2, ((EIF_INTEGER_32) 12L)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("has text tag",12,1133910631);
	tr2 = RTMS_EX_H("<text",5,1953267828);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc2))-1079])(loc2, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("has content",11,1597185396);
	tr2 = RTMS_EX_H("Hello",5,1702157423);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc2))-1079])(loc2, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_svg_renderer_xml_escape */
void F124_1735 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("test_svg_renderer_xml_escape", 123, Current, 2, 0, 1765);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(44, 0x01).id, 44, _OBJSIZ_0_0_0_0_0_0_0_0_);
	(nstcall = -1, F1_29(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("<test>&value",12,1005195109);
	tr2 = (nstcall = 1, F45_836(RTCW(loc1)));
	tr1 = (nstcall = 1, F45_821(RTCW(loc1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), tr1, tr2, ((EIF_INTEGER_32) 10L)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("escaped lt",10,2032103028);
	tr2 = RTMS_EX_H("&lt;",4,644641851);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc2))-1079])(loc2, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("escaped amp",11,527539056);
	tr2 = RTMS_EX_H("&amp;",5,1634853947);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(loc2))-1079])(loc2, tr2));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_requirement */
void F124_1736 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("test_spec_requirement", 123, Current, 1, 0, 1766);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(49, 0x01).id, 49, _OBJSIZ_4_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	(nstcall = -1, F50_887(RTCW(tr1), tr2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	tr3 = *(EIF_REFERENCE *)(RTCW(loc1));
	(nstcall = 0, F123_1663(Current, tr1, tr2, tr3));
	RTHOOK(3);
	tr1 = RTMS_EX_H("is functional",13,2000899180);
	tb1 = (nstcall = 1, F50_892(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("not use case",12,718821477);
	tb1 = (nstcall = 1, F50_893(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	(nstcall = 1, F50_899(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("T-001",5,758777905);
	(nstcall = 1, F50_900(RTCW(loc1), tr1));
	RTHOOK(7);
	tr1 = RTMS_EX_H("coverage",8,60743269);
	ti4_1 = (nstcall = 1, F50_896(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_spec_requirement_types */
void F124_1737 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("test_spec_requirement_types", 123, Current, 1, 0, 1767);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(49, 0x01).id, 49, _OBJSIZ_4_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	(nstcall = -1, F50_887(RTCW(tr1), tr2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("is functional",13,2000899180);
	tb1 = (nstcall = 1, F50_892(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(49, 0x01).id, 49, _OBJSIZ_4_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("UC-001",6,925764145);
	(nstcall = -1, F50_887(RTCW(tr1), tr2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("is use case",11,1388956261);
	tb1 = (nstcall = 1, F50_893(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(49, 0x01).id, 49, _OBJSIZ_4_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("NFR-001",7,1500437041);
	(nstcall = -1, F50_887(RTCW(tr1), tr2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTMS_EX_H("is non-functional",17,2059246956);
	tb1 = (nstcall = 1, F50_894(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(7);
	tr1 = RTLNS(eif_new_type(49, 0x01).id, 49, _OBJSIZ_4_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("DR-001",6,892455985);
	(nstcall = -1, F50_887(RTCW(tr1), tr2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTMS_EX_H("is design",9,837168750);
	tb1 = (nstcall = 1, F50_895(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_empty_spec */
void F124_1738 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,loc4);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("test_adversarial_empty_spec", 123, Current, 4, 0, 1768);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("{\"name\":\"Empty\",\"version\":\"1.0\",\"states\":[],\"transitions\":[],\"screens\":[],\"traceability\":{}}",92,220043389);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), loc3));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("loads empty spec",16,2019322979);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 != NULL)));
	RTHOOK(5);
	loc4 = loc2;
	if (EIF_TEST(loc4)) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("empty states",12,1374234483);
		tr2 = *(EIF_REFERENCE *)(loc4 + _REFACS_2_);
		tb1 = (nstcall = 1, F665_4976(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(7);
		tr1 = RTMS_EX_H("empty transitions",17,1142331763);
		tr2 = *(EIF_REFERENCE *)(loc4 + _REFACS_3_);
		tb1 = (nstcall = 1, F665_4976(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
		RTHOOK(8);
		tr1 = RTMS_EX_H("empty screens",13,1479866739);
		tr2 = *(EIF_REFERENCE *)(loc4 + _REFACS_4_);
		tb1 = (nstcall = 1, F665_4976(RTCW(tr2)));
		(nstcall = 0, F112_1585(Current, tr1, tb1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_single_state */
void F124_1739 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLR(5,tr4);
	RTLR(6,loc3);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("test_adversarial_single_state", 123, Current, 3, 0, 1769);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Single",6,2016262757);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("only",4,1869507705);
	tr4 = RTMS_EX_H("Only state",10,1719993189);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F52_930(RTCW(loc2), (EIF_BOOLEAN) 1));
	RTHOOK(4);
	(nstcall = 1, F52_931(RTCW(loc2), (EIF_BOOLEAN) 1));
	RTHOOK(5);
	(nstcall = 1, F47_865(RTCW(loc1), loc2));
	RTHOOK(6);
	tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F48_868(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = RTMS_EX_H("generates for single state",26,1285525861);
	tr2 = (nstcall = 1, F48_870(RTCW(loc3), loc1));
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr2)+ _CHROFF_3_0_);
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_max_states */
void F124_1740 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("test_adversarial_max_states", 123, Current, 3, 0, 1770);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Many",4,1298230905);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 100L))) break;
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("S-",2,21293);
		tr3 = eif_out__i4_s1(loc2);
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
		tr2 = RTMS_EX_H("state_",6,1862008159);
		tr4 = eif_out__i4_s1(loc2);
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr4));
		tr2 = RTMS_EX_H("State ",6,1799093536);
		tr5 = eif_out__i4_s1(loc2);
		tr5 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr5));
		(nstcall = -1, F52_920(RTCW(tr1), tr3, tr4, tr5));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		(nstcall = 1, F47_865(RTCW(loc1), loc3));
		RTHOOK(6);
		loc2++;
	}
	RTHOOK(7);
	tr1 = RTMS_EX_H("can add 100 states",18,314647155);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 100L))));
	RTHOOK(8);
	tr1 = RTMS_EX_H("queries still work",18,1975619179);
	tr2 = RTMS_EX_H("S-50",4,1395471664);
	tr2 = (nstcall = 1, F47_857(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(9);
	tr1 = RTMS_EX_H("lookup is correct",17,1975979124);
	tr2 = RTMS_EX_H("S-100",5,758835760);
	tr2 = (nstcall = 1, F47_857(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_self_transitions_only */
void F124_1741 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLR(5,tr4);
	RTLR(6,loc3);
	RTLR(7,tr5);
	RTLR(8,tr6);
	RTLR(9,Current);
	RTLIU(10);
	
	RTEAA("test_adversarial_self_transitions_only", 123, Current, 3, 0, 1771);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("SelfLoop",8,810063728);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("retry",5,1703005817);
	tr4 = RTMS_EX_H("Retry state",11,1971560549);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F52_930(RTCW(loc2), (EIF_BOOLEAN) 1));
	RTHOOK(4);
	(nstcall = 1, F47_865(RTCW(loc1), loc2));
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(42, 0x01).id, 42, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	tr3 = RTMS_EX_H("retry",5,1703005817);
	tr4 = RTMS_EX_H("S-001",5,758770225);
	tr5 = RTMS_EX_H("S-001",5,758770225);
	tr6 = RTMS_EX_H("retry attempt",13,79714676);
	(nstcall = -1, F43_799(RTCW(tr1), tr2, tr3, tr4, tr5, tr6));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F47_866(RTCW(loc1), loc3));
	RTHOOK(7);
	tr1 = RTMS_EX_H("self-transitions work",21,1754087531);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr2 = (nstcall = 1, F47_861(RTCW(loc1), tr2));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(8);
	tr1 = RTMS_EX_H("detected self-loop",18,436237936);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr2 = (nstcall = 1, F47_861(RTCW(loc1), tr2));
	tr3 = (nstcall = 1, F867_5793(RTCW(tr2)));
	tb1 = (nstcall = 1, F43_806(RTCW(tr3)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_unreachable_state */
void F124_1742 (EIF_REFERENCE Current)
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
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLR(5,tr4);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,loc5);
	RTLR(9,tr5);
	RTLR(10,tr6);
	RTLR(11,Current);
	RTLIU(12);
	
	RTEAA("test_adversarial_unreachable_state", 123, Current, 5, 0, 1772);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Unreachable",11,946301029);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("start",5,1953426548);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F52_930(RTCW(loc2), (EIF_BOOLEAN) 1));
	RTHOOK(4);
	(nstcall = 1, F47_865(RTCW(loc1), loc2));
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-002",5,758770226);
	tr3 = RTMS_EX_H("normal",6,2136892268);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F47_865(RTCW(loc1), loc3));
	RTHOOK(7);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-003",5,758770227);
	tr3 = RTMS_EX_H("orphan",6,2104999278);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	(nstcall = 1, F47_865(RTCW(loc1), loc4));
	RTHOOK(9);
	tr1 = RTLNS(eif_new_type(42, 0x01).id, 42, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	tr3 = RTMS_EX_H("go",2,26479);
	tr4 = RTMS_EX_H("S-001",5,758770225);
	tr5 = RTMS_EX_H("S-002",5,758770226);
	tr6 = RTMS_EX_H("go to normal",12,1976202860);
	(nstcall = -1, F43_799(RTCW(tr1), tr2, tr3, tr4, tr5, tr6));
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	(nstcall = 1, F47_866(RTCW(loc1), loc5));
	RTHOOK(11);
	tr1 = RTMS_EX_H("S-003 exists",12,1666529651);
	tr2 = RTMS_EX_H("S-003",5,758770227);
	tr2 = (nstcall = 1, F47_857(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(12);
	tr1 = RTMS_EX_H("S-003 has no incoming",21,139848295);
	tr2 = RTMS_EX_H("S-003",5,758770227);
	tr2 = (nstcall = 1, F47_862(RTCW(loc1), tr2));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_duplicate_prevention */
void F124_1743 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLR(5,tr4);
	RTLR(6,loc3);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("test_adversarial_duplicate_prevention", 123, Current, 3, 0, 1773);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("DupTest",7,1512670068);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("state1",6,1862008113);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F47_865(RTCW(loc1), loc2));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("state2",6,1862008114);
	tr4 = RTMS_EX_H("Different name, same ID",23,996137540);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("first state added",17,447710820);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_missing_screen_reference */
void F124_1744 (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLR(5,tr4);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("test_adversarial_missing_screen_reference", 123, Current, 2, 0, 1774);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("MissingScreen",13,1515741806);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("orphan",6,2104999278);
	tr4 = RTMS_EX_H("Screen doesn\'t exist",20,1546644084);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("GHOST-001",9,1938707505);
	(nstcall = 1, F52_932(RTCW(loc2), tr1));
	RTHOOK(4);
	(nstcall = 1, F47_865(RTCW(loc1), loc2));
	RTHOOK(5);
	tr1 = RTMS_EX_H("state with missing screen added",31,1939529060);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))));
	RTHOOK(6);
	tr1 = RTMS_EX_H("screen lookup returns void",26,45657444);
	tr2 = RTMS_EX_H("GHOST-001",9,1938707505);
	tr2 = (nstcall = 1, F47_858(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 == NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_malformed_json */
void F124_1745 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("test_adversarial_malformed_json", 123, Current, 4, 0, 1775);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("[{\"name\":\"Bad\", \"unclosed\":]",28,1728017501);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), loc3));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("malformed JSON returns void",27,1575429732);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 == NULL)));
	RTHOOK(5);
	tr1 = RTMS_EX_H("error recorded",14,156308836);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		RTHOOK(7);
		tr1 = RTMS_EX_H("error message non-empty",23,1934402937);
		tb1 = (nstcall = 1, F670_4976(loc4));
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_missing_required_field */
void F124_1746 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("test_adversarial_missing_required_field", 123, Current, 3, 0, 1776);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("[{\"version\":\"1.0\",\"states\":[],\"transitions\":[],\"screens\":[]}]",61,1077059933);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), loc3));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("missing field returns void",26,590590052);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 == NULL)));
	RTHOOK(5);
	tr1 = RTMS_EX_H("error recorded",14,156308836);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_invalid_state_reference */
void F124_1747 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_adversarial_invalid_state_reference", 123, Current, 4, 0, 1777);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("[{\"name\":\"BadRef\",\"version\":\"1.0\",\"states\":[{\"id\":\"S-001\",\"name\":\"state\",\"description\":\"\"}],\"transitions\":[{\"id\":\"T-001\",\"event\":\"go\",\"from\":\"S-001\",\"to\":\"GHOST\",\"label\":\"go\"}],\"screens\":[],\"traceability\":{}}]",209,1744066141);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), loc2));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc4 = loc3;
	if (EIF_TEST(loc4)) {
		RTHOOK(5);
		tr1 = RTMS_EX_H("bad reference loaded",20,725788260);
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) 1));
	} else {
		RTHOOK(6);
		tr1 = RTMS_EX_H("bad reference rejected",22,2125019492);
		(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) 1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_empty_string_state_id */
void F124_1748 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_adversarial_empty_string_state_id", 123, Current, 3, 0, 1778);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("[{\"name\":\"Bad\",\"version\":\"1.0\",\"states\":[{\"id\":\"\",\"name\":\"state\",\"description\":\"test\"}],\"transitions\":[],\"screens\":[],\"traceability\":{}}]",137,1232324957);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), loc2));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("empty id causes error",21,137061234);
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc3 == NULL)) {
		tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
		tb1 = (EIF_BOOLEAN)(tr2 != NULL);
	}
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_unicode_strings */
void F124_1749 (EIF_REFERENCE Current)
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("test_adversarial_unicode_strings", 123, Current, 2, 0, 1779);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("\303\211tat initial",13,2117528428);
	tr4 = RTMS_EX_H("L\'\303\251tat d\'attente",17,1135004261);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("unicode state name",18,1321063781);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("button",6,2147362158);
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	tr4 = RTMS_EX_H("\342\234\223 Valider",11,1533623154);
	(nstcall = -1, F51_902(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("unicode widget label",20,555765868);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_very_long_strings */
void F124_1750 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_adversarial_very_long_strings", 123, Current, 3, 0, 1780);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 1000L)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1000L))) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("LongStateName",13,127879781);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc2))-1080])(loc2, tr1));
	}
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 10000L)));
	loc3 = (EIF_REFERENCE) tr1;
	for (;;) {
		RTHOOK(5);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 10000L))) break;
		RTHOOK(6);
		tr1 = RTMS_EX_H("This is a very long description ",32,1460441120);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc3))-1080])(loc3, tr1));
	}
	RTHOOK(7);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-LONG",6,1443796039);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, loc2, loc3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTMS_EX_H("long name accepted",18,1830327652);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 100L))));
	RTHOOK(9);
	tr1 = RTMS_EX_H("long description accepted",25,1537226852);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	ti4_3 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 1000L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_large_widget_count */
void F124_1751 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,loc2);
	RTLR(6,tr5);
	RTLR(7,Current);
	RTLIU(8);
	
	RTEAA("test_adversarial_large_widget_count", 123, Current, 3, 0, 1781);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(52, 0x01).id, 52, _OBJSIZ_5_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	tr3 = RTMS_EX_H("Complex",7,1467751288);
	tr4 = RTMS_EX_H("Many widgets",12,685051763);
	(nstcall = -1, F53_935(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 50L))) break;
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(50, 0x01).id, 50, _OBJSIZ_3_0_0_4_0_0_0_0_);
		tr2 = RTMS_EX_H("button",6,2147362158);
		tr3 = RTMS_EX_H("btn-",4,1651797549);
		tr4 = eif_out__i4_s1(loc3);
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr3)-1079])(tr3, tr4));
		tr3 = RTMS_EX_H("Button ",7,1043592736);
		tr5 = eif_out__i4_s1(loc3);
		tr5 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr3)-1079])(tr3, tr5));
		(nstcall = -1, F51_902(RTCW(tr1), tr2, tr4, tr5));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		(nstcall = 1, F51_916(RTCW(loc2), (EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 10L)), (EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 10L))));
		RTHOOK(6);
		(nstcall = 1, F53_944(RTCW(loc1), loc2));
		RTHOOK(7);
		loc3++;
	}
	RTHOOK(8);
	tr1 = RTMS_EX_H("50 widgets added",16,130160484);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 50L))));
	RTHOOK(9);
	tr1 = RTMS_EX_H("widget lookups work",19,50186347);
	tr2 = RTMS_EX_H("btn-25",6,2042022453);
	tr2 = (nstcall = 1, F53_941(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_complex_requirement_traceability */
void F124_1752 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("test_adversarial_complex_requirement_traceability", 123, Current, 4, 0, 1782);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(48, 0x01).id, 48, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F49_874(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 10L))) break;
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 5L)));
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 5L))) break;
			RTHOOK(7);
			tr1 = RTMS_EX_H("S-",2,21293);
			tr2 = eif_out__i4_s1(loc3);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc4))-663])(loc4, tr2));
			RTHOOK(8);
			loc3++;
		}
		RTHOOK(9);
		tr1 = RTMS_EX_H("FR-",3,4608557);
		tr2 = eif_out__i4_s1(loc2);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
		(nstcall = 1, F49_884(RTCW(loc1), tr2, loc4));
		RTHOOK(10);
		loc2++;
	}
	RTHOOK(11);
	tr1 = RTMS_EX_H("requirements added",18,1437124196);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) 1));
	RTHOOK(12);
	tr1 = RTMS_EX_H("lookup works",12,1972856435);
	tr2 = RTMS_EX_H("FR-5",4,1179790645);
	tr2 = (nstcall = 1, F49_877(RTCW(loc1), tr2));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_result_xor_invariant */
void F124_1753 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("test_adversarial_result_xor_invariant", 123, Current, 2, 0, 1783);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(45, 0x01).id, 45, _OBJSIZ_3_1_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("test",4,1952805748);
	tr3 = RTMS_EX_H("content",7,460700276);
	(nstcall = -1, F46_839(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("success is_success",18,1955239283);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_3_0_);
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("success not is_failure",22,837059941);
	tb1 = (nstcall = 1, F46_845(RTCW(loc1)));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(45, 0x01).id, 45, _OBJSIZ_3_1_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("test",4,1952805748);
	tr3 = RTMS_EX_H("error",5,1920877938);
	(nstcall = -1, F46_840(RTCW(tr1), tr2, tr3));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("failure not is_success",22,182590067);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc2)+ _CHROFF_3_0_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN) !tb1));
	RTHOOK(6);
	tr1 = RTMS_EX_H("failure is_failure",18,1767320421);
	tb1 = (nstcall = 1, F46_845(RTCW(loc2)));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_result_empty_strings */
void F124_1754 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("test_adversarial_result_empty_strings", 123, Current, 2, 0, 1784);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(45, 0x01).id, 45, _OBJSIZ_3_1_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("test",4,1952805748);
	tr3 = RTMS_EX_H("",0,0);
	(nstcall = -1, F46_839(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("empty content allowed",21,1318468964);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_3_0_);
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(45, 0x01).id, 45, _OBJSIZ_3_1_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("test",4,1952805748);
	tr3 = RTMS_EX_H("error occurred",14,1297428068);
	(nstcall = -1, F46_840(RTCW(tr1), tr2, tr3));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("failure with error message",26,133157733);
	tb1 = '\0';
	tb2 = (nstcall = 1, F46_845(RTCW(loc2)));
	if (tb2) {
		tr2 = (nstcall = 1, F46_843(RTCW(loc2)));
		tb2 = (nstcall = 1, F670_4976(RTCW(tr2)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_concurrent_reads */
void F124_1755 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLR(5,tr4);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("test_adversarial_concurrent_reads", 123, Current, 2, 0, 1785);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Concurrent",10,772059252);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("state",5,1953427045);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F47_865(RTCW(loc1), loc2));
	RTHOOK(4);
	tr1 = RTMS_EX_H("concurrent read 1",17,391852081);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr2 = (nstcall = 1, F47_857(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(5);
	tr1 = RTMS_EX_H("concurrent read 2",17,391852082);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr2 = (nstcall = 1, F47_857(RTCW(loc1), tr2));
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_state_immutability */
void F124_1756 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_adversarial_state_immutability", 123, Current, 1, 0, 1786);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("initial",7,1331373676);
	tr4 = RTMS_EX_H("Initial description",19,131621230);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("id immutable",12,323490661);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
	tr3 = RTMS_EX_H("S-001",5,758770225);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr2))-1079])(tr2, tr3));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(3);
	(nstcall = 1, F52_930(RTCW(loc1), (EIF_BOOLEAN) 1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("initial flag set",16,253147764);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_6_0_);
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("id still immutable",18,1771329381);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
	tr3 = RTMS_EX_H("S-001",5,758770225);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr2))-1079])(tr2, tr3));
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_loader_recovery */
void F124_1757 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,tr2);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTEAA("test_adversarial_loader_recovery", 123, Current, 4, 0, 1787);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(53, 0x01).id, 53, _OBJSIZ_2_0_0_0_0_0_0_0_);
	(nstcall = -1, F54_946(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("first load succeeds",19,1480747635);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 != NULL)));
	RTHOOK(4);
	tr1 = RTMS_EX_H("[{bad}]",7,433800029);
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("error recorded",14,156308836);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(tr2 != NULL)));
	RTHOOK(6);
	tr1 = (nstcall = 0, F124_1699(Current));
	tr1 = (nstcall = 1, F54_950(RTCW(loc1), tr1));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = RTMS_EX_H("recovery successful",19,1944480620);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc3 != NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_generator_with_missing_data */
void F124_1758 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("test_adversarial_generator_with_missing_data", 123, Current, 2, 0, 1788);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Incomplete",10,594309477);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(47, 0x01).id, 47, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F48_868(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("generates for empty doc",23,1394281315);
	tr2 = (nstcall = 1, F48_870(RTCW(loc2), loc1));
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr2)+ _CHROFF_3_0_);
	(nstcall = 0, F112_1585(Current, tr1, tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_void_safety_state */
void F124_1759 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,loc2);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("test_adversarial_void_safety_state", 123, Current, 2, 0, 1789);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(51, 0x01).id, 51, _OBJSIZ_6_2_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	tr3 = RTMS_EX_H("test",4,1952805748);
	tr4 = RTMS_EX_H("",0,0);
	(nstcall = -1, F52_920(RTCW(tr1), tr2, tr3, tr4));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("screen_id initially void",24,697071460);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 == NULL)));
	RTHOOK(4);
	tr1 = RTMS_EX_H("SCR-001",7,1863641393);
	(nstcall = 1, F52_932(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTMS_EX_H("screen_id now attached",22,1469791332);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 != NULL)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {LIB_TESTS}.test_adversarial_collection_iteration */
void F124_1760 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc3);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("test_adversarial_collection_iteration", 123, Current, 4, 0, 1790);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_6_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("Empty",5,1836616313);
	tr3 = RTMS_EX_H("1.0",3,3223088);
	(nstcall = -1, F47_850(RTCW(tr1), tr2, tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc3));
		if (tb1) break;
		RTHOOK(3);
		loc2++;
		RTHOOK(4);
		(nstcall = 1, F421_4818(loc3));
	}
	RTHOOK(5);
	tr1 = RTMS_EX_H("empty iteration safe",20,269039717);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_3_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc4 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb2 = (nstcall = 1, F421_4812(loc4));
		if (tb2) break;
		RTHOOK(7);
		loc2++;
		RTHOOK(8);
		(nstcall = 1, F421_4818(loc4));
	}
	RTHOOK(9);
	tr1 = RTMS_EX_H("empty transitions iteration safe",32,1033577829);
	(nstcall = 0, F112_1585(Current, tr1, (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

void EIF_Minit98 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
