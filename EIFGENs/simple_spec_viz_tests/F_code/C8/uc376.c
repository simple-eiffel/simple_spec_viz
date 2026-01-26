/*
 * Code for class UC_V510_CTYPE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc376.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {UC_V510_CTYPE}.valid_code */
EIF_BOOLEAN F1103_8399 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("valid_code", 1102, Current, 0, 1, 15325);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1114111L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1114111L))))) {
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

/* {UC_V510_CTYPE}.valid_natural_32_code */
EIF_BOOLEAN F1103_8400 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("valid_natural_32_code", 1102, Current, 0, 1, 15326);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_NATURAL_32) 0U)) && (EIF_BOOLEAN) (arg1 <= ((EIF_NATURAL_32) 1114111U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_NATURAL_32) 0U)) && (EIF_BOOLEAN) (arg1 <= ((EIF_NATURAL_32) 1114111U))))) {
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

/* {UC_V510_CTYPE}.lower_code */
EIF_INTEGER_32 F1103_8401 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("lower_code", 1102, Current, 4, 1, 15322);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		RTTE((nstcall = 0, F1103_8399(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 65536L));
	RTHOOK(3);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 65536L));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 256L));
	RTHOOK(5);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 256L));
	RTHOOK(6);
	tr1 = RTOUCR(471,(nstcall = 0, F1102_8398), (Current));
	tr2 = (nstcall = 1, F899_6139(RTCW(tr1), loc1));
	tr1 = (nstcall = 1, F899_6139(RTCW(tr2), loc2));
	ti4_1 = (nstcall = 1, F780_5435(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(8);
		Result = (EIF_INTEGER_32) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("valid_lower_code", EX_POST);
		if ((nstcall = 0, F1103_8399(Current, Result))) {
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

/* {UC_V510_CTYPE}.upper_code */
EIF_INTEGER_32 F1103_8402 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("upper_code", 1102, Current, 4, 1, 15323);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		RTTE((nstcall = 0, F1103_8399(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 65536L));
	RTHOOK(3);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 65536L));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 256L));
	RTHOOK(5);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 256L));
	RTHOOK(6);
	tr1 = RTOUCR(472,(nstcall = 0, F1101_8374), (Current));
	tr2 = (nstcall = 1, F899_6139(RTCW(tr1), loc1));
	tr1 = (nstcall = 1, F899_6139(RTCW(tr2), loc2));
	ti4_1 = (nstcall = 1, F780_5435(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(8);
		Result = (EIF_INTEGER_32) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("valid_upper_code", EX_POST);
		if ((nstcall = 0, F1103_8399(Current, Result))) {
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

/* {UC_V510_CTYPE}.title_code */
EIF_INTEGER_32 F1103_8403 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("title_code", 1102, Current, 4, 1, 15324);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		RTTE((nstcall = 0, F1103_8399(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / ((EIF_INTEGER_32) 65536L));
	RTHOOK(3);
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 65536L));
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 / ((EIF_INTEGER_32) 256L));
	RTHOOK(5);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 % ((EIF_INTEGER_32) 256L));
	RTHOOK(6);
	tr1 = RTOUCR(473,(nstcall = 0, F1100_8349), (Current));
	tr2 = (nstcall = 1, F899_6139(RTCW(tr1), loc1));
	tr1 = (nstcall = 1, F899_6139(RTCW(tr2), loc2));
	ti4_1 = (nstcall = 1, F780_5435(RTCW(tr1), (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L))));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(8);
		Result = (EIF_INTEGER_32) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("valid_title_code", EX_POST);
		if ((nstcall = 0, F1103_8399(Current, Result))) {
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

void EIF_Minit376 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
