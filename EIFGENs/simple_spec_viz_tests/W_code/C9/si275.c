/*
 * Code for class SIMPLE_ZSTRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F275_4671(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F275_4672(EIF_REFERENCE);
extern void F275_4673(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F275_4674(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F275_4675(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F275_4676(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F275_4677(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F275_4678(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4679(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4680(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4681(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4682(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F275_4683(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4684(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4685(EIF_REFERENCE);
extern void F275_4686(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F275_4687(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F275_4688(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F275_4689(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F275_4690(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F275_4691(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F275_4692(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F275_4693(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F275_4694(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4695(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4696(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4697(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4698(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4699(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F275_4700(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F275_4701(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F275_4702(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4703(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F275_4704(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4705(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4706(EIF_REFERENCE);
extern void F275_4707(EIF_REFERENCE);
extern void F275_4708(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F275_4709(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4710(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4711(EIF_REFERENCE);
extern EIF_TYPED_VALUE F275_4712(EIF_REFERENCE);
extern void F275_9289(EIF_REFERENCE, int);
extern void EIF_Minit275(void);

#ifdef __cplusplus
}
#endif

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

/* {SIMPLE_ZSTRING}.make */
void F275_4671 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 1, 4754);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4754);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4269, 0xF800026F, 0); /* area */
	uc1 = (EIF_CHARACTER_8) '\000';
	ui4_1 = arg1;
	if (ui4_1< 0) {
		eraise ("non_negative_argument", EN_RT_CHECK);
	}
	tr1 = RTLNSP2(RTWCT(4269, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_CHARACTER_8), EIF_TRUE);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5142, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(4269, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 4245, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("capacity_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4246, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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
#undef ui4_1
#undef uc1
#undef arg1
}

/* {SIMPLE_ZSTRING}.make_empty */
void F275_4672 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_empty";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4755);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4755);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4238, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4248, dtype))(Current)).it_b);
		if (tb1) {
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
#undef ui4_1
}

/* {SIMPLE_ZSTRING}.make_from_string */
void F275_4673 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 1, 4756);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4756);
	RTCC(arg1, 274, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4238, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4255, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
#undef ur1
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ZSTRING}.make_from_string_8 */
void F275_4674 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_string_8";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 1, 4757);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4757);
	RTCC(arg1, 274, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4238, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4256, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
#undef ur1
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ZSTRING}.make_from_utf_8 */
void F275_4675 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_utf_8";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 1, 4758);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4758);
	RTCC(arg1, 274, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("utf8_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4238, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4257, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ZSTRING}.item */
EIF_TYPED_VALUE F275_4676 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_CHAR32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT8, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 274, Current, 2, 1, 4759);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4759);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4249, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x30000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c1);
	ti4_1 = (EIF_INTEGER_32) (tc1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	loc1 = (EIF_NATURAL_8) tu1_1;
	RTHOOK(3);
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4276, dtype))(Current)).it_n1);
	if ((EIF_BOOLEAN)(loc1 == tu1_1)) {
		RTHOOK(4);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			ui4_1 = arg1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(209, "has", loc2))(loc2, ui4_1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			RTDBGAL(0, 0x1C000000, 1,0); /* Result */
			ui4_1 = arg1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(207, "item", loc2))(loc2, ui4_1x)).it_c4);
			Result = (EIF_CHARACTER_32) tw1;
		} else {
			RTHOOK(6);
			RTDBGAL(0, 0x1C000000, 1,0); /* Result */
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4275, dtype))(Current)).it_c1);
			tw1 = (EIF_CHARACTER_32) tc1;
			Result = (EIF_CHARACTER_32) tw1;
		}
	} else {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 < (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
			RTHOOK(8);
			RTDBGAL(0, 0x1C000000, 1,0); /* Result */
			tw1 = (EIF_CHARACTER_32) loc1;
			Result = (EIF_CHARACTER_32) tw1;
		} else {
			RTHOOK(9);
			RTDBGAL(0, 0x1C000000, 1,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4273, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			RTNHOOK(9,2);
			ui4_1 = (EIF_INTEGER_32) (arg1 - ((EIF_INTEGER_32) 1L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr2))(tr2, ui4_1x)).it_c1);
			uc1 = tc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1381, "decoded_character", tr1))(tr1, uc1x)).it_c4);
			Result = (EIF_CHARACTER_32) tw1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef up1
