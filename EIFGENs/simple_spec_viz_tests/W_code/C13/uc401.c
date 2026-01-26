/*
 * Code for class UC_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F401_9049(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9050(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9051(EIF_REFERENCE);
extern void F401_9052(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9053(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9054(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9055(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9056(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9057(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9058(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9059(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9060(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9061(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9062(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9063(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9064(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9065(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9066(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9067(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9068(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9069(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9070(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9071(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9072(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9073(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9074(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9075(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9076(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9077(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9078(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9079(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9080(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9081(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9082(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9083(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9084(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9085(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9086(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9087(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9088(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9089(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9090(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9091(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9092(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9093(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9094(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9095(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9096(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9097(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9098(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9099(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9100(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9101(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9102(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9103(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9104(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9105(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9106(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9107(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9108(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9109(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9110(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9111(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9112(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9113(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9114(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9115(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9116(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9117(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9118(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9119(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9120(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9121(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9122(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9123(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9124(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9125(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9126(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9127(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9128(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9129(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9130(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9131(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9132(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9133(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9134(EIF_REFERENCE);
extern void F401_9135(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9136(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9137(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9138(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9139(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9140(EIF_REFERENCE);
extern void F401_9141(EIF_REFERENCE);
extern void F401_9142(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9143(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9144(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9145(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9146(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9147(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9148(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9149(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9150(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9151(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9152(EIF_REFERENCE);
extern void F401_9153(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9154(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9155(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9156(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9157(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9158(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9159(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9160(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9161(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9162(EIF_REFERENCE);
extern void F401_9163(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9164(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9165(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9166(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9167(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9168(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9169(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9170(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9171(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9172(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9173(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9174(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9175(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9176(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9177(EIF_REFERENCE);
extern void F401_9178(EIF_REFERENCE);
extern void F401_9179(EIF_REFERENCE);
extern void F401_9180(EIF_REFERENCE);
extern void F401_9181(EIF_REFERENCE);
extern EIF_TYPED_VALUE F401_9182(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9183(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F401_9184(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F401_9185(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F401_9351(EIF_REFERENCE, int);
extern void EIF_Minit401(void);

#ifdef __cplusplus
}
#endif

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

/* {UC_STRING}.make */
void F401_9049 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 15988);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15988);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_size", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7297, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6269, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, 358))(Current, ui4_1x);
	} else {
		RTHOOK(6);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, 358))(Current, ui4_1x);
	}
	RTHOOK(7);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTHOOK(8);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6202, dtype))(Current, ui4_1x);
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("empty_string", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("area_allocated", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("byte_count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("byte_capacity_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.make_from_string */
void F401_9050 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 15989);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15989);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
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
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7240, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_shared_implementation", EX_POST);
		tb1 = '\01';
		if (!RTCEQ(Current, arg1)) {
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6246, dtype))(Current, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("initialized", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6254, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_unicode", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7264, dtype))(Current, ur1x)).it_b);
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
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {UC_STRING}.make_empty */
void F401_9051 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_empty";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 15990);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15990);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("area_allocated", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
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
#undef ui4_1
}

/* {UC_STRING}.make_from_string_general */
void F401_9052 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_string_general";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 1, 15991);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15991);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = RTCCL(arg1);
	loc2 = RTRV(eif_new_type(400, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(3);
		RTDBGAL(1, 0xF8000190, 0, 0); /* loc1 */
		loc1 = (EIF_REFERENCE) RTCCL(loc2);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 6266, 0xF800026F, 0); /* area */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6266, "area", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(6266, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		if (!RTCEQ(arg1, Current)) {
			RTHOOK(6);
			RTDBGAL(1, 0xF8000190, 0, 0); /* loc1 */
			loc1 = (EIF_REFERENCE) NULL;
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 6266, 0xF800026F, 0); /* area */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6266, "area", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(6266, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		ur1 = RTCCL(arg1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_2 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7242, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("same_unicode", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7264, dtype))(Current, ur1x)).it_b);
		if (tb1) {
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
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.make_from_substring */
void F401_9053 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_from_substring";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 3, 15992);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15992);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	ui4_2 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7242, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("initialized", EX_POST);
		ui4_1 = arg2;
		ui4_2 = arg3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7264, dtype))(Current, ur1x)).it_b);
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
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_STRING}.make_from_substring_general */
void F401_9054 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_from_substring_general";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 400, Current, 4, 3, 15993);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15993);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	loc4 = RTCCL(arg1);
	loc4 = RTRV(eif_new_type(400, 0x01),loc4);
	if (EIF_TEST(loc4)) {
		RTHOOK(6);
		RTDBGAL(3, 0xF8000190, 0, 0); /* loc3 */
		loc3 = (EIF_REFERENCE) RTCCL(loc4);
		RTHOOK(7);
		RTDBGAA(Current, dtype, 6266, 0xF800026F, 0); /* area */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6266, "area", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(6266, dtype)) = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		if (!RTCEQ(arg1, Current)) {
			RTHOOK(9);
			RTDBGAL(3, 0xF8000190, 0, 0); /* loc3 */
			loc3 = (EIF_REFERENCE) NULL;
		}
	}
	RTHOOK(10);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) && (EIF_BOOLEAN)(arg3 == ti4_1))) {
		RTHOOK(11);
		RTDBGAA(Current, dtype, 6266, 0xF800026F, 0); /* area */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6266, "area", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(6266, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(12);
		if ((EIF_BOOLEAN) (arg3 < arg2)) {
			RTHOOK(13);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, dtype))(Current, ui4_1x);
		} else {
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTHOOK(15);
				RTDBGAL(2, 0xF8000160, 0, 0); /* loc2 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7281, "cloned_string", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(16);
				RTDBGAL(2, 0xF8000160, 0, 0); /* loc2 */
				loc2 = (EIF_REFERENCE) RTCCL(arg1);
			}
			RTHOOK(17);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			ur1 = RTCCL(loc2);
			ui4_1 = arg2;
			ui4_2 = arg3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4168, "substring_byte_count", tr1))(tr1, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(18);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, dtype))(Current, ui4_1x);
			RTHOOK(19);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
			RTHOOK(20);
			RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
			*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc1;
			RTHOOK(21);
			ur1 = RTCCL(loc2);
			ui4_1 = arg2;
			ui4_2 = arg3;
			ui4_3 = loc1;
			ui4_4 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7308, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("initialized", EX_POST);
		ui4_1 = arg2;
		ui4_2 = arg3;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7264, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_STRING}.make_filled_unicode */
void F401_9055 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_filled_unicode";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 2, 15994);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15994);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
	ui4_1 = ti4_1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7244, dtype))(Current, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("filled", EX_POST);
		ur1 = RTCCL(arg1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7256, dtype))(Current, ur1x)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {UC_STRING}.make_filled_code */
void F401_9056 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_filled_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 2, 15995);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15995);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr1))(tr1, ui4_1x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 * arg2);
	RTHOOK(5);
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, dtype))(Current, ui4_1x);
	RTHOOK(6);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc3;
	RTHOOK(8);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(10);
		ui4_1 = arg1;
		ui4_2 = loc2;
		ui4_3 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 += loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("filled", EX_POST);
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7257, dtype))(Current, ui4_1x)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {UC_STRING}.make_filled */
void F401_9057 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_filled";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 2, 15996);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15996);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	uc1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4169, "character_byte_count", tr1))(tr1, uc1x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 * arg2);
	RTHOOK(4);
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc3;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(10);
			uc1 = arg1;
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
			RTHOOK(11);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	} else {
		RTHOOK(12);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(14);
			uc1 = arg1;
			ui4_1 = loc2;
			ui4_2 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7307, dtype))(Current, uc1x, ui4_1x, ui4_2x);
			RTHOOK(15);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 += loc2;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("area_allocated", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("filled", EX_POST);
		uc1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6251, dtype))(Current, uc1x)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("filled_code", EX_POST);
		ti4_1 = (EIF_INTEGER_32) (arg1);
		ui4_1 = ti4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7257, dtype))(Current, ui4_1x)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_STRING}.make_from_utf8 */
void F401_9058 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_utf8";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 15997);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15997);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf8", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4145, "valid_utf8", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7271, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.make_from_utf16 */
void F401_9059 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_utf16";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 15998);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15998);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "valid_utf16", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7272, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.make_from_utf16le */
void F401_9060 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_utf16le";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 15999);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15999);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16le", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4771, "valid_utf16le", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7274, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.make_from_utf16be */
void F401_9061 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_utf16be";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16000);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16000);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16be", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4770, "valid_utf16be", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6107, dtype))(Current, ui4_1x);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7273, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.unicode_item */
EIF_TYPED_VALUE F401_9062 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "unicode_item";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16001);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16001);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4661, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000132, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(306, 0x01).id);
	ui4_1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5232, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("code_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(5233, "code", Result));
		ui4_1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.item_code */
EIF_TYPED_VALUE F401_9063 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "item_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 1, 16002);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16002);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
		RTNHOOK(4,1);
		ti4_1 = (EIF_INTEGER_32) (tc1);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("item_code_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("valid_item_code", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.code */
EIF_TYPED_VALUE F401_9064 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 1, 16003);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16003);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6119, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(3);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
		RTNHOOK(3,1);
		tu4_1 = (EIF_NATURAL_32) tc1;
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7289, dtype))(Current, ui4_1x)).it_n4);
		Result = (EIF_NATURAL_32) tu4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("code_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("valid_code", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		uu4_1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6642, "valid_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
		if (tb1) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {UC_STRING}.item */
EIF_TYPED_VALUE F401_9065 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 1, 16004);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16004);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(2);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7290, dtype))(Current, ui4_1x)).it_c1);
		Result = (EIF_CHARACTER_8) tc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("code_small_enough", EX_POST);
		tb1 = '\01';
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
			tu4_1 = (EIF_NATURAL_32) Result;
			ui4_1 = arg1;
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("overflow", EX_POST);
		tb1 = '\01';
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			tb1 = (EIF_BOOLEAN)(Result == (EIF_CHARACTER_8) '\000');
		}
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.at */
EIF_TYPED_VALUE F401_9066 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "at";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16005);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16005);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	ui4_1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ui4_1 = arg1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(Result == tc1)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.substring */
EIF_TYPED_VALUE F401_9067 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "substring";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 2, 16006);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16006);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg2 < arg1)) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000190, 0,0); /* Result */
		tr1 = RTLNSMART(dftype);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(2,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000190, 0,0); /* Result */
		tr1 = RTLNSMART(dftype);
		ur1 = RTCCL(Current);
		ui4_1 = arg1;
		ui4_2 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7241, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
		RTNHOOK(3,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("substring_count", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		if (!(EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L)))) {
			ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("first_code", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", Result))(Result, ui4_1x)).it_c4);
			ui4_1 = arg1;
			tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6110, dtype))(Current, ui4_1x)).it_c4);
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
			ui4_2 = arg2;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("first_unicode_item", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", Result))(Result, ui4_1x)).it_n4);
			ui4_1 = arg1;
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == tu4_2);
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {UC_STRING}.unicode_substring_index */
EIF_TYPED_VALUE F401_9068 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "unicode_substring_index";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc11);
	RTLR(3,loc12);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 400, Current, 12, 2, 16007);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16007);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTCEQ(arg1, Current)) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		RTHOOK(6);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc10 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) arg2;
		} else {
			RTHOOK(9);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc10) + ((EIF_INTEGER_32) 1L));
			RTHOOK(10);
			if ((EIF_BOOLEAN) (arg2 <= loc8)) {
				RTHOOK(11);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTHOOK(12);
					loc11 = RTCCL(arg1);
					loc11 = RTRV(eif_new_type(400, 0x01),loc11);
					if (EIF_TEST(loc11)) {
						RTHOOK(13);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						ti4_1 = *(EIF_INTEGER_32 *)(loc11 + RTVA(7258, "byte_count", loc11));
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(14);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(15);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(16);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(17);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(18);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(19);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(20);
								RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
								ui4_1 = loc1;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7288, "item_code_at_byte_index", loc11))(loc11, ui4_1x)).it_i4);
								loc4 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(21);
								ui4_1 = loc2;
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
								RTNHOOK(21,1);
								ti4_1 = (EIF_INTEGER_32) (tc1);
								if ((EIF_BOOLEAN)(ti4_1 != loc4)) {
									RTHOOK(22);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(23);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(24);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									loc2++;
									RTHOOK(25);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									ui4_1 = loc1;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc11))(loc11, ui4_1x)).it_i4);
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(26);
							if (loc9) {
								RTHOOK(27);
								RTDBGAL(0, 0x10000000, 1,0); /* Result */
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(28);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(29);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6++;
							}
						}
					} else {
						RTHOOK(30);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) loc10;
						RTHOOK(31);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(32);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(33);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(34);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(35);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(36);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(37);
								ui4_1 = loc2;
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
								RTNHOOK(37,1);
								ti4_1 = (EIF_INTEGER_32) (tc1);
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								ui4_1 = loc1;
								tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
								if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
									RTHOOK(38);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(39);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(40);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									loc2++;
									RTHOOK(41);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1++;
								}
							}
							RTHOOK(42);
							if (loc9) {
								RTHOOK(43);
								RTDBGAL(0, 0x10000000, 1,0); /* Result */
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(44);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(45);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6++;
							}
						}
					}
				} else {
					RTHOOK(46);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					ui4_1 = arg2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
					loc7 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(47);
					loc12 = RTCCL(arg1);
					loc12 = RTRV(eif_new_type(400, 0x01),loc12);
					if (EIF_TEST(loc12)) {
						RTHOOK(48);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						ti4_1 = *(EIF_INTEGER_32 *)(loc12 + RTVA(7258, "byte_count", loc12));
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(49);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(50);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(51);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) loc7;
							RTHOOK(52);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(53);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(54);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(55);
								RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
								ui4_1 = loc2;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
								loc4 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(56);
								RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
								ui4_1 = loc1;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7288, "item_code_at_byte_index", loc12))(loc12, ui4_1x)).it_i4);
								loc5 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(57);
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									RTHOOK(58);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(59);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(60);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									ui4_1 = loc2;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(61);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									ui4_1 = loc1;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc12))(loc12, ui4_1x)).it_i4);
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(62);
							if (loc9) {
								RTHOOK(63);
								RTDBGAL(0, 0x10000000, 1,0); /* Result */
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(64);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(65);
								RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
								ui4_1 = loc7;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
								loc7 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(66);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6++;
							}
						}
					} else {
						RTHOOK(67);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) loc10;
						RTHOOK(68);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(69);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(70);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) loc7;
							RTHOOK(71);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(72);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(73);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(74);
								RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
								ui4_1 = loc2;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
								loc4 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(75);
								tu4_1 = (EIF_NATURAL_32) loc4;
								ui4_1 = loc1;
								tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
								if ((EIF_BOOLEAN)(tu4_1 != tu4_2)) {
									RTHOOK(76);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(77);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(78);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									ui4_1 = loc2;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(79);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1++;
								}
							}
							RTHOOK(80);
							if (loc9) {
								RTHOOK(81);
								RTDBGAL(0, 0x10000000, 1,0); /* Result */
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(82);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(83);
								RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
								ui4_1 = loc7;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
								loc7 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(84);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6++;
							}
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(85);
		RTCT("valid_result", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) (arg2 <= Result)) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
				tb2 = (EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(86);
		RTCT("zero_if_absent", EX_POST);
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(86,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7261, "has_unicode_substring", tr1))(tr1, ur1x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(87);
		RTCT("at_this_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result >= arg2)) {
			ui4_1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(87,1);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7264, "same_unicode_string", tr1))(tr1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(88);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result > arg2)) {
			ui4_1 = arg2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 2L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(88,1);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7261, "has_unicode_substring", tr1))(tr1, ur1x)).it_b);
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
	RTHOOK(89);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(16);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {UC_STRING}.substring_index */
