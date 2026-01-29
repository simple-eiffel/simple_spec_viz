/*
 * Code for class INET6_ADDRESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in201.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F227_2688
static EIF_NATURAL_8 inline_F227_2688 (EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	return (EIF_NATURAL_8) (((unsigned char*)arg1)[arg2])
	;
}
#define INLINE_F227_2688
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET6_ADDRESS}.make_from_host_and_address */
void F227_2662 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("make_from_host_and_address", 226, Current, 0, 2, 2656);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_address_count_valid", EX_PRE);
		ti4_1 = (nstcall = 1, F792_5442(RTCW(arg2)));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.make_from_host_and_address_and_interface_name */
void F227_2663 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg3);
	RTLR(3,arg1);
	RTLIU(4);
	
	RTEAA("make_from_host_and_address_and_interface_name", 226, Current, 0, 3, 2657);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_address_count_valid", EX_PRE);
		ti4_1 = (nstcall = 1, F792_5442(RTCW(arg2)));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg3);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg3;
	RTHOOK(3);
	(nstcall = 0, F227_2664(Current, arg1, arg2, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.make_from_host_and_address_and_scope */
void F227_2664 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_from_host_and_address_and_scope", 226, Current, 0, 3, 2658);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_address_count_valid", EX_PRE);
		ti4_1 = (nstcall = 1, F792_5442(RTCW(arg2)));
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F227_2662(Current, arg1, arg2));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) = (EIF_INTEGER_32) arg3;
		RTHOOK(5);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.make_from_host_and_pointer */
void F227_2665 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("make_from_host_and_pointer", 226, Current, 4, 2, 2659);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,791,1020,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		loc2 = RTLNS(typres0.id, 791, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F792_5430(RTCW(loc2), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 16L)));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg2 != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F227_2686(Current, arg2));
		RTHOOK(4);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 16L))) break;
			RTHOOK(6);
			tu1_1 = (nstcall = 0, F227_2688(Current, loc1, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
			(nstcall = 1, F792_5454(RTCW(loc2), tu1_1, loc3));
			RTHOOK(7);
			loc3++;
		}
		RTHOOK(8);
		loc4 = (nstcall = 0, F227_2687(Current, arg2));
	}
	RTHOOK(9);
	(nstcall = 0, F227_2664(Current, arg1, loc2, loc4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.host_address */
EIF_REFERENCE F227_2666 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("host_address", 226, Current, 1, 0, 2660);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F227_2684(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '%'));
		RTHOOK(5);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, loc1));
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) > ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '%'));
			RTHOOK(8);
			(nstcall = 1, F1081_7847(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_)));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_multicast_address */
EIF_BOOLEAN F227_2667 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_multicast_address", 226, Current, 0, 0, 2661);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_any_local_address */
EIF_BOOLEAN F227_2668 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_any_local_address", 226, Current, 2, 0, 2662);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 16L))) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), loc2));
		tu1_2 = eif_bit_or(loc1,tu1_1);
		loc1 = (EIF_NATURAL_8) tu1_2;
		RTHOOK(5);
		loc2++;
	}
	RTHOOK(6);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_loopback_address */
