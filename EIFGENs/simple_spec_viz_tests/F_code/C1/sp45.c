/*
 * Code for class SPEC_DOCUMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sp45.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SPEC_DOCUMENT}.make */
void F48_868 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("make", 47, Current, 0, 2, 884);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("version_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
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
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTHOOK(6);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,51,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,42,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 20L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,52,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTLNSMART(eif_new_type(49, 1).id);
	(nstcall = -1, F50_892(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("version_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("states_empty", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("transitions_empty", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("screens_empty", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
		if (tb1) {
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
}

/* {SPEC_DOCUMENT}.name */
EIF_REFERENCE F48_869 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SPEC_DOCUMENT}.version */
EIF_REFERENCE F48_870 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SPEC_DOCUMENT}.states */
EIF_REFERENCE F48_871 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SPEC_DOCUMENT}.transitions */
EIF_REFERENCE F48_872 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SPEC_DOCUMENT}.screens */
EIF_REFERENCE F48_873 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SPEC_DOCUMENT}.traceability */
EIF_REFERENCE F48_874 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {SPEC_DOCUMENT}.state_by_id */
EIF_REFERENCE F48_875 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("state_by_id", 47, Current, 2, 1, 891);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		if ((EIF_BOOLEAN)(Result != NULL)) break;
		RTHOOK(4);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr2))-1079])(tr2, arg1));
		if (tb2) {
			RTHOOK(5);
			tr1 = (nstcall = 1, F421_4803(loc1));
			Result = (EIF_REFERENCE) tr1;
		}
		RTHOOK(6);
		(nstcall = 1, F421_4818(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("found_has_id", EX_POST);
		tb2 = '\01';
		loc2 = Result;
		if (EIF_TEST(loc2)) {
			tr1 = *(EIF_REFERENCE *)(loc2);
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, arg1));
			tb2 = tb3;
		}
		if (tb2) {
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

/* {SPEC_DOCUMENT}.screen_by_id */
EIF_REFERENCE F48_876 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("screen_by_id", 47, Current, 2, 1, 892);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		if ((EIF_BOOLEAN)(Result != NULL)) break;
		RTHOOK(4);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr2))-1079])(tr2, arg1));
		if (tb2) {
			RTHOOK(5);
			tr1 = (nstcall = 1, F421_4803(loc1));
			Result = (EIF_REFERENCE) tr1;
		}
		RTHOOK(6);
		(nstcall = 1, F421_4818(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("found_has_id", EX_POST);
		tb2 = '\01';
		loc2 = Result;
		if (EIF_TEST(loc2)) {
			tr1 = *(EIF_REFERENCE *)(loc2);
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, arg1));
			tb2 = tb3;
		}
		if (tb2) {
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

/* {SPEC_DOCUMENT}.initial_state */
EIF_REFERENCE F48_877 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("initial_state", 47, Current, 2, 0, 893);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(2);
		if ((EIF_BOOLEAN)(Result != NULL)) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_0_);
		if (tb2) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F421_4803(loc1));
			Result = (EIF_REFERENCE) tr1;
		}
		RTHOOK(5);
		(nstcall = 1, F421_4818(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_initial", EX_POST);
		tb2 = '\01';
		loc2 = Result;
		if (EIF_TEST(loc2)) {
			tb3 = *(EIF_BOOLEAN *)(loc2+ _CHROFF_6_0_);
			tb2 = tb3;
		}
		if (tb2) {
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

/* {SPEC_DOCUMENT}.final_states */
EIF_REFERENCE F48_878 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("final_states", 47, Current, 2, 0, 894);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,51,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = -1, F867_5785(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_1_);
		if (tb2) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F421_4803(loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		}
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
		RTCT("all_final", EX_POST);
		tr1 = (nstcall = 1, F867_5799(RTCW(Result)));
		loc2 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, F421_4812(loc2));
			if (tb3) break;
			RTHOOK(8);
			tr1 = (nstcall = 1, F421_4803(loc2));
			tb4 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_1_);
			tb2 = tb4;
			(nstcall = 1, F421_4818(loc2));
		}
		if (tb2) {
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

/* {SPEC_DOCUMENT}.transitions_from */
EIF_REFERENCE F48_879 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("transitions_from", 47, Current, 1, 1, 895);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,42,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = -1, F867_5785(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(4);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr2))-1079])(tr2, arg1));
		if (tb2) {
			RTHOOK(5);
			tr1 = (nstcall = 1, F421_4803(loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		}
		RTHOOK(6);
		(nstcall = 1, F421_4818(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SPEC_DOCUMENT}.transitions_to */
EIF_REFERENCE F48_880 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("transitions_to", 47, Current, 1, 1, 896);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,42,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
	(nstcall = -1, F867_5785(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(4);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_3_);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr2))-1079])(tr2, arg1));
		if (tb2) {
			RTHOOK(5);
			tr1 = (nstcall = 1, F421_4803(loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		}
		RTHOOK(6);
		(nstcall = 1, F421_4818(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SPEC_DOCUMENT}.states_model */
EIF_REFERENCE F48_881 (EIF_REFERENCE Current)
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("states_model", 47, Current, 1, 0, 897);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,271,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 271, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F272_3498(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		tr1 = (nstcall = 1, F272_3510(RTCW(Result), tr2));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		(nstcall = 1, F421_4818(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SPEC_DOCUMENT}.screens_model */
EIF_REFERENCE F48_882 (EIF_REFERENCE Current)
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("screens_model", 47, Current, 1, 0, 898);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,271,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 271, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F272_3498(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		tr1 = (nstcall = 1, F272_3510(RTCW(Result), tr2));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		(nstcall = 1, F421_4818(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SPEC_DOCUMENT}.add_state */
void F48_883 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("add_state", 47, Current, 0, 1, 899);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_duplicate", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr1 = (nstcall = 0, F48_875(Current, tr1));
		RTTE((EIF_BOOLEAN)(tr1 == NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(tr2))-663])(tr2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("state_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tb1 = (nstcall = 1, F867_5797(RTCW(tr2), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_increased", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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
}

/* {SPEC_DOCUMENT}.add_transition */
void F48_884 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("add_transition", 47, Current, 0, 1, 900);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("transition_not_void", EX_PRE);
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
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(tr2))-663])(tr2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("transition_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb1 = (nstcall = 1, F867_5797(RTCW(tr2), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("count_increased", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {SPEC_DOCUMENT}.add_screen */
void F48_885 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("add_screen", 47, Current, 0, 1, 901);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("screen_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_duplicate", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr1 = (nstcall = 0, F48_876(Current, tr1));
		RTTE((EIF_BOOLEAN)(tr1 == NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(tr2))-663])(tr2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("screen_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tb1 = (nstcall = 1, F867_5797(RTCW(tr2), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_increased", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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
}

/* {SPEC_DOCUMENT}._invariant */
void F48_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 44, Current, 0, 0);
	RTIT("name_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("name_not_empty", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("version_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("states_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("transitions_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("screens_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("traceability_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit45 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
