/*
 * Code for class ADDRINFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ad94.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ADDRINFO}.af_inet */
EIF_INTEGER_32 F114_1613 (EIF_REFERENCE Current)
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
	
	RTEAA("af_inet", 113, Current, 0, 0, 1638);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_addrinfo_af_inet();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ADDRINFO}.af_inet6 */
EIF_INTEGER_32 F114_1614 (EIF_REFERENCE Current)
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
	
	RTEAA("af_inet6", 113, Current, 0, 0, 1639);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) en_addrinfo_af_inet6();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit94 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
