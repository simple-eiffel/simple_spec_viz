/*
 * Code for class NETWORK_STREAM_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ne261.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NETWORK_STREAM_SOCKET}.make_empty */
void F311_4318 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_empty", 310, Current, 0, 0, 4378);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(nstcall = 0, F239_2843(Current));
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F239_2868(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_3_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F239_2866(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_5_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(1000000000)) * tu8_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("timeout_set_to_default", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_);
		tu8_1 = (EIF_NATURAL_64) ti4_1;
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) == (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(1000000000)) * tu8_1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("no_socket_created", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_)) {
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

/* {NETWORK_STREAM_SOCKET}.make */
void F311_4319 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 310, Current, 0, 0, 4379);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F311_4318(Current));
	RTHOOK(2);
	(nstcall = 0, F310_4301(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("timeout_set_to_default", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_);
		tu8_1 = (EIF_NATURAL_64) ti4_1;
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) == (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(1000000000)) * tu8_1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("socket_created", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_)) {
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

/* {NETWORK_STREAM_SOCKET}.make_client_by_port */
void F311_4320 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("make_client_by_port", 310, Current, 1, 2, 4380);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_peer_host", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg2))-1079])(arg2));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTCT0("attached create_from_name (a_peer_host) as l_peer_address", EX_CHECK);
	tr1 = (nstcall = 0, F240_2880(Current, arg2));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	(nstcall = 0, F311_4324(Current, loc1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_server_by_address_and_port */
void F311_4321 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("make_server_by_address_and_port", 310, Current, 0, 2, 4381);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F311_4319(Current));
	RTHOOK(3);
	tr1 = RTLNSMART(eif_final_id(Y3791,Y3791_gen_type,Dftype(Current),307).id);
	(nstcall = -1, F241_2898(RTCW(tr1), arg1, arg2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	(nstcall = 0, F310_4270(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_server_by_port */
void F311_4322 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make_server_by_port", 310, Current, 0, 1, 4382);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F240_2877(Current));
	(nstcall = 0, F311_4321(Current, tr1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_loopback_server_by_port */
void F311_4323 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make_loopback_server_by_port", 310, Current, 0, 1, 4383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F240_2878(Current));
	(nstcall = 0, F311_4321(Current, tr1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_client_by_address_and_port */
void F311_4324 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_client_by_address_and_port", 310, Current, 0, 2, 4384);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_peer_address", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_port", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F311_4319(Current));
	RTHOOK(4);
	tr1 = RTLNSMART(eif_final_id(Y3791,Y3791_gen_type,dftype,307).id);
	(nstcall = -1, F241_2901(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNSMART(eif_final_id(Y3792,Y3792_gen_type,dftype,307).id);
	(nstcall = -1, F241_2898(RTCW(tr1), arg1, arg2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.make_from_descriptor_and_address */
void F311_4325 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("make_from_descriptor_and_address", 310, Current, 3, 2, 4385);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg2 = (EIF_BOOLEAN) RTS_OU (arg2);
	uarg = uarg2;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg2);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_fd_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_address_positive", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = arg2;
	loc2 = RTRV(eif_final_id(Y3791,Y3791_gen_type,dftype,307),loc2);
	if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		loc1 = (EIF_REFERENCE) loc2;
	} else {
		RTHOOK(5);
		loc1 = RTLNSMART(eif_final_id(Y3791,Y3791_gen_type,dftype,307).id);
		(nstcall = -1, F102_1425(RTCW(loc1), arg2));
	}
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) arg1;
	RTHOOK(7);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	RTHOOK(8);
	ti4_1 = (nstcall = 1, F102_1429(RTCW(loc1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_3_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(10);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(11);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(12);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(13);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(14);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_);
	tu8_1 = (EIF_NATURAL_64) ti4_1;
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) = (EIF_NATURAL_64) (EIF_NATURAL_64) (((EIF_NATURAL_64) RTU64C(1000000000)) * tu8_1);
	RTHOOK(15);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("address_set", EX_POST);
		if (RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_1_), arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("address_equal", EX_POST);
		loc3 = arg2;
		loc3 = RTRV(eif_final_id(Y3791,Y3791_gen_type,dftype,307),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		if ((!(EIF_TEST(loc3)) || ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg2)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("family_valid", EX_POST);
		if (RTS_CI (EIF_TRUE, arg2)) {
			RTS_BI (arg2);
			ti4_1 = (nstcall = 1, F102_1429(RTCW(arg2)));
			RTS_EI;
		} else {
			RTS_AC (0, arg2);
			RTS_CALL (F102_1429, eif_scr1, 0, &(ti4_1));
		}
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_3_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("opened_all", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.create_from_descriptor */
void F311_4326 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("create_from_descriptor", 310, Current, 1, 1, 4386);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_fd_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNSMART(eif_final_id(Y3791,Y3791_gen_type,Dftype(Current),307).id);
	(nstcall = -1, F241_2901(RTCW(loc1), ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
	(nstcall = 0, F311_4356(Current, arg1, tp1, ti4_1));
	RTHOOK(4);
	(nstcall = 0, F311_4325(Current, arg1, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.connect_timeout */
EIF_INTEGER_32 F311_4327 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_11_);
}


/* {NETWORK_STREAM_SOCKET}.set_connect_timeout */
void F311_4328 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_connect_timeout", 310, Current, 0, 1, 4388);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_11_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.accept_timeout */
EIF_INTEGER_32 F311_4329 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_12_);
}


/* {NETWORK_STREAM_SOCKET}.set_accept_timeout */
void F311_4330 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_accept_timeout", 310, Current, 0, 1, 4390);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_12_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.listen */
void F311_4331 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("listen", 310, Current, 3, 1, 4349);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("address_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTCT0("address_attached", EX_CHECK);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
	RTHOOK(5);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(loc3);
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F311_4354(Current, (EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2), tp1, arg1));
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) loc1;
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) = (EIF_INTEGER_32) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.accept_to */
void F311_4332 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("accept_to", 310, Current, 1, 1, 4350);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if (uarg || (RTAL & CK_REQUIRE) || RTAC) {
		for (;;) {
			int has_wait_condition = 0;
			RTHOOK(1);
			RTCT("not_created", EX_PRE);
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_7_6_);
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (NULL, eif_sca4, 0+ _CHROFF_7_6_, &(tb1));
			}
			has_wait_condition = uarg1;
			RTTE((EIF_BOOLEAN) !tb1, label_1);
			RTCK;
			has_wait_condition = 0;
			RTJB;
label_1:
			if (!has_wait_condition) break;
			RTCK;
			RTS_RF;
		}
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		(nstcall = 0, F311_4350(Current, arg1, loc1));
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.accept */
void F311_4333 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("accept", 310, Current, 3, 0, 4351);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("address_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
		RTHOOK(5);
		loc1 = RTLNSMART(eif_final_id(Y3858,Y3858_gen_type,dftype,308).id);
		(nstcall = -1, F311_4318(RTCW(loc1)));
		RTHOOK(6);
		tr1 = (nstcall = 1, F1_14(loc2));
		(nstcall = 0, F311_4350(Current, loc1, tr1));
		RTHOOK(7);
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_7_6_);
		if (tb1) {
			RTHOOK(8);
			RTAR(Current, loc1);
			*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
		}
	} else {
		
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("same_blocking_status", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb2 = *(EIF_BOOLEAN *)(loc3+ _CHROFF_7_2_);
			tb1 = (EIF_BOOLEAN)(tb2 == *(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_));
		}
		if (tb1) {
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

/* {NETWORK_STREAM_SOCKET}.maximum_seg_size */
EIF_INTEGER_32 F311_4334 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maximum_seg_size", 310, Current, 0, 0, 4352);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2813(Current));
	ti4_3 = (nstcall = 0, F239_2816(Current));
	Result = (nstcall = 0, F308_4252(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.maxium_seg_size */
EIF_INTEGER_32 F311_4335 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maxium_seg_size", 310, Current, 0, 0, 4353);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2813(Current));
	ti4_3 = (nstcall = 0, F239_2816(Current));
	Result = (nstcall = 0, F308_4252(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.has_delay */
EIF_BOOLEAN F311_4336 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("has_delay", 310, Current, 1, 0, 4354);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2813(Current));
	ti4_3 = (nstcall = 0, F239_2817(Current));
	loc1 = (nstcall = 0, F308_4252(Current, ti4_1, ti4_2, ti4_3));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.is_linger_on */
EIF_BOOLEAN F311_4337 (EIF_REFERENCE Current)
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
	
	RTEAA("is_linger_on", 310, Current, 0, 0, 4355);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	Result = (nstcall = 0, F311_4358(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.is_out_of_band_inline */
EIF_BOOLEAN F311_4338 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_out_of_band_inline", 310, Current, 1, 0, 4356);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2809(Current));
	ti4_3 = (nstcall = 0, F239_2832(Current));
	loc1 = (nstcall = 0, F308_4252(Current, ti4_1, ti4_2, ti4_3));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.linger_time */
EIF_INTEGER_32 F311_4339 (EIF_REFERENCE Current)
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
	
	RTEAA("linger_time", 310, Current, 0, 0, 4357);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	Result = (nstcall = 0, F311_4359(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.set_delay */
void F311_4340 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_delay", 310, Current, 0, 0, 4358);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2813(Current));
	ti4_3 = (nstcall = 0, F239_2817(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_nodelay */
void F311_4341 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_nodelay", 310, Current, 0, 0, 4359);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2813(Current));
	ti4_3 = (nstcall = 0, F239_2817(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_linger */
void F311_4342 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_linger", 310, Current, 1, 2, 4360);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	loc1 = (nstcall = 0, F311_4357(Current, ti4_1, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_linger_on */
void F311_4343 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_linger_on", 310, Current, 1, 1, 4361);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	loc1 = (nstcall = 0, F311_4357(Current, ti4_1, (EIF_BOOLEAN) 1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_linger_off */
void F311_4344 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_linger_off", 310, Current, 1, 0, 4362);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	loc1 = (nstcall = 0, F311_4357(Current, ti4_1, (EIF_BOOLEAN) 1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_out_of_band_inline */
void F311_4345 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_out_of_band_inline", 310, Current, 0, 0, 4363);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2809(Current));
	ti4_3 = (nstcall = 0, F239_2832(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.set_out_of_band_not_inline */
void F311_4346 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_out_of_band_not_inline", 310, Current, 0, 0, 4364);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2809(Current));
	ti4_3 = (nstcall = 0, F239_2832(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.do_connect */
void F311_4347 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("do_connect", 310, Current, 3, 1, 4365);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_peer_address_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
		RTHOOK(4);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
		RTHOOK(5);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_11_);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_);
		(nstcall = 0, F311_4352(Current, (EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2), (EIF_INTEGER_32 *) &(loc3), tp1, ti4_1, tb1));
		RTHOOK(7);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) loc1;
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) = (EIF_INTEGER_32) loc2;
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_) = (EIF_INTEGER_32) loc3;
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.do_bind */
void F311_4348 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("do_bind", 310, Current, 3, 1, 4366);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_address_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
		RTHOOK(4);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
		RTHOOK(5);
		loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_);
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
		(nstcall = 0, F311_4353(Current, (EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2), (EIF_INTEGER_32 *) &(loc3), tp1));
		RTHOOK(7);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) loc1;
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) = (EIF_INTEGER_32) loc2;
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_) = (EIF_INTEGER_32) loc3;
	} else {
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.do_create */
void F311_4349 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("do_create", 310, Current, 2, 0, 4367);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
	RTHOOK(2);
	loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
	RTHOOK(3);
	(nstcall = 0, F311_4351(Current, (EIF_INTEGER_32 *) &(loc1), (EIF_INTEGER_32 *) &(loc2)));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) = (EIF_INTEGER_32) loc1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) = (EIF_INTEGER_32) loc2;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.do_accept */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F311_4350 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SDX;
	RTS_SDC;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_3;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,saved_except);
	RTLIU(6);
	RTXSLS;
	
	RTEAA("do_accept", 310, Current, 4, 2, 4368);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RCX;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if (uarg || (RTAL & CK_REQUIRE) || RTAC) {
		for (;;) {
			int has_wait_condition = 0;
			RTHOOK(1);
			RTCT("not_created", EX_PRE);
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_7_6_);
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (NULL, eif_sca4, 0+ _CHROFF_7_6_, &(tb1));
			}
			has_wait_condition = uarg1;
			RTTE((EIF_BOOLEAN) !tb1, label_1);
			RTCK;
			has_wait_condition = 0;
			RTJB;
label_1:
			if (!has_wait_condition) break;
			RTCK;
			RTS_RF;
		}
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(2);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1_14(arg2));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_8_);
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
		tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
		ti4_3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_12_);
		loc3 = (nstcall = 0, F311_4355(Current, ti4_1, ti4_2, (EIF_INTEGER_32 *) &(loc4), tp1, ti4_3));
		RTHOOK(6);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_8_) = (EIF_INTEGER_32) loc4;
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			if (RTS_CI (EIF_FALSE, arg1)) {
				RTS_BI (arg1);
				(nstcall = 1, F311_4325(RTCW(arg1), loc3, arg2));
				RTS_EI;
			} else {
				RTS_AC (2, arg1);
				RTS_AA (arg2, it_r, SK_REF, 2);
				RTS_AA (loc3, it_i4, SK_INT32, 1);
				RTS_CALL (F311_4325, eif_scr9, 0, NULL);
			}
			RTHOOK(9);
			if (RTS_CI (EIF_FALSE, arg1)) {
				RTS_BI (arg1);
				(nstcall = 1, F308_4143(RTCW(arg1), loc2));
				RTS_EI;
			} else {
				RTS_AC (1, arg1);
				RTS_AA (loc2, it_r, SK_REF, 1);
				RTS_CALL (F308_4143, eif_scr10, 0, NULL);
			}
			RTHOOK(10);
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_)) {
				RTHOOK(11);
				if (RTS_CI (EIF_FALSE, arg1)) {
					RTS_BI (arg1);
					(nstcall = 1, F310_4300(RTCW(arg1)));
					RTS_EI;
				} else {
					RTS_AC (0, arg1);
					RTS_CALL (F310_4300, eif_scr6, 0, NULL);
				}
			} else {
				RTHOOK(12);
				if (RTS_CI (EIF_FALSE, arg1)) {
					RTS_BI (arg1);
					(nstcall = 1, F310_4299(RTCW(arg1)));
					RTS_EI;
				} else {
					RTS_AC (0, arg1);
					RTS_CALL (F310_4299, eif_scr6, 0, NULL);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(13);
	if ((EIF_BOOLEAN) !(nstcall = 0, F222_2612(Current))) {
		RTHOOK(14);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(15);
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(16);
	if (uarg) {
		RTS_RD;
	}
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {NETWORK_STREAM_SOCKET}.c_create */
void F311_4351 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_create", 310, Current, 0, 2, 4369);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_stream_create(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_connect */
void F311_4352 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5, EIF_BOOLEAN arg6)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_connect", 310, Current, 0, 6, 4370);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_stream_connect(arg1, arg2, arg3, arg4, arg5, arg6);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_bind */
void F311_4353 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2, EIF_INTEGER_32* arg3, EIF_POINTER arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_bind", 310, Current, 0, 4, 4371);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_stream_bind(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_listen */
void F311_4354 (EIF_REFERENCE Current, EIF_INTEGER_32* arg1, EIF_INTEGER_32* arg2, EIF_POINTER arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_listen", 310, Current, 0, 4, 4372);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_stream_listen(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_accept */
EIF_INTEGER_32 F311_4355 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32* arg3, EIF_POINTER arg4, EIF_INTEGER_32 arg5)
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
	
	RTEAA("c_accept", 310, Current, 0, 5, 4373);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) en_socket_stream_accept(arg1, arg2, arg3, arg4, arg5);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.c_sock_name */
void F311_4356 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_sock_name", 310, Current, 0, 3, 4374);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);c_sock_name(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_STREAM_SOCKET}.c_set_sock_opt_linger */
EIF_INTEGER_32 F311_4357 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_set_sock_opt_linger", 310, Current, 0, 3, 4375);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_set_sock_opt_linger(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.c_is_linger_on */
EIF_BOOLEAN F311_4358 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("c_is_linger_on", 310, Current, 0, 1, 4376);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(c_is_linger_on(arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_STREAM_SOCKET}.c_linger_time */
EIF_INTEGER_32 F311_4359 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("c_linger_time", 310, Current, 0, 1, 4377);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_linger_time(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit261 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
