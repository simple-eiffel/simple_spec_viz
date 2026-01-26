/*
 * Code for class ARRAY [CHARACTER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ar627.h"
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

/* {ARRAY}.make_empty */
void F782_5429 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_empty", 781, Current, 0, 0, 7250);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	(nstcall = 0, F286_3779(Current, ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("lower_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("upper_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("items_set", EX_POST);
		if ((nstcall = 0, F782_5446(Current))) {
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
}

/* {ARRAY}.make_filled */
void F782_5430 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_filled", 781, Current, 1, 3, 7251);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg2 <= arg3)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(6);
	(nstcall = 0, F286_3780(Current, arg1, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("lower_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("upper_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("items_set", EX_POST);
		if ((nstcall = 0, F782_5447(Current, arg1))) {
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
}

/* {ARRAY}.make */
void F782_5431 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 781, Current, 0, 2, 7252);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_default", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (arg1 <= arg2)) {
			tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
			tb2 = (nstcall = 1, F979_6344(tr1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		RTHOOK(6);
		tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
		tc1 = (nstcall = 1, F979_6355(tr1));
		(nstcall = 0, F286_3780(Current, tc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(7);
		(nstcall = 0, F286_3779(Current, ((EIF_INTEGER_32) 0L)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("lower_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("upper_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("items_set", EX_POST);
		if ((nstcall = 0, F782_5446(Current))) {
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

/* {ARRAY}.make_from_array */
void F782_5432 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_array", 781, Current, 0, 1, 7253);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("array_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 0, F286_3786(Current, tr1));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("shared", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("lower_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("upper_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
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
}

/* {ARRAY}.make_from_special */
void F782_5433 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_special", 781, Current, 0, 1, 7254);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("special_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F286_3786(Current, arg1));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F903_6149(arg1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("shared", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("lower_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("upper_set", EX_POST);
		ti4_1 = (nstcall = 1, F903_6149(arg1));
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
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
}

/* {ARRAY}.make_from_cil */
void F782_5434 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_cil", 781, Current, 0, 1, 7255);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_dotnet", EX_PRE);
		RTTE((nstcall = 0, F263_3306(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("na_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_final_id(Y3460,Y3460_gen_type,Dftype(Current),281).id);
	(nstcall = -1, F903_6138(RTCW(tr1), arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F903_6149(tr1));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {ARRAY}.item */
EIF_CHARACTER_8 F782_5435 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("item", 781, Current, 0, 1, 7256);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg1)), label_3);
		RTCK;
		RTJB;
label_3:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F903_6139(RTCW(tr1), (EIF_INTEGER_32) (arg1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.at */
EIF_CHARACTER_8 F782_5436 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("at", 781, Current, 0, 1, 7257);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg1)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tc1 = (nstcall = 1, F903_6139(RTCW(tr1), (EIF_INTEGER_32) (arg1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.entry */
EIF_CHARACTER_8 F782_5437 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("entry", 781, Current, 0, 1, 7258);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F782_5435(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.has */
EIF_BOOLEAN F782_5438 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("has", 781, Current, 3, 1, 7259);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ti4_1);
	RTHOOK(3);
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) && EIF_TRUE)) {
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || Result)) break;
			RTHOOK(5);
			tc1 = (nstcall = 1, F903_6139(RTCW(loc3), loc1));
			Result = (EIF_BOOLEAN) (tc1 == arg1);
			RTHOOK(6);
			loc1++;
		}
	} else {
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || Result)) break;
			RTHOOK(8);
			tc1 = (nstcall = 1, F903_6139(RTCW(loc3), loc1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == arg1);
			RTHOOK(9);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F666_4976(Current));
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
	return Result;
}

/* {ARRAY}.new_cursor */
EIF_REFERENCE F782_5439 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("new_cursor", 781, Current, 0, 0, 7260);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,456,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y4237,Y4237_gen_type,Dftype(Current),350);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		Result = RTLNS(typres0.id, 456, _OBJSIZ_2_0_0_3_0_0_0_0_);
	}
	(nstcall = -1, F457_4841(RTCW(Result), Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
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

/* {ARRAY}.lower */
EIF_INTEGER_32 F782_5440 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
}


/* {ARRAY}.upper */
EIF_INTEGER_32 F782_5441 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
}


/* {ARRAY}.count */
EIF_INTEGER_32 F782_5442 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("count", 781, Current, 0, 0, 7263);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("consistent_with_bounds", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) + ((EIF_INTEGER_32) 1L)))) {
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

/* {ARRAY}.capacity */
EIF_INTEGER_32 F782_5443 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("capacity", 781, Current, 0, 0, 7264);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("capacity_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("consistent_with_bounds", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) + ((EIF_INTEGER_32) 1L)))) {
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

/* {ARRAY}.occurrences */
EIF_INTEGER_32 F782_5444 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("occurrences", 781, Current, 1, 1, 7265);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(2);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		for (;;) {
			RTHOOK(3);
			if ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))) break;
			RTHOOK(4);
			if (((nstcall = 0, F782_5435(Current, loc1)) == arg1)) {
				RTHOOK(5);
				Result++;
			}
			RTHOOK(6);
			loc1++;
		}
	} else {
		RTHOOK(7);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))) break;
			RTHOOK(9);
			if ((EIF_BOOLEAN)((nstcall = 0, F782_5435(Current, loc1)) == arg1)) {
				RTHOOK(10);
				Result++;
			}
			RTHOOK(11);
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("non_negative_occurrences", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {ARRAY}.is_equal */
EIF_BOOLEAN F782_5445 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 781, Current, 1, 1, 7266);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		tb1 = '\0';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1);
		}
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
			tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
		}
		if (tb1) {
			RTHOOK(5);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
				RTHOOK(6);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(7);
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
				for (;;) {
					RTHOOK(8);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || (EIF_BOOLEAN) (loc1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)))) break;
					RTHOOK(9);
					tc1 = (nstcall = 0, F782_5435(Current, loc1));
					tc2 = (nstcall = 1, F782_5435(RTCW(arg1), loc1));
					Result = (EIF_BOOLEAN) (tc1 == tc2);
					RTHOOK(10);
					loc1++;
				}
			} else {
				RTHOOK(11);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
				ti4_1 = (nstcall = 0, F782_5442(Current));
				tb1 = (nstcall = 1, F903_6152(RTCW(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1));
				Result = (EIF_BOOLEAN) tb1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.all_default */
EIF_BOOLEAN F782_5446 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("all_default", 781, Current, 1, 0, 7267);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F782_5442(Current)) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		Result = '\0';
		tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
		tb1 = (nstcall = 1, F979_6344(tr1));
		if (tb1) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
			tc1 = (nstcall = 1, F979_6355(tr2));
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
			ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
			tb1 = (nstcall = 1, F903_6151(RTCW(tr1), tc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			Result = tb1;
		}
	} else {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			tb3 = '\01';
			loc1 = (nstcall = 0, F782_5435(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)));
			if (!((EIF_BOOLEAN) !(EIF_TRUE))) {
				tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
				tc1 = (nstcall = 1, F979_6355(tr1));
				tb3 = (EIF_BOOLEAN)(loc1 == tc1);
			}
			if (tb3) {
				tr1 = (nstcall = 0, F782_5484(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - ((EIF_INTEGER_32) 1L))));
				tb3 = (nstcall = 1, F782_5446(RTCW(tr1)));
				tb2 = tb3;
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.filled_with */
EIF_BOOLEAN F782_5447 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("filled_with", 781, Current, 0, 1, 7268);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F903_6151(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN)((nstcall = 0, F782_5435(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))) == arg1)) {
				tr1 = (nstcall = 0, F782_5484(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - ((EIF_INTEGER_32) 1L))));
				tb3 = (nstcall = 1, F782_5447(RTCW(tr1), arg1));
				tb2 = tb3;
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