#undef up2
#undef ui4_1
#undef uc1
#undef arg1
}

/* {SIMPLE_ZSTRING}.z_code */
EIF_TYPED_VALUE F275_4677 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "z_code";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 1, 4760);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4760);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4249, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	ui4_1 = arg1;
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
	RTNHOOK(2,1);
	tu4_1 = (EIF_NATURAL_32) tw1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ZSTRING}.count */
EIF_TYPED_VALUE F275_4678 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(4245,Dtype(Current)));
	return r;
}


/* {SIMPLE_ZSTRING}.capacity */
EIF_TYPED_VALUE F275_4679 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "capacity";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4762);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4762);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5138, "count", tr1))(tr1)).it_i4);
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
#undef up1
}

/* {SIMPLE_ZSTRING}.utf_8_byte_count */
EIF_TYPED_VALUE F275_4680 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "utf_8_byte_count";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 274, Current, 2, 0, 4763);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4763);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(3);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
		RTNHOOK(3,1);
		tu4_1 = (EIF_NATURAL_32) tw1;
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result++;
		} else {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				RTHOOK(7);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					RTHOOK(9);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result += ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(10);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result += ((EIF_INTEGER_32) 4L);
				}
			}
		}
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("at_least_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN) (Result >= ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {SIMPLE_ZSTRING}.is_empty */
EIF_TYPED_VALUE F275_4681 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_empty";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4764);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4764);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
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

/* {SIMPLE_ZSTRING}.valid_index */
EIF_TYPED_VALUE F275_4682 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_index";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 274, Current, 0, 1, 4765);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4765);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {SIMPLE_ZSTRING}.has_mixed_encoding */
EIF_TYPED_VALUE F275_4683 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_mixed_encoding";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 0, 4766);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4766);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(208, "is_empty", loc1))(loc1)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {SIMPLE_ZSTRING}.is_ascii */
EIF_TYPED_VALUE F275_4684 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_ascii";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 0, 4767);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4767);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4250, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(6);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c1);
			ti4_2 = (EIF_INTEGER_32) (tc1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_2 < ((EIF_INTEGER_32) 128L));
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
}

/* {SIMPLE_ZSTRING}.is_valid_as_string_8 */
EIF_TYPED_VALUE F275_4685 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_valid_as_string_8";
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
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4768);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4768);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4250, dtype))(Current)).it_b);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
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

/* {SIMPLE_ZSTRING}.put */
void F275_4686 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_c4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 274, Current, 3, 2, 4726);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4726);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4249, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4273, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	uw1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1379, "encoded_character", tr1))(tr1, uw1x)).it_c1);
	loc1 = (EIF_CHARACTER_8) tc1;
	RTHOOK(3);
	tb1 = '\0';
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4275, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(loc1 == tc1)) {
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4275, dtype))(Current)).it_c1);
		tw1 = (EIF_CHARACTER_32) tc1;
		tb1 = (EIF_BOOLEAN)(arg1 != tw1);
	}
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4271, dtype))(Current);
		RTHOOK(5);
		RTCT0("attached unencoded_area as l_unenc", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		uw1 = arg1;
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(211, "put", loc2))(loc2, uw1x, ui4_1x);
		RTHOOK(7);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4275, dtype))(Current)).it_c1);
		uc1 = tc1;
		ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", tr1))(tr1, uc1x, ui4_1x);
	} else {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		uc1 = loc1;
		ui4_1 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", tr1))(tr1, uc1x, ui4_1x);
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr1);
		if (EIF_TEST(loc3)) {
			RTHOOK(10);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(212, "remove", loc3))(loc3, ui4_1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("character_set", EX_POST);
		ui4_1 = arg2;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
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
	RTLO(7);
	RTEE;
#undef up1
#undef ui4_1
#undef uw1
#undef uc1
#undef arg2
#undef arg1
}

