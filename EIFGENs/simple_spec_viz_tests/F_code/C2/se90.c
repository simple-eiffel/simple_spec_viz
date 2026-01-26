/*
 * Code for class SED_BINARY_READER_WRITER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se90.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_BINARY_READER_WRITER}.is_ready_for_reading */
EIF_BOOLEAN F110_1545 (EIF_REFERENCE Current)
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
	
	RTEAA("is_ready_for_reading", 109, Current, 0, 0, 1588);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.is_ready_for_writing */
EIF_BOOLEAN F110_1546 (EIF_REFERENCE Current)
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
	
	RTEAA("is_ready_for_writing", 109, Current, 0, 0, 1589);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.is_for_reading */
EIF_BOOLEAN F110_1547 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {SED_BINARY_READER_WRITER}.set_for_reading */
void F110_1548 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_for_reading", 109, Current, 0, 0, 1591);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_for_reading", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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
}

/* {SED_BINARY_READER_WRITER}.set_for_writing */
void F110_1549 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_for_writing", 109, Current, 0, 0, 1592);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_for_writing", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
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
}

/* {SED_BINARY_READER_WRITER}.read_natural_8 */
EIF_NATURAL_8 F110_1550 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_8", 109, Current, 1, 0, 1593);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu1_1 = (nstcall = 1, F303_3919(RTCW(tr1), loc1));
	Result = (EIF_NATURAL_8) tu1_1;
	RTHOOK(5);
	loc1 += ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_natural_16 */
EIF_NATURAL_16 F110_1551 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_16", 109, Current, 1, 0, 1594);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 2L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu2_1 = (nstcall = 1, F303_3958(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_16) tu2_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu2_1 = (nstcall = 1, F303_3978(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_16) tu2_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 2L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_natural_32 */
EIF_NATURAL_32 F110_1552 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_32", 109, Current, 1, 0, 1595);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = (nstcall = 1, F303_3959(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = (nstcall = 1, F303_3979(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_32) tu4_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 4L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_natural_64 */
EIF_NATURAL_64 F110_1553 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_64", 109, Current, 1, 0, 1596);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu8_1 = (nstcall = 1, F303_3960(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_64) tu8_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu8_1 = (nstcall = 1, F303_3980(RTCW(tr1), loc1));
		Result = (EIF_NATURAL_64) tu8_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 8L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_integer_8 */
EIF_INTEGER_8 F110_1554 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_8", 109, Current, 0, 0, 1597);
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
	tu1_1 = (nstcall = 0, F110_1550(Current));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_integer_16 */
EIF_INTEGER_16 F110_1555 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_16", 109, Current, 0, 0, 1598);
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
	tu2_1 = (nstcall = 0, F110_1551(Current));
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_integer_32 */
EIF_INTEGER_32 F110_1556 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_32", 109, Current, 0, 0, 1599);
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
	tu4_1 = (nstcall = 0, F110_1552(Current));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_integer_64 */
EIF_INTEGER_64 F110_1557 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_64", 109, Current, 0, 0, 1600);
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
	tu8_1 = (nstcall = 0, F110_1553(Current));
	ti8_1 = (EIF_INTEGER_64) tu8_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_real_32 */
EIF_REAL_32 F110_1558 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_real_32", 109, Current, 1, 0, 1601);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr4_1 = (nstcall = 1, F303_3965(RTCW(tr1), loc1));
		Result = (EIF_REAL_32) tr4_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr4_1 = (nstcall = 1, F303_3985(RTCW(tr1), loc1));
		Result = (EIF_REAL_32) tr4_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 4L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_real_64 */
