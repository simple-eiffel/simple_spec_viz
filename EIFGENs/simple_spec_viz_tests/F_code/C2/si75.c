/*
 * Code for class SIMPLE_ZCODEC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si75.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_ZCODEC}.encoded_character */
EIF_CHARACTER_8 F95_1386 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("encoded_character", 94, Current, 2, 1, 1451);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) arg1;
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L))) {
		RTHOOK(3);
		tc1 = (EIF_CHARACTER_8) loc1;
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(4);
		Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\032';
		RTHOOK(5);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 128L)) || (EIF_BOOLEAN)(Result != (EIF_CHARACTER_8) '\032'))) break;
			RTHOOK(7);
			tr1 = (nstcall = 0, F96_1391(Current));
			tw1 = (nstcall = 1, F903_6139(RTCW(tr1), loc2));
			if ((EIF_BOOLEAN)(tw1 == arg1)) {
				RTHOOK(8);
				tc1 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 128L));
				Result = (EIF_CHARACTER_8) tc1;
			}
			RTHOOK(9);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZCODEC}.can_encode */
EIF_BOOLEAN F95_1387 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("can_encode", 94, Current, 0, 1, 1452);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\01';
	tc1 = (nstcall = 0, F95_1386(Current, arg1));
	if (!(EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\032')) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\032';
		tb1 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZCODEC}.decoded_character */
EIF_CHARACTER_32 F95_1388 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("decoded_character", 94, Current, 1, 1, 1453);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (EIF_INTEGER_32) (arg1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 128L))) {
		RTHOOK(3);
		tw1 = (EIF_CHARACTER_32) arg1;
		Result = (EIF_CHARACTER_32) tw1;
	} else {
		RTHOOK(4);
		tr1 = (nstcall = 0, F96_1391(Current));
		tw1 = (nstcall = 1, F903_6139(RTCW(tr1), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 128L))));
		Result = (EIF_CHARACTER_32) tw1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_ZCODEC}._invariant */
void F95_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 74, Current, 0, 0);
	RTIT("unicode_table_exists", Current);
	tr1 = (nstcall = 0, F96_1391(Current));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("unicode_table_correct_size", Current);
	tr1 = (nstcall = 0, F96_1391(Current));
	ti4_1 = (nstcall = 1, F903_6149(tr1));
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 128L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit75 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