/* {SIMPLE_ZSTRING}.append_character */
void F275_4687 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_character";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 274, Current, 2, 1, 4727);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4727);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4272, dtype))(Current, ui4_1x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 4245, 0x10000000, 1); /* count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype)))++;
	RTHOOK(3);
	RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4273, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	uw1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1379, "encoded_character", tr1))(tr1, uw1x)).it_c1);
	loc1 = (EIF_CHARACTER_8) tc1;
	RTHOOK(4);
	tb1 = '\0';
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4275, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(loc1 == tc1)) {
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4275, dtype))(Current)).it_c1);
		tw1 = (EIF_CHARACTER_32) tc1;
		tb1 = (EIF_BOOLEAN)(arg1 != tw1);
	}
	if (tb1) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(4271, dtype))(Current);
		RTHOOK(6);
		RTCT0("attached unencoded_area as l_unenc", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = RTCCL(tr1);
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(7);
		uw1 = arg1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(211, "put", loc2))(loc2, uw1x, ui4_1x);
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4275, dtype))(Current)).it_c1);
		uc1 = tc1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", tr1))(tr1, uc1x, ui4_1x);
	} else {
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		uc1 = loc1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", tr1))(tr1, uc1x, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("count_increased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("character_appended", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ui4_1 = ti4_2;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
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
#undef up1
#undef ui4_1
#undef uw1
#undef uc1
#undef arg1
}

/* {SIMPLE_ZSTRING}.append_string_general */
void F275_4688 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_string_general";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_32 tw1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 1, 4728);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4728);
	RTCC(arg1, 274, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_2 + ti4_3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4272, dtype))(Current, ui4_1x);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4254, dtype))(Current, uw1x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("count_increased", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 + ti4_4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
#undef uw1
#undef arg1
}

/* {SIMPLE_ZSTRING}.append_string_8 */
void F275_4689 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_string_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 1, 4729);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4729);
	RTCC(arg1, 274, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_1 = (EIF_INTEGER_32) (ti4_2 + ti4_3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4272, dtype))(Current, ui4_1x);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ui4_1 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", tr1))(tr1, uc1x, ui4_1x);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 4245, 0x10000000, 1); /* count */
		(*(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype)))++;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("count_increased", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_4 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 + ti4_4))) {
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
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {SIMPLE_ZSTRING}.append_utf_8 */
void F275_4690 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_utf_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_CHARACTER_8 tc1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT8, &loc3);
	RTLU(SK_UINT32, &loc4);
	
	RTEAA(l_feature_name, 274, Current, 4, 1, 4730);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4730);
	RTCC(arg1, 274, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("utf8_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		RTDBGAL(3, 0x30000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		tu1_1 = (EIF_NATURAL_8) ti4_1;
		loc3 = (EIF_NATURAL_8) tu1_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 <= (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(7);
			tw1 = (EIF_CHARACTER_32) loc3;
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4254, dtype))(Current, uw1x);
			RTHOOK(8);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		} else {
			RTHOOK(9);
			uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L);
			tu1_1 = eif_bit_and(loc3,uu1_1);
			if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L))) {
				RTHOOK(10);
				RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
				uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 31L);
				tu1_1 = eif_bit_and(loc3,uu1_1);
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				loc4 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(11);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)) <= loc2)) {
					RTHOOK(12);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					ui4_1 = ((EIF_INTEGER_32) 6L);
					tu4_1 = eif_bit_shift_left(loc4,ui4_1);
					ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
					ti4_1 = (EIF_INTEGER_32) (tc1);
					tu1_1 = (EIF_NATURAL_8) ti4_1;
					uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
					tu1_2 = eif_bit_and(tu1_1,uu1_1);
					tu4_2 = (EIF_NATURAL_32) tu1_2;
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					loc4 = (EIF_NATURAL_32) tu4_3;
				}
				RTHOOK(13);
				tw1 = (EIF_CHARACTER_32) loc4;
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4254, dtype))(Current, uw1x);
				RTHOOK(14);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 += ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(15);
				uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
				tu1_1 = eif_bit_and(loc3,uu1_1);
				if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L))) {
					RTHOOK(16);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 15L);
					tu1_1 = eif_bit_and(loc3,uu1_1);
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(17);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) <= loc2)) {
						RTHOOK(18);
						RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
						ui4_1 = ((EIF_INTEGER_32) 6L);
						tu4_1 = eif_bit_shift_left(loc4,ui4_1);
						ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
						ti4_1 = (EIF_INTEGER_32) (tc1);
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
						tu1_2 = eif_bit_and(tu1_1,uu1_1);
						tu4_2 = (EIF_NATURAL_32) tu1_2;
						uu4_1 = tu4_2;
						tu4_3 = eif_bit_or(tu4_1,uu4_1);
						loc4 = (EIF_NATURAL_32) tu4_3;
						RTHOOK(19);
						RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
						ui4_1 = ((EIF_INTEGER_32) 6L);
						tu4_1 = eif_bit_shift_left(loc4,ui4_1);
						ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
						ti4_1 = (EIF_INTEGER_32) (tc1);
						tu1_1 = (EIF_NATURAL_8) ti4_1;
						uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
						tu1_2 = eif_bit_and(tu1_1,uu1_1);
						tu4_2 = (EIF_NATURAL_32) tu1_2;
						uu4_1 = tu4_2;
						tu4_3 = eif_bit_or(tu4_1,uu4_1);
						loc4 = (EIF_NATURAL_32) tu4_3;
					}
					RTHOOK(20);
					tw1 = (EIF_CHARACTER_32) loc4;
					uw1 = tw1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4254, dtype))(Current, uw1x);
					RTHOOK(21);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 += ((EIF_INTEGER_32) 3L);
				} else {
					RTHOOK(22);
					uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 248L);
					tu1_1 = eif_bit_and(loc3,uu1_1);
					if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L))) {
						RTHOOK(23);
						RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
						uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 7L);
						tu1_1 = eif_bit_and(loc3,uu1_1);
						tu4_1 = (EIF_NATURAL_32) tu1_1;
						loc4 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(24);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L)) <= loc2)) {
							RTHOOK(25);
							RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
							ui4_1 = ((EIF_INTEGER_32) 6L);
							tu4_1 = eif_bit_shift_left(loc4,ui4_1);
							ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
							ti4_1 = (EIF_INTEGER_32) (tc1);
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
							tu1_2 = eif_bit_and(tu1_1,uu1_1);
							tu4_2 = (EIF_NATURAL_32) tu1_2;
							uu4_1 = tu4_2;
							tu4_3 = eif_bit_or(tu4_1,uu4_1);
							loc4 = (EIF_NATURAL_32) tu4_3;
							RTHOOK(26);
							RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
							ui4_1 = ((EIF_INTEGER_32) 6L);
							tu4_1 = eif_bit_shift_left(loc4,ui4_1);
							ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L));
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
							ti4_1 = (EIF_INTEGER_32) (tc1);
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
							tu1_2 = eif_bit_and(tu1_1,uu1_1);
							tu4_2 = (EIF_NATURAL_32) tu1_2;
							uu4_1 = tu4_2;
							tu4_3 = eif_bit_or(tu4_1,uu4_1);
							loc4 = (EIF_NATURAL_32) tu4_3;
							RTHOOK(27);
							RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
							ui4_1 = ((EIF_INTEGER_32) 6L);
							tu4_1 = eif_bit_shift_left(loc4,ui4_1);
							ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 3L));
							tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
							ti4_1 = (EIF_INTEGER_32) (tc1);
							tu1_1 = (EIF_NATURAL_8) ti4_1;
							uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 63L);
							tu1_2 = eif_bit_and(tu1_1,uu1_1);
							tu4_2 = (EIF_NATURAL_32) tu1_2;
							uu4_1 = tu4_2;
							tu4_3 = eif_bit_or(tu4_1,uu4_1);
							loc4 = (EIF_NATURAL_32) tu4_3;
						}
						RTHOOK(28);
						tw1 = (EIF_CHARACTER_32) loc4;
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4254, dtype))(Current, uw1x);
						RTHOOK(29);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 += ((EIF_INTEGER_32) 4L);
					} else {
						RTHOOK(30);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef uw1
#undef uu1_1
#undef arg1
}

