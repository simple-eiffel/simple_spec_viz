/*
 * Code for class MML_INTERVAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mm239.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MML_INTERVAL}.from_range */
void F274_3521 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("from_range", 273, Current, 2, 2, 3525);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		RTHOOK(2);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,868,1005,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F869_5785(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) arg1;
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc1 > arg2)) break;
			RTHOOK(5);
			(nstcall = 1, F869_5826(RTCW(loc2), loc1));
			RTHOOK(6);
			loc1++;
		}
		RTHOOK(7);
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	} else {
		RTHOOK(8);
		tr1 = RTLNSMART(eif_final_id(Y3208,Y3208_gen_type,dftype,271).id);
		(nstcall = -1, F869_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("empty_when_invalid", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg1 > arg2)) {
			tb2 = (nstcall = 0, F273_3501(Current));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("has_bounds", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg1 <= arg2)) {
			tb2 = '\0';
			tb3 = (nstcall = 0, F274_3525(Current, arg1));
			if (tb3) {
				tb3 = (nstcall = 0, F274_3525(Current, arg2));
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("correct_count", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg1 <= arg2)) {
			ti4_1 = (nstcall = 0, F273_3505(Current));
			tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)));
		}
		if (tb1) {
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
}

/* {MML_INTERVAL}.from_tuple */
void F274_3522 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("from_tuple", 273, Current, 0, 1, 3526);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = eif_integer_32_item(RTCW(arg1),1);
	ti4_2 = eif_integer_32_item(RTCW(arg1),2);
	(nstcall = 0, F274_3521(Current, ti4_1, ti4_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {MML_INTERVAL}.lower */
EIF_INTEGER_32 F274_3523 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("lower", 273, Current, 0, 0, 3527);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 0, F273_3501(Current));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F869_5793(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, F869_5793(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_INTERVAL}.upper */
EIF_INTEGER_32 F274_3524 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("upper", 273, Current, 0, 0, 3528);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 0, F273_3501(Current));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F869_5794(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, F869_5794(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_INTERVAL}.has */
EIF_BOOLEAN F274_3525 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("has", 273, Current, 0, 1, 3529);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = (nstcall = 0, F273_3501(Current));
	if ((EIF_BOOLEAN) !tb2) {
		tb2 = '\0';
		ti4_1 = (nstcall = 0, F274_3523(Current));
		if ((EIF_BOOLEAN) (ti4_1 <= arg1)) {
			ti4_1 = (nstcall = 0, F274_3524(Current));
			tb2 = (EIF_BOOLEAN) (arg1 <= ti4_1);
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("efficient_check", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 0, F273_3501(Current));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = '\0';
			ti4_1 = (nstcall = 0, F274_3523(Current));
			if ((EIF_BOOLEAN) (ti4_1 <= arg1)) {
				ti4_1 = (nstcall = 0, F274_3524(Current));
				tb2 = (EIF_BOOLEAN) (arg1 <= ti4_1);
			}
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {MML_INTERVAL}.is_model_equal */
EIF_BOOLEAN F274_3526 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_model_equal", 273, Current, 1, 1, 3530);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(273, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tb1 = (nstcall = 0, F273_3501(Current));
		if (tb1) {
			RTHOOK(3);
			tb1 = (nstcall = 1, F273_3501(loc1));
			Result = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(4);
			tb1 = '\0';
			tb2 = (nstcall = 1, F273_3501(loc1));
			if ((EIF_BOOLEAN) !tb2) {
				tb2 = '\0';
				ti4_1 = (nstcall = 0, F274_3523(Current));
				ti4_2 = (nstcall = 1, F274_3523(loc1));
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					ti4_1 = (nstcall = 0, F274_3524(Current));
					ti4_2 = (nstcall = 1, F274_3524(loc1));
					tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
				}
				tb1 = tb2;
			}
			Result = (EIF_BOOLEAN) tb1;
		}
	} else {
		RTHOOK(5);
		tb1 = (nstcall = 0, F273_3506(Current, arg1));
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_INTERVAL}.is_subset_of */
EIF_BOOLEAN F274_3527 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLIU(7);
	
	RTEAA("is_subset_of", 273, Current, 1, 1, 3531);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(273, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tb1 = '\01';
		tb2 = (nstcall = 0, F273_3501(Current));
		if (!tb2) {
			tb2 = '\0';
			tb3 = (nstcall = 1, F273_3501(loc1));
			if ((EIF_BOOLEAN) !tb3) {
				tb3 = '\0';
				ti4_1 = (nstcall = 1, F274_3523(loc1));
				ti4_2 = (nstcall = 0, F274_3523(Current));
				if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
					ti4_1 = (nstcall = 0, F274_3524(Current));
					ti4_2 = (nstcall = 1, F274_3524(loc1));
					tb3 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		tb1 = (nstcall = 0, F273_3507(Current, arg1));
		Result = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("other_has_all", EX_POST);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,272,1005,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = arg1;
		RTAR(tr1,arg1);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1074,0xFF01,0xFFF9,1,996,1005,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1054_35_2, (EIF_POINTER) _A1054_35_2, (EIF_POINTER)(R3191[Dtype((((EIF_TYPED_VALUE *)tr1)[1].it_r)) - 271]),tr1, 1, 1);
		}
		tb1 = (nstcall = 0, F273_3502(Current, tr4));
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {MML_INTERVAL}.disjoint */
EIF_BOOLEAN F274_3528 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLIU(7);
	
	RTEAA("disjoint", 273, Current, 1, 1, 3532);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(273, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = (nstcall = 0, F273_3501(Current));
		if (!tb3) {
			tb3 = (nstcall = 1, F273_3501(loc1));
			tb2 = tb3;
		}
		if (!tb2) {
			tb2 = '\01';
			ti4_1 = (nstcall = 1, F274_3524(loc1));
			ti4_2 = (nstcall = 0, F274_3523(Current));
			if (!(EIF_BOOLEAN) (ti4_1 < ti4_2)) {
				ti4_1 = (nstcall = 0, F274_3524(Current));
				ti4_2 = (nstcall = 1, F274_3523(loc1));
				tb2 = (EIF_BOOLEAN) (ti4_1 < ti4_2);
			}
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(3);
		tb1 = (nstcall = 0, F273_3509(Current, arg1));
		Result = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_common_elements", EX_POST);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			typarr0[4] = dftype;
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
		RTAR(tr1,Current);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1074,0xFF01,0xFFF9,1,996,1005,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1054_35_2, (EIF_POINTER) _A1054_35_2, (EIF_POINTER)(R3191[Dtype((((EIF_TYPED_VALUE *)tr1)[1].it_r)) - 271]),tr1, 1, 1);
		}
		tb1 = (nstcall = 1, F273_3503(RTCW(arg1), tr4));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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

/* {MML_INTERVAL}.interval_union */
EIF_REFERENCE F274_3529 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("interval_union", 273, Current, 0, 1, 3533);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F273_3501(Current));
	if (tb1) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) arg1;
	} else {
		RTHOOK(3);
		tb1 = (nstcall = 1, F273_3501(RTCW(arg1)));
		if (tb1) {
			RTHOOK(4);
			Result = (EIF_REFERENCE) Current;
		} else {
			RTHOOK(5);
			tr1 = RTLNS(eif_new_type(273, 0x01).id, 273, _OBJSIZ_1_0_0_0_0_0_0_0_);
			ti4_1 = (nstcall = 0, F274_3523(Current));
			ti4_2 = (nstcall = 1, F274_3523(RTCW(arg1)));
			ti4_3 = eif_min_int32 (ti4_1,ti4_2);
			ti4_1 = (nstcall = 0, F274_3524(Current));
			ti4_2 = (nstcall = 1, F274_3524(RTCW(arg1)));
			ti4_4 = eif_max_int32 (ti4_1,ti4_2);
			(nstcall = -1, F274_3521(RTCW(tr1), ti4_3, ti4_4));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("includes_current", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 0, F273_3501(Current));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (nstcall = 1, F273_3508(RTCW(Result), Current));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("includes_other", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, F273_3501(RTCW(arg1)));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (nstcall = 1, F273_3508(RTCW(Result), arg1));
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
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit239 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
