/*
 * Code for class LIB_TESTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F98_1699(EIF_REFERENCE);
extern void F98_1700(EIF_REFERENCE);
extern void F98_1701(EIF_REFERENCE);
extern void F98_1702(EIF_REFERENCE);
extern void F98_1703(EIF_REFERENCE);
extern void F98_1704(EIF_REFERENCE);
extern void F98_1705(EIF_REFERENCE);
extern void F98_1706(EIF_REFERENCE);
extern void F98_1707(EIF_REFERENCE);
extern void F98_1708(EIF_REFERENCE);
extern void F98_1709(EIF_REFERENCE);
extern void F98_1710(EIF_REFERENCE);
extern void F98_1711(EIF_REFERENCE);
extern void F98_1712(EIF_REFERENCE);
extern void F98_1713(EIF_REFERENCE);
extern void F98_1714(EIF_REFERENCE);
extern void F98_1715(EIF_REFERENCE);
extern void F98_1716(EIF_REFERENCE);
extern void F98_1717(EIF_REFERENCE);
extern void F98_1718(EIF_REFERENCE);
extern void F98_1719(EIF_REFERENCE);
extern void F98_1720(EIF_REFERENCE);
extern void F98_1721(EIF_REFERENCE);
extern void F98_1722(EIF_REFERENCE);
extern void F98_1723(EIF_REFERENCE);
extern void F98_1724(EIF_REFERENCE);
extern void F98_1725(EIF_REFERENCE);
extern void F98_1726(EIF_REFERENCE);
extern void F98_1727(EIF_REFERENCE);
extern void F98_1728(EIF_REFERENCE);
extern void F98_1729(EIF_REFERENCE);
extern void F98_1730(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F98_1731(EIF_REFERENCE);
extern void F98_1732(EIF_REFERENCE);
extern void F98_1733(EIF_REFERENCE);
extern void F98_1734(EIF_REFERENCE);
extern void F98_1735(EIF_REFERENCE);
extern void F98_1736(EIF_REFERENCE);
extern void F98_1737(EIF_REFERENCE);
extern void F98_1738(EIF_REFERENCE);
extern void F98_1739(EIF_REFERENCE);
extern void F98_1740(EIF_REFERENCE);
extern void F98_1741(EIF_REFERENCE);
extern void F98_1742(EIF_REFERENCE);
extern void F98_1743(EIF_REFERENCE);
extern void F98_1744(EIF_REFERENCE);
extern void F98_1745(EIF_REFERENCE);
extern void F98_1746(EIF_REFERENCE);
extern void F98_1747(EIF_REFERENCE);
extern void F98_1748(EIF_REFERENCE);
extern void F98_1749(EIF_REFERENCE);
extern void F98_1750(EIF_REFERENCE);
extern void F98_1751(EIF_REFERENCE);
extern void F98_1752(EIF_REFERENCE);
extern void F98_1753(EIF_REFERENCE);
extern void F98_1754(EIF_REFERENCE);
extern void F98_1755(EIF_REFERENCE);
extern void F98_1756(EIF_REFERENCE);
extern void F98_1757(EIF_REFERENCE);
extern void F98_1758(EIF_REFERENCE);
extern void F98_1759(EIF_REFERENCE);
extern void F98_1760(EIF_REFERENCE);
extern void EIF_Minit98(void);

#ifdef __cplusplus
}
#endif

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
EIF_TYPED_VALUE F98_1699 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sample_json";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 97, Current, 0, 0, 1729);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1729);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {LIB_TESTS}.test_spec_state_creation */
void F98_1700 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_state_creation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1730);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1730);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000030, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("idle",4,1768189029);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Waiting for input",17,1804122484);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(919, "id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tr2 = RTMS_EX_H("idle",4,1768189029);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(920, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("description",11,801826414);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Waiting for input",17,1804122484);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(921, "description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("not initial by default",22,607839860);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(925, "is_initial", loc1));
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("not final by default",20,2019729780);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(926, "is_final", loc1));
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_spec_state_initial_final */
void F98_1701 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_state_initial_final";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1731);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1731);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000030, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("start",5,1953426548);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Initial state",13,456604773);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(928, "set_initial", loc1))(loc1, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("is_initial",10,153132140);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(925, "is_initial", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	RTDBGAL(1, 0xF8000030, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-002",5,758770226);
	ur1 = tr2;
	tr3 = RTMS_EX_H("end",3,6647396);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Final state",11,1698673509);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(929, "set_final", loc1))(loc1, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("is_final",8,1880034924);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(926, "is_final", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_spec_state_screen_association */
void F98_1702 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_state_screen_association";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLR(9,loc2);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1732);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1732);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000030, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("idle",4,1768189029);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("no screen initially",19,680660345);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(927, "has_screen", loc1))(loc1)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("SCR-001",7,1863641393);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(930, "set_screen_id", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has screen",10,917423470);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(927, "has_screen", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(922, "screen_id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("screen_id",9,1810566500);
		ur1 = tr1;
		tr2 = RTMS_EX_H("SCR-001",7,1863641393);
		ur2 = tr2;
		ur3 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	} else {
		RTHOOK(7);
		tr1 = RTMS_EX_H("screen_id_attached",18,1816176228);
		ur1 = tr1;
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_spec_state_actions */
void F98_1703 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_state_actions";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1733);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1733);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000030, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("idle",4,1768189029);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("show_prompt",11,1980132212);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(931, "add_entry_action", loc1))(loc1, ur1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("clear_prompt",12,2135298932);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(932, "add_exit_action", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("entry action count",18,59826548);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(923, "entry_actions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("exit action count",17,257138036);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(924, "exit_actions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("has entry action",16,1950956142);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(923, "entry_actions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "i_th", tr2))(tr2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("show_prompt",11,1980132212);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr3))(tr3, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("has exit action",15,1860528750);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(924, "exit_actions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "i_th", tr2))(tr2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("clear_prompt",12,2135298932);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr3))(tr3, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_spec_transition_creation */
void F98_1704 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_transition_creation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,tr5);
	RTLR(9,ur4);
	RTLR(10,tr6);
	RTLR(11,ur5);
	RTLR(12,Current);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1734);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1734);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000027, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(39, 0x01).id);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	ur1 = tr2;
	tr3 = RTMS_EX_H("run",3,7501166);
	ur2 = tr3;
	tr4 = RTMS_EX_H("S-001",5,758770225);
	ur3 = tr4;
	tr5 = RTMS_EX_H("S-002",5,758770226);
	ur4 = tr5;
	tr6 = RTMS_EX_H("run command",11,448918116);
	ur5 = tr6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(798, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x, ur5x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	ur1 = tr1;
	tr2 = RTMS_EX_H("T-001",5,758777905);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(799, "id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("event",5,1987134580);
	ur1 = tr1;
	tr2 = RTMS_EX_H("run",3,7501166);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(800, "event", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("from",4,1718775661);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(801, "from_state_id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("to",2,29807);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-002",5,758770226);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(802, "to_state_id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("label",5,1634667884);
	ur1 = tr1;
	tr2 = RTMS_EX_H("run command",11,448918116);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(803, "label", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("not self-loop",13,911080560);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(805, "is_self_loop", loc1))(loc1)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ub1
}

/* {LIB_TESTS}.test_spec_transition_self_loop */
void F98_1705 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_transition_self_loop";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,tr5);
	RTLR(9,ur4);
	RTLR(10,tr6);
	RTLR(11,ur5);
	RTLR(12,Current);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1735);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1735);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000027, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(39, 0x01).id);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	ur1 = tr2;
	tr3 = RTMS_EX_H("retry",5,1703005817);
	ur2 = tr3;
	tr4 = RTMS_EX_H("S-001",5,758770225);
	ur3 = tr4;
	tr5 = RTMS_EX_H("S-001",5,758770225);
	ur4 = tr5;
	tr6 = RTMS_EX_H("retry",5,1703005817);
	ur5 = tr6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(798, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x, ur5x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is self-loop",12,667200624);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(805, "is_self_loop", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ub1
}