/* {ARRAY}.full */
EIF_BOOLEAN F782_5448 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("full", 781, Current, 0, 0, 7269);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.same_items */
EIF_BOOLEAN F782_5449 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("same_items", 781, Current, 0, 1, 7270);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F782_5442(RTCW(arg1)));
	if ((EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ti4_1)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (nstcall = 0, F782_5442(Current));
		tb1 = (nstcall = 1, F903_6152(RTCW(tr1), tr2, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L), ti4_1));
		Result = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		ti4_1 = (nstcall = 1, F782_5442(RTCW(arg1)));
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ti4_1)) {
			tb2 = '\01';
			if (!(EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ((EIF_INTEGER_32) 0L))) {
				tb3 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
				tc1 = (nstcall = 1, F782_5435(RTCW(arg1), ti4_1));
				if ((EIF_BOOLEAN)((nstcall = 0, F782_5435(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))) == tc1)) {
					tr1 = (nstcall = 0, F782_5484(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - ((EIF_INTEGER_32) 1L))));
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
					tr2 = (nstcall = 1, F782_5484(RTCW(arg1), ti4_1, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
					tb4 = (nstcall = 1, F782_5449(RTCW(tr1), tr2));
					tb3 = tb4;
				}
				tb2 = tb3;
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.valid_index */
EIF_BOOLEAN F782_5450 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_index", 781, Current, 0, 1, 7271);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 <= arg1) && (EIF_BOOLEAN) (arg1 <= ti4_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		if ((!(Result) || ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) <= arg1) && (EIF_BOOLEAN) (arg1 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)))))) {
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

/* {ARRAY}.extendible */
EIF_BOOLEAN F782_5451 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("extendible", 781, Current, 0, 0, 7272);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.prunable */
EIF_BOOLEAN F782_5452 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prunable", 781, Current, 0, 0, 7273);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.resizable */
EIF_BOOLEAN F782_5453 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("resizable", 781, Current, 0, 0, 7274);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,Dftype(Current),350), 0x00);
	tb1 = (nstcall = 1, F979_6344(tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.put */
void F782_5454 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("put", 781, Current, 0, 2, 7275);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg2)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg2)), label_3);
		RTCK;
		RTJB;