/* {SIMPLE_ZSTRING}.prepend_character */
void F275_4691 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "prepend_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 1, 4731);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4731);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	uw1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4259, dtype))(Current, uw1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_increased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("character_prepended", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
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
#undef ui4_1
#undef uw1
#undef arg1
}

/* {SIMPLE_ZSTRING}.insert_character */
void F275_4692 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_character";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_c4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 274, Current, 2, 2, 4732);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4732);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_position", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4272, dtype))(Current, ui4_1x);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	loc1 = (EIF_INTEGER_32) ti4_2;
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 < arg2)) break;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(5,2);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr2))(tr2, ui4_1x)).it_c1);
		uc1 = tc1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", tr1))(tr1, uc1x, ui4_1x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(8);
		ui4_1 = arg2;
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(213, "shift_from", loc2))(loc2, ui4_1x, ui4_2x);
	}
	RTHOOK(9);
	RTDBGAA(Current, dtype, 4245, 0x10000000, 1); /* count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype)))++;
	RTHOOK(10);
	uw1 = arg1;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4253, dtype))(Current, uw1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("count_increased", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("character_inserted", EX_POST);
		ui4_1 = arg2;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
		if ((EIF_BOOLEAN)(tw1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef uw1
#undef uc1
#undef arg2
#undef arg1
}

/* {SIMPLE_ZSTRING}.remove */
void F275_4693 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 274, Current, 2, 1, 4733);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4733);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4249, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg1;
	for (;;) {
		RTHOOK(3);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN) (loc1 >= ti4_2)) break;
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(4,2);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr2))(tr2, ui4_1x)).it_c1);
		uc1 = tc1;
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", tr1))(tr1, uc1x, ui4_1x);
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(212, "remove", loc2))(loc2, ui4_1x);
		RTHOOK(8);
		ui4_1 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
		ui4_2 = ((EIF_INTEGER_32) -1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(213, "shift_from", loc2))(loc2, ui4_1x, ui4_2x);
	}
	RTHOOK(9);
	RTDBGAA(Current, dtype, 4245, 0x10000000, 1); /* count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype)))--;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("count_decreased", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {SIMPLE_ZSTRING}.wipe_out */
