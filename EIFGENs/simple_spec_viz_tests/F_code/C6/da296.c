/*
 * Code for class DATE_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da296.h"
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

/* {DATE_VALUE}.day */
EIF_INTEGER_32 F885_5884 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("day", 884, Current, 0, 0, 9824);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O4931[dtype-884]);
	ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 255L));
	Result = (EIF_INTEGER_32) ti4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_VALUE}.month */
EIF_INTEGER_32 F885_5885 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("month", 884, Current, 0, 0, 9825);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O4931[dtype-884]);
	ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65280L));
	ti4_1 = eif_bit_shift_right(ti4_2,((EIF_INTEGER_32) 8L));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_VALUE}.year */
EIF_INTEGER_32 F885_5886 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("year", 884, Current, 0, 0, 9826);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + O4931[dtype-884]);
	ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) -65536L));
	ti4_1 = eif_bit_shift_right(ti4_2,((EIF_INTEGER_32) 16L));
	ti4_2 = eif_bit_and(ti4_1,((EIF_INTEGER_32) 65535L));
	Result = (EIF_INTEGER_32) ti4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE_VALUE}.ordered_compact_date */
EIF_INTEGER_32 F885_5887 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O4931[Dtype(Current)-884]);
}


/* {DATE_VALUE}.set_date */
void F885_5888 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_date", 884, Current, 1, 3, 9828);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("m_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("d_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (nstcall = 0, F142_1920(Current, arg2, arg1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 255L));
	ti4_2 = eif_bit_and(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(6);
	ti4_1 = eif_bit_or(loc1,arg3);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 65280L));
	ti4_2 = eif_bit_and(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(8);
	ti4_1 = eif_bit_shift_left(arg2,((EIF_INTEGER_32) 8L));
	ti4_2 = eif_bit_or(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(9);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) -65536L));
	ti4_2 = eif_bit_and(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(10);
	ti4_1 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 16L));
	ti4_2 = eif_bit_or(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current + O4931[dtype-884]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1876[dtype-255])(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1877[dtype-255])(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1878[dtype-255])(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {DATE_VALUE}.set_day */
void F885_5889 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_day", 884, Current, 1, 1, 9829);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F143_1935(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current + O4931[dtype-884]);
	RTHOOK(4);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 255L));
	ti4_2 = eif_bit_and(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(5);
	ti4_1 = eif_bit_or(loc1,arg1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current + O4931[dtype-884]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1876[dtype-255])(Current)) == arg1)) {
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

/* {DATE_VALUE}.set_month */
void F885_5890 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_month", 884, Current, 1, 1, 9812);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("m_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("m_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("d_small_enough", EX_PRE);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1878[dtype-255])(Current));
		RTTE((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1876[dtype-255])(Current)) <= (nstcall = 0, F142_1920(Current, arg1, ti4_1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = *(EIF_INTEGER_32 *)(Current + O4931[dtype-884]);
	RTHOOK(5);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) 65280L));
	ti4_2 = eif_bit_and(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(6);
	ti4_1 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 8L));
	ti4_2 = eif_bit_or(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current + O4931[dtype-884]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1877[dtype-255])(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DATE_VALUE}.set_year */
void F885_5891 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_year", 884, Current, 1, 1, 9813);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("can_not_cut_29th_feb", EX_PRE);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1877[dtype-255])(Current));
		RTTE((EIF_BOOLEAN) ((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1876[dtype-255])(Current)) <= (nstcall = 0, F142_1920(Current, ti4_1, arg1))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current + O4931[dtype-884]);
	RTHOOK(3);
	ti4_1 = eif_bit_not(((EIF_INTEGER_32) -65536L));
	ti4_2 = eif_bit_and(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(4);
	ti4_1 = eif_bit_shift_left(arg1,((EIF_INTEGER_32) 16L));
	ti4_2 = eif_bit_or(loc1,ti4_1);
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current + O4931[dtype-884]) = (EIF_INTEGER_32) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1878[dtype-255])(Current)) == arg1)) {
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

/* {DATE_VALUE}.set_internal_ordered_compact_date */
void F885_5892 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_internal_ordered_compact_date", 884, Current, 0, 1, 9814);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current + O4931[dtype-884]) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("ordered_compact_date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4931[dtype-884]) == arg1)) {
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

/* {DATE_VALUE}.correct_mismatch */
void F885_5893 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("correct_mismatch", 884, Current, 1, 0, 9815);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(12,(nstcall = 0, F864_5720), (Current));
	tr2 = RTOUCR(375,(nstcall = 0, F885_5900), (Current));
	tr2 = (nstcall = 1, F886_5908(RTCW(tr1), tr2));
	loc1 = RTCCL(tr2);
	loc1 = RTRV(eif_new_type(1000, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_0_0_0_0_);
		(nstcall = 0, F885_5901(Current, ti4_1));
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

/* {DATE_VALUE}.compact_date_attribute_name */

EIF_REFERENCE F885_5900 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (375,RTMS_EX_H("compact_date",12,1114629989));
}

/* {DATE_VALUE}.set_private_internal_compact_date */
void F885_5901 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_private_internal_compact_date", 884, Current, 0, 1, 9823);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = eif_bit_and(arg1,((EIF_INTEGER_32) 65535L));
	ti4_2 = eif_bit_and(arg1,((EIF_INTEGER_32) 16711680L));
	ti4_3 = eif_bit_shift_right(ti4_2,((EIF_INTEGER_32) 16L));
	ti4_2 = eif_bit_and(arg1,(EIF_INTEGER_32) ((EIF_INTEGER_64) RTI64C(4278190080)));
	ti4_4 = eif_bit_shift_right(ti4_2,((EIF_INTEGER_32) 24L));
	ti4_2 = eif_bit_and(ti4_4,((EIF_INTEGER_32) 255L));
	(nstcall = 0, F885_5888(Current, ti4_1, ti4_3, ti4_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("compact_date_set", EX_POST);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1878[dtype-255])(Current));
		ti4_2 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1877[dtype-255])(Current));
		ti4_3 = eif_bit_shift_left(ti4_2,((EIF_INTEGER_32) 16L));
		ti4_2 = eif_bit_or(ti4_1,ti4_3);
		ti4_1 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R1876[dtype-255])(Current));
		ti4_3 = eif_bit_shift_left(ti4_1,((EIF_INTEGER_32) 24L));
		ti4_1 = eif_bit_or(ti4_2,ti4_3);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

void EIF_Minit296 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
