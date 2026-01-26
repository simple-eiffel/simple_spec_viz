/*
 * Code for class DATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "da391.h"
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

/* {DATE}.make */
void F1118_8674 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 1117, Current, 0, 3, 15596);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_date", EX_PRE);
		RTTE((nstcall = 0, F1117_8673(Current, arg1, arg2, arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F885_5888(Current, arg1, arg2, arg3));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5886(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5885(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5884(Current)) == arg3)) {
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

/* {DATE}.make_month_day_year */
void F1118_8675 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_month_day_year", 1117, Current, 0, 3, 15597);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_date", EX_PRE);
		RTTE((nstcall = 0, F1117_8673(Current, arg3, arg1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F1118_8674(Current, arg3, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5886(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5885(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5884(Current)) == arg2)) {
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

/* {DATE}.make_day_month_year */
void F1118_8676 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_day_month_year", 1117, Current, 0, 3, 15598);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("correct_date", EX_PRE);
		RTTE((nstcall = 0, F1117_8673(Current, arg3, arg2, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F1118_8674(Current, arg3, arg2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("year_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5886(Current)) == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("month_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5885(Current)) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("day_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5884(Current)) == arg1)) {
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

/* {DATE}.make_now */
void F1118_8677 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_now", 1117, Current, 1, 0, 15599);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(26, 0x01).id, 26, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F27_460(RTCW(loc1)));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F27_464(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F27_465(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F27_466(RTCW(loc1)));
	(nstcall = 0, F1118_8674(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DATE}.make_now_utc */
void F1118_8678 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_now_utc", 1117, Current, 1, 0, 15600);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(26, 0x01).id, 26, _OBJSIZ_1_1_0_1_0_0_0_0_);
	(nstcall = -1, F27_461(RTCW(loc1)));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F27_464(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F27_465(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F27_466(RTCW(loc1)));
	(nstcall = 0, F1118_8674(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DATE}.make_by_days */
void F1118_8679 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_days", 1117, Current, 5, 1, 15601);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 59L))) - ((EIF_INTEGER_32) 1L));
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F139_1903(Current, loc1, ((EIF_INTEGER_32) 146097L)));
	loc2 = (nstcall = 0, F139_1904(Current, ti4_1, ((EIF_INTEGER_32) 4L)));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * loc2) + ((EIF_INTEGER_32) 3L));
	RTHOOK(3);
	loc3 = (nstcall = 0, F139_1904(Current, loc1, ((EIF_INTEGER_32) 146097L)));
	ti4_1 = (nstcall = 0, F139_1904(Current, loc2, ((EIF_INTEGER_32) 1461L)));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 100L) * loc3) + ti4_1);
	RTHOOK(4);
	ti4_1 = (nstcall = 0, F139_1903(Current, loc2, ((EIF_INTEGER_32) 1461L)));
	loc1 = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 4L)), ((EIF_INTEGER_32) 4L)));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 5L) * loc1) - ((EIF_INTEGER_32) 3L));
	RTHOOK(5);
	loc4 = (nstcall = 0, F139_1904(Current, loc1, ((EIF_INTEGER_32) 153L)));
	RTHOOK(6);
	ti4_1 = (nstcall = 0, F139_1903(Current, loc1, ((EIF_INTEGER_32) 153L)));
	loc5 = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 5L)), ((EIF_INTEGER_32) 5L)));
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 10L))) {
		RTHOOK(8);
		loc4 += ((EIF_INTEGER_32) 3L);
	} else {
		RTHOOK(9);
		loc4 -= ((EIF_INTEGER_32) 9L);
		RTHOOK(10);
		loc3++;
	}
	RTHOOK(11);
	loc3 += ((EIF_INTEGER_32) 1600L);
	RTHOOK(12);
	(nstcall = 0, F1118_8674(Current, loc3, loc4, loc5));
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("days_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1118_8688(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {DATE}.make_from_string_default */
void F1118_8680 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_string_default", 1117, Current, 0, 1, 15602);
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
		RTCT("date_valid", EX_PRE);
		tr1 = (nstcall = 0, F143_1947(Current));
		RTTE((nstcall = 0, F1117_8667(Current, arg1, tr1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F143_1947(Current));
	(nstcall = 0, F1118_8682(Current, arg1, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {DATE}.make_from_string_default_with_base */
void F1118_8681 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_string_default_with_base", 1117, Current, 0, 2, 15603);
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
		RTHOOK(3);
		RTCT("date_valid", EX_PRE);
		tr1 = (nstcall = 0, F143_1947(Current));
		RTTE((nstcall = 0, F1117_8668(Current, arg1, tr1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 0, F143_1947(Current));
	(nstcall = 0, F1118_8683(Current, arg1, tr1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DATE}.make_from_string */
void F1118_8682 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("make_from_string", 1117, Current, 1, 2, 15604);
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
		RTCT("c_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("date_valid", EX_PRE);
		RTTE((nstcall = 0, F1117_8667(Current, arg1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1106, 0x01).id, 1106, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F1107_8409(RTCW(tr1), arg2));
	tr2 = (nstcall = 1, F1107_8424(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F885_5886(RTCW(loc1)));
	ti4_2 = (nstcall = 1, F885_5885(RTCW(loc1)));
	ti4_3 = (nstcall = 1, F885_5884(RTCW(loc1)));
	(nstcall = 0, F1118_8674(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DATE}.make_from_string_with_base */
void F1118_8683 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("make_from_string_with_base", 1117, Current, 2, 3, 15605);
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
		RTCT("c_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("base_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 % ((EIF_INTEGER_32) 100L)) == ((EIF_INTEGER_32) 0L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("date_valid", EX_PRE);
		RTTE((nstcall = 0, F1117_8668(Current, arg1, arg2, arg3)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc1 = RTLNS(eif_new_type(1106, 0x01).id, 1106, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F1107_8409(RTCW(loc1), arg2));
	RTHOOK(6);
	(nstcall = 1, F1107_8418(RTCW(loc1), arg3));
	RTHOOK(7);
	tr1 = (nstcall = 1, F1107_8424(RTCW(loc1), arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	ti4_1 = (nstcall = 1, F885_5886(RTCW(loc2)));
	ti4_2 = (nstcall = 1, F885_5885(RTCW(loc2)));
	ti4_3 = (nstcall = 1, F885_5884(RTCW(loc2)));
	(nstcall = 0, F1118_8674(Current, ti4_1, ti4_2, ti4_3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DATE}.make_by_ordered_compact_date */
void F1118_8684 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_by_ordered_compact_date", 1117, Current, 0, 1, 15606);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_d_valid", EX_PRE);
		RTTE((nstcall = 0, F1117_8672(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F885_5892(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("ordered_compact_date_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_) == arg1)) {
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
}

/* {DATE}.origin */
static EIF_REFERENCE F1118_8685_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(149)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("origin", 1117, Current, 0, 0, 15607);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1117, 0x01).id, 1117, _OBJSIZ_0_0_0_1_0_0_0_0_);
	(nstcall = -1, F1118_8674(RTCW(tr1), ((EIF_INTEGER_32) 1600L), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1118_8685 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(149,F1118_8685_body,(Current));
}

/* {DATE}.is_less */
EIF_BOOLEAN F1118_8686 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_less", 1117, Current, 2, 1, 15608);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_0_0_0_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 < loc2);
	} else {
		RTHOOK(6);
		Result = '\0';
		ti4_1 = (nstcall = 1, F885_5886(RTCW(arg1)));
		if ((EIF_BOOLEAN) ((nstcall = 0, F885_5886(Current)) < ti4_1)) {
			ti4_1 = eif_bit_and(loc1,((EIF_INTEGER_32) 65535L));
			ti4_2 = eif_bit_and(loc2,((EIF_INTEGER_32) 65535L));
			Result = (EIF_BOOLEAN) (ti4_1 < ti4_2);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F1118_8686(RTCW(arg1), Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
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
	return Result;
}

/* {DATE}.duration */
EIF_REFERENCE F1118_8687 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("duration", 1117, Current, 0, 0, 15609);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(256, 0x01).id, 256, _OBJSIZ_1_0_0_3_0_0_0_0_);
	tr1 = RTOUCR(149,(nstcall = 0, F1118_8685), (Current));
	ti4_1 = (nstcall = 1, F885_5886(RTCW(tr1)));
	ti4_1 = (nstcall = 0, F1118_8696(Current, ti4_1));
	ti4_2 = (nstcall = 0, F1118_8691(Current));
	tr1 = RTOUCR(149,(nstcall = 0, F1118_8685), (Current));
	ti4_3 = (nstcall = 1, F1118_8691(RTCW(tr1)));
	(nstcall = -1, F257_3211(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ti4_3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definite_result", EX_POST);
		tb1 = (nstcall = 1, F257_3220(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("duration_set", EX_POST);
		tr1 = RTOUCR(149,(nstcall = 0, F1118_8685), (Current));
		tr1 = (nstcall = 1, F262_3302(Current, tr1));
		tr2 = (nstcall = 1, F254_3139(RTCW(tr1)));
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(tr2))-0])(tr2, Result));
		if (tb1) {
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

/* {DATE}.days */
EIF_INTEGER_32 F1118_8688 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("days", 1117, Current, 0, 0, 15610);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(149,(nstcall = 0, F1118_8685), (Current));
	ti4_1 = (nstcall = 1, F885_5886(RTCW(tr1)));
	Result = (nstcall = 0, F1118_8696(Current, ti4_1));
	ti4_1 = (nstcall = 0, F1118_8691(Current));
	tr1 = RTOUCR(149,(nstcall = 0, F1118_8685), (Current));
	ti4_2 = (nstcall = 1, F1118_8691(RTCW(tr1)));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("same_duration", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV((nstcall = 0, F1118_8687(Current)))+ _LNGOFF_1_0_0_2_);
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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

/* {DATE}.leap_year */
EIF_BOOLEAN F1118_8689 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("leap_year", 1117, Current, 0, 0, 15611);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F885_5886(Current));
	Result = (nstcall = 0, F143_1952(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.days_at_month */
EIF_INTEGER_32 F1118_8690 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("days_at_month", 1117, Current, 1, 0, 15612);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F885_5885(Current));
	RTHOOK(2);
	tr1 = RTOUCR(302,(nstcall = 0, F1118_8714), (Current));
	ti4_1 = (nstcall = 1, F901_6139(RTCW(tr1), loc1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 2L))) {
		tb1 = (nstcall = 0, F1118_8689(Current));
	}
	if (tb1) {
		RTHOOK(4);
		Result++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	return Result;
}

/* {DATE}.year_day */
EIF_INTEGER_32 F1118_8691 (EIF_REFERENCE Current)
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
	
	RTEAA("year_day", 1117, Current, 0, 0, 15613);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1118_8690(Current));
	ti4_1 = (nstcall = 0, F885_5884(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("result_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= (nstcall = 0, F1118_8693(Current)))) {
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

/* {DATE}.week_of_year */
EIF_INTEGER_32 F1118_8692 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("week_of_year", 1117, Current, 0, 0, 15614);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) ((nstcall = 0, F1118_8694(Current)) <= (nstcall = 0, F1118_8691(Current)))) {
		RTHOOK(2);
		if ((EIF_BOOLEAN) ((nstcall = 0, F1118_8695(Current)) > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(3);
			ti4_1 = (nstcall = 0, F1118_8691(Current));
			ti4_2 = (nstcall = 0, F1118_8694(Current));
			Result = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) (ti4_1 - ti4_2), ((EIF_INTEGER_32) 7L)));
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(4);
			ti4_1 = (nstcall = 0, F1118_8691(Current));
			ti4_2 = (nstcall = 0, F1118_8694(Current));
			ti4_3 = (nstcall = 0, F1118_8695(Current));
			Result = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 7L)));
		}
	} else {
		RTHOOK(5);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("result_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 53L))) {
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
	return Result;
}

/* {DATE}.days_in_year */
EIF_INTEGER_32 F1118_8693 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("days_in_year", 1117, Current, 0, 0, 15615);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F1118_8689(Current))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 366L);
	} else {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 365L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_result", EX_POST);
		tb1 = '\0';
		tb2 = '\01';
		if ((nstcall = 0, F1118_8689(Current))) {
			tb2 = (EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 366L));
		}
		if (tb2) {
			tb2 = '\01';
			if ((EIF_BOOLEAN) !(nstcall = 0, F1118_8689(Current))) {
				tb2 = (EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 365L));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.day_of_the_week */
EIF_INTEGER_32 F1118_8694 (EIF_REFERENCE Current)
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
	
	RTEAA("day_of_the_week", 1117, Current, 0, 0, 15616);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F1118_8688(Current));
	Result = (nstcall = 0, F139_1903(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 7L)));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("day_of_the_week_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 8L)))) {
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

/* {DATE}.day_of_january_1st */
EIF_INTEGER_32 F1118_8695 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("day_of_january_1st", 1117, Current, 0, 0, 15617);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1117, 0x01).id, 1117, _OBJSIZ_0_0_0_1_0_0_0_0_);
	ti4_1 = (nstcall = 0, F885_5886(Current));
	(nstcall = -1, F1118_8674(RTCW(tr1), ti4_1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 1L)));
	ti4_1 = (nstcall = 1, F1118_8694(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("day_of_the_week_definition", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 8L)))) {
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

/* {DATE}.days_from */
EIF_INTEGER_32 F1118_8696 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("days_from", 1117, Current, 1, 1, 15618);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F885_5886(Current));
	RTHOOK(2);
	Result = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 4L)));
	ti4_1 = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 4L)));
	ti4_2 = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 100L)));
	ti4_3 = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 100L)));
	ti4_4 = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 400L)));
	ti4_5 = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 400L)));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - arg1) * ((EIF_INTEGER_32) 365L)) + (EIF_INTEGER_32) (Result - ti4_1)) - (EIF_INTEGER_32) (ti4_2 - ti4_3)) + (EIF_INTEGER_32) (ti4_4 - ti4_5));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.to_date_time */
