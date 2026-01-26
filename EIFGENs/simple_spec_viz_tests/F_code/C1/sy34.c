/*
 * Code for class SYSTEM_ENCODINGS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "sy34.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SYSTEM_ENCODINGS}.system_encoding */
static EIF_REFERENCE F37_739_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(169)

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("system_encoding", 36, Current, 0, 0, 752);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(170,(nstcall = 0, F37_745), (Current));
	tr3 = (nstcall = 1, F106_1459(RTCW(tr2)));
	(nstcall = -1, F38_746(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("system_encoding_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F37_739 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(169,F37_739_body,(Current));
}

/* {SYSTEM_ENCODINGS}.console_encoding */
static EIF_REFERENCE F37_740_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(171)

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("console_encoding", 36, Current, 0, 0, 753);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(170,(nstcall = 0, F37_745), (Current));
	tr3 = (nstcall = 1, F106_1460(RTCW(tr2)));
	(nstcall = -1, F38_746(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("console_encoding_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F37_740 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(171,F37_740_body,(Current));
}

/* {SYSTEM_ENCODINGS}.utf8 */
static EIF_REFERENCE F37_741_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(64)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("utf8", 36, Current, 0, 0, 754);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(70,(nstcall = 0, F36_732), (Current));
	(nstcall = -1, F38_746(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F37_741 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(64,F37_741_body,(Current));
}

/* {SYSTEM_ENCODINGS}.utf16 */
static EIF_REFERENCE F37_742_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(172)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("utf16", 36, Current, 0, 0, 755);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(173,(nstcall = 0, F36_733), (Current));
	(nstcall = -1, F38_746(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("utf16_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F37_742 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(172,F37_742_body,(Current));
}

/* {SYSTEM_ENCODINGS}.utf32 */
static EIF_REFERENCE F37_743_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(63)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("utf32", 36, Current, 0, 0, 756);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(174,(nstcall = 0, F36_734), (Current));
	(nstcall = -1, F38_746(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("utf32_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F37_743 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(63,F37_743_body,(Current));
}

/* {SYSTEM_ENCODINGS}.iso_8859_1 */
static EIF_REFERENCE F37_744_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(175)

	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("iso_8859_1", 36, Current, 0, 0, 750);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(170,(nstcall = 0, F37_745), (Current));
	tr3 = RTOUCR(176,(nstcall = 1, F106_1461), (RTCW(tr2)));
	(nstcall = -1, F38_746(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F37_744 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(175,F37_744_body,(Current));
}

/* {SYSTEM_ENCODINGS}.system_encodings_i */
static EIF_REFERENCE F37_745_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(170)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("system_encodings_i", 36, Current, 0, 0, 751);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(105, 0x01).id, 105, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F37_745 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(170,F37_745_body,(Current));
}

void EIF_Minit34 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
