/*
 * Code for class INTEGER_64_REF
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F314_6595(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6596(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6597(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6598(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6599(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6600(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6601(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6602(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6603(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6604(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F314_6605(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6606(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6607(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6608(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6609(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6610(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6611(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6612(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6613(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6614(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6615(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6616(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6617(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6618(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6619(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6620(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6621(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F314_6622(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6623(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6624(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6625(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6626(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6627(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6628(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6629(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6630(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6631(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6632(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6633(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6634(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6635(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6636(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6637(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6638(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6639(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6640(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6641(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6642(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6643(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6644(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6645(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6646(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6647(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6648(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6649(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6650(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6651(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6652(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6653(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6654(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6655(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6656(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6657(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6658(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6659(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6660(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6661(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6662(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F314_6663(EIF_REFERENCE);
extern EIF_TYPED_VALUE F314_6664(EIF_REFERENCE);
extern void F314_9325(EIF_REFERENCE, int);
extern void EIF_Minit314(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
#include "eif_helpers.h"
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

/* {INTEGER_64_REF}.item */
EIF_TYPED_VALUE F314_6595 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = *(EIF_INTEGER_64 *)(Current + RTWA(5502,Dtype(Current)));
	return r;
}


/* {INTEGER_64_REF}.hash_code */
EIF_TYPED_VALUE F314_6596 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13283);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13283);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 2147483647L);
	ti8_2 = eif_bit_and(ti8_1,ui8_1);
	ti4_1 = (EIF_INTEGER_32) ti8_2;
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui8_1
}

/* {INTEGER_64_REF}.sign */
EIF_TYPED_VALUE F314_6597 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sign";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13284);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13284);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	if ((EIF_BOOLEAN) (ti8_1 > (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		if ((EIF_BOOLEAN) (ti8_1 < (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("three_way", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5220, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2990, dtype))(Current, ur1x)).it_i4);
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
}

/* {INTEGER_64_REF}.one */
EIF_TYPED_VALUE F314_6598 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "one";
	RTEX;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13285);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13285);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
}

/* {INTEGER_64_REF}.zero */
EIF_TYPED_VALUE F314_6599 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "zero";
	RTEX;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13286);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13286);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
}

/* {INTEGER_64_REF}.ascii_char */
EIF_TYPED_VALUE F314_6600 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ascii_char";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13287);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13287);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character_code", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5509, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tc1 = (EIF_CHARACTER_8) ti8_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {INTEGER_64_REF}.min_value */
EIF_TYPED_VALUE F314_6601 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = (EIF_INTEGER_64) ((EIF_INTEGER_64) RTI64C(0x8000000000000000));
	return r;
}

/* {INTEGER_64_REF}.max_value */
EIF_TYPED_VALUE F314_6602 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT64;
	r.it_i8 = (EIF_INTEGER_64) ((EIF_INTEGER_64) RTI64C(9223372036854775807));
	return r;
}

/* {INTEGER_64_REF}.is_less */
EIF_TYPED_VALUE F314_6603 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13290);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13290);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
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
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti8_1 < ti8_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2903, "is_less", arg1))(arg1, ur1x)).it_b);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {INTEGER_64_REF}.is_equal */
EIF_TYPED_VALUE F314_6604 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13291);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13291);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
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
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ti8_2 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_1 == ti8_2);
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
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12, dtype))(Current, ur1x)).it_b);
		if (tb2) {
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
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2903, "is_less", Current))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2903, "is_less", arg1))(arg1, ur1x)).it_b);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {INTEGER_64_REF}.set_item */
void F314_6605 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_item";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_INTEGER_64 ti8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13292);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13292);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5502, 0x24000000, 1); /* item */
	*(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype)) = (EIF_INTEGER_64) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("item_set", EX_POST);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		if ((EIF_BOOLEAN)(ti8_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {INTEGER_64_REF}.divisible */
EIF_TYPED_VALUE F314_6606 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "divisible";
	RTEX;
#define arg1 arg1x.it_r
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13293);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13293);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
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
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value", EX_POST);
		ti8_1 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {INTEGER_64_REF}.exponentiable */