label_3:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F903_6154(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg2 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5435(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5435(Current, arg2)) == arg1)) {
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
}

/* {ARRAY}.enter */
void F782_5455 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("enter", 781, Current, 0, 2, 7276);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_key", EX_PRE);
		RTTE((nstcall = 0, F782_5450(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F903_6154(RTCW(tr1), arg1, (EIF_INTEGER_32) (arg2 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {ARRAY}.force */
void F782_5456 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("force", 781, Current, 7, 2, 7277);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_default_if_too_low", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 < (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) - ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) != ((EIF_INTEGER_32) 0x80000000L)))) {
			tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
			tb2 = (nstcall = 1, F979_6344(tr1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_default_if_too_high", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 > (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) + ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) != ((EIF_INTEGER_32) 2147483647L)))) {
			tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
			tb2 = (nstcall = 1, F979_6344(tr1));
			tb1 = tb2;
		}
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
		ti4_1 = (nstcall = 0, F782_5442(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	ti4_5 = eif_min_int32 (ti4_4,arg2);
	loc3 = (EIF_INTEGER_32) ti4_5;
	RTHOOK(4);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_5 = eif_max_int32 (ti4_4,arg2);
	loc4 = (EIF_INTEGER_32) ti4_5;
	RTHOOK(5);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc3) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_4 + ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_5 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	if ((nstcall = 0, F782_5487(Current))) {
		RTHOOK(8);
		ti4_4 = (nstcall = 0, F700_4982(Current));
		ti4_5 = eif_max_int32 (loc2,ti4_4);
		(nstcall = 0, F286_3779(Current, ti4_5));
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc3 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))) {
			RTHOOK(10);
			tr2 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F903_6156(RTCW(tr2), arg1));
			RTHOOK(11);
			if ((EIF_BOOLEAN) !loc7) {
				RTHOOK(12);
				tr2 = *(EIF_REFERENCE *)(Current);
				tr3 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
				tc1 = (nstcall = 1, F979_6355(tr3));
				(nstcall = 1, F903_6158(RTCW(tr2), tc1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
			}
		} else {
			RTHOOK(13);
			if ((EIF_BOOLEAN) !loc7) {
				RTHOOK(14);
				tr2 = *(EIF_REFERENCE *)(Current);
				tr3 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
				tc1 = (nstcall = 1, F979_6355(tr3));
				(nstcall = 1, F903_6158(RTCW(tr2), tc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L))));
			}
			RTHOOK(15);
			tr2 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F903_6156(RTCW(tr2), arg1));
		}
	} else {
		RTHOOK(16);
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_4 = (nstcall = 1, F903_6150(tr2));
		loc1 = (EIF_INTEGER_32) ti4_4;
		RTHOOK(17);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(18);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_4 = (nstcall = 0, F700_4982(Current));
			ti4_5 = eif_max_int32 (loc2,(EIF_INTEGER_32) (loc1 + ti4_4));
			tr3 = (nstcall = 1, F903_6171(tr2, ti4_5));
			(nstcall = 0, F286_3786(Current, tr3));
		}
		RTHOOK(19);
		if ((EIF_BOOLEAN) (loc3 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))) {
			RTHOOK(20);
			loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - loc3);
			RTHOOK(21);
			loc5 = (nstcall = 0, F782_5443(Current));
			RTHOOK(22);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !loc7 && (EIF_BOOLEAN) (loc6 > loc5))) {
				RTHOOK(23);
				tr2 = *(EIF_REFERENCE *)(Current);
				tr3 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
				tc1 = (nstcall = 1, F979_6355(tr3));
				(nstcall = 1, F903_6158(RTCW(tr2), tc1, loc5, (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
			}
			RTHOOK(24);
			tr2 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F903_6162(RTCW(tr2), ((EIF_INTEGER_32) 0L), loc6, loc5));
			RTHOOK(25);
			if ((EIF_BOOLEAN) !loc7) {
				RTHOOK(26);
				tr2 = *(EIF_REFERENCE *)(Current);
				tr3 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
				tc1 = (nstcall = 1, F979_6355(tr3));
				(nstcall = 1, F903_6158(RTCW(tr2), tc1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
			}
			RTHOOK(27);
			tr2 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F903_6154(RTCW(tr2), arg1, ((EIF_INTEGER_32) 0L)));
		} else {
			RTHOOK(28);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_4 = (nstcall = 1, F903_6149(tr2));
			if ((EIF_BOOLEAN) (loc2 > ti4_4)) {
				RTHOOK(29);
				if ((EIF_BOOLEAN) !loc7) {
					RTHOOK(30);
					tr2 = *(EIF_REFERENCE *)(Current);
					tr3 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
					tc1 = (nstcall = 1, F979_6355(tr3));
					tr3 = *(EIF_REFERENCE *)(Current);
					ti4_4 = (nstcall = 1, F903_6149(tr3));
					(nstcall = 1, F903_6158(RTCW(tr2), tc1, ti4_4, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L))));
				}
				RTHOOK(31);
				tr2 = *(EIF_REFERENCE *)(Current);
				(nstcall = 1, F903_6156(RTCW(tr2), arg1));
			} else {
				RTHOOK(32);
				tr2 = *(EIF_REFERENCE *)(Current);
				(nstcall = 1, F903_6154(RTCW(tr2), arg1, (EIF_INTEGER_32) (arg2 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
			}
		}
	}
	RTHOOK(33);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) loc3;
	RTHOOK(34);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(35);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5435(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(36);
		RTCT("higher_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN) ((nstcall = 0, F782_5442(Current)) >= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(37);
		RTCT("lower_set", EX_POST);
		ti4_4 = eif_min_int32 (ti4_2,arg2);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(38);
		RTCT("upper_set", EX_POST);
		ti4_4 = eif_max_int32 (ti4_3,arg2);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTLE;
	RTEE;
}

/* {ARRAY}.force_and_fill */
void F782_5457 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_INTEGER_32 ti4_8;
	EIF_INTEGER_32 ti4_9;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,loc6);
	RTLR(5,loc7);
	RTLIU(6);
	
	RTEAA("force_and_fill", 781, Current, 7, 2, 7278);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		RTE_OT
		ti4_5 = (nstcall = 0, F782_5442(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_7 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_8 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	ti4_9 = eif_min_int32 (ti4_8,arg2);
	loc3 = (EIF_INTEGER_32) ti4_9;
	RTHOOK(2);
	ti4_8 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_9 = eif_max_int32 (ti4_8,arg2);
	loc4 = (EIF_INTEGER_32) ti4_9;
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 - loc3) + ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_8 = (nstcall = 1, F903_6150(tr2));
	loc1 = (EIF_INTEGER_32) ti4_8;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		ti4_8 = (nstcall = 0, F700_4982(Current));
		ti4_9 = eif_max_int32 (loc2,ti4_8);
		(nstcall = 0, F286_3779(Current, ti4_9));
		RTHOOK(7);
		tr2 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F903_6158(RTCW(tr2), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(9);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_8 = (nstcall = 0, F700_4982(Current));
			ti4_9 = eif_max_int32 (loc2,(EIF_INTEGER_32) (loc1 + ti4_8));
			tr3 = (nstcall = 1, F903_6171(tr2, ti4_9));
			(nstcall = 0, F286_3786(Current, tr3));
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc3 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))) {
			RTHOOK(11);
			loc5 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc3);
			RTHOOK(12);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_8 = (nstcall = 0, F782_5443(Current));
			(nstcall = 1, F903_6162(RTCW(tr2), ((EIF_INTEGER_32) 0L), loc5, ti4_8));
			RTHOOK(13);
			tr2 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F903_6158(RTCW(tr2), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc5 - ((EIF_INTEGER_32) 1L))));
		} else {
			RTHOOK(14);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_8 = (nstcall = 1, F903_6149(tr2));
			if ((EIF_BOOLEAN) (loc2 > ti4_8)) {
				RTHOOK(15);
				tr2 = *(EIF_REFERENCE *)(Current);
				tr3 = *(EIF_REFERENCE *)(Current);
				ti4_8 = (nstcall = 1, F903_6149(tr3));
				(nstcall = 1, F903_6158(RTCW(tr2), arg1, ti4_8, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
			} else {
				RTHOOK(16);
				tr2 = *(EIF_REFERENCE *)(Current);
				(nstcall = 1, F903_6154(RTCW(tr2), arg1, (EIF_INTEGER_32) (arg2 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
			}
		}
	}
	RTHOOK(17);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) loc3;
	RTHOOK(18);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5435(Current, arg2)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("filled_below_lower", EX_POST);
		tr2 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr2 = arg2;
		tr3 = (nstcall = 1, F1004_6720(RTCW(tr2), ti4_2));
		tr2 = (nstcall = 1, F750_5385(RTCW(tr3)));
		loc6 = (EIF_REFERENCE) tr2;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc6)-334])(loc6));
			if (tb2) break;
			RTHOOK(21);
			tb3 = '\01';
			ti4_8 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc6)-334])(loc6));
			if ((EIF_BOOLEAN) (ti4_8 < ti4_1)) {
				ti4_8 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc6)-334])(loc6));
				tb3 = (EIF_BOOLEAN)((nstcall = 0, F782_5435(Current, ti4_8)) == arg1);
			}
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc6)-334])(loc6));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("filled_above_upper", EX_POST);
		tr2 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr2 = ti4_4;
		tr3 = (nstcall = 1, F1004_6720(RTCW(tr2), arg2));
		tr2 = (nstcall = 1, F750_5385(RTCW(tr3)));
		loc7 = (EIF_REFERENCE) tr2;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc7)-334])(loc7));
			if (tb2) break;
			RTHOOK(23);
			tb3 = '\01';
			ti4_8 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc7)-334])(loc7));
			if ((EIF_BOOLEAN) (ti4_8 > ti4_3)) {
				ti4_8 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc7)-334])(loc7));
				tb3 = (EIF_BOOLEAN)((nstcall = 0, F782_5435(Current, ti4_8)) == arg1);
			}
			tb1 = tb3;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc7)-334])(loc7));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("higher_count", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN) ((nstcall = 0, F782_5442(Current)) >= ti4_5)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("lower_set", EX_POST);
		ti4_8 = eif_min_int32 (ti4_6,arg2);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_8)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("upper_set", EX_POST);
		ti4_8 = eif_max_int32 (ti4_7,arg2);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_8)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
}

