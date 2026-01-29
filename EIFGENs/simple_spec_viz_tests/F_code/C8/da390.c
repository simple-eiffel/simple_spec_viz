/*
 * Code for class DATE_VALIDITY_CHECKER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da390.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DATE_VALIDITY_CHECKER}.date_valid */
EIF_BOOLEAN F1117_8667 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("date_valid", 1116, Current, 1, 2, 15588);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("code_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(1106, 0x01).id, 1106, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F1107_8409(RTCW(loc1), arg2));
	RTHOOK(4);
	Result = '\0';
	tb1 = '\0';
	tb2 = (nstcall = 1, F1107_8427(RTCW(loc1)));
	if (tb2) {
		tb2 = (nstcall = 1, F1107_8419(RTCW(loc1), arg1));
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = (nstcall = 1, F1107_8413(RTCW(loc1), arg1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_VALIDITY_CHECKER}.date_valid_with_base */
EIF_BOOLEAN F1117_8668 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("date_valid_with_base", 1116, Current, 1, 3, 15589);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("code_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = RTLNS(eif_new_type(1106, 0x01).id, 1106, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F1107_8409(RTCW(loc1), arg2));
	RTHOOK(5);
	(nstcall = 1, F1107_8418(RTCW(loc1), arg3));
	RTHOOK(6);
	Result = '\0';
	tb1 = '\0';
	tb2 = (nstcall = 1, F1107_8427(RTCW(loc1)));
	if (tb2) {
		tb2 = (nstcall = 1, F1107_8419(RTCW(loc1), arg1));
		tb1 = tb2;
	}
	if (tb1) {
		tb1 = (nstcall = 1, F1107_8413(RTCW(loc1), arg1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_VALIDITY_CHECKER}.date_valid_default */
EIF_BOOLEAN F1117_8669 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("date_valid_default", 1116, Current, 0, 1, 15590);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F142_1921(Current));
	Result = (nstcall = 0, F1117_8667(Current, arg1, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_VALIDITY_CHECKER}.date_valid_default_with_base */
EIF_BOOLEAN F1117_8670 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("date_valid_default_with_base", 1116, Current, 0, 2, 15591);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg2 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F142_1921(Current));
	Result = (nstcall = 0, F1117_8668(Current, arg1, tr1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_VALIDITY_CHECKER}.compact_date_valid */
EIF_BOOLEAN F1117_8671 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("compact_date_valid", 1116, Current, 4, 1, 15592);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O4931[dtype-884]);
	RTHOOK(2);
	(nstcall = 0, F885_5901(Current, arg1));
	RTHOOK(3);
	loc4 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1876[dtype-255])(Current));
	RTHOOK(4);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1877[dtype-255])(Current));
	RTHOOK(5);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1878[dtype-255])(Current));
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O4931[dtype-884]) = (EIF_INTEGER_32) loc1;
	RTHOOK(7);
	Result = (nstcall = 0, F1117_8673(Current, loc2, loc3, loc4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_VALIDITY_CHECKER}.ordered_compact_date_valid */
EIF_BOOLEAN F1117_8672 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("ordered_compact_date_valid", 1116, Current, 4, 1, 15593);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current + O4931[dtype-884]);
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current + O4931[dtype-884]) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	loc4 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1876[dtype-255])(Current));
	RTHOOK(4);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1877[dtype-255])(Current));
	RTHOOK(5);
	loc2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1878[dtype-255])(Current));
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O4931[dtype-884]) = (EIF_INTEGER_32) loc1;
	RTHOOK(7);
	Result = (nstcall = 0, F1117_8673(Current, loc2, loc3, loc4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_VALIDITY_CHECKER}.is_correct_date */
EIF_BOOLEAN F1117_8673 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_correct_date", 1116, Current, 0, 3, 15594);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 12L))) && (EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)))) {
		tb2 = (EIF_BOOLEAN) (arg3 <= (nstcall = 0, F142_1920(Current, arg2, arg1)));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		Result = (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 65535L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit390 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