EIF_REAL_64 F110_1559 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_real_64", 109, Current, 1, 0, 1602);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr8_1 = (nstcall = 1, F303_3966(RTCW(tr1), loc1));
		Result = (EIF_REAL_64) tr8_1;
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr8_1 = (nstcall = 1, F303_3986(RTCW(tr1), loc1));
		Result = (EIF_REAL_64) tr8_1;
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 8L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.read_pointer */
EIF_POINTER F110_1560 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_POINTER tp1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_pointer", 109, Current, 2, 0, 1603);
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
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTHOOK(3);
		(nstcall = 0, F265_3391(Current, *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_)));
		RTHOOK(4);
		if ((EIF_BOOLEAN)((nstcall = 0, F263_3327(Current)) == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_))) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)((nstcall = 0, F263_3327(Current)) == ((EIF_INTEGER_32) 4L))) {
				RTHOOK(6);
				loc1 = (nstcall = 0, F110_1552(Current));
				RTHOOK(7);
				memcpy((void *)(EIF_POINTER *) &(Result), (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
			} else {
				RTHOOK(8);
				if ((EIF_BOOLEAN)((nstcall = 0, F263_3327(Current)) == ((EIF_INTEGER_32) 8L))) {
					RTHOOK(9);
					loc2 = (nstcall = 0, F110_1553(Current));
					RTHOOK(10);
					memcpy((void *)(EIF_POINTER *) &(Result), (const void *) (EIF_NATURAL_64 *) &(loc2), (size_t) ((EIF_INTEGER_32) 8L));
				} else {
					
				}
			}
		} else {
			RTHOOK(11);
			if ((EIF_BOOLEAN) ((nstcall = 0, F263_3327(Current)) > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_))) {
				
				RTHOOK(12);
				loc1 = (nstcall = 0, F110_1552(Current));
				RTHOOK(13);
				tp1 = RTPOF((EIF_POINTER *) &(Result),((EIF_INTEGER_32) 4L));
				memcpy((void *)tp1, (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
			} else {
				
				RTHOOK(14);
				tu8_1 = (nstcall = 0, F110_1553(Current));
				tu4_1 = (EIF_NATURAL_32) tu8_1;
				loc1 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(15);
				memcpy((void *)(EIF_POINTER *) &(Result), (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_BINARY_READER_WRITER}.write_natural_8 */
void F110_1561 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_natural_8", 109, Current, 1, 1, 1604);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F303_3939(RTCW(tr1), arg1, loc1));
	RTHOOK(5);
	loc1 += ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_natural_16 */
void F110_1562 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_natural_16", 109, Current, 1, 1, 1570);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 2L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3968(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3988(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 2L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_natural_32 */
void F110_1563 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_natural_32", 109, Current, 1, 1, 1571);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3969(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3989(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 4L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_natural_64 */
void F110_1564 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_natural_64", 109, Current, 1, 1, 1572);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3970(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3990(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 8L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_integer_8 */
void F110_1565 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_integer_8", 109, Current, 0, 1, 1573);
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
	tu1_1 = (EIF_NATURAL_8) arg1;
	(nstcall = 0, F110_1561(Current, tu1_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_integer_16 */
void F110_1566 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_integer_16", 109, Current, 0, 1, 1574);
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
	tu2_1 = (EIF_NATURAL_16) arg1;
	(nstcall = 0, F110_1562(Current, tu2_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_integer_32 */
void F110_1567 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_integer_32", 109, Current, 0, 1, 1575);
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
	tu4_1 = (EIF_NATURAL_32) arg1;
	(nstcall = 0, F110_1563(Current, tu4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_integer_64 */
void F110_1568 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_integer_64", 109, Current, 0, 1, 1576);
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
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F110_1564(Current, tu8_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_real_32 */
void F110_1569 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_real_32", 109, Current, 1, 1, 1577);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 4L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3975(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3995(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 4L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_real_64 */
void F110_1570 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_real_64", 109, Current, 1, 1, 1578);
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
	(nstcall = 0, F265_3391(Current, ((EIF_INTEGER_32) 8L)));
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
	RTHOOK(4);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_)) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3976(RTCW(tr1), arg1, loc1));
	} else {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F303_3996(RTCW(tr1), arg1, loc1));
	}
	RTHOOK(7);
	loc1 += ((EIF_INTEGER_32) 8L);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.write_pointer */
void F110_1571 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_pointer", 109, Current, 2, 1, 1579);
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
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)((nstcall = 0, F263_3327(Current)) == ((EIF_INTEGER_32) 4L))) {
			RTHOOK(4);
			memcpy((void *)(EIF_NATURAL_32 *) &(loc1), (const void *) (EIF_POINTER *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
			RTHOOK(5);
			(nstcall = 0, F110_1563(Current, loc1));
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN)((nstcall = 0, F263_3327(Current)) == ((EIF_INTEGER_32) 8L))) {
				RTHOOK(7);
				memcpy((void *)(EIF_NATURAL_64 *) &(loc2), (const void *) (EIF_POINTER *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
				RTHOOK(8);
				(nstcall = 0, F110_1564(Current, loc2));
			} else {
				
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_BINARY_READER_WRITER}.buffer */
EIF_REFERENCE F110_1572 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SED_BINARY_READER_WRITER}.medium */
EIF_REFERENCE F110_1573 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SED_BINARY_READER_WRITER}.buffer_size */
EIF_INTEGER_32 F110_1574 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_);
}


/* {SED_BINARY_READER_WRITER}.buffer_position */
EIF_INTEGER_32 F110_1575 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_);
}


/* {SED_BINARY_READER_WRITER}.is_little_endian_storable */
EIF_BOOLEAN F110_1577 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_2_);
}


/* {SED_BINARY_READER_WRITER}.stored_pointer_bytes */
EIF_INTEGER_32 F110_1578 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_);
}


/* {SED_BINARY_READER_WRITER}._invariant */
void F110_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 89, Current, 0, 0);
	RTIT("buffer_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("buffer_size_non_negative", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_0_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("buffer_position_non_negative", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_1_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("stored_pointer_bytes_non_negative", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_4_0_2_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit90 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