EIF_TYPED_VALUE F314_6607 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exponentiable";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 313, Current, 3, 1, 13294);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13294);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(303, 0x01), 0x01);
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
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(316, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(5557, "item", loc1));
		if (!(EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
			ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
			tb1 = (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
		}
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(4);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(334, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			tb1 = '\01';
			tr4_1 = *(EIF_REAL_32 *)(loc2 + RTVA(5882, "item", loc2));
			if (!((EIF_BOOLEAN) eif_is_greater_equal_real_32 (tr4_1, (EIF_REAL_32) (EIF_REAL_64) 0.0))) {
				ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
				tb1 = (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
			}
			Result = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(6);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(337, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				RTHOOK(7);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				tb1 = '\01';
				tr8_1 = *(EIF_REAL_64 *)(loc3 + RTVA(5916, "item", loc3));
				if (!(EIF_BOOLEAN) eif_is_greater_equal_real_64 (tr8_1, (EIF_REAL_64) 0.0)) {
					ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
					tb1 = (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
				}
				Result = (EIF_BOOLEAN) tb1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("safe_values", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		ur1 = RTLN(eif_new_type(317, 0x00).id);
		*(EIF_INTEGER_32 *)ur1 = ((EIF_INTEGER_32) 0L);
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9, "conforms_to", arg1))(arg1, ur1x)).it_b);
		if (tb4) {
			ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
			tb3 = (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
		}
		if (!tb3) {
			tb3 = '\0';
			ur1 = RTLN(eif_new_type(338, 0x00).id);
			*(EIF_REAL_64 *)ur1 = (EIF_REAL_64) 0.0;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(9, "conforms_to", arg1))(arg1, ur1x)).it_b);
			if (tb4) {
				ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
				tb3 = (EIF_BOOLEAN) (ti8_1 > (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
			}
			tb2 = tb3;
		}
		if (tb2) {
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
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {INTEGER_64_REF}.is_hashable */
EIF_TYPED_VALUE F314_6608 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_hashable";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13295);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13295);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {INTEGER_64_REF}.is_valid_character_code */
EIF_TYPED_VALUE F314_6609 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_character_code";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13296);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13296);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5509, dtype))(Current)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {INTEGER_64_REF}.is_valid_character_8_code */
EIF_TYPED_VALUE F314_6610 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_character_8_code";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13297);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13297);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5986, 344))(Current)).it_i4);
	ti8_2 = (EIF_INTEGER_64) ti4_1;
	if ((EIF_BOOLEAN) (ti8_1 >= ti8_2)) {
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5987, 344))(Current)).it_i4);
		ti8_2 = (EIF_INTEGER_64) ti4_1;
		tb1 = (EIF_BOOLEAN) (ti8_1 <= ti8_2);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5986, 344))(Current)).it_i4);
		ti8_2 = (EIF_INTEGER_64) ti4_1;
		if ((EIF_BOOLEAN) (ti8_1 >= ti8_2)) {
			ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5987, 344))(Current)).it_i4);
			ti8_2 = (EIF_INTEGER_64) ti4_1;
			tb1 = (EIF_BOOLEAN) (ti8_1 <= ti8_2);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {INTEGER_64_REF}.is_valid_character_32_code */
EIF_TYPED_VALUE F314_6611 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_character_32_code";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13298);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13298);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	if ((EIF_BOOLEAN) (ti8_1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		tu8_1 = (EIF_NATURAL_64) ti8_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5954, 341))(Current)).it_n4);
		tu8_2 = (EIF_NATURAL_64) tu4_1;
		tb1 = (EIF_BOOLEAN) (tu8_1 <= tu8_2);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("in_bounds", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		if ((EIF_BOOLEAN) (ti8_1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
			tu8_1 = (EIF_NATURAL_64) ti8_1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5953, 341))(Current)).it_n4);
			tu8_2 = (EIF_NATURAL_64) tu4_1;
			tb2 = (EIF_BOOLEAN) (tu8_1 >= tu8_2);
		}
		if (tb2) {
			ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
			tu8_1 = (EIF_NATURAL_64) ti8_1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5954, 341))(Current)).it_n4);
			tu8_2 = (EIF_NATURAL_64) tu4_1;
			tb1 = (EIF_BOOLEAN) (tu8_1 <= tu8_2);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {INTEGER_64_REF}.abs */
