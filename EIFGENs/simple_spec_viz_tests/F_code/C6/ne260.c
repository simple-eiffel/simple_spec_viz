/*
 * Code for class NETWORK_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ne260.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NETWORK_SOCKET}.exists */
EIF_BOOLEAN F310_4266 (EIF_REFERENCE Current)
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
	
	RTEAA("exists", 309, Current, 0, 0, 4300);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((!(Result) || (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		if ((!(Result) || (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_)))) {
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

/* {NETWORK_SOCKET}.close_socket */
void F310_4267 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("close_socket", 309, Current, 0, 0, 4301);
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
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_) && *(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_))) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
		(nstcall = 0, F310_4314(Current, ti4_1, ti4_2));
	}
	RTHOOK(4);
	(nstcall = 0, F310_4302(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_closed", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_)) {
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

/* {NETWORK_SOCKET}.descriptor */
EIF_INTEGER_32 F310_4268 (EIF_REFERENCE Current)
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
	
	RTEAA("descriptor", 309, Current, 0, 0, 4302);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_handle", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.connect */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F310_4269 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	RTLIU(2);
	RTXSLS;
	
	RTEAA("connect", 309, Current, 1, 0, 4303);
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
		RTCT("valid_peer_address", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(4);
		(nstcall = 0, F311_4347(Current, *(EIF_REFERENCE *)(Current + _REFACS_2_)));
		RTHOOK(5);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(7);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(8);
	if ((EIF_BOOLEAN) !(nstcall = 0, F222_2612(Current))) {
		RTHOOK(9);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_7_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(10);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(11);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(12);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(13);
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(14);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {NETWORK_SOCKET}.bind */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F310_4270 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,saved_except);
	RTLIU(2);
	RTXSLS;
	
	RTEAA("bind", 309, Current, 1, 0, 4304);
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
		RTCT("valid_local_address", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(4);
		(nstcall = 0, F311_4348(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
		RTHOOK(5);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(7);
	if ((EIF_BOOLEAN) !(nstcall = 0, F222_2612(Current))) {
		RTHOOK(8);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_8_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(9);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(10);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(11);
		RTER;
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(12);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {NETWORK_SOCKET}.address_type */
EIF_REFERENCE F310_4271 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("address_type", 309, Current, 0, 0, 4305);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_callable", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0("False", EX_CHECK);
		RTCF0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("for_typing_only", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

/* {NETWORK_SOCKET}.is_closed */
EIF_BOOLEAN F310_4272 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_);
}


/* {NETWORK_SOCKET}.is_created */
EIF_BOOLEAN F310_4273 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_);
}


/* {NETWORK_SOCKET}.is_connected */
EIF_BOOLEAN F310_4274 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_7_7_);
}


/* {NETWORK_SOCKET}.is_bound */
EIF_BOOLEAN F310_4275 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_7_8_);
}


/* {NETWORK_SOCKET}.port */
EIF_INTEGER_32 F310_4276 (EIF_REFERENCE Current)
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
	
	RTEAA("port", 309, Current, 0, 0, 4310);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_8_)) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(3);
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.reuse_address */
EIF_BOOLEAN F310_4277 (EIF_REFERENCE Current)
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
	
	RTEAA("reuse_address", 309, Current, 1, 0, 4311);
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
	ti4_3 = (nstcall = 0, F239_2839(Current));
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

/* {NETWORK_SOCKET}.is_valid_peer_address */
EIF_BOOLEAN F310_4278 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("is_valid_peer_address", 309, Current, 0, 1, 4312);
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
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("address_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\01';
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		ti4_1 = (nstcall = 1, F102_1429(RTCW(arg1)));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (F102_1429, eif_scr1, 0, &(ti4_1));
	}
	if (!(EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F239_2868(Current)))) {
		if (RTS_CI (EIF_TRUE, arg1)) {
			RTS_BI (arg1);
			ti4_1 = (nstcall = 1, F102_1429(RTCW(arg1)));
			RTS_EI;
		} else {
			RTS_AC (0, arg1);
			RTS_CALL (F102_1429, eif_scr1, 0, &(ti4_1));
		}
		Result = (EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F239_2869(Current)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.is_valid_family */
EIF_BOOLEAN F310_4279 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_valid_family", 309, Current, 0, 1, 4313);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("address_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\01';
	ti4_1 = (nstcall = 1, F102_1429(RTCW(arg1)));
	if (!(EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F239_2868(Current)))) {
		ti4_1 = (nstcall = 1, F102_1429(RTCW(arg1)));
		Result = (EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F239_2869(Current)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.ready_for_reading */
EIF_BOOLEAN F310_4280 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("ready_for_reading", 309, Current, 1, 0, 4314);
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
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_);
	loc1 = (nstcall = 0, F310_4315(Current, ti4_1, (EIF_BOOLEAN) 1, tu8_1));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.ready_for_writing */
EIF_BOOLEAN F310_4281 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("ready_for_writing", 309, Current, 1, 0, 4315);
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
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_);
	loc1 = (nstcall = 0, F310_4315(Current, ti4_1, (EIF_BOOLEAN) 0, tu8_1));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.has_exception_state */
EIF_BOOLEAN F310_4282 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("has_exception_state", 309, Current, 1, 0, 4316);
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
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_);
	loc1 = (nstcall = 0, F310_4316(Current, ti4_1, tu8_1));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.is_default_timeout */