/* {LIB_TESTS}.test_spec_transition_requirements */
void F98_1706 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_transition_requirements";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,tr5);
	RTLR(9,ur4);
	RTLR(10,tr6);
	RTLR(11,ur5);
	RTLR(12,Current);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1736);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1736);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000027, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(39, 0x01).id);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	ur1 = tr2;
	tr3 = RTMS_EX_H("run",3,7501166);
	ur2 = tr3;
	tr4 = RTMS_EX_H("S-001",5,758770225);
	ur3 = tr4;
	tr5 = RTMS_EX_H("S-002",5,758770226);
	ur4 = tr5;
	tr6 = RTMS_EX_H("run",3,7501166);
	ur5 = tr6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(798, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x, ur5x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("FR-001",6,896388145);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(806, "add_requirement", loc1))(loc1, ur1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("UC-001",6,925764145);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(806, "add_requirement", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("requirement count",17,1278510196);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(804, "requirements", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("has FR-001",10,1815184177);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(804, "requirements", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "i_th", tr2))(tr2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr3))(tr3, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("has UC-001",10,1844560177);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(804, "requirements", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "i_th", tr2))(tr2, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("UC-001",6,925764145);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr3))(tr3, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_spec_screen_creation */
void F98_1707 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_screen_creation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1737);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1737);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000031, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(49, 0x01).id);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	ur1 = tr2;
	tr3 = RTMS_EX_H("Main Prompt",11,1331902324);
	ur2 = tr3;
	tr4 = RTMS_EX_H("CLI prompt",10,1424465780);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(933, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	ur1 = tr1;
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(934, "id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Main Prompt",11,1331902324);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(935, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("description",11,801826414);
	ur1 = tr1;
	tr2 = RTMS_EX_H("CLI prompt",10,1424465780);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(936, "description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("widgets empty",13,625152889);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(937, "widgets", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4371, "is_empty", tr2))(tr2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_spec_screen_widgets */
void F98_1708 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_screen_widgets";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,loc2);
	RTLR(9,Current);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1738);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1738);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000031, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(49, 0x01).id);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	ur1 = tr2;
	tr3 = RTMS_EX_H("Main",4,1298229614);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(933, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002A, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("button",6,2147362158);
	ur1 = tr2;
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Click me",8,543627621);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(942, "add_widget", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("widget count",12,955978868);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(937, "widgets", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("find widget by id",17,205327460);
	ur1 = tr1;
	tr2 = RTMS_EX_H("btn1",4,1651797553);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "widget_by_id", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("widget type filter",18,680552562);
	ur1 = tr1;
	tr2 = RTMS_EX_H("button",6,2147362158);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(940, "widgets_of_type", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_spec_widget_creation */
void F98_1709 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_widget_creation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1739);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1739);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("button",6,2147362158);
	ur1 = tr2;
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Submit",6,1815420788);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("type",4,1954115685);
	ur1 = tr1;
	tr2 = RTMS_EX_H("button",6,2147362158);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(839, "widget_type", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("id",2,26980);
	ur1 = tr1;
	tr2 = RTMS_EX_H("btn1",4,1651797553);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(840, "id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("label",5,1634667884);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Submit",6,1815420788);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(841, "label", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("is_button",9,347600750);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(846, "is_button", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_spec_widget_types */
void F98_1710 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_widget_types";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1740);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1740);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("text",4,1952807028);
	ur1 = tr2;
	tr3 = RTMS_EX_H("lbl1",4,1818389553);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Hello",5,1702157423);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_text",7,1340871028);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(847, "is_text", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	RTDBGAL(1, 0xF800002A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("text_field",10,1098830436);
	ur1 = tr2;
	tr3 = RTMS_EX_H("inp1",4,1768845361);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("is_text_field",13,111261284);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(848, "is_text_field", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	RTDBGAL(1, 0xF800002A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("progress_bar",12,1044565874);
	ur1 = tr2;
	tr3 = RTMS_EX_H("prog1",5,1920763697);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("is_progress_bar",15,459073906);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(849, "is_progress_bar", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	RTDBGAL(1, 0xF800002A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("checkbox",8,681675896);
	ur1 = tr2;
	tr3 = RTMS_EX_H("chk1",4,1667787569);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Accept",6,1796147828);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(7,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tr1 = RTMS_EX_H("is_checkbox",11,1846495608);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(850, "is_checkbox", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	RTDBGAL(1, 0xF800002A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("dropdown",8,1323285614);
	ur1 = tr2;
	tr3 = RTMS_EX_H("sel1",4,1936026673);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Choose",6,2002101093);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(9,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTMS_EX_H("is_dropdown",11,340625518);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(851, "is_dropdown", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_spec_widget_position_size */
void F98_1711 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_widget_position_size";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1741);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1741);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("button",6,2147362158);
	ur1 = tr2;
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	ur2 = tr3;
	tr4 = RTMS_EX_H("OK",2,20299);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 100L);
	ui4_2 = ((EIF_INTEGER_32) 200L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(852, "set_position", loc1))(loc1, ui4_1x, ui4_2x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 80L);
	ui4_2 = ((EIF_INTEGER_32) 25L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(853, "set_size", loc1))(loc1, ui4_1x, ui4_2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("x",1,120);
	ur1 = tr1;
	ur2 = RTLN(eif_new_type(317, 0x00).id);
	*(EIF_INTEGER_32 *)ur2 = ((EIF_INTEGER_32) 100L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(842, "x", loc1));
	ur3 = RTLN(eif_new_type(317, 0x00).id);
	*(EIF_INTEGER_32 *)ur3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("y",1,121);
	ur1 = tr1;
	ur2 = RTLN(eif_new_type(317, 0x00).id);
	*(EIF_INTEGER_32 *)ur2 = ((EIF_INTEGER_32) 200L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(843, "y", loc1));
	ur3 = RTLN(eif_new_type(317, 0x00).id);
	*(EIF_INTEGER_32 *)ur3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("width",5,1769105000);
	ur1 = tr1;
	ur2 = RTLN(eif_new_type(317, 0x00).id);
	*(EIF_INTEGER_32 *)ur2 = ((EIF_INTEGER_32) 80L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(844, "width", loc1));
	ur3 = RTLN(eif_new_type(317, 0x00).id);
	*(EIF_INTEGER_32 *)ur3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("height",6,1973632628);
	ur1 = tr1;
	ur2 = RTLN(eif_new_type(317, 0x00).id);
	*(EIF_INTEGER_32 *)ur2 = ((EIF_INTEGER_32) 25L);
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(845, "height", loc1));
	ur3 = RTLN(eif_new_type(317, 0x00).id);
	*(EIF_INTEGER_32 *)ur3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
}

/* {LIB_TESTS}.test_spec_widget_display_text */
void F98_1712 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_widget_display_text";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1742);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1742);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("button",6,2147362158);
	ur1 = tr2;
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	ur2 = tr3;
	tr4 = RTMS_EX_H("OK",2,20299);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("button display",14,120877689);
	ur1 = tr1;
	tr2 = RTMS_EX_H("[button] btn1: \"OK\"",19,1483033634);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(854, "display_text", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	RTDBGAL(1, 0xF800002A, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("checkbox",8,681675896);
	ur1 = tr2;
	tr3 = RTMS_EX_H("chk1",4,1667787569);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Accept",6,1796147828);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("checkbox display",16,1214910073);
	ur1 = tr1;
	tr2 = RTMS_EX_H("[checkbox] chk1: \"Accept\"",25,1048033314);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(854, "display_text", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
}

/* {LIB_TESTS}.test_spec_document_creation */
void F98_1713 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_document_creation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,ur3);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1743);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1743);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("Test App",8,82952304);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0.0",5,775285808);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("name",4,1851878757);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Test App",8,82952304);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(867, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("version",7,1397649262);
	ur1 = tr1;
	tr2 = RTMS_EX_H("1.0.0",5,775285808);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(868, "version", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("states empty",12,424744569);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, "states", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4371, "is_empty", tr2))(tr2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("transitions empty",17,1905525113);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(870, "transitions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4371, "is_empty", tr2))(tr2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("screens empty",13,1240463993);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(871, "screens", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4371, "is_empty", tr2))(tr2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_spec_document_add_elements */
void F98_1714 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_document_add_elements";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(16);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLR(9,Current);
	RTLR(10,loc3);
	RTLR(11,tr5);
	RTLR(12,ur4);
	RTLR(13,tr6);
	RTLR(14,ur5);
	RTLR(15,loc4);
	RTLIU(16);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1744);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1744);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("Test",4,1415934836);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000030, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("idle",4,1768189029);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("state count",11,527377780);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, "states", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	RTDBGAL(3, 0xF8000027, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(39, 0x01).id);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	ur1 = tr2;
	tr3 = RTMS_EX_H("run",3,7501166);
	ur2 = tr3;
	tr4 = RTMS_EX_H("S-001",5,758770225);
	ur3 = tr4;
	tr5 = RTMS_EX_H("S-002",5,758770226);
	ur4 = tr5;
	tr6 = RTMS_EX_H("run",3,7501166);
	ur5 = tr6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(798, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x, ur5x);
	RTNHOOK(5,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(882, "add_transition", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("transition count",16,1380409972);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(870, "transitions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	RTDBGAL(4, 0xF8000031, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(49, 0x01).id);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	ur1 = tr2;
	tr3 = RTMS_EX_H("Main",4,1298229614);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(933, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(8,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(883, "add_screen", loc1))(loc1, ur1x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("screen count",12,228574836);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(871, "screens", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ub1
}

/* {LIB_TESTS}.test_spec_document_queries */
void F98_1715 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_document_queries";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLR(9,loc3);
	RTLR(10,Current);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1745);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1745);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("Test",4,1415934836);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000030, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("idle",4,1768189029);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(928, "set_initial", loc2))(loc2, ub1x);
	RTHOOK(4);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(5);
	RTDBGAL(3, 0xF8000030, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-002",5,758770226);
	ur1 = tr2;
	tr3 = RTMS_EX_H("done",4,1685024357);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(5,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(929, "set_final", loc3))(loc3, ub1x);
	RTHOOK(7);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("find state by id",16,1130600036);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(873, "state_by_id", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("initial state",13,482524773);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(875, "initial_state", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("final states count",18,1259783796);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(876, "final_states", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_loader_from_string */
void F98_1716 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_loader_from_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLR(8,tr3);
	RTLR(9,ur3);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1746);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1746);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("doc loaded",10,1171999076);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	loc3 = RTCCL(loc2);
	if (EIF_TEST(loc3)) {
		RTHOOK(5);
		tr1 = RTMS_EX_H("name",4,1851878757);
		ur1 = tr1;
		tr2 = RTMS_EX_H("Test App",8,82952304);
		ur2 = tr2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(867, "name", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur3 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
		RTHOOK(6);
		tr1 = RTMS_EX_H("version",7,1397649262);
		ur1 = tr1;
		tr2 = RTMS_EX_H("1.0.0",5,775285808);
		ur2 = tr2;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(868, "version", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur3 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
		RTHOOK(7);
		tr1 = RTMS_EX_H("states loaded",13,1121685348);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, "states", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
		ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(8);
		tr1 = RTMS_EX_H("transitions loaded",18,97578596);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(870, "transitions", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
		ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(9);
		tr1 = RTMS_EX_H("screens loaded",14,1640316516);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(871, "screens", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
		ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_loader_states_parsed */
void F98_1717 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_loader_states_parsed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,loc4);
	RTLR(8,ur2);
	RTLR(9,tr3);
	RTLR(10,ur3);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1747);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1747);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	loc3 = RTCCL(loc2);
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("initial state exists",20,1720477555);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(875, "initial_state", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ub1 = (EIF_BOOLEAN)(tr2 != NULL);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(875, "initial_state", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTHOOK(6);
			tr1 = RTMS_EX_H("initial name",12,101305701);
			ur1 = tr1;
			tr2 = RTMS_EX_H("idle",4,1768189029);
			ur2 = tr2;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(920, "name", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur3 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("has entry actions",17,1229457011);
			ur1 = tr1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(923, "entry_actions", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
			ub1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		}
		RTHOOK(8);
		tr1 = RTMS_EX_H("final states exist",18,1410008948);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(876, "final_states", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
		ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_loader_transitions_parsed */
void F98_1718 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_loader_transitions_parsed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc4);
	RTLR(6,loc3);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1748);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1748);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	loc4 = RTCCL(loc2);
	if (EIF_TEST(loc4)) {
		RTHOOK(4);
		RTDBGAL(3, 0xF80001BE, 0, 0); /* loc3 */
		tr1 = RTMS_EX_H("S-001",5,758770225);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(877, "transitions_from", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		tr1 = RTMS_EX_H("transitions from S-001",22,567754033);
		ur1 = tr1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", loc3))(loc3)).it_i4);
		ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(6);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4371, "is_empty", loc3))(loc3)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(7);
			tr1 = RTMS_EX_H("has requirements",16,1467906675);
			ur1 = tr1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4720, "first", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(804, "requirements", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr3))(tr3)).it_i4);
			ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_loader_screens_parsed */
void F98_1719 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_loader_screens_parsed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1749);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1749);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	loc3 = RTCCL(loc2);
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("SCR-001",7,1863641393);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(874, "screen_by_id", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTHOOK(5);
			tr1 = RTMS_EX_H("widgets loaded",14,886699876);
			ur1 = tr1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(937, "widgets", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
			ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
			RTHOOK(6);
			tr1 = RTMS_EX_H("has text widget",15,1348096372);
			ur1 = tr1;
			tr2 = RTMS_EX_H("prompt",6,2090519668);
			ur2 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "widget_by_id", loc4))(loc4, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ub1 = (EIF_BOOLEAN)(tr2 != NULL);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
			RTHOOK(7);
			tr1 = RTMS_EX_H("has input widget",16,120907892);
			ur1 = tr1;
			tr2 = RTMS_EX_H("input",5,1853670260);
			ur2 = tr2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "widget_by_id", loc4))(loc4, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ub1 = (EIF_BOOLEAN)(tr2 != NULL);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		} else {
			RTHOOK(8);
			tr1 = RTMS_EX_H("screen SCR-001 found",20,1537775204);
			ur1 = tr1;
			ub1 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_loader_traceability_parsed */
void F98_1720 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_loader_traceability_parsed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1750);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1750);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	loc3 = RTCCL(loc2);
	if (EIF_TEST(loc3)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("req-to-states loaded",20,654666340);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(872, "traceability", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = RTMS_EX_H("FR-001",6,896388145);
		ur2 = tr3;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(893, "states_for_requirement", tr2))(tr2, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr3))(tr3)).it_i4);
		ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(5);
		tr1 = RTMS_EX_H("state-to-screen loaded",22,1447772004);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(872, "traceability", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = RTMS_EX_H("S-001",5,758770225);
		ur2 = tr3;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(894, "screen_for_state", tr2))(tr2, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ub1 = (EIF_BOOLEAN)(tr3 != NULL);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_traceability_matrix */
void F98_1721 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_traceability_matrix";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,tr2);
	RTLR(7,loc3);
	RTLR(8,ur3);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1751);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1751);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002E, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(46, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(890, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF80001BE, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,446,0xFF01,357,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4897, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4401, "extend", loc2))(loc2, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("S-002",5,758770226);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4401, "extend", loc2))(loc2, ur1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("FR-001",6,896388145);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(900, "add_requirement_to_states", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr1;
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(901, "add_state_to_screen", loc1))(loc1, ur1x, ur2x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("requirement exists",18,684681843);
	ur1 = tr1;
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(893, "states_for_requirement", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("screen mapping",14,1952294759);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(894, "screen_for_state", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(894, "screen_for_state", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		RTHOOK(10);
		tr1 = RTMS_EX_H("screen value",12,2140731493);
		ur1 = tr1;
		tr2 = RTMS_EX_H("SCR-001",7,1863641393);
		ur2 = tr2;
		ur3 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	} else {
		RTHOOK(11);
		tr1 = RTMS_EX_H("screen_value_attached",21,677952100);
		ur1 = tr1;
		ub1 = (EIF_BOOLEAN) 0;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_traceability_reverse_lookup */
void F98_1722 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_traceability_reverse_lookup";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1752);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1752);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002E, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(46, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(890, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF80001BE, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,446,0xFF01,357,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4897, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4401, "extend", loc2))(loc2, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("S-002",5,758770226);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4401, "extend", loc2))(loc2, ur1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("FR-001",6,896388145);
	ur1 = tr1;
	ur2 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(900, "add_requirement_to_states", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("FR-002",6,896388146);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(902, "add_requirement_state", loc1))(loc1, ur1x, ur2x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("requirements for S-001",22,591392561);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(897, "requirements_for_state", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("requirements for S-002",22,591392562);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-002",5,758770226);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(897, "requirements_for_state", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_state_diagram_generator */
void F98_1723 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_state_diagram_generator";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc5);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,tr2);
	RTLR(9,ur2);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 97, Current, 5, 0, 1753);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1753);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	loc5 = RTCCL(loc2);
	if (EIF_TEST(loc5)) {
		RTHOOK(4);
		RTDBGAL(3, 0xF800002D, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(45, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(884, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(4, 0xF8000165, 0, 0); /* loc4 */
		ur1 = RTCCL(loc5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(888, "generate_dot", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		tr1 = RTMS_EX_H("DOT not empty",13,528035193);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", loc4))(loc4)).it_b);
		ub1 = (EIF_BOOLEAN) !tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(7);
		tr1 = RTMS_EX_H("has digraph",11,2054835560);
		ur1 = tr1;
		tr2 = RTMS_EX_H("digraph",7,918350440);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc4))(loc4, ur2x)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(8);
		tr1 = RTMS_EX_H("has idle state",14,1134164837);
		ur1 = tr1;
		tr2 = RTMS_EX_H("idle",4,1768189029);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc4))(loc4, ur2x)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(9);
		tr1 = RTMS_EX_H("has processing state",20,1897643877);
		ur1 = tr1;
		tr2 = RTMS_EX_H("processing",10,1808455271);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc4))(loc4, ur2x)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_state_diagram_svg_generation */
void F98_1724 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_state_diagram_svg_generation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc5);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,tr2);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 97, Current, 5, 0, 1754);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1754);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	loc5 = RTCCL(loc2);
	if (EIF_TEST(loc5)) {
		RTHOOK(4);
		RTDBGAL(3, 0xF800002D, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(45, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(884, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(4, 0xF800002B, 0, 0); /* loc4 */
		ur1 = RTCCL(loc5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(886, "generate", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		tr1 = RTMS_EX_H("is_success",10,619583603);
		ur1 = tr1;
		tb1 = *(EIF_BOOLEAN *)(loc4 + RTVA(861, "is_success", loc4));
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(7);
		tr1 = RTMS_EX_H("content not empty",17,166253177);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(859, "content", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", tr2))(tr2)).it_b);
		ub1 = (EIF_BOOLEAN) !tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(8);
		tr1 = RTMS_EX_H("is SVG",6,749654087);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(864, "is_svg", loc4))(loc4)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_screen_mockup_generator */
void F98_1725 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_screen_mockup_generator";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,loc2);
	RTLR(9,loc3);
	RTLR(10,loc4);
	RTLR(11,Current);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1755);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1755);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000031, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(49, 0x01).id);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	ur1 = tr2;
	tr3 = RTMS_EX_H("Test Screen",11,148143470);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(933, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002A, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("button",6,2147362158);
	ur1 = tr2;
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	ur2 = tr3;
	tr4 = RTMS_EX_H("OK",2,20299);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	ui4_2 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(852, "set_position", loc2))(loc2, ui4_1x, ui4_2x);
	RTHOOK(4);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(942, "add_widget", loc1))(loc1, ur1x);
	RTHOOK(5);
	RTDBGAL(3, 0xF8000028, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(40, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(807, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(4, 0xF8000165, 0, 0); /* loc4 */
	ur1 = RTCCL(loc1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(811, "generate_dot", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTMS_EX_H("DOT not empty",13,528035193);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", loc4))(loc4)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("has digraph",11,2054835560);
	ur1 = tr1;
	tr2 = RTMS_EX_H("digraph",7,918350440);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc4))(loc4, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("has record shape",16,1633539173);
	ur1 = tr1;
	tr2 = RTMS_EX_H("record",6,1893156964);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc4))(loc4, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {LIB_TESTS}.test_screen_mockup_all */
void F98_1726 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_screen_mockup_all";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc5);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 97, Current, 6, 0, 1756);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1756);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	loc5 = RTCCL(loc2);
	if (EIF_TEST(loc5)) {
		RTHOOK(4);
		RTDBGAL(3, 0xF8000028, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(40, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(807, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(4, 0xF80001BE, 0, 0); /* loc4 */
		ur1 = RTCCL(loc5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(810, "generate_all", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		tr1 = RTMS_EX_H("result count matches screens",28,583896947);
		ur1 = tr1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", loc4))(loc4)).it_i4);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(871, "screens", loc5))(loc5)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
		ub1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(7);
		tr1 = RTMS_EX_H("all successful",14,1645779052);
		ur1 = tr1;
		RTNHOOK(7,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr2);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc6))(loc6)).it_b);
			if (tb2) break;
			RTHOOK(8);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb3 = *(EIF_BOOLEAN *)(tr2 + RTVA(861, "is_success", tr2));
			tb1 = tb3;
			RTNHOOK(8,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc6))(loc6);
		}
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_traceability_report_generator */
void F98_1727 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_traceability_report_generator";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc5);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,tr2);
	RTLR(9,tr3);
	RTLR(10,ur2);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 97, Current, 5, 0, 1757);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1757);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	loc5 = RTCCL(loc2);
	if (EIF_TEST(loc5)) {
		RTHOOK(4);
		RTDBGAL(3, 0xF8000034, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(52, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(970, Dtype(tr1)))(tr1);
		RTNHOOK(4,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(4, 0xF800002B, 0, 0); /* loc4 */
		ur1 = RTCCL(loc5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(971, "generate", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		tr1 = RTMS_EX_H("is_success",10,619583603);
		ur1 = tr1;
		tb1 = *(EIF_BOOLEAN *)(loc4 + RTVA(861, "is_success", loc4));
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(7);
		tr1 = RTMS_EX_H("is markdown",11,961166446);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(865, "is_markdown", loc4))(loc4)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(8);
		tr1 = RTMS_EX_H("has header",10,610533746);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(859, "content", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = RTMS_EX_H("# Traceability Matrix",21,34159736);
		ur2 = tr3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", tr2))(tr2, ur2x)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(9);
		tr1 = RTMS_EX_H("has states section",18,677644398);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(859, "content", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = RTMS_EX_H("## States",9,650350707);
		ur2 = tr3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", tr2))(tr2, ur2x)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(10);
		tr1 = RTMS_EX_H("has requirements section",24,49342574);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(859, "content", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = RTMS_EX_H("## Requirements",15,1759221619);
		ur2 = tr3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", tr2))(tr2, ur2x)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_simple_spec_viz_facade */
void F98_1728 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_simple_spec_viz_facade";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc3);
	RTLR(6,ur2);
	RTLR(7,tr2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1758);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1758);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000033, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(51, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(957, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(964, "load_from_json", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("doc loaded",10,1171999076);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	loc3 = RTCCL(loc2);
	if (EIF_TEST(loc3)) {
		RTHOOK(5);
		tr1 = RTMS_EX_H("state diagram success",21,930223475);
		ur1 = tr1;
		ur2 = RTCCL(loc3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(965, "generate_state_diagram", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = *(EIF_BOOLEAN *)(tr2 + RTVA(861, "is_success", tr2));
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(6);
		tr1 = RTMS_EX_H("mockups count",13,929473908);
		ur1 = tr1;
		ur2 = RTCCL(loc3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(966, "generate_screen_mockups", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
		ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(7);
		tr1 = RTMS_EX_H("traceability success",20,1121148275);
		ur1 = tr1;
		ur2 = RTCCL(loc3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(967, "generate_traceability_report", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = *(EIF_BOOLEAN *)(tr2 + RTVA(861, "is_success", tr2));
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_end_to_end_file_generation */
void F98_1729 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_end_to_end_file_generation";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,tr2);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 97, Current, 0, 0, 1759);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1759);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("devkit_cli.json",15,731244142);
	ur1 = tr1;
	tr2 = RTMS_EX_H("DevKit CLI",10,1802431049);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1687, dtype))(Current, ur1x, ur2x);
	RTHOOK(2);
	tr1 = RTMS_EX_H("devkit_windows.json",19,42889582);
	ur1 = tr1;
	tr2 = RTMS_EX_H("DevKit Windows GUI",18,461934665);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1687, dtype))(Current, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
#undef ur2
}

/* {LIB_TESTS}.test_specification_pipeline */
void F98_1730 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "test_specification_pipeline";
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
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(17);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc4);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc1);
	RTLR(10,loc2);
	RTLR(11,Current);
	RTLR(12,loc9);
	RTLR(13,ur2);
	RTLR(14,ur3);
	RTLR(15,loc7);
	RTLR(16,loc8);
	RTLIU(17);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 97, Current, 9, 2, 1760);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1760);
	RTCC(arg1, 97, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg2, 97, l_feature_name, 2, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("input_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("input_path_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", arg1))(arg1)).it_b);
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
	RTDBGAL(3, 0xF8000165, 0, 0); /* loc3 */
	tr1 = RTMS_EX_H("D:\\prod\\simple_spec_viz\\test\\test_data\\outputs",46,1325204595);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAL(4, 0xF8000165, 0, 0); /* loc4 */
	tr1 = RTMS_EX_H("D:\\prod\\simple_spec_viz\\test\\test_data\\inputs\\",46,522812508);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(6);
	RTDBGAL(5, 0xF8000165, 0, 0); /* loc5 */
	tr1 = RTMS_EX_H("/state_machine.svg",18,630250343);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	RTDBGAL(6, 0xF8000165, 0, 0); /* loc6 */
	tr1 = RTMS_EX_H("/traceability.md",16,1751101284);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", loc3))(loc3, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAL(1, 0xF8000033, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(51, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(957, Dtype(tr1)))(tr1);
	RTNHOOK(8,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	ur1 = RTCCL(loc4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(963, "load_from_file", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	tr1 = RTMS_EX_H("doc loaded: ",12,1368646688);
	ur1 = RTCCL(arg2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	ub1 = (EIF_BOOLEAN)(loc2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(11);
	loc9 = RTCCL(loc2);
	if (EIF_TEST(loc9)) {
		RTHOOK(12);
		tr1 = RTMS_EX_H("generate_all succeeded: ",24,866269984);
		ur1 = RTCCL(arg2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(loc9);
		ur3 = RTCCL(loc3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(968, "generate_all", loc1))(loc1, ur2x, ur3x)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(13);
		RTDBGAL(7, 0xF800011B, 0, 0); /* loc7 */
		tr1 = RTLN(eif_new_type(283, 0x01).id);
		ur1 = RTCCL(loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4451, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(13,1);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3712, "exists", loc7))(loc7)).it_b);
		if (tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3713, "is_open_read", loc7))(loc7)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(15);
			tr1 = RTMS_EX_H("state_machine.svg has content: ",31,1678426912);
			ur1 = RTCCL(arg2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", loc7))(loc7)).it_i4);
			ub1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
			RTHOOK(16);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3722, "close", loc7))(loc7);
		} else {
			RTHOOK(17);
			tr1 = RTMS_EX_H("state_machine.svg created: ",27,432653600);
			ur1 = RTCCL(arg2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			ub1 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		}
		RTHOOK(18);
		RTDBGAL(8, 0xF800011B, 0, 0); /* loc8 */
		tr1 = RTLN(eif_new_type(283, 0x01).id);
		ur1 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4451, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(18,1);
		loc8 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(19);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3712, "exists", loc8))(loc8)).it_b);
		if (tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3713, "is_open_read", loc8))(loc8)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(20);
			tr1 = RTMS_EX_H("traceability.md has content: ",29,2091122208);
			ur1 = RTCCL(arg2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", loc8))(loc8)).it_i4);
			ub1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
			RTHOOK(21);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3722, "close", loc8))(loc8);
		} else {
			RTHOOK(22);
			tr1 = RTMS_EX_H("traceability.md created: ",25,581744672);
			ur1 = RTCCL(arg2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			ub1 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		}
		RTHOOK(23);
		tr1 = RTMS_EX_H("screen mockups created: ",24,1417542432);
		ur1 = RTCCL(arg2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(871, "screens", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr1))(tr1)).it_i4);
		ub1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
#undef arg2
#undef arg1
}

/* {LIB_TESTS}.test_spec_viz_result_success */
void F98_1731 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_viz_result_success";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1761);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1761);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002B, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(43, 0x01).id);
	tr2 = RTMS_EX_H("test",4,1952805748);
	ur1 = tr2;
	tr3 = RTMS_EX_H("<svg>...</svg>",14,333340478);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(856, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is_success",10,619583603);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(861, "is_success", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("not failure",11,1839278181);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, "is_failure", loc1))(loc1)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("content set",11,1823309428);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(859, "content", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", tr2))(tr2)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("no error",8,2042790770);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(860, "error_message", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", tr2))(tr2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_spec_viz_result_failure */
void F98_1732 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_viz_result_failure";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1762);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1762);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002B, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(43, 0x01).id);
	tr2 = RTMS_EX_H("test",4,1952805748);
	ur1 = tr2;
	tr3 = RTMS_EX_H("Something went wrong",20,178397287);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(857, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("not success",11,1827185267);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(861, "is_success", loc1));
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("is_failure",10,631676517);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, "is_failure", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("content empty",13,321594745);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(859, "content", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", tr2))(tr2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("has error",9,1597311858);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(860, "error_message", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", tr2))(tr2)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_svg_renderer_rect */
void F98_1733 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_svg_renderer_rect";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1763);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1763);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000029, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(41, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000165, 0, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 10L);
	ui4_2 = ((EIF_INTEGER_32) 20L);
	ui4_3 = ((EIF_INTEGER_32) 100L);
	ui4_4 = ((EIF_INTEGER_32) 50L);
	tr1 = RTMS_EX_H("#FFFFFF",7,1753412166);
	ur1 = tr1;
	tr2 = RTMS_EX_H("#000000",7,1339443248);
	ur2 = tr2;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(818, "create_rect", loc1))(loc1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("has rect tag",12,1092162151);
	ur1 = tr1;
	tr2 = RTMS_EX_H("<rect",5,1919708020);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc2))(loc2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has x",5,1635733624);
	ur1 = tr1;
	tr2 = RTMS_EX_H("x=\"10\"",6,810047010);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc2))(loc2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("has y",5,1635733625);
	ur1 = tr1;
	tr2 = RTMS_EX_H("y=\"20\"",6,812078626);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc2))(loc2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("has width",9,1445538920);
	ur1 = tr1;
	tr2 = RTMS_EX_H("width=\"100\"",11,515221026);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc2))(loc2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("has height",10,744948852);
	ur1 = tr1;
	tr2 = RTMS_EX_H("height=\"50\"",11,291926050);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc2))(loc2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ub1
}