EIF_TYPED_VALUE F314_6612 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "abs";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13299);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13299);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x24000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti8_1 = *(EIF_INTEGER_64 *)(tr1 + RTVA(5502, "item", tr1));
	Result = (EIF_INTEGER_64) ti8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_absolute_value", EX_POST);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti8_2 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ti8_1) || (EIF_BOOLEAN)(Result == (EIF_INTEGER_64) -ti8_2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef up1
}

/* {INTEGER_64_REF}.plus */
EIF_TYPED_VALUE F314_6613 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "plus";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13300);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13300);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
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
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ui8_1 = (EIF_INTEGER_64) (ti8_1 + ti8_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("commutative", EX_POST);
		ur1 = RTCCL(Current);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5223, "plus", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(Result, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui8_1
#undef arg1
}

/* {INTEGER_64_REF}.minus */
EIF_TYPED_VALUE F314_6614 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "minus";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13301);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13301);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
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
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ui8_1 = (EIF_INTEGER_64) (ti8_1 - ti8_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
#undef arg1
}

/* {INTEGER_64_REF}.product */
EIF_TYPED_VALUE F314_6615 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "product";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13302);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13302);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
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
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ui8_1 = (EIF_INTEGER_64) (ti8_1 * ti8_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
#undef arg1
}

/* {INTEGER_64_REF}.quotient */
EIF_TYPED_VALUE F314_6616 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "quotient";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13303);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13303);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5221, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	Result = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (ti8_1) /  (EIF_REAL_64) (ti8_2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur1
#undef arg1
}

/* {INTEGER_64_REF}.identity */
EIF_TYPED_VALUE F314_6617 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "identity";
	RTEX;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13304);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13304);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ui8_1 = (EIF_INTEGER_64) ti8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
}

/* {INTEGER_64_REF}.opposite */
EIF_TYPED_VALUE F314_6618 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "opposite";
	RTEX;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13305);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13305);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ui8_1 = (EIF_INTEGER_64) -ti8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
}

/* {INTEGER_64_REF}.integer_quotient */
EIF_TYPED_VALUE F314_6619 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "integer_quotient";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13306);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13306);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5221, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ui8_1 = (EIF_INTEGER_64) (ti8_1 / ti8_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui8_1
#undef arg1
}

/* {INTEGER_64_REF}.integer_remainder */
EIF_TYPED_VALUE F314_6620 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "integer_remainder";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13307);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13307);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5221, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ui8_1 = (EIF_INTEGER_64) (ti8_1 % ti8_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui8_1
#undef arg1
}

/* {INTEGER_64_REF}.power */
EIF_TYPED_VALUE F314_6621 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "power";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13308);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13308);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (ti8_1), (EIF_REAL_64) (arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef arg1
}

/* {INTEGER_64_REF}.make_from_reference */
void F314_6622 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_reference";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13309);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13309);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ui8_1 = ti8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5507, dtype))(Current, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_set", EX_POST);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
		if ((EIF_BOOLEAN)(ti8_1 == ti8_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui8_1
#undef arg1
}

/* {INTEGER_64_REF}.to_reference */
EIF_TYPED_VALUE F314_6623 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_reference";
	RTEX;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13310);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13310);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(313, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ui8_1 = ti8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("to_reference_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
}

/* {INTEGER_64_REF}.to_boolean */
EIF_TYPED_VALUE F314_6624 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_boolean";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13311);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13311);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_1 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {INTEGER_64_REF}.as_natural_8 */
EIF_TYPED_VALUE F314_6625 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_natural_8";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13312);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13312);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tu1_1 = (EIF_NATURAL_8) ti8_1;
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
}

