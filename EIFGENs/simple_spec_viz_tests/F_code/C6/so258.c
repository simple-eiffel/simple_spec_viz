/*
 * Code for class SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "so258.h"
#include <string.h>
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SOCKET}.retrieved */
EIF_REFERENCE F308_4119 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("retrieved", 307, Current, 1, 0, 4160);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("support_storable", EX_PRE);
		RTTE((nstcall = 0, F309_4262(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(863, 0x01).id, 863, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(12,(nstcall = 1, F864_5720), (RTCW(tr1)));
	(nstcall = 1, F1_31(RTCW(tr2)));
	RTHOOK(4);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_)) {
		RTHOOK(5);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		(nstcall = 0, F310_4300(Current));
	}
	RTHOOK(7);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	Result = (nstcall = 0, F308_4258(Current, ti4_1));
	RTHOOK(8);
	if (loc1) {
		RTHOOK(9);
		(nstcall = 0, F310_4299(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.was_error */
EIF_BOOLEAN F308_4120 (EIF_REFERENCE Current)
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
	
	RTEAA("was_error", 307, Current, 0, 0, 4161);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.socket_ok */
EIF_BOOLEAN F308_4121 (EIF_REFERENCE Current)
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
	
	RTEAA("socket_ok", 307, Current, 0, 0, 4162);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((nstcall = 0, F239_2785(Current))) {
		Result = (EIF_BOOLEAN) !(nstcall = 0, F308_4120(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.error */
EIF_REFERENCE F308_4122 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("error", 307, Current, 1, 0, 4163);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		Result = (nstcall = 0, F239_2783(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.support_storable */
EIF_BOOLEAN F308_4123 (EIF_REFERENCE Current)
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
	
	RTEAA("support_storable", 307, Current, 0, 0, 4164);
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

/* {SOCKET}.is_valid_peer_address */
EIF_BOOLEAN F308_4124 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("is_valid_peer_address", 307, Current, 0, 1, 4165);
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
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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

/* {SOCKET}.is_valid_family */
EIF_BOOLEAN F308_4125 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_valid_family", 307, Current, 0, 1, 4166);
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
	ti4_1 = (nstcall = 1, F102_1429(RTCW(arg1)));
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_3_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.basic_store */
void F308_4126 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("basic_store", 307, Current, 0, 1, 4167);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("support_storable", EX_PRE);
		RTTE((nstcall = 0, F309_4262(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	(nstcall = 0, F308_4259(Current, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SOCKET}.general_store */
void F308_4127 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("general_store", 307, Current, 0, 1, 4168);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("support_storable", EX_PRE);
		RTTE((nstcall = 0, F309_4262(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	(nstcall = 0, F308_4260(Current, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SOCKET}.independent_store */
void F308_4128 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("independent_store", 307, Current, 0, 1, 4169);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("support_storable", EX_PRE);
		RTTE((nstcall = 0, F309_4262(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	(nstcall = 0, F308_4261(Current, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SOCKET}.cleanup */
void F308_4132 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cleanup", 307, Current, 0, 0, 4170);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F310_4266(Current))) {
		RTHOOK(2);
		(nstcall = 0, F308_4133(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SOCKET}.close */
void F308_4133 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("close", 307, Current, 0, 0, 4171);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("medium_is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_9_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_) || *(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_))) {
		RTHOOK(3);
		(nstcall = 0, F310_4303(Current));
	}
	RTHOOK(4);
	if ((nstcall = 0, F310_4266(Current))) {
		RTHOOK(5);
		(nstcall = 0, F310_4267(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SOCKET}.descriptor_available */
EIF_BOOLEAN F308_4136 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_);
}


/* {SOCKET}.family */
EIF_INTEGER_32 F308_4137 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_3_);
}


/* {SOCKET}.protocol */
EIF_INTEGER_32 F308_4138 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_4_);
}


/* {SOCKET}.type */
EIF_INTEGER_32 F308_4139 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_5_);
}


/* {SOCKET}.address */
EIF_REFERENCE F308_4140 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SOCKET}.peer_address */
EIF_REFERENCE F308_4141 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SOCKET}.address_type */
EIF_REFERENCE F308_4142 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("address_type", 307, Current, 0, 0, 4178);
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

/* {SOCKET}.set_peer_address */
void F308_4143 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("set_peer_address", 307, Current, 3, 1, 4179);
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
		RTHOOK(2);
		RTCT("address_valid", EX_PRE);
		RTTE((nstcall = 0, F310_4278(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = arg1;
	loc1 = RTRV(eif_final_id(Y3791,Y3791_gen_type,dftype,307),loc1);
	if ((loc1) && RTS_OS (Current, loc1)) loc1 = (EIF_REFERENCE) 0;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			RTHOOK(6);
			tr1 = RTLNSMART(eif_final_id(Y3792,Y3792_gen_type,dftype,307).id);
			(nstcall = -1, F102_1425(RTCW(tr1), arg1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("separate_address_object_equal", EX_POST);
		loc2 = arg1;
		loc2 = RTRV(eif_final_id(Y3791,Y3791_gen_type,dftype,307),loc2);
		if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
		if ((!((EIF_BOOLEAN) !EIF_TEST(loc2)) || (RTEQ(*(EIF_REFERENCE *)(Current + _REFACS_2_), arg1)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("nonseparate_address_reference_equal", EX_POST);
		loc3 = arg1;
		loc3 = RTRV(eif_final_id(Y3791,Y3791_gen_type,dftype,307),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		if ((!(EIF_TEST(loc3)) || ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg1)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {SOCKET}.set_address */
void F308_4144 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_address", 307, Current, 0, 1, 4180);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("add_non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("same_type", EX_PRE);
		RTTE((nstcall = 0, F310_4279(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("address_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {SOCKET}.name */
EIF_REFERENCE F308_4145 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("name", 307, Current, 0, 0, 4181);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(Result), ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.put_new_line */
void F308_4146 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_new_line", 307, Current, 0, 0, 4182);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F308_4152(Current, (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SOCKET}.new_line */
void F308_4147 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("new_line", 307, Current, 0, 0, 4183);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F308_4152(Current, (EIF_CHARACTER_8) '\012'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_string */
void F308_4148 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("put_string", 307, Current, 1, 1, 4184);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F238_2749(RTCW(loc1), arg1));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SOCKET}.putstring */
void F308_4149 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("putstring", 307, Current, 1, 1, 4185);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F238_2749(RTCW(loc1), arg1));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_managed_pointer */
void F308_4150 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("put_managed_pointer", 307, Current, 0, 3, 4186);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("p_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (arg3 + arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("nb_bytes_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F308_4235(Current, tp1, arg2, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_separate_managed_pointer */
void F308_4151 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("put_separate_managed_pointer", 307, Current, 0, 3, 4187);
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
			RTCT("pointer_not_void", EX_PRE);
			RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
			RTCK;
			RTHOOK(2);
			RTCT("large_enough", EX_PRE);
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (NULL, eif_sca1, 0+ _LNGOFF_0_1_0_0_, &(ti4_1));
			}
			has_wait_condition = uarg1;
			RTTE((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (arg3 + arg2)), label_1);
			RTCK;
			has_wait_condition = 0;
			RTHOOK(3);
			RTCT("byte_count_non_negative", EX_PRE);
			RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
			RTCK;
			RTHOOK(4);
			RTCT("extendible", EX_PRE);
			RTTE((nstcall = 0, F308_4182(Current)), label_1);
			RTCK;
			RTJB;
label_1:
			if (!has_wait_condition) break;
			RTCK;
			RTS_RF;
		}
		RTCF;
	}
body:;
	RTHOOK(5);
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca13, 0+ _PTROFF_0_1_0_1_0_0_, &(tp1));
	}
	(nstcall = 0, F308_4235(Current, tp1, arg2, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {SOCKET}.put_character */
void F308_4152 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("put_character", 307, Current, 0, 1, 4188);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3949(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.putchar */
void F308_4153 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
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
	
	RTEAA("putchar", 307, Current, 0, 1, 4189);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3949(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_real */
void F308_4154 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("put_real", 307, Current, 0, 1, 4190);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3995(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.putreal */
void F308_4155 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("putreal", 307, Current, 0, 1, 4191);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3995(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_real_32 */
void F308_4156 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("put_real_32", 307, Current, 0, 1, 4192);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3995(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_double */
void F308_4157 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("put_double", 307, Current, 0, 1, 4193);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3996(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.putdouble */
void F308_4158 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("putdouble", 307, Current, 0, 1, 4194);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3996(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_real_64 */
void F308_4159 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("put_real_64", 307, Current, 0, 1, 4195);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3996(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_integer */
void F308_4160 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("put_integer", 307, Current, 0, 1, 4196);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3993(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.putint */
void F308_4161 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("putint", 307, Current, 0, 1, 4197);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3993(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_integer_32 */
void F308_4162 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("put_integer_32", 307, Current, 0, 1, 4198);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3993(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_integer_8 */
void F308_4163 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
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
	
	RTEAA("put_integer_8", 307, Current, 0, 1, 4199);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3991(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_integer_16 */
void F308_4164 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
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
	
	RTEAA("put_integer_16", 307, Current, 0, 1, 4200);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3992(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_integer_64 */
void F308_4165 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	
	RTEAA("put_integer_64", 307, Current, 0, 1, 4201);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3994(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_natural_8 */
void F308_4166 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
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
	
	RTEAA("put_natural_8", 307, Current, 0, 1, 4202);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3987(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_natural_16 */
void F308_4167 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
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
	
	RTEAA("put_natural_16", 307, Current, 0, 1, 4203);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3988(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_natural */
void F308_4168 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("put_natural", 307, Current, 0, 1, 4204);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3989(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_natural_32 */
void F308_4169 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("put_natural_32", 307, Current, 0, 1, 4205);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3989(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_natural_64 */
void F308_4170 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
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
	
	RTEAA("put_natural_64", 307, Current, 0, 1, 4206);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 1, F303_3990(RTCW(tr1), arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F308_4237(Current));
	(nstcall = 0, F308_4150(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_boolean */
void F308_4171 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_boolean", 307, Current, 0, 1, 4207);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		(nstcall = 0, F308_4152(Current, (EIF_CHARACTER_8) 'T'));
	} else {
		RTHOOK(4);
		(nstcall = 0, F308_4152(Current, (EIF_CHARACTER_8) 'F'));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SOCKET}.putbool */
void F308_4172 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("putbool", 307, Current, 0, 1, 4208);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		(nstcall = 0, F308_4152(Current, (EIF_CHARACTER_8) 'T'));
	} else {
		RTHOOK(4);
		(nstcall = 0, F308_4152(Current, (EIF_CHARACTER_8) 'F'));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SOCKET}.write */
void F308_4173 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
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
	
	RTEAA("write", 307, Current, 4, 1, 4209);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_packet_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("socket_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F10_215(RTCW(arg1)));
	loc4 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc4 == loc1)) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 0, F310_4268(Current));
		loc3 = (nstcall = 0, F308_4246(Current, ti4_1, loc2, (EIF_INTEGER_32) (loc4 - loc1)));
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			tp1 = RTPOF(loc2,loc3);
			loc2 = (EIF_POINTER) tp1;
			RTHOOK(9);
			loc1 += loc3;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {SOCKET}.send */
void F308_4174 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
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
	
	RTEAA("send", 307, Current, 4, 2, 4210);
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
		RTCT("opened_for_write", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_packet", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tp1 = *(EIF_POINTER *)(RTCW(tr1)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F10_215(RTCW(arg1)));
	loc4 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc4 == loc1)) break;
		RTHOOK(7);
		ti4_1 = (nstcall = 0, F310_4268(Current));
		loc3 = (nstcall = 0, F308_4250(Current, ti4_1, loc2, (EIF_INTEGER_32) (loc4 - loc1), arg2));
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			loc1 += loc3;
			RTHOOK(10);
			tp1 = RTPOF(loc2,loc3);
			loc2 = (EIF_POINTER) tp1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {SOCKET}.exists */
EIF_BOOLEAN F308_4175 (EIF_REFERENCE Current)
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
	
	RTEAA("exists", 307, Current, 0, 0, 4211);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_)) {
		Result = (EIF_BOOLEAN) ((nstcall = 0, F310_4268(Current)) >= ((EIF_INTEGER_32) 0L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((!(Result) || (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_5_)))) {
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

/* {SOCKET}.is_open_write */
EIF_BOOLEAN F308_4176 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_);
}


/* {SOCKET}.is_open_read */
EIF_BOOLEAN F308_4177 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_);
}


/* {SOCKET}.is_executable */
EIF_BOOLEAN F308_4178 (EIF_REFERENCE Current)
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
	
	RTEAA("is_executable", 307, Current, 0, 0, 4214);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("handle_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.is_writable */
EIF_BOOLEAN F308_4179 (EIF_REFERENCE Current)
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
	
	RTEAA("is_writable", 307, Current, 0, 0, 4215);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("handle_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.is_readable */
EIF_BOOLEAN F308_4180 (EIF_REFERENCE Current)
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
	
	RTEAA("is_readable", 307, Current, 0, 0, 4216);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("handle_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	if ((nstcall = 0, F308_4181(Current))) {
		ti4_1 = (nstcall = 0, F310_4268(Current));
		Result = (EIF_BOOLEAN)((nstcall = 0, F308_4257(Current, ti4_1)) != ((EIF_INTEGER_32) 0L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.readable */
EIF_BOOLEAN F308_4181 (EIF_REFERENCE Current)
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
	
	RTEAA("readable", 307, Current, 0, 0, 4217);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("handle_exists", EX_PRE);
		RTTE((nstcall = 0, F310_4266(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	if ((nstcall = 0, F310_4266(Current))) {
		Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.extendible */
EIF_BOOLEAN F308_4182 (EIF_REFERENCE Current)
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
	
	RTEAA("extendible", 307, Current, 0, 0, 4218);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((nstcall = 0, F310_4266(Current))) {
		Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_7_4_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.read_real */
void F308_4183 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_real", 307, Current, 0, 0, 4219);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 4L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tr4_1 = (nstcall = 1, F303_3985(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_REAL_32 *)(Current+ _R32OFF_7_12_2_13_0_) = (EIF_REAL_32) tr4_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.readreal */
void F308_4184 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("readreal", 307, Current, 0, 0, 4220);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 4L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tr4_1 = (nstcall = 1, F303_3985(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_REAL_32 *)(Current+ _R32OFF_7_12_2_13_0_) = (EIF_REAL_32) tr4_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_real_32 */
void F308_4185 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_real_32", 307, Current, 0, 0, 4221);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 4L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tr4_1 = (nstcall = 1, F303_3985(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_REAL_32 *)(Current+ _R32OFF_7_12_2_13_0_) = (EIF_REAL_32) tr4_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_double */
void F308_4186 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_double", 307, Current, 0, 0, 4222);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 8L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tr8_1 = (nstcall = 1, F303_3986(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_REAL_64 *)(Current+ _R64OFF_7_12_2_13_1_0_3_0_) = (EIF_REAL_64) tr8_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.readdouble */
void F308_4187 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("readdouble", 307, Current, 0, 0, 4223);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 8L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tr8_1 = (nstcall = 1, F303_3986(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_REAL_64 *)(Current+ _R64OFF_7_12_2_13_1_0_3_0_) = (EIF_REAL_64) tr8_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_real_64 */
void F308_4188 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_real_64", 307, Current, 0, 0, 4224);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 8L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tr8_1 = (nstcall = 1, F303_3986(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_REAL_64 *)(Current+ _R64OFF_7_12_2_13_1_0_3_0_) = (EIF_REAL_64) tr8_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_character */
void F308_4189 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_character", 307, Current, 0, 0, 4225);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 1L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tc1 = (nstcall = 1, F303_3929(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_) = (EIF_CHARACTER_8) tc1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.readchar */
void F308_4190 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("readchar", 307, Current, 0, 0, 4226);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 1L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tc1 = (nstcall = 1, F303_3929(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_) = (EIF_CHARACTER_8) tc1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_boolean */
void F308_4191 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_boolean", 307, Current, 0, 0, 4227);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F308_4189(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(nstcall = 0, F308_4120(Current))) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_) == (EIF_CHARACTER_8) 'T')) {
			RTHOOK(4);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SOCKET}.readbool */
void F308_4192 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readbool", 307, Current, 0, 0, 4228);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F308_4189(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(nstcall = 0, F308_4120(Current))) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_) == (EIF_CHARACTER_8) 'T')) {
			RTHOOK(4);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SOCKET}.last_boolean */
EIF_BOOLEAN F308_4193 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_7_1_);
}


/* {SOCKET}.read_integer */
void F308_4194 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer", 307, Current, 0, 0, 4230);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 4L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		ti4_1 = (nstcall = 1, F303_3983(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_1_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.readint */
void F308_4195 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("readint", 307, Current, 0, 0, 4231);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 4L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		ti4_1 = (nstcall = 1, F303_3983(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_1_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_integer_32 */
void F308_4196 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_32", 307, Current, 0, 0, 4232);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 4L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		ti4_1 = (nstcall = 1, F303_3983(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_1_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_integer_8 */
void F308_4197 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_8", 307, Current, 0, 0, 4233);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 1L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		ti1_1 = (nstcall = 1, F303_3981(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_INTEGER_8 *)(Current+ _CHROFF_7_11_) = (EIF_INTEGER_8) ti1_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_integer_16 */
void F308_4198 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_16", 307, Current, 0, 0, 4234);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 2L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		ti2_1 = (nstcall = 1, F303_3982(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_INTEGER_16 *)(Current+ _I16OFF_7_12_1_) = (EIF_INTEGER_16) ti2_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_integer_64 */
void F308_4199 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_64", 307, Current, 0, 0, 4235);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 8L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		ti8_1 = (nstcall = 1, F303_3984(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_INTEGER_64 *)(Current+ _I64OFF_7_12_2_13_1_0_2_) = (EIF_INTEGER_64) ti8_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_natural_8 */
void F308_4200 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_8", 307, Current, 0, 0, 4236);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 1L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tu1_1 = (nstcall = 1, F303_3977(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_NATURAL_8 *)(Current+ _CHROFF_7_10_) = (EIF_NATURAL_8) tu1_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_natural_16 */
void F308_4201 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_16", 307, Current, 0, 0, 4237);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 2L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tu2_1 = (nstcall = 1, F303_3978(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_NATURAL_16 *)(Current+ _I16OFF_7_12_0_) = (EIF_NATURAL_16) tu2_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_natural */
void F308_4202 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural", 307, Current, 0, 0, 4238);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 4L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tu4_1 = (nstcall = 1, F303_3979(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_7_12_2_0_) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_natural_32 */
void F308_4203 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_32", 307, Current, 0, 0, 4239);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 4L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tu4_1 = (nstcall = 1, F303_3979(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_NATURAL_32 *)(Current+ _LNGOFF_7_12_2_0_) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_natural_64 */
void F308_4204 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_64", 307, Current, 0, 0, 4240);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F308_4239(Current));
	(nstcall = 0, F308_4207(Current, tr1, ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) != ((EIF_INTEGER_32) 8L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("Peer closed connection",22,217982062);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 0, F308_4239(Current));
		tu8_1 = (nstcall = 1, F303_3980(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_NATURAL_64 *)(Current+ _I64OFF_7_12_2_13_1_0_0_) = (EIF_NATURAL_64) tu8_1;
		RTHOOK(6);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SOCKET}.read_stream */
void F308_4205 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("read_stream", 307, Current, 3, 1, 4241);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F238_2750(RTCW(loc1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	tp1 = (nstcall = 1, F238_2771(RTCW(loc1)));
	loc2 = (nstcall = 0, F308_4244(Current, ti4_1, arg1, tp1));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) = (EIF_INTEGER_32) loc2;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		loc3 = *(EIF_REFERENCE *)(Current);
		RTHOOK(7);
		(nstcall = 1, F1081_7877(RTCW(loc3), loc2));
		RTHOOK(8);
		(nstcall = 1, F1081_7893(RTCW(loc3), loc2));
		RTHOOK(9);
		(nstcall = 1, F238_2765(RTCW(loc1), loc3, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), loc2));
	} else {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R6234[Dtype(RTCW(tr1))-1080])(tr1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {SOCKET}.readstream */
void F308_4206 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("readstream", 307, Current, 3, 1, 4242);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F238_2750(RTCW(loc1), (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	tp1 = (nstcall = 1, F238_2771(RTCW(loc1)));
	loc2 = (nstcall = 0, F308_4244(Current, ti4_1, arg1, tp1));
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) = (EIF_INTEGER_32) loc2;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		loc3 = *(EIF_REFERENCE *)(Current);
		RTHOOK(7);
		(nstcall = 1, F1081_7877(RTCW(loc3), loc2));
		RTHOOK(8);
		(nstcall = 1, F1081_7893(RTCW(loc3), loc2));
		RTHOOK(9);
		(nstcall = 1, F238_2765(RTCW(loc1), loc3, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), loc2));
	} else {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R6234[Dtype(RTCW(tr1))-1080])(tr1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {SOCKET}.read_to_managed_pointer */
void F308_4207 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_to_managed_pointer", 307, Current, 0, 3, 4243);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("p_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (arg3 + arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("nb_bytes_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F308_4234(Current, tp1, arg2, arg3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("bytes_read_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("bytes_read_not_too_big", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) <= arg3)) {
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

/* {SOCKET}.read_to_separate_managed_pointer */
void F308_4208 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("read_to_separate_managed_pointer", 307, Current, 0, 3, 4244);
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
			RTCT("pointer_not_void", EX_PRE);
			RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
			RTCK;
			RTHOOK(2);
			RTCT("large_enough", EX_PRE);
			if (RTS_CI (EIF_TRUE, arg1)) {
				RTS_BI (arg1);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
				RTS_EI;
			} else {
				RTS_AC (0, arg1);
				RTS_CALL (NULL, eif_sca1, 0+ _LNGOFF_0_1_0_0_, &(ti4_1));
			}
			has_wait_condition = uarg1;
			RTTE((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (arg3 + arg2)), label_1);
			RTCK;
			has_wait_condition = 0;
			RTHOOK(3);
			RTCT("byte_count_non_negative", EX_PRE);
			RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
			RTCK;
			RTHOOK(4);
			RTCT("is_readable", EX_PRE);
			RTTE((nstcall = 0, F308_4181(Current)), label_1);
			RTCK;
			RTJB;
label_1:
			if (!has_wait_condition) break;
			RTCK;
			RTS_RF;
		}
		RTCF;
	}
body:;
	RTHOOK(5);
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca13, 0+ _PTROFF_0_1_0_1_0_0_, &(tp1));
	}
	(nstcall = 0, F308_4234(Current, tp1, arg2, arg3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("bytes_read_updated", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) <= arg3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {SOCKET}.read_line */
void F308_4209 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("read_line", 307, Current, 1, 0, 4245);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1079_7731(RTCW(loc1), ((EIF_INTEGER_32) 512L)));
	RTHOOK(3);
	(nstcall = 0, F308_4189(Current));
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_) == (EIF_CHARACTER_8) '\012')) {
			tb1 = (nstcall = 0, F308_4120(Current));
		}
		if (tb1) break;
		RTHOOK(5);
		(nstcall = 1, F1081_7858(RTCW(loc1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_)));
		RTHOOK(6);
		(nstcall = 0, F308_4189(Current));
	}
	RTHOOK(7);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {SOCKET}.readline */
void F308_4210 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("readline", 307, Current, 1, 0, 4246);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1079_7731(RTCW(loc1), ((EIF_INTEGER_32) 512L)));
	RTHOOK(3);
	(nstcall = 0, F308_4189(Current));
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_) == (EIF_CHARACTER_8) '\012')) {
			tb1 = (nstcall = 0, F308_4120(Current));
		}
		if (tb1) break;
		RTHOOK(5);
		(nstcall = 1, F1081_7858(RTCW(loc1), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_)));
		RTHOOK(6);
		(nstcall = 0, F308_4189(Current));
	}
	RTHOOK(7);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {SOCKET}.read_line_until */
void F308_4211 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("read_line_until", 307, Current, 2, 1, 4247);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1079_7731(RTCW(loc2), ((EIF_INTEGER_32) 512L)));
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) NULL;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == arg1)) break;
		RTHOOK(5);
		(nstcall = 0, F308_4189(Current));
		RTHOOK(6);
		tb1 = '\01';
		if (!(nstcall = 0, F308_4120(Current))) {
			tb1 = (EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_) == (EIF_CHARACTER_8) '\012');
		}
		if (tb1) {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(8);
			(nstcall = 1, F1081_7858(RTCW(loc2), *(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_)));
		}
		RTHOOK(9);
		loc1++;
	}
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F308_4120(Current))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current+ _CHROFF_7_0_) != (EIF_CHARACTER_8) '\012');
	}
	if (tb1) {
		RTHOOK(11);
		tr1 = RTMS_EX_H("End of line not reached after ",30,591764768);
		tr2 = eif_out__i4_s1(arg1);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
		tr1 = RTMS_EX_H(" read characters",16,572693107);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(12);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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
}

/* {SOCKET}.read */
EIF_REFERENCE F308_4212 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("read", 307, Current, 5, 1, 4248);
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
		RTCT("opened_for_read", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = malloc((size_t)arg1);
	loc5 = (EIF_POINTER) tp1;
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(5);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == arg1) || (EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(7);
		ti4_1 = (nstcall = 0, F310_4268(Current));
		loc4 = (nstcall = 0, F308_4244(Current, ti4_1, (EIF_INTEGER_32) (arg1 - loc3), loc5));
		RTHOOK(8);
		if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			loc2 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
			(nstcall = -1, F303_3910(RTCW(loc2), loc5, loc4));
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				RTHOOK(11);
				tr1 = (nstcall = 1, F1_14(loc2));
				loc1 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(12);
				(nstcall = 1, F303_3997(RTCW(loc1), loc2));
			}
			RTHOOK(13);
			loc3 += loc4;
		}
	}
	RTHOOK(14);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(15);
		Result = RTLNS(eif_new_type(9, 0x01).id, 9, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F10_214(RTCW(Result), loc1));
	}
	RTHOOK(16);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) = (EIF_INTEGER_32) loc3;
	RTHOOK(17);
	free(loc5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.receive */
EIF_REFERENCE F308_4213 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("receive", 307, Current, 5, 2, 4249);
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
		RTCT("opened_for_read", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_7_3_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = malloc((size_t)arg1);
	loc5 = (EIF_POINTER) tp1;
	RTHOOK(4);
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc3 == arg1)) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 0, F310_4268(Current));
		loc4 = (nstcall = 0, F308_4248(Current, ti4_1, loc5, (EIF_INTEGER_32) (arg1 - loc3), arg2));
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			loc2 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
			(nstcall = -1, F303_3910(RTCW(loc2), loc5, loc4));
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc1 == NULL)) {
				RTHOOK(10);
				tr1 = (nstcall = 1, F1_14(loc2));
				loc1 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(11);
				(nstcall = 1, F303_3997(RTCW(loc1), loc2));
			}
			RTHOOK(12);
			loc3 += loc4;
		} else {
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(14);
				loc1 = (EIF_REFERENCE) NULL;
			}
		}
	}
	RTHOOK(15);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(16);
		Result = RTLNS(eif_new_type(9, 0x01).id, 9, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F10_214(RTCW(Result), loc1));
	}
	RTHOOK(17);
	free(loc5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.enable_debug */
void F308_4214 (EIF_REFERENCE Current)
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
	
	RTEAA("enable_debug", 307, Current, 0, 0, 4250);
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
	ti4_3 = (nstcall = 0, F239_2827(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SOCKET}.disable_debug */
void F308_4215 (EIF_REFERENCE Current)
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
	
	RTEAA("disable_debug", 307, Current, 0, 0, 4251);
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
	ti4_3 = (nstcall = 0, F239_2827(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SOCKET}.debug_enabled */
EIF_BOOLEAN F308_4216 (EIF_REFERENCE Current)
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
	
	RTEAA("debug_enabled", 307, Current, 1, 0, 4252);
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
	ti4_3 = (nstcall = 0, F239_2827(Current));
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

/* {SOCKET}.do_not_route */
void F308_4217 (EIF_REFERENCE Current)
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
	
	RTEAA("do_not_route", 307, Current, 0, 0, 4253);
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
	ti4_3 = (nstcall = 0, F239_2828(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SOCKET}.route */
void F308_4218 (EIF_REFERENCE Current)
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
	
	RTEAA("route", 307, Current, 0, 0, 4254);
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
	ti4_3 = (nstcall = 0, F239_2828(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SOCKET}.route_enabled */
EIF_BOOLEAN F308_4219 (EIF_REFERENCE Current)
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
	
	RTEAA("route_enabled", 307, Current, 1, 0, 4255);
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
	ti4_3 = (nstcall = 0, F239_2828(Current));
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

/* {SOCKET}.set_receive_buf_size */
void F308_4220 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("set_receive_buf_size", 307, Current, 0, 1, 4256);
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
	ti4_3 = (nstcall = 0, F239_2833(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("size_set", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F308_4221(Current)))) {
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

/* {SOCKET}.receive_buf_size */
EIF_INTEGER_32 F308_4221 (EIF_REFERENCE Current)
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
	
	RTEAA("receive_buf_size", 307, Current, 0, 0, 4257);
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
	ti4_3 = (nstcall = 0, F239_2833(Current));
	Result = (nstcall = 0, F308_4252(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.set_send_buf_size */
void F308_4222 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("set_send_buf_size", 307, Current, 0, 1, 4258);
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
	ti4_3 = (nstcall = 0, F239_2834(Current));
	(nstcall = 0, F308_4251(Current, ti4_1, ti4_2, ti4_3, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("size_set", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F308_4223(Current)))) {
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

/* {SOCKET}.send_buf_size */
EIF_INTEGER_32 F308_4223 (EIF_REFERENCE Current)
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
	
	RTEAA("send_buf_size", 307, Current, 0, 0, 4259);
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
	ti4_3 = (nstcall = 0, F239_2834(Current));
	Result = (nstcall = 0, F308_4252(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.is_socket_stream */
EIF_BOOLEAN F308_4224 (EIF_REFERENCE Current)
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
	
	RTEAA("is_socket_stream", 307, Current, 1, 0, 4260);
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
	ti4_3 = (nstcall = 0, F239_2840(Current));
	loc1 = (nstcall = 0, F308_4252(Current, ti4_1, ti4_2, ti4_3));
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F239_2866(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 == ti4_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.set_non_blocking */
void F308_4225 (EIF_REFERENCE Current)
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
	
	RTEAA("set_non_blocking", 307, Current, 0, 0, 4261);
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
	(nstcall = 0, F308_4254(Current, ti4_1));
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not is_blocking", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_)) {
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

/* {SOCKET}.set_blocking */
void F308_4226 (EIF_REFERENCE Current)
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
	
	RTEAA("set_blocking", 307, Current, 0, 0, 4262);
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
	(nstcall = 0, F308_4255(Current, ti4_1));
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_blocking", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_)) {
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

/* {SOCKET}.is_blocking */
EIF_BOOLEAN F308_4227 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_7_2_);
}


/* {SOCKET}.set_owner */
void F308_4228 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_owner", 307, Current, 1, 1, 4264);
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
		RTCT("valid_owner", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) -1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2872(Current));
	loc1 = (nstcall = 0, F308_4253(Current, ti4_1, ti4_2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("set_id", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) -1L))) {
			tb3 = '\01';
			if (!(EIF_BOOLEAN)(arg1 == (nstcall = 0, F308_4231(Current)))) {
				tb3 = (EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L));
			}
			tb2 = tb3;
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(arg1 == (nstcall = 0, F308_4232(Current)));
		}
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

/* {SOCKET}.is_group_id */
EIF_BOOLEAN F308_4229 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_group_id", 307, Current, 1, 0, 4265);
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
	ti4_2 = (nstcall = 0, F239_2871(Current));
	loc1 = (nstcall = 0, F308_4253(Current, ti4_1, ti4_2, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) -1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.is_process_id */
EIF_BOOLEAN F308_4230 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_process_id", 307, Current, 1, 0, 4266);
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
	ti4_2 = (nstcall = 0, F239_2871(Current));
	loc1 = (nstcall = 0, F308_4253(Current, ti4_1, ti4_2, ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.group_id */
EIF_INTEGER_32 F308_4231 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("group_id", 307, Current, 0, 0, 4267);
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
		RTCT("group_set", EX_PRE);
		RTTE((nstcall = 0, F308_4229(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2871(Current));
	Result = (nstcall = 0, F308_4253(Current, ti4_1, ti4_2, ((EIF_INTEGER_32) 0L)));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) -1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.process_id */
EIF_INTEGER_32 F308_4232 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("process_id", 307, Current, 0, 0, 4268);
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
		RTCT("process_set", EX_PRE);
		RTTE((nstcall = 0, F308_4230(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	ti4_2 = (nstcall = 0, F239_2871(Current));
	Result = (nstcall = 0, F308_4253(Current, ti4_1, ti4_2, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.socket_error */
EIF_REFERENCE F308_4233 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SOCKET}.read_into_pointer */
void F308_4234 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_into_pointer", 307, Current, 2, 3, 4270);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("p_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("nb_bytes_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F308_4181(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == arg3) || (EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L)))) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 0, F310_4268(Current));
		tp1 = RTPOF(arg1,arg2);
		tp2 = RTPOF(tp1,loc1);
		loc2 = (nstcall = 0, F308_4244(Current, ti4_1, (EIF_INTEGER_32) (arg3 - loc1), tp2));
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			loc1 += loc2;
		}
	}
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("bytes_read_updated", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 0L) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_7_12_2_2_) <= arg3))) {
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

/* {SOCKET}.put_pointer_content */
void F308_4235 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_pointer_content", 307, Current, 0, 3, 4271);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pointer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("byte_count_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F308_4182(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F310_4268(Current));
	tp1 = RTPOF(arg1,arg2);
	(nstcall = 0, F308_4242(Current, ti4_1, tp1, arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SOCKET}.put_socket_buffer */
EIF_REFERENCE F308_4237 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("put_socket_buffer", 307, Current, 1, 0, 4272);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		loc1 = RTLNSMART(eif_new_type(302, 0).id);
		(nstcall = -1, F303_3908(RTCW(loc1), ((EIF_INTEGER_32) 16L)));
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(5);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.put_internal_socket_buffer */
EIF_REFERENCE F308_4238 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SOCKET}.read_socket_buffer */
EIF_REFERENCE F308_4239 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("read_socket_buffer", 307, Current, 1, 0, 4274);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(3);
		loc1 = RTLNSMART(eif_new_type(302, 0).id);
		(nstcall = -1, F303_3908(RTCW(loc1), ((EIF_INTEGER_32) 16L)));
		RTHOOK(4);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) loc1;
	}
	RTHOOK(5);
	Result = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.read_internal_socket_buffer */
EIF_REFERENCE F308_4240 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {SOCKET}.c_put_stream_noexception */
EIF_INTEGER_32 F308_4241 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_put_stream_noexception", 307, Current, 0, 3, 4276);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_put_stream_noexception(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_put_stream */
void F308_4242 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_put_stream", 307, Current, 0, 3, 4277);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;c_put_stream(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {SOCKET}.c_read_stream_noexception */
EIF_INTEGER_32 F308_4243 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
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
	
	RTEAA("c_read_stream_noexception", 307, Current, 0, 3, 4278);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_read_stream_noexception(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_read_stream */
EIF_INTEGER_32 F308_4244 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_POINTER arg3)
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
	
	RTEAA("c_read_stream", 307, Current, 0, 3, 4279);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_read_stream(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_write_noexception */
EIF_INTEGER_32 F308_4245 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_write_noexception", 307, Current, 0, 3, 4280);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_write_noexception(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_write */
EIF_INTEGER_32 F308_4246 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_write", 307, Current, 0, 3, 4281);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_write(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_recv_noexception */
EIF_INTEGER_32 F308_4247 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("c_recv_noexception", 307, Current, 0, 4, 4282);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_recv_noexception(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_receive */
EIF_INTEGER_32 F308_4248 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("c_receive", 307, Current, 0, 4, 4283);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_receive(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_send_noexception */
EIF_INTEGER_32 F308_4249 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("c_send_noexception", 307, Current, 0, 4, 4284);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_send_noexception(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_send */
EIF_INTEGER_32 F308_4250 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
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
	
	RTEAA("c_send", 307, Current, 0, 4, 4285);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_send(arg1, arg2, arg3, arg4);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_set_sock_opt_int */
void F308_4251 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_sock_opt_int", 307, Current, 0, 4, 4286);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);c_set_sock_opt_int(arg1, arg2, arg3, arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {SOCKET}.c_get_sock_opt_int */
EIF_INTEGER_32 F308_4252 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_get_sock_opt_int", 307, Current, 0, 3, 4287);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_get_sock_opt_int(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_fcntl */
EIF_INTEGER_32 F308_4253 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("c_fcntl", 307, Current, 0, 3, 4288);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) c_fcntl(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_set_non_blocking */
void F308_4254 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_non_blocking", 307, Current, 0, 1, 4289);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);c_set_non_blocking(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {SOCKET}.c_set_blocking */
void F308_4255 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_set_blocking", 307, Current, 0, 1, 4290);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);c_set_blocking(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {SOCKET}.c_syncpoll */
EIF_INTEGER_32 F308_4256 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("c_syncpoll", 307, Current, 0, 1, 4291);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_syncpoll(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.c_select_poll */
EIF_INTEGER_32 F308_4257 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("c_select_poll", 307, Current, 0, 1, 4292);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_select_poll(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.eif_net_retrieved */
EIF_REFERENCE F308_4258 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("eif_net_retrieved", 307, Current, 0, 1, 4293);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REFERENCE) eif_net_retrieved(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SOCKET}.eif_net_basic_store */
void F308_4259 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_net_basic_store", 307, Current, 0, 2, 4294);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_net_basic_store(arg1, arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {SOCKET}.eif_net_general_store */
void F308_4260 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_net_general_store", 307, Current, 0, 2, 4295);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_net_general_store(arg1, arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {SOCKET}.eif_net_independent_store */
void F308_4261 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_net_independent_store", 307, Current, 0, 2, 4296);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_net_independent_store(arg1, arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

void EIF_Minit258 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
