/*
 * Code for class SIMPLE_JSON_PATCH_RESULT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si18.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_PATCH_RESULT}.make_success */
void F21_401 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_success", 20, Current, 0, 1, 413);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("document_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(1084, 1).id);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("success", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("document_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_PATCH_RESULT}.make_failure */
void F21_402 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_failure", 20, Current, 0, 1, 414);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("error_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("error_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("failure", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("error_set", EX_POST);
		tr1 = (nstcall = 0, F21_406(Current));
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_PATCH_RESULT}.is_success */
EIF_BOOLEAN F21_403 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
}


/* {SIMPLE_JSON_PATCH_RESULT}.is_failure */
EIF_BOOLEAN F21_404 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_failure", 20, Current, 0, 0, 407);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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

/* {SIMPLE_JSON_PATCH_RESULT}.modified_document */
EIF_REFERENCE F21_405 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SIMPLE_JSON_PATCH_RESULT}.error_message */
static EIF_REFERENCE F21_406_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("error_message", 20, Current, 0, 0, 409);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

EIF_REFERENCE F21_406 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F21_406_body (Current));
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


/* {SIMPLE_JSON_PATCH_RESULT}.has_document */
EIF_BOOLEAN F21_407 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_document", 20, Current, 0, 0, 410);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(tr1 != NULL))) {
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

/* {SIMPLE_JSON_PATCH_RESULT}.has_error */
EIF_BOOLEAN F21_408 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("has_error", 20, Current, 0, 0, 411);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F21_406(Current));
	tb1 = (nstcall = 1, F667_4976(RTCW(tr1)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 0, F21_406(Current));
		tb1 = (nstcall = 1, F667_4976(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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

/* {SIMPLE_JSON_PATCH_RESULT}._invariant */
void F21_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 17, Current, 0, 0);
	RTIT("error_message_attached", Current);
	tr1 = (nstcall = 0, F21_406(Current));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("is_failure_definition", Current);
	tb1 = (nstcall = 0, F21_404(Current));
	tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) !tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("success_has_document", Current);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((!(tb1) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("success_has_empty_error", Current);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
	if (tb2) {
		tr1 = (nstcall = 0, F21_406(Current));
		tb2 = (nstcall = 1, F667_4976(RTCW(tr1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("failure_has_error", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F21_404(Current));
	if (tb2) {
		tb2 = (nstcall = 0, F21_408(Current));
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("failure_has_non_empty_error", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F21_404(Current));
	if (tb2) {
		tr1 = (nstcall = 0, F21_406(Current));
		tb2 = (nstcall = 1, F667_4976(RTCW(tr1)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("has_error_definition", Current);
	tb1 = (nstcall = 0, F21_408(Current));
	tr1 = (nstcall = 0, F21_406(Current));
	tb2 = (nstcall = 1, F667_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) !tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("has_document_definition", Current);
	tb1 = (nstcall = 0, F21_407(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN)(tr1 != NULL))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit18 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
