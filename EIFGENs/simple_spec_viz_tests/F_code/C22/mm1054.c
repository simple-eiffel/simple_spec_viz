/*
 * Code for class MML_SET [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mm1054.h"
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

/* {MML_SET}.default_create */
void F273_3498 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("default_create", 272, Current, 0, 0, 3520);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_final_id(Y3208,Y3208_gen_type,Dftype(Current),271).id);
	(nstcall = -1, F869_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tb1 = (nstcall = 0, F273_3501(Current));
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
}

/* {MML_SET}.singleton */
void F273_3499 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("singleton", 272, Current, 0, 1, 3521);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_final_id(Y3208,Y3208_gen_type,Dftype(Current),271).id);
	(nstcall = -1, F869_5785(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F869_5826(RTCW(tr1), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("one_element", EX_POST);
		ti4_1 = (nstcall = 0, F273_3505(Current));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("has_x", EX_POST);
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[dtype-271])(Current, (EIF_REFERENCE) &arg1));
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

/* {MML_SET}.has */
EIF_BOOLEAN F273_3500 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("has", 272, Current, 1, 1, 3522);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	tb1 = EIF_FALSE;
	for (;;) {
		if (tb1) break;
		tb2 = (nstcall = 1, F423_4812(loc1));
		if (tb2) break;
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = arg1;
		ti4_1 = (nstcall = 1, F423_4803(loc1));
		tr2 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr2 = ti4_1;
		tb3 = (nstcall = 0, F267_3397(Current, tr1, tr2));
		tb1 = tb3;
		(nstcall = 1, F423_4818(loc1));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_SET}.is_empty */
EIF_BOOLEAN F273_3501 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_empty", 272, Current, 0, 0, 3523);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F668_4976(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_zero", EX_POST);
		ti4_1 = (nstcall = 0, F273_3505(Current));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
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

/* {MML_SET}.for_all */
EIF_BOOLEAN F273_3502 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("for_all", 272, Current, 1, 1, 3524);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_has_one_arg", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_0_);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, F423_4812(loc1));
		if (tb2) break;
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F423_4803(loc1));
		tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), ti4_1);
		tb4 = tb3;
		tb1 = tb4;
		(nstcall = 1, F423_4818(loc1));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_SET}.exists */
EIF_BOOLEAN F273_3503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("exists", 272, Current, 1, 1, 3502);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_has_one_arg", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_0_);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	tb1 = EIF_FALSE;
	for (;;) {
		if (tb1) break;
		tb2 = (nstcall = 1, F423_4812(loc1));
		if (tb2) break;
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F423_4803(loc1));
		tb3 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), ti4_1);
		tb4 = tb3;
		tb1 = tb4;
		(nstcall = 1, F423_4818(loc1));
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_SET}.any_item */
EIF_INTEGER_32 F273_3504 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("any_item", 272, Current, 0, 0, 3503);
	RTSA(dtype);
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
		RTCT("element", EX_POST);
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[dtype-271])(Current, (EIF_REFERENCE) &Result));
		if (tb1) {
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

/* {MML_SET}.count */
EIF_INTEGER_32 F273_3505 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("count", 272, Current, 0, 0, 3504);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_SET}.is_model_equal */
EIF_BOOLEAN F273_3506 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_model_equal", 272, Current, 1, 1, 3505);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = arg1;
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,272,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		loc1 = RTRV(typres0,loc1);
	}
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tb1 = '\0';
		ti4_1 = (nstcall = 0, F273_3505(Current));
		ti4_2 = (nstcall = 1, F273_3505(loc1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3197[Dtype(Current)-271])(Current, loc1));
			tb1 = tb2;
		}
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_SET}.is_subset_of */
EIF_BOOLEAN F273_3507 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTEAA("is_subset_of", 272, Current, 0, 1, 3506);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,272,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[5] = l_type.annotations | 0xFF00;
			typarr0[6] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
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
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("other_has_all", EX_POST);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,272,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_SET}.is_superset_of */
EIF_BOOLEAN F273_3508 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_superset_of", 272, Current, 0, 1, 3507);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3197[Dtype(RTCW(arg1))-271])(arg1, Current));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("other_is_subset", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3197[Dtype(RTCW(arg1))-271])(arg1, Current));
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

