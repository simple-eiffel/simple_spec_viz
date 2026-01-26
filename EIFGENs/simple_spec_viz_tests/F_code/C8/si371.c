/*
 * Code for class SIMPLE_DECIMAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si371.h"
#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_DECIMAL}.default_create */
void F1098_8210 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("default_create", 1097, Current, 0, 0, 15160);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(1124, 1).id);
	(nstcall = -1, F1125_8848(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1125, 1).id);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_zero", EX_POST);
		tb1 = (nstcall = 0, F1098_8220(Current));
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
}

/* {SIMPLE_DECIMAL}.make */
void F1098_8211 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("make", 1097, Current, 1, 1, 15161);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1125, 1).id);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 0, F1098_8259(Current, arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(1124, 1).id);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = -1, F1125_8851(RTCW(tr1), loc1, tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("decimal_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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

/* {SIMPLE_DECIMAL}.make_from_integer */
void F1098_8212 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_from_integer", 1097, Current, 0, 1, 15162);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(1125, 1).id);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1124, 1).id);
	(nstcall = -1, F1125_8850(RTCW(tr1), arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("correct_value", EX_POST);
		ti4_1 = (nstcall = 0, F1098_8226(Current));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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

/* {SIMPLE_DECIMAL}.make_from_double */
void F1098_8213 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("make_from_double", 1097, Current, 0, 1, 15163);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(1125, 1).id);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1124, 1).id);
	tr2 = eif_out__r8_s1(arg1);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = -1, F1125_8851(RTCW(tr1), tr2, tr3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SIMPLE_DECIMAL}.make_from_decimal */
void F1098_8214 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_decimal", 1097, Current, 0, 1, 15164);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("decimal_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1125, 1).id);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(1124, 1).id);
	(nstcall = -1, F1125_8847(RTCW(tr1), arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("decimal_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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

/* {SIMPLE_DECIMAL}.make_currency */
void F1098_8215 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_currency", 1097, Current, 1, 2, 15165);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("cents_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 99L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1125, 1).id);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 20L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	if ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		tr1 = RTMS_EX_H("-",1,45);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc1))-1080])(loc1, tr1));
		RTHOOK(6);
		ti4_1 = eif_abs_int32 (arg1);
		(nstcall = 1, F1081_7847(RTCW(loc1), ti4_1));
	} else {
		RTHOOK(7);
		(nstcall = 1, F1081_7847(RTCW(loc1), arg1));
	}
	RTHOOK(8);
	tr1 = RTMS_EX_H(".",1,46);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc1))-1080])(loc1, tr1));
	RTHOOK(9);
	if ((EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 10L))) {
		RTHOOK(10);
		tr1 = RTMS_EX_H("0",1,48);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc1))-1080])(loc1, tr1));
	}
	RTHOOK(11);
	(nstcall = 1, F1081_7847(RTCW(loc1), arg2));
	RTHOOK(12);
	tr1 = RTLNSMART(eif_new_type(1124, 1).id);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = -1, F1125_8851(RTCW(tr1), loc1, tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {SIMPLE_DECIMAL}.make_zero */
void F1098_8216 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_zero", 1097, Current, 0, 0, 15166);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(1125, 1).id);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1124, 1).id);
	(nstcall = -1, F1125_8848(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_zero", EX_POST);
		tb1 = (nstcall = 0, F1098_8220(Current));
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
}

/* {SIMPLE_DECIMAL}.make_one */
void F1098_8217 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_one", 1097, Current, 0, 0, 15167);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(1125, 1).id);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1124, 1).id);
	(nstcall = -1, F1125_8849(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_one", EX_POST);
		ti4_1 = (nstcall = 0, F1098_8226(Current));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
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

/* {SIMPLE_DECIMAL}.decimal */
EIF_REFERENCE F1098_8218 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SIMPLE_DECIMAL}.context */
EIF_REFERENCE F1098_8219 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SIMPLE_DECIMAL}.is_zero */
EIF_BOOLEAN F1098_8220 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_zero", 1097, Current, 0, 0, 15170);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F1125_8882(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.is_negative */
EIF_BOOLEAN F1098_8221 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_negative", 1097, Current, 0, 0, 15171);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_1_0_);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.is_positive */
EIF_BOOLEAN F1098_8222 (EIF_REFERENCE Current)
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
	
	RTEAA("is_positive", 1097, Current, 0, 0, 15172);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = (nstcall = 0, F1098_8220(Current));
	if ((EIF_BOOLEAN) !tb2) {
		tb2 = (nstcall = 0, F1098_8221(Current));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.is_integer */
EIF_BOOLEAN F1098_8223 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_integer", 1097, Current, 1, 0, 15173);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F1125_8911(RTCW(tr1), tr2));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F1125_8895(RTCW(tr1), loc1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.is_nan */
EIF_BOOLEAN F1098_8224 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_nan", 1097, Current, 0, 0, 15174);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F1125_8877(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.is_infinity */
EIF_BOOLEAN F1098_8225 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_infinity", 1097, Current, 0, 0, 15175);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F1125_8881(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.to_integer */
EIF_INTEGER_32 F1098_8226 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("to_integer", 1097, Current, 1, 0, 15176);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_nan", EX_PRE);
		tb1 = (nstcall = 0, F1098_8224(Current));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_infinity", EX_PRE);
		tb1 = (nstcall = 0, F1098_8225(Current));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F1098_8250(Current));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	ti4_1 = (nstcall = 1, F1125_8898(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.to_double */
EIF_REAL_64 F1098_8227 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("to_double", 1097, Current, 0, 0, 15177);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_nan", EX_PRE);
		tb1 = (nstcall = 0, F1098_8224(Current));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_infinity", EX_PRE);
		tb1 = (nstcall = 0, F1098_8225(Current));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr8_1 = (nstcall = 1, F1125_8897(RTCW(tr1)));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.out */
EIF_REFERENCE F1098_8228 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("out", 1097, Current, 0, 0, 15178);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1125_8901(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
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

/* {SIMPLE_DECIMAL}.to_string */
EIF_REFERENCE F1098_8229 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("to_string", 1097, Current, 0, 0, 15179);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1125_8900(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tr1 = (nstcall = 0, F1098_8260(Current, Result));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.to_currency_string */
EIF_REFERENCE F1098_8230 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc1);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,loc5);
	RTLR(10,loc7);
	RTLIU(11);
	
	RTEAA("to_currency_string", 1097, Current, 7, 0, 15180);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 20L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tb1 = (nstcall = 0, F1098_8221(Current));
	if (tb1) {
		RTHOOK(3);
		tr1 = RTMS_EX_H("-",1,45);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(Current);
		tr3 = (nstcall = 1, F1125_8915(RTCW(tr2)));
		(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
		loc2 = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
		tr2 = *(EIF_REFERENCE *)(Current);
		(nstcall = -1, F1098_8214(RTCW(tr1), tr2));
		loc2 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(6);
	tr1 = RTMS_EX_H("$",1,36);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(7);
	tr1 = (nstcall = 1, F1098_8244(RTCW(loc2)));
	tr2 = (nstcall = 1, F1098_8229(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(8);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
	tr1 = (nstcall = 1, F1076_7679(RTCW(loc1), tw1));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc3))-743])(loc3));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTHOOK(10);
		ti4_1 = ((EIF_INTEGER_32) 1L);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(loc3))-776])(loc3, (EIF_REFERENCE) &ti4_1));
		loc4 = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(11);
		tr1 = RTMS_EX_H("0",1,48);
		loc4 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(12);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc3))-743])(loc3));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(13);
		ti4_1 = ((EIF_INTEGER_32) 2L);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(loc3))-776])(loc3, (EIF_REFERENCE) &ti4_1));
		loc5 = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(14);
		tr1 = RTMS_EX_H("00",2,12336);
		loc5 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(15);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc5)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 2L))) {
		RTHOOK(16);
		tr1 = RTMS_EX_H("0",1,48);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc5))-1080])(loc5, tr1));
	}
	RTHOOK(17);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_1_0_2_);
	(nstcall = -1, F1079_7731(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 5L))));
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(18);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_1_0_2_);
	loc6 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(19);
		if ((EIF_BOOLEAN) (loc6 < ((EIF_INTEGER_32) 1L))) break;
		RTHOOK(20);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc7)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc6) + ((EIF_INTEGER_32) 1L)) % ((EIF_INTEGER_32) 3L)) == ((EIF_INTEGER_32) 1L));
		}
		if (tb1) {
			RTHOOK(21);
			tr1 = RTMS_EX_H(",",1,44);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6290[Dtype(RTCW(loc7))-1080])(loc7, tr1));
		}
		RTHOOK(22);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc4))-776])(loc4, loc6));
		(nstcall = 1, F1081_7834(RTCW(loc7), tc1));
		RTHOOK(23);
		loc6--;
	}
	RTHOOK(24);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, loc7));
	RTHOOK(25);
	tr1 = RTMS_EX_H(".",1,46);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(26);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, loc5));
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("starts_with_dollar_or_minus", EX_POST);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tb2 = '\01';
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(Result))-776])(Result, ((EIF_INTEGER_32) 1L)));
			if (!(EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '$')) {
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(Result))-776])(Result, ((EIF_INTEGER_32) 1L)));
				tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '-');
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
	RTHOOK(28);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.dollars */
