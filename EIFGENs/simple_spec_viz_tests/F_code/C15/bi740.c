/*
 * Code for class BILINEAR [POINTER]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "bi740.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {BILINEAR}.off */
EIF_BOOLEAN F540_4905 (EIF_REFERENCE Current)
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
	
	RTEAA("off", 539, Current, 0, 0, 6129);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(nstcall = 0, F833_5529(Current))) {
		Result = (nstcall = 0, F833_5528(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {BILINEAR}.search */
void F540_4908 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("search", 539, Current, 0, 1, 6130);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((nstcall = 0, F833_5529(Current))) {
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, F672_4976(Current));
	}
	if (tb1) {
		RTHOOK(2);
		(nstcall = 0, F873_5818(Current));
	}
	RTHOOK(3);
	(nstcall = 0, F526_4891(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("object_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F526_4895(Current))) {
			tb2 = *(EIF_BOOLEAN *)(Current + O4373[dtype-488]);
		}
		if (tb2) {
			tb1 = (arg1 == (nstcall = 0, F873_5790(Current)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("item_found", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F526_4895(Current))) {
			tb2 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O4373[dtype-488]);
		}
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(arg1 == (nstcall = 0, F873_5790(Current)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {BILINEAR}._invariant */
void F540_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 739, Current, 0, 0);
	RTIT("not_both", Current);
	tb1 = '\0';
	if ((nstcall = 0, F833_5528(Current))) {
		tb1 = (nstcall = 0, F833_5529(Current));
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("before_constraint", Current);
	tb1 = '\01';
	if ((nstcall = 0, F833_5529(Current))) {
		tb1 = (nstcall = 0, F803_5504(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit740 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
