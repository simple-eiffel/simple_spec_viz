/*
 * Code for class SCREEN_MOCKUP_GENERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sc41.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SCREEN_MOCKUP_GENERATOR}.make */
void F44_808 (EIF_REFERENCE Current)
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
	
	RTEAA("make", 43, Current, 0, 0, 821);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(30, 1).id);
	(nstcall = -1, F31_550(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("graphviz_created", EX_POST);
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

/* {SCREEN_MOCKUP_GENERATOR}.graphviz */
EIF_REFERENCE F44_809 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SCREEN_MOCKUP_GENERATOR}.generate */
EIF_REFERENCE F44_810 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,Result);
	RTLR(10,loc5);
	RTLR(11,tr4);
	RTLIU(12);
	
	RTEAA("generate", 43, Current, 5, 1, 823);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("screen_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F31_561(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr2 = RTMS_EX_H("rankdir",7,1389421170);
	tr3 = RTMS_EX_H("TB",2,21570);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr1 = (nstcall = 1, F30_542(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	tr2 = RTMS_EX_H("shape",5,1752099429);
	tr3 = RTMS_EX_H("record",6,1893156964);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	tr2 = RTMS_EX_H("style",5,1954997861);
	tr3 = RTMS_EX_H("rounded",7,1467330660);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	tr2 = RTMS_EX_H("label",5,1634667884);
	tr3 = (nstcall = 0, F44_813(Current, arg1));
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F30_544(RTCW(loc1)));
	tr2 = (nstcall = 1, F31_563(RTCW(tr1), tr2));
	loc3 = (EIF_REFERENCE) tr2;
	RTHOOK(9);
	tb1 = '\0';
	tb2 = *(EIF_BOOLEAN *)(RTCW(loc3)+ _CHROFF_2_0_);
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3));
		loc4 = tr1;
		tb1 = EIF_TEST(loc4);
	}
	if (tb1) {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		(nstcall = -1, F47_857(RTCW(tr1), tr2, loc4));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTHOOK(12);
			tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
			tr3 = RTMS_EX_H("Failed to render screen mockup: ",32,1862746400);
			tr4 = *(EIF_REFERENCE *)(loc5);
			tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr3)-1079])(tr3, tr4));
			(nstcall = -1, F47_858(RTCW(tr1), tr2, tr4));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(13);
			tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
			tr3 = RTMS_EX_H("Unknown rendering error",23,8662898);
			(nstcall = -1, F47_858(RTCW(tr1), tr2, tr3));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {SCREEN_MOCKUP_GENERATOR}.generate_all */
EIF_REFERENCE F44_811 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTEAA("generate_all", 43, Current, 1, 1, 824);
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
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,46,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_4_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = -1, F867_5785(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_4_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(4);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr1 = (nstcall = 0, F44_810(Current, tr1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		RTHOOK(5);
		(nstcall = 1, F421_4818(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("count_matches", EX_POST);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(Result)));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_4_);
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr1)));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	return Result;
}

