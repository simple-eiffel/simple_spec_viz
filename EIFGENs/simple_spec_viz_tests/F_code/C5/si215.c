/*
 * Code for class SIMPLE_JSON_POINTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si215.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_POINTER}.segments */
static EIF_REFERENCE F243_2967_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("segments", 242, Current, 0, 0, 2969);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1084,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

EIF_REFERENCE F243_2967 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F243_2967_body (Current));
		*(EIF_REFERENCE *)(Current) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


/* {SIMPLE_JSON_POINTER}.last_segment */
EIF_REFERENCE F243_2968 (EIF_REFERENCE Current)
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
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("last_segment", 242, Current, 0, 0, 2970);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_segments", EX_PRE);
		tr1 = (nstcall = 0, F243_2967(Current));
		tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F243_2967(Current));
	tr2 = (nstcall = 1, F867_5794(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_POINTER}.parse_path */
EIF_BOOLEAN F243_2969 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("parse_path", 242, Current, 3, 1, 2971);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F243_2967(Current));
	(nstcall = 1, F867_5844(RTCW(tr1)));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(4);
	tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
	if (tb1) {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(6);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("/",1,47)));
		tb1 = (nstcall = 1, F1083_7921(RTCW(arg1), tr1));
		if (tb1) {
			RTHOOK(7);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(8);
			tr1 = (nstcall = 1, F1_14(arg1));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("/",1,47)));
			tb1 = (nstcall = 1, F1083_7932(RTCW(loc1), tr1));
			if (tb1) {
				RTHOOK(10);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
				tr1 = (nstcall = 1, F1085_8059(RTCW(loc1), ((EIF_INTEGER_32) 2L), ti4_1));
				loc1 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(11);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
			tr1 = (nstcall = 1, F1076_7679(RTCW(loc1), tw1));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(loc2))-365])(loc2));
			loc3 = (EIF_REFERENCE) tr1;
			for (;;) {
				tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc3)-334])(loc3));
				if (tb1) break;
				RTHOOK(13);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
				tb2 = (nstcall = 1, F667_4976(RTCW(tr1)));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(14);
					tr1 = (nstcall = 0, F243_2967(Current));
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
					tr2 = (nstcall = 0, F243_2972(Current, tr2));
					(nstcall = 1, F867_5825(RTCW(tr1), tr2));
				}
				RTHOOK(15);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc3)-334])(loc3));
			}
			RTHOOK(16);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("success_has_segments", EX_POST);
		tb2 = '\01';
		if (Result) {
			tb3 = '\01';
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("/",1,47)));
			tb4 = (nstcall = 1, F1083_7921(RTCW(arg1), tr1));
			if ((EIF_BOOLEAN) !tb4) {
				tr1 = (nstcall = 0, F243_2967(Current));
				tb4 = (nstcall = 1, F665_4976(RTCW(tr1)));
				tb3 = (EIF_BOOLEAN) !tb4;
			}
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
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_POINTER}.navigate */
EIF_REFERENCE F243_2970 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("navigate", 242, Current, 3, 1, 2972);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("document_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	tr1 = (nstcall = 0, F243_2967(Current));
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc3));
		if (tb1) break;
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == NULL)) break;
		RTHOOK(5);
		tb2 = (nstcall = 1, F154_2063(RTCW(loc1)));
		if (tb2) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F154_2076(RTCW(loc1)));
			tr2 = (nstcall = 1, F421_4803(loc3));
			tr2 = (nstcall = 1, F155_2096(RTCW(tr1), tr2));
			loc1 = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(7);
			tb2 = (nstcall = 1, F154_2064(RTCW(loc1)));
			if (tb2) {
				RTHOOK(8);
				tr1 = (nstcall = 1, F421_4803(loc3));
				tb2 = (nstcall = 0, F243_2973(Current, tr1));
				if (tb2) {
					RTHOOK(9);
					tr1 = (nstcall = 1, F421_4803(loc3));
					ti4_1 = (nstcall = 1, F1076_7666(RTCW(tr1)));
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(10);
					tr1 = (nstcall = 1, F154_2078(RTCW(loc1)));
					tb2 = (nstcall = 1, F156_2141(RTCW(tr1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
					if (tb2) {
						RTHOOK(11);
						tr1 = (nstcall = 1, F154_2078(RTCW(loc1)));
						tr2 = (nstcall = 1, F156_2133(RTCW(tr1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
						loc1 = (EIF_REFERENCE) tr2;
					} else {
						RTHOOK(12);
						loc1 = (EIF_REFERENCE) NULL;
					}
				} else {
					RTHOOK(13);
					loc1 = (EIF_REFERENCE) NULL;
				}
			} else {
				RTHOOK(14);
				loc1 = (EIF_REFERENCE) NULL;
			}
		}
		RTHOOK(15);
		(nstcall = 1, F421_4818(loc3));
	}
	RTHOOK(16);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_POINTER}.navigate_to_parent */
EIF_REFERENCE F243_2971 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLR(7,loc2);
	RTLR(8,loc5);
	RTLIU(9);
	
	RTEAA("navigate_to_parent", 242, Current, 5, 1, 2973);
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
		RTCT("has_parent", EX_PRE);
		tr1 = (nstcall = 0, F243_2967(Current));
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F243_2967(Current));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(4);
		Result = (EIF_REFERENCE) arg1;
	} else {
		RTHOOK(5);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1084,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		tr2 = (nstcall = 0, F243_2967(Current));
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr2)));
		(nstcall = -1, F867_5785(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		if (~in_assertion) {
			RTHOOK(7);
			RTCT("valid_index", EX_LINV);
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 1L))) {
				tr1 = (nstcall = 0, F243_2967(Current));
				ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
				tb1 = (EIF_BOOLEAN) (loc3 <= ti4_1);
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(8);
			RTCT("copied_count", EX_LINV);
			ti4_1 = (nstcall = 1, F867_5806(RTCW(loc1)));
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) == ti4_1)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(9);
			RTCT("parent_segments_attached", EX_LINV);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(10);
			RTCT("correct_size_limit", EX_LINV);
			ti4_1 = (nstcall = 1, F867_5806(RTCW(loc1)));
			tr1 = (nstcall = 0, F243_2967(Current));
			ti4_2 = (nstcall = 1, F867_5806(RTCW(tr1)));
			if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(11);
			RTCT("all_segments_valid", EX_LINV);
			ti4_1 = (nstcall = 1, F867_5806(RTCW(loc1)));
			tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), ti4_1));
			tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
			loc4 = (EIF_REFERENCE) tr1;
			tb1 = EIF_TRUE;
			for (;;) {
				if (!tb1) break;
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc4)-334])(loc4));
				if (tb2) break;
				RTHOOK(12);
				ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc4)-334])(loc4));
				tr1 = (nstcall = 1, F867_5791(RTCW(loc1), ti4_1));
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc4)-334])(loc4));
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
		}
		for (;;) {
			RTHOOK(13);
			tr1 = (nstcall = 0, F243_2967(Current));
			ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
			if ((EIF_BOOLEAN) (loc3 >= ti4_1)) break;
			RTHOOK(14);
			tr1 = (nstcall = 0, F243_2967(Current));
			tr2 = (nstcall = 1, F867_5791(RTCW(tr1), loc3));
			(nstcall = 1, F867_5825(RTCW(loc1), tr2));
			RTHOOK(15);
			loc3++;
			if (~in_assertion) {
				RTHOOK(7);
				RTCT("valid_index", EX_LINV);
				tb1 = '\0';
				if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 1L))) {
					tr1 = (nstcall = 0, F243_2967(Current));
					ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
					tb1 = (EIF_BOOLEAN) (loc3 <= ti4_1);
				}
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
				RTHOOK(8);
				RTCT("copied_count", EX_LINV);
				ti4_1 = (nstcall = 1, F867_5806(RTCW(loc1)));
				if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L)) == ti4_1)) {
					RTCK;
				} else {
					RTCF;
				}
				RTHOOK(9);
				RTCT("parent_segments_attached", EX_LINV);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTCK;
				} else {
					RTCF;
				}
				RTHOOK(10);
				RTCT("correct_size_limit", EX_LINV);
				ti4_1 = (nstcall = 1, F867_5806(RTCW(loc1)));
				tr1 = (nstcall = 0, F243_2967(Current));
				ti4_2 = (nstcall = 1, F867_5806(RTCW(tr1)));
				if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
					RTCK;
				} else {
					RTCF;
				}
				RTHOOK(11);
				RTCT("all_segments_valid", EX_LINV);
				ti4_1 = (nstcall = 1, F867_5806(RTCW(loc1)));
				tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
				tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), ti4_1));
				tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
				loc4 = (EIF_REFERENCE) tr1;
				tb1 = EIF_TRUE;
				for (;;) {
					if (!tb1) break;
					tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc4)-334])(loc4));
					if (tb2) break;
					RTHOOK(12);
					ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc4)-334])(loc4));
					tr1 = (nstcall = 1, F867_5791(RTCW(loc1), ti4_1));
					tb1 = (EIF_BOOLEAN)(tr1 != NULL);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc4)-334])(loc4));
				}
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
			}
		}
		RTHOOK(16);
		loc2 = (EIF_REFERENCE) arg1;
		RTHOOK(17);
		tr1 = (nstcall = 1, F867_5799(RTCW(loc1)));
		loc5 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, F421_4812(loc5));
			if (tb1) break;
			RTHOOK(18);
			if ((EIF_BOOLEAN)(loc2 == NULL)) break;
			RTHOOK(19);
			tb2 = (nstcall = 1, F154_2063(RTCW(loc2)));
			if (tb2) {
				RTHOOK(20);
				tr1 = (nstcall = 1, F154_2076(RTCW(loc2)));
				tr2 = (nstcall = 1, F421_4803(loc5));
				tr2 = (nstcall = 1, F155_2096(RTCW(tr1), tr2));
				loc2 = (EIF_REFERENCE) tr2;
			} else {
				RTHOOK(21);
				tb2 = (nstcall = 1, F154_2064(RTCW(loc2)));
				if (tb2) {
					RTHOOK(22);
					tr1 = (nstcall = 1, F421_4803(loc5));
					tb2 = (nstcall = 0, F243_2973(Current, tr1));
					if (tb2) {
						RTHOOK(23);
						tr1 = (nstcall = 1, F421_4803(loc5));
						ti4_2 = (nstcall = 1, F1076_7666(RTCW(tr1)));
						loc3 = (EIF_INTEGER_32) ti4_2;
						RTHOOK(24);
						tr1 = (nstcall = 1, F154_2078(RTCW(loc2)));
						tb2 = (nstcall = 1, F156_2141(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
						if (tb2) {
							RTHOOK(25);
							tr1 = (nstcall = 1, F154_2078(RTCW(loc2)));
							tr2 = (nstcall = 1, F156_2133(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
							loc2 = (EIF_REFERENCE) tr2;
						} else {
							RTHOOK(26);
							loc2 = (EIF_REFERENCE) NULL;
						}
					} else {
						RTHOOK(27);
						loc2 = (EIF_REFERENCE) NULL;
					}
				} else {
					RTHOOK(28);
					loc2 = (EIF_REFERENCE) NULL;
				}
			}
			RTHOOK(29);
			(nstcall = 1, F421_4818(loc5));
		}
		RTHOOK(30);
		Result = (EIF_REFERENCE) loc2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_POINTER}.unescape_pointer_token */
EIF_REFERENCE F243_2972 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("unescape_pointer_token", 242, Current, 0, 1, 2974);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("token_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1_14(arg1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("~1",2,32305)));
	tr2 = (nstcall = 1, F1076_7660(RTMS_EX_H("/",1,47)));
	(nstcall = 1, F1085_7989(RTCW(Result), tr1, tr2));
	RTHOOK(4);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("~0",2,32304)));
	tr2 = (nstcall = 1, F1076_7660(RTMS_EX_H("~",1,126)));
	(nstcall = 1, F1085_7989(RTCW(Result), tr1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_POINTER}.is_array_index */
EIF_BOOLEAN F243_2973 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_array_index", 242, Current, 0, 1, 2975);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("segment_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1076_7632(RTCW(arg1)));
	if (tb2) {
		ti4_1 = (nstcall = 1, F1076_7666(RTCW(arg1)));
		tb1 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_POINTER}._invariant */
void F243_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	RTEAINV(l_feature_name, 214, Current, 2, 0);
	RTIT("segments_attached", Current);
	tr1 = (nstcall = 0, F243_2967(Current));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_void_segments", Current);
	tr1 = (nstcall = 0, F243_2967(Current));
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, F421_4812(loc1));
		if (tb2) break;
		tr1 = (nstcall = 1, F421_4803(loc1));
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		(nstcall = 1, F421_4818(loc1));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_empty_segments", Current);
	tr1 = (nstcall = 0, F243_2967(Current));
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr2;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, F421_4812(loc2));
		if (tb2) break;
		tr1 = (nstcall = 1, F421_4803(loc2));
		tb3 = (nstcall = 1, F667_4976(RTCW(tr1)));
		tb1 = (EIF_BOOLEAN) !tb3;
		(nstcall = 1, F421_4818(loc2));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit215 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