/* {MML_SET}.disjoint */
EIF_BOOLEAN F273_3509 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTEAA("disjoint", 272, Current, 0, 1, 3508);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
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
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_SET}.extended */
EIF_REFERENCE F273_3510 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLIU(8);
	
	RTEAA("extended", 272, Current, 2, 1, 3509);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[dtype-271])(Current, (EIF_REFERENCE) &arg1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,868,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
		(nstcall = -1, F869_5785(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
		loc2 = (EIF_REFERENCE) tr2;
		for (;;) {
			tb1 = (nstcall = 1, F423_4812(loc2));
			if (tb1) break;
			RTHOOK(4);
			ti4_1 = (nstcall = 1, F423_4803(loc2));
			(nstcall = 1, F869_5826(RTCW(loc1), ti4_1));
			RTHOOK(5);
			(nstcall = 1, F423_4818(loc2));
		}
		RTHOOK(6);
		(nstcall = 1, F869_5826(RTCW(loc1), arg1));
		RTHOOK(7);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,272,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 272, _OBJSIZ_1_0_0_0_0_0_0_0_);
		}
		(nstcall = -1, F273_3519(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		Result = (EIF_REFERENCE) Current;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("has_x", EX_POST);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(Result))-271])(Result, (EIF_REFERENCE) &arg1));
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("has_old", EX_POST);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,272,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
				typarr0[5] = l_type.annotations | 0xFF00;
				typarr0[6] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNTS(typres0.id, 2, 0);
		}
		((EIF_TYPED_VALUE *)tr1+1)->it_r = Result;
		RTAR(tr1,Result);
		
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1074,0xFF01,0xFFF9,1,996,1005,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr4= RTLNRF(typres0.id, (EIF_POINTER) __A1054_35_2, (EIF_POINTER) _A1054_35_2, (EIF_POINTER)(R3191[Dtype((((EIF_TYPED_VALUE *)tr1)[1].it_r)) - 271]),tr1, 1, 1);
		}
		tb2 = (nstcall = 0, F273_3502(Current, tr4));
		if (tb2) {
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

/* {MML_SET}.removed */
EIF_REFERENCE F273_3511 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("removed", 272, Current, 2, 1, 3510);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[dtype-271])(Current, (EIF_REFERENCE) &arg1));
	if (tb1) {
		RTHOOK(2);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,868,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
		(nstcall = -1, F869_5785(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
		loc2 = (EIF_REFERENCE) tr2;
		for (;;) {
			tb1 = (nstcall = 1, F423_4812(loc2));
			if (tb1) break;
			RTHOOK(4);
			tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = arg1;
			ti4_1 = (nstcall = 1, F423_4803(loc2));
			tr2 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr2 = ti4_1;
			tb2 = (nstcall = 0, F267_3397(Current, tr1, tr2));
			if ((EIF_BOOLEAN) !tb2) {
				RTHOOK(5);
				ti4_1 = (nstcall = 1, F423_4803(loc2));
				(nstcall = 1, F869_5826(RTCW(loc1), ti4_1));
			}
			RTHOOK(6);
			(nstcall = 1, F423_4818(loc2));
		}
		RTHOOK(7);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,272,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			tr1 = RTLNS(typres0.id, 272, _OBJSIZ_1_0_0_0_0_0_0_0_);
		}
		(nstcall = -1, F273_3519(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		Result = (EIF_REFERENCE) Current;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("not_has_x", EX_POST);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(Result))-271])(Result, (EIF_REFERENCE) &arg1));
		if ((EIF_BOOLEAN) !tb2) {
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

/* {MML_SET}.union */
EIF_REFERENCE F273_3512 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("union", 272, Current, 3, 1, 3511);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,868,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_2 = (nstcall = 1, F869_5806(RTCW(tr2)));
	(nstcall = -1, F869_5785(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F423_4812(loc2));
		if (tb1) break;
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F423_4803(loc2));
		(nstcall = 1, F869_5826(RTCW(loc1), ti4_1));
		RTHOOK(4);
		(nstcall = 1, F423_4818(loc2));
	}
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb2 = (nstcall = 1, F423_4812(loc3));
		if (tb2) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F423_4803(loc3));
		tb3 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[dtype-271])(Current, (EIF_REFERENCE) &ti4_1));
		if ((EIF_BOOLEAN) !tb3) {
			RTHOOK(7);
			ti4_1 = (nstcall = 1, F423_4803(loc3));
			(nstcall = 1, F869_5826(RTCW(loc1), ti4_1));
		}
		RTHOOK(8);
		(nstcall = 1, F423_4818(loc3));
	}
	RTHOOK(9);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,272,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 272, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F273_3519(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("contains_current", EX_POST);
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3197[Dtype(Current)-271])(Current, Result));
		if (tb3) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("contains_other", EX_POST);
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3197[Dtype(RTCW(arg1))-271])(arg1, Result));
		if (tb3) {
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

/* {MML_SET}.intersection */
EIF_REFERENCE F273_3513 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("intersection", 272, Current, 2, 1, 3512);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,868,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_2 = (nstcall = 1, F869_5806(RTCW(tr2)));
	ti4_3 = eif_min_int32 (ti4_1,ti4_2);
	(nstcall = -1, F869_5785(RTCW(tr1), ti4_3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F423_4812(loc2));
		if (tb1) break;
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F423_4803(loc2));
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(arg1))-271])(arg1, (EIF_REFERENCE) &ti4_1));
		if (tb2) {
			RTHOOK(4);
			ti4_1 = (nstcall = 1, F423_4803(loc2));
			(nstcall = 1, F869_5826(RTCW(loc1), ti4_1));
		}
		RTHOOK(5);
		(nstcall = 1, F423_4818(loc2));
	}
	RTHOOK(6);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,272,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 272, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F273_3519(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("contained_in_current", EX_POST);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3197[Dtype(RTCW(Result))-271])(Result, Current));
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("contained_in_other", EX_POST);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3197[Dtype(RTCW(Result))-271])(Result, arg1));
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