/* {LIB_TESTS}.test_svg_renderer_text */
void F98_1734 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_svg_renderer_text";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1764);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1764);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000029, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(41, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000165, 0, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 10L);
	ui4_2 = ((EIF_INTEGER_32) 20L);
	tr1 = RTMS_EX_H("Hello",5,1702157423);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(835, "font_sans_serif", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	ui4_3 = ((EIF_INTEGER_32) 12L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(820, "create_text", loc1))(loc1, ui4_1x, ui4_2x, ur1x, ur2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("has text tag",12,1133910631);
	ur1 = tr1;
	tr2 = RTMS_EX_H("<text",5,1953267828);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc2))(loc2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("has content",11,1597185396);
	ur1 = tr1;
	tr2 = RTMS_EX_H("Hello",5,1702157423);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc2))(loc2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
}

/* {LIB_TESTS}.test_svg_renderer_xml_escape */
void F98_1735 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_svg_renderer_xml_escape";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1765);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1765);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000029, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(41, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000165, 0, 0); /* loc2 */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	tr1 = RTMS_EX_H("<test>&value",12,1005195109);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(835, "font_sans_serif", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr2);
	ui4_3 = ((EIF_INTEGER_32) 10L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(820, "create_text", loc1))(loc1, ui4_1x, ui4_2x, ur1x, ur2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("escaped lt",10,2032103028);
	ur1 = tr1;
	tr2 = RTMS_EX_H("&lt;",4,644641851);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc2))(loc2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("escaped amp",11,527539056);
	ur1 = tr1;
	tr2 = RTMS_EX_H("&amp;",5,1634853947);
	ur2 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", loc2))(loc2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
}

