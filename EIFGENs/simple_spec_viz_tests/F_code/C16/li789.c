/*
 * Code for class LINKABLE [G#1]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "li789.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LINKABLE}.right */
EIF_REFERENCE F119_1626 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + O1589[Dtype(Current)-118]);
}


/* {LINKABLE}.put_right */
void F119_1627 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("put_right", 118, Current, 0, 1, 1653);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + O1589[dtype-118]) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("chained", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O1589[dtype-118]) == arg1)) {
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

/* {LINKABLE}.forget_right */
void F119_1628 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("forget_right", 118, Current, 0, 0, 1654);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REFERENCE *)(Current + O1589[dtype-118]) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_chained", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + O1589[dtype-118]) == NULL)) {
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

void EIF_Minit789 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
