/*
 * Code for class SED_READER_WRITER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se89.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_READER_WRITER}.read_header */
void F109_1497 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_header", 108, Current, 0, 0, 1546);
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
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.write_header */
void F109_1498 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_header", 108, Current, 0, 0, 1547);
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
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.read_footer */
void F109_1499 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_footer", 108, Current, 0, 0, 1548);
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
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.write_footer */
void F109_1500 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_footer", 108, Current, 0, 0, 1558);
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
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.is_pointer_value_stored */
EIF_BOOLEAN F109_1503 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
}


/* {SED_READER_WRITER}.set_is_pointer_value_stored */
void F109_1504 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_is_pointer_value_stored", 108, Current, 0, 1, 1560);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_pointer_value_stored_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) == arg1)) {
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

/* {SED_READER_WRITER}.read_character_8 */
EIF_CHARACTER_8 F109_1505 (EIF_REFERENCE Current)
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
	
	RTEAA("read_character_8", 108, Current, 0, 0, 1561);
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
	tc1 = (EIF_CHARACTER_8) tu1_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_READER_WRITER}.read_character_32 */
EIF_CHARACTER_32 F109_1506 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_character_32", 108, Current, 0, 0, 1562);
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
	tw1 = (EIF_CHARACTER_32) tu4_1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_READER_WRITER}.read_string_8 */
