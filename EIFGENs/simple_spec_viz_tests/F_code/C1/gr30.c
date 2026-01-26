/*
 * Code for class GRAPHVIZ_RESULT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "gr30.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GRAPHVIZ_RESULT}.make_success */
void F33_584 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("make_success", 32, Current, 1, 1, 597);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("content_not_void", EX_PRE);
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
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_success", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("content_set", EX_POST);
		tb1 = '\01';
		tr1 = *(EIF_REFERENCE *)(Current);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(loc1)-1079])(loc1, arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("no_error", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_RESULT}.make_failure */
void F33_585 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_failure", 32, Current, 0, 1, 598);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("error_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_failure", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("no_content", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("error_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_RESULT}.is_success */
EIF_BOOLEAN F33_586 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
}


/* {GRAPHVIZ_RESULT}.content */
EIF_REFERENCE F33_587 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {GRAPHVIZ_RESULT}.error */
EIF_REFERENCE F33_588 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {GRAPHVIZ_RESULT}.is_failure */
EIF_BOOLEAN F33_589 (EIF_REFERENCE Current)
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
	
	RTEAA("is_failure", 32, Current, 0, 0, 594);
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

/* {GRAPHVIZ_RESULT}.save_to_file */
EIF_BOOLEAN F33_590 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("save_to_file", 32, Current, 2, 1, 595);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_success", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(5);
		tr1 = RTLNS(eif_new_type(744, 0x01).id, 744, _OBJSIZ_5_7_2_4_1_1_2_1_);
		(nstcall = -1, F743_5010(RTCW(tr1), arg1));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		tb1 = (nstcall = 1, F743_5068(RTCW(loc1)));
		if (tb1) {
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3725[Dtype(RTCW(loc1))-310])(loc1, loc2));
			RTHOOK(8);
			(nstcall = 1, F743_5094(RTCW(loc1)));
			RTHOOK(9);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {GRAPHVIZ_RESULT}._invariant */
void F33_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 29, Current, 0, 0);
	RTIT("success_xor_error", Current);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if (((tb1) != ((EIF_BOOLEAN)(tr1 != NULL)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("success_has_content", Current);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((!(tb1) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit30 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
