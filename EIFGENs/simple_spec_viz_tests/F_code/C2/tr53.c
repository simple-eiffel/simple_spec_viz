/*
 * Code for class TRACEABILITY_REPORT_GENERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tr53.h"
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

/* {TRACEABILITY_REPORT_GENERATOR}.make */
void F56_972 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 55, Current, 0, 0, 996);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {TRACEABILITY_REPORT_GENERATOR}.generate */
EIF_REFERENCE F56_973 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("generate", 55, Current, 1, 1, 997);
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
	tr1 = (nstcall = 0, F56_974(Current, arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("traceability",12,820470393);
	(nstcall = -1, F47_857(RTCW(tr1), tr2, loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_success", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_3_0_);
		if (tb1) {
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

/* {TRACEABILITY_REPORT_GENERATOR}.build_report */
EIF_REFERENCE F56_974 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("build_report", 55, Current, 0, 1, 998);
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
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 2000L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("# Traceability Matrix\012\012",23,1018501130);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("**Document:** ",14,819569440);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("\012",1,10);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("**Version:** ",13,1592265248);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("\012\012",2,2570);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(6);
	tr1 = (nstcall = 0, F56_975(Current, arg1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(7);
	tr1 = (nstcall = 0, F56_976(Current, arg1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(8);
	tr1 = (nstcall = 0, F56_977(Current, arg1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TRACEABILITY_REPORT_GENERATOR}.build_states_to_screens_section */
EIF_REFERENCE F56_975 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,loc1);
	RTLR(6,tr3);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc2);
	RTLR(10,loc3);
	RTLR(11,Current);
	RTLIU(12);
	
	RTEAA("build_states_to_screens_section", 55, Current, 6, 1, 999);
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
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 500L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("## States -> Screens\012\012",22,1280743178);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("| State | Screen | Requirements |\012",34,368691722);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("|-------|--------|--------------|\012",34,1299590922);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc4 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc4));
		if (tb1) break;
		RTHOOK(7);
		tr1 = RTMS_EX_H("| ",2,31776);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(8);
		tr1 = (nstcall = 1, F421_4803(loc4));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr2));
		RTHOOK(9);
		tr1 = RTMS_EX_H(" (",2,8232);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(10);
		tr1 = (nstcall = 1, F421_4803(loc4));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr2));
		RTHOOK(11);
		tr1 = RTMS_EX_H(") | ",4,689994784);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(12);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_5_);
		tr2 = (nstcall = 1, F421_4803(loc4));
		tr3 = *(EIF_REFERENCE *)(RTCW(tr2));
		tr2 = (nstcall = 1, F50_896(RTCW(tr1), tr3));
		loc1 = (EIF_REFERENCE) tr2;
		RTHOOK(13);
		tb2 = '\0';
		if ((EIF_BOOLEAN)(loc1 == NULL)) {
			tr1 = (nstcall = 1, F421_4803(loc4));
			tb3 = (nstcall = 1, F52_929(RTCW(tr1)));
			tb2 = tb3;
		}
		if (tb2) {
			RTHOOK(14);
			tr1 = (nstcall = 1, F421_4803(loc4));
			tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
			loc1 = (EIF_REFERENCE) tr2;
		}
		RTHOOK(15);
		loc5 = loc1;
		if (EIF_TEST(loc5)) {
			RTHOOK(16);
			tr1 = (nstcall = 1, F48_876(RTCW(arg1), loc5));
			loc6 = tr1;
			if (EIF_TEST(loc6)) {
				RTHOOK(17);
				tr1 = RTMS_EX_H(" (",2,8232);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(loc5)-1079])(loc5, tr1));
				tr2 = *(EIF_REFERENCE *)(loc6 + _REFACS_1_);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, tr2));
				tr1 = RTMS_EX_H(")",1,41);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
				loc2 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(18);
				loc2 = (EIF_REFERENCE) loc5;
			}
			RTHOOK(19);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, loc2));
		} else {
			RTHOOK(20);
			tr1 = RTMS_EX_H("-",1,45);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		}
		RTHOOK(21);
		tr1 = RTMS_EX_H(" | ",3,2128928);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(22);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_5_);
		tr2 = (nstcall = 1, F421_4803(loc4));
		tr3 = *(EIF_REFERENCE *)(RTCW(tr2));
		tr2 = (nstcall = 1, F50_899(RTCW(tr1), tr3));
		loc3 = (EIF_REFERENCE) tr2;
		RTHOOK(23);
		tb2 = (nstcall = 1, F665_4976(RTCW(loc3)));
		if (tb2) {
			RTHOOK(24);
			tr1 = RTMS_EX_H("-",1,45);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		} else {
			RTHOOK(25);
			tr1 = RTMS_EX_H(", ",2,11296);
			tr1 = (nstcall = 0, F56_980(Current, loc3, tr1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		}
		RTHOOK(26);
		tr1 = RTMS_EX_H(" |\012",3,2128906);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(27);
		(nstcall = 1, F421_4818(loc4));
	}
	RTHOOK(28);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(29);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {TRACEABILITY_REPORT_GENERATOR}.build_requirements_to_states_section */
EIF_REFERENCE F56_976 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,Current);
	RTLR(9,loc4);
	RTLIU(10);
	
	RTEAA("build_requirements_to_states_section", 55, Current, 5, 1, 1000);
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
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 500L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("## Requirements -> States\012\012",27,1167341322);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("| Requirement | States Covered | Transitions |\012",47,1983773706);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("|-------------|----------------|-------------|\012",47,2033506570);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_5_);
	tr2 = (nstcall = 1, F50_897(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(7);
	tr1 = (nstcall = 1, F867_5799(RTCW(loc1)));
	loc5 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc5));
		if (tb1) break;
		RTHOOK(8);
		tr1 = RTMS_EX_H("| ",2,31776);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(9);
		tr1 = (nstcall = 1, F421_4803(loc5));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(10);
		tr1 = RTMS_EX_H(" | ",3,2128928);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_5_);
		tr2 = (nstcall = 1, F421_4803(loc5));
		tr2 = (nstcall = 1, F50_895(RTCW(tr1), tr2));
		loc2 = (EIF_REFERENCE) tr2;
		RTHOOK(12);
		tr1 = RTMS_EX_H("S-",2,21293);
		tr1 = (nstcall = 0, F56_979(Current, loc2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(13);
		tr1 = RTMS_EX_H("T-",2,21549);
		tr1 = (nstcall = 0, F56_979(Current, loc2, tr1));
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(14);
		tb2 = (nstcall = 1, F666_4976(RTCW(loc3)));
		if (tb2) {
			RTHOOK(15);
			tr1 = RTMS_EX_H("-",1,45);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		} else {
			RTHOOK(16);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, loc3));
		}
		RTHOOK(17);
		tr1 = RTMS_EX_H(" | ",3,2128928);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(18);
		tb2 = (nstcall = 1, F666_4976(RTCW(loc4)));
		if (tb2) {
			RTHOOK(19);
			tr1 = RTMS_EX_H("-",1,45);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		} else {
			RTHOOK(20);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, loc4));
		}
		RTHOOK(21);
		tr1 = RTMS_EX_H(" |\012",3,2128906);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(22);
		(nstcall = 1, F421_4818(loc5));
	}
	RTHOOK(23);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
	return Result;
}

