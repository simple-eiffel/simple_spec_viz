/*
 * Code for class INET4_ADDRESS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in202.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET4_ADDRESS}.make_from_host_and_address */
void F228_2690 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("make_from_host_and_address", 227, Current, 0, 2, 2696);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_address_count_valid", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			ti4_1 = (nstcall = 1, F783_5442(RTCW(arg2)));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
		}
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
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		ti4_1 = (nstcall = 1, F783_5442(RTCW(arg2)));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
	}
	if (tb1) {
		RTHOOK(5);
		tu1_1 = (nstcall = 1, F783_5435(RTCW(arg2), ((EIF_INTEGER_32) 4L)));
		ti4_1 = (EIF_INTEGER_32) tu1_1;
		ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_2;
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tu1_1 = (nstcall = 1, F783_5435(RTCW(arg2), ((EIF_INTEGER_32) 3L)));
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ti4_3 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 8L));
		ti4_2 = eif_bit_and(ti4_3,((EIF_INTEGER_32) 65280L));
		ti4_3 = eif_bit_or(ti4_1,ti4_2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_3;
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tu1_1 = (nstcall = 1, F783_5435(RTCW(arg2), ((EIF_INTEGER_32) 2L)));
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ti4_3 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 16L));
		ti4_2 = eif_bit_and(ti4_3,((EIF_INTEGER_32) 16711680L));
		ti4_3 = eif_bit_or(ti4_1,ti4_2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_3;
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		tu1_1 = (nstcall = 1, F783_5435(RTCW(arg2), ((EIF_INTEGER_32) 1L)));
		ti4_2 = (EIF_INTEGER_32) tu1_1;
		ti4_3 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 24L));
		ti4_2 = eif_bit_and(ti4_3,(EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4278190080)));
		ti4_3 = eif_bit_or(ti4_1,ti4_2);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {INET4_ADDRESS}.make_from_host_and_pointer */
void F228_2691 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("make_from_host_and_pointer", 227, Current, 0, 2, 2697);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg2 != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F228_2708(Current, arg2));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {INET4_ADDRESS}.host_address */
EIF_REFERENCE F228_2692 (EIF_REFERENCE Current)
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
	
	RTEAA("host_address", 227, Current, 0, 0, 2698);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F228_2703(Current));
	Result = (nstcall = 0, F228_2706(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_multicast_address */
EIF_BOOLEAN F228_2693 (EIF_REFERENCE Current)
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
	
	RTEAA("is_multicast_address", 227, Current, 0, 0, 2699);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_and(ti4_1,(EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4026531840)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(3758096384)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_any_local_address */
EIF_BOOLEAN F228_2694 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_any_local_address", 227, Current, 0, 0, 2700);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_loopback_address */
EIF_BOOLEAN F228_2695 (EIF_REFERENCE Current)
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
	
	RTEAA("is_loopback_address", 227, Current, 0, 0, 2701);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 127L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_link_local_address */
EIF_BOOLEAN F228_2696 (EIF_REFERENCE Current)
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
	
	RTEAA("is_link_local_address", 227, Current, 0, 0, 2702);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 169L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		Result = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 254L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_site_local_address */
EIF_BOOLEAN F228_2697 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_site_local_address", 227, Current, 0, 0, 2683);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 10L))) {
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 172L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
			ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
			ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 240L));
			tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 16L));
		}
		tb1 = tb2;
	}
	if (!tb1) {
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 192L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
			ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
			ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 168L));
		}
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_mc_global */
EIF_BOOLEAN F228_2698 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_mc_global", 227, Current, 3, 0, 2684);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 224L)) && (EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 238L))) && (EIF_BOOLEAN) !(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 224L)) && (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_mc_node_local */
EIF_BOOLEAN F228_2699 (EIF_REFERENCE Current)
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
	
	RTEAA("is_mc_node_local", 227, Current, 0, 0, 2685);
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

/* {INET4_ADDRESS}.is_mc_link_local */
EIF_BOOLEAN F228_2700 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_mc_link_local", 227, Current, 0, 0, 2686);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 224L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 8L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		Result = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_mc_site_local */
EIF_BOOLEAN F228_2701 (EIF_REFERENCE Current)
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
	
	RTEAA("is_mc_site_local", 227, Current, 0, 0, 2687);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 239L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		Result = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.is_mc_org_local */
EIF_BOOLEAN F228_2702 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_mc_org_local", 227, Current, 0, 0, 2688);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 239L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		tb1 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 192L));
	}
	if (tb1) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
		ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
		ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
		Result = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 195L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.raw_address */
EIF_REFERENCE F228_2703 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("raw_address", 227, Current, 0, 0, 2689);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,782,1020,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 782, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F783_5430(RTCW(Result), ((EIF_NATURAL_8) 0U), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 24L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	(nstcall = 1, F783_5454(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 16L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	(nstcall = 1, F783_5454(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 2L)));
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_shift_right(ti4_1,((EIF_INTEGER_32) 8L));
	ti4_1 = eif_bit_and(ti4_2,((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	(nstcall = 1, F783_5454(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 3L)));
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	tu1_1 = (EIF_NATURAL_8) ti4_2;
	(nstcall = 1, F783_5454(RTCW(Result), tu1_1, ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.sockaddr */
EIF_REFERENCE F228_2704 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("sockaddr", 227, Current, 0, 1, 2690);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (nstcall = 0, F226_2660(Current));
	(nstcall = -1, F303_3908(RTCW(Result), ti4_1));
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
	(nstcall = 0, F228_2707(Current, tp1, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.the_address */
EIF_INTEGER_32 F228_2705 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_1_);
}


/* {INET4_ADDRESS}.numeric_to_text */
EIF_REFERENCE F228_2706 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("numeric_to_text", 227, Current, 0, 1, 2692);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("addr /= Void and then addr.count = inaddrsz", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			ti4_1 = (nstcall = 1, F783_5442(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
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
	tu1_1 = (nstcall = 1, F783_5435(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	(nstcall = 1, F1081_7847(RTCW(Result), ti4_1));
	RTHOOK(4);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '.'));
	RTHOOK(5);
	tu1_1 = (nstcall = 1, F783_5435(RTCW(arg1), ((EIF_INTEGER_32) 2L)));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	(nstcall = 1, F1081_7847(RTCW(Result), ti4_1));
	RTHOOK(6);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '.'));
	RTHOOK(7);
	tu1_1 = (nstcall = 1, F783_5435(RTCW(arg1), ((EIF_INTEGER_32) 3L)));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	(nstcall = 1, F1081_7847(RTCW(Result), ti4_1));
	RTHOOK(8);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '.'));
	RTHOOK(9);
	tu1_1 = (nstcall = 1, F783_5435(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
	ti4_1 = (EIF_INTEGER_32) tu1_1;
	(nstcall = 1, F1081_7847(RTCW(Result), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {INET4_ADDRESS}.fill_ipv4 */
void F228_2707 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fill_ipv4", 227, Current, 0, 3, 2693);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);en_socket_address_fill_ipv4(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {INET4_ADDRESS}.c_sockaddr_get_ipv4_address */
EIF_INTEGER_32 F228_2708 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_sockaddr_get_ipv4_address", 227, Current, 0, 1, 2694);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_sockaddr_get_ipv4_address(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit202 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
