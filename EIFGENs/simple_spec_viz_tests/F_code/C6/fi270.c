/*
 * Code for class FILE_ITERATION_CURSOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi270.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE_ITERATION_CURSOR}.make_empty */
void F337_4565 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_empty", 336, Current, 0, 0, 4596);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("after", EX_POST);
		if ((nstcall = 0, F337_4570(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {FILE_ITERATION_CURSOR}.make_open_read */
void F337_4566 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("make_open_read", 336, Current, 0, 1, 4597);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, F743_5165(Current, tp1, ((EIF_INTEGER_32) 0L)));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTHOOK(2);
	(nstcall = 0, F337_4571(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE_ITERATION_CURSOR}.make_open_stdin */
void F337_4567 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_open_stdin", 336, Current, 0, 0, 4598);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, F1099_8303(Current, ((EIF_INTEGER_32) 0L)));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	RTHOOK(2);
	(nstcall = 0, F337_4571(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE_ITERATION_CURSOR}.character */
EIF_CHARACTER_8 F337_4568 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character", 336, Current, 0, 0, 4599);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F337_4570(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tc1 = (EIF_CHARACTER_8) tu1_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_ITERATION_CURSOR}.byte */
EIF_NATURAL_8 F337_4569 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
}


/* {FILE_ITERATION_CURSOR}.after */
EIF_BOOLEAN F337_4570 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("after", 336, Current, 0, 0, 4601);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	tp2 = (nstcall = 0, F1_33(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 == tp2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_ITERATION_CURSOR}.forth */
void F337_4571 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("forth", 336, Current, 0, 0, 4602);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F337_4570(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
	if ((EIF_BOOLEAN)((nstcall = 0, F744_5276(Current, (EIF_NATURAL_8 *) &(*(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_)), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L), tp1)) != ((EIF_INTEGER_32) 1L))) {
		RTHOOK(3);
		(nstcall = 0, F337_4572(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {FILE_ITERATION_CURSOR}.close */
void F337_4572 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("close", 336, Current, 0, 0, 4603);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
		(nstcall = 0, F743_5166(Current, tp1));
		RTHOOK(3);
		tp1 = (nstcall = 0, F1_33(Current));
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_) = (EIF_POINTER) tp1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {FILE_ITERATION_CURSOR}.file_pointer */
EIF_POINTER F337_4573 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_0_0_0_);
}


/* {FILE_ITERATION_CURSOR}._invariant */
void F337_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_CHARACTER_8 tc1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 269, Current, 0, 0);
	RTIT("consistent_item", Current);
	tu1_1 = *(EIF_NATURAL_8 *)(Current+ _CHROFF_0_0_);
	tc1 = (EIF_CHARACTER_8) tu1_1;
	if ((EIF_BOOLEAN)(tc1 == (nstcall = 0, F337_4568(Current)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit270 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
