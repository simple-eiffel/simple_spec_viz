/*
 * Code for class EQA_PARTIAL_RESULT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq294.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_PARTIAL_RESULT}.make */
void F883_5863 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,Current);
	RTLR(3,arg1);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("make", 882, Current, 0, 3, 9789);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_setup_response_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_output_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	RTHOOK(5);
	tr1 = RTLNSMART(eif_new_type(1079, 1).id);
	(nstcall = -1, F1079_7733(RTCW(tr1), arg3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTLNSMART(eif_new_type(1120, 1).id);
	(nstcall = -1, F1121_8753(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("start_date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("setup_response_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("output_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb1 = (nstcall = 1, F1079_7759(RTCW(tr1), arg3));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {EQA_PARTIAL_RESULT}.start_date */
EIF_REFERENCE F883_5864 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {EQA_PARTIAL_RESULT}.finish_date */
EIF_REFERENCE F883_5865 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EQA_PARTIAL_RESULT}.duration */
EIF_REFERENCE F883_5866 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("duration", 882, Current, 0, 0, 9792);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F1121_8775(RTCW(tr1), *(EIF_REFERENCE *)(Current)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EQA_PARTIAL_RESULT}.setup_response */
EIF_REFERENCE F883_5867 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EQA_PARTIAL_RESULT}.output */
EIF_REFERENCE F883_5868 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {EQA_PARTIAL_RESULT}.tag */
EIF_REFERENCE F883_5869 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("tag", 882, Current, 1, 0, 9795);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F41_781(RTCW(tr1)));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_2_);
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		Result = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1076_7601(RTCW(Result)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_PARTIAL_RESULT}.is_pass */
EIF_BOOLEAN F883_5870 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_pass", 882, Current, 0, 0, 9796);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_BOOLEAN) 0;
}

/* {EQA_PARTIAL_RESULT}.is_fail */
EIF_BOOLEAN F883_5871 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_fail", 882, Current, 0, 0, 9797);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_BOOLEAN) 0;
}

/* {EQA_PARTIAL_RESULT}.is_unresolved */
EIF_BOOLEAN F883_5872 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_unresolved", 882, Current, 0, 0, 9798);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4922[dtype-882])(Current))) {
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4923[dtype-882])(Current));
	}
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4922[dtype-882])(Current))) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4923[dtype-882])(Current));
		}
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

/* {EQA_PARTIAL_RESULT}.is_maintenance_required */
EIF_BOOLEAN F883_5873 (EIF_REFERENCE Current)
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
	
	RTEAA("is_maintenance_required", 882, Current, 0, 0, 9799);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("unresolved_implies_result", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F883_5872(Current))) {
			tb1 = Result;
		}
		if (tb1) {
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

/* {EQA_PARTIAL_RESULT}.correct_mismatch */
void F883_5874 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("correct_mismatch", 882, Current, 1, 0, 9800);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(12,(nstcall = 0, F864_5720), (Current));
	tr2 = RTOUCR(43,(nstcall = 0, F883_5875), (Current));
	tr2 = (nstcall = 1, F886_5908(RTCW(tr1), tr2));
	loc1 = RTCCL(tr2);
	loc1 = RTRV(eif_new_type(1079, 1),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = RTLNSMART(eif_new_type(1079, 1).id);
		(nstcall = -1, F1079_7733(RTCW(tr1), loc1));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		(nstcall = 0, F864_5719(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {EQA_PARTIAL_RESULT}.output_name */

EIF_REFERENCE F883_5875 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (43,RTMS_EX_H("output",6,25180788));
}

/* {EQA_PARTIAL_RESULT}._invariant */
void F883_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 293, Current, 0, 0);
	RTIT("pass_or_fail_or_unresolved", Current);
	tb1 = '\01';
	tb2 = '\01';
	if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4922[dtype-882])(Current))) {
		tb2 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4923[dtype-882])(Current));
	}
	if (!tb2) {
		tb1 = (nstcall = 0, F883_5872(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit294 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