/* {ARRAY}.fill_with */
void F782_5458 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("fill_with", 781, Current, 0, 1, 7279);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F782_5443(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = (nstcall = 0, F782_5442(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr3 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F903_6158(RTCW(tr3), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_capacity", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5443(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("count_definition", EX_POST);
		RTCO(tr2);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("filled", EX_POST);
		if ((nstcall = 0, F782_5447(Current, arg1))) {
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

/* {ARRAY}.subcopy */
void F782_5459 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("subcopy", 781, Current, 0, 4, 7280);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_pos", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		RTTE((EIF_BOOLEAN) (arg2 >= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_pos", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_index_pos", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("enough_space", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - arg4) >= (EIF_INTEGER_32) (arg3 - arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	(nstcall = 1, F903_6161(RTCW(tr1), tr2, (EIF_INTEGER_32) (arg2 - ti4_1), (EIF_INTEGER_32) (arg4 - ti4_2), (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {ARRAY}.do_all */
void F782_5460 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("do_all", 781, Current, 0, 1, 7281);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 0, F782_5442(Current));
	(nstcall = 1, F903_6176(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {ARRAY}.do_if */
void F782_5461 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("do_if", 781, Current, 0, 2, 7282);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("action_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 0, F782_5442(Current));
	(nstcall = 1, F903_6177(RTCW(tr1), arg1, arg2, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ARRAY}.there_exists */
EIF_BOOLEAN F782_5462 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("there_exists", 781, Current, 0, 1, 7283);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 0, F782_5442(Current));
	tb1 = (nstcall = 1, F903_6178(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.for_all */
EIF_BOOLEAN F782_5463 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("for_all", 781, Current, 0, 1, 7284);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("test_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 0, F782_5442(Current));
	tb1 = (nstcall = 1, F903_6179(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.do_all_with_index */
void F782_5464 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("do_all_with_index", 781, Current, 4, 1, 7285);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(3);
	loc3 = (nstcall = 0, F782_5442(Current));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	loc4 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(6);
		tc1 = (nstcall = 1, F903_6139(RTCW(loc4), loc1));
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), tc1, loc2);
		RTHOOK(7);
		loc2++;
		RTHOOK(8);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {ARRAY}.do_if_with_index */
void F782_5465 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,arg2);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTEAA("do_if_with_index", 781, Current, 4, 2, 7286);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(3);
	loc3 = (nstcall = 0, F782_5442(Current));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	loc4 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(6);
		tc1 = (nstcall = 1, F903_6139(RTCW(loc4), loc1));
		tb1 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_), tc1, loc2);
		tb2 = tb1;
		if (tb2) {
			RTHOOK(7);
			tc1 = (nstcall = 1, F903_6139(RTCW(loc4), loc1));
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), tc1, loc2);
		}
		RTHOOK(8);
		loc2++;
		RTHOOK(9);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {ARRAY}.wipe_out */
void F782_5466 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wipe_out", 781, Current, 0, 0, 7287);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F782_5452(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F782_5467(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("wiped_out", EX_POST);
		if ((nstcall = 0, F666_4976(Current))) {
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
}

/* {ARRAY}.discard_items */
void F782_5467 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("discard_items", 781, Current, 0, 0, 7288);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_default", EX_PRE);
		tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
		tb1 = (nstcall = 1, F979_6344(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr2 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
	tc1 = (nstcall = 1, F979_6355(tr2));
	ti4_1 = (nstcall = 0, F782_5443(Current));
	tr1 = RTLNSP2(eif_final_id(Y3460,Y3460_gen_type,dftype,281).id,0,ti4_1,sizeof(EIF_CHARACTER_8), EIF_TRUE);
	(nstcall = -1, F903_6137(RTCW(tr1), tc1, ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("default_items", EX_POST);
		if ((nstcall = 0, F782_5446(Current))) {
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
}

/* {ARRAY}.clear_all */
void F782_5468 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("clear_all", 781, Current, 0, 0, 7289);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("has_default", EX_PRE);
		tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
		tb1 = (nstcall = 1, F979_6344(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
	tc1 = (nstcall = 1, F979_6355(tr2));
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_3 = (nstcall = 1, F903_6149(tr2));
	(nstcall = 1, F903_6158(RTCW(tr1), tc1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("stable_lower", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("stable_upper", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("default_items", EX_POST);
		if ((nstcall = 0, F782_5446(Current))) {
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

/* {ARRAY}.keep_head */
void F782_5469 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("keep_head", 781, Current, 0, 1, 7290);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F782_5442(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 < (nstcall = 0, F782_5442(Current)))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) + arg1) - ((EIF_INTEGER_32) 1L));
		RTHOOK(4);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = (nstcall = 1, F903_6171(tr2, arg1));
		RTAR(Current, tr3);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr3;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		ti4_3 = eif_min_int32 (arg1,ti4_1);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_lower", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_2)) {
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
}

/* {ARRAY}.keep_tail */
void F782_5470 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("keep_tail", 781, Current, 1, 1, 7291);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F782_5442(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	loc1 = (nstcall = 0, F782_5442(Current));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 < loc1)) {
		RTHOOK(4);
		tr2 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F903_6163(RTCW(tr2), (EIF_INTEGER_32) (loc1 - arg1), ((EIF_INTEGER_32) 0L), arg1));
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - arg1) + ((EIF_INTEGER_32) 1L));
		RTHOOK(6);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = (nstcall = 1, F903_6171(tr2, arg1));
		RTAR(Current, tr3);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr3;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		ti4_3 = eif_min_int32 (arg1,ti4_1);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("same_upper", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2)) {
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

/* {ARRAY}.remove_head */
void F782_5471 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("remove_head", 781, Current, 0, 1, 7292);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F782_5442(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > (nstcall = 0, F782_5442(Current)))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) + ((EIF_INTEGER_32) 1L));
		RTHOOK(4);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = (nstcall = 1, F903_6171(tr2, ((EIF_INTEGER_32) 0L)));
		RTAR(Current, tr3);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr3;
	} else {
		RTHOOK(5);
		ti4_3 = (nstcall = 0, F782_5442(Current));
		(nstcall = 0, F782_5470(Current, (EIF_INTEGER_32) (ti4_3 - arg1)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		ti4_3 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - arg1),((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_upper", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2)) {
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
}

/* {ARRAY}.remove_tail */
void F782_5472 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("remove_tail", 781, Current, 0, 1, 7293);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F782_5442(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > (nstcall = 0, F782_5442(Current)))) {
		RTHOOK(3);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) - ((EIF_INTEGER_32) 1L));
		RTHOOK(4);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = (nstcall = 1, F903_6171(tr2, ((EIF_INTEGER_32) 0L)));
		RTAR(Current, tr3);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr3;
	} else {
		RTHOOK(5);
		ti4_3 = (nstcall = 0, F782_5442(Current));
		(nstcall = 0, F782_5469(Current, (EIF_INTEGER_32) (ti4_3 - arg1)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		RTCO(tr1);
		ti4_3 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 - arg1),((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("same_lower", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_2)) {
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
}

/* {ARRAY}.grow */
void F782_5473 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("grow", 781, Current, 0, 1, 7294);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("resizable", EX_PRE);
		RTTE((nstcall = 0, F782_5453(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 > (nstcall = 0, F782_5443(Current)))) {
		RTHOOK(3);
		tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,Dftype(Current),350), 0x00);
		tc1 = (nstcall = 1, F979_6355(tr1));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		ti4_3 = (nstcall = 0, F782_5443(Current));
		(nstcall = 0, F782_5475(Current, tc1, ti4_1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 + arg1) - ti4_3)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_capacity", EX_POST);
		if ((EIF_BOOLEAN) ((nstcall = 0, F782_5443(Current)) >= arg1)) {
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

/* {ARRAY}.conservative_resize */
void F782_5474 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("conservative_resize", 781, Current, 0, 2, 7295);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("good_indices", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= arg2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_default", EX_PRE);
		tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
		tb1 = (nstcall = 1, F979_6344(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
	tc1 = (nstcall = 1, F979_6355(tr1));
	(nstcall = 0, F782_5475(Current, tc1, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_low_lost", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == arg1) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("no_high_lost", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == arg2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2))) {
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

/* {ARRAY}.conservative_resize_with_default */
void F782_5475 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("conservative_resize_with_default", 781, Current, 4, 3, 7296);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("good_indices", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= arg3), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((nstcall = 0, F782_5487(Current))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F903_6172(RTCW(tr1), arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L))));
		(nstcall = 0, F286_3786(Current, tr2));
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg2;
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg3;
	} else {
		RTHOOK(6);
		ti4_3 = eif_min_int32 (arg2,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_));
		loc2 = (EIF_INTEGER_32) ti4_3;
		RTHOOK(7);
		ti4_3 = eif_max_int32 (arg3,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_));
		loc3 = (EIF_INTEGER_32) ti4_3;
		RTHOOK(8);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc2) + ((EIF_INTEGER_32) 1L));
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_3 = (nstcall = 1, F903_6149(tr1));
		if ((EIF_BOOLEAN) (loc1 > ti4_3)) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, F903_6172(RTCW(tr1), arg1, loc1));
			(nstcall = 0, F286_3786(Current, tr2));
		}
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc2 < *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_))) {
			RTHOOK(12);
			loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc2);
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F903_6162(RTCW(tr1), ((EIF_INTEGER_32) 0L), loc4, (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) + ((EIF_INTEGER_32) 1L))));
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F903_6158(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L))));
		}
		RTHOOK(15);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) loc2;
		RTHOOK(16);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc3;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("no_low_lost", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == arg2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("no_high_lost", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == arg3) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2))) {
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
}