EIF_INTEGER_32 F1098_8231 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("dollars", 1097, Current, 1, 0, 15181);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = (nstcall = 1, F1125_8915(RTCW(tr2)));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1098_8250(RTCW(loc1)));
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
	ti4_1 = (nstcall = 1, F1125_8898(RTCW(tr2)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.cents */
EIF_INTEGER_32 F1098_8232 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,loc3);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("cents", 1097, Current, 3, 0, 15182);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1125_8915(RTCW(tr1)));
	tr1 = (nstcall = 0, F1098_8258(Current));
	tr3 = *(EIF_REFERENCE *)(RTCW(tr1));
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = (nstcall = 1, F1125_8908(RTCW(tr2), tr3, tr1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8850(RTCW(tr1), ((EIF_INTEGER_32) 100L)));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = (nstcall = 1, F1125_8905(RTCW(loc1), loc3, tr1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = (nstcall = 1, F1125_8911(RTCW(loc2), tr1));
	ti4_1 = (nstcall = 1, F1125_8898(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("valid_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 99L)))) {
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

/* {SIMPLE_DECIMAL}.is_less */
EIF_BOOLEAN F1098_8233 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_less", 1097, Current, 0, 1, 15183);
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	tb1 = (nstcall = 1, F1125_8893(RTCW(tr1), tr2));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F1098_8233(RTCW(arg1), Current));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.is_equal */
EIF_BOOLEAN F1098_8234 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 1097, Current, 0, 1, 15184);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	tb1 = (nstcall = 1, F1125_8895(RTCW(tr1), tr2));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1098_8233(Current, arg1));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (nstcall = 1, F1098_8233(RTCW(arg1), Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {SIMPLE_DECIMAL}.add */
EIF_REFERENCE F1098_8235 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("add", 1097, Current, 0, 1, 15185);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr4 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1125_8903(RTCW(tr2), tr3, tr4));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SIMPLE_DECIMAL}.subtract */
EIF_REFERENCE F1098_8236 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("subtract", 1097, Current, 0, 1, 15132);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr4 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1125_8904(RTCW(tr2), tr3, tr4));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SIMPLE_DECIMAL}.multiply */
EIF_REFERENCE F1098_8237 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("multiply", 1097, Current, 0, 1, 15133);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr4 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1125_8905(RTCW(tr2), tr3, tr4));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SIMPLE_DECIMAL}.divide */
EIF_REFERENCE F1098_8238 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("divide", 1097, Current, 0, 1, 15134);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_zero", EX_PRE);
		tb1 = (nstcall = 1, F1098_8220(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr4 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1125_8906(RTCW(tr2), tr3, tr4));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_DECIMAL}.integer_divide */