EIF_BOOLEAN F227_2669 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_loopback_address", 226, Current, 2, 0, 2663);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 15L))) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), loc2));
		tu1_2 = eif_bit_or(loc1,tu1_1);
		loc1 = (EIF_NATURAL_8) tu1_2;
		RTHOOK(5);
		loc2++;
	}
	RTHOOK(6);
	Result = '\0';
	if ((EIF_BOOLEAN)(loc1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 16L)));
		Result = (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_link_local_address */
EIF_BOOLEAN F227_2670 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_link_local_address", 226, Current, 0, 0, 2664);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 254L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_site_local_address */
EIF_BOOLEAN F227_2671 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_site_local_address", 226, Current, 0, 0, 2665);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 254L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_global */
EIF_BOOLEAN F227_2672 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_global", 226, Current, 0, 0, 2666);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 14L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_node_local */
EIF_BOOLEAN F227_2673 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_node_local", 226, Current, 0, 0, 2667);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_link_local */
EIF_BOOLEAN F227_2674 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_link_local", 226, Current, 0, 0, 2668);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 2L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_site_local */
EIF_BOOLEAN F227_2675 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_site_local", 226, Current, 0, 0, 2669);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 5L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_mc_org_local */
EIF_BOOLEAN F227_2676 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_mc_org_local", 226, Current, 0, 0, 2670);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
		tu1_2 = eif_bit_and(tu1_1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 15L));
		Result = (EIF_BOOLEAN)(tu1_2 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 8L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.raw_address */
EIF_REFERENCE F227_2677 (EIF_REFERENCE Current)
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
	
	RTEAA("raw_address", 226, Current, 0, 0, 2671);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F1_14(tr1));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.sockaddr */
EIF_REFERENCE F227_2678 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("sockaddr", 226, Current, 1, 1, 2672);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (nstcall = 0, F226_2660(Current));
	(nstcall = -1, F303_3908(RTCW(Result), ti4_1));
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3909(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
	(nstcall = 0, F227_2685(Current, tp1, tp2, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.the_address */
EIF_REFERENCE F227_2679 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {INET6_ADDRESS}.the_scope_id */
EIF_INTEGER_32 F227_2680 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
}


/* {INET6_ADDRESS}.the_scope_ifname */
EIF_REFERENCE F227_2681 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {INET6_ADDRESS}.is_scope_ifname_set */
EIF_BOOLEAN F227_2682 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_scope_ifname_set", 226, Current, 0, 0, 2676);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.is_scope_id_set */
EIF_BOOLEAN F227_2683 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_);
}


/* {INET6_ADDRESS}.numeric_to_text */
EIF_REFERENCE F227_2684 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("numeric_to_text", 226, Current, 2, 1, 2678);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("addr /= Void and then addr.count = inaddrsz", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			ti4_1 = (nstcall = 1, F792_5442(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1076_7601(RTCW(Result)));
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 16L))) break;
		RTHOOK(5);
		tu1_1 = (nstcall = 1, F792_5435(RTCW(arg1), loc1));
		tu2_1 = (EIF_NATURAL_16) tu1_1;
		tu2_2 = eif_bit_shift_left(tu2_1,((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_and(tu2_2,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
		tu1_1 = (nstcall = 1, F792_5435(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
		tu2_2 = (EIF_NATURAL_16) tu1_1;
		tu2_3 = eif_bit_and(tu2_2,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu2_2 = eif_bit_or(tu2_1,tu2_3);
		tu2_1 = (EIF_NATURAL_16) tu2_2;
		loc2 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_1_0_0_0_0_0_);
		*(EIF_NATURAL_16 *)tr1 = loc2;
		tr2 = (nstcall = 1, F1016_7135(RTCW(tr1)));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6217[Dtype(RTCW(Result))-1080])(Result, tr2));
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 < (EIF_INTEGER_32) (((EIF_INTEGER_32) 16L) - ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(8);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) ':'));
		}
		RTHOOK(9);
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.fill_ipv6 */
void F227_2685 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fill_ipv6", 226, Current, 0, 4, 2679);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);en_socket_address_fill_ipv6(arg1, arg2, arg3, arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {INET6_ADDRESS}.c_sockaddr_get_ipv6_address */
EIF_POINTER F227_2686 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sockaddr_get_ipv6_address", 226, Current, 0, 1, 2680);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) en_sockaddr_get_ipv6_address(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.c_sockaddr_get_ipv6_address_scope */
EIF_INTEGER_32 F227_2687 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sockaddr_get_ipv6_address_scope", 226, Current, 0, 1, 2681);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_sockaddr_get_ipv6_address_scope(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {INET6_ADDRESS}.c_get_addr_element */
EIF_NATURAL_8 F227_2688 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_get_addr_element", 226, Current, 0, 2, 2682);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F227_2688 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit201 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