/* {ARRAY}.resize */
void F782_5476 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("resize", 781, Current, 0, 2, 7297);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("good_indices", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= arg2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("has_default", EX_PRE);
		tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
		tb1 = (nstcall = 1, F979_6344(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr1 = RTLNTY2(eif_final_id(Y4237,Y4237_gen_type,dftype,350), 0x00);
	tc1 = (nstcall = 1, F979_6355(tr1));
	(nstcall = 0, F782_5475(Current, tc1, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_low_lost", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == arg1) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("no_high_lost", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == arg2) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_2))) {
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

/* {ARRAY}.trim */
void F782_5477 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLIU(6);
	
	RTEAA("trim", 781, Current, 1, 0, 7298);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = (nstcall = 0, F1_14(Current));
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_1 = (nstcall = 0, F782_5442(Current));
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = (nstcall = 0, F782_5442(Current));
	RTHOOK(2);
	tr4 = *(EIF_REFERENCE *)(Current);
	ti4_2 = (nstcall = 1, F903_6150(tr4));
	if ((EIF_BOOLEAN) (loc1 < ti4_2)) {
		RTHOOK(3);
		tr4 = *(EIF_REFERENCE *)(Current);
		tr5 = (nstcall = 1, F903_6171(tr4, loc1));
		RTAR(Current, tr5);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr5;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("same_count", EX_POST);
		RTCO(tr3);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5442(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("minimal_capacity", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F782_5443(Current)) == (nstcall = 0, F782_5442(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("same_items", EX_POST);
		RTCO(tr2);
		if ((nstcall = 0, F782_5449(Current, tr1))) {
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
}

/* {ARRAY}.rebase */
void F782_5478 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("rebase", 781, Current, 1, 1, 7299);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F782_5442(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("lower_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("upper_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 + ti4_1) - ((EIF_INTEGER_32) 1L)))) {
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

/* {ARRAY}.to_c */
EIF_REFERENCE F782_5479 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("to_c", 781, Current, 0, 0, 7300);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_dotnet", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F263_3306(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_REFERENCE *)(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.to_cil */
EIF_REFERENCE F782_5480 (EIF_REFERENCE Current)
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
	
	RTEAA("to_cil", 781, Current, 0, 0, 7301);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_dotnet", EX_PRE);
		RTTE((nstcall = 0, F263_3306(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F903_6144(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_cil_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {ARRAY}.to_special */
EIF_REFERENCE F782_5481 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("to_special", 781, Current, 0, 0, 7302);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("to_special_not_void", EX_POST);
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

/* {ARRAY}.linear_representation */
EIF_REFERENCE F782_5482 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("linear_representation", 781, Current, 2, 0, 7303);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFF01,870,0,0,0xFFFF};
		EIF_TYPE typres0;
		{
			EIF_TYPE l_type;
			l_type = eif_final_id(Y4237,Y4237_gen_type,Dftype(Current),350);
			typarr0[2] = l_type.annotations | 0xFF00;
			typarr0[3] = l_type.id;
		}
		
		typres0 = eif_compound_id(Dftype(Current), typarr0);
		loc1 = RTLNS(typres0.id, 870, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = (nstcall = 0, F782_5443(Current));
	(nstcall = -1, F871_5785(RTCW(loc1), ti4_1));
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_))) break;
		RTHOOK(4);
		tc1 = (nstcall = 0, F782_5435(Current, loc2));
		(nstcall = 1, F871_5826(RTCW(loc1), tc1));
		RTHOOK(5);
		loc2++;
	}
	RTHOOK(6);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}.copy */
void F782_5483 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("copy", 781, Current, 0, 1, 7304);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		(nstcall = 0, F1_16(Current, arg1));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, F286_3786(Current, tr2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("equal_areas", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		if (RTEQ(tr1, tr2)) {
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
}

/* {ARRAY}.subarray */
EIF_REFERENCE F782_5484 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("subarray", 781, Current, 0, 2, 7305);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start_pos", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) <= arg1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end_pos", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_bounds", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 <= arg2) || (EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg1 <= arg2)) {
		RTHOOK(5);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,781,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y4237,Y4237_gen_type,dftype,350);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 781, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		tc1 = (nstcall = 0, F782_5435(Current, arg1));
		(nstcall = -1, F782_5430(RTCW(Result), tc1, arg1, arg2));
		RTHOOK(6);
		(nstcall = 1, F782_5459(RTCW(Result), Current, arg1, arg2, arg1));
	} else {
		RTHOOK(7);
		{
			EIF_TYPE_INDEX typarr0[] = {0xFF01,781,0,0,0xFFFF};
			EIF_TYPE typres0;
			{
				EIF_TYPE l_type;
				l_type = eif_final_id(Y4237,Y4237_gen_type,dftype,350);
				typarr0[2] = l_type.annotations | 0xFF00;
				typarr0[3] = l_type.id;
			}
			
			typres0 = eif_compound_id(dftype, typarr0);
			Result = RTLNS(typres0.id, 781, _OBJSIZ_1_1_0_2_0_0_0_0_);
		}
		(nstcall = -1, F782_5429(RTCW(Result)));
		RTHOOK(8);
		(nstcall = 1, F782_5478(RTCW(Result), arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("lower", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("upper", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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

/* {ARRAY}.prune */
void F782_5485 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("prune", 781, Current, 0, 1, 7306);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("prunable", EX_PRE);
		RTTE((nstcall = 0, F782_5452(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {ARRAY}.extend */
void F782_5486 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("extend", 781, Current, 0, 1, 7307);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F782_5451(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_inserted", EX_POST);
		if ((nstcall = 0, F550_4911(Current, arg1))) {
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

/* {ARRAY}.empty_area */
EIF_BOOLEAN F782_5487 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("empty_area", 781, Current, 0, 0, 7308);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F903_6150(tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ARRAY}._invariant */
void F782_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 626, Current, 0, 0);
	RTIT("area_exists", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("consistent_size", Current);
	if ((EIF_BOOLEAN)((nstcall = 0, F782_5443(Current)) == (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_)) + ((EIF_INTEGER_32) 1L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("non_negative_count", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F782_5442(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit627 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
