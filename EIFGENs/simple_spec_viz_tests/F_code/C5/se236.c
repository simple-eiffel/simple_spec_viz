/*
 * Code for class SED_MEDIUM_READER_WRITER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se236.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_MEDIUM_READER_WRITER}.make */
void F265_3373 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make", 264, Current, 0, 1, 3366);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_medium_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_medium_support_storable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3721[Dtype(RTCW(arg1))-310])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F265_3376(Current, arg1, ((EIF_INTEGER_32) 262144L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("medium_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("buffer_size_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) == ((EIF_INTEGER_32) 262144L))) {
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

/* {SED_MEDIUM_READER_WRITER}.make_for_reading */
void F265_3374 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_for_reading", 264, Current, 0, 1, 3367);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_medium_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_medium_open_for_reading", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3713[Dtype(RTCW(arg1))-310])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_medium_support_storable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3721[Dtype(RTCW(arg1))-310])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F265_3373(Current, arg1));
	RTHOOK(5);
	(nstcall = 0, F110_1548(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("medium_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("buffer_size_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) == ((EIF_INTEGER_32) 262144L))) {
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

/* {SED_MEDIUM_READER_WRITER}.make_for_writing */
void F265_3375 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_for_writing", 264, Current, 0, 1, 3368);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_medium_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_medium_open_for_writing", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3714[Dtype(RTCW(arg1))-310])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_medium_support_storable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3721[Dtype(RTCW(arg1))-310])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(nstcall = 0, F265_3373(Current, arg1));
	RTHOOK(5);
	(nstcall = 0, F110_1549(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("medium_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("buffer_size_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) == ((EIF_INTEGER_32) 262144L))) {
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

/* {SED_MEDIUM_READER_WRITER}.make_with_buffer */
void F265_3376 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_with_buffer", 264, Current, 0, 2, 3369);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_medium_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_buffer_size_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_medium_support_storable", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3721[Dtype(RTCW(arg1))-310])(arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	tr1 = RTLNSMART(eif_new_type(302, 1).id);
	(nstcall = -1, F303_3908(RTCW(tr1), arg2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("medium_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("buffer_size_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("buffer_size_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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

/* {SED_MEDIUM_READER_WRITER}.read_header */
void F265_3377 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_header", 264, Current, 0, 0, 3370);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F265_3381(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F265_3392(Current));
	RTHOOK(3);
	tb1 = (nstcall = 0, F109_1511(Current));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) tb1;
	RTHOOK(4);
	tb1 = (nstcall = 0, F109_1511(Current));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) tb1;
	RTHOOK(5);
	ti4_1 = (nstcall = 0, F110_1556(Current));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_MEDIUM_READER_WRITER}.write_header */
void F265_3378 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_header", 264, Current, 0, 0, 3371);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F265_3382(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) = (EIF_INTEGER_32) ti4_1;
	
	RTHOOK(3);
	tb1 = RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_) = (EIF_BOOLEAN) tb1;
	RTHOOK(4);
	(nstcall = 0, F265_3379(Current));
	RTHOOK(5);
	(nstcall = 0, F109_1531(Current, *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)));
	RTHOOK(6);
	(nstcall = 0, F109_1531(Current, *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)));
	RTHOOK(7);
	ti4_1 = (nstcall = 0, F263_3327(Current));
	(nstcall = 0, F110_1567(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_MEDIUM_READER_WRITER}.write_chunk_header */
void F265_3379 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_chunk_header", 264, Current, 0, 0, 3350);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F303_3993(RTCW(tr1), ((EIF_INTEGER_32) -1L), ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)) += ((EIF_INTEGER_32) 4L);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F303_3989(RTCW(tr1), ((EIF_NATURAL_32) 1U), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)));
	RTHOOK(5);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)) += ((EIF_INTEGER_32) 4L);
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)) += ((EIF_INTEGER_32) 4L);
	RTHOOK(7);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)) += (nstcall = 0, F263_3314(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_MEDIUM_READER_WRITER}.write_footer */
void F265_3380 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_footer", 264, Current, 0, 0, 3351);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F265_3382(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F265_3393(Current, (EIF_BOOLEAN) 1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_MEDIUM_READER_WRITER}.is_ready_for_reading */
EIF_BOOLEAN F265_3381 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_ready_for_reading", 264, Current, 0, 0, 3352);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3712[Dtype(RTCW(tr1))-310])(tr1));
		tb3 = tb4;
	}
	if (tb3) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3713[Dtype(RTCW(tr1))-310])(tr1));
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3721[Dtype(RTCW(tr1))-310])(tr1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[Dtype(RTCW(tr1))-310])(tr1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_MEDIUM_READER_WRITER}.is_ready_for_writing */
EIF_BOOLEAN F265_3382 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_ready_for_writing", 264, Current, 0, 0, 3353);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3712[Dtype(RTCW(tr1))-310])(tr1));
		tb2 = tb3;
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3714[Dtype(RTCW(tr1))-310])(tr1));
		tb1 = tb2;
	}
	if (tb1) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3721[Dtype(RTCW(tr1))-310])(tr1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_MEDIUM_READER_WRITER}.is_last_chunk */
