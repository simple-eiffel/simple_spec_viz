/*
 * Code for class INET_ADDRESS_IMPL_V4
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in150.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INET_ADDRESS_IMPL_V4}.local_host_name */
EIF_REFERENCE F176_2361 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("local_host_name", 175, Current, 1, 0, 2366);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3908(RTCW(loc1), ((EIF_INTEGER_32) 256L)));
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F176_2364(Current, tp1));
	RTHOOK(3);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = -1, F1079_7734(RTCW(Result), tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {INET_ADDRESS_IMPL_V4}.any_local_address */
static EIF_REFERENCE F176_2362_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(38)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("any_local_address", 175, Current, 0, 0, 2367);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(227, 0x01).id, 227, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr2 = RTMS_EX_H("0.0.0.0",7,1402630960);
	(nstcall = -1, F228_2690(RTCW(tr1), tr2, NULL));
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

EIF_REFERENCE F176_2362 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(38,F176_2362_body,(Current));
}

/* {INET_ADDRESS_IMPL_V4}.loopback_address */
static EIF_REFERENCE F176_2363_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(0)

	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLIU(5);
	
	RTEAA("loopback_address", 175, Current, 0, 0, 2368);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(227, 0x01).id, 227, _OBJSIZ_1_0_0_2_0_0_0_0_);
	tr2 = RTMS_EX_H("localhost",9,185724020);
	{
		static EIF_TYPE_INDEX typarr0[] = {903,1020,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr4 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 4L),sizeof(EIF_NATURAL_8), EIF_TRUE);
		RT_SPECIAL_COUNT(tr4) = 4L;
	}
	*((EIF_NATURAL_8 *)tr4+0) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L);
	*((EIF_NATURAL_8 *)tr4+1) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr4+2) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	*((EIF_NATURAL_8 *)tr4+3) = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
	tr3 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F904_6145)(tr4);
	(nstcall = -1, F228_2690(RTCW(tr1), tr2, tr3));
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

EIF_REFERENCE F176_2363 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(0,F176_2363_body,(Current));
}

/* {INET_ADDRESS_IMPL_V4}.get_local_host_name */
void F176_2364 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("get_local_host_name", 175, Current, 0, 1, 2369);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);en_local_host_name(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

void EIF_Minit150 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