/* {INTEGER_64_REF}.as_natural_16 */
EIF_TYPED_VALUE F314_6626 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_natural_16";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13313);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13313);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x34000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tu2_1 = (EIF_NATURAL_16) ti8_1;
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT16; r.it_n2 = Result; return r; }
}

/* {INTEGER_64_REF}.as_natural_32 */
EIF_TYPED_VALUE F314_6627 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_natural_32";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13314);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13314);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tu4_1 = (EIF_NATURAL_32) ti8_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {INTEGER_64_REF}.as_natural_64 */
EIF_TYPED_VALUE F314_6628 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_natural_64";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13315);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13315);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tu8_1 = (EIF_NATURAL_64) ti8_1;
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {INTEGER_64_REF}.as_integer_8 */
EIF_TYPED_VALUE F314_6629 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_integer_8";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13316);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13316);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x0C000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti1_1 = (EIF_INTEGER_8) ti8_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT8; r.it_i1 = Result; return r; }
}

/* {INTEGER_64_REF}.as_integer_16 */
EIF_TYPED_VALUE F314_6630 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_integer_16";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13317);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13317);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x14000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti2_1 = (EIF_INTEGER_16) ti8_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT16; r.it_i2 = Result; return r; }
}

/* {INTEGER_64_REF}.as_integer_32 */
EIF_TYPED_VALUE F314_6631 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_integer_32";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13318);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13318);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {INTEGER_64_REF}.as_integer_64 */
EIF_TYPED_VALUE F314_6632 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_integer_64";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13319);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13319);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x24000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = (EIF_INTEGER_64) ti8_1;
	Result = (EIF_INTEGER_64) ti8_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
}

/* {INTEGER_64_REF}.to_natural_8 */
EIF_TYPED_VALUE F314_6633 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_natural_8";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13320);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13320);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		RTTE((EIF_BOOLEAN) (ti8_1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5833, 332))(Current)).it_n1);
		ti8_2 = (EIF_INTEGER_64) tu1_1;
		RTTE((EIF_BOOLEAN) (ti8_1 <= ti8_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x30000000, 1,0); /* Result */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5518, dtype))(Current)).it_n1);
	Result = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
}

/* {INTEGER_64_REF}.to_natural_16 */
EIF_TYPED_VALUE F314_6634 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_natural_16";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13321);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13321);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		RTTE((EIF_BOOLEAN) (ti8_1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		tu2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5453, 311))(Current)).it_n2);
		ti8_2 = (EIF_INTEGER_64) tu2_1;
		RTTE((EIF_BOOLEAN) (ti8_1 <= ti8_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x34000000, 1,0); /* Result */
	tu2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5519, dtype))(Current)).it_n2);
	Result = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT16; r.it_n2 = Result; return r; }
}

/* {INTEGER_64_REF}.to_natural_32 */
EIF_TYPED_VALUE F314_6635 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_natural_32";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13322);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13322);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		RTTE((EIF_BOOLEAN) (ti8_1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5781, 329))(Current)).it_n4);
		ti8_2 = (EIF_INTEGER_64) tu4_1;
		RTTE((EIF_BOOLEAN) (ti8_1 <= ti8_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5520, dtype))(Current)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
}

/* {INTEGER_64_REF}.to_natural_64 */
EIF_TYPED_VALUE F314_6636 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_natural_64";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13323);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13323);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_non_negative", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		RTTE((EIF_BOOLEAN) (ti8_1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5521, dtype))(Current)).it_n8);
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {INTEGER_64_REF}.to_integer_8 */
EIF_TYPED_VALUE F314_6637 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_integer_8";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_8 ti1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13324);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13324);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5672, 323))(Current)).it_i1);
		ti8_2 = (EIF_INTEGER_64) ti1_1;
		RTTE((EIF_BOOLEAN) (ti8_1 >= ti8_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5673, 323))(Current)).it_i1);
		ti8_2 = (EIF_INTEGER_64) ti1_1;
		RTTE((EIF_BOOLEAN) (ti8_1 <= ti8_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x0C000000, 1,0); /* Result */
	ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5522, dtype))(Current)).it_i1);
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT8; r.it_i1 = Result; return r; }
}