/* {MML_SET}.difference */
EIF_REFERENCE F273_3514 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,arg1);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("difference", 272, Current, 2, 1, 3513);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,868,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
	(nstcall = -1, F869_5785(RTCW(tr1), ti4_1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F423_4812(loc2));
		if (tb1) break;
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F423_4803(loc2));
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3191[Dtype(RTCW(arg1))-271])(arg1, (EIF_REFERENCE) &ti4_1));
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(4);
			ti4_1 = (nstcall = 1, F423_4803(loc2));
			(nstcall = 1, F869_5826(RTCW(loc1), ti4_1));
		}
		RTHOOK(5);
		(nstcall = 1, F423_4818(loc2));
	}
	RTHOOK(6);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,272,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 272, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F273_3519(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("contained_in_current", EX_POST);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3197[Dtype(RTCW(Result))-271])(Result, Current));
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("disjoint_from_other", EX_POST);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3199[Dtype(RTCW(Result))-271])(Result, arg1));
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

/* {MML_SET}.sym_difference */
EIF_REFERENCE F273_3515 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("sym_difference", 272, Current, 0, 1, 3514);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F273_3512(Current, arg1));
	tr2 = (nstcall = 1, F273_3513(Current, arg1));
	tr2 = (nstcall = 1, F273_3514(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 1, F273_3512(Current, arg1));
		tr2 = (nstcall = 1, F273_3513(Current, arg1));
		tr2 = (nstcall = 1, F273_3514(RTCW(tr1), tr2));
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3089[Dtype(RTCW(Result))-267])(Result, tr2));
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

/* {MML_SET}.filtered */
EIF_REFERENCE F273_3516 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("filtered", 272, Current, 2, 1, 3515);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_has_one_arg", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_3_0_0_);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,868,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
	(nstcall = -1, F869_5785(RTCW(tr1), ti4_1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F423_4812(loc2));
		if (tb1) break;
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F423_4803(loc2));
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), ti4_1);
		tb3 = tb2;
		if (tb3) {
			RTHOOK(5);
			ti4_1 = (nstcall = 1, F423_4803(loc2));
			(nstcall = 1, F869_5826(RTCW(loc1), ti4_1));
		}
		RTHOOK(6);
		(nstcall = 1, F423_4818(loc2));
	}
	RTHOOK(7);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,272,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 272, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F273_3519(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("subset", EX_POST);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R3197[Dtype(RTCW(Result))-271])(Result, Current));
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("satisfies_test", EX_POST);
		tb2 = (nstcall = 1, F273_3502(RTCW(Result), arg1));
		if (tb2) {
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

/* {MML_SET}.mapped */
EIF_REFERENCE F273_3517 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("mapped", 272, Current, 2, 1, 3516);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("f_has_one_arg", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_4_2_0_0_);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,868,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 868, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F869_5806(RTCW(tr2)));
	(nstcall = -1, F869_5785(RTCW(tr1), ti4_1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F869_5799(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F423_4812(loc2));
		if (tb1) break;
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F423_4803(loc2));
		ti4_1 = (FUNCTION_CAST(EIF_INTEGER_32, (EIF_POINTER, EIF_REFERENCE, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_4_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_4_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), ti4_1);
		ti4_2 = ti4_1;
		(nstcall = 1, F869_5826(RTCW(loc1), ti4_2));
		RTHOOK(5);
		(nstcall = 1, F423_4818(loc2));
	}
	RTHOOK(6);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,272,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y3211,Y3211_gen_type,dftype,271);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNS(typres0.id, 272, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F273_3519(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {MML_SET}.storage */
EIF_REFERENCE F273_3518 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {MML_SET}.make_from_list */
void F273_3519 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_list", 272, Current, 0, 1, 3518);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("no_duplicates", EX_PRE);
		tb1 = (nstcall = 0, F273_3520(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {MML_SET}.no_duplicates */
EIF_BOOLEAN F273_3520 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("no_duplicates", 272, Current, 2, 1, 3519);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		ti4_1 = (nstcall = 1, F869_5806(RTCW(arg1)));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(4);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(5);
			tb2 = '\01';
			ti4_1 = (nstcall = 1, F869_5806(RTCW(arg1)));
			if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
				tb2 = (EIF_BOOLEAN) !Result;
			}
			if (tb2) break;
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F869_5791(RTCW(arg1), loc1));
			tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			ti4_2 = (nstcall = 1, F869_5791(RTCW(arg1), loc2));
			tr2 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr2 = ti4_2;
			tb3 = (nstcall = 0, F267_3397(Current, tr1, tr2));
			if (tb3) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(8);
			loc2++;
		}
		RTHOOK(9);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit1054 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