EIF_TYPED_VALUE F401_9069 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "substring_index";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc11 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,loc12);
	RTLR(6,loc13);
	RTLIU(7);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_UINT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	
	RTEAA(l_feature_name, 400, Current, 13, 2, 16008);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16008);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTCEQ(arg1, Current)) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		RTHOOK(6);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc10 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) arg2;
		} else {
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7310, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5987, 344))(Current)).it_i4);
				tu4_1 = (EIF_NATURAL_32) ti4_1;
				loc11 = (EIF_NATURAL_32) tu4_1;
			} else {
				RTHOOK(11);
				RTDBGAL(11, 0x38000000, 1, 0); /* loc11 */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5954, 341))(Current)).it_n4);
				loc11 = (EIF_NATURAL_32) tu4_1;
			}
			RTHOOK(12);
			RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc10) + ((EIF_INTEGER_32) 1L));
			RTHOOK(13);
			if ((EIF_BOOLEAN) (arg2 <= loc8)) {
				RTHOOK(14);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
				if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
					RTHOOK(15);
					loc12 = RTCCL(arg1);
					loc12 = RTRV(eif_new_type(400, 0x01),loc12);
					if (EIF_TEST(loc12)) {
						RTHOOK(16);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						ti4_1 = *(EIF_INTEGER_32 *)(loc12 + RTVA(7258, "byte_count", loc12));
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(17);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(18);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(19);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(20);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(21);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(22);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(23);
								RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
								ui4_1 = loc1;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7288, "item_code_at_byte_index", loc12))(loc12, ui4_1x)).it_i4);
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(24);
								if ((EIF_BOOLEAN) (loc4 > loc11)) {
									RTHOOK(25);
									RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(26);
								ui4_1 = loc2;
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
								RTNHOOK(26,1);
								tu4_1 = (EIF_NATURAL_32) tc1;
								if ((EIF_BOOLEAN)(tu4_1 != loc4)) {
									RTHOOK(27);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(28);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(29);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									loc2++;
									RTHOOK(30);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									ui4_1 = loc1;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc12))(loc12, ui4_1x)).it_i4);
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(31);
							if (loc9) {
								RTHOOK(32);
								RTDBGAL(0, 0x10000000, 1,0); /* Result */
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(33);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(34);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6++;
							}
						}
					} else {
						RTHOOK(35);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) loc10;
						RTHOOK(36);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(37);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(38);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(39);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(40);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(41);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(42);
								RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
								ui4_1 = loc1;
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(43);
								if ((EIF_BOOLEAN) (loc4 > loc11)) {
									RTHOOK(44);
									RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(45);
								ui4_1 = loc2;
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
								RTNHOOK(45,1);
								tu4_1 = (EIF_NATURAL_32) tc1;
								if ((EIF_BOOLEAN)(tu4_1 != loc4)) {
									RTHOOK(46);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(47);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(48);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									loc2++;
									RTHOOK(49);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1++;
								}
							}
							RTHOOK(50);
							if (loc9) {
								RTHOOK(51);
								RTDBGAL(0, 0x10000000, 1,0); /* Result */
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(52);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(53);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6++;
							}
						}
					}
				} else {
					RTHOOK(54);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					ui4_1 = arg2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
					loc7 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(55);
					loc13 = RTCCL(arg1);
					loc13 = RTRV(eif_new_type(400, 0x01),loc13);
					if (EIF_TEST(loc13)) {
						RTHOOK(56);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						ti4_1 = *(EIF_INTEGER_32 *)(loc13 + RTVA(7258, "byte_count", loc13));
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(57);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(58);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(59);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) loc7;
							RTHOOK(60);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(61);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(62);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(63);
								RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
								ui4_1 = loc2;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
								RTNHOOK(63,1);
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(64);
								if ((EIF_BOOLEAN) (loc4 > loc11)) {
									RTHOOK(65);
									RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(66);
								RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
								ui4_1 = loc1;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7288, "item_code_at_byte_index", loc13))(loc13, ui4_1x)).it_i4);
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc5 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(67);
								if ((EIF_BOOLEAN) (loc5 > loc11)) {
									RTHOOK(68);
									RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
									loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(69);
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									RTHOOK(70);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(71);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(72);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									ui4_1 = loc2;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(73);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									ui4_1 = loc1;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc13))(loc13, ui4_1x)).it_i4);
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(74);
							if (loc9) {
								RTHOOK(75);
								RTDBGAL(0, 0x10000000, 1,0); /* Result */
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(76);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(77);
								RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
								ui4_1 = loc7;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
								loc7 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(78);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6++;
							}
						}
					} else {
						RTHOOK(79);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) loc10;
						RTHOOK(80);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(81);
							if ((EIF_BOOLEAN) (loc6 > loc8)) break;
							RTHOOK(82);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) loc7;
							RTHOOK(83);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(84);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(85);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(86);
								RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
								ui4_1 = loc2;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
								RTNHOOK(86,1);
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(87);
								if ((EIF_BOOLEAN) (loc4 > loc11)) {
									RTHOOK(88);
									RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(89);
								RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
								ui4_1 = loc1;
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
								loc5 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(90);
								if ((EIF_BOOLEAN) (loc5 > loc11)) {
									RTHOOK(91);
									RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
									loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(92);
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									RTHOOK(93);
									RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
									loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(94);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(95);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									ui4_1 = loc2;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(96);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1++;
								}
							}
							RTHOOK(97);
							if (loc9) {
								RTHOOK(98);
								RTDBGAL(0, 0x10000000, 1,0); /* Result */
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(99);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(100);
								RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
								ui4_1 = loc7;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
								loc7 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(101);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6++;
							}
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(102);
		RTCT("valid_result", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) (arg2 <= Result)) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
				tb2 = (EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(103);
		RTCT("zero_if_absent", EX_POST);
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(103,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", tr1))(tr1, ur1x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(104);
		RTCT("at_this_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result >= arg2)) {
			ui4_1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6152, "same_string", arg1))(arg1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(105);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result > arg2)) {
			ui4_1 = arg2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 2L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(105,1);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", tr1))(tr1, ur1x)).it_b);
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
	RTHOOK(106);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {UC_STRING}.string */
EIF_TYPED_VALUE F401_9070 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 0, 16009);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16009);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(6);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	} else {
		RTHOOK(8);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(11);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
			if ((EIF_BOOLEAN) (loc3 <= ti4_1)) {
				RTHOOK(13);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(13,1);
				ui4_1 = loc3;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			} else {
				RTHOOK(14);
				uc1 = (EIF_CHARACTER_8) '\000';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			}
			RTHOOK(15);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("string_type", EX_POST);
		tr1 = RTLN(eif_new_type(357, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6108, Dtype(tr1)))(tr1);
		RTNHOOK(17,1);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("first_item", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", Result))(Result, ui4_1x)).it_c1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == tc2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(19,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6249, "string", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr2 = tr3;
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
}

/* {UC_STRING}.plus */
EIF_TYPED_VALUE F401_9071 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "plus";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16010);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16010);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000190, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_2 = ti4_2;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4168, "substring_byte_count", tr2))(tr2, ur1x, ui4_1x, ui4_2x)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6295, "append_string", Result))(Result, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6295, "append_string", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("plus_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTHOOK(8);
		RTHOOK(9);
		RTCT("final_unicode", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		ui4_2 = (EIF_INTEGER_32) (ti4_2 + ti4_3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7264, "same_unicode_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.gobo_plus_general */
EIF_TYPED_VALUE F401_9072 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "gobo_plus_general";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16011);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16011);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6123, "is_valid_as_string_8", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000190, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	ui4_2 = ti4_2;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4168, "substring_byte_count", tr2))(tr2, ur1x, ui4_1x, ui4_2x)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6295, "append_string", Result))(Result, ur1x);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6217, "append_string_general", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("plus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("new_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTHOOK(9);
		RTHOOK(10);
		RTCT("final_unicode", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_2 = (EIF_INTEGER_32) (ti4_2 + ti4_3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7264, "same_unicode_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.prefixed_string */
EIF_TYPED_VALUE F401_9073 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "prefixed_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16012);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16012);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	RTDBGAL(0, 0xF8000190, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	ui4_2 = ti4_2;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4168, "substring_byte_count", tr2))(tr2, ur1x, ui4_1x, ui4_2x)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + ti4_2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,2);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6217, "append_string_general", Result))(Result, ur1x);
	RTHOOK(4);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6295, "append_string", Result))(Result, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("prefixed_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("prefixed_string_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7264, "same_unicode_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("final", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ui4_2 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(Current);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.index_of_unicode */
EIF_TYPED_VALUE F401_9074 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "index_of_unicode";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 2, 16013);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16013);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
	ui4_1 = ti4_1;
	ui4_2 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7254, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_result", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= Result) && (EIF_BOOLEAN) (Result <= ti4_1)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("zero_if_absent", EX_POST);
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7259, "has_unicode", tr1))(tr1, ur1x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("found_if_present", EX_POST);
		tb1 = '\01';
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7259, "has_unicode", tr1))(tr1, ur1x)).it_b);
		if (tb2) {
			ui4_1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7259, "has_unicode", tr1))(tr1, ur1x)).it_b);
		if (tb2) {
			ui4_1 = arg2;
			ui4_2 = (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,2);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7259, "has_unicode", tr1))(tr1, ur1x)).it_b);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {UC_STRING}.index_of_item_code */
EIF_TYPED_VALUE F401_9075 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "index_of_item_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 2, 16014);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16014);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 127L))) {
			RTHOOK(6);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) arg2;
			for (;;) {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc1 > loc3)) break;
				RTHOOK(9);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
				RTNHOOK(9,1);
				ti4_1 = (EIF_INTEGER_32) (tc1);
				if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
					RTHOOK(10);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) loc1;
					RTHOOK(11);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(12);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				}
			}
		}
	} else {
		RTHOOK(13);
		if ((EIF_BOOLEAN) (arg2 <= loc3)) {
			RTHOOK(14);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ui4_1 = arg2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(15);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) arg2;
			for (;;) {
				RTHOOK(16);
				if ((EIF_BOOLEAN) (loc1 > loc3)) break;
				RTHOOK(17);
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
				if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
					RTHOOK(18);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) loc1;
					RTHOOK(19);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(20);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ui4_1 = loc2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(21);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("valid_result", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= Result) && (EIF_BOOLEAN) (Result <= ti4_1)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("zero_if_absent", EX_POST);
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7260, "has_item_code", tr1))(tr1, ui4_1x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("found_if_present", EX_POST);
		tb1 = '\01';
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(24,1);
		ui4_1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7260, "has_item_code", tr1))(tr1, ui4_1x)).it_b);
		if (tb2) {
			ui4_1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		ui4_1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7260, "has_item_code", tr1))(tr1, ui4_1x)).it_b);
		if (tb2) {
			ui4_1 = arg2;
			ui4_2 = (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(25,2);
			ui4_1 = arg1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7260, "has_item_code", tr1))(tr1, ui4_1x)).it_b);
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
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {UC_STRING}.index_of */
EIF_TYPED_VALUE F401_9076 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "index_of";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	
	RTEAA(l_feature_name, 400, Current, 5, 2, 16015);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16015);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(loc3 == ti4_1)) {
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) arg2;
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(7);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == arg1)) {
				RTHOOK(8);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) loc1;
				RTHOOK(9);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(10);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	} else {
		RTHOOK(11);
		if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '\000')) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) (arg2 <= loc3)) {
				RTHOOK(13);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(13,1);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(14);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ui4_1 = arg2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(15);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) arg2;
				for (;;) {
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(17);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ui4_1 = loc2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
					loc5 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(18);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc5 > loc4))) {
						RTHOOK(19);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) loc1;
						RTHOOK(20);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(21);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						ui4_1 = loc2;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(22);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					}
				}
			}
		} else {
			RTHOOK(23);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ui4_1 = ti4_1;
			ui4_2 = arg2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7254, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("valid_result", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= Result) && (EIF_BOOLEAN) (Result <= ti4_1)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("zero_if_absent", EX_POST);
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6256, "has", tr1))(tr1, uc1x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(26);
		RTCT("found_if_present", EX_POST);
		tb1 = '\01';
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(26,1);
		uc1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6256, "has", tr1))(tr1, uc1x)).it_b);
		if (tb2) {
			ui4_1 = Result;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(27,1);
		uc1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6256, "has", tr1))(tr1, uc1x)).it_b);
		if (tb2) {
			ui4_1 = arg2;
			ui4_2 = (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(27,2);
			uc1 = arg1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6256, "has", tr1))(tr1, uc1x)).it_b);
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
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_STRING}.hash_code */
EIF_TYPED_VALUE F401_9077 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hash_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	
	RTEAA(l_feature_name, 400, Current, 4, 0, 16016);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16016);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 6199, 0x10000000, 1); /* internal_hash_code */
		*(EIF_INTEGER_32 *)(Current + RTWA(6199, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5229, 358))(Current)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
		loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(9);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(10);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 5L) * Result) + loc3);
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
			if ((EIF_BOOLEAN) (loc3 > ti4_1)) {
				RTHOOK(12);
				RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(13);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(14);
		if (loc4) {
			RTHOOK(15);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6249, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5229, "hash_code", tr1))(tr1)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		}
	}
	RTHOOK(16);
	if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(17);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {UC_STRING}.new_empty_string */