/* {INTEGER_64_REF}.to_integer_16 */
EIF_TYPED_VALUE F314_6638 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_integer_16";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_16 ti2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT16, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13325);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13325);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5616, 320))(Current)).it_i2);
		ti8_2 = (EIF_INTEGER_64) ti2_1;
		RTTE((EIF_BOOLEAN) (ti8_1 >= ti8_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5617, 320))(Current)).it_i2);
		ti8_2 = (EIF_INTEGER_64) ti2_1;
		RTTE((EIF_BOOLEAN) (ti8_1 <= ti8_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x14000000, 1,0); /* Result */
	ti2_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5523, dtype))(Current)).it_i2);
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT16; r.it_i2 = Result; return r; }
}

/* {INTEGER_64_REF}.to_integer */
EIF_TYPED_VALUE F314_6639 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_integer";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13326);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13326);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5560, 317))(Current)).it_i4);
		ti8_2 = (EIF_INTEGER_64) ti4_1;
		RTTE((EIF_BOOLEAN) (ti8_1 >= ti8_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5561, 317))(Current)).it_i4);
		ti8_2 = (EIF_INTEGER_64) ti4_1;
		RTTE((EIF_BOOLEAN) (ti8_1 <= ti8_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5524, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {INTEGER_64_REF}.to_integer_32 */
EIF_TYPED_VALUE F314_6640 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_integer_32";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13327);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13327);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_too_small", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5560, 317))(Current)).it_i4);
		ti8_2 = (EIF_INTEGER_64) ti4_1;
		RTTE((EIF_BOOLEAN) (ti8_1 >= ti8_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5561, 317))(Current)).it_i4);
		ti8_2 = (EIF_INTEGER_64) ti4_1;
		RTTE((EIF_BOOLEAN) (ti8_1 <= ti8_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5524, dtype))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {INTEGER_64_REF}.to_integer_64 */
EIF_TYPED_VALUE F314_6641 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_integer_64";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13328);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13328);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x24000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
}

/* {INTEGER_64_REF}.to_real */
EIF_TYPED_VALUE F314_6642 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_real";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13329);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13329);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x18000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tr4_1 = (EIF_REAL_32) (ti8_1);
	Result = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL32; r.it_r4 = Result; return r; }
}

/* {INTEGER_64_REF}.to_double */
EIF_TYPED_VALUE F314_6643 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_double";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13330);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13330);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tr8_1 = (EIF_REAL_64) (ti8_1);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {INTEGER_64_REF}.to_binary_string */
EIF_TYPED_VALUE F314_6644 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_binary_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc2 = (EIF_INTEGER_64) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT64, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 313, Current, 3, 0, 13331);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13331);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3058, 233))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '0';
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6236, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x24000000, 1, 0); /* loc2 */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	loc2 = (EIF_INTEGER_64) ti8_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
		ti8_1 = eif_bit_and(loc2,ui8_1);
		tr1 = RTLN(eif_new_type(314, 0x00).id);
		*(EIF_INTEGER_64 *)tr1 = ti8_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5538, "to_binary_character", tr1))(tr1)).it_c1);
		uc1 = tc1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4411, "put", Result))(Result, uc1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(2, 0x24000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti8_1 = eif_bit_shift_right(loc2,ui4_1);
		loc2 = (EIF_INTEGER_64) ti8_1;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3058, 233))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("binary", EX_POST);
		RTNHOOK(10,1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(11);
			tr1 = RTMS_EX_H("01",2,12337);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc3))(loc3)).it_c1);
			uc1 = tc1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4370, "has", tr1))(tr1, uc1x)).it_b);
			tb1 = tb3;
			RTNHOOK(11,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui8_1
#undef ui4_1
#undef uc1
}