/* {LIB_TESTS}.test_spec_requirement */
void F98_1736 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_requirement";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,tr3);
	RTLR(6,ur3);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1766);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1766);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(47, 0x01).id);
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(903, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("id",2,26980);
	ur1 = tr1;
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	ur2 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(904, "id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur3 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1552, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("is functional",13,2000899180);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(908, "is_functional", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("not use case",12,718821477);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(909, "is_use_case", loc1))(loc1)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(915, "add_state", loc1))(loc1, ur1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("T-001",5,758777905);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(916, "add_transition", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("coverage",8,60743269);
	ur1 = tr1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(912, "coverage_count", loc1))(loc1)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_spec_requirement_types */
void F98_1737 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_spec_requirement_types";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1767);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1767);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(47, 0x01).id);
	tr2 = RTMS_EX_H("FR-001",6,896388145);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(903, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("is functional",13,2000899180);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(908, "is_functional", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	RTDBGAL(1, 0xF800002F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(47, 0x01).id);
	tr2 = RTMS_EX_H("UC-001",6,925764145);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(903, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("is use case",11,1388956261);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(909, "is_use_case", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	RTDBGAL(1, 0xF800002F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(47, 0x01).id);
	tr2 = RTMS_EX_H("NFR-001",7,1500437041);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(903, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("is non-functional",17,2059246956);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(910, "is_non_functional", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(7);
	RTDBGAL(1, 0xF800002F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(47, 0x01).id);
	tr2 = RTMS_EX_H("DR-001",6,892455985);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(903, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(7,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tr1 = RTMS_EX_H("is design",9,837168750);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(911, "is_design", loc1))(loc1)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_empty_spec */
void F98_1738 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_empty_spec";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1768);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1768);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF8000165, 0, 0); /* loc3 */
	tr1 = RTMS_EX_H("{\"name\":\"Empty\",\"version\":\"1.0\",\"states\":[],\"transitions\":[],\"screens\":[],\"traceability\":{}}",92,220043389);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	ur1 = RTCCL(loc3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("loads empty spec",16,2019322979);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	loc4 = RTCCL(loc2);
	if (EIF_TEST(loc4)) {
		RTHOOK(6);
		tr1 = RTMS_EX_H("empty states",12,1374234483);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, "states", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4371, "is_empty", tr2))(tr2)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(7);
		tr1 = RTMS_EX_H("empty transitions",17,1142331763);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(870, "transitions", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4371, "is_empty", tr2))(tr2)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
		RTHOOK(8);
		tr1 = RTMS_EX_H("empty screens",13,1479866739);
		ur1 = tr1;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(871, "screens", loc4))(loc4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4371, "is_empty", tr2))(tr2)).it_b);
		ub1 = tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_single_state */
void F98_1739 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_single_state";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLR(9,loc3);
	RTLR(10,Current);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1769);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1769);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("Single",6,2016262757);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000030, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("only",4,1869507705);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Only state",10,1719993189);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(928, "set_initial", loc2))(loc2, ub1x);
	RTHOOK(4);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(929, "set_final", loc2))(loc2, ub1x);
	RTHOOK(5);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(6);
	RTDBGAL(3, 0xF800002D, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(45, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(884, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTMS_EX_H("generates for single state",26,1285525861);
	ur1 = tr1;
	ur2 = RTCCL(loc1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(886, "generate", loc3))(loc3, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = *(EIF_BOOLEAN *)(tr2 + RTVA(861, "is_success", tr2));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_max_states */
void F98_1740 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_max_states";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc3);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLR(9,ur3);
	RTLR(10,Current);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1770);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1770);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("Many",4,1298230905);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 100L))) break;
		RTHOOK(4);
		RTDBGAL(3, 0xF8000030, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(48, 0x01).id);
		tr2 = RTMS_EX_H("S-",2,21293);
		tr3 = eif_out__i4_s1(loc2);
		ur1 = RTCCL(tr3);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		tr2 = RTMS_EX_H("state_",6,1862008159);
		tr4 = eif_out__i4_s1(loc2);
		ur2 = RTCCL(tr4);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = RTCCL(tr4);
		tr2 = RTMS_EX_H("State ",6,1799093536);
		tr5 = eif_out__i4_s1(loc2);
		ur3 = RTCCL(tr5);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur3 = RTCCL(tr5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
		RTNHOOK(4,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
		RTHOOK(6);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(7);
	tr1 = RTMS_EX_H("can add 100 states",18,314647155);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, "states", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 100L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("queries still work",18,1975619179);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-50",4,1395471664);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(873, "state_by_id", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("lookup is correct",17,1975979124);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-100",5,758835760);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(873, "state_by_id", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_self_transitions_only */
void F98_1741 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_self_transitions_only";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(15);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLR(9,loc3);
	RTLR(10,tr5);
	RTLR(11,ur4);
	RTLR(12,tr6);
	RTLR(13,ur5);
	RTLR(14,Current);
	RTLIU(15);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1771);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1771);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("SelfLoop",8,810063728);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000030, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("retry",5,1703005817);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Retry state",11,1971560549);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(928, "set_initial", loc2))(loc2, ub1x);
	RTHOOK(4);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(5);
	RTDBGAL(3, 0xF8000027, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(39, 0x01).id);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	ur1 = tr2;
	tr3 = RTMS_EX_H("retry",5,1703005817);
	ur2 = tr3;
	tr4 = RTMS_EX_H("S-001",5,758770225);
	ur3 = tr4;
	tr5 = RTMS_EX_H("S-001",5,758770225);
	ur4 = tr5;
	tr6 = RTMS_EX_H("retry attempt",13,79714676);
	ur5 = tr6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(798, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x, ur5x);
	RTNHOOK(5,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(882, "add_transition", loc1))(loc1, ur1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("self-transitions work",21,1754087531);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(877, "transitions_from", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("detected self-loop",18,436237936);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(877, "transitions_from", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4720, "first", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(805, "is_self_loop", tr3))(tr3)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_unreachable_state */
void F98_1742 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_unreachable_state";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ur5x = {{0}, SK_REF};
#define ur5 ur5x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(17);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLR(9,loc3);
	RTLR(10,loc4);
	RTLR(11,loc5);
	RTLR(12,tr5);
	RTLR(13,ur4);
	RTLR(14,tr6);
	RTLR(15,ur5);
	RTLR(16,Current);
	RTLIU(17);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 97, Current, 5, 0, 1772);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1772);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("Unreachable",11,946301029);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000030, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("start",5,1953426548);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(928, "set_initial", loc2))(loc2, ub1x);
	RTHOOK(4);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(5);
	RTDBGAL(3, 0xF8000030, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-002",5,758770226);
	ur1 = tr2;
	tr3 = RTMS_EX_H("normal",6,2136892268);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(5,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(7);
	RTDBGAL(4, 0xF8000030, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-003",5,758770227);
	ur1 = tr2;
	tr3 = RTMS_EX_H("orphan",6,2104999278);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(7,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(9);
	RTDBGAL(5, 0xF8000027, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(39, 0x01).id);
	tr2 = RTMS_EX_H("T-001",5,758777905);
	ur1 = tr2;
	tr3 = RTMS_EX_H("go",2,26479);
	ur2 = tr3;
	tr4 = RTMS_EX_H("S-001",5,758770225);
	ur3 = tr4;
	tr5 = RTMS_EX_H("S-002",5,758770226);
	ur4 = tr5;
	tr6 = RTMS_EX_H("go to normal",12,1976202860);
	ur5 = tr6;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(798, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x, ur4x, ur5x);
	RTNHOOK(9,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	ur1 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(882, "add_transition", loc1))(loc1, ur1x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("S-003 exists",12,1666529651);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-003",5,758770227);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(873, "state_by_id", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("S-003 has no incoming",21,139848295);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-003",5,758770227);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(878, "transitions_to", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ur5
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_duplicate_prevention */
void F98_1743 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_duplicate_prevention";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLR(9,loc3);
	RTLR(10,Current);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1773);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1773);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("DupTest",7,1512670068);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000030, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("state1",6,1862008113);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(4);
	RTDBGAL(3, 0xF8000030, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("state2",6,1862008114);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Different name, same ID",23,996137540);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(4,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("first state added",17,447710820);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, "states", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_missing_screen_reference */
void F98_1744 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_missing_screen_reference";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLR(9,Current);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1774);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1774);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("MissingScreen",13,1515741806);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000030, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("orphan",6,2104999278);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Screen doesn\'t exist",20,1546644084);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("GHOST-001",9,1938707505);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(930, "set_screen_id", loc2))(loc2, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("state with missing screen added",31,1939529060);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, "states", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("screen lookup returns void",26,45657444);
	ur1 = tr1;
	tr2 = RTMS_EX_H("GHOST-001",9,1938707505);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(874, "screen_by_id", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 == NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_malformed_json */
void F98_1745 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_malformed_json";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr2);
	RTLR(7,loc4);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1775);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1775);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF8000165, 0, 0); /* loc3 */
	tr1 = RTMS_EX_H("[{\"name\":\"Bad\", \"unclosed\":]",28,1728017501);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	ur1 = RTCCL(loc3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("malformed JSON returns void",27,1575429732);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 == NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("error recorded",14,156308836);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(946, "last_error", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(946, "last_error", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = RTCCL(tr1);
	if (EIF_TEST(loc4)) {
		RTHOOK(7);
		tr1 = RTMS_EX_H("error message non-empty",23,1934402937);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", loc4))(loc4)).it_b);
		ub1 = (EIF_BOOLEAN) !tb1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_missing_required_field */
void F98_1746 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_missing_required_field";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1776);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1776);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(3, 0xF8000165, 0, 0); /* loc3 */
	tr1 = RTMS_EX_H("[{\"version\":\"1.0\",\"states\":[],\"transitions\":[],\"screens\":[]}]",61,1077059933);
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	ur1 = RTCCL(loc3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("missing field returns void",26,590590052);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 == NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("error recorded",14,156308836);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(946, "last_error", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_invalid_state_reference */
void F98_1747 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_invalid_state_reference";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,loc4);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1777);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1777);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF8000165, 0, 0); /* loc2 */
	tr1 = RTMS_EX_H("[{\"name\":\"BadRef\",\"version\":\"1.0\",\"states\":[{\"id\":\"S-001\",\"name\":\"state\",\"description\":\"\"}],\"transitions\":[{\"id\":\"T-001\",\"event\":\"go\",\"from\":\"S-001\",\"to\":\"GHOST\",\"label\":\"go\"}],\"screens\":[],\"traceability\":{}}]",209,1744066141);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF800002C, 0, 0); /* loc3 */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	loc4 = RTCCL(loc3);
	if (EIF_TEST(loc4)) {
		RTHOOK(5);
		tr1 = RTMS_EX_H("bad reference loaded",20,725788260);
		ur1 = tr1;
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	} else {
		RTHOOK(6);
		tr1 = RTMS_EX_H("bad reference rejected",22,2125019492);
		ur1 = tr1;
		ub1 = (EIF_BOOLEAN) 1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_empty_string_state_id */
void F98_1748 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_empty_string_state_id";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc3);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1778);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1778);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF8000165, 0, 0); /* loc2 */
	tr1 = RTMS_EX_H("[{\"name\":\"Bad\",\"version\":\"1.0\",\"states\":[{\"id\":\"\",\"name\":\"state\",\"description\":\"test\"}],\"transitions\":[],\"screens\":[],\"traceability\":{}}]",137,1232324957);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(3, 0xF800002C, 0, 0); /* loc3 */
	ur1 = RTCCL(loc2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("empty id causes error",21,137061234);
	ur1 = tr1;
	tb1 = '\01';
	if (!(EIF_BOOLEAN)(loc3 == NULL)) {
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(946, "last_error", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (EIF_BOOLEAN)(tr2 != NULL);
	}
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_unicode_strings */
void F98_1749 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_unicode_strings";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLR(9,loc2);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1779);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1779);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000030, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("\303\211tat initial",13,2117528428);
	ur2 = tr3;
	tr4 = RTMS_EX_H("L\'\303\251tat d\'attente",17,1135004261);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("unicode state name",18,1321063781);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(920, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(6269, "count", tr2));
	ub1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	RTDBGAL(2, 0xF800002A, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(42, 0x01).id);
	tr2 = RTMS_EX_H("button",6,2147362158);
	ur1 = tr2;
	tr3 = RTMS_EX_H("btn1",4,1651797553);
	ur2 = tr3;
	tr4 = RTMS_EX_H("\342\234\223 Valider",11,1533623154);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("unicode widget label",20,555765868);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(841, "label", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(tr2 + RTVA(6269, "count", tr2));
	ub1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_very_long_strings */
void F98_1750 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_very_long_strings";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,loc3);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1780);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1780);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0xF8000165, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(6269, "count", loc2));
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1000L))) break;
		RTHOOK(3);
		tr1 = RTMS_EX_H("LongStateName",13,127879781);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6293, "append", loc2))(loc2, ur1x);
	}
	RTHOOK(4);
	RTDBGAL(3, 0xF8000165, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 10000L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(5);
		ti4_2 = *(EIF_INTEGER_32 *)(loc3 + RTVA(6269, "count", loc3));
		if ((EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 10000L))) break;
		RTHOOK(6);
		tr1 = RTMS_EX_H("This is a very long description ",32,1460441120);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6293, "append", loc3))(loc3, ur1x);
	}
	RTHOOK(7);
	RTDBGAL(1, 0xF8000030, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-LONG",6,1443796039);
	ur1 = tr2;
	ur2 = RTCCL(loc2);
	ur3 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(7,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	tr1 = RTMS_EX_H("long name accepted",18,1830327652);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(920, "name", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(6269, "count", tr2));
	ub1 = (EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 100L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("long description accepted",25,1537226852);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(921, "description", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_3 = *(EIF_INTEGER_32 *)(tr2 + RTVA(6269, "count", tr2));
	ub1 = (EIF_BOOLEAN) (ti4_3 > ((EIF_INTEGER_32) 1000L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_large_widget_count */
void F98_1751 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_large_widget_count";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,loc2);
	RTLR(9,tr5);
	RTLR(10,Current);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 97, Current, 3, 0, 1781);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1781);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000031, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(49, 0x01).id);
	tr2 = RTMS_EX_H("SCR-001",7,1863641393);
	ur1 = tr2;
	tr3 = RTMS_EX_H("Complex",7,1467751288);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Many widgets",12,685051763);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(933, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 50L))) break;
		RTHOOK(4);
		RTDBGAL(2, 0xF800002A, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(42, 0x01).id);
		tr2 = RTMS_EX_H("button",6,2147362158);
		ur1 = tr2;
		tr3 = RTMS_EX_H("btn-",4,1651797549);
		tr4 = eif_out__i4_s1(loc3);
		ur2 = RTCCL(tr4);
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr3))(tr3, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur2 = RTCCL(tr4);
		tr3 = RTMS_EX_H("Button ",7,1043592736);
		tr5 = eif_out__i4_s1(loc3);
		ur3 = RTCCL(tr5);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr3))(tr3, ur3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur3 = RTCCL(tr5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(838, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
		RTNHOOK(4,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		ui4_1 = (EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 10L));
		ui4_2 = (EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 10L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(852, "set_position", loc2))(loc2, ui4_1x, ui4_2x);
		RTHOOK(6);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(942, "add_widget", loc1))(loc1, ur1x);
		RTHOOK(7);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3++;
	}
	RTHOOK(8);
	tr1 = RTMS_EX_H("50 widgets added",16,130160484);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(937, "widgets", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 50L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("widget lookups work",19,50186347);
	ur1 = tr1;
	tr2 = RTMS_EX_H("btn-25",6,2042022453);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(939, "widget_by_id", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_complex_requirement_traceability */
void F98_1752 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_complex_requirement_traceability";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1782);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1782);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002E, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(46, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(890, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 10L))) break;
		RTHOOK(4);
		RTDBGAL(4, 0xF80001BE, 0, 0); /* loc4 */
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,446,0xFF01,357,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLN(typres0.id);
		}
		ui4_1 = ((EIF_INTEGER_32) 5L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4897, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 5L))) break;
			RTHOOK(7);
			tr1 = RTMS_EX_H("S-",2,21293);
			tr2 = eif_out__i4_s1(loc3);
			ur1 = RTCCL(tr2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4401, "extend", loc4))(loc4, ur1x);
			RTHOOK(8);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		}
		RTHOOK(9);
		tr1 = RTMS_EX_H("FR-",3,4608557);
		tr2 = eif_out__i4_s1(loc2);
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(900, "add_requirement_to_states", loc1))(loc1, ur1x, ur2x);
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(11);
	tr1 = RTMS_EX_H("requirements added",18,1437124196);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("lookup works",12,1972856435);
	ur1 = tr1;
	tr2 = RTMS_EX_H("FR-5",4,1179790645);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(893, "states_for_requirement", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", tr2))(tr2)).it_i4);
	ub1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 5L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_result_xor_invariant */
void F98_1753 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_result_xor_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,loc2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1783);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1783);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002B, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(43, 0x01).id);
	tr2 = RTMS_EX_H("test",4,1952805748);
	ur1 = tr2;
	tr3 = RTMS_EX_H("content",7,460700276);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(856, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("success is_success",18,1955239283);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(861, "is_success", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("success not is_failure",22,837059941);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, "is_failure", loc1))(loc1)).it_b);
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	RTDBGAL(2, 0xF800002B, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(43, 0x01).id);
	tr2 = RTMS_EX_H("test",4,1952805748);
	ur1 = tr2;
	tr3 = RTMS_EX_H("error",5,1920877938);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(857, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("failure not is_success",22,182590067);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc2 + RTVA(861, "is_success", loc2));
	ub1 = (EIF_BOOLEAN) !tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("failure is_failure",18,1767320421);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, "is_failure", loc2))(loc2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_result_empty_strings */
void F98_1754 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_result_empty_strings";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,loc2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1784);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1784);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002B, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(43, 0x01).id);
	tr2 = RTMS_EX_H("test",4,1952805748);
	ur1 = tr2;
	tr3 = RTMS_EX_H("",0,0);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(856, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("empty content allowed",21,1318468964);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(861, "is_success", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	RTDBGAL(2, 0xF800002B, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(43, 0x01).id);
	tr2 = RTMS_EX_H("test",4,1952805748);
	ur1 = tr2;
	tr3 = RTMS_EX_H("",0,0);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(857, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(3,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	tr1 = RTMS_EX_H("empty error NOT allowed",23,1181790564);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(862, "is_failure", loc2))(loc2)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_concurrent_reads */
void F98_1755 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_concurrent_reads";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,tr4);
	RTLR(8,ur3);
	RTLR(9,Current);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1785);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1785);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("Concurrent",10,772059252);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000030, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("state",5,1953427045);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(881, "add_state", loc1))(loc1, ur1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("concurrent read 1",17,391852081);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(873, "state_by_id", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("concurrent read 2",17,391852082);
	ur1 = tr1;
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(873, "state_by_id", loc1))(loc1, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_state_immutability */
void F98_1756 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_state_immutability";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 97, Current, 1, 0, 1786);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1786);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000030, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("initial",7,1331373676);
	ur2 = tr3;
	tr4 = RTMS_EX_H("Initial description",19,131621230);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("id immutable",12,323490661);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(919, "id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr2))(tr2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(3);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(928, "set_initial", loc1))(loc1, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("initial flag set",16,253147764);
	ur1 = tr1;
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(925, "is_initial", loc1));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("id still immutable",18,1771329381);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(919, "id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = RTMS_EX_H("S-001",5,758770225);
	ur2 = tr3;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr2))(tr2, ur2x)).it_b);
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_loader_recovery */
void F98_1757 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_loader_recovery";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,ur1);
	RTLR(5,loc4);
	RTLR(6,tr2);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1787);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1787);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000032, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(50, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(944, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("first load succeeds",19,1480747635);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	RTDBGAL(4, 0xF800002C, 0, 0); /* loc4 */
	tr1 = RTMS_EX_H("[{bad}]",7,433800029);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	tr1 = RTMS_EX_H("error recorded",14,156308836);
	ur1 = tr1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(946, "last_error", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ub1 = (EIF_BOOLEAN)(tr2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	RTDBGAL(3, 0xF800002C, 0, 0); /* loc3 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1656, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(948, "load_from_string", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	tr1 = RTMS_EX_H("recovery successful",19,1944480620);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc3 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_generator_with_missing_data */
void F98_1758 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_generator_with_missing_data";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1788);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1788);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("Incomplete",10,594309477);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF800002D, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(45, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(884, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("generates for empty doc",23,1394281315);
	ur1 = tr1;
	ur2 = RTCCL(loc1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(886, "generate", loc2))(loc2, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tb1 = *(EIF_BOOLEAN *)(tr2 + RTVA(861, "is_success", tr2));
	ub1 = tb1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_void_safety_state */
void F98_1759 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_void_safety_state";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,tr4);
	RTLR(7,ur3);
	RTLR(8,loc2);
	RTLR(9,Current);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 97, Current, 2, 0, 1789);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1789);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000030, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(48, 0x01).id);
	tr2 = RTMS_EX_H("S-001",5,758770225);
	ur1 = tr2;
	tr3 = RTMS_EX_H("test",4,1952805748);
	ur2 = tr3;
	tr4 = RTMS_EX_H("",0,0);
	ur3 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(918, Dtype(tr1)))(tr1, ur1x, ur2x, ur3x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0xF8000165, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(922, "screen_id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("screen_id initially void",24,697071460);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 == NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("SCR-001",7,1863641393);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(930, "set_screen_id", loc1))(loc1, ur1x);
	RTHOOK(5);
	RTDBGAL(2, 0xF8000165, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(922, "screen_id", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = RTMS_EX_H("screen_id now attached",22,1469791332);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 != NULL);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ub1
}

/* {LIB_TESTS}.test_adversarial_collection_iteration */
void F98_1760 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "test_adversarial_collection_iteration";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,ur2);
	RTLR(6,loc3);
	RTLR(7,Current);
	RTLR(8,loc4);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 97, Current, 4, 0, 1790);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(97, Current, 1790);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF800002C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(44, 0x01).id);
	tr2 = RTMS_EX_H("Empty",5,1836616313);
	ur1 = tr2;
	tr3 = RTMS_EX_H("1.0",3,3223088);
	ur2 = tr3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(866, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(869, "states", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc3))(loc3)).it_b);
		if (tb1) break;
		RTHOOK(3);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc3))(loc3);
	}
	RTHOOK(5);
	tr1 = RTMS_EX_H("empty iteration safe",20,269039717);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(870, "transitions", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc4 = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc4))(loc4)).it_b);
		if (tb2) break;
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc4))(loc4);
	}
	RTHOOK(9);
	tr1 = RTMS_EX_H("empty transitions iteration safe",32,1033577829);
	ur1 = tr1;
	ub1 = (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1608, dtype))(Current, ur1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ub1
}

void EIF_Minit98 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