EIF_TYPED_VALUE F401_9078 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "new_empty_string";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16017);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16017);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_suggested_capacity", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000190, 0,0); /* Result */
	tr1 = RTLNSMART(Dftype(Current));
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(Current);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("new_string_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("byte_count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(7258, "byte_count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("byte_capacity_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6147, "byte_capacity", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= arg1)) {
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
#undef ur1
#undef ur2
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.unicode_occurrences */
EIF_TYPED_VALUE F401_9079 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "unicode_occurrences";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16018);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16018);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
	ui4_1 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7257, dtype))(Current, ui4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("zero_if_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("recurse_if_not_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
			tb2 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			ur1 = RTCCL(arg1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7256, "unicode_occurrences", tr1))(tr1, ur1x)).it_i4);
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("recurse_if_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
			tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ur1 = RTCCL(arg1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7256, "unicode_occurrences", tr1))(tr1, ur1x)).it_i4);
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1));
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.code_occurrences */
EIF_TYPED_VALUE F401_9080 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "code_occurrences";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 1, 16019);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16019);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 127L))) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(6);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(8);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
				RTNHOOK(8,1);
				ti4_1 = (EIF_INTEGER_32) (tc1);
				if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
					RTHOOK(9);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result++;
				}
				RTHOOK(10);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	} else {
		RTHOOK(11);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(14);
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
				RTHOOK(15);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result++;
			}
			RTHOOK(16);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("zero_if_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("recurse_if_not_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			tb2 = (EIF_BOOLEAN)(ti4_1 != arg1);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			ui4_1 = arg1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7257, "code_occurrences", tr1))(tr1, ui4_1x)).it_i4);
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("recurse_if_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			tb2 = (EIF_BOOLEAN)(ti4_1 == arg1);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(19,1);
			ui4_1 = arg1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7257, "code_occurrences", tr1))(tr1, ui4_1x)).it_i4);
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.occurrences */
EIF_TYPED_VALUE F401_9081 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "occurrences";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 400, Current, 4, 1, 16020);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16020);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(5);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
			if ((EIF_BOOLEAN)(tc1 == arg1)) {
				RTHOOK(6);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result++;
			}
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	} else {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '\000')) {
			RTHOOK(9);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(10);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(11);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(13);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ui4_1 = loc1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(14);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (loc4 > loc3))) {
					RTHOOK(15);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result++;
				}
				RTHOOK(16);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ui4_1 = loc1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
				loc1 = (EIF_INTEGER_32) ti4_1;
			}
		} else {
			RTHOOK(17);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ui4_1 = ti4_1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7257, dtype))(Current, ui4_1x)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("non_negative_occurrences", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("zero_if_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("recurse_if_not_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
			tb2 = (EIF_BOOLEAN)(tc1 != arg1);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(20,1);
			uc1 = arg1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6251, "occurrences", tr1))(tr1, uc1x)).it_i4);
			tb1 = (EIF_BOOLEAN)(Result == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("recurse_if_found_at_first_position", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
			tb2 = (EIF_BOOLEAN)(tc1 == arg1);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			uc1 = arg1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6251, "occurrences", tr1))(tr1, uc1x)).it_i4);
			tb1 = (EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {UC_STRING}.count */
EIF_TYPED_VALUE F401_9082 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6269,Dtype(Current)));
	return r;
}


/* {UC_STRING}.byte_count */
EIF_TYPED_VALUE F401_9083 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7258,Dtype(Current)));
	return r;
}


/* {UC_STRING}.byte_capacity */
EIF_TYPED_VALUE F401_9084 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "byte_capacity";
	RTEX;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16023);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16023);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, 358))(Current)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("capacity_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("capacity_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {UC_STRING}.has_unicode */
EIF_TYPED_VALUE F401_9085 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_unicode";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16024);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16024);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7260, dtype))(Current, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("false_if_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) !Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("true_if_first", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
			tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
			tb2 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7259, "has_unicode", tr1))(tr1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN)(Result == tb2);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.has_item_code */
EIF_TYPED_VALUE F401_9086 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_item_code";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16025);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16025);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ui4_1 = arg1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7254, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("false_if_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) !Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("true_if_first", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			tb2 = (EIF_BOOLEAN)(ti4_1 == arg1);
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
			tb2 = (EIF_BOOLEAN)(ti4_1 != arg1);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ui4_1 = arg1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7260, "has_item_code", tr1))(tr1, ui4_1x)).it_b);
			tb1 = (EIF_BOOLEAN)(Result == tb2);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.has */
EIF_TYPED_VALUE F401_9087 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16026);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16026);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	uc1 = arg1;
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6247, dtype))(Current, uc1x, ui4_1x)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_found_in_empty", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4371, dtype))(Current)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("false_if_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) !Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("true_if_first", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
			tb2 = (EIF_BOOLEAN)(tc1 == arg1);
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
			tb2 = (EIF_BOOLEAN)(tc1 != arg1);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			uc1 = arg1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6256, "has", tr1))(tr1, uc1x)).it_b);
			tb1 = (EIF_BOOLEAN)(Result == tb2);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {UC_STRING}.has_unicode_substring */
EIF_TYPED_VALUE F401_9088 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_unicode_substring";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16027);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16027);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	if (RTCEQ(arg1, Current)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ur1 = RTCCL(arg1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7250, dtype))(Current, ur1x, ui4_1x)).it_i4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("false_if_too_small", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("true_if_initial", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ur1 = RTCCL(arg1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7264, "same_unicode_string", tr1))(tr1, ur1x)).it_b);
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
		RTHOOK(8);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ur1 = RTCCL(arg1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7264, "same_unicode_string", tr1))(tr1, ur1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,2);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7261, "has_unicode_substring", tr1))(tr1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("has_substring", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6151, dtype))(Current, ur1x)).it_b);
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
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.has_substring */
EIF_TYPED_VALUE F401_9089 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_substring";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16028);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16028);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	if (RTCEQ(arg1, Current)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ur1 = RTCCL(arg1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6157, dtype))(Current, ur1x, ui4_1x)).it_i4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("false_if_too_small", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("true_if_initial", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6152, "same_string", arg1))(arg1, ur1x)).it_b);
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
		RTHOOK(8);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6152, "same_string", arg1))(arg1, ur1x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", tr1))(tr1, ur1x)).it_b);
			tb1 = (EIF_BOOLEAN)(Result == tb2);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.is_empty */
EIF_TYPED_VALUE F401_9090 (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16029);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16029);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
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

/* {UC_STRING}.is_ascii */
EIF_TYPED_VALUE F401_9091 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_ascii";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16030);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16030);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) || (Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7249, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5234, "is_ascii", tr1))(tr1)).it_b);
			if (tb3) {
				ui4_1 = ((EIF_INTEGER_32) 2L);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
				ui4_2 = ti4_1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(3,2);
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7263, "is_ascii", tr1))(tr1)).it_b);
				tb2 = tb3;
			}
			tb1 = (EIF_BOOLEAN)(Result == tb2);
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
}

/* {UC_STRING}.is_equal */
EIF_TYPED_VALUE F401_9092 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_equal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 1, 16031);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16031);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(400, 0x01),0);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (RTCEQ(arg1, Current)) {
		RTHOOK(2);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7258, "byte_count", arg1));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(6);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(7);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(8);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
				ui4_1 = loc1;
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7299, "byte_item", arg1))(arg1, ui4_1x)).it_c1);
				if ((EIF_BOOLEAN)(tc1 != tc2)) {
					RTHOOK(9);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(10);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(11);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("unicode_definition", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(arg1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb3) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
			tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb2) {
			tb2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
				tb3 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
					ui4_1 = ((EIF_INTEGER_32) 2L);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
					ui4_2 = ti4_1;
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(12,2);
					ui4_1 = ((EIF_INTEGER_32) 2L);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
					ui4_2 = ti4_1;
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					ur1 = RTCCL(tr2);
					tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.is_less */
EIF_TYPED_VALUE F401_9093 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16032);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16032);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(400, 0x01),0);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(2990, dtype))(Current, ur1x)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("unicode_definition", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
			tb2 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
		}
		if (!tb2) {
			tb2 = '\0';
			tb3 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
				tb3 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
			}
			if (tb3) {
				tb3 = '\01';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
				if (!(EIF_BOOLEAN) (tu4_1 < tu4_2)) {
					tb4 = '\0';
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
					if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(2,1);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
						ui4_2 = ti4_1;
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						ur1 = RTCCL(tr2);
						tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2903, "is_less", tr1))(tr1, ur1x)).it_b);
						tb4 = tb5;
					}
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.same_string */
EIF_TYPED_VALUE F401_9094 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "same_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16033);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16033);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
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
	ur1 = RTCCL(arg1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6152, dtype))(Current, ur1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6249, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6249, "string", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		if ((EIF_BOOLEAN)(Result == RTEQ(tr1, tr2))) {
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
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {UC_STRING}.same_string_general */
EIF_TYPED_VALUE F401_9095 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "same_string_general";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc7);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 400, Current, 7, 1, 16034);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16034);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	if (RTCEQ(arg1, Current)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(6);
			loc7 = RTCCL(arg1);
			loc7 = RTRV(eif_new_type(400, 0x01),loc7);
			if (EIF_TEST(loc7)) {
				RTHOOK(7);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(7,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7310, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(8);
					RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5987, 344))(Current)).it_i4);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc6 = (EIF_NATURAL_32) tu4_1;
				} else {
					RTHOOK(9);
					RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5954, 341))(Current)).it_n4);
					loc6 = (EIF_NATURAL_32) tu4_1;
				}
				RTHOOK(10);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(11);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(12);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(13);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				for (;;) {
					RTHOOK(14);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(15);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					ui4_1 = loc1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
					RTNHOOK(15,1);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc4 > loc6)) {
						RTHOOK(17);
						RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
						loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(18);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					ui4_1 = loc2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7288, "item_code_at_byte_index", loc7))(loc7, ui4_1x)).it_i4);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(19);
					if ((EIF_BOOLEAN) (loc5 > loc6)) {
						RTHOOK(20);
						RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
						loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc4 != loc5)) {
						RTHOOK(22);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(23);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(24);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						ui4_1 = loc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(25);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						ui4_1 = loc2;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc7))(loc7, ui4_1x)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
					}
				}
			} else {
				RTHOOK(26);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7309, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(26,1);
				tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7310, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur1 = RTCCL(tr2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(27);
					RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5987, 344))(Current)).it_i4);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc6 = (EIF_NATURAL_32) tu4_1;
				} else {
					RTHOOK(28);
					RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5954, 341))(Current)).it_n4);
					loc6 = (EIF_NATURAL_32) tu4_1;
				}
				RTHOOK(29);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(30);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(31);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(32);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				for (;;) {
					RTHOOK(33);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(34);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					ui4_1 = loc1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
					RTNHOOK(34,1);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(35);
					if ((EIF_BOOLEAN) (loc4 > loc6)) {
						RTHOOK(36);
						RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
						loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(37);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					ui4_1 = loc2;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(38);
					if ((EIF_BOOLEAN) (loc5 > loc6)) {
						RTHOOK(39);
						RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
						loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(40);
					if ((EIF_BOOLEAN)(loc4 != loc5)) {
						RTHOOK(41);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(42);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(43);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						ui4_1 = loc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(44);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2++;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.same_unicode_string */
EIF_TYPED_VALUE F401_9096 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "same_unicode_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc6);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 400, Current, 6, 1, 16035);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16035);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	if (RTCEQ(arg1, Current)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(6);
			loc6 = RTCCL(arg1);
			loc6 = RTRV(eif_new_type(400, 0x01),loc6);
			if (EIF_TEST(loc6)) {
				RTHOOK(7);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(8);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(9);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(10);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				for (;;) {
					RTHOOK(11);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(12);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					ui4_1 = loc1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
					RTNHOOK(12,1);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(13);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					ui4_1 = loc2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7288, "item_code_at_byte_index", loc6))(loc6, ui4_1x)).it_i4);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(14);
					if ((EIF_BOOLEAN)(loc4 != loc5)) {
						RTHOOK(15);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(16);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(17);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						ui4_1 = loc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(18);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						ui4_1 = loc2;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc6))(loc6, ui4_1x)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
					}
				}
			} else {
				RTHOOK(19);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(20);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(21);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(22);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				for (;;) {
					RTHOOK(23);
					if ((EIF_BOOLEAN) (loc1 > loc3)) break;
					RTHOOK(24);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					ui4_1 = loc1;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
					RTNHOOK(24,1);
					tu4_1 = (EIF_NATURAL_32) ti4_1;
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(25);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					ui4_1 = loc2;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(26);
					if ((EIF_BOOLEAN)(loc4 != loc5)) {
						RTHOOK(27);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(28);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(29);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						ui4_1 = loc1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(30);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2++;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tb2 = '\01';
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
				tb3 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
					tb4 = '\01';
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
					if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(31,1);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
						ui4_2 = ti4_1;
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						ur1 = RTCCL(tr2);
						tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7264, "same_unicode_string", tr1))(tr1, ur1x)).it_b);
						tb4 = tb5;
					}
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(32);
		RTCT("same_string", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6152, dtype))(Current, ur1x)).it_b);
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
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.three_way_comparison */
EIF_TYPED_VALUE F401_9097 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "three_way_comparison";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_CHAR8, &loc5);
	RTLU(SK_CHAR8, &loc6);
	RTLU(SK_BOOL, &loc7);
	
	RTEAA(l_feature_name, 400, Current, 7, 1, 16036);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16036);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(400, 0x01),0);
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
	tb1 = '\0';
	if (!RTCEQ(arg1, Current)) {
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7258, "byte_count", arg1));
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc3 < loc4)) {
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc3;
		} else {
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) loc4;
		}
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(10);
			RTDBGAL(5, 0x08000000, 1, 0); /* loc5 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
			loc5 = (EIF_CHARACTER_8) tc1;
			RTHOOK(11);
			RTDBGAL(6, 0x08000000, 1, 0); /* loc6 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7299, "byte_item", arg1))(arg1, ui4_1x)).it_c1);
			loc6 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc5 == loc6)) {
				RTHOOK(13);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			} else {
				RTHOOK(14);
				if ((EIF_BOOLEAN) (loc5 < loc6)) {
					RTHOOK(15);
					RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(16);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					RTHOOK(17);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(18);
					RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(19);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					RTHOOK(20);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				}
			}
		}
		RTHOOK(21);
		if ((EIF_BOOLEAN) !loc7) {
			RTHOOK(22);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(23);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(24);
				if ((EIF_BOOLEAN)(loc3 != loc4)) {
					RTHOOK(25);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("equal_zero", EX_POST);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == RTEQ(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("smaller_negative", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2903, "is_less", Current))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L)) == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("greater_positive", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2905, "is_greater", Current))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 1L)) == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.three_way_unicode_comparison */