/* {INTEGER_64_REF}.to_binary_character */
EIF_TYPED_VALUE F314_6645 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_binary_character";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13332);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13332);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti8_2 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 0L) <= ti8_1) && (EIF_BOOLEAN) (ti8_2 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	ui4_1 = ti4_1;
	tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) '0') + ui4_1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("01",2,12337);
		uc1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4370, "has", tr1))(tr1, uc1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {INTEGER_64_REF}.to_octal_string */
EIF_TYPED_VALUE F314_6646 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_octal_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc2 = (EIF_INTEGER_64) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT64, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 313, Current, 3, 0, 13333);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13333);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3058, 233))(Current)).it_i4);
	tr8_1 = (EIF_REAL_64) ceil ((double)(EIF_REAL_64) ((EIF_REAL_64) (ti4_1) /  (EIF_REAL_64) (((EIF_INTEGER_32) 3L))));
	ti4_1 = (EIF_INTEGER_32) tr8_1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '0';
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6236, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x24000000, 1, 0); /* loc2 */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	loc2 = (EIF_INTEGER_64) ti8_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
		ti8_1 = eif_bit_and(loc2,ui8_1);
		tr1 = RTLN(eif_new_type(314, 0x00).id);
		*(EIF_INTEGER_64 *)tr1 = ti8_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5540, "to_octal_character", tr1))(tr1)).it_c1);
		uc1 = tc1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4411, "put", Result))(Result, uc1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(2, 0x24000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 3L);
		ti8_1 = eif_bit_shift_right(loc2,ui4_1);
		loc2 = (EIF_INTEGER_64) ti8_1;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3058, 233))(Current)).it_i4);
		tr8_1 = (EIF_REAL_64) ceil ((double)(EIF_REAL_64) ((EIF_REAL_64) (ti4_2) /  (EIF_REAL_64) (((EIF_INTEGER_32) 3L))));
		ti4_2 = (EIF_INTEGER_32) tr8_1;
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("octal", EX_POST);
		RTNHOOK(10,1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(11);
			tr1 = RTMS_EX_H("01234567",8,2025887031);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc3))(loc3)).it_c1);
			uc1 = tc1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4370, "has", tr1))(tr1, uc1x)).it_b);
			tb1 = tb3;
			RTNHOOK(11,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui8_1
#undef ui4_1
#undef uc1
}

/* {INTEGER_64_REF}.to_octal_character */
EIF_TYPED_VALUE F314_6647 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_octal_character";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13334);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13334);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti8_2 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 0L) <= ti8_1) && (EIF_BOOLEAN) (ti8_2 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	ui4_1 = ti4_1;
	tc1 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) '0') + ui4_1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("01234567",8,2025887031);
		uc1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4370, "has", tr1))(tr1, uc1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {INTEGER_64_REF}.to_hex_string */
EIF_TYPED_VALUE F314_6648 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_hex_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_64 loc2 = (EIF_INTEGER_64) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT64, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 313, Current, 3, 0, 13335);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13335);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3058, 233))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 4L));
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '0';
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6236, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(2, 0x24000000, 1, 0); /* loc2 */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	loc2 = (EIF_INTEGER_64) ti8_1;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(5);
		ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 15L);
		ti8_1 = eif_bit_and(loc2,ui8_1);
		tr1 = RTLN(eif_new_type(314, 0x00).id);
		*(EIF_INTEGER_64 *)tr1 = ti8_1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5542, "to_hex_character", tr1))(tr1)).it_c1);
		uc1 = tc1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4411, "put", Result))(Result, uc1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(2, 0x24000000, 1, 0); /* loc2 */
		ui4_1 = ((EIF_INTEGER_32) 4L);
		ti8_1 = eif_bit_shift_right(loc2,ui4_1);
		loc2 = (EIF_INTEGER_64) ti8_1;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("result_valid_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3058, 233))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 4L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("hexadecimal", EX_POST);
		RTNHOOK(10,1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc3))(loc3)).it_b);
			if (tb2) break;
			RTHOOK(11);
			tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc3))(loc3)).it_c1);
			uc1 = tc1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4370, "has", tr1))(tr1, uc1x)).it_b);
			tb1 = tb3;
			RTNHOOK(11,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc3))(loc3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui8_1
#undef ui4_1
#undef uc1
}

