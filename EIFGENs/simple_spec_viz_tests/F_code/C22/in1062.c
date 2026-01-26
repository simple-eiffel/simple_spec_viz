/*
 * Code for class INFINITE [INTEGER_32]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "in1062.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {INFINITE}.is_empty */
EIF_BOOLEAN F661_4943 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {INFINITE}.full */
EIF_BOOLEAN F661_4944 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {INFINITE}._invariant */
void F661_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 1061, Current, 0, 0);
	RTLE;
	RTEE;
}

void EIF_Minit1062 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