void F275_4694 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 0, 4734);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4734);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 4245, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(214, "wipe_out", loc1))(loc1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("empty", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4248, dtype))(Current)).it_b);
		if (tb1) {
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
#undef up1
}

/* {SIMPLE_ZSTRING}.to_string_32 */
EIF_TYPED_VALUE F275_4695 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_string_32";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 0, 4735);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4735);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000169, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(361, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6374, "append_character", Result))(Result, uw1x);
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(6344, "count", Result));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uw1
}

/* {SIMPLE_ZSTRING}.to_string_8 */
EIF_TYPED_VALUE F275_4696 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_string_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 0, 4736);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4736);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4252, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN) (loc1 >= ti4_1)) break;
		RTHOOK(5);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
}

/* {SIMPLE_ZSTRING}.to_utf_8 */
EIF_TYPED_VALUE F275_4697 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_utf_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 274, Current, 2, 0, 4737);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4737);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4247, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
		RTNHOOK(4,1);
		tu4_1 = (EIF_NATURAL_32) tw1;
		loc2 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
			RTHOOK(6);
			tc1 = (EIF_CHARACTER_8) loc2;
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		} else {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L))) {
				RTHOOK(8);
				ui4_1 = ((EIF_INTEGER_32) 6L);
				tu4_1 = eif_bit_shift_right(loc2,ui4_1);
				uu4_1 = tu4_1;
				tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 192L)),uu4_1);
				tc1 = (EIF_CHARACTER_8) tu4_2;
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(9);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				tu4_1 = eif_bit_and(loc2,uu4_1);
				uu4_1 = tu4_1;
				tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),uu4_1);
				tc1 = (EIF_CHARACTER_8) tu4_2;
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			} else {
				RTHOOK(10);
				if ((EIF_BOOLEAN) (loc2 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L))) {
					RTHOOK(11);
					ui4_1 = ((EIF_INTEGER_32) 12L);
					tu4_1 = eif_bit_shift_right(loc2,ui4_1);
					uu4_1 = tu4_1;
					tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 224L)),uu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
					RTHOOK(12);
					ui4_1 = ((EIF_INTEGER_32) 6L);
					tu4_1 = eif_bit_shift_right(loc2,ui4_1);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and(tu4_1,uu4_1);
					uu4_1 = tu4_2;
					tu4_1 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),uu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
					RTHOOK(13);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and(loc2,uu4_1);
					uu4_1 = tu4_1;
					tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),uu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				} else {
					RTHOOK(14);
					ui4_1 = ((EIF_INTEGER_32) 18L);
					tu4_1 = eif_bit_shift_right(loc2,ui4_1);
					uu4_1 = tu4_1;
					tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 240L)),uu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
					RTHOOK(15);
					ui4_1 = ((EIF_INTEGER_32) 12L);
					tu4_1 = eif_bit_shift_right(loc2,ui4_1);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and(tu4_1,uu4_1);
					uu4_1 = tu4_2;
					tu4_1 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),uu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
					RTHOOK(16);
					ui4_1 = ((EIF_INTEGER_32) 6L);
					tu4_1 = eif_bit_shift_right(loc2,ui4_1);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_2 = eif_bit_and(tu4_1,uu4_1);
					uu4_1 = tu4_2;
					tu4_1 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),uu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_1;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
					RTHOOK(17);
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					tu4_1 = eif_bit_and(loc2,uu4_1);
					uu4_1 = tu4_1;
					tu4_2 = eif_bit_or(((EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)),uu4_1);
					tc1 = (EIF_CHARACTER_8) tu4_2;
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				}
			}
		}
		RTHOOK(18);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef uc1
}