/* {INTEGER_64_REF}.to_hex_character */
EIF_TYPED_VALUE F314_6649 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_hex_character";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 313, Current, 1, 0, 13336);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13336);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("in_bounds", EX_PRE);
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti8_2 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 0L) <= ti8_1) && (EIF_BOOLEAN) (ti8_2 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 15L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	if ((EIF_BOOLEAN) (loc1 <= ((EIF_INTEGER_32) 9L))) {
		RTHOOK(4);
		tc1 = (EIF_CHARACTER_8) '0';
	} else {
		RTHOOK(5);
		ui4_1 = ((EIF_INTEGER_32) 10L);
		tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) (EIF_CHARACTER_8) 'A') - ui4_1);
		tc1 = tc2;
	}
	ui4_1 = loc1;
	tc2 = (EIF_CHARACTER_8) (((EIF_INTEGER_32) tc1) + ui4_1);
	Result = (EIF_CHARACTER_8) tc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("valid_character", EX_POST);
		tr1 = RTMS_EX_H("0123456789ABCDEF",16,1319696198);
		uc1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4370, "has", tr1))(tr1, uc1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef uc1
}

/* {INTEGER_64_REF}.to_character */
EIF_TYPED_VALUE F314_6650 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13337);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13337);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5509, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tc1 = (EIF_CHARACTER_8) ti8_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {INTEGER_64_REF}.to_character_8 */
EIF_TYPED_VALUE F314_6651 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_8";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13338);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13338);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5509, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tc1 = (EIF_CHARACTER_8) ti8_1;
	Result = (EIF_CHARACTER_8) tc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {INTEGER_64_REF}.to_character_32 */
EIF_TYPED_VALUE F314_6652 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_character_32";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13339);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13339);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_character", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5510, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	tw1 = (EIF_CHARACTER_32) ti8_1;
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
}

/* {INTEGER_64_REF}.bit_and */
EIF_TYPED_VALUE F314_6653 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_and";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13340);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13340);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ui8_1 = ti8_2;
	ti8_3 = eif_bit_and(ti8_1,ui8_1);
	ui8_1 = ti8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_and_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
#undef arg1
}

/* {INTEGER_64_REF}.bit_or */
EIF_TYPED_VALUE F314_6654 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_or";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13341);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13341);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ui8_1 = ti8_2;
	ti8_3 = eif_bit_or(ti8_1,ui8_1);
	ui8_1 = ti8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_or_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
#undef arg1
}

/* {INTEGER_64_REF}.bit_xor */
EIF_TYPED_VALUE F314_6655 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_xor";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13342);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13342);
	RTCC(arg1, 313, l_feature_name, 1, eif_new_type(313, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = *(EIF_INTEGER_64 *)(arg1 + RTVA(5502, "item", arg1));
	ui8_1 = ti8_2;
	ti8_3 = eif_bit_xor(ti8_1,ui8_1);
	ui8_1 = ti8_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("bitwise_xor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
#undef arg1
}

/* {INTEGER_64_REF}.bit_not */
EIF_TYPED_VALUE F314_6656 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bit_not";
	RTEX;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13343);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13343);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = eif_bit_not(ti8_1);
	ui8_1 = ti8_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("bit_not_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
}

/* {INTEGER_64_REF}.bit_shift */
EIF_TYPED_VALUE F314_6657 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_shift";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT64, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13344);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13344);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_less_than_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_greater_than_minus_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) -64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		ui4_1 = arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5552, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ti8_1 = *(EIF_INTEGER_64 *)(tr1 + RTVA(5502, "item", tr1));
		Result = (EIF_INTEGER_64) ti8_1;
	} else {
		RTHOOK(5);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		ui4_1 = (EIF_INTEGER_32) -arg1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5551, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti8_1 = *(EIF_INTEGER_64 *)(tr1 + RTVA(5502, "item", tr1));
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {INTEGER_64_REF}.bit_shift_left */
EIF_TYPED_VALUE F314_6658 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_shift_left";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13345);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13345);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ui4_1 = arg1;
	ti8_2 = eif_bit_shift_left(ti8_1,ui4_1);
	ui8_1 = ti8_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_left_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
#undef ui4_1
#undef arg1
}