EIF_BOOLEAN F310_4283 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_default_timeout", 309, Current, 0, 0, 4317);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu8_1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_);
	tu8_2 = (nstcall = 0, F107_1482(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu8_1 == tu8_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.timeout */
EIF_INTEGER_32 F310_4284 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("timeout", 309, Current, 1, 0, 4318);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_);
	RTHOOK(2);
	Result = (nstcall = 0, F107_1481(Current, loc1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc1 > (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(4);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("timeout_positive", EX_POST);
		if ((!((EIF_BOOLEAN)(*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) != (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))))) {
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

/* {NETWORK_SOCKET}.timeout_ns */
EIF_NATURAL_64 F310_4285 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_);
}


/* {NETWORK_SOCKET}.recv_timeout */
EIF_INTEGER_32 F310_4286 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("recv_timeout", 309, Current, 0, 0, 4320);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu8_1 = (nstcall = 0, F310_4287(Current));
	Result = (nstcall = 0, F107_1481(Current, tu8_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {NETWORK_SOCKET}.recv_timeout_ns */
EIF_NATURAL_64 F310_4287 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("recv_timeout_ns", 309, Current, 0, 0, 4321);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2809(Current));
	ti4_3 = (nstcall = 0, F239_2837(Current));
	Result = (nstcall = 0, F310_4313(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.send_timeout */
EIF_INTEGER_32 F310_4288 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("send_timeout", 309, Current, 0, 0, 4322);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu8_1 = (nstcall = 0, F310_4289(Current));
	Result = (nstcall = 0, F107_1481(Current, tu8_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {NETWORK_SOCKET}.send_timeout_ns */
EIF_NATURAL_64 F310_4289 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("send_timeout_ns", 309, Current, 0, 0, 4323);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2809(Current));
	ti4_3 = (nstcall = 0, F239_2838(Current));
	Result = (nstcall = 0, F310_4313(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.set_reuse_address */
void F310_4290 (EIF_REFERENCE Current)
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
	
	RTEAA("set_reuse_address", 309, Current, 0, 0, 4324);
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
	ti4_3 = (nstcall = 0, F239_2839(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.do_not_reuse_address */
void F310_4291 (EIF_REFERENCE Current)
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
	
	RTEAA("do_not_reuse_address", 309, Current, 0, 0, 4325);
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
	ti4_3 = (nstcall = 0, F239_2839(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.set_default_timeout */
void F310_4292 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_default_timeout", 309, Current, 0, 0, 4326);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu8_1 = (nstcall = 0, F107_1482(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_)));
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) = (EIF_NATURAL_64) tu8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("timeout_set_to_default", EX_POST);
		if ((nstcall = 0, F310_4283(Current))) {
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

/* {NETWORK_SOCKET}.set_timeout */
void F310_4293 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_timeout", 309, Current, 0, 1, 4327);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu8_1 = (nstcall = 0, F107_1482(Current, arg1));
	(nstcall = 0, F310_4294(Current, tu8_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("timeout_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F310_4284(Current)) == arg1)) {
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

/* {NETWORK_SOCKET}.set_timeout_ns */
void F310_4294 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_timeout_ns", 309, Current, 0, 1, 4328);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		RTTE((nstcall = 0, F107_1483(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_1_) = (EIF_NATURAL_64) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.set_recv_timeout */
void F310_4295 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_recv_timeout", 309, Current, 0, 1, 4329);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_timeout", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu8_1 = (nstcall = 0, F107_1482(Current, arg1));
	(nstcall = 0, F310_4296(Current, tu8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.set_recv_timeout_ns */
void F310_4296 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
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
	
	RTEAA("set_recv_timeout_ns", 309, Current, 0, 1, 4330);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		RTTE((nstcall = 0, F107_1483(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2809(Current));
	ti4_3 = (nstcall = 0, F239_2837(Current));
	(nstcall = 0, F310_4312(Current, ti4_1, ti4_2, ti4_3, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.set_send_timeout */
void F310_4297 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_send_timeout", 309, Current, 0, 1, 4331);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_timeout", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu8_1 = (nstcall = 0, F107_1482(Current, arg1));
	(nstcall = 0, F310_4298(Current, tu8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.set_send_timeout_ns */
void F310_4298 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
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
	
	RTEAA("set_send_timeout_ns", 309, Current, 0, 1, 4332);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		RTTE((nstcall = 0, F107_1483(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2809(Current));
	ti4_3 = (nstcall = 0, F239_2838(Current));
	(nstcall = 0, F310_4312(Current, ti4_1, ti4_2, ti4_3, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.set_non_blocking */
void F310_4299 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_non_blocking", 309, Current, 0, 0, 4333);
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
	(nstcall = 0, F308_4254(Current, ti4_1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
		(nstcall = 0, F308_4254(Current, ti4_1));
	}
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("not is_blocking", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_)) {
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

/* {NETWORK_SOCKET}.set_blocking */
void F310_4300 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_blocking", 309, Current, 0, 0, 4334);
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
	(nstcall = 0, F308_4255(Current, ti4_1));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
		(nstcall = 0, F308_4255(Current, ti4_1));
	}
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_blocking", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_)) {
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

/* {NETWORK_SOCKET}.make_socket */
void F310_4301 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_socket", 309, Current, 0, 0, 4335);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_family", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_3_) >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_5_) >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_protocol", EX_PRE);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_4_) >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F311_4349(Current));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_) > ((EIF_INTEGER_32) -1L))) {
		RTHOOK(6);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(7);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		(nstcall = 0, F310_4300(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.set_closed */
void F310_4302 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_closed", 309, Current, 0, 0, 4336);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.shutdown */
void F310_4303 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("shutdown", 309, Current, 0, 0, 4337);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
	(nstcall = 0, F310_4317(Current, ti4_1, ti4_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.fd */
EIF_INTEGER_32 F310_4304 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_6_);
}


/* {NETWORK_SOCKET}.fd1 */
EIF_INTEGER_32 F310_4305 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_7_);
}


/* {NETWORK_SOCKET}.last_fd */
EIF_INTEGER_32 F310_4306 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_8_);
}


/* {NETWORK_SOCKET}.internal_port */
EIF_INTEGER_32 F310_4307 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_9_);
}


/* {NETWORK_SOCKET}.default_timeout */
EIF_INTEGER_32 F310_4311 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_10_);
}


/* {NETWORK_SOCKET}.c_set_sock_opt_timeout */
void F310_4312 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_sock_opt_timeout", 309, Current, 0, 4, 4343);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		RTTE((nstcall = 0, F107_1483(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;c_set_sock_opt_timeout(arg1, arg2, arg3, arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.c_get_sock_opt_timeout */
EIF_NATURAL_64 F310_4313 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_get_sock_opt_timeout", 309, Current, 0, 3, 4344);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_NATURAL_64) c_get_sock_opt_timeout(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.c_close */
void F310_4314 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_close", 309, Current, 0, 2, 4345);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);en_socket_close(arg1, arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}.c_select_poll_with_timeout */
EIF_INTEGER_32 F310_4315 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_NATURAL_64 arg3)
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
	
	RTEAA("c_select_poll_with_timeout", 309, Current, 0, 3, 4346);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		RTTE((nstcall = 0, F107_1483(Current, arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_select_poll_with_timeout(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.c_check_exception_with_timeout */
EIF_INTEGER_32 F310_4316 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_64 arg2)
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
	
	RTEAA("c_check_exception_with_timeout", 309, Current, 0, 2, 4347);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		RTTE((nstcall = 0, F107_1483(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_check_exception_with_timeout(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NETWORK_SOCKET}.c_shutdown */
void F310_4317 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_shutdown", 309, Current, 0, 2, 4348);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_shutdown(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {NETWORK_SOCKET}._invariant */
void F310_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 259, Current, 0, 0);
	RTIT("correct_exist", Current);
	tb1 = '\01';
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_6_)) {
		tb2 = '\0';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_)) {
			tb2 = (EIF_BOOLEAN) !(nstcall = 0, F310_4266(Current));
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit260 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