EIF_TYPED_VALUE F401_9098 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "three_way_unicode_comparison";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc10);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_CHAR8, &loc5);
	RTLU(SK_CHAR8, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 400, Current, 10, 1, 16037);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16037);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	if (RTCEQ(arg1, Current)) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(4);
		tb1 = '\0';
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			loc10 = RTCCL(arg1);
			loc10 = RTRV(eif_new_type(400, 0x01),loc10);
			tb1 = EIF_TEST(loc10);
		}
		if (tb1) {
			RTHOOK(5);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = *(EIF_INTEGER_32 *)(loc10 + RTVA(7258, "byte_count", loc10));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(8);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(9);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(10);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(11);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(12);
				RTDBGAL(5, 0x08000000, 1, 0); /* loc5 */
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
				loc5 = (EIF_CHARACTER_8) tc1;
				RTHOOK(13);
				RTDBGAL(6, 0x08000000, 1, 0); /* loc6 */
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7299, "byte_item", loc10))(loc10, ui4_1x)).it_c1);
				loc6 = (EIF_CHARACTER_8) tc1;
				RTHOOK(14);
				if ((EIF_BOOLEAN)(loc5 == loc6)) {
					RTHOOK(15);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				} else {
					RTHOOK(16);
					if ((EIF_BOOLEAN) (loc5 < loc6)) {
						RTHOOK(17);
						RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(18);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						RTHOOK(19);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(20);
						RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(21);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(22);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					}
				}
			}
			RTHOOK(23);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(24);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(25);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(26);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(27);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		} else {
			RTHOOK(28);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(29);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(30);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(31);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(32);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(33);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(34);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(35);
				RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
				loc7 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(36);
				RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(37);
				if ((EIF_BOOLEAN)(loc7 == loc8)) {
					RTHOOK(38);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				} else {
					RTHOOK(39);
					if ((EIF_BOOLEAN) (loc7 < loc8)) {
						RTHOOK(40);
						RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(41);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
						RTHOOK(42);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(43);
						RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
						loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(44);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(45);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					}
				}
			}
			RTHOOK(46);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(47);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(48);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(49);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(50);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(51);
		RTCT("equal_zero", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7264, dtype))(Current, ur1x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(52);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.put_unicode */
void F401_9099 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put_unicode";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 2, 16038);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16038);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4661, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_2;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
	ui4_1 = ti4_2;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7267, dtype))(Current, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("stable_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("replaced", EX_POST);
		ui4_1 = arg2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("stable_before_i", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("stable_after_i", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_2;
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		RTCO(tr4);
		ur1 = RTCCL(tr3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		if (tb1) {
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
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {UC_STRING}.put_item_code */
void F401_9100 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put_item_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_CHAR8, &loc6);
	
	RTEAA(l_feature_name, 400, Current, 6, 2, 16039);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16039);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4661, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_item_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_2;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) arg2;
		RTHOOK(5);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = arg2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(7);
		RTDBGAL(6, 0x08000000, 1, 0); /* loc6 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
		loc6 = (EIF_CHARACTER_8) tc1;
		RTHOOK(8);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		uc1 = loc6;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4166, "encoded_byte_count", tr5))(tr5, uc1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_2;
	}
	RTHOOK(9);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(9,1);
	ui4_1 = arg1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr5))(tr5, ui4_1x)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(10);
	if ((EIF_BOOLEAN)(loc4 == loc3)) {
	} else {
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc4 < loc3)) {
			RTHOOK(12);
			ui4_1 = (EIF_INTEGER_32) (loc1 + loc3);
			ui4_2 = (EIF_INTEGER_32) (loc3 - loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7303, dtype))(Current, ui4_1x, ui4_2x);
		} else {
			RTHOOK(13);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
			RTHOOK(14);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + loc2);
			RTHOOK(15);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (loc5 > ti4_2)) {
				RTHOOK(16);
				ui4_1 = loc5;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
			}
			RTHOOK(17);
			ui4_1 = (EIF_INTEGER_32) (loc1 + loc3);
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7302, dtype))(Current, ui4_1x, ui4_2x);
		}
	}
	RTHOOK(18);
	ui4_1 = arg1;
	ui4_2 = loc4;
	ui4_3 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
		RTCT("stable_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(20);
		RTCT("replaced", EX_POST);
		ui4_1 = arg2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("stable_before_i", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(21,1);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("stable_after_i", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_2;
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,1);
		RTCO(tr4);
		ur1 = RTCCL(tr3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_STRING}.put */
void F401_9101 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 400, Current, 6, 2, 16040);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16040);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(2);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) arg2;
		RTHOOK(3);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(6);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		uc1 = loc3;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4166, "encoded_byte_count", tr1))(tr1, uc1x)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(7);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	uc1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4169, "character_byte_count", tr1))(tr1, uc1x)).it_i4);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc5 == loc4)) {
	} else {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc5 < loc4)) {
			RTHOOK(10);
			ui4_1 = (EIF_INTEGER_32) (loc1 + loc4);
			ui4_2 = (EIF_INTEGER_32) (loc4 - loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7303, dtype))(Current, ui4_1x, ui4_2x);
		} else {
			RTHOOK(11);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc4);
			RTHOOK(12);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc2);
			RTHOOK(13);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (loc6 > ti4_1)) {
				RTHOOK(14);
				ui4_1 = loc6;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
			}
			RTHOOK(15);
			ui4_1 = (EIF_INTEGER_32) (loc1 + loc4);
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7302, dtype))(Current, ui4_1x, ui4_2x);
		}
	}
	RTHOOK(16);
	uc1 = arg1;
	ui4_1 = loc5;
	ui4_2 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7307, dtype))(Current, uc1x, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("unicode_replaced", EX_POST);
		ui4_1 = arg2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
		tu4_2 = (EIF_NATURAL_32) arg1;
		if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_STRING}.prepend */
void F401_9102 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "prepend";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16041);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16041);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		ti4_1 = (EIF_INTEGER_32) (ti4_2 + ti4_3);
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6299, dtype))(Current, ur1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
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

/* {UC_STRING}.prepend_string */
void F401_9103 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "prepend_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16042);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16042);
	if (arg1) {
		RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6290, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {UC_STRING}.append_string_general */
void F401_9104 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_string_general";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 1, 16043);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16043);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("compatible_strings", EX_PRE);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6121, dtype))(Current)).it_b);
		if (tb2) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6123, "is_valid_as_string_8", arg1))(arg1)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(355, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6293, dtype))(Current, ur1x);
	} else {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6217, 358))(Current, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef arg1
}

/* {UC_STRING}.append_unicode_character */
void F401_9105 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_unicode_character";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16044);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16044);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7269, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("appended", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = ti4_2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("stable_before", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr3))(tr3, ur1x)).it_b);
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
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.append_item_code */
void F401_9106 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_item_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 1, 16045);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16045);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_item_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ui4_1 = arg1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr3))(tr3, ui4_1x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + loc2);
	RTHOOK(5);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (loc3 > ti4_2)) {
		RTHOOK(6);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
	}
	RTHOOK(7);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc3;
	RTHOOK(8);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTHOOK(9);
	ui4_1 = arg1;
	ui4_2 = loc2;
	ui4_3 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("appended", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = ti4_2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("stable_before", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr3))(tr3, ur1x)).it_b);
		if (tb1) {
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
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {UC_STRING}.append_character */
void F401_9107 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_character";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 400, Current, 4, 1, 16046);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16046);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	if ((EIF_BOOLEAN) (arg1 <= (EIF_CHARACTER_8) '')) {
		RTHOOK(2);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		uc1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4169, "character_byte_count", tr1))(tr1, uc1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_2;
	}
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
	RTHOOK(5);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + loc2);
	RTHOOK(6);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (loc3 > ti4_2)) {
		RTHOOK(7);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
	}
	RTHOOK(8);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc3;
	RTHOOK(9);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(10);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
		RTHOOK(11);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		ui4_1 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		RTHOOK(12);
		uc1 = arg1;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7319, dtype))(Current, uc1x, ui4_1x);
		RTHOOK(13);
		ui4_1 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(14);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		RTHOOK(15);
		uc1 = arg1;
		ui4_1 = loc2;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7307, dtype))(Current, uc1x, ui4_1x, ui4_2x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("item_inserted", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = ti4_2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTHOOK(19);
		RTCT("unicode_appended", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = ti4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
		tu4_2 = (EIF_NATURAL_32) arg1;
		if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {UC_STRING}.append_string */
void F401_9108 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16047);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16047);
	if (arg1) {
		RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6293, dtype))(Current, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("appended", EX_POST);
		if ((!((EIF_BOOLEAN)(arg1 != NULL)) || ((EIF_BOOLEAN) 1))) {
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
#undef ur1
#undef arg1
}

/* {UC_STRING}.put_string */
void F401_9109 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "put_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16048);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16048);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1281, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6293, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {UC_STRING}.append */
void F401_9110 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLR(7,loc7);
	RTLR(8,loc8);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 400, Current, 8, 1, 16049);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16049);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("argument_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(arg1);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7310, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur2 = RTCCL(tr3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr2))(tr2, ur1x, ur2x)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		ui4_2 = ti4_3;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4168, "substring_byte_count", tr2))(tr2, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_3;
		RTHOOK(4);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		if ((EIF_BOOLEAN)(loc1 == ti4_3)) {
			RTHOOK(5);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_3 + loc1);
			RTHOOK(6);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_3 + loc1);
			RTHOOK(7);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			ui4_1 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
			RTHOOK(8);
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			ui4_1 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6202, dtype))(Current, ui4_1x);
			RTHOOK(9);
			RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
			ub1 = (EIF_BOOLEAN) 0;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1079, 57))(Current, ub1x)).it_b);
			loc6 = (EIF_BOOLEAN) tb1;
			RTHOOK(10);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6293, 358))(Current, ur1x);
			RTHOOK(11);
			RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
			ub1 = loc6;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1079, 57))(Current, ub1x)).it_b);
			loc6 = (EIF_BOOLEAN) tb1;
			RTHOOK(12);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
			ui4_1 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
			RTHOOK(13);
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
			ui4_1 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6202, dtype))(Current, ui4_1x);
			RTHOOK(14);
			ui4_1 = loc5;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
			RTHOOK(15);
			RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
			*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc4;
		} else {
			RTHOOK(16);
			ur1 = RTCCL(arg1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
			ui4_2 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7270, dtype))(Current, ur1x, ui4_1x, ui4_2x);
		}
	} else {
		RTHOOK(17);
		loc7 = RTCCL(arg1);
		loc7 = RTRV(eif_new_type(400, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			RTHOOK(18);
			tb1 = '\01';
			loc8 = RTCCL(arg1);
			loc8 = RTRV(eif_new_type(401, 0x01),loc8);
			if (!(EIF_TEST(loc8))) {
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(18,1);
				ur1 = RTCCL(loc7);
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7311, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				ur2 = RTCCL(tr3);
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr2))(tr2, ur1x, ur2x)).it_b);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(19);
				if (RTCEQ(loc7, Current)) {
					RTHOOK(20);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_3);
					RTHOOK(21);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_3);
					RTHOOK(22);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					ui4_1 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
					RTHOOK(23);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					ui4_1 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6202, dtype))(Current, ui4_1x);
					RTHOOK(24);
					RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
					ub1 = (EIF_BOOLEAN) 0;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1079, 57))(Current, ub1x)).it_b);
					loc6 = (EIF_BOOLEAN) tb1;
					RTHOOK(25);
					ur1 = RTCCL(arg1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6293, 358))(Current, ur1x);
					RTHOOK(26);
					RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
					ub1 = loc6;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1079, 57))(Current, ub1x)).it_b);
					loc6 = (EIF_BOOLEAN) tb1;
					RTHOOK(27);
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
					ui4_1 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
					RTHOOK(28);
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
					ui4_1 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6202, dtype))(Current, ui4_1x);
					RTHOOK(29);
					ui4_1 = loc5;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
					RTHOOK(30);
					RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
					*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc4;
				} else {
					RTHOOK(31);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					ti4_3 = *(EIF_INTEGER_32 *)(loc7 + RTVA(6269, "count", loc7));
					loc3 = (EIF_INTEGER_32) ti4_3;
					RTHOOK(32);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					ti4_3 = *(EIF_INTEGER_32 *)(loc7 + RTVA(7258, "byte_count", loc7));
					loc2 = (EIF_INTEGER_32) ti4_3;
					RTHOOK(33);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_3 + loc2);
					RTHOOK(34);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_3 + loc3);
					RTHOOK(35);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7305, "set_count", loc7))(loc7, ui4_1x);
					RTHOOK(36);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					ui4_1 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
					RTHOOK(37);
					ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					ui4_1 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6202, dtype))(Current, ui4_1x);
					RTHOOK(38);
					RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
					ub1 = (EIF_BOOLEAN) 0;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1079, 57))(Current, ub1x)).it_b);
					loc6 = (EIF_BOOLEAN) tb1;
					RTHOOK(39);
					ur1 = RTCCL(arg1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6293, 358))(Current, ur1x);
					RTHOOK(40);
					RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
					ub1 = loc6;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1079, 57))(Current, ub1x)).it_b);
					loc6 = (EIF_BOOLEAN) tb1;
					RTHOOK(41);
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
					ui4_1 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
					RTHOOK(42);
					ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
					ui4_1 = ti4_3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6202, dtype))(Current, ui4_1x);
					RTHOOK(43);
					ui4_1 = loc5;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
					RTHOOK(44);
					ui4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7305, "set_count", loc7))(loc7, ui4_1x);
					RTHOOK(45);
					RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
					*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc4;
				}
			} else {
				RTHOOK(46);
				ur1 = RTCCL(arg1);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
				ui4_2 = ti4_3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7270, dtype))(Current, ur1x, ui4_1x, ui4_2x);
			}
		} else {
			RTHOOK(47);
			ur1 = RTCCL(arg1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
			ui4_2 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7270, dtype))(Current, ur1x, ui4_1x, ui4_2x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(48);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(49);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(50);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ub1
#undef arg1
}

/* {UC_STRING}.gobo_append_substring */
void F401_9111 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "gobo_append_substring";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,loc5);
	RTLR(7,tr5);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 400, Current, 5, 3, 16050);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16050);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ui4_1 = arg2;
		ui4_2 = arg3;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		if (RTCEQ(arg1, Current)) {
			RTHOOK(8);
			RTDBGAL(5, 0xF8000160, 0, 0); /* loc5 */
			tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc5 = (EIF_REFERENCE) RTCCL(tr5);
		} else {
			RTHOOK(9);
			RTDBGAL(5, 0xF8000160, 0, 0); /* loc5 */
			loc5 = (EIF_REFERENCE) RTCCL(arg1);
		}
		RTHOOK(10);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(10,1);
		ur1 = RTCCL(loc5);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4168, "substring_byte_count", tr5))(tr5, ur1x, ui4_1x, ui4_2x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		RTHOOK(12);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc3);
		RTHOOK(13);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (loc4 > ti4_1)) {
			RTHOOK(14);
			ui4_1 = loc4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
		}
		RTHOOK(15);
		RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
		*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc4;
		RTHOOK(16);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		RTHOOK(17);
		ur1 = RTCCL(loc5);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ui4_3 = loc3;
		ui4_4 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7308, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("appended", EX_POST);
		RTCO(tr2);
		RTCO(tr4);
		ur1 = RTCCL(tr3);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7251, "gobo_plus_general", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr5);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11, dtype))(Current, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_STRING}.put_substring */