EIF_REFERENCE F1098_8239 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("integer_divide", 1097, Current, 0, 1, 15135);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_zero", EX_PRE);
		tb1 = (nstcall = 1, F1098_8220(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr4 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1125_8907(RTCW(tr2), tr3, tr4));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_is_integer", EX_POST);
		tb1 = (nstcall = 1, F1098_8223(RTCW(Result)));
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

/* {SIMPLE_DECIMAL}.modulo */
EIF_REFERENCE F1098_8240 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("modulo", 1097, Current, 0, 1, 15136);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_zero", EX_PRE);
		tb1 = (nstcall = 1, F1098_8220(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr4 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1125_8908(RTCW(tr2), tr3, tr4));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_DECIMAL}.negate */
EIF_REFERENCE F1098_8241 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("negate", 1097, Current, 0, 0, 15137);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1125_8914(RTCW(tr2), tr3));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("sign_flipped", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, F1098_8221(RTCW(Result)));
		tb3 = (nstcall = 0, F1098_8221(Current));
		if (!(EIF_BOOLEAN)(tb2 != tb3)) {
			tb2 = (nstcall = 0, F1098_8220(Current));
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
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.absolute */
EIF_REFERENCE F1098_8242 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("absolute", 1097, Current, 0, 0, 15138);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = (nstcall = 1, F1125_8915(RTCW(tr2)));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("result_not_negative", EX_POST);
		tb1 = (nstcall = 1, F1098_8221(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {SIMPLE_DECIMAL}.power */
EIF_REFERENCE F1098_8243 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("power", 1097, Current, 1, 1, 15139);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8850(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = (nstcall = 1, F1125_8892(RTCW(tr2), loc1));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SIMPLE_DECIMAL}.round_cents */
EIF_REFERENCE F1098_8244 (EIF_REFERENCE Current)
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
	
	RTEAA("round_cents", 1097, Current, 0, 0, 15140);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1098_8245(Current, ((EIF_INTEGER_32) 2L)));
	Result = (EIF_REFERENCE) tr1;
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

/* {SIMPLE_DECIMAL}.round */
EIF_REFERENCE F1098_8245 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("round", 1097, Current, 0, 1, 15141);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("places_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F1125_8909(RTCW(tr2), (EIF_INTEGER_32) -arg1, tr3));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SIMPLE_DECIMAL}.round_up */
EIF_REFERENCE F1098_8246 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("round_up", 1097, Current, 1, 1, 15142);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("places_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1125, 0x01).id, 1125, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = ((EIF_INTEGER_32) 0L);
	(nstcall = 1, F1126_8995(RTCW(loc1), ti4_1));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = (nstcall = 1, F1125_8909(RTCW(tr2), (EIF_INTEGER_32) -arg1, loc1));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_DECIMAL}.round_down */
EIF_REFERENCE F1098_8247 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("round_down", 1097, Current, 1, 1, 15143);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("places_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1125, 0x01).id, 1125, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = ((EIF_INTEGER_32) 1L);
	(nstcall = 1, F1126_8995(RTCW(loc1), ti4_1));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = (nstcall = 1, F1125_8909(RTCW(tr2), (EIF_INTEGER_32) -arg1, loc1));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_DECIMAL}.round_ceiling */
EIF_REFERENCE F1098_8248 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("round_ceiling", 1097, Current, 1, 1, 15144);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("places_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1125, 0x01).id, 1125, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = ((EIF_INTEGER_32) 2L);
	(nstcall = 1, F1126_8995(RTCW(loc1), ti4_1));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = (nstcall = 1, F1125_8909(RTCW(tr2), (EIF_INTEGER_32) -arg1, loc1));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_DECIMAL}.round_floor */
EIF_REFERENCE F1098_8249 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("round_floor", 1097, Current, 1, 1, 15145);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("places_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1125, 0x01).id, 1125, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1126_8972(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = ((EIF_INTEGER_32) 3L);
	(nstcall = 1, F1126_8995(RTCW(loc1), ti4_1));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = (nstcall = 1, F1125_8909(RTCW(tr2), (EIF_INTEGER_32) -arg1, loc1));
	(nstcall = -1, F1098_8214(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_DECIMAL}.truncate */
EIF_REFERENCE F1098_8250 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("truncate", 1097, Current, 0, 0, 15146);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1098_8247(Current, ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("result_is_integer", EX_POST);
		tb1 = (nstcall = 1, F1098_8223(RTCW(Result)));
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

/* {SIMPLE_DECIMAL}.percent_of */
EIF_REFERENCE F1098_8251 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("percent_of", 1097, Current, 1, 1, 15147);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("base_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("base_not_zero", EX_PRE);
		tb1 = (nstcall = 1, F1098_8220(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F1098_8212(RTCW(tr1), ((EIF_INTEGER_32) 100L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 1, F1098_8238(Current, arg1));
	tr2 = (nstcall = 1, F1098_8237(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_DECIMAL}.as_percentage */
EIF_REFERENCE F1098_8252 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("as_percentage", 1097, Current, 1, 0, 15148);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F1098_8212(RTCW(tr1), ((EIF_INTEGER_32) 100L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1098_8237(Current, loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SIMPLE_DECIMAL}.from_percentage */
EIF_REFERENCE F1098_8253 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("from_percentage", 1097, Current, 1, 0, 15149);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F1098_8212(RTCW(tr1), ((EIF_INTEGER_32) 100L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1098_8238(Current, loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SIMPLE_DECIMAL}.add_percent */
EIF_REFERENCE F1098_8254 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("add_percent", 1097, Current, 1, 1, 15150);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("percent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1098_8253(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F1098_8237(Current, loc1));
	tr1 = (nstcall = 1, F1098_8235(Current, tr1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_DECIMAL}.subtract_percent */
EIF_REFERENCE F1098_8255 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("subtract_percent", 1097, Current, 1, 1, 15151);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("percent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1098_8253(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F1098_8237(Current, loc1));
	tr1 = (nstcall = 1, F1098_8236(Current, tr1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {SIMPLE_DECIMAL}.split */
EIF_REFERENCE F1098_8256 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc5);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLIU(9);
	
	RTEAA("split", 1097, Current, 6, 1, 15152);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1097,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F1098_8212(RTCW(tr1), arg1));
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 1, F1098_8238(Current, loc5));
	tr2 = (nstcall = 1, F1098_8244(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F1098_8216(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc6 > arg1)) break;
		RTHOOK(8);
		tr1 = (nstcall = 1, F1098_8235(RTCW(loc2), loc1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		loc6++;
	}
	RTHOOK(10);
	tr1 = (nstcall = 1, F1098_8236(Current, loc2));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(11);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	tr2 = RTMS_EX_H("0.01",4,808333361);
	(nstcall = -1, F1098_8211(RTCW(tr1), tr2));
	loc4 = (EIF_REFERENCE) tr1;
	RTHOOK(12);
	loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (loc6 > arg1)) break;
		RTHOOK(14);
		tb1 = (nstcall = 1, F259_3265(RTCW(loc3), loc4));
		if (tb1) {
			RTHOOK(15);
			tr1 = (nstcall = 1, F1098_8235(RTCW(loc1), loc4));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
			RTHOOK(16);
			tr1 = (nstcall = 1, F1098_8236(RTCW(loc3), loc4));
			loc3 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(17);
			tr1 = (nstcall = 1, F1098_8241(RTCW(loc4)));
			tb1 = (nstcall = 1, F259_3263(RTCW(loc3), tr1));
			if (tb1) {
				RTHOOK(18);
				tr1 = (nstcall = 1, F1098_8236(RTCW(loc1), loc4));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
				RTHOOK(19);
				tr1 = (nstcall = 1, F1098_8235(RTCW(loc3), loc4));
				loc3 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(20);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, loc1));
			}
		}
		RTHOOK(21);
		loc6++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("correct_count", EX_POST);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("sum_equals_original", EX_POST);
		tr1 = (nstcall = 0, F1098_8261(Current, Result));
		tr2 = (nstcall = 1, F1098_8244(RTCW(tr1)));
		tr1 = (nstcall = 0, F1098_8244(Current));
		tb1 = (nstcall = 1, F1098_8234(RTCW(tr2), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.zero */
EIF_REFERENCE F1098_8257 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("zero", 1097, Current, 0, 0, 15153);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F1098_8216(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_is_zero", EX_POST);
		tb1 = (nstcall = 1, F1098_8220(RTCW(Result)));
		if (tb1) {
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

/* {SIMPLE_DECIMAL}.one */
EIF_REFERENCE F1098_8258 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("one", 1097, Current, 0, 0, 15154);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F1098_8217(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_is_one", EX_POST);
		ti4_1 = (nstcall = 1, F1098_8226(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
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

/* {SIMPLE_DECIMAL}.clean_string */
EIF_REFERENCE F1098_8259 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("clean_string", 1097, Current, 2, 1, 15155);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	(nstcall = -1, F1079_7731(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
		loc2 = (EIF_CHARACTER_32) tw1;
		RTHOOK(5);
		tb1 = '\0';
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '$';
		if ((EIF_BOOLEAN)(loc2 != tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ',';
			tb2 = (EIF_BOOLEAN)(loc2 != tw1);
		}
		if (tb2) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
			tb1 = (EIF_BOOLEAN)(loc2 != tw1);
		}
		if (tb1) {
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) loc2;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
		}
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.strip_trailing_zeros */
EIF_REFERENCE F1098_8260 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("strip_trailing_zeros", 1097, Current, 1, 1, 15156);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F1_14(arg1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_CHARACTER_8, EIF_INTEGER_32)) R6247[Dtype(RTCW(Result))-1079])(Result, (EIF_CHARACTER_8) '.', ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		for (;;) {
			RTHOOK(4);
			tb1 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
			if (!(EIF_BOOLEAN) (ti4_1 <= loc1)) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(Result))-776])(Result, ti4_1));
				tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0');
			}
			if (tb1) break;
			RTHOOK(5);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R6233[Dtype(RTCW(Result))-1080])(Result, ((EIF_INTEGER_32) 1L)));
		}
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == loc1)) {
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R6233[Dtype(RTCW(Result))-1080])(Result, ((EIF_INTEGER_32) 1L)));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.sum_list */
EIF_REFERENCE F1098_8261 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,loc1);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("sum_list", 1097, Current, 2, 1, 15157);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
	(nstcall = -1, F1098_8216(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 1, F867_5799(RTCW(arg1)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc2));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc2));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		tr1 = (nstcall = 1, F1098_8235(RTCW(Result), loc1));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		(nstcall = 1, F421_4818(loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_DECIMAL}.decimal_typeref */
static EIF_REFERENCE F1098_8262_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("decimal_typeref", 1097, Current, 0, 0, 15158);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_ref_only_never_call", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
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
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1098_8262 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(eif_new_type(1097, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F1098_8262_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {SIMPLE_DECIMAL}._invariant */
void F1098_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 370, Current, 0, 0);
	RTIT("decimal_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("context_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit371 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