/* {SIMPLE_ZSTRING}.as_string_32 */
EIF_TYPED_VALUE F275_4698 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_string_32";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4738);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4738);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000169, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4262, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {SIMPLE_ZSTRING}.is_equal */
EIF_TYPED_VALUE F275_4699 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 1, 4739);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4739);
	RTCC(arg1, 274, l_feature_name, 1, eif_new_type(274, 0x01),0);
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4245, "count", arg1));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(6);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
			ui4_1 = loc1;
			tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4243, "item", arg1))(arg1, ui4_1x)).it_c4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
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
		RTHOOK(10);
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
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ZSTRING}.is_less */
EIF_TYPED_VALUE F275_4700 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 274, Current, 2, 1, 4740);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4740);
	RTCC(arg1, 274, l_feature_name, 1, eif_new_type(274, 0x01),0);
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
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4245, "count", arg1));
	ui4_1 = ti4_2;
	ti4_3 = eif_min_int32 (ti4_1,ui4_1);
	loc2 = (EIF_INTEGER_32) ti4_3;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || Result)) {
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
			ui4_1 = loc1;
			tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4243, "item", arg1))(arg1, ui4_1x)).it_c4);
			tb1 = (EIF_BOOLEAN) (tw1 > tw2);
		}
		if (tb1) break;
		RTHOOK(5);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
		ui4_1 = loc1;
		tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4243, "item", arg1))(arg1, ui4_1x)).it_c4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tw1 < tw2);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result && (EIF_BOOLEAN) (loc1 > loc2))) {
		RTHOOK(8);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4245, "count", arg1));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < ti4_2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("asymmetric", EX_POST);
		tb2 = '\01';
		if (Result) {
			ur1 = RTCCL(Current);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2903, "is_less", arg1))(arg1, ur1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ZSTRING}.same_string */