void F401_9112 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "put_substring";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 3, 16051);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16051);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1281, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	ui4_2 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7270, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_STRING}.append_utf8 */
void F401_9113 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_utf8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_CHAR8, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	
	RTEAA(l_feature_name, 400, Current, 8, 1, 16052);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16052);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf8", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4145, "valid_utf8", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc3);
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (loc8 > ti4_1)) {
		RTHOOK(7);
		ui4_1 = loc8;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
	}
	RTHOOK(8);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	RTHOOK(9);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc8;
	RTHOOK(10);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(12);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7++;
		RTHOOK(13);
		RTDBGAL(4, 0x08000000, 1, 0); /* loc4 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc4 = (EIF_CHARACTER_8) tc1;
		RTHOOK(14);
		uc1 = loc4;
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
		RTHOOK(15);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(16);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
		RTHOOK(17);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		uc1 = loc4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4166, "encoded_byte_count", tr1))(tr1, uc1x)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(18);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(19);
			if ((EIF_BOOLEAN) (loc5 >= loc6)) break;
			RTHOOK(20);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
			uc1 = tc1;
			ui4_1 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
			RTHOOK(21);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			RTHOOK(22);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
			RTHOOK(23);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5++;
		}
	}
	RTHOOK(24);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc7);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uc1
#undef arg1
}

/* {UC_STRING}.append_utf16 */
void F401_9114 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_utf16";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	
	RTEAA(l_feature_name, 400, Current, 7, 1, 16053);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16053);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "valid_utf16", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(7);
	if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		ui4_1 = ((EIF_INTEGER_32) 2L);
		tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
		uu4_2 = tu4_2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4775, "is_endian_detection_character_most_first_natural_32", tr1))(tr1, uu4_1x, uu4_2x)).it_b);
		if (tb1) {
			if (RTAL & CK_CHECK) {
				RTHOOK(9);
				RTCT("msb_first_set", EX_CHECK);
				if (loc1) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(10);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
		} else {
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
			uu4_2 = tu4_2;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4777, "is_endian_detection_character_least_first_natural_32", tr1))(tr1, uu4_1x, uu4_2x)).it_b);
			if (tb1) {
				RTHOOK(12);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(13);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			}
		}
	}
	for (;;) {
		RTHOOK(14);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(15);
		if (loc1) {
			RTHOOK(16);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(17);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(18);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ui4_1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(19);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(20);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(20,1);
		ui4_1 = loc4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4780, "is_surrogate", tr1))(tr1, ui4_1x)).it_b);
		if (tb1) {
			if (RTAL & CK_CHECK) {
				RTHOOK(21);
				RTCT("valid_pre_implies_high", EX_CHECK);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,1);
				ui4_1 = loc4;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4781, "is_high_surrogate", tr1))(tr1, ui4_1x)).it_b);
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
			}
			if (RTAL & CK_CHECK) {
				RTHOOK(22);
				RTCT("valid_pre_implies_size", EX_CHECK);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) < loc3)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(23);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 += ((EIF_INTEGER_32) 2L);
			RTHOOK(24);
			if (loc1) {
				RTHOOK(25);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(26);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
				loc7 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(27);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
				loc7 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(28);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
			}
			if (RTAL & CK_CHECK) {
				RTHOOK(29);
				RTCT("valid_pre_implies_low", EX_CHECK);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(29,1);
				ui4_1 = loc6;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4782, "is_low_surrogate", tr1))(tr1, ui4_1x)).it_b);
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(30);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(30,1);
			ui4_1 = loc4;
			ui4_2 = loc5;
			ui4_3 = loc6;
			ui4_4 = loc7;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4785, "surrogate_from_bytes", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7269, dtype))(Current, ui4_1x);
		} else {
			RTHOOK(31);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 * ((EIF_INTEGER_32) 256L)) + loc5);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7269, dtype))(Current, ui4_1x);
		}
		RTHOOK(32);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 += ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef uu4_2
#undef arg1
}

/* {UC_STRING}.append_utf16be */
void F401_9115 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_utf16be";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 400, Current, 6, 1, 16054);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16054);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16be", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4770, "valid_utf16be", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(7);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ui4_1 = loc3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4780, "is_surrogate", tr1))(tr1, ui4_1x)).it_b);
		if (tb1) {
			if (RTAL & CK_CHECK) {
				RTHOOK(10);
				RTCT("valid_pre_implies_high", EX_CHECK);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				ui4_1 = loc3;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4781, "is_high_surrogate", tr1))(tr1, ui4_1x)).it_b);
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
			}
			if (RTAL & CK_CHECK) {
				RTHOOK(11);
				RTCT("valid_pre_implies_size", EX_CHECK);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) < loc2)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(12);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 += ((EIF_INTEGER_32) 2L);
			RTHOOK(13);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			if (RTAL & CK_CHECK) {
				RTHOOK(15);
				RTCT("valid_pre_implies_low", EX_CHECK);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				ui4_1 = loc5;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4782, "is_low_surrogate", tr1))(tr1, ui4_1x)).it_b);
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ui4_1 = loc3;
			ui4_2 = loc4;
			ui4_3 = loc5;
			ui4_4 = loc6;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4785, "surrogate_from_bytes", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7269, dtype))(Current, ui4_1x);
		} else {
			RTHOOK(17);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 256L)) + loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7269, dtype))(Current, ui4_1x);
		}
		RTHOOK(18);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {UC_STRING}.append_utf16le */
void F401_9116 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_utf16le";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 400, Current, 6, 1, 16055);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16055);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_is_string", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ur1 = RTCCL(arg1);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_utf16le", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4771, "valid_utf16le", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(7);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ui4_1 = loc3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4780, "is_surrogate", tr1))(tr1, ui4_1x)).it_b);
		if (tb1) {
			if (RTAL & CK_CHECK) {
				RTHOOK(10);
				RTCT("valid_pre_implies_high", EX_CHECK);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				ui4_1 = loc3;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4781, "is_high_surrogate", tr1))(tr1, ui4_1x)).it_b);
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
			}
			if (RTAL & CK_CHECK) {
				RTHOOK(11);
				RTCT("valid_pre_implies_size", EX_CHECK);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 2L)) < loc2)) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(12);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 += ((EIF_INTEGER_32) 2L);
			RTHOOK(13);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6245, "item_code", arg1))(arg1, ui4_1x)).it_i4);
			loc5 = (EIF_INTEGER_32) ti4_1;
			if (RTAL & CK_CHECK) {
				RTHOOK(15);
				RTCT("valid_pre_implies_low", EX_CHECK);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				ui4_1 = loc5;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4782, "is_low_surrogate", tr1))(tr1, ui4_1x)).it_b);
				if (tb1) {
					RTCK;
				} else {
					RTCF;
				}
			}
			RTHOOK(16);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ui4_1 = loc3;
			ui4_2 = loc4;
			ui4_3 = loc5;
			ui4_4 = loc6;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4785, "surrogate_from_bytes", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7269, dtype))(Current, ui4_1x);
		} else {
			RTHOOK(17);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 256L)) + loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7269, dtype))(Current, ui4_1x);
		}
		RTHOOK(18);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 += ((EIF_INTEGER_32) 2L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {UC_STRING}.fill_with_unicode */
void F401_9117 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "fill_with_unicode";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16056);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16056);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7276, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("filled", EX_POST);
		ur1 = RTCCL(arg1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7256, dtype))(Current, ur1x)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
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

/* {UC_STRING}.fill_with_code */
void F401_9118 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "fill_with_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 1, 16057);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16057);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7297, dtype))(Current);
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = arg1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr1))(tr1, ui4_1x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 * ti4_2);
	RTHOOK(5);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (loc3 > ti4_2)) {
		RTHOOK(6);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
	}
	RTHOOK(7);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc3;
	RTHOOK(8);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(10);
		ui4_1 = arg1;
		ui4_2 = loc2;
		ui4_3 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 += loc2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("same_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("filled", EX_POST);
		ui4_1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7257, dtype))(Current, ui4_1x)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {UC_STRING}.fill_with */
void F401_9119 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "fill_with";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 1, 16058);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16058);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7297, dtype))(Current);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	uc1 = arg1;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4169, "character_byte_count", tr2))(tr2, uc1x)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_3;
	RTHOOK(3);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 * ti4_3);
	RTHOOK(4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (loc3 > ti4_3)) {
		RTHOOK(5);
		ui4_1 = loc3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) loc3;
	RTHOOK(7);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(10);
			uc1 = arg1;
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
			RTHOOK(11);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	} else {
		RTHOOK(12);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(13);
			if ((EIF_BOOLEAN) (loc1 > loc3)) break;
			RTHOOK(14);
			uc1 = arg1;
			ui4_1 = loc2;
			ui4_2 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7307, dtype))(Current, uc1x, ui4_1x, ui4_2x);
			RTHOOK(15);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 += loc2;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("same_count", EX_POST);
		tb1 = '\0';
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_1)) {
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
			RTCO(tr1);
			tb1 = (EIF_BOOLEAN)(ti4_3 == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTHOOK(18);
		RTCT("all_code", EX_POST);
		ti4_3 = (EIF_INTEGER_32) (arg1);
		ui4_1 = ti4_3;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7257, dtype))(Current, ui4_1x)).it_i4);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_3 == ti4_4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {UC_STRING}.insert_unicode_character */
void F401_9120 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_unicode_character";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,ur1);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 2, 16059);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16059);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(306, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("c_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_insertion_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ui4_1 = arg2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_2;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
	ui4_1 = ti4_2;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7278, dtype))(Current, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("one_more_character", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		ui4_1 = arg2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5233, "code", arg1));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("stable_before_i", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("stable_after_i", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_2;
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		RTCO(tr4);
		ur1 = RTCCL(tr3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		if (tb1) {
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
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {UC_STRING}.insert_code */
void F401_9121 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,tr4);
	RTLR(5,tr5);
	RTLR(6,ur1);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 2, 16060);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16060);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_insertion_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ui4_1 = arg2;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_2;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(4);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7269, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(5);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTHOOK(6);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) arg2;
		} else {
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ui4_1 = arg2;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_2;
		}
		RTHOOK(8);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr5))(tr5, ui4_1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(9);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + loc2);
		RTHOOK(10);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (loc3 > ti4_2)) {
			RTHOOK(11);
			ui4_1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
		}
		RTHOOK(12);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		RTHOOK(13);
		ui4_1 = loc1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7302, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(14);
		ui4_1 = arg1;
		ui4_2 = loc2;
		ui4_3 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("one_more_character", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("inserted", EX_POST);
		ui4_1 = arg2;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6245, dtype))(Current, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("stable_before_i", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L));
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		RTCO(tr2);
		ur1 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("stable_after_i", EX_POST);
		ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_2;
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		RTCO(tr4);
		ur1 = RTCCL(tr3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {UC_STRING}.insert_character */
void F401_9122 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_character";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 2, 16061);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16061);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_insertion_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)))) {
		RTHOOK(3);
		uc1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1279, dtype))(Current, uc1x);
	} else {
		RTHOOK(4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTHOOK(5);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) arg2;
		} else {
			RTHOOK(6);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ui4_1 = arg2;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_2;
		}
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		uc1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4169, "character_byte_count", tr1))(tr1, uc1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(8);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + loc2);
		RTHOOK(9);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (loc3 > ti4_2)) {
			RTHOOK(10);
			ui4_1 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
		}
		RTHOOK(11);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		RTHOOK(12);
		ui4_1 = loc1;
		ui4_2 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7302, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(13);
		uc1 = arg1;
		ui4_1 = loc2;
		ui4_2 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7307, dtype))(Current, uc1x, ui4_1x, ui4_2x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("one_more_character", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("inserted", EX_POST);
		ui4_1 = arg2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(tc1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTHOOK(17);
		RTHOOK(18);
		RTCT("code_inserted", EX_POST);
		ui4_1 = arg2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
		tu4_2 = (EIF_NATURAL_32) arg1;
		if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_STRING}.insert */
void F401_9123 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 2, 16062);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16062);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6299, dtype))(Current, ur1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {UC_STRING}.insert_string */
void F401_9124 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "insert_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 400, Current, 5, 2, 16063);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16063);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_insertion_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(3);
		RTCT("string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_2);
		RTCK;
		RTHOOK(4);
		RTCT("valid_insertion_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2) && (EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(8);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6295, dtype))(Current, ur1x);
		} else {
			RTHOOK(9);
			if (RTCEQ(arg1, Current)) {
				RTHOOK(10);
				RTDBGAL(5, 0xF8000163, 0, 0); /* loc5 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc5 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(11);
				RTDBGAL(5, 0xF8000163, 0, 0); /* loc5 */
				loc5 = (EIF_REFERENCE) RTCCL(arg1);
			}
			RTHOOK(12);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(13);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) arg2;
			} else {
				RTHOOK(14);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ui4_1 = arg2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(15);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			ur1 = RTCCL(loc5);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4168, "substring_byte_count", tr1))(tr1, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(16);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc3);
			RTHOOK(17);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
			if ((EIF_BOOLEAN) (loc4 > ti4_1)) {
				RTHOOK(18);
				ui4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
			}
			RTHOOK(19);
			ui4_1 = loc2;
			ui4_2 = loc3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7302, dtype))(Current, ui4_1x, ui4_2x);
			RTHOOK(20);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 + loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
			RTHOOK(21);
			ur1 = RTCCL(loc5);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = loc1;
			ui4_3 = loc3;
			ui4_4 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7308, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg2
#undef arg1
}

/* {UC_STRING}.replace_substring */
void F401_9125 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "replace_substring";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 3, 16064);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16064);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("meaningfull_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		ti4_2 = ti4_3;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	ui4_2 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7279, dtype))(Current, ur1x, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("new_count", EX_POST);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_3 == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - arg3) + arg2) - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_STRING}.replace_substring_by_string */
void F401_9126 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "replace_substring_by_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
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
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc8);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 400, Current, 8, 3, 16065);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16065);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ui4_1 = arg2;
		ui4_2 = arg3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6232, dtype))(Current, ui4_1x, ui4_2x);
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(arg2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTHOOK(6);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6217, dtype))(Current, ur1x);
		} else {
			RTHOOK(7);
			if (RTCEQ(arg1, Current)) {
				RTHOOK(8);
				RTDBGAL(8, 0xF8000160, 0, 0); /* loc8 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc8 = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(9);
				RTDBGAL(8, 0xF8000160, 0, 0); /* loc8 */
				loc8 = (EIF_REFERENCE) RTCCL(arg1);
			}
			RTHOOK(10);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(12);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) arg2;
				RTHOOK(13);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) loc4;
			} else {
				RTHOOK(14);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ui4_1 = arg2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(15);
				if ((EIF_BOOLEAN) (arg3 < arg2)) {
					RTHOOK(16);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				} else {
					RTHOOK(17);
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
					if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
						RTHOOK(18);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc2) + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(19);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						ui4_1 = loc2;
						ui4_2 = loc4;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7292, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - loc2);
					}
				}
			}
			RTHOOK(20);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(20,1);
			ur1 = RTCCL(loc8);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4168, "substring_byte_count", tr1))(tr1, ur1x, ui4_1x, ui4_2x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(21);
			if ((EIF_BOOLEAN)(loc6 == loc5)) {
			} else {
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc6 < loc5)) {
					RTHOOK(23);
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc5);
					ui4_2 = (EIF_INTEGER_32) (loc5 - loc6);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7303, dtype))(Current, ui4_1x, ui4_2x);
				} else {
					RTHOOK(24);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 - loc5);
					RTHOOK(25);
					RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc3);
					RTHOOK(26);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN) (loc7 > ti4_1)) {
						RTHOOK(27);
						ui4_1 = loc7;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
					}
					RTHOOK(28);
					ui4_1 = (EIF_INTEGER_32) (loc2 + loc5);
					ui4_2 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7302, dtype))(Current, ui4_1x, ui4_2x);
				}
			}
			RTHOOK(29);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + loc1) - loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
			RTHOOK(30);
			ur1 = RTCCL(loc8);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = loc1;
			ui4_3 = loc6;
			ui4_4 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7308, dtype))(Current, ur1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_STRING}.replace_substring_all */