EIF_REFERENCE F109_1507 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("read_string_8", 108, Current, 2, 0, 1563);
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
	tu4_1 = (nstcall = 0, F109_1524(Current));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(Result), loc2));
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	loc2++;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(7);
		tc1 = (nstcall = 0, F109_1505(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
		RTHOOK(8);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("read_string_8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {SED_READER_WRITER}.read_immutable_string_8 */
EIF_REFERENCE F109_1508 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("read_immutable_string_8", 108, Current, 0, 0, 1564);
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
	Result = RTLNS(eif_new_type(1079, 0x01).id, 1079, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr1 = (nstcall = 0, F109_1507(Current));
	(nstcall = -1, F1079_7733(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("read_immutable_string_8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_READER_WRITER}.read_string_32 */
EIF_REFERENCE F109_1509 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	struct eif_ex_58 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(77, 0x00).id);
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("read_string_32", 108, Current, 1, 0, 1565);
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
	tr1 = (nstcall = 0, F109_1507(Current));
	tr1 = (nstcall = 1, F78_1214(RTCW(loc1), tr1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("read_string_8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_READER_WRITER}.read_immutable_string_32 */
EIF_REFERENCE F109_1510 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("read_immutable_string_32", 108, Current, 0, 0, 1566);
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
	Result = RTLNS(eif_new_type(1083, 0x01).id, 1083, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr1 = (nstcall = 0, F109_1509(Current));
	(nstcall = -1, F1083_7899(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("read_string_8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_READER_WRITER}.read_boolean */
EIF_BOOLEAN F109_1511 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_boolean", 108, Current, 0, 0, 1567);
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
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_READER_WRITER}.read_compressed_integer_32 */
EIF_INTEGER_32 F109_1523 (EIF_REFERENCE Current)
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
	
	RTEAA("read_compressed_integer_32", 108, Current, 0, 0, 1549);
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
	tu4_1 = (nstcall = 0, F109_1524(Current));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_READER_WRITER}.read_compressed_natural_32 */
EIF_NATURAL_32 F109_1524 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_compressed_natural_32", 108, Current, 1, 0, 1550);
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
	loc1 = (nstcall = 0, F110_1550(Current));
	RTHOOK(3);
	tu1_1 = eif_bit_and(loc1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 128L));
	if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tu4_1 = (EIF_NATURAL_32) loc1;
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(5);
		tu1_1 = eif_bit_and(loc1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 192L));
		if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
			RTHOOK(6);
			tu4_1 = (EIF_NATURAL_32) loc1;
			tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
			tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
			tu1_1 = (nstcall = 0, F110_1550(Current));
			tu4_2 = (EIF_NATURAL_32) tu1_1;
			tu4_3 = eif_bit_or(tu4_1,tu4_2);
			Result = (EIF_NATURAL_32) tu4_3;
		} else {
			RTHOOK(7);
			tu1_1 = eif_bit_and(loc1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 224L));
			if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L))) {
				RTHOOK(8);
				tu4_1 = (EIF_NATURAL_32) loc1;
				tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
				tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 16L));
				tu1_1 = (nstcall = 0, F110_1550(Current));
				tu4_2 = (EIF_NATURAL_32) tu1_1;
				tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 8L));
				tu4_2 = eif_bit_or(tu4_1,tu4_3);
				tu1_1 = (nstcall = 0, F110_1550(Current));
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				tu4_3 = eif_bit_or(tu4_2,tu4_1);
				Result = (EIF_NATURAL_32) tu4_3;
			} else {
				RTHOOK(9);
				tu1_1 = eif_bit_and(loc1,(EIF_NATURAL_8) ((EIF_INTEGER_32) 240L));
				if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L))) {
					RTHOOK(10);
					tu4_1 = (EIF_NATURAL_32) loc1;
					tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 15L));
					tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 24L));
					tu1_1 = (nstcall = 0, F110_1550(Current));
					tu4_2 = (EIF_NATURAL_32) tu1_1;
					tu4_3 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 16L));
					tu4_2 = eif_bit_or(tu4_1,tu4_3);
					tu1_1 = (nstcall = 0, F110_1550(Current));
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					tu4_3 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 8L));
					tu4_1 = eif_bit_or(tu4_2,tu4_3);
					tu1_1 = (nstcall = 0, F110_1550(Current));
					tu4_2 = (EIF_NATURAL_32) tu1_1;
					tu4_3 = eif_bit_or(tu4_1,tu4_2);
					Result = (EIF_NATURAL_32) tu4_3;
				} else {
					RTHOOK(11);
					Result = (nstcall = 0, F110_1552(Current));
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_READER_WRITER}.cleanup */
void F109_1525 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("cleanup", 108, Current, 0, 0, 1551);
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
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.write_character_8 */
void F109_1526 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_character_8", 108, Current, 0, 1, 1552);
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
	ti4_1 = (EIF_INTEGER_32) (arg1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	(nstcall = 0, F110_1561(Current, tu1_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.write_character_32 */
void F109_1527 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
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
	
	RTEAA("write_character_32", 108, Current, 0, 1, 1553);
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

/* {SED_READER_WRITER}.write_string_8 */
void F109_1528 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("write_string_8", 108, Current, 2, 1, 1554);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F265_3382(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	(nstcall = 0, F109_1544(Current, tu4_1));
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(7);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
		(nstcall = 0, F109_1526(Current, tc1));
		RTHOOK(8);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.write_string_32 */
void F109_1529 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	struct eif_ex_58 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(77, 0x00).id);
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("write_string_32", 108, Current, 1, 1, 1555);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F265_3382(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 1, F78_1200(RTCW(loc1), arg1));
	(nstcall = 0, F109_1528(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.write_immutable_string_8 */
void F109_1530 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("write_immutable_string_8", 108, Current, 0, 1, 1556);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F265_3382(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F109_1528(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.write_boolean */
void F109_1531 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_boolean", 108, Current, 0, 1, 1557);
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
	if (arg1) {
		RTHOOK(3);
		(nstcall = 0, F110_1561(Current, (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L)));
	} else {
		RTHOOK(4);
		(nstcall = 0, F110_1561(Current, (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.write_compressed_integer_32 */
void F109_1543 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("write_compressed_integer_32", 108, Current, 0, 1, 1568);
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
	(nstcall = 0, F109_1544(Current, tu4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_READER_WRITER}.write_compressed_natural_32 */
void F109_1544 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("write_compressed_natural_32", 108, Current, 0, 1, 1569);
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
	if ((EIF_BOOLEAN) (arg1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 16384L))) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (arg1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L))) {
			RTHOOK(4);
			tu1_1 = (EIF_NATURAL_8) arg1;
			(nstcall = 0, F110_1561(Current, tu1_1));
		} else {
			RTHOOK(5);
			tu4_1 = eif_bit_or(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 32768L));
			tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
			tu4_1 = eif_bit_shift_right(tu4_2,((EIF_INTEGER_32) 8L));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			(nstcall = 0, F110_1561(Current, tu1_1));
			RTHOOK(6);
			tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			(nstcall = 0, F110_1561(Current, tu1_1));
		}
	} else {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (arg1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2097152L))) {
			RTHOOK(8);
			tu4_1 = eif_bit_or(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 12582912L));
			tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 16711680L));
			tu4_1 = eif_bit_shift_right(tu4_2,((EIF_INTEGER_32) 16L));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			(nstcall = 0, F110_1561(Current, tu1_1));
			RTHOOK(9);
			tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
			tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 8L));
			tu1_1 = (EIF_NATURAL_8) tu4_2;
			(nstcall = 0, F110_1561(Current, tu1_1));
			RTHOOK(10);
			tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			(nstcall = 0, F110_1561(Current, tu1_1));
		} else {
			RTHOOK(11);
			if ((EIF_BOOLEAN) (arg1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 268435456L))) {
				RTHOOK(12);
				tu4_1 = eif_bit_or(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3758096384)));
				tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080)));
				tu4_1 = eif_bit_shift_right(tu4_2,((EIF_INTEGER_32) 24L));
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				(nstcall = 0, F110_1561(Current, tu1_1));
				RTHOOK(13);
				tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 16711680L));
				tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 16L));
				tu1_1 = (EIF_NATURAL_8) tu4_2;
				(nstcall = 0, F110_1561(Current, tu1_1));
				RTHOOK(14);
				tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L));
				tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 8L));
				tu1_1 = (EIF_NATURAL_8) tu4_2;
				(nstcall = 0, F110_1561(Current, tu1_1));
				RTHOOK(15);
				tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 255L));
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				(nstcall = 0, F110_1561(Current, tu1_1));
			} else {
				RTHOOK(16);
				(nstcall = 0, F110_1561(Current, (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L)));
				RTHOOK(17);
				(nstcall = 0, F110_1563(Current, arg1));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

void EIF_Minit89 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