/* {INTEGER_64_REF}.bit_shift_right */
EIF_TYPED_VALUE F314_6659 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_shift_right";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13346);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13346);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000139, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ui4_1 = arg1;
	ti8_2 = eif_bit_shift_right(ti8_1,ui4_1);
	ui8_1 = ti8_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5507, "set_item", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bit_shift_right_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
#undef ui4_1
#undef arg1
}

/* {INTEGER_64_REF}.bit_test */
EIF_TYPED_VALUE F314_6660 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "bit_test";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 1, 13347);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13347);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ti8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui4_1 = arg1;
	ti8_3 = eif_bit_shift_left(ti8_2,ui4_1);
	ui8_1 = ti8_3;
	ti8_2 = eif_bit_and(ti8_1,ui8_1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti8_2 != (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui8_1
#undef ui4_1
#undef arg1
}

/* {INTEGER_64_REF}.set_bit */
EIF_TYPED_VALUE F314_6661 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_bit";
	RTEX;
#define arg1 arg1x.it_b
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 2, 13348);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13348);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_less_than_64", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 64L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (arg1) {
		RTHOOK(4);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ui4_1 = arg2;
		ti8_2 = eif_bit_shift_left(((EIF_INTEGER_64) RTI64C(1)),ui4_1);
		ui8_1 = ti8_2;
		ti8_3 = eif_bit_or(ti8_1,ui8_1);
		Result = (EIF_INTEGER_64) ti8_3;
	} else {
		RTHOOK(5);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ui4_1 = arg2;
		ti8_2 = eif_bit_shift_left(((EIF_INTEGER_64) RTI64C(1)),ui4_1);
		ti8_3 = eif_bit_not(ti8_2);
		ui8_1 = ti8_3;
		ti8_2 = eif_bit_and(ti8_1,ui8_1);
		Result = (EIF_INTEGER_64) ti8_2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef ui8_1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {INTEGER_64_REF}.set_bit_with_mask */
EIF_TYPED_VALUE F314_6662 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_bit_with_mask";
	RTEX;
#define arg1 arg1x.it_b
#define arg2 arg2x.it_i8
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 2, 13349);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13349);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ui8_1 = arg2;
		ti8_2 = eif_bit_or(ti8_1,ui8_1);
		Result = (EIF_INTEGER_64) ti8_2;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x24000000, 1,0); /* Result */
		ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
		ti8_2 = eif_bit_not(arg2);
		ui8_1 = ti8_2;
		ti8_3 = eif_bit_and(ti8_1,ui8_1);
		Result = (EIF_INTEGER_64) ti8_3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef ui8_1
#undef arg2
#undef arg1
}

/* {INTEGER_64_REF}.out */
EIF_TYPED_VALUE F314_6663 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13350);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13350);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 20L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	ui8_1 = ti8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6210, "append_integer_64", Result))(Result, ui8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui8_1
#undef ui4_1
}

/* {INTEGER_64_REF}.abs_ref */
EIF_TYPED_VALUE F314_6664 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "abs_ref";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 313, Current, 0, 0, 13351);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(313, Current, 13351);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti8_1 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	if ((EIF_BOOLEAN) (ti8_1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000139, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(Current);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000139, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5228, "opposite", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_absolute_value", EX_POST);
		tb1 = '\01';
		if (!RTEQ(Result, Current)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5228, "opposite", Current))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = RTEQ(Result, tr1);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {INTEGER_64_REF}._invariant */
void F314_9325 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_64 ti8_2;
	EIF_INTEGER_64 ti8_3;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 313, Current, 0, 9324);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("sign_times_abs", Current);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5503, dtype))(Current)).it_i4);
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	ti8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5511, dtype))(Current)).it_i8);
	ti8_3 = *(EIF_INTEGER_64 *)(Current + RTWA(5502, dtype));
	if ((EIF_BOOLEAN)((EIF_INTEGER_64) (ti8_1 * ti8_2) == ti8_3)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit314 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
