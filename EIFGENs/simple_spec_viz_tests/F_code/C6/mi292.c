/*
 * Code for class MISMATCH_CORRECTOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "mi292.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MISMATCH_CORRECTOR}.correct_mismatch */
void F864_5719 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("correct_mismatch", 863, Current, 2, 0, 8712);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = RTMS_EX_H("Mismatch: ",10,1538098208);
	(nstcall = -1, F1085_7973(RTCW(loc1), tr1));
	RTHOOK(2);
	loc2 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_0_0_0_0_0_0_0_0_);
	RTHOOK(3);
	tr1 = (nstcall = 0, F1_5(Current));
	tr2 = (nstcall = 1, F966_6338(RTCW(tr1)));
	(nstcall = 1, F1085_8012(RTCW(loc1), tr2));
	RTHOOK(4);
	(nstcall = 1, F222_2630(RTCW(loc2), loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {MISMATCH_CORRECTOR}.mismatch_information */
static EIF_REFERENCE F864_5720_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(12)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("mismatch_information", 863, Current, 0, 0, 8713);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(891, 0x01).id, 891, _OBJSIZ_9_3_0_7_0_0_0_0_);
	(nstcall = -1, F892_6019(RTCW(tr1)));
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

EIF_REFERENCE F864_5720 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(12,F864_5720_body,(Current));
}

void EIF_Minit292 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
