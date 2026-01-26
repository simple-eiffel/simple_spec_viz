/*
 * Code for class RT_DBG_EXECUTION_PARAMETERS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt55.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {RT_DBG_EXECUTION_PARAMETERS}.make */
void F58_982 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 57, Current, 0, 0, 1007);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000000L);
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_PARAMETERS}.maximum_record_count */
EIF_INTEGER_32 F58_983 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_);
}


/* {RT_DBG_EXECUTION_PARAMETERS}.flatten_when_closing */
EIF_BOOLEAN F58_984 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
}


/* {RT_DBG_EXECUTION_PARAMETERS}.keep_calls_records */
EIF_BOOLEAN F58_985 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_);
}


/* {RT_DBG_EXECUTION_PARAMETERS}.recording_values */
EIF_BOOLEAN F58_986 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_);
}


/* {RT_DBG_EXECUTION_PARAMETERS}.set_maximum_record_count */
void F58_987 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_maximum_record_count", 57, Current, 0, 1, 1012);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_3_0_0_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_PARAMETERS}.set_flatten_when_closing */
void F58_988 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_flatten_when_closing", 57, Current, 0, 1, 1013);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_PARAMETERS}.set_keep_calls_records */
void F58_989 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_keep_calls_records", 57, Current, 0, 1, 1014);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_1_) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {RT_DBG_EXECUTION_PARAMETERS}.set_recording_values */
void F58_990 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_recording_values", 57, Current, 0, 1, 1015);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_2_) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit55 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