void F401_9127 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "replace_substring_all";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc9);
	RTLR(4,loc10);
	RTLR(5,loc4);
	RTLR(6,tr1);
	RTLR(7,loc5);
	RTLR(8,ur1);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 400, Current, 10, 2, 16066);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16066);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTCC(arg2, 400, l_feature_name, 2, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("original_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("original_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7262, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(5);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		loc9 = RTCCL(arg1);
		loc9 = RTRV(eif_new_type(400, 0x01),loc9);
		if (EIF_TEST(loc9)) {
			RTHOOK(8);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(7258, "byte_count", loc9));
			loc2 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(9);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
			loc2 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(10);
		loc10 = RTCCL(arg2);
		loc10 = RTRV(eif_new_type(400, 0x01),loc10);
		if (EIF_TEST(loc10)) {
			RTHOOK(11);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = *(EIF_INTEGER_32 *)(loc10 + RTVA(7258, "byte_count", loc10));
			loc3 = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(12);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(6269, "count", arg2));
			loc3 = (EIF_INTEGER_32) ti4_1;
		}
		RTHOOK(13);
		RTDBGAL(4, 0xF800026F, 0, 0); /* loc4 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6266, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = (EIF_REFERENCE) tr1;
		RTHOOK(14);
		RTDBGAL(5, 0xF800026F, 0, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6266, "area", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(15);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc6 + loc2) - ((EIF_INTEGER_32) 1L)) > loc1)) break;
			RTHOOK(16);
			ur1 = loc5;
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ui4_2 = (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
			ui4_3 = loc2;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5151, "same_items", loc4))(loc4, ur1x, ui4_1x, ui4_2x, ui4_3x)).it_b);
			if (tb1) {
				RTHOOK(17);
				if ((EIF_BOOLEAN)(loc3 == loc2)) {
				} else {
					RTHOOK(18);
					if ((EIF_BOOLEAN) (loc3 < loc2)) {
						RTHOOK(19);
						ui4_1 = (EIF_INTEGER_32) (loc6 + loc2);
						ui4_2 = (EIF_INTEGER_32) (loc2 - loc3);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7303, dtype))(Current, ui4_1x, ui4_2x);
					} else {
						RTHOOK(20);
						RTDBGAL(8, 0x10000000, 1, 0); /* loc8 */
						loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - loc2);
						RTHOOK(21);
						RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
						loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + loc8);
						RTHOOK(22);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
						if ((EIF_BOOLEAN) (loc7 > ti4_1)) {
							RTHOOK(23);
							ui4_1 = loc7;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
							RTHOOK(24);
							RTDBGAL(4, 0xF800026F, 0, 0); /* loc4 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6266, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc4 = (EIF_REFERENCE) tr1;
						}
						RTHOOK(25);
						ui4_1 = (EIF_INTEGER_32) (loc6 + loc2);
						ui4_2 = loc8;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7302, dtype))(Current, ui4_1x, ui4_2x);
					}
				}
				RTHOOK(26);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
				loc1 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(27);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6266, "area", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = tr1;
				ui4_1 = ((EIF_INTEGER_32) 0L);
				ui4_2 = (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L));
				ui4_3 = loc3;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5159, "copy_data", loc4))(loc4, ur1x, ui4_1x, ui4_2x, ui4_3x);
				RTHOOK(28);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
				ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
				ti4_3 = *(EIF_INTEGER_32 *)(arg2 + RTVA(6269, "count", arg2));
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ti4_3);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
				RTHOOK(29);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				loc6 += loc3;
			} else {
				RTHOOK(30);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				ui4_1 = loc6;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {UC_STRING}.keep_head */
void F401_9128 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "keep_head";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16067);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16067);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
		*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(5);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (arg1 < ti4_2)) {
			RTHOOK(6);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
				RTHOOK(7);
				RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
				*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) arg1;
			} else {
				RTHOOK(8);
				RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
				ui4_1 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(9);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = ti4_1;
		ti4_3 = eif_min_int32 (arg1,ui4_1);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.keep_tail */
void F401_9129 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "keep_tail";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 1, 16068);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16068);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_argument", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
		*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(4);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(5);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (arg1 < ti4_2)) {
			RTHOOK(6);
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
				RTHOOK(7);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - arg1);
			} else {
				RTHOOK(8);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
				ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - arg1) + ((EIF_INTEGER_32) 1L));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(9);
			ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
			ui4_2 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7303, dtype))(Current, ui4_1x, ui4_2x);
			RTHOOK(10);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = ti4_1;
		ti4_3 = eif_min_int32 (arg1,ui4_1);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_STRING}.remove_head */
void F401_9130 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove_head";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16069);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16069);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	if ((EIF_BOOLEAN) (arg1 >= ti4_1)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7280, dtype))(Current);
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6226, dtype))(Current, ui4_1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.remove_tail */
void F401_9131 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove_tail";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16070);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16070);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	if ((EIF_BOOLEAN) (arg1 >= ti4_1)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7280, dtype))(Current);
	} else {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6225, dtype))(Current, ui4_1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.remove */
void F401_9132 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "remove";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
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
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 1, 16071);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16071);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6119, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("prunable", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4398, dtype))(Current)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTHOOK(3);
		RTCT("valid_key", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4410, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(ti4_2 == ti4_3)) {
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) arg1;
		RTHOOK(6);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = arg1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(8);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
		uc1 = tc1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4166, "encoded_byte_count", tr1))(tr1, uc1x)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_2;
	}
	RTHOOK(9);
	ui4_1 = (EIF_INTEGER_32) (loc1 + loc2);
	ui4_2 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7303, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(10);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ui4_1 = (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg1
}

/* {UC_STRING}.remove_substring */
void F401_9133 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "remove_substring";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	
	RTEAA(l_feature_name, 400, Current, 4, 2, 16072);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16072);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(arg1 == arg2)) {
		RTHOOK(5);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6230, dtype))(Current, ui4_1x);
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (arg1 < arg2)) {
			RTHOOK(7);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 - arg1) + ((EIF_INTEGER_32) 1L));
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(9);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
				RTHOOK(10);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc4;
			} else {
				RTHOOK(11);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ui4_1 = arg1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7293, dtype))(Current, ui4_1x)).it_i4);
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(12);
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
				if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
					RTHOOK(13);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(14);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					ui4_1 = loc3;
					ui4_2 = loc4;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7292, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
					loc1 = (EIF_INTEGER_32) ti4_1;
				}
				RTHOOK(15);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - loc3);
			}
			RTHOOK(16);
			ui4_1 = loc1;
			ui4_2 = loc2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7303, dtype))(Current, ui4_1x, ui4_2x);
			RTHOOK(17);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_1 = (EIF_INTEGER_32) (ti4_1 - loc4);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {UC_STRING}.wipe_out */
void F401_9134 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16073);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16073);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
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

/* {UC_STRING}.copy */
void F401_9135 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "copy";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 1, 16074);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16074);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(400, 0x01),0);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (!RTCEQ(arg1, Current)) {
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(7258, "byte_count", arg1));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7305, "set_count", arg1))(arg1, ui4_1x);
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18, 358))(Current, ur1x);
		RTHOOK(7);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		RTHOOK(8);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7305, "set_count", arg1))(arg1, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("new_result_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
#undef ur1
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.cloned_string */
EIF_TYPED_VALUE F401_9136 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cloned_string";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16075);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16075);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000190, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(17, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("twin_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_equal", EX_POST);
		ur1 = RTCCL(Current);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", Result))(Result, ur1x)).it_b);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {UC_STRING}.out */
EIF_TYPED_VALUE F401_9137 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "out";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_CHAR8, &loc4);
	RTLU(SK_CHAR8, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 400, Current, 6, 0, 16076);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16076);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
		RTHOOK(4);
		RTDBGAL(5, 0x08000000, 1, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1769, "maximum_ascii_character", tr1))(tr1)).it_c1);
		loc5 = (EIF_CHARACTER_8) tc1;
		RTHOOK(5);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(7);
			RTDBGAL(4, 0x08000000, 1, 0); /* loc4 */
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
			loc4 = (EIF_CHARACTER_8) tc1;
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc4 <= loc5)) {
				RTHOOK(9);
				uc1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			} else {
				RTHOOK(10);
				uc1 = (EIF_CHARACTER_8) '%';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(11);
				uc1 = (EIF_CHARACTER_8) '/';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(12);
				ti4_1 = (EIF_INTEGER_32) (loc4);
				tr1 = eif_out__i4_s1(ti4_1);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6295, "append_string", Result))(Result, ur1x);
				RTHOOK(13);
				uc1 = (EIF_CHARACTER_8) '/';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			}
			RTHOOK(14);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	} else {
		RTHOOK(15);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(16);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(16,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1766, "maximum_ascii_character_code", tr1))(tr1)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(17);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(18);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(19);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(20);
			if ((EIF_BOOLEAN) (loc3 <= loc6)) {
				RTHOOK(21);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,1);
				ui4_1 = loc3;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			} else {
				RTHOOK(22);
				uc1 = (EIF_CHARACTER_8) '%';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(23);
				uc1 = (EIF_CHARACTER_8) '/';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(24);
				tr1 = eif_out__i4_s1(loc3);
				ur1 = RTCCL(tr1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6295, "append_string", Result))(Result, ur1x);
				RTHOOK(25);
				uc1 = (EIF_CHARACTER_8) '/';
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			}
			RTHOOK(26);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ui4_1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
			loc1 = (EIF_INTEGER_32) ti4_1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("same_items", EX_POST);
		tb1 = '\01';
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10, dtype))(Current, ur1x)).it_b);
		if (tb2) {
			ur1 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6152, "same_string_general", Result))(Result, ur1x)).it_b);
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
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
}

/* {UC_STRING}.debug_output */
EIF_TYPED_VALUE F401_9138 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
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
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16077);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16077);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000160, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(28, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {UC_STRING}.as_lower */
EIF_TYPED_VALUE F401_9139 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_lower";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16078);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16078);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000190, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6309, "to_lower", Result))(Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_lower_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", Result))(Result, ui4_1x)).it_c4);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6110, dtype))(Current, ui4_1x)).it_c4);
			RTNHOOK(5,1);
			tr1 = RTLN(eif_new_type(341, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw2;
			tw3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5968, "as_lower", tr1))(tr1)).it_c4);
			tb1 = (EIF_BOOLEAN)(tw1 == tw3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6168, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr2 = tr3;
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("unicode_anchor", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7249, "unicode_item", Result))(Result, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7249, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5235, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr3);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("unicode_recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6168, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr3);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
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
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {UC_STRING}.as_upper */
EIF_TYPED_VALUE F401_9140 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_upper";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_CHARACTER_32 tw3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16079);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16079);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000190, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7281, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6310, "to_upper", Result))(Result);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("as_upper_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("length", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("anchor", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", Result))(Result, ui4_1x)).it_c4);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6110, dtype))(Current, ui4_1x)).it_c4);
			RTNHOOK(5,1);
			tr1 = RTLN(eif_new_type(341, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw2;
			tw3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5966, "as_upper", tr1))(tr1)).it_c4);
			tb1 = (EIF_BOOLEAN)(tw1 == tw3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6169, "as_upper", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr2 = tr3;
			tb1 = RTEQ(tr1, tr2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("unicode_anchor", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7249, "unicode_item", Result))(Result, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7249, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5237, "as_upper", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr3);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("unicode_recurse", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6169, "as_upper", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr3);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
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
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {UC_STRING}.to_lower */
void F401_9141 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_lower";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	
	RTEAA(l_feature_name, 400, Current, 7, 0, 16080);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16080);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = loc6;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6643, "lower_code", tr1))(tr1, ui4_1x)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc7 != loc6)) {
			RTHOOK(7);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ui4_1 = loc6;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr1))(tr1, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ui4_1 = loc7;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr1))(tr1, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc4 == loc3)) {
			} else {
				RTHOOK(10);
				if ((EIF_BOOLEAN) (loc4 < loc3)) {
					RTHOOK(11);
					ui4_1 = (EIF_INTEGER_32) (loc1 + loc3);
					ui4_2 = (EIF_INTEGER_32) (loc3 - loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7303, dtype))(Current, ui4_1x, ui4_2x);
				} else {
					RTHOOK(12);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
					RTHOOK(13);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc2);
					RTHOOK(14);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN) (loc5 > ti4_1)) {
						RTHOOK(15);
						ui4_1 = loc5;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
					}
					RTHOOK(16);
					ui4_1 = (EIF_INTEGER_32) (loc1 + loc3);
					ui4_2 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7302, dtype))(Current, ui4_1x, ui4_2x);
				}
			}
			RTHOOK(17);
			ui4_1 = loc7;
			ui4_2 = loc4;
			ui4_3 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(18);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {UC_STRING}.to_upper */
void F401_9142 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_upper";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	
	RTEAA(l_feature_name, 400, Current, 7, 0, 16081);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16081);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = loc6;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6644, "upper_code", tr1))(tr1, ui4_1x)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc7 != loc6)) {
			RTHOOK(7);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ui4_1 = loc6;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr1))(tr1, ui4_1x)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ui4_1 = loc7;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr1))(tr1, ui4_1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(9);
			if ((EIF_BOOLEAN)(loc4 == loc3)) {
			} else {
				RTHOOK(10);
				if ((EIF_BOOLEAN) (loc4 < loc3)) {
					RTHOOK(11);
					ui4_1 = (EIF_INTEGER_32) (loc1 + loc3);
					ui4_2 = (EIF_INTEGER_32) (loc3 - loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7303, dtype))(Current, ui4_1x, ui4_2x);
				} else {
					RTHOOK(12);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc3);
					RTHOOK(13);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
					loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc2);
					RTHOOK(14);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
					if ((EIF_BOOLEAN) (loc5 > ti4_1)) {
						RTHOOK(15);
						ui4_1 = loc5;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7301, dtype))(Current, ui4_1x);
					}
					RTHOOK(16);
					ui4_1 = (EIF_INTEGER_32) (loc1 + loc3);
					ui4_2 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7302, dtype))(Current, ui4_1x, ui4_2x);
				}
			}
			RTHOOK(17);
			ui4_1 = loc7;
			ui4_2 = loc4;
			ui4_3 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
		}
		RTHOOK(18);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(19);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {UC_STRING}.to_utf8 */
EIF_TYPED_VALUE F401_9143 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_utf8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 0, 16082);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16082);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("valid_utf8", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4145, "valid_utf8", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uc1
}

