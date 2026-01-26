/*
 * Code for class DATE_TIME_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da120.h"
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

/* {DATE_TIME_VALUE}.date */
EIF_REFERENCE F146_1971 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DATE_TIME_VALUE}.time */
EIF_REFERENCE F146_1972 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DATE_TIME_VALUE}.fractional_second */
EIF_REAL_64 F146_1973 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("fractional_second", 145, Current, 0, 0, 1986);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr8_1 = *(EIF_REAL_64 *)(RTCW(tr1) + O1879[Dtype(tr1)-141]);
	Result = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_fractional", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr8_1 = *(EIF_REAL_64 *)(RTCW(tr1) + O1879[Dtype(tr1)-141]);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (Result, tr8_1)) {
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

void EIF_Minit120 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