EIF_BOOLEAN F265_3383 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_);
}


/* {SED_MEDIUM_READER_WRITER}.cleanup */
void F265_3384 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cleanup", 264, Current, 0, 0, 3355);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F265_3381(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	for (;;) {
		RTHOOK(2);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_)) break;
		RTHOOK(3);
		(nstcall = 0, F265_3392(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SED_MEDIUM_READER_WRITER}.medium */
EIF_REFERENCE F265_3386 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SED_MEDIUM_READER_WRITER}.version_position */
EIF_INTEGER_32 F265_3387 (EIF_REFERENCE Current)
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
	
	RTEAA("version_position", 264, Current, 0, 0, 3358);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F265_3388(Current, (EIF_BOOLEAN) 0));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_MEDIUM_READER_WRITER}.size_position */
EIF_INTEGER_32 F265_3388 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("size_position", 264, Current, 0, 1, 3359);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		Result = (nstcall = 0, F265_3387(Current));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 4L));
	} else {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_MEDIUM_READER_WRITER}.new_chunk_position */
EIF_INTEGER_32 F265_3389 (EIF_REFERENCE Current)
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
	
	RTEAA("new_chunk_position", 264, Current, 0, 0, 3360);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F265_3388(Current, (EIF_BOOLEAN) 1));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_MEDIUM_READER_WRITER}.chunk_header_size */
EIF_INTEGER_32 F265_3390 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("chunk_header_size", 264, Current, 0, 1, 3361);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		ti4_1 = (nstcall = 0, F263_3314(Current));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 4L)) + ((EIF_INTEGER_32) 4L)) + ti4_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_MEDIUM_READER_WRITER}.check_buffer */
void F265_3391 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("check_buffer", 264, Current, 0, 1, 3362);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_))) {
		RTHOOK(3);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
			RTHOOK(4);
			(nstcall = 0, F265_3392(Current));
		} else {
			RTHOOK(5);
			(nstcall = 0, F265_3393(Current, (EIF_BOOLEAN) 0));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_MEDIUM_READER_WRITER}.read_buffer_from_medium */
