/*
 * Code for class UC_UNICODE_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc107.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {UC_UNICODE_CONSTANTS}.bom_character */
static EIF_CHARACTER_32 F133_1797_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_CHARACTER_32)
	RTOUDB(EIF_CHARACTER_32, 470)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("bom_character", 132, Current, 0, 0, 1827);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 65279L);
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_CHARACTER_32 F133_1797 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_CHARACTER_32,470,F133_1797_body,(Current));
}

void EIF_Minit107 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