EIF_REFERENCE F1118_8697 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("to_date_time", 1117, Current, 0, 0, 15619);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1120, 0x01).id, 1120, _OBJSIZ_2_0_0_2_0_0_0_1_);
	(nstcall = -1, F1121_8752(RTCW(Result), Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.plus */
EIF_REFERENCE F1118_8698 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("plus", 1117, Current, 0, 1, 15620);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F1_14(Current));
	RTHOOK(3);
	(nstcall = 1, F1118_8699(RTCW(Result), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definite_set", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, F257_3220(RTCW(arg1)));
		if (tb2) {
			tr1 = (nstcall = 1, F262_3302(RTCW(Result), Current));
			tr2 = (nstcall = 1, F254_3139(RTCW(tr1)));
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(tr2))-0])(tr2, arg1));
			tb1 = tb2;
		}
		if (tb1) {
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
	return Result;
}

/* {DATE}.add */
void F1118_8699 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("add", 1117, Current, 0, 1, 15621);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, F257_3220(RTCW(arg1)));
	if (tb1) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		(nstcall = 0, F1118_8703(Current, ti4_1));
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_1_);
		(nstcall = 0, F1118_8710(Current, ti4_1, ti4_2));
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_2_);
		(nstcall = 0, F1118_8703(Current, ti4_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DATE}.relative_duration */
EIF_REFERENCE F1118_8700 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("relative_duration", 1117, Current, 0, 1, 15622);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(256, 0x01).id, 256, _OBJSIZ_1_0_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 0, F1118_8688(Current));
	ti4_2 = (nstcall = 1, F1118_8688(RTCW(arg1)));
	(nstcall = -1, F257_3211(RTCW(Result), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
	RTHOOK(3);
	tr1 = (nstcall = 1, F257_3234(RTCW(Result), arg1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 1, F1_14(arg1));
	(nstcall = 1, F257_3224(RTCW(Result), tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exact_duration", EX_POST);
		tr1 = (nstcall = 1, F1118_8698(RTCW(arg1), Result));
		tb1 = (nstcall = 1, F259_3266(RTCW(tr1), Current));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("canonical_duration", EX_POST);
		tb1 = (nstcall = 1, F257_3221(RTCW(Result), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("origin_date_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		if ((nstcall = 0, F1_10(Current, tr1, arg1))) {
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
	return Result;
}

/* {DATE}.day_forth */
void F1118_8701 (EIF_REFERENCE Current)
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
	
	RTEAA("day_forth", 1117, Current, 0, 0, 15623);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F1118_8688(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F885_5884(Current)) == (nstcall = 0, F144_1961(Current)))) {
		RTHOOK(2);
		(nstcall = 0, F885_5889(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		(nstcall = 0, F1118_8704(Current));
	} else {
		RTHOOK(4);
		ti4_2 = (nstcall = 0, F885_5884(Current));
		(nstcall = 0, F885_5889(Current, (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("days_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F1118_8688(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {DATE}.day_back */
void F1118_8702 (EIF_REFERENCE Current)
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
	
	RTEAA("day_back", 1117, Current, 0, 0, 15624);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F1118_8688(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F885_5884(Current)) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		(nstcall = 0, F1118_8705(Current));
		RTHOOK(3);
		ti4_2 = (nstcall = 0, F144_1961(Current));
		(nstcall = 0, F885_5889(Current, ti4_2));
	} else {
		RTHOOK(4);
		ti4_2 = (nstcall = 0, F885_5884(Current));
		(nstcall = 0, F885_5889(Current, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("days_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F1118_8688(Current)) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
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

/* {DATE}.day_add */
void F1118_8703 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("day_add", 1117, Current, 0, 1, 15625);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F1118_8688(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 0, F1118_8688(Current));
	(nstcall = 0, F1118_8679(Current, (EIF_INTEGER_32) (ti4_2 + arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("days_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F1118_8688(Current)) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {DATE}.month_forth */
void F1118_8704 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("month_forth", 1117, Current, 1, 0, 15626);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F885_5885(Current)) == ((EIF_INTEGER_32) 12L))) {
		RTHOOK(2);
		(nstcall = 0, F885_5890(Current, ((EIF_INTEGER_32) 1L)));
		RTHOOK(3);
		(nstcall = 0, F1118_8707(Current));
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F885_5885(Current));
		ti4_2 = (nstcall = 0, F885_5886(Current));
		loc1 = (nstcall = 0, F143_1946(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2));
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((nstcall = 0, F885_5884(Current)) > loc1)) {
			RTHOOK(6);
			(nstcall = 0, F885_5889(Current, loc1));
		}
		RTHOOK(7);
		ti4_1 = (nstcall = 0, F885_5885(Current));
		(nstcall = 0, F885_5890(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {DATE}.month_back */
void F1118_8705 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("month_back", 1117, Current, 1, 0, 15627);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)((nstcall = 0, F885_5885(Current)) == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(2);
		(nstcall = 0, F885_5890(Current, ((EIF_INTEGER_32) 12L)));
		RTHOOK(3);
		(nstcall = 0, F1118_8708(Current));
	} else {
		RTHOOK(4);
		ti4_1 = (nstcall = 0, F885_5885(Current));
		ti4_2 = (nstcall = 0, F885_5886(Current));
		loc1 = (nstcall = 0, F143_1946(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)), ti4_2));
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((nstcall = 0, F885_5884(Current)) > loc1)) {
			RTHOOK(6);
			(nstcall = 0, F885_5889(Current, loc1));
		}
		RTHOOK(7);
		ti4_1 = (nstcall = 0, F885_5885(Current));
		(nstcall = 0, F885_5890(Current, (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {DATE}.month_add */
void F1118_8706 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("month_add", 1117, Current, 5, 1, 15628);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = (nstcall = 0, F885_5885(Current));
	RTHOOK(2);
	loc1 = (nstcall = 0, F139_1903(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + arg1) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 12L)));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(3);
	loc2 = (nstcall = 0, F885_5886(Current));
	ti4_1 = (nstcall = 0, F139_1904(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 + arg1) - ((EIF_INTEGER_32) 1L)), ((EIF_INTEGER_32) 12L)));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ti4_1);
	RTHOOK(4);
	loc3 = (nstcall = 0, F143_1946(Current, loc1, loc2));
	RTHOOK(5);
	loc5 = (nstcall = 0, F885_5884(Current));
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc5 > loc3)) {
		RTHOOK(7);
		(nstcall = 0, F885_5888(Current, loc2, loc1, loc3));
	} else {
		RTHOOK(8);
		(nstcall = 0, F885_5888(Current, loc2, loc1, loc5));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DATE}.year_forth */
void F1118_8707 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("year_forth", 1117, Current, 3, 0, 15629);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F885_5886(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	loc2 = (nstcall = 0, F885_5885(Current));
	RTHOOK(2);
	loc1 = (nstcall = 0, F885_5886(Current));
	RTHOOK(3);
	loc3 = (nstcall = 0, F143_1946(Current, loc2, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(4);
	if ((EIF_BOOLEAN) ((nstcall = 0, F885_5884(Current)) > loc3)) {
		RTHOOK(5);
		(nstcall = 0, F885_5889(Current, loc3));
	}
	RTHOOK(6);
	(nstcall = 0, F885_5891(Current, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("year_increased", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5886(Current)) == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {DATE}.year_back */
void F1118_8708 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("year_back", 1117, Current, 0, 0, 15630);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F885_5886(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 0, F885_5885(Current));
	ti4_3 = (nstcall = 0, F885_5886(Current));
	if ((EIF_BOOLEAN) ((nstcall = 0, F885_5884(Current)) > (nstcall = 0, F143_1946(Current, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L)))))) {
		RTHOOK(2);
		ti4_2 = (nstcall = 0, F885_5885(Current));
		ti4_3 = (nstcall = 0, F885_5886(Current));
		ti4_2 = (nstcall = 0, F143_1946(Current, ti4_2, (EIF_INTEGER_32) (ti4_3 - ((EIF_INTEGER_32) 1L))));
		(nstcall = 0, F885_5889(Current, ti4_2));
	}
	RTHOOK(3);
	ti4_2 = (nstcall = 0, F885_5886(Current));
	(nstcall = 0, F885_5891(Current, (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("year_decreased", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5886(Current)) == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DATE}.year_add */
void F1118_8709 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("year_add", 1117, Current, 0, 1, 15631);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F885_5886(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = (nstcall = 0, F885_5885(Current));
	ti4_3 = (nstcall = 0, F885_5886(Current));
	if ((EIF_BOOLEAN) ((nstcall = 0, F885_5884(Current)) > (nstcall = 0, F143_1946(Current, ti4_2, (EIF_INTEGER_32) (ti4_3 + arg1))))) {
		RTHOOK(2);
		ti4_2 = (nstcall = 0, F885_5885(Current));
		ti4_3 = (nstcall = 0, F885_5886(Current));
		ti4_2 = (nstcall = 0, F143_1946(Current, ti4_2, (EIF_INTEGER_32) (ti4_3 + arg1)));
		(nstcall = 0, F885_5889(Current, ti4_2));
	}
	RTHOOK(3);
	ti4_2 = (nstcall = 0, F885_5886(Current));
	(nstcall = 0, F885_5891(Current, (EIF_INTEGER_32) (ti4_2 + arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("year_set", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F885_5886(Current)) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DATE}.year_month_add */
void F1118_8710 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("year_month_add", 1117, Current, 0, 2, 15632);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1118_8706(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 12L)) + arg2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {DATE}.debug_output */
EIF_REFERENCE F1118_8711 (EIF_REFERENCE Current)
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
	
	RTEAA("debug_output", 1117, Current, 0, 0, 15633);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F143_1947(Current));
	Result = (nstcall = 0, F1118_8713(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
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

/* {DATE}.out */
EIF_REFERENCE F1118_8712 (EIF_REFERENCE Current)
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
	
	RTEAA("out", 1117, Current, 0, 0, 15634);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F143_1947(Current));
	Result = (nstcall = 0, F1118_8713(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("out_not_void", EX_POST);
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

/* {DATE}.formatted_out */
EIF_REFERENCE F1118_8713 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("formatted_out", 1117, Current, 0, 1, 15635);
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
	tr1 = RTLNS(eif_new_type(1106, 0x01).id, 1106, _OBJSIZ_4_2_0_1_0_0_0_0_);
	(nstcall = -1, F1107_8409(RTCW(tr1), arg1));
	tr2 = (nstcall = 1, F1107_8421(RTCW(tr1), Current));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DATE}.days_at_months */
static EIF_REFERENCE F1118_8714_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(302)

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("days_at_months", 1117, Current, 0, 0, 15636);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {900,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 13L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 13L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 59L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 90L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 120L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 151L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 181L);
	*((EIF_INTEGER_32 *)tr2+8) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 212L);
	*((EIF_INTEGER_32 *)tr2+9) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 243L);
	*((EIF_INTEGER_32 *)tr2+10) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 273L);
	*((EIF_INTEGER_32 *)tr2+11) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 304L);
	*((EIF_INTEGER_32 *)tr2+12) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 334L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F901_6145)(tr2);
	tr3 = *(EIF_REFERENCE *)(tr1);
	Result = (EIF_REFERENCE) tr3;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("count_is_months_in_year", EX_POST);
		ti4_1 = (nstcall = 1, F901_6149(Result));
		if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)) == ((EIF_INTEGER_32) 12L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1118_8714 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(302,F1118_8714_body,(Current));
}

/* {DATE}._invariant */
void F1118_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 390, Current, 0, 0);
	RTIT("day_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F885_5884(Current)) >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("day_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F885_5884(Current)) <= (nstcall = 0, F144_1961(Current)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("month_large_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F885_5885(Current)) >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("month_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F885_5885(Current)) <= ((EIF_INTEGER_32) 12L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("year_small_enough", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F885_5886(Current)) <= ((EIF_INTEGER_32) 65535L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("year_non_negative", Current);
	if ((EIF_BOOLEAN) ((nstcall = 0, F885_5886(Current)) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit391 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
