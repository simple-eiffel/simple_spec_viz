/*
 * Code for class DISPOSABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "di251.h"
#include "eif_memory.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F301_3868
static int inline_F301_3868 (void)
{
	return eif_is_in_final_collect;
	;
}
#define INLINE_F301_3868
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DISPOSABLE}.is_in_final_collect */
EIF_BOOLEAN F301_3868 (EIF_REFERENCE Current)
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
	
	RTEAA("is_in_final_collect", 300, Current, 0, 0, 3977);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F301_3868 ());
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit251 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
