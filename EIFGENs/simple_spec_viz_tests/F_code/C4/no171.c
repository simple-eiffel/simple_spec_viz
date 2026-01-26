/*
 * Code for class NO_MORE_MEMORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "no171.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NO_MORE_MEMORY}.code */
EIF_INTEGER_32 F197_2443 (EIF_REFERENCE Current)
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
	
	RTEAA("code", 196, Current, 0, 0, 2448);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) == ((EIF_INTEGER_32) 15L))) {
		RTHOOK(2);
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_);
	} else {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {NO_MORE_MEMORY}.tag */
static EIF_REFERENCE F197_2444_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(101)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("tag", 196, Current, 0, 0, 2449);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1083, 0x01).id, 1083, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("No more memory.",15,1839906350);
	(nstcall = -1, F1084_7951(RTCW(tr1), tr2));
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

EIF_REFERENCE F197_2444 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(101,F197_2444_body,(Current));
}

/* {NO_MORE_MEMORY}.set_code */
void F197_2445 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("set_code", 196, Current, 0, 1, 2450);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F197_2443(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {NO_MORE_MEMORY}.internal_code */
EIF_INTEGER_32 F197_2446 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_5_1_0_1_);
}


void EIF_Minit171 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