EIF_TYPED_VALUE F275_4701 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "same_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 1, 4741);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4741);
	RTCC(arg1, 274, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ti4_1) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(6);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
			ui4_1 = loc1;
			tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tw1 == tw2);
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ZSTRING}.copy_of */
EIF_TYPED_VALUE F275_4702 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "copy_of";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4742);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4742);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000112, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4238, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4262, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4255, "append_string_general", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("different_object", EX_POST);
		if (!RTCEQ(Result, Current)) {
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
#undef up1
#undef ur1
#undef ui4_1
}

/* {SIMPLE_ZSTRING}.substring */
EIF_TYPED_VALUE F275_4703 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "substring";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 2, 4743);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4743);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_range", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0xF8000112, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_1 = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)),ui4_1);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4238, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > arg2)) break;
		RTHOOK(7);
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4243, dtype))(Current, ui4_1x)).it_c4);
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4254, "append_character", Result))(Result, uw1x);
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("correct_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4245, "count", Result));
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ti4_2 = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)),ui4_1);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uw1
#undef arg2
#undef arg1
}

/* {SIMPLE_ZSTRING}.new_cursor */
EIF_TYPED_VALUE F275_4704 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_cursor";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4744);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4744);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF80001E2, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(268, 0x01).id);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4127, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
}

/* {SIMPLE_ZSTRING}.area */
EIF_TYPED_VALUE F275_4705 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4269,Dtype(Current)));
	return r;
}


/* {SIMPLE_ZSTRING}.unencoded_area */
EIF_TYPED_VALUE F275_4706 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(4270,Dtype(Current)));
	return r;
}


/* {SIMPLE_ZSTRING}.ensure_unencoded_area */
void F275_4707 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ensure_unencoded_area";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4747);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4747);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 == NULL)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 4270, 0xF8000005, 0); /* unencoded_area */
		tr1 = RTLNSMART(RTWCT(4270, dtype, Dftype(Current)).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(206, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(4270, dtype)) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("exists", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4270, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
#undef up1
}

/* {SIMPLE_ZSTRING}.grow_if_needed */
void F275_4708 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "grow_if_needed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 274, Current, 1, 1, 4748);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4748);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4246, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (arg1 > ti4_1)) {
		RTHOOK(2);
		RTDBGAL(1, 0xF800026F, 0, 0); /* loc1 */
		uc1 = (EIF_CHARACTER_8) '\000';
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 3L)) / ((EIF_INTEGER_32) 2L));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(RTWCT(4269, dtype, Dftype(Current)).id,0,ui4_1,sizeof(EIF_CHARACTER_8), EIF_TRUE);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5142, Dtype(tr1)))(tr1, uc1x, ui4_1x);
		RTNHOOK(2,1);
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = tr1;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
		ui4_3 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5159, "copy_data", loc1))(loc1, ur1x, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 4269, 0xF800026F, 0); /* area */
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(4269, dtype)) = (EIF_REFERENCE) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("sufficient", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4246, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
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
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uc1
#undef arg1
}

/* {SIMPLE_ZSTRING}.codec */
EIF_TYPED_VALUE F275_4709 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "codec";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4749);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4749);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800004A, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4274, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {SIMPLE_ZSTRING}.shared_codec */
RTOID (F275_4710)
EIF_TYPED_VALUE F275_4710 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "shared_codec";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F275_4710);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 274, Current, 0, 0, 4750);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(274, Current, 4750);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800004A, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(75, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {SIMPLE_ZSTRING}.substitute */
EIF_TYPED_VALUE F275_4711 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\032';
	return r;
}

/* {SIMPLE_ZSTRING}.substitute_code */
EIF_TYPED_VALUE F275_4712 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = (EIF_NATURAL_8) ((EIF_NATURAL_8) 26U);
	return r;
}

/* {SIMPLE_ZSTRING}._invariant */
void F275_9289 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 274, Current, 0, 9288);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("count_non_negative", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_bounded", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(4245, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4246, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("area_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4269, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit275 (void)
{
	GTCX
	RTOTS (4710,F275_4710)
}


#ifdef __cplusplus
}
#endif