/* {SCREEN_MOCKUP_GENERATOR}.generate_dot */
EIF_REFERENCE F44_812 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc2);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("generate_dot", 43, Current, 2, 1, 825);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("screen_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F31_561(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr2 = RTMS_EX_H("rankdir",7,1389421170);
	tr3 = RTMS_EX_H("TB",2,21570);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr1 = (nstcall = 1, F30_542(RTCW(loc1), tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	tr2 = RTMS_EX_H("shape",5,1752099429);
	tr3 = RTMS_EX_H("record",6,1893156964);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	tr2 = RTMS_EX_H("style",5,1954997861);
	tr3 = RTMS_EX_H("rounded",7,1467330660);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
	tr2 = RTMS_EX_H("label",5,1634667884);
	tr3 = (nstcall = 0, F44_813(Current, arg1));
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(8);
	tr1 = (nstcall = 1, F30_544(RTCW(loc1)));
	Result = (EIF_REFERENCE) tr1;
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

/* {SCREEN_MOCKUP_GENERATOR}.build_record_label */
EIF_REFERENCE F44_813 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,tr2);
	RTLIU(10);
	
	RTEAA("build_record_label", 43, Current, 6, 1, 826);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("screen_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 200L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '{'));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr1 = (nstcall = 0, F44_816(Current, tr1));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		tr1 = (nstcall = 0, F44_814(Current, tr1));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		tr1 = (nstcall = 0, F44_815(Current, loc1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		tr1 = (nstcall = 1, F869_5799(RTCW(loc2)));
		loc4 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, F423_4812(loc4));
			if (tb1) break;
			RTHOOK(9);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '|'));
			RTHOOK(10);
			ti4_1 = (nstcall = 1, F423_4803(loc4));
			tr1 = (nstcall = 1, F887_5908(RTCW(loc1), ti4_1));
			loc5 = tr1;
			if (EIF_TEST(loc5)) {
				RTHOOK(11);
				loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(12);
				tr1 = (nstcall = 1, F867_5799(loc5));
				loc6 = (EIF_REFERENCE) tr1;
				for (;;) {
					tb2 = (nstcall = 1, F421_4812(loc6));
					if (tb2) break;
					RTHOOK(13);
					if ((EIF_BOOLEAN) !loc3) {
						RTHOOK(14);
						tr1 = RTMS_EX_H(" ",1,32);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					}
					RTHOOK(15);
					tr1 = (nstcall = 1, F421_4803(loc6));
					tr2 = (nstcall = 1, F46_855(RTCW(tr1)));
					tr1 = (nstcall = 0, F44_816(Current, tr2));
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					RTHOOK(16);
					loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(17);
					(nstcall = 1, F421_4818(loc6));
				}
			}
			RTHOOK(18);
			(nstcall = 1, F423_4818(loc4));
		}
	}
	RTHOOK(19);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '}'));
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("starts_with_brace", EX_POST);
		tr1 = RTMS_EX_H("{",1,123);
		tb3 = (nstcall = 1, F1079_7767(RTCW(Result), tr1));
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("ends_with_brace", EX_POST);
		tr1 = RTMS_EX_H("}",1,125);
		tb3 = (nstcall = 1, F1079_7768(RTCW(Result), tr1));
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {SCREEN_MOCKUP_GENERATOR}.group_widgets_by_row */
EIF_REFERENCE F44_814 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("group_widgets_by_row", 43, Current, 3, 1, 827);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("widgets_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,886,0xFF01,866,0xFF01,45,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0.id, 886, _OBJSIZ_6_3_0_8_0_0_0_0_);
	}
	(nstcall = -1, F887_5902(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F867_5799(RTCW(arg1)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc2));
		if (tb1) break;
		RTHOOK(4);
		tr1 = (nstcall = 1, F421_4803(loc2));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_3_0_0_1_);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 20L)) * ((EIF_INTEGER_32) 20L));
		RTHOOK(5);
		tb2 = (nstcall = 1, F887_5910(RTCW(Result), loc1));
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,45,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 5L)));
			(nstcall = 1, F887_5948(RTCW(Result), tr1, loc1));
		}
		RTHOOK(7);
		tr1 = (nstcall = 1, F887_5908(RTCW(Result), loc1));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTHOOK(8);
			tr1 = (nstcall = 1, F421_4803(loc2));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(loc3)-663])(loc3, tr1));
		}
		RTHOOK(9);
		(nstcall = 1, F421_4818(loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SCREEN_MOCKUP_GENERATOR}.sorted_row_keys */
EIF_REFERENCE F44_815 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc5);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("sorted_row_keys", 43, Current, 5, 1, 828);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("table_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_6_3_0_7_);
	(nstcall = -1, F869_5785(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F887_5913(RTCW(arg1)));
	tr2 = (nstcall = 1, F780_5439(RTCW(tr1)));
	loc5 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F423_4812(loc5));
		if (tb1) break;
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F423_4803(loc5));
		(nstcall = 1, F869_5826(RTCW(Result), ti4_1));
		RTHOOK(5);
		(nstcall = 1, F423_4818(loc5));
	}
	RTHOOK(6);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(Result)));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc1 >= loc3)) break;
		RTHOOK(9);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 > (EIF_INTEGER_32) (loc3 - loc1))) break;
			RTHOOK(11);
			ti4_1 = (nstcall = 1, F869_5791(RTCW(Result), loc2));
			ti4_2 = (nstcall = 1, F869_5791(RTCW(Result), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
			if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
				RTHOOK(12);
				ti4_1 = (nstcall = 1, F869_5791(RTCW(Result), loc2));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(13);
				ti4_1 = (nstcall = 1, F869_5791(RTCW(Result), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
				(nstcall = 1, F869_5824(RTCW(Result), ti4_1, loc2));
				RTHOOK(14);
				(nstcall = 1, F869_5824(RTCW(Result), loc4, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
			}
			RTHOOK(15);
			loc2++;
		}
		RTHOOK(16);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("count_matches", EX_POST);
		ti4_1 = (nstcall = 1, F869_5806(RTCW(Result)));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_6_3_0_7_);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
	return Result;
}

/* {SCREEN_MOCKUP_GENERATOR}.escape_label */
EIF_REFERENCE F44_816 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("escape_label", 43, Current, 1, 1, 829);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	(nstcall = -1, F1079_7731(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 10L))));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F1079_7751(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F425_4812(loc1));
		if (tb1) break;
		RTHOOK(4);
		tc1 = (nstcall = 1, F425_4803(loc1));
		switch (tc1) {
			case (EIF_CHARACTER_8) '\"':
			case (EIF_CHARACTER_8) '\\':
			case (EIF_CHARACTER_8) '{':
			case (EIF_CHARACTER_8) '|':
			case (EIF_CHARACTER_8) '}':
				RTHOOK(5);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '\\'));
				RTHOOK(6);
				tc1 = (nstcall = 1, F425_4803(loc1));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				break;
			case (EIF_CHARACTER_8) '<':
				RTHOOK(7);
				tr1 = RTMS_EX_H("&lt;",4,644641851);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
				break;
			case (EIF_CHARACTER_8) '>':
				RTHOOK(8);
				tr1 = RTMS_EX_H("&gt;",4,644314171);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
				break;
			default:
				RTHOOK(9);
				tc1 = (nstcall = 1, F425_4803(loc1));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
				break;
		}
		RTHOOK(10);
		(nstcall = 1, F425_4818(loc1));
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

/* {SCREEN_MOCKUP_GENERATOR}._invariant */
void F44_1 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 40, Current, 0, 0);
	RTIT("graphviz_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit41 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