/* {UC_STRING}.to_utf16_be */
EIF_TYPED_VALUE F401_9144 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_utf16_be";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 400, Current, 6, 0, 16083);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16083);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ui4_1 = loc3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6997, "is_bmp_code", tr1))(tr1, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 256L));
			RTHOOK(8);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 256L));
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ui4_1 = loc4;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		} else {
			RTHOOK(11);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			ui4_1 = loc3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4788, "supplementary_to_high_surrogate", tr1))(tr1, ui4_1x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			ui4_1 = loc4;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(16);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ui4_1 = loc3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4789, "supplementary_to_low_surrogate", tr1))(tr1, ui4_1x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(17);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
			RTHOOK(18);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(19,1);
			ui4_1 = loc4;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(20);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(20,1);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		}
		RTHOOK(21);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("to_utf16_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("valid_utf16", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(24,1);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "valid_utf16", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uc1
}

/* {UC_STRING}.to_utf16_le */
EIF_TYPED_VALUE F401_9145 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_utf16_le";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	
	RTEAA(l_feature_name, 400, Current, 6, 0, 16084);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16084);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ui4_1 = loc3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6997, "is_bmp_code", tr1))(tr1, ui4_1x)).it_b);
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 256L));
			RTHOOK(8);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 256L));
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ui4_1 = loc4;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		} else {
			RTHOOK(11);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			ui4_1 = loc3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4788, "supplementary_to_high_surrogate", tr1))(tr1, ui4_1x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(12);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(15);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			ui4_1 = loc4;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(16);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ui4_1 = loc3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4789, "supplementary_to_low_surrogate", tr1))(tr1, ui4_1x)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(17);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
			RTHOOK(18);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(19,1);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(20);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(20,1);
			ui4_1 = loc4;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		}
		RTHOOK(21);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("to_utf16_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(23,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("valid_utf16", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(24,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(24,2);
		tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4773, "bom_le", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
		ur1 = RTCCL(Result);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4769, "valid_utf16", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ui4_1
#undef uc1
}

/* {UC_STRING}.to_utf32_be */
EIF_TYPED_VALUE F401_9146 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_utf32_be";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	
	RTEAA(l_feature_name, 400, Current, 7, 0, 16085);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16085);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc6 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc6)) break;
		RTHOOK(5);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(7);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 /= ((EIF_INTEGER_32) 256L);
		RTHOOK(8);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(9);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 /= ((EIF_INTEGER_32) 256L);
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / ((EIF_INTEGER_32) 256L));
		RTHOOK(11);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		ui4_1 = loc4;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		ui4_1 = loc5;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(16);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("to_utf32_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("valid_utf32", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1718, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(19,1);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4752, "valid_utf32", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uc1
}

/* {UC_STRING}.to_utf32_le */
EIF_TYPED_VALUE F401_9147 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_utf32_le";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,tr3);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	
	RTEAA(l_feature_name, 400, Current, 7, 0, 16086);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16086);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc6 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * ti4_1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc6)) break;
		RTHOOK(5);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		loc7 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(7);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 /= ((EIF_INTEGER_32) 256L);
		RTHOOK(8);
		RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
		loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(9);
		RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
		loc7 /= ((EIF_INTEGER_32) 256L);
		RTHOOK(10);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / ((EIF_INTEGER_32) 256L));
		RTHOOK(11);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
		RTHOOK(12);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		ui4_1 = loc5;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(13);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		ui4_1 = loc4;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(14);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(14,1);
		ui4_1 = loc3;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(15);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(15,1);
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(16);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("to_utf32_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(19);
		RTCT("valid_utf32", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1718, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(19,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1718, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(19,2);
		tr3 = ((up3x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4754, "bom_le", tr2))(tr2)), (((up3x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up3x.it_r = RTBU(up3x))), (up3x.type = SK_POINTER), up3x.it_r);
		ur1 = RTCCL(Result);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr3))(tr3, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4752, "valid_utf32", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ur2
#undef ui4_1
#undef uc1
}

/* {UC_STRING}.to_string_32 */
EIF_TYPED_VALUE F401_9148 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_string_32";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 0, 16087);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16087);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000169, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(361, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		RTNHOOK(5,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6206, "append_code", Result))(Result, uu4_1x);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7291, dtype))(Current, ui4_1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("as_string_32_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("identity", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = RTLN(eif_new_type(361, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6108, Dtype(tr1)))(tr1);
		RTNHOOK(8,1);
		ur1 = RTCCL(tr1);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9, dtype))(Current, ur1x)).it_b);
		if (tb3) {
			tb2 = RTCEQ(Result, Current);
		}
		if (!tb2) {
			tb2 = '\0';
			tr1 = RTLN(eif_new_type(361, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6108, Dtype(tr1)))(tr1);
			RTNHOOK(8,2);
			ur1 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9, dtype))(Current, ur1x)).it_b);
			if ((EIF_BOOLEAN) !tb3) {
				tb2 = !RTCEQ(Result, Current);
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
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uu4_1
}

/* {UC_STRING}.as_string */
EIF_TYPED_VALUE F401_9149 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_string";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16088);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16088);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7282, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("as_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
}

/* {UC_STRING}.name */
RTOID (F401_9150)


EIF_TYPED_VALUE F401_9150 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F401_9150,16090,RTMS_EX_H("UC_STRING",9,701376839));
}

/* {UC_STRING}.eol */
RTOID (F401_9151)


EIF_TYPED_VALUE F401_9151 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F401_9151,16091,RTMS_EX_H("\012",1,10));
}

/* {UC_STRING}.is_open_write */
EIF_TYPED_VALUE F401_9152 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_open_write";
	RTEX;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16091);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16091);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
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

/* {UC_STRING}.flush */
void F401_9153 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "flush";
	RTEX;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16092);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16092);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1281, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {UC_STRING}.item_code_at_byte_index */
EIF_TYPED_VALUE F401_9154 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "item_code_at_byte_index";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16093);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16093);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7294, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ui4_1 = arg1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7289, dtype))(Current, ui4_1x)).it_n4);
	RTNHOOK(4,1);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("valid_item_code", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		ui4_1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.code_at_byte_index */
EIF_TYPED_VALUE F401_9155 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "code_at_byte_index";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR8, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 1, 16094);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16094);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7294, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
	ui4_1 = loc1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
	loc3 = (EIF_CHARACTER_8) tc1;
	RTHOOK(6);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	uc1 = loc3;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4159, "natural_32_encoded_first_value", tr1))(tr1, uc1x)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	uc1 = loc3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4166, "encoded_byte_count", tr1))(tr1, uc1x)).it_i4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) - ((EIF_INTEGER_32) 1L));
	RTHOOK(8);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1++;
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(10);
		RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(11);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		uc1 = loc3;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4161, "natural_32_encoded_next_value", tr1))(tr1, uc1x)).it_n4);
		Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (Result * (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + tu4_1);
		RTHOOK(12);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("valid_code", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(13,1);
		uu4_1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6642, "valid_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg1
}

/* {UC_STRING}.character_item_at_byte_index */
EIF_TYPED_VALUE F401_9156 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "character_item_at_byte_index";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 1, 16095);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16095);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7294, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
	ui4_1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
	loc1 = (EIF_CHARACTER_8) tc1;
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	uc1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4166, "encoded_byte_count", tr1))(tr1, uc1x)).it_i4);
	switch (ti4_1) {
		case 1L:
			RTHOOK(6);
			RTDBGAL(0, 0x08000000, 1,0); /* Result */
			Result = (EIF_CHARACTER_8) loc1;
			break;
		case 2L:
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			uc1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4158, "encoded_first_value", tr1))(tr1, uc1x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
			ui4_1 = (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(9);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			uc1 = loc1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4160, "encoded_next_value", tr1))(tr1, uc1x)).it_i4);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 * ((EIF_INTEGER_32) 64L)) + ti4_1);
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
			if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
				RTHOOK(11);
				RTDBGAL(0, 0x08000000, 1,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,1);
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				Result = (EIF_CHARACTER_8) tc1;
			} else {
				RTHOOK(12);
				RTDBGAL(0, 0x08000000, 1,0); /* Result */
				Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
			}
			break;
		default:
			RTHOOK(13);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ui4_1 = arg1;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
			if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
				RTHOOK(15);
				RTDBGAL(0, 0x08000000, 1,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				Result = (EIF_CHARACTER_8) tc1;
			} else {
				RTHOOK(16);
				RTDBGAL(0, 0x08000000, 1,0); /* Result */
				Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
			}
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("code_small_enough", EX_POST);
		tb1 = '\01';
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(17,1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
			ti4_1 = (EIF_INTEGER_32) (Result);
			ui4_1 = arg1;
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("overflow", EX_POST);
		tb1 = '\01';
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7288, dtype))(Current, ui4_1x)).it_i4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(18,1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1324, "maximum_character_code", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			tb1 = (EIF_BOOLEAN)(Result == (EIF_CHARACTER_8) '\000');
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {UC_STRING}.next_byte_index */
EIF_TYPED_VALUE F401_9157 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "next_byte_index";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16096);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16096);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7294, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	ui4_1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
	uc1 = tc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4166, "encoded_byte_count", tr1))(tr1, uc1x)).it_i4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 + ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("next_byte_index_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result > arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("next_byte_index_small_enough", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {UC_STRING}.shifted_byte_index */
EIF_TYPED_VALUE F401_9158 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "shifted_byte_index";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 2, 16097);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16097);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_encoded_first_byte", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7294, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("n_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) arg1;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > arg2)) break;
		RTHOOK(8);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = Result;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
		uc1 = tc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4166, "encoded_byte_count", tr1))(tr1, uc1x)).it_i4);
		Result += ti4_1;
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN) (Result > ti4_1)) {
			RTHOOK(10);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
		} else {
			RTHOOK(11);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("next_byte_index_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("next_byte_index_small_enough", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_STRING}.byte_index */
EIF_TYPED_VALUE F401_9159 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "byte_index";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_CHAR8, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 1, 16098);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16098);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4661, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) arg1;
	} else {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7295, dtype));
		if ((EIF_BOOLEAN) (arg1 < ti4_1)) {
			RTHOOK(5);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(6);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		} else {
			RTHOOK(7);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7295, dtype));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7296, dtype));
			Result = (EIF_INTEGER_32) ti4_1;
		}
		if (RTAL & CK_LOOP) {
			RTHOOK(9);
			RTCT("j <= i", EX_LINV);
			if ((EIF_BOOLEAN) (loc1 <= arg1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc1 == arg1)) break;
			RTHOOK(11);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			ui4_1 = Result;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			RTHOOK(12);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			uc1 = loc2;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4166, "encoded_byte_count", tr1))(tr1, uc1x)).it_i4);
			Result += ti4_1;
			RTHOOK(13);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
			if (RTAL & CK_LOOP) {
				RTHOOK(9);
				RTCT("j <= i", EX_LINV);
				if ((EIF_BOOLEAN) (loc1 <= arg1)) {
					RTCK;
				} else {
					RTCF;
				}
			}
		}
	}
	RTHOOK(14);
	RTDBGAA(Current, dtype, 7295, 0x10000000, 1); /* last_byte_index_input */
	*(EIF_INTEGER_32 *)(Current + RTWA(7295, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(15);
	RTDBGAA(Current, dtype, 7296, 0x10000000, 1); /* last_byte_index_result */
	*(EIF_INTEGER_32 *)(Current + RTWA(7296, dtype)) = (EIF_INTEGER_32) Result;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("byte_index_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("byte_index_small_enough", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("is_encoded_first_byte", EX_POST);
		ui4_1 = Result;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7294, dtype))(Current, ui4_1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {UC_STRING}.is_encoded_first_byte */
EIF_TYPED_VALUE F401_9160 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_encoded_first_byte";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16099);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16099);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	ui4_1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7299, dtype))(Current, ui4_1x)).it_c1);
	uc1 = tc1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4149, "is_encoded_first_byte", tr1))(tr1, uc1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {UC_STRING}.last_byte_index_input */
EIF_TYPED_VALUE F401_9161 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7295,Dtype(Current)));
	return r;
}


/* {UC_STRING}.last_byte_index_result */
EIF_TYPED_VALUE F401_9162 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7296,Dtype(Current)));
	return r;
}


/* {UC_STRING}.reset_byte_index_cache */
void F401_9163 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reset_byte_index_cache";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16102);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16102);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7295, 0x10000000, 1); /* last_byte_index_input */
	*(EIF_INTEGER_32 *)(Current + RTWA(7295, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7296, 0x10000000, 1); /* last_byte_index_result */
	*(EIF_INTEGER_32 *)(Current + RTWA(7296, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {UC_STRING}.current_string */
EIF_TYPED_VALUE F401_9164 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_string";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 16103);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16103);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {UC_STRING}.byte_item */
EIF_TYPED_VALUE F401_9165 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "byte_item";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 1, 16104);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16104);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTHOOK(5);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	ui4_1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7316, dtype))(Current, ui4_1x)).it_c1);
	Result = (EIF_CHARACTER_8) tc1;
	RTHOOK(6);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.put_byte */
void F401_9166 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put_byte";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 2, 16105);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16105);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) (arg2 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTHOOK(5);
	uc1 = arg1;
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7319, dtype))(Current, uc1x, ui4_1x);
	RTHOOK(6);
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_STRING}.resize_byte_storage */
void F401_9167 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "resize_byte_storage";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 400, Current, 1, 1, 16106);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16106);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (arg1 > ti4_1)) {
		RTHOOK(3);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6235, dtype))(Current, ui4_1x);
		RTHOOK(4);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
		RTHOOK(6);
		ui4_1 = arg1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6202, dtype))(Current, ui4_1x);
		RTHOOK(7);
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("byte_capacity_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef ui4_1
#undef arg1
}

/* {UC_STRING}.move_bytes_right */
void F401_9168 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "move_bytes_right";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 2, 16107);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16107);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_offset", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("offset_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 - ti4_2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7296, dtype));
	if ((EIF_BOOLEAN) (ti4_2 > arg1)) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7297, dtype))(Current);
	}
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc1 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype))) += arg2;
	RTHOOK(9);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc3 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(10);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	for (;;) {
		RTHOOK(11);
		if ((EIF_BOOLEAN) (loc1 < loc2)) break;
		RTHOOK(12);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7316, dtype))(Current, ui4_1x)).it_c1);
		uc1 = tc1;
		ui4_1 = (EIF_INTEGER_32) (loc1 + arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7319, dtype))(Current, uc1x, ui4_1x);
		RTHOOK(13);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTHOOK(14);
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + arg2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_STRING}.move_bytes_left */
void F401_9169 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "move_bytes_left";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 2, 16108);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16108);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg1) && (EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_offset", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("constraint", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 < arg1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(4);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7296, dtype));
	if ((EIF_BOOLEAN) (ti4_2 > (EIF_INTEGER_32) (arg1 - arg2))) {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7297, dtype))(Current);
	}
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(8);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc3 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(9);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(11);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7316, dtype))(Current, ui4_1x)).it_c1);
		uc1 = tc1;
		ui4_1 = (EIF_INTEGER_32) (loc1 - arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7319, dtype))(Current, uc1x, ui4_1x);
		RTHOOK(12);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(13);
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7305, dtype))(Current, ui4_1x);
	RTHOOK(14);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	(*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype))) -= arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 - arg2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_STRING}.set_byte_count */