/* {TRACEABILITY_REPORT_GENERATOR}.build_coverage_summary */
EIF_REFERENCE F56_977 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("build_coverage_summary", 55, Current, 5, 1, 1001);
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
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 300L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("## Coverage Summary\012\012",21,2011122698);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	ti4_1 = (nstcall = 0, F56_978(Current, arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 100L)) / loc1);
	}
	RTHOOK(8);
	tr1 = RTMS_EX_H("- **States:** ",14,1343286560);
	tr2 = eif_out__i4_s1(loc2);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("/",1,47);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	tr2 = eif_out__i4_s1(loc1);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, tr2));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr2));
	RTHOOK(9);
	tr1 = RTMS_EX_H(" (",2,8232);
	tr2 = eif_out__i4_s1(loc5);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("% covered by requirements)\012",27,1119451914);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(10);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_4_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(11);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_5_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_7_3_0_6_);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	tr1 = RTMS_EX_H("- **Screen Mappings:** ",23,882857504);
	tr2 = eif_out__i4_s1(loc4);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H(" states mapped to screens\012",26,791726090);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(13);
	tr1 = RTMS_EX_H("- **Total Screens:** ",21,1218560032);
	tr2 = eif_out__i4_s1(loc3);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("\012",1,10);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(14);
	tr1 = RTMS_EX_H("- **Total Transitions:** ",25,360217888);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	tr2 = eif_out__i4_s1(ti4_1);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("\012",1,10);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(15);
	tr1 = RTMS_EX_H("- **Requirements Tracked:** ",28,289515552);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_5_);
	tr3 = (nstcall = 1, F50_897(RTCW(tr2)));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr3)));
	tr2 = eif_out__i4_s1(ti4_1);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("\012",1,10);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {TRACEABILITY_REPORT_GENERATOR}.count_covered_states */
EIF_INTEGER_32 F56_978 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,tr3);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("count_covered_states", 55, Current, 2, 1, 1002);
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
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc2));
		if (tb1) break;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_5_);
		tr2 = (nstcall = 1, F421_4803(loc2));
		tr3 = *(EIF_REFERENCE *)(RTCW(tr2));
		tr2 = (nstcall = 1, F50_899(RTCW(tr1), tr3));
		loc1 = (EIF_REFERENCE) tr2;
		RTHOOK(4);
		tb2 = (nstcall = 1, F665_4976(RTCW(loc1)));
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(5);
			Result++;
		}
		RTHOOK(6);
		(nstcall = 1, F421_4818(loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {TRACEABILITY_REPORT_GENERATOR}.filter_ids */
EIF_REFERENCE F56_979 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("filter_ids", 55, Current, 2, 2, 1003);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("prefix_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	tr1 = (nstcall = 1, F867_5799(RTCW(arg1)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc2));
		if (tb1) break;
		RTHOOK(6);
		tr1 = (nstcall = 1, F421_4803(loc2));
		tb2 = (nstcall = 1, F1079_7767(RTCW(tr1), arg2));
		if (tb2) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) !loc1) {
				RTHOOK(8);
				tr1 = RTMS_EX_H(", ",2,11296);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
			}
			RTHOOK(9);
			tr1 = (nstcall = 1, F421_4803(loc2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
			RTHOOK(10);
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(11);
		(nstcall = 1, F421_4818(loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {TRACEABILITY_REPORT_GENERATOR}.join_strings */
EIF_REFERENCE F56_980 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("join_strings", 55, Current, 2, 2, 1004);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("separator_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	tr1 = (nstcall = 1, F867_5799(RTCW(arg1)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc2));
		if (tb1) break;
		RTHOOK(6);
		if ((EIF_BOOLEAN) !loc1) {
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, arg2));
		}
		RTHOOK(8);
		tr1 = (nstcall = 1, F421_4803(loc2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(9);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(10);
		(nstcall = 1, F421_4818(loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

void EIF_Minit53 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