void F265_3392 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("read_buffer_from_medium", 264, Current, 3, 0, 3363);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F265_3381(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3774[Dtype(RTCW(tr1))-310])(tr1, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3711[Dtype(tr1)-306]);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, F303_3983(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) == ((EIF_INTEGER_32) -1L))) {
			RTHOOK(7);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 0, F265_3387(Current));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3774[Dtype(RTCW(tr1))-310])(tr1, tr2, ti4_1, ((EIF_INTEGER_32) 4L)));
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 0, F265_3387(Current));
			tu4_1 = (nstcall = 1, F303_3979(RTCW(tr1), ti4_1));
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc1 == ((EIF_NATURAL_32) 1U))) {
				RTHOOK(11);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 0, F265_3388(Current, (EIF_BOOLEAN) 1));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3774[Dtype(RTCW(tr1))-310])(tr1, tr2, ti4_1, ((EIF_INTEGER_32) 4L)));
				RTHOOK(12);
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 0, F265_3388(Current, (EIF_BOOLEAN) 1));
				ti4_1 = (nstcall = 1, F303_3983(RTCW(tr1), ti4_1));
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) = (EIF_INTEGER_32) ti4_1;
				RTHOOK(13);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 0, F265_3389(Current));
				ti4_2 = (nstcall = 0, F263_3314(Current));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3774[Dtype(RTCW(tr1))-310])(tr1, tr2, ti4_1, ti4_2));
				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 0, F265_3389(Current));
				tb1 = (nstcall = 1, F303_3928(RTCW(tr1), ti4_1));
				*(EIF_BOOLEAN *)(Current+ _CHROFF_2_3_) = (EIF_BOOLEAN) tb1;
			}
		} else {
			RTHOOK(15);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
		RTHOOK(16);
		ti4_1 = (nstcall = 0, F265_3390(Current, loc2));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(17);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) > ti4_1)) {
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F303_3998(RTCW(tr1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_)));
		}
		RTHOOK(19);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) > ((EIF_INTEGER_32) 4L))) {
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3774[Dtype(RTCW(tr1))-310])(tr1, *(EIF_REFERENCE *)(Current), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_))));
			RTHOOK(21);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1) + O3711[Dtype(tr1)-306]);
			if ((EIF_BOOLEAN)(ti4_1 != (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)))) {
				RTHOOK(22);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				RTHOOK(23);
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) = (EIF_INTEGER_32) ti4_1;
				RTHOOK(24);
				loc3 = RTLNS(eif_new_type(200, 0x01).id, 200, _OBJSIZ_5_1_0_1_0_0_0_0_);
				RTHOOK(25);
				tr1 = RTMS_EX_H("Read less than expected number of bytes in buffer.",50,195804974);
				(nstcall = 1, F178_2382(RTCW(loc3), tr1));
				RTHOOK(26);
				(nstcall = 1, F178_2367(RTCW(loc3)));
			}
		} else {
			RTHOOK(27);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(28);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(29);
			loc3 = RTLNS(eif_new_type(200, 0x01).id, 200, _OBJSIZ_5_1_0_1_0_0_0_0_);
			RTHOOK(30);
			tr1 = RTMS_EX_H("Read less than 4 bytes in buffer\'s header.",42,836470062);
			(nstcall = 1, F178_2382(RTCW(loc3), tr1));
			RTHOOK(31);
			(nstcall = 1, F178_2367(RTCW(loc3)));
		}
	} else {
		RTHOOK(32);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(33);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_0_1_0_0_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(34);
		loc3 = RTLNS(eif_new_type(200, 0x01).id, 200, _OBJSIZ_5_1_0_1_0_0_0_0_);
		RTHOOK(35);
		tr1 = RTMS_EX_H("Cannot read buffer size from header.",36,803385390);
		(nstcall = 1, F178_2382(RTCW(loc3), tr1));
		RTHOOK(36);
		(nstcall = 1, F178_2367(RTCW(loc3)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTLE;
	RTEE;
}

/* {SED_MEDIUM_READER_WRITER}.flush_buffer_to_medium */
void F265_3393 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("flush_buffer_to_medium", 264, Current, 0, 1, 3364);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F265_3382(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	ti4_2 = (nstcall = 0, F265_3388(Current, (EIF_BOOLEAN) 1));
	(nstcall = 1, F303_3993(RTCW(tr1), ti4_1, ti4_2));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 0, F265_3389(Current));
	(nstcall = 1, F303_3948(RTCW(tr1), arg1, ti4_1));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R3748[Dtype(RTCW(tr1))-310])(tr1, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_)));
	RTHOOK(5);
	(nstcall = 0, F265_3379(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_MEDIUM_READER_WRITER}._invariant */
void F265_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 235, Current, 0, 0);
	RTIT("medium_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit236 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