void F401_9170 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_byte_count";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16109);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16109);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("nb_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) (arg1 <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7296, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > arg1)) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7297, dtype))(Current);
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 7258, 0x10000000, 1); /* byte_count */
	*(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("byte_count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg1
}

/* {UC_STRING}.set_count */
void F401_9171 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_count";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 16110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16110);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("nb_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7295, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > arg1)) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7297, dtype))(Current);
	}
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6269, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef arg1
}

/* {UC_STRING}.put_code_at_byte_index */
void F401_9172 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "put_code_at_byte_index";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 400, Current, 3, 3, 16111);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16111);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("enough_space", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + arg2) - ((EIF_INTEGER_32) 1L)) <= ti4_1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_code", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6641, "valid_code", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_CHECK) {
		RTHOOK(4);
		RTCT("valid_utf8", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr1))(tr1, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(5);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) arg1;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + arg2) - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc1 == arg3)) break;
		RTHOOK(8);
		RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
		loc2 = (EIF_CHARACTER_8) tc1;
		RTHOOK(9);
		uc1 = loc2;
		ui4_1 = loc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
		RTHOOK(10);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 /= ((EIF_INTEGER_32) 64L);
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	RTHOOK(12);
	switch (arg2) {
		case 1L:
			RTHOOK(13);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(13,1);
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 2L:
			RTHOOK(14);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(14,1);
			ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 192L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 3L:
			RTHOOK(15);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(15,1);
			ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 224L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 4L:
			RTHOOK(16);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(16,1);
			ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 240L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 5L:
			RTHOOK(17);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 248L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		case 6L:
			RTHOOK(18);
			RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			ui4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 252L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc2 = (EIF_CHARACTER_8) tc1;
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTHOOK(19);
	uc1 = loc2;
	ui4_1 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ui4_1
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_STRING}.put_character_at_byte_index */
void F401_9173 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "put_character_at_byte_index";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 3, 16112);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16112);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("enough_space", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 + arg2) - ((EIF_INTEGER_32) 1L)) <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("valid_utf8", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		uc1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4169, "character_byte_count", tr1))(tr1, uc1x)).it_i4);
		if ((EIF_BOOLEAN)(arg2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	switch (arg2) {
		case 1L:
			RTHOOK(5);
			uc1 = arg1;
			ui4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
			break;
		case 2L:
			RTHOOK(6);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			ti4_1 = (EIF_INTEGER_32) (arg1);
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 / ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 192L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(8);
			uc1 = loc1;
			ui4_1 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
			RTHOOK(9);
			RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 % ((EIF_INTEGER_32) 64L)) + ((EIF_INTEGER_32) 128L));
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(10);
			uc1 = loc1;
			ui4_1 = (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
			break;
		default:
			RTHOOK(11);
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ui4_1 = ti4_1;
			ui4_2 = arg2;
			ui4_3 = arg3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
			break;
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
#undef ui4_2
#undef ui4_3
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_STRING}.put_substring_at_byte_index */
void F401_9174 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "put_substring_at_byte_index";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,loc7);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLR(7,loc8);
	RTLR(8,loc9);
	RTLR(9,loc10);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_CHAR8, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 400, Current, 10, 5, 16113);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 16113);
	RTCC(arg1, 400, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_current", EX_PRE);
		RTTE(!RTCEQ(arg1, Current), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg2), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (arg3 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("i_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("enough_space", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg5 + arg4) - ((EIF_INTEGER_32) 1L)) <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_CHECK) {
		RTHOOK(8);
		RTCT("valid_utf8", EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(8,1);
		ur1 = RTCCL(arg1);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4168, "substring_byte_count", tr1))(tr1, ur1x, ui4_1x, ui4_2x)).it_i4);
		if ((EIF_BOOLEAN)(arg4 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) (arg4 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		tb1 = '\0';
		loc7 = RTCCL(arg1);
		loc7 = RTRV(eif_new_type(357, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(10,1);
			ur1 = RTCCL(arg1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7310, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(11);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc2 == arg4)) {
				RTHOOK(13);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) arg5;
				RTHOOK(14);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) arg2;
				for (;;) {
					RTHOOK(15);
					if ((EIF_BOOLEAN) (loc1 > arg3)) break;
					RTHOOK(16);
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", loc7))(loc7, ui4_1x)).it_c1);
					uc1 = tc1;
					ui4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
					RTHOOK(17);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3++;
					RTHOOK(18);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				}
			} else {
				RTHOOK(19);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) arg5;
				RTHOOK(20);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) arg2;
				for (;;) {
					RTHOOK(21);
					if ((EIF_BOOLEAN) (loc1 > arg3)) break;
					RTHOOK(22);
					RTDBGAL(5, 0x08000000, 1, 0); /* loc5 */
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", loc7))(loc7, ui4_1x)).it_c1);
					loc5 = (EIF_CHARACTER_8) tc1;
					RTHOOK(23);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(23,1);
					uc1 = loc5;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4169, "character_byte_count", tr1))(tr1, uc1x)).it_i4);
					loc4 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(24);
					uc1 = loc5;
					ui4_1 = loc4;
					ui4_2 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7307, dtype))(Current, uc1x, ui4_1x, ui4_2x);
					RTHOOK(25);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 += loc4;
					RTHOOK(26);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				}
			}
		} else {
			RTHOOK(27);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(27,1);
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(Current);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
			if (tb2) {
				loc8 = RTCCL(arg1);
				loc8 = RTRV(eif_new_type(400, 0x01),loc8);
				tb1 = EIF_TEST(loc8);
			}
			if (tb1) {
				RTHOOK(28);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) arg5;
				RTHOOK(29);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				ui4_1 = arg2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7293, "byte_index", loc8))(loc8, ui4_1x)).it_i4);
				loc1 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(30);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
				for (;;) {
					RTHOOK(31);
					if ((EIF_BOOLEAN) (loc1 > loc2)) break;
					RTHOOK(32);
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7299, "byte_item", loc8))(loc8, ui4_1x)).it_c1);
					uc1 = tc1;
					ui4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
					RTHOOK(33);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3++;
					RTHOOK(34);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				}
			} else {
				RTHOOK(35);
				loc9 = RTCCL(arg1);
				loc9 = RTRV(eif_new_type(401, 0x01),loc9);
				if (EIF_TEST(loc9)) {
					RTHOOK(36);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) arg5;
					RTHOOK(37);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					ui4_1 = arg2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7293, "byte_index", loc9))(loc9, ui4_1x)).it_i4);
					loc1 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(38);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
					for (;;) {
						RTHOOK(39);
						if ((EIF_BOOLEAN) (loc1 > loc2)) break;
						RTHOOK(40);
						ui4_1 = loc1;
						tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7299, "byte_item", loc9))(loc9, ui4_1x)).it_c1);
						uc1 = tc1;
						ui4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7300, dtype))(Current, uc1x, ui4_1x);
						RTHOOK(41);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3++;
						RTHOOK(42);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					}
				} else {
					RTHOOK(43);
					loc10 = RTCCL(arg1);
					loc10 = RTRV(eif_new_type(400, 0x01),loc10);
					if (EIF_TEST(loc10)) {
						RTHOOK(44);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) arg5;
						RTHOOK(45);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						ui4_1 = arg2;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7293, "byte_index", loc10))(loc10, ui4_1x)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(46);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + arg4) - ((EIF_INTEGER_32) 1L));
						for (;;) {
							RTHOOK(47);
							if ((EIF_BOOLEAN) (loc1 > loc2)) break;
							RTHOOK(48);
							RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
							ui4_1 = loc1;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7288, "item_code_at_byte_index", loc10))(loc10, ui4_1x)).it_i4);
							loc6 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(49);
							RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(49,1);
							ui4_1 = loc6;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr1))(tr1, ui4_1x)).it_i4);
							loc4 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(50);
							ui4_1 = loc6;
							ui4_2 = loc4;
							ui4_3 = loc3;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
							RTHOOK(51);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3 += loc4;
							RTHOOK(52);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							ui4_1 = loc1;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc10))(loc10, ui4_1x)).it_i4);
							loc1 = (EIF_INTEGER_32) ti4_1;
						}
					} else {
						RTHOOK(53);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) arg5;
						RTHOOK(54);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) arg2;
						for (;;) {
							RTHOOK(55);
							if ((EIF_BOOLEAN) (loc1 > arg3)) break;
							RTHOOK(56);
							RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
							ui4_1 = loc1;
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
							ti4_1 = (EIF_INTEGER_32) tu4_1;
							loc6 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(57);
							RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1299, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(57,1);
							ui4_1 = loc6;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4172, "code_byte_count", tr1))(tr1, ui4_1x)).it_i4);
							loc4 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(58);
							ui4_1 = loc6;
							ui4_2 = loc4;
							ui4_3 = loc3;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7306, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
							RTHOOK(59);
							RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
							loc3 += loc4;
							RTHOOK(60);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1++;
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(61);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uc1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_STRING}.dummy_string */
RTOID (F401_9175)


EIF_TYPED_VALUE F401_9175 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F401_9175,15977,RTMS_EX_H("",0,0));
}

/* {UC_STRING}.dummy_string_8 */
RTOID (F401_9176)


EIF_TYPED_VALUE F401_9176 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F401_9176,15978,RTMS_EX_H("",0,0));
}

/* {UC_STRING}.dummy_uc_string */
RTOID (F401_9177)
EIF_TYPED_VALUE F401_9177 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "dummy_uc_string";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F401_9177);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 15978);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15978);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000190, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(400, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6108, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("dummy_uc_string_not_void", EX_POST);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {UC_STRING}.old_wipe_out */
void F401_9178 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "old_wipe_out";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 15979);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15979);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6269, 0x10000000, 1); /* count */
	*(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(6234, 358))(Current);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7280, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_empty", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("same_capacity", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("wiped_out", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4371, dtype))(Current)).it_b);
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
	RTLO(2);
	RTEE;
}

/* {UC_STRING}.old_clear_all */
void F401_9179 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "old_clear_all";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 400, Current, 0, 0, 15980);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15980);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7280, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_empty", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("same_capacity", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
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
}

/* {UC_STRING}.old_left_adjust */
void F401_9180 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "old_left_adjust";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 0, 15981);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15981);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
		switch (tc1) {
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				RTHOOK(5);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
				break;
			default:
				RTHOOK(6);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				break;
		}
	}
	RTHOOK(7);
	ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6231, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("valid_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_2 <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("new_count", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6124, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6110, dtype))(Current, ui4_1x)).it_c4);
			RTNHOOK(9,1);
			tr1 = RTLN(eif_new_type(341, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5978, "is_space", tr1))(tr1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTHOOK(11);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
}

/* {UC_STRING}.old_right_adjust */
void F401_9181 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "old_right_adjust";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
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
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 400, Current, 2, 0, 15982);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15982);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	loc2 = (EIF_INTEGER_32) ti4_2;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4657, dtype))(Current, ui4_1x)).it_c1);
		switch (tc1) {
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				RTHOOK(5);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2--;
				break;
			default:
				RTHOOK(6);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				break;
		}
	}
	RTHOOK(7);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6225, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("valid_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_2 <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("new_count", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6124, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_1 = ti4_2;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6110, dtype))(Current, ui4_1x)).it_c4);
			RTNHOOK(9,1);
			tr1 = RTLN(eif_new_type(341, 0x00).id);
			*(EIF_CHARACTER_32 *)tr1 = tw1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5978, "is_space", tr1))(tr1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTHOOK(11);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
}

/* {UC_STRING}.index_of_code */
EIF_TYPED_VALUE F401_9182 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "index_of_code";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 2, 15983);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15983);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("start_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("start_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		RTTE((EIF_BOOLEAN) (arg2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) arg1;
	ui4_1 = ti4_1;
	ui4_2 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7254, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("valid_result", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 <= Result) && (EIF_BOOLEAN) (Result <= ti4_1)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("zero_if_absent", EX_POST);
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		uu4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6128, "has_code", tr1))(tr1, uu4_1x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("found_if_present", EX_POST);
		tb1 = '\01';
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		uu4_1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6128, "has_code", tr1))(tr1, uu4_1x)).it_b);
		if (tb2) {
			ui4_1 = Result;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
			tb1 = (EIF_BOOLEAN)(tu4_1 == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		ui4_1 = arg2;
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		uu4_1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6128, "has_code", tr1))(tr1, uu4_1x)).it_b);
		if (tb2) {
			ui4_1 = arg2;
			ui4_2 = (EIF_INTEGER_32) (Result - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,2);
			uu4_1 = arg1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6128, "has_code", tr1))(tr1, uu4_1x)).it_b);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg2
#undef arg1
}

/* {UC_STRING}.put_code */
void F401_9183 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "put_code";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 2, 15984);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15984);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		uu4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6120, dtype))(Current, uu4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_index", EX_PRE);
		ui4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6119, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(3);
	ti4_2 = (EIF_INTEGER_32) arg1;
	ui4_1 = ti4_2;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(7267, dtype))(Current, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		ui4_1 = arg2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("stable_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTHOOK(7);
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
#undef ui4_2
#undef uu4_1
#undef arg2
#undef arg1
}

/* {UC_STRING}.append_code */
void F401_9184 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "append_code";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 15985);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15985);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code", EX_PRE);
		uu4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6120, dtype))(Current, uu4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ti4_1 = ti4_2;
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_2 = (EIF_INTEGER_32) arg1;
	ui4_1 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7269, dtype))(Current, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("item_inserted", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		ui4_1 = ti4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("new_count", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
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
#undef uu4_1
#undef arg1
}

/* {UC_STRING}.has_code */
EIF_TYPED_VALUE F401_9185 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "has_code";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 400, Current, 0, 1, 15986);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(400, Current, 15986);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) arg1;
	ui4_1 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7260, dtype))(Current, ui4_1x)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("false_if_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((!((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) !Result))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("true_if_first", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
			tb2 = (EIF_BOOLEAN)(tu4_1 == arg1);
		}
		if (tb2) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6109, dtype))(Current, ui4_1x)).it_n4);
			tb2 = (EIF_BOOLEAN)(tu4_1 != arg1);
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(6187, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(4,1);
			uu4_1 = arg1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6128, "has_code", tr1))(tr1, uu4_1x)).it_b);
			tb1 = (EIF_BOOLEAN)(Result == tb2);
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
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg1
}

/* {UC_STRING}._invariant */
void F401_9351 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 400, Current, 0, 9350);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("non_negative_byte_count", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("byte_count_small_enough", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6147, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_small_enough", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6269, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(7258, dtype));
	if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit401 (void)
{
	GTCX
	RTOTS (9150,F401_9150)
	RTOTS (9151,F401_9151)
	RTOTS (9175,F401_9175)
	RTOTS (9176,F401_9176)
	RTOTS (9177,F401_9177)
}


#ifdef __cplusplus
}
#endif
