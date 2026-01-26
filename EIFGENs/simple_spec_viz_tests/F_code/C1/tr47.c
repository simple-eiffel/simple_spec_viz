/*
 * Code for class TRACEABILITY_MATRIX
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tr47.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TRACEABILITY_MATRIX}.make */
void F50_892 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make", 49, Current, 0, 0, 917);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,885,0xFF01,866,0xFF01,1080,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F886_5902(RTCW(tr1), ((EIF_INTEGER_32) 20L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,885,0xFF01,1080,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F886_5902(RTCW(tr1), ((EIF_INTEGER_32) 20L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("requirements_empty", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("states_empty", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
		if (tb1) {
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

/* {TRACEABILITY_MATRIX}.requirements_to_states */
EIF_REFERENCE F50_893 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {TRACEABILITY_MATRIX}.states_to_screens */
EIF_REFERENCE F50_894 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {TRACEABILITY_MATRIX}.states_for_requirement */
EIF_REFERENCE F50_895 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
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
	
	RTEAA("states_for_requirement", 49, Current, 1, 1, 920);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("req_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5908(RTCW(tr1), arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {TRACEABILITY_MATRIX}.screen_for_state */
EIF_REFERENCE F50_896 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("screen_for_state", 49, Current, 0, 1, 921);
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F886_5908(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TRACEABILITY_MATRIX}.all_requirement_ids */
EIF_REFERENCE F50_897 (EIF_REFERENCE Current)
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("all_requirement_ids", 49, Current, 1, 0, 922);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_7_3_0_6_);
	(nstcall = -1, F867_5785(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5913(RTCW(tr1)));
	tr1 = (nstcall = 1, F778_5439(RTCW(tr2)));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		RTHOOK(4);
		(nstcall = 1, F421_4818(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("count_matches", EX_POST);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(Result)));
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_7_3_0_6_);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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

/* {TRACEABILITY_MATRIX}.all_state_ids */
EIF_REFERENCE F50_898 (EIF_REFERENCE Current)
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("all_state_ids", 49, Current, 1, 0, 923);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_7_3_0_6_);
	(nstcall = -1, F867_5785(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F886_5913(RTCW(tr1)));
	tr1 = (nstcall = 1, F778_5439(RTCW(tr2)));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		RTHOOK(4);
		(nstcall = 1, F421_4818(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("count_matches", EX_POST);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(Result)));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_7_3_0_6_);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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

/* {TRACEABILITY_MATRIX}.requirements_for_state */
EIF_REFERENCE F50_899 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,tr2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTEAA("requirements_for_state", 49, Current, 4, 1, 910);
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
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 5L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5913(RTCW(tr1)));
	tr1 = (nstcall = 1, F778_5439(RTCW(tr2)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc2));
		if (tb1) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F421_4803(loc2));
		tr2 = (nstcall = 1, F886_5908(RTCW(tr1), tr2));
		loc3 = tr2;
		if (EIF_TEST(loc3)) {
			RTHOOK(5);
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(6);
			tr1 = (nstcall = 1, F867_5799(loc3));
			loc4 = (EIF_REFERENCE) tr1;
			for (;;) {
				tb2 = (nstcall = 1, F421_4812(loc4));
				if (tb2) break;
				RTHOOK(7);
				tb3 = '\0';
				if ((EIF_BOOLEAN) !loc1) {
					tr1 = (nstcall = 1, F421_4803(loc4));
					tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, arg1));
					tb3 = tb4;
				}
				if (tb3) {
					RTHOOK(8);
					tr1 = (nstcall = 1, F421_4803(loc2));
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
					RTHOOK(9);
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				RTHOOK(10);
				(nstcall = 1, F421_4818(loc4));
			}
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

/* {TRACEABILITY_MATRIX}.requirement_ids_model */
EIF_REFERENCE F50_900 (EIF_REFERENCE Current)
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
	
	RTEAA("requirement_ids_model", 49, Current, 1, 0, 911);
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5913(RTCW(tr1)));
	tr1 = (nstcall = 1, F778_5439(RTCW(tr2)));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr1 = (nstcall = 1, F272_3510(RTCW(Result), tr1));
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

/* {TRACEABILITY_MATRIX}.state_ids_model */
EIF_REFERENCE F50_901 (EIF_REFERENCE Current)
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
	
	RTEAA("state_ids_model", 49, Current, 1, 0, 912);
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F886_5913(RTCW(tr1)));
	tr1 = (nstcall = 1, F778_5439(RTCW(tr2)));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr1 = (nstcall = 1, F272_3510(RTCW(Result), tr1));
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

/* {TRACEABILITY_MATRIX}.add_requirement_to_states */
void F50_902 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("add_requirement_to_states", 49, Current, 0, 2, 913);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("req_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("state_ids_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F886_5949(RTCW(tr1), arg2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("mapping_added", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F886_5910(RTCW(tr1), arg1));
		if (tb1) {
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

/* {TRACEABILITY_MATRIX}.add_state_to_screen */
void F50_903 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTEAA("add_state_to_screen", 49, Current, 0, 2, 914);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("screen_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F886_5949(RTCW(tr1), arg2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("mapping_added", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (nstcall = 1, F886_5910(RTCW(tr1), arg1));
		if (tb1) {
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

/* {TRACEABILITY_MATRIX}.add_requirement_state */
void F50_904 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc1);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("add_requirement_state", 49, Current, 3, 2, 915);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("req_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("state_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5908(RTCW(tr1), arg1));
	loc2 = tr2;
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		tb1 = (nstcall = 1, F867_5797(loc2, arg2));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(5);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(loc2)-663])(loc2, arg2));
		}
	} else {
		RTHOOK(6);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 5L)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, arg2));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F886_5949(RTCW(tr1), loc1, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("requirement_exists", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F886_5910(RTCW(tr1), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("state_in_list", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F886_5908(RTCW(tr1), arg1));
		loc3 = tr2;
		if (EIF_TEST(loc3)) {
			tb2 = (nstcall = 1, F867_5797(loc3, arg2));
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
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {TRACEABILITY_MATRIX}._invariant */
void F50_1 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 46, Current, 0, 0);
	RTIT("requirements_to_states_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("states_to_screens_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit47 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
