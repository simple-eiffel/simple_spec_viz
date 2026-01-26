/*
 * Code for class JSON_NUMBER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js369.h"
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

/* {JSON_NUMBER}.make_integer */
void F1092_8178 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	
	RTEAA("make_integer", 1091, Current, 0, 1, 15093);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = eif_out__i8_s1(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_NUMBER}.make_natural */
void F1092_8179 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
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
	
	RTEAA("make_natural", 1091, Current, 0, 1, 15094);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = eif_out__u8_s1(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_NUMBER}.make_real */
void F1092_8180 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("make_real", 1091, Current, 0, 1, 15095);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = eif_is_nan_real_64 (arg1);
	if (tb1) {
		RTHOOK(2);
		tr1 = RTOUCR(315,(nstcall = 0, F1092_8182), (Current));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tb1 = eif_is_negative_infinity_real_64 (arg1);
		if (tb1) {
			RTHOOK(4);
			tr1 = RTOUCR(316,(nstcall = 0, F1092_8183), (Current));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(5);
			tb1 = eif_is_positive_infinity_real_64 (arg1);
			if (tb1) {
				RTHOOK(6);
				tr1 = RTOUCR(317,(nstcall = 0, F1092_8184), (Current));
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(7);
				tr1 = eif_out__r8_s1(arg1);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
			}
		}
	}
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {JSON_NUMBER}.is_number */
EIF_BOOLEAN F1092_8181 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {JSON_NUMBER}.nan_real_value */
static EIF_REFERENCE F1092_8182_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(315)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("nan_real_value", 1091, Current, 0, 0, 15097);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1079, 0x01).id, 1079, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("NaN",3,5136718);
	(nstcall = -1, F1079_7733(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1092_8182 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(315,F1092_8182_body,(Current));
}

/* {JSON_NUMBER}.negative_infinity_real_value */
static EIF_REFERENCE F1092_8183_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(316)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("negative_infinity_real_value", 1091, Current, 0, 0, 15098);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1079, 0x01).id, 1079, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("-Infinity",9,2107636601);
	(nstcall = -1, F1079_7733(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1092_8183 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(316,F1092_8183_body,(Current));
}

/* {JSON_NUMBER}.positive_infinity_real_value */
static EIF_REFERENCE F1092_8184_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(317)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("positive_infinity_real_value", 1091, Current, 0, 0, 15099);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1079, 0x01).id, 1079, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr2 = RTMS_EX_H("Infinity",8,1600908409);
	(nstcall = -1, F1079_7733(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1092_8184 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(317,F1092_8184_body,(Current));
}

/* {JSON_NUMBER}.item */
EIF_REFERENCE F1092_8185 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {JSON_NUMBER}.numeric_type */
EIF_INTEGER_32 F1092_8186 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {JSON_NUMBER}.hash_code */
EIF_INTEGER_32 F1092_8187 (EIF_REFERENCE Current)
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
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("hash_code", 1091, Current, 0, 0, 15102);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5229[Dtype(RTCW(tr1))-962])(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {JSON_NUMBER}.representation */
EIF_REFERENCE F1092_8188 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("representation", 1091, Current, 1, 0, 15103);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	tb1 = '\0';
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6488[dtype-1091])(Current))) {
		tb2 = '\01';
		tb3 = '\01';
		tr1 = RTOUCR(315,(nstcall = 0, F1092_8182), (Current));
		if (!(EIF_BOOLEAN)(loc1 == tr1)) {
			tr1 = RTOUCR(316,(nstcall = 0, F1092_8183), (Current));
			tb3 = (EIF_BOOLEAN)(loc1 == tr1);
		}
		if (!tb3) {
			tr1 = RTOUCR(317,(nstcall = 0, F1092_8184), (Current));
			tb2 = (EIF_BOOLEAN)(loc1 == tr1);
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(1089, 0x01).id, 1089, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F1090_8153(RTCW(tr1)));
	} else {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1076_7654(RTCW(loc1)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.integer_64_item */
EIF_INTEGER_64 F1092_8189 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("integer_64_item", 1091, Current, 0, 0, 15104);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F1092_8193(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti8_1 = (nstcall = 1, F1076_7668(RTCW(tr1)));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.natural_64_item */
EIF_NATURAL_64 F1092_8190 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	
	RTEAA("natural_64_item", 1091, Current, 0, 0, 15105);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_natural", EX_PRE);
		RTTE((nstcall = 0, F1092_8194(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu8_1 = (nstcall = 1, F1076_7673(RTCW(tr1)));
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.double_item */
EIF_REAL_64 F1092_8191 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("double_item", 1091, Current, 0, 0, 15106);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_real", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6488[dtype-1091])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(315,(nstcall = 0, F1092_8182), (Current));
	if ((EIF_BOOLEAN)(tr1 == tr2)) {
		RTHOOK(3);
		Result = (EIF_REAL_64) (nstcall = 0, F1025_7344(Current));
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTOUCR(316,(nstcall = 0, F1092_8183), (Current));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
			RTHOOK(5);
			Result = (EIF_REAL_64) (nstcall = 0, F1025_7345(Current));
		} else {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTOUCR(317,(nstcall = 0, F1092_8184), (Current));
			if ((EIF_BOOLEAN)(tr1 == tr2)) {
				RTHOOK(7);
				Result = (EIF_REAL_64) (nstcall = 0, F1025_7346(Current));
			} else {
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr8_1 = (nstcall = 1, F1076_7677(RTCW(tr1)));
				Result = (EIF_REAL_64) tr8_1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.real_64_item */
EIF_REAL_64 F1092_8192 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("real_64_item", 1091, Current, 0, 0, 15107);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_real", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6488[dtype-1091])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = RTOUCR(315,(nstcall = 0, F1092_8182), (Current));
	if ((EIF_BOOLEAN)(tr1 == tr2)) {
		RTHOOK(3);
		Result = (EIF_REAL_64) (nstcall = 0, F1025_7344(Current));
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTOUCR(316,(nstcall = 0, F1092_8183), (Current));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
			RTHOOK(5);
			Result = (EIF_REAL_64) (nstcall = 0, F1025_7345(Current));
		} else {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTOUCR(317,(nstcall = 0, F1092_8184), (Current));
			if ((EIF_BOOLEAN)(tr1 == tr2)) {
				RTHOOK(7);
				Result = (EIF_REAL_64) (nstcall = 0, F1025_7346(Current));
			} else {
				RTHOOK(8);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr8_1 = (nstcall = 1, F1076_7677(RTCW(tr1)));
				Result = (EIF_REAL_64) tr8_1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.is_integer */
EIF_BOOLEAN F1092_8193 (EIF_REFERENCE Current)
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
	
	RTEAA("is_integer", 1091, Current, 0, 0, 15108);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.is_natural */
EIF_BOOLEAN F1092_8194 (EIF_REFERENCE Current)
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
	
	RTEAA("is_natural", 1091, Current, 0, 0, 15109);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.is_double */
EIF_BOOLEAN F1092_8195 (EIF_REFERENCE Current)
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
	
	RTEAA("is_double", 1091, Current, 0, 0, 15110);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.is_real */
EIF_BOOLEAN F1092_8196 (EIF_REFERENCE Current)
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
	
	RTEAA("is_real", 1091, Current, 0, 0, 15111);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.accept */
void F1092_8197 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("accept", 1091, Current, 0, 1, 15112);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_visitor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 1, F244_2985(RTCW(arg1), Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_NUMBER}.is_equal */
EIF_BOOLEAN F1092_8198 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("is_equal", 1091, Current, 0, 1, 15113);
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
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(tr1))-0])(tr1, tr2));
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
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_NUMBER}.debug_output */
EIF_REFERENCE F1092_8199 (EIF_REFERENCE Current)
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
	
	RTEAA("debug_output", 1091, Current, 0, 0, 15114);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1076_7654(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
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

/* {JSON_NUMBER}._invariant */
void F1092_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTEAINV(l_feature_name, 368, Current, 1, 0);
	RTIT("item_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if ((EIF_TRUE)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("nan_only_for_real", Current);
	tb1 = '\01';
	tr1 = RTOUCR(315,(nstcall = 0, F1092_8182), (Current));
	tb2 = (nstcall = 1, F1076_7643(loc1, tr1));
	if (tb2) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6488[dtype-1091])(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("neg_inf_only_for_real", Current);
	tb1 = '\01';
	tr1 = RTOUCR(316,(nstcall = 0, F1092_8183), (Current));
	tb2 = (nstcall = 1, F1076_7643(loc1, tr1));
	if (tb2) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6488[dtype-1091])(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("inf_only_for_real", Current);
	tb1 = '\01';
	tr1 = RTOUCR(317,(nstcall = 0, F1092_8184), (Current));
	tb2 = (nstcall = 1, F1076_7643(loc1, tr1));
	if (tb2) {
		tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6488[dtype-1091])(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit369 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
