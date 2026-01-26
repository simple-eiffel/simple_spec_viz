/*
 * Code for class KL_STRING_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F290_5638(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5639(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5640(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5641(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5642(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5643(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5644(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5645(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5646(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5647(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5648(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5649(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5650(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5651(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5652(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5653(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5654(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5655(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5656(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5657(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5658(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5659(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5660(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5661(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5662(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5663(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5664(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5665(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5666(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5667(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F290_5668(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5669(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5670(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5671(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5672(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5673(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5674(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5675(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5676(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5677(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5678(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5679(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5680(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5681(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F290_5682(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F290_5683(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F290_5684(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F290_5685(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F290_5686(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F290_5687(EIF_REFERENCE);
extern EIF_TYPED_VALUE F290_5688(EIF_REFERENCE);
extern EIF_TYPED_VALUE F290_5689(EIF_REFERENCE);
extern EIF_TYPED_VALUE F290_5690(EIF_REFERENCE);
extern void EIF_Minit290(void);

#ifdef __cplusplus
}
#endif

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

/* {KL_STRING_ROUTINES}.make_from_string */
EIF_TYPED_VALUE F290_5638 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc6);
	RTLR(4,loc7);
	RTLR(5,Current);
	RTLR(6,loc8);
	RTLR(7,ur1);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 289, Current, 8, 1, 8641);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8641);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	loc6 = RTCCL(Result);
	if (EIF_TEST(loc6)) {
		RTHOOK(5);
		loc7 = RTCCL(arg1);
		loc7 = RTRV(eif_new_type(400, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			RTHOOK(6);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = *(EIF_INTEGER_32 *)(loc7 + RTVA(7258, "byte_count", loc7));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc2 > loc3)) break;
				RTHOOK(9);
				ui4_1 = loc2;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7290, "character_item_at_byte_index", loc7))(loc7, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(10);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc7))(loc7, ui4_1x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
			}
		} else {
			RTHOOK(11);
			RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5987, 344))(Current)).it_i4);
			tu4_1 = (EIF_NATURAL_32) ti4_1;
			loc5 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(12);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc1 > loc3)) break;
				RTHOOK(14);
				RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc4 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(15);
				if ((EIF_BOOLEAN) (loc4 > loc5)) {
					RTHOOK(16);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
				}
				RTHOOK(17);
				uu4_1 = loc4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6206, "append_code", Result))(Result, uu4_1x);
				RTHOOK(18);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
		}
	} else {
		RTHOOK(19);
		loc8 = RTCCL(arg1);
		loc8 = RTRV(eif_new_type(400, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(20);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = *(EIF_INTEGER_32 *)(loc8 + RTVA(7258, "byte_count", loc8));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(21);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(22);
				if ((EIF_BOOLEAN) (loc2 > loc3)) break;
				RTHOOK(23);
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7288, "item_code_at_byte_index", loc8))(loc8, ui4_1x)).it_i4);
				tu4_1 = (EIF_NATURAL_32) ti4_1;
				uu4_1 = tu4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6206, "append_code", Result))(Result, uu4_1x);
				RTHOOK(24);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				ui4_1 = loc2;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc8))(loc8, ui4_1x)).it_i4);
				loc2 = (EIF_INTEGER_32) ti4_1;
			}
		} else {
			RTHOOK(25);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6217, "append_string_general", Result))(Result, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(27);
		RTCT("new_string", EX_POST);
		if (!RTCEQ(Result, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(28);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("initialized", EX_POST);
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4821, dtype))(Current, ur1x, ur2x)).it_b);
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
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg1
}

/* {KL_STRING_ROUTINES}.make_buffer */
EIF_TYPED_VALUE F290_5639 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_buffer";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 289, Current, 0, 1, 8642);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8642);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	uc1 = (EIF_CHARACTER_8) '\000';
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6236, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {KL_STRING_ROUTINES}.has_substring */
EIF_TYPED_VALUE F290_5640 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "has_substring";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 289, Current, 0, 2, 8643);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8643);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
			RTHOOK(6);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4817, dtype))(Current, ur1x, ur2x, ui4_1x)).it_i4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("false_if_too_small", EX_POST);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 < ti4_2)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("true_if_initial", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			ur1 = RTCCL(arg2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4821, dtype))(Current, ur1x, ur2x)).it_b);
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
		RTHOOK(9);
		RTCT("recurse", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 >= ti4_2)) {
			ur1 = RTCCL(arg2);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4821, dtype))(Current, ur1x, ur2x)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			ui4_1 = ((EIF_INTEGER_32) 2L);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = ti4_1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4806, dtype))(Current, ur1x, ur2x)).it_b);
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
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.is_decimal */
EIF_TYPED_VALUE F290_5641 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_decimal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR32, &loc3);
	
	RTEAA(l_feature_name, 289, Current, 3, 1, 8644);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8644);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
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
			RTDBGAL(3, 0x1C000000, 1, 0); /* loc3 */
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
			loc3 = (EIF_CHARACTER_32) tw1;
			RTHOOK(9);
			tb1 = '\01';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
			if (!(EIF_BOOLEAN) (loc3 < tw1)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
				tb1 = (EIF_BOOLEAN) (loc3 > tw1);
			}
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(11);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {KL_STRING_ROUTINES}.is_integer_64 */
EIF_TYPED_VALUE F290_5642 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_integer_64";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_32 loc7 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc8 = (EIF_CHARACTER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_CHAR32, &loc7);
	RTLU(SK_CHAR32, &loc8);
	
	RTEAA(l_feature_name, 289, Current, 8, 1, 8645);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8645);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(5);
		RTDBGAL(7, 0x1C000000, 1, 0); /* loc7 */
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
		loc7 = (EIF_CHARACTER_32) tw1;
		RTHOOK(6);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
		if ((EIF_BOOLEAN)(loc7 == tw1)) {
			RTHOOK(7);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3++;
		} else {
			RTHOOK(8);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
			if ((EIF_BOOLEAN)(loc7 == tw1)) {
				RTHOOK(9);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
				RTHOOK(10);
				RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
		RTHOOK(11);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) loc3;
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != loc2) || (EIF_BOOLEAN) (loc2 > loc1))) break;
			RTHOOK(13);
			ui4_1 = loc2;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
			if ((EIF_BOOLEAN)(tw1 == tw2)) {
				RTHOOK(14);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
			}
			RTHOOK(15);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
		}
		RTHOOK(16);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc3) + ((EIF_INTEGER_32) 1L));
		RTHOOK(17);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 20L))) {
			RTHOOK(18);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(19);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) loc3;
			for (;;) {
				RTHOOK(20);
				if ((EIF_BOOLEAN) (loc4 > (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) - ((EIF_INTEGER_32) 1L)))) break;
				RTHOOK(21);
				RTDBGAL(7, 0x1C000000, 1, 0); /* loc7 */
				ui4_1 = loc4;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
				loc7 = (EIF_CHARACTER_32) tw1;
				RTHOOK(22);
				tb1 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
				if (!(EIF_BOOLEAN) (loc7 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
					tb1 = (EIF_BOOLEAN) (loc7 > tw1);
				}
				if (tb1) {
					RTHOOK(23);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(24);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc3) + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(25);
					RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
					loc4++;
				}
			}
			RTHOOK(26);
			if ((EIF_BOOLEAN) (Result && (EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 19L)))) {
				RTHOOK(27);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(28);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 - loc1);
				for (;;) {
					RTHOOK(29);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result || (EIF_BOOLEAN) (loc3 > loc4))) break;
					RTHOOK(30);
					RTDBGAL(7, 0x1C000000, 1, 0); /* loc7 */
					ui4_1 = loc3;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
					loc7 = (EIF_CHARACTER_32) tw1;
					RTHOOK(31);
					if (loc6) {
						RTHOOK(32);
						RTDBGAL(8, 0x1C000000, 1, 0); /* loc8 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4856, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(32,1);
						ui4_1 = (EIF_INTEGER_32) (loc3 - loc5);
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "item", tr1))(tr1, ui4_1x)).it_c4);
						loc8 = (EIF_CHARACTER_32) tw1;
					} else {
						RTHOOK(33);
						RTDBGAL(8, 0x1C000000, 1, 0); /* loc8 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4855, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(33,1);
						ui4_1 = (EIF_INTEGER_32) (loc3 - loc5);
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "item", tr1))(tr1, ui4_1x)).it_c4);
						loc8 = (EIF_CHARACTER_32) tw1;
					}
					RTHOOK(34);
					if ((EIF_BOOLEAN) (loc7 < loc8)) {
						RTHOOK(35);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(36);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(37);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc7 == loc8);
						RTHOOK(38);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3++;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {KL_STRING_ROUTINES}.is_hexadecimal */
EIF_TYPED_VALUE F290_5643 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hexadecimal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR32, &loc3);
	
	RTEAA(l_feature_name, 289, Current, 3, 1, 8646);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8646);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
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
			RTDBGAL(3, 0x1C000000, 1, 0); /* loc3 */
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
			loc3 = (EIF_CHARACTER_32) tw1;
			RTHOOK(9);
			tb1 = '\0';
			tb2 = '\0';
			tb3 = '\01';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
			if (!(EIF_BOOLEAN) (loc3 < tw1)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
				tb3 = (EIF_BOOLEAN) (loc3 > tw1);
			}
			if (tb3) {
				tb3 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
				if (!(EIF_BOOLEAN) (loc3 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'f';
					tb3 = (EIF_BOOLEAN) (loc3 > tw1);
				}
				tb2 = tb3;
			}
			if (tb2) {
				tb2 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
				if (!(EIF_BOOLEAN) (loc3 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'F';
					tb2 = (EIF_BOOLEAN) (loc3 > tw1);
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(11);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {KL_STRING_ROUTINES}.is_base64 */
EIF_TYPED_VALUE F290_5644 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_base64";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc3 = (EIF_CHARACTER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
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
	RTLU(SK_INT32, &loc2);
	RTLU(SK_CHAR32, &loc3);
	
	RTEAA(l_feature_name, 289, Current, 3, 1, 8647);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8647);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
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
			RTDBGAL(3, 0x1C000000, 1, 0); /* loc3 */
			ui4_1 = loc1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
			loc3 = (EIF_CHARACTER_32) tw1;
			RTHOOK(9);
			tb1 = '\0';
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			tb5 = '\0';
			tb6 = '\0';
			tb7 = '\0';
			tb8 = '\0';
			tb9 = '\0';
			tb10 = '\01';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
			if (!(EIF_BOOLEAN) (loc3 < tw1)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
				tb10 = (EIF_BOOLEAN) (loc3 > tw1);
			}
			if (tb10) {
				tb10 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
				if (!(EIF_BOOLEAN) (loc3 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
					tb10 = (EIF_BOOLEAN) (loc3 > tw1);
				}
				tb9 = tb10;
			}
			if (tb9) {
				tb9 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
				if (!(EIF_BOOLEAN) (loc3 < tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
					tb9 = (EIF_BOOLEAN) (loc3 > tw1);
				}
				tb8 = tb9;
			}
			if (tb8) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
				tb7 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb7) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
				tb6 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb6) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
				tb5 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb5) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
				tb4 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb4) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
				tb3 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb3) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				tb2 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb2) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				tb1 = (EIF_BOOLEAN)(loc3 != tw1);
			}
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(11);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			} else {
				RTHOOK(12);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			}
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
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {KL_STRING_ROUTINES}.new_empty_string */
EIF_TYPED_VALUE F290_5645 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_empty_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
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
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 2, 8648);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8648);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(357, 0x01).id);
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(eif_new_type(400, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			RTCT0("attached {STRING} uc_string.new_empty_string (n) as l_new_empty_string", EX_CHECK);
			ui4_1 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7255, "new_empty_string", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(7);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc2);
		} else {
			RTHOOK(8);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6234, "wipe_out", Result))(Result);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("new_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("same_type", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("new_string_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.new_empty_string_8 */
EIF_TYPED_VALUE F290_5646 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_empty_string_8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
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
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 289, Current, 1, 2, 8649);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8649);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_negative_n", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(357, 0x01).id);
		ui4_1 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(eif_new_type(400, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ui4_1 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7255, "new_empty_string", loc1))(loc1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(7);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6234, "wipe_out", Result))(Result);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("new_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("same_type", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("new_string_empty", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.to_utf16_be */
EIF_TYPED_VALUE F290_5647 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc8);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 289, Current, 8, 1, 8650);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8650);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	loc8 = RTCCL(arg1);
	loc8 = RTRV(eif_new_type(400, 0x01),loc8);
	if (EIF_TEST(loc8)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7283, "to_utf16_be", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(357, 0x01).id);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
			ui4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
			loc7 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			uu4_1 = loc7;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ti4_1 = (EIF_INTEGER_32) loc7;
				loc3 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(11);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			ui4_1 = loc3;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6997, "is_bmp_code", tr1))(tr1, ui4_1x)).it_b);
			if (tb1) {
				RTHOOK(13);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 256L));
				RTHOOK(14);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 256L));
				RTHOOK(15);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(16,1);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			} else {
				RTHOOK(17);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(17,1);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4788, "supplementary_to_high_surrogate", tr1))(tr1, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(19);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(20,1);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(21);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,1);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(22);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4789, "supplementary_to_low_surrogate", tr1))(tr1, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(23);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(24);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(25);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(25,1);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(26);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(26,1);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			}
			RTHOOK(27);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("to_utf16_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("valid_utf16", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(30,1);
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
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg1
}

/* {KL_STRING_ROUTINES}.to_utf16_le */
EIF_TYPED_VALUE F290_5648 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc8);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 289, Current, 8, 1, 8651);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8651);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	loc8 = RTCCL(arg1);
	loc8 = RTRV(eif_new_type(400, 0x01),loc8);
	if (EIF_TEST(loc8)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7284, "to_utf16_le", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(357, 0x01).id);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(8);
			RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
			ui4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
			loc7 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			uu4_1 = loc7;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ti4_1 = (EIF_INTEGER_32) loc7;
				loc3 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(11);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			ui4_1 = loc3;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6997, "is_bmp_code", tr1))(tr1, ui4_1x)).it_b);
			if (tb1) {
				RTHOOK(13);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 256L));
				RTHOOK(14);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 % ((EIF_INTEGER_32) 256L));
				RTHOOK(15);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(15,1);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(16);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(16,1);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			} else {
				RTHOOK(17);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(17,1);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4788, "supplementary_to_high_surrogate", tr1))(tr1, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(18);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(19);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(20);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(20,1);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(21);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(21,1);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(22);
				RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(22,1);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4789, "supplementary_to_low_surrogate", tr1))(tr1, ui4_1x)).it_i4);
				loc6 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(23);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 / ((EIF_INTEGER_32) 256L));
				RTHOOK(24);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 256L));
				RTHOOK(25);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(25,1);
				ui4_1 = loc5;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
				RTHOOK(26);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(26,1);
				ui4_1 = loc4;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
				uc1 = tc1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			}
			RTHOOK(27);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("to_utf16_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(30);
		RTCT("valid_utf16", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(30,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1719, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(30,2);
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
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg1
}

/* {KL_STRING_ROUTINES}.to_utf32_be */
EIF_TYPED_VALUE F290_5649 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 289, Current, 9, 1, 8652);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8652);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	loc9 = RTCCL(arg1);
	loc9 = RTRV(eif_new_type(400, 0x01),loc9);
	if (EIF_TEST(loc9)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7285, "to_utf32_be", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(357, 0x01).id);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc6)) break;
			RTHOOK(8);
			RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
			ui4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			uu4_1 = loc8;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				ti4_1 = (EIF_INTEGER_32) loc8;
				loc7 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(11);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(12);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(14);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(15);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(16);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / ((EIF_INTEGER_32) 256L));
			RTHOOK(17);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(19);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(19,1);
			ui4_1 = loc3;
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
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(22);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("to_utf32_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("valid_utf32", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1718, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
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
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg1
}

/* {KL_STRING_ROUTINES}.to_utf32_le */
EIF_TYPED_VALUE F290_5650 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLR(5,ur1);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 289, Current, 9, 1, 8653);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8653);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	loc9 = RTCCL(arg1);
	loc9 = RTRV(eif_new_type(400, 0x01),loc9);
	if (EIF_TEST(loc9)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7286, "to_utf32_le", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc6 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(357, 0x01).id);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 4L) * loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc1 > loc6)) break;
			RTHOOK(8);
			RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
			ui4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
			loc8 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(9);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			uu4_1 = loc8;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
			if (tb1) {
				RTHOOK(10);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				ti4_1 = (EIF_INTEGER_32) loc8;
				loc7 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(11);
				RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
			RTHOOK(12);
			RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
			loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(13);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(14);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(15);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			loc7 /= ((EIF_INTEGER_32) 256L);
			RTHOOK(16);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 / ((EIF_INTEGER_32) 256L));
			RTHOOK(17);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 % ((EIF_INTEGER_32) 256L));
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(18,1);
			ui4_1 = loc5;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
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
			ui4_1 = loc3;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(21);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4751, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(21,1);
			ui4_1 = loc2;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4217, "to_character", tr1))(tr1, ui4_1x)).it_c1);
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
			RTHOOK(22);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("to_utf32_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("valid_utf32", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1718, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(25,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1718, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(25,2);
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
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef ur1
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg1
}

/* {KL_STRING_ROUTINES}.substring_index */
EIF_TYPED_VALUE F290_5651 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
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
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc9 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc11);
	RTLR(3,ur1);
	RTLR(4,loc12);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLR(8,ur2);
	RTLIU(9);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_BOOL, &loc8);
	RTLU(SK_UINT32, &loc9);
	RTLU(SK_INT32, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	
	RTEAA(l_feature_name, 289, Current, 12, 3, 8654);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8654);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			tb1 = (EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 1L))) {
			RTHOOK(6);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
	} else {
		RTHOOK(7);
		RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		loc10 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc10 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(9);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) arg3;
		} else {
			RTHOOK(10);
			RTDBGAL(7, 0x10000000, 1, 0); /* loc7 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc10) + ((EIF_INTEGER_32) 1L));
			RTHOOK(11);
			if ((EIF_BOOLEAN) (arg3 <= loc7)) {
				RTHOOK(12);
				loc11 = RTCCL(arg1);
				loc11 = RTRV(eif_new_type(400, 0x01),loc11);
				if (EIF_TEST(loc11)) {
					RTHOOK(13);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ur1 = RTCCL(arg2);
					ui4_1 = arg3;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6157, "substring_index", loc11))(loc11, ur1x, ui4_1x)).it_i4);
					Result = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(14);
					loc12 = RTCCL(arg2);
					loc12 = RTRV(eif_new_type(400, 0x01),loc12);
					if (EIF_TEST(loc12)) {
						RTHOOK(15);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(15,1);
						tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						ur1 = RTCCL(tr2);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
						if (tb1) {
							RTHOOK(16);
							RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5987, 344))(Current)).it_i4);
							tu4_1 = (EIF_NATURAL_32) ti4_1;
							loc9 = (EIF_NATURAL_32) tu4_1;
						} else {
							RTHOOK(17);
							RTDBGAL(9, 0x38000000, 1, 0); /* loc9 */
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5954, 341))(Current)).it_n4);
							loc9 = (EIF_NATURAL_32) tu4_1;
						}
						RTHOOK(18);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						ti4_1 = *(EIF_INTEGER_32 *)(loc12 + RTVA(7258, "byte_count", loc12));
						loc3 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(19);
						RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
						loc6 = (EIF_INTEGER_32) arg3;
						for (;;) {
							RTHOOK(20);
							if ((EIF_BOOLEAN) (loc6 > loc7)) break;
							RTHOOK(21);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							loc2 = (EIF_INTEGER_32) loc6;
							RTHOOK(22);
							RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
							loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(23);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							for (;;) {
								RTHOOK(24);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(25);
								RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
								ui4_1 = loc2;
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
								loc4 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(26);
								if ((EIF_BOOLEAN) (loc4 > loc9)) {
									RTHOOK(27);
									RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
									loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(28);
								RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
								ui4_1 = loc1;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7288, "item_code_at_byte_index", loc12))(loc12, ui4_1x)).it_i4);
								tu4_1 = (EIF_NATURAL_32) ti4_1;
								loc5 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(29);
								if ((EIF_BOOLEAN) (loc5 > loc9)) {
									RTHOOK(30);
									RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
									loc5 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
								}
								RTHOOK(31);
								if ((EIF_BOOLEAN)(loc4 != loc5)) {
									RTHOOK(32);
									RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
									loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(33);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
								} else {
									RTHOOK(34);
									RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
									loc2++;
									RTHOOK(35);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									ui4_1 = loc1;
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7291, "next_byte_index", loc12))(loc12, ui4_1x)).it_i4);
									loc1 = (EIF_INTEGER_32) ti4_1;
								}
							}
							RTHOOK(36);
							if (loc8) {
								RTHOOK(37);
								RTDBGAL(0, 0x10000000, 1,0); /* Result */
								Result = (EIF_INTEGER_32) loc6;
								RTHOOK(38);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(39);
								RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
								loc6++;
							}
						}
					} else {
						RTHOOK(40);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ur1 = RTCCL(arg2);
						ui4_1 = arg3;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6157, "substring_index", arg1))(arg1, ur1x, ui4_1x)).it_i4);
						Result = (EIF_INTEGER_32) ti4_1;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(41);
		RTCT("valid_result", EX_POST);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) (arg3 <= Result)) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
				tb2 = (EIF_BOOLEAN) (Result <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)));
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(42);
		RTCT("zero_if_absent", EX_POST);
		ui4_1 = arg3;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4806, dtype))(Current, ur1x, ur2x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == (EIF_BOOLEAN) !tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(43);
		RTCT("at_this_index", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result >= arg3)) {
			ur1 = RTCCL(arg2);
			ui4_1 = Result;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4821, dtype))(Current, ur1x, ur2x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(44);
		RTCT("none_before", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) (Result > arg3)) {
			ui4_1 = arg3;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
			ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 2L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			ur2 = RTCCL(arg2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4806, dtype))(Current, ur1x, ur2x)).it_b);
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
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.case_insensitive_hash_code */
EIF_TYPED_VALUE F290_5652 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "case_insensitive_hash_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 1, 8655);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8655);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ui4_1 = ((EIF_INTEGER_32) 8L);
		ti4_1 = eif_bit_shift_left((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L)),ui4_1);
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
		tr1 = RTLN(eif_new_type(341, 0x00).id);
		*(EIF_CHARACTER_32 *)tr1 = tw1;
		tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5967, "upper", tr1))(tr1)).it_c4);
		ti4_2 = (EIF_INTEGER_32) (tw2);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(8);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -(EIF_INTEGER_32) (Result + ((EIF_INTEGER_32) 1L));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("hash_code_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {KL_STRING_ROUTINES}.concat */
EIF_TYPED_VALUE F290_5653 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "concat";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLR(7,Result);
	RTLR(8,loc1);
	RTLR(9,loc2);
	RTLR(10,loc3);
	RTLR(11,tr3);
	RTLIU(12);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 289, Current, 3, 2, 8656);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8656);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4820, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		tb1 = '\0';
		loc1 = RTCCL(arg1);
		loc1 = RTRV(eif_new_type(361, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			ur1 = RTCCL(arg2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4844, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6166, "as_string_32", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6334, "plus", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			loc2 = RTRV(eif_new_type(357, 0x01),loc2);
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc2);
		} else {
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(arg2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4844, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6166, "as_string_32", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6334, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = RTCCL(tr2);
			loc3 = RTRV(eif_new_type(357, 0x01),loc3);
			if (EIF_TEST(loc3)) {
				RTHOOK(8);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc3);
			} else {
				RTHOOK(9);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg2);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4820, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("concat_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("concat_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("final", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ui4_2 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
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
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.concat_string_8 */
EIF_TYPED_VALUE F290_5654 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "concat_string_8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,tr2);
	RTLR(10,ur2);
	RTLR(11,Current);
	RTLIU(12);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 289, Current, 4, 2, 8657);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8657);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(400, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(arg2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7251, "gobo_plus_general", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		loc2 = RTCCL(arg2);
		loc2 = RTRV(eif_new_type(400, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(6);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(arg1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7252, "prefixed_string", loc2))(loc2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(7);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(355, 0x01),loc3);
			loc4 = RTCCL(arg2);
			loc4 = RTRV(eif_new_type(355, 0x01),loc4);
			if ((EIF_BOOLEAN) (EIF_TEST(loc3) && EIF_TEST(loc4))) {
				RTHOOK(8);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6160, "to_string_8", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(loc4);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr2);
			} else {
				RTHOOK(9);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(400, 0x01).id);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7240, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(9,1);
				ur1 = RTCCL(arg2);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7251, "gobo_plus_general", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr2);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("concat_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("concat_count", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (ti4_2 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_2 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("final", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ui4_2 = ti4_2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
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
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.elks_same_string */
EIF_TYPED_VALUE F290_5655 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "elks_same_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc6);
	RTLR(3,ur1);
	RTLR(4,loc7);
	RTLR(5,Current);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLR(8,ur2);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLIU(11);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 289, Current, 9, 2, 8658);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8658);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTHOOK(6);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(7);
			loc6 = RTCCL(arg1);
			loc6 = RTRV(eif_new_type(400, 0x01),loc6);
			if (EIF_TEST(loc6)) {
				RTHOOK(8);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				ur1 = RTCCL(arg2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6152, "same_string_general", loc6))(loc6, ur1x)).it_b);
				Result = (EIF_BOOLEAN) tb1;
			} else {
				RTHOOK(9);
				loc7 = RTCCL(arg2);
				loc7 = RTRV(eif_new_type(400, 0x01),loc7);
				if (EIF_TEST(loc7)) {
					RTHOOK(10);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					ur1 = RTCCL(arg1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6152, "same_string_general", loc7))(loc7, ur1x)).it_b);
					Result = (EIF_BOOLEAN) tb1;
				} else {
					RTHOOK(11);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(11,1);
					tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
					ur1 = RTCCL(tr2);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(12);
						RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5987, 344))(Current)).it_i4);
						tu4_1 = (EIF_NATURAL_32) ti4_1;
						loc5 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(13);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						RTHOOK(14);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(15);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						for (;;) {
							RTHOOK(16);
							if ((EIF_BOOLEAN) (loc1 > loc2)) break;
							RTHOOK(17);
							RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
							ui4_1 = loc1;
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
							loc3 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(18);
							if ((EIF_BOOLEAN) (loc3 > loc5)) {
								RTHOOK(19);
								RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
								loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
							}
							RTHOOK(20);
							RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
							ui4_1 = loc1;
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
							loc4 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(21);
							if ((EIF_BOOLEAN) (loc4 > loc5)) {
								RTHOOK(22);
								RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
								loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
							}
							RTHOOK(23);
							if ((EIF_BOOLEAN)(loc3 != loc4)) {
								RTHOOK(24);
								RTDBGAL(0, 0x04000000, 1,0); /* Result */
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								RTHOOK(25);
								RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
								loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(26);
								RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
								loc1++;
							}
						}
					} else {
						RTHOOK(27);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						ur1 = RTCCL(arg2);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6152, "same_string", arg1))(arg1, ur1x)).it_b);
						Result = (EIF_BOOLEAN) tb1;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("definition_string_32", EX_POST);
		tb1 = '\01';
		tr1 = RTMS_EX_H("",0,0);
		tr2 = RTMS32_EX_H("",0,0);
		ur1 = tr2;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
		if (tb2) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
			tb1 = (EIF_BOOLEAN)(Result == tb2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(29);
		RTCT("string_8", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tb3 = '\0';
		tr1 = RTMS_EX_H("",0,0);
		tr2 = RTMS_EX_H("",0,0);
		ur1 = tr2;
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
		if (tb4) {
			loc8 = RTCCL(arg1);
			loc8 = RTRV(eif_new_type(355, 0x01),loc8);
			tb3 = EIF_TEST(loc8);
		}
		if (tb3) {
			loc9 = RTCCL(arg2);
			loc9 = RTRV(eif_new_type(355, 0x01),loc9);
			tb2 = EIF_TEST(loc9);
		}
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6249, "string", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6249, "string", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
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
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.same_string */
EIF_TYPED_VALUE F290_5656 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "same_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLR(8,Current);
	RTLIU(9);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 2, 8659);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8659);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ti4_2)) {
			RTHOOK(6);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		} else {
			RTHOOK(7);
			loc1 = RTCCL(arg1);
			loc1 = RTRV(eif_new_type(400, 0x01),loc1);
			if (EIF_TEST(loc1)) {
				RTHOOK(8);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				ur1 = RTCCL(arg2);
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7264, "same_unicode_string", loc1))(loc1, ur1x)).it_b);
				Result = (EIF_BOOLEAN) tb1;
			} else {
				RTHOOK(9);
				loc2 = RTCCL(arg2);
				loc2 = RTRV(eif_new_type(400, 0x01),loc2);
				if (EIF_TEST(loc2)) {
					RTHOOK(10);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					ur1 = RTCCL(arg1);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7264, "same_unicode_string", loc2))(loc2, ur1x)).it_b);
					Result = (EIF_BOOLEAN) tb1;
				} else {
					RTHOOK(11);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					ur1 = RTCCL(arg2);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6152, "same_string", arg1))(arg1, ur1x)).it_b);
					Result = (EIF_BOOLEAN) tb1;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			tb2 = '\01';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
				tb3 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == tu4_2)) {
					tb4 = '\01';
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
					if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
						ui4_2 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						ui4_1 = ((EIF_INTEGER_32) 2L);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
						ui4_2 = ti4_1;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur2 = RTCCL(tr2);
						tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
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
		RTHOOK(13);
		RTCT("elks_same_string", EX_POST);
		tb1 = '\01';
		if (Result) {
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4821, dtype))(Current, ur1x, ur2x)).it_b);
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
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.same_case_insensitive */
EIF_TYPED_VALUE F290_5657 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "same_case_insensitive";
	RTEX;
	EIF_CHARACTER_32 loc1 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc7);
	RTLR(3,loc8);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR32, &loc1);
	RTLU(SK_CHAR32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_INT32, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 289, Current, 8, 2, 8660);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8660);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s1_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s2_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTCEQ(arg1, arg2)) {
		RTHOOK(4);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTHOOK(6);
			RTDBGAL(6, 0x10000000, 1, 0); /* loc6 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			loc6 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(8);
			loc7 = RTCCL(arg1);
			loc7 = RTRV(eif_new_type(400, 0x01),loc7);
			loc8 = RTCCL(arg2);
			loc8 = RTRV(eif_new_type(400, 0x01),loc8);
			if ((EIF_BOOLEAN) (EIF_TEST(loc7) || EIF_TEST(loc8))) {
				RTHOOK(9);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(10);
					if ((EIF_BOOLEAN) (loc5 > loc6)) break;
					RTHOOK(11);
					RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
					ui4_1 = loc5;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
					loc3 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(12);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					ui4_1 = loc5;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
					loc4 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(13);
					if ((EIF_BOOLEAN)(loc3 == loc4)) {
						RTHOOK(14);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						loc5++;
					} else {
						RTHOOK(15);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(15,1);
						uu4_1 = loc3;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
						if ((EIF_BOOLEAN) !tb1) {
							RTHOOK(16);
							RTDBGAL(0, 0x04000000, 1,0); /* Result */
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(17);
							RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
							loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(18);
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(18,1);
							uu4_1 = loc4;
							tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
							if ((EIF_BOOLEAN) !tb1) {
								RTHOOK(19);
								RTDBGAL(0, 0x04000000, 1,0); /* Result */
								Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								RTHOOK(20);
								RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
								loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
							} else {
								RTHOOK(21);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(21,1);
								ti4_1 = (EIF_INTEGER_32) loc3;
								ui4_1 = ti4_1;
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6643, "lower_code", tr1))(tr1, ui4_1x)).it_i4);
								tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
								RTNHOOK(21,2);
								ti4_2 = (EIF_INTEGER_32) loc4;
								ui4_1 = ti4_2;
								ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6643, "lower_code", tr1))(tr1, ui4_1x)).it_i4);
								if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
									RTHOOK(22);
									RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
									loc5++;
								} else {
									RTHOOK(23);
									RTDBGAL(0, 0x04000000, 1,0); /* Result */
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(24);
									RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
									loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
								}
							}
						}
					}
				}
			} else {
				RTHOOK(25);
				RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
				loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(26);
					if ((EIF_BOOLEAN) (loc5 > loc6)) break;
					RTHOOK(27);
					RTDBGAL(1, 0x1C000000, 1, 0); /* loc1 */
					ui4_1 = loc5;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
					loc1 = (EIF_CHARACTER_32) tw1;
					RTHOOK(28);
					RTDBGAL(2, 0x1C000000, 1, 0); /* loc2 */
					ui4_1 = loc5;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg2))(arg2, ui4_1x)).it_c4);
					loc2 = (EIF_CHARACTER_32) tw1;
					RTHOOK(29);
					if ((EIF_BOOLEAN)(loc1 == loc2)) {
						RTHOOK(30);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						loc5++;
					} else {
						RTHOOK(31);
						tr1 = RTLN(eif_new_type(341, 0x00).id);
						*(EIF_CHARACTER_32 *)tr1 = loc1;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5969, "lower", tr1))(tr1)).it_c4);
						tr1 = RTLN(eif_new_type(341, 0x00).id);
						*(EIF_CHARACTER_32 *)tr1 = loc2;
						tw2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5969, "lower", tr1))(tr1)).it_c4);
						if ((EIF_BOOLEAN)(tw1 == tw2)) {
							RTHOOK(32);
							RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
							loc5++;
						} else {
							RTHOOK(33);
							RTDBGAL(0, 0x04000000, 1,0); /* Result */
							Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(34);
							RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
							loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc6 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.is_less */
EIF_TYPED_VALUE F290_5658 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_less";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 289, Current, 0, 2, 8661);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8661);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4825, dtype))(Current, ur1x, ur2x)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) -1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.three_way_comparison */
EIF_TYPED_VALUE F290_5659 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "three_way_comparison";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc8);
	RTLR(3,ur1);
	RTLR(4,loc9);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_BOOL, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 289, Current, 9, 2, 8662);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8662);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(5);
		loc8 = RTCCL(arg1);
		loc8 = RTRV(eif_new_type(400, 0x01),loc8);
		if (EIF_TEST(loc8)) {
			RTHOOK(6);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			ur1 = RTCCL(arg2);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7265, "three_way_unicode_comparison", loc8))(loc8, ur1x)).it_i4);
			Result = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(7);
			loc9 = RTCCL(arg2);
			loc9 = RTRV(eif_new_type(400, 0x01),loc9);
			if (EIF_TEST(loc9)) {
				RTHOOK(8);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ur1 = RTCCL(arg1);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7265, "three_way_unicode_comparison", loc9))(loc9, ur1x)).it_i4);
				Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -ti4_1;
			} else {
				RTHOOK(9);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(10);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(11);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(12);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) loc3;
				} else {
					RTHOOK(13);
					RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
					loc2 = (EIF_INTEGER_32) loc4;
				}
				RTHOOK(14);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(15);
					if ((EIF_BOOLEAN) (loc1 > loc2)) break;
					RTHOOK(16);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					ui4_1 = loc1;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
					loc5 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(17);
					RTDBGAL(6, 0x38000000, 1, 0); /* loc6 */
					ui4_1 = loc1;
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
					loc6 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc5 == loc6)) {
						RTHOOK(19);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					} else {
						RTHOOK(20);
						if ((EIF_BOOLEAN) (loc5 < loc6)) {
							RTHOOK(21);
							RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
							loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(22);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(23);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(24);
							RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
							loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(25);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(26);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
				RTHOOK(27);
				if ((EIF_BOOLEAN) !loc7) {
					RTHOOK(28);
					if ((EIF_BOOLEAN) (loc3 < loc4)) {
						RTHOOK(29);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
					} else {
						RTHOOK(30);
						if ((EIF_BOOLEAN)(loc3 != loc4)) {
							RTHOOK(31);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("equal_zero", EX_POST);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if ((EIF_BOOLEAN)((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) == tb1)) {
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
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.three_way_case_insensitive_comparison */
EIF_TYPED_VALUE F290_5660 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "three_way_case_insensitive_comparison";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 289, Current, 0, 2, 8663);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8663);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4827, dtype))(Current, ur1x, ur2x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.three_way_lower_case_comparison */
EIF_TYPED_VALUE F290_5661 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "three_way_lower_case_comparison";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_CHAR32, &loc5);
	RTLU(SK_CHAR32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	
	RTEAA(l_feature_name, 289, Current, 11, 2, 8664);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8664);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(5);
		loc10 = RTCCL(arg1);
		loc10 = RTRV(eif_new_type(400, 0x01),loc10);
		loc11 = RTCCL(arg2);
		loc11 = RTRV(eif_new_type(400, 0x01),loc11);
		if ((EIF_BOOLEAN) (EIF_TEST(loc10) || EIF_TEST(loc11))) {
			RTHOOK(6);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(9);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(10);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(11);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(13);
				RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc7 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(14);
				RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc7 == loc8)) {
					RTHOOK(16);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				} else {
					RTHOOK(17);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(17,1);
					uu4_1 = loc7;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
					if (tb1) {
						RTHOOK(18);
						RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(18,1);
						ti4_1 = (EIF_INTEGER_32) loc7;
						ui4_1 = ti4_1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6643, "lower_code", tr1))(tr1, ui4_1x)).it_i4);
						tu4_1 = (EIF_NATURAL_32) ti4_1;
						loc7 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(19);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(19,1);
					uu4_1 = loc8;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
					if (tb1) {
						RTHOOK(20);
						RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(20,1);
						ti4_1 = (EIF_INTEGER_32) loc8;
						ui4_1 = ti4_1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6643, "lower_code", tr1))(tr1, ui4_1x)).it_i4);
						tu4_1 = (EIF_NATURAL_32) ti4_1;
						loc8 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc7 == loc8)) {
						RTHOOK(22);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					} else {
						RTHOOK(23);
						if ((EIF_BOOLEAN) (loc7 < loc8)) {
							RTHOOK(24);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(25);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(26);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(27);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(28);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(29);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
			RTHOOK(30);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(31);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(32);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(33);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(34);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		} else {
			RTHOOK(35);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(36);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(37);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(38);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(39);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(40);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(41);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(42);
				RTDBGAL(5, 0x1C000000, 1, 0); /* loc5 */
				ui4_1 = loc1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
				loc5 = (EIF_CHARACTER_32) tw1;
				RTHOOK(43);
				RTDBGAL(6, 0x1C000000, 1, 0); /* loc6 */
				ui4_1 = loc1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg2))(arg2, ui4_1x)).it_c4);
				loc6 = (EIF_CHARACTER_32) tw1;
				RTHOOK(44);
				if ((EIF_BOOLEAN)(loc5 == loc6)) {
					RTHOOK(45);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				} else {
					RTHOOK(46);
					RTDBGAL(5, 0x1C000000, 1, 0); /* loc5 */
					tr1 = RTLN(eif_new_type(341, 0x00).id);
					*(EIF_CHARACTER_32 *)tr1 = loc5;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5969, "lower", tr1))(tr1)).it_c4);
					loc5 = (EIF_CHARACTER_32) tw1;
					RTHOOK(47);
					RTDBGAL(6, 0x1C000000, 1, 0); /* loc6 */
					tr1 = RTLN(eif_new_type(341, 0x00).id);
					*(EIF_CHARACTER_32 *)tr1 = loc6;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5969, "lower", tr1))(tr1)).it_c4);
					loc6 = (EIF_CHARACTER_32) tw1;
					RTHOOK(48);
					if ((EIF_BOOLEAN)(loc5 == loc6)) {
						RTHOOK(49);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					} else {
						RTHOOK(50);
						if ((EIF_BOOLEAN) (loc5 < loc6)) {
							RTHOOK(51);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(52);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(53);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(54);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(55);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(56);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
			RTHOOK(57);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(58);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(59);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(60);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(61);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(62);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.three_way_upper_case_comparison */
EIF_TYPED_VALUE F290_5662 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "three_way_upper_case_comparison";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc10);
	RTLR(3,loc11);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_CHAR32, &loc5);
	RTLU(SK_CHAR32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_UINT32, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	
	RTEAA(l_feature_name, 289, Current, 11, 2, 8665);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8665);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTCEQ(arg2, arg1)) {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(5);
		loc10 = RTCCL(arg1);
		loc10 = RTRV(eif_new_type(400, 0x01),loc10);
		loc11 = RTCCL(arg2);
		loc11 = RTRV(eif_new_type(400, 0x01),loc11);
		if ((EIF_BOOLEAN) (EIF_TEST(loc10) || EIF_TEST(loc11))) {
			RTHOOK(6);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(6269, "count", arg2));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(9);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(10);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(11);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(13);
				RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc7 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(14);
				RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
				ui4_1 = loc1;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
				loc8 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc7 == loc8)) {
					RTHOOK(16);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				} else {
					RTHOOK(17);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(17,1);
					uu4_1 = loc7;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
					if (tb1) {
						RTHOOK(18);
						RTDBGAL(7, 0x38000000, 1, 0); /* loc7 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(18,1);
						ti4_1 = (EIF_INTEGER_32) loc7;
						ui4_1 = ti4_1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6644, "upper_code", tr1))(tr1, ui4_1x)).it_i4);
						tu4_1 = (EIF_NATURAL_32) ti4_1;
						loc7 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(19);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(19,1);
					uu4_1 = loc8;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr1))(tr1, uu4_1x)).it_b);
					if (tb1) {
						RTHOOK(20);
						RTDBGAL(8, 0x38000000, 1, 0); /* loc8 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(20,1);
						ti4_1 = (EIF_INTEGER_32) loc8;
						ui4_1 = ti4_1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6644, "upper_code", tr1))(tr1, ui4_1x)).it_i4);
						tu4_1 = (EIF_NATURAL_32) ti4_1;
						loc8 = (EIF_NATURAL_32) tu4_1;
					}
					RTHOOK(21);
					if ((EIF_BOOLEAN)(loc7 == loc8)) {
						RTHOOK(22);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					} else {
						RTHOOK(23);
						if ((EIF_BOOLEAN) (loc7 < loc8)) {
							RTHOOK(24);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(25);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(26);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(27);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(28);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(29);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
			RTHOOK(30);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(31);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(32);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(33);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(34);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		} else {
			RTHOOK(35);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
			loc3 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(36);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(6269, "count", arg2));
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(37);
			if ((EIF_BOOLEAN) (loc3 < loc4)) {
				RTHOOK(38);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
			} else {
				RTHOOK(39);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc4;
			}
			RTHOOK(40);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(41);
				if ((EIF_BOOLEAN) (loc1 > loc2)) break;
				RTHOOK(42);
				RTDBGAL(5, 0x1C000000, 1, 0); /* loc5 */
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
				tw1 = (EIF_CHARACTER_32) tc1;
				loc5 = (EIF_CHARACTER_32) tw1;
				RTHOOK(43);
				RTDBGAL(6, 0x1C000000, 1, 0); /* loc6 */
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg2))(arg2, ui4_1x)).it_c1);
				tw1 = (EIF_CHARACTER_32) tc1;
				loc6 = (EIF_CHARACTER_32) tw1;
				RTHOOK(44);
				if ((EIF_BOOLEAN)(loc5 == loc6)) {
					RTHOOK(45);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
				} else {
					RTHOOK(46);
					RTDBGAL(5, 0x1C000000, 1, 0); /* loc5 */
					tr1 = RTLN(eif_new_type(341, 0x00).id);
					*(EIF_CHARACTER_32 *)tr1 = loc5;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5967, "upper", tr1))(tr1)).it_c4);
					loc5 = (EIF_CHARACTER_32) tw1;
					RTHOOK(47);
					RTDBGAL(6, 0x1C000000, 1, 0); /* loc6 */
					tr1 = RTLN(eif_new_type(341, 0x00).id);
					*(EIF_CHARACTER_32 *)tr1 = loc6;
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5967, "upper", tr1))(tr1)).it_c4);
					loc6 = (EIF_CHARACTER_32) tw1;
					RTHOOK(48);
					if ((EIF_BOOLEAN)(loc5 == loc6)) {
						RTHOOK(49);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1++;
					} else {
						RTHOOK(50);
						if ((EIF_BOOLEAN) (loc5 < loc6)) {
							RTHOOK(51);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(52);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
							RTHOOK(53);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(54);
							RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
							loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
							RTHOOK(55);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
							RTHOOK(56);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						}
					}
				}
			}
			RTHOOK(57);
			if ((EIF_BOOLEAN) !loc9) {
				RTHOOK(58);
				if ((EIF_BOOLEAN) (loc3 < loc4)) {
					RTHOOK(59);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
				} else {
					RTHOOK(60);
					if ((EIF_BOOLEAN)(loc3 != loc4)) {
						RTHOOK(61);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(62);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.cloned_string */
EIF_TYPED_VALUE F290_5663 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cloned_string";
	RTEX;
#define arg1 arg1x.it_r
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
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 289, Current, 0, 1, 8666);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8666);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("cloned_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("same_type", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_equal", EX_POST);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", Result))(Result, ur1x)).it_b);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {KL_STRING_ROUTINES}.appended_string */
EIF_TYPED_VALUE F290_5664 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "appended_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(18);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,tr8);
	RTLR(10,Current);
	RTLR(11,tr9);
	RTLR(12,tr10);
	RTLR(13,ur1);
	RTLR(14,ur2);
	RTLR(15,Result);
	RTLR(16,loc1);
	RTLR(17,loc2);
	RTLIU(18);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 2, 8667);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8667);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr4 = tr5;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_4 = ti4_5;
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		RTE_OT
		tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr7 = tr8;
		tr8 = NULL;
		RTE_O
		tr8 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr10 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr10);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr9))(tr9, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4831, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr9);
	} else {
		RTHOOK(5);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(eif_new_type(357, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTHOOK(6);
			ur1 = RTCCL(arg2);
			tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4844, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr9);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6217, "append_string_general", loc1))(loc1, ur1x);
			RTHOOK(7);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc1);
		} else {
			RTHOOK(8);
			tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr9);
			loc2 = RTRV(eif_new_type(357, 0x01),loc2);
			if (EIF_TEST(loc2)) {
				RTHOOK(9);
				ur1 = RTCCL(arg2);
				tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4844, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr9);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6217, "append_string_general", loc2))(loc2, ur1x);
				RTHOOK(10);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc2);
			} else {
				RTHOOK(11);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg2);
				tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4831, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr9);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("new_count", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		RTCO(tr3);
		ui4_2 = ti4_3;
		tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr9);
		RTCO(tr5);
		ur2 = RTCCL(tr4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("final", EX_POST);
		RTCO(tr6);
		ui4_1 = (EIF_INTEGER_32) (ti4_4 + ((EIF_INTEGER_32) 1L));
		ti4_5 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ui4_2 = ti4_5;
		tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr9);
		RTCO(tr8);
		ur2 = RTCCL(tr7);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
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
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.appended_string_8 */
EIF_TYPED_VALUE F290_5665 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "appended_string_8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,tr8);
	RTLR(10,loc1);
	RTLR(11,ur1);
	RTLR(12,Result);
	RTLR(13,loc2);
	RTLR(14,ur2);
	RTLR(15,Current);
	RTLR(16,tr9);
	RTLR(17,loc3);
	RTLR(18,loc4);
	RTLIU(19);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 289, Current, 4, 2, 8668);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8668);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		RTE_OT
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr4 = tr5;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_4 = ti4_5;
		tr6 = NULL;
		RTE_O
		tr6 = RTLA;
		RTE_OE
		RTE_OT
		tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr7 = tr8;
		tr8 = NULL;
		RTE_O
		tr8 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(400, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6217, "append_string_general", loc1))(loc1, ur1x);
		RTHOOK(5);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(6);
		loc2 = RTCCL(arg2);
		loc2 = RTRV(eif_new_type(400, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(7);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4820, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr9);
		} else {
			RTHOOK(8);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(357, 0x01),loc3);
			loc4 = RTCCL(arg2);
			loc4 = RTRV(eif_new_type(355, 0x01),loc4);
			if ((EIF_BOOLEAN) (EIF_TEST(loc3) && EIF_TEST(loc4))) {
				RTHOOK(9);
				ur1 = RTCCL(loc4);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6295, "append_string", loc3))(loc3, ur1x);
				RTHOOK(10);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc3);
			} else {
				RTHOOK(11);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg2);
				tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4820, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr9);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("new_count", EX_POST);
		ti4_5 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		RTCO(tr1);
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_5 == (EIF_INTEGER_32) (ti4_1 + ti4_2))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		RTCO(tr3);
		ui4_2 = ti4_3;
		tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr9);
		RTCO(tr5);
		ur2 = RTCCL(tr4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("final", EX_POST);
		RTCO(tr6);
		ui4_1 = (EIF_INTEGER_32) (ti4_4 + ((EIF_INTEGER_32) 1L));
		ti4_5 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ui4_2 = ti4_5;
		tr9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr9);
		RTCO(tr8);
		ur2 = RTCCL(tr7);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
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
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.appended_substring */
EIF_TYPED_VALUE F290_5666 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "appended_substring";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(17);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,Current);
	RTLR(10,tr8);
	RTLR(11,tr9);
	RTLR(12,ur1);
	RTLR(13,ur2);
	RTLR(14,Result);
	RTLR(15,loc1);
	RTLR(16,loc2);
	RTLIU(17);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 4, 8669);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8669);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_3 = ti4_4;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ui4_1 = arg3;
		ui4_2 = arg4;
		tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr6 = tr7;
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tr9 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr9);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr8))(tr8, ur1x)).it_b);
	if (tb1) {
		RTHOOK(7);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4833, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr8);
	} else {
		RTHOOK(8);
		loc1 = RTCCL(arg1);
		loc1 = RTRV(eif_new_type(357, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTHOOK(9);
			ur1 = RTCCL(arg2);
			tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4844, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr8);
			ui4_1 = arg3;
			ui4_2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6218, "append_substring_general", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
			RTHOOK(10);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc1);
		} else {
			RTHOOK(11);
			tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr8);
			loc2 = RTRV(eif_new_type(357, 0x01),loc2);
			if (EIF_TEST(loc2)) {
				RTHOOK(12);
				ur1 = RTCCL(arg2);
				tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4844, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr8);
				ui4_1 = arg3;
				ui4_2 = arg4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6218, "append_substring_general", loc2))(loc2, ur1x, ui4_1x, ui4_2x);
				RTHOOK(13);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc2);
			} else {
				RTHOOK(14);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg2);
				ui4_1 = arg3;
				ui4_2 = arg4;
				tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4833, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr8);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg4) - arg3) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		RTCO(tr2);
		ui4_2 = ti4_2;
		tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr8);
		RTCO(tr4);
		ur2 = RTCCL(tr3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("final", EX_POST);
		RTCO(tr5);
		ui4_1 = (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L));
		ti4_4 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ui4_2 = ti4_4;
		tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr8);
		RTCO(tr7);
		ur2 = RTCCL(tr6);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
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
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.appended_substring_8 */
EIF_TYPED_VALUE F290_5667 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "appended_substring_8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
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
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLR(6,tr5);
	RTLR(7,tr6);
	RTLR(8,tr7);
	RTLR(9,loc2);
	RTLR(10,ur1);
	RTLR(11,Result);
	RTLR(12,loc3);
	RTLR(13,loc1);
	RTLR(14,tr8);
	RTLR(15,loc4);
	RTLR(16,loc5);
	RTLR(17,ur2);
	RTLR(18,Current);
	RTLIU(19);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 289, Current, 5, 4, 8670);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8670);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr4;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ti4_3 = ti4_4;
		tr5 = NULL;
		RTE_O
		tr5 = RTLA;
		RTE_OE
		RTE_OT
		ui4_1 = arg3;
		ui4_2 = arg4;
		tr7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr6 = tr7;
		tr7 = NULL;
		RTE_O
		tr7 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	loc2 = RTCCL(arg1);
	loc2 = RTRV(eif_new_type(400, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(7);
		ur1 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7270, "gobo_append_substring", loc2))(loc2, ur1x, ui4_1x, ui4_2x);
		RTHOOK(8);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc2);
	} else {
		RTHOOK(9);
		loc3 = RTCCL(arg2);
		loc3 = RTRV(eif_new_type(400, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(10);
			RTDBGAL(1, 0xF8000190, 0, 0); /* loc1 */
			ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_4 + arg4) - arg3) + ((EIF_INTEGER_32) 1L));
			tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7255, "new_empty_string", loc3))(loc3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr8);
			RTHOOK(11);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6217, "append_string_general", loc1))(loc1, ur1x);
			RTHOOK(12);
			ur1 = RTCCL(arg2);
			ui4_1 = arg3;
			ui4_2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7270, "gobo_append_substring", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
			RTHOOK(13);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc1);
		} else {
			RTHOOK(14);
			loc4 = RTCCL(arg1);
			loc4 = RTRV(eif_new_type(357, 0x01),loc4);
			loc5 = RTCCL(arg2);
			loc5 = RTRV(eif_new_type(355, 0x01),loc5);
			if ((EIF_BOOLEAN) (EIF_TEST(loc4) && EIF_TEST(loc5))) {
				RTHOOK(15);
				ur1 = RTCCL(loc5);
				ui4_1 = arg3;
				ui4_2 = arg4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6294, "append_substring", loc4))(loc4, ur1x, ui4_1x, ui4_2x);
				RTHOOK(16);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc4);
			} else {
				RTHOOK(17);
				RTDBGAL(1, 0xF8000190, 0, 0); /* loc1 */
				tr8 = RTLN(eif_new_type(400, 0x01).id);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7240, Dtype(tr8)))(tr8, ur1x);
				RTNHOOK(17,1);
				loc1 = (EIF_REFERENCE) RTCCL(tr8);
				RTHOOK(18);
				ur1 = RTCCL(arg2);
				ui4_1 = arg3;
				ui4_2 = arg4;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7270, "gobo_append_substring", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
				RTHOOK(19);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc1);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("append_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(21);
		RTCT("new_count", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + arg4) - arg3) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(22);
		RTCT("initial", EX_POST);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		RTCO(tr2);
		ui4_2 = ti4_2;
		tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr8);
		RTCO(tr4);
		ur2 = RTCCL(tr3);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(23);
		RTCT("final", EX_POST);
		RTCO(tr5);
		ui4_1 = (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 1L));
		ti4_4 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ui4_2 = ti4_4;
		tr8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", Result))(Result, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr8);
		RTCO(tr7);
		ur2 = RTCCL(tr6);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.append_substring_to_string */
void F290_5668 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "append_substring_to_string";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(12);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,tr5);
	RTLR(8,loc3);
	RTLR(9,ur1);
	RTLR(10,tr6);
	RTLR(11,Current);
	RTLIU(12);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 289, Current, 3, 4, 8671);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8671);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(354, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_codes", EX_PRE);
		RTNHOOK(3,1);
		ui4_1 = arg4;
		tr1 = RTLN(eif_new_type(317, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = arg3;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5570, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc2))(loc2)).it_b);
			if (tb2) break;
			RTHOOK(4);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc2))(loc2)).it_i4);
			ti4_2 = ti4_1;
			ui4_1 = ti4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6120, "valid_code", arg1))(arg1, uu4_1x)).it_b);
			tb1 = tb3;
			RTNHOOK(4,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc2))(loc2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("valid_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ui4_1 = arg3;
		ui4_2 = arg4;
		tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg2))(arg2, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", tr4))(tr4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = tr5;
		tr4 = NULL;
		RTE_O
		tr4 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(8);
	loc3 = RTCCL(arg1);
	loc3 = RTRV(eif_new_type(400, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(9);
		ur1 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7270, "gobo_append_substring", loc3))(loc3, ur1x, ui4_1x, ui4_2x);
	} else {
		RTHOOK(10);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) arg3;
		for (;;) {
			RTHOOK(11);
			if ((EIF_BOOLEAN) (loc1 > arg4)) break;
			RTHOOK(12);
			ui4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6206, "append_code", arg1))(arg1, uu4_1x);
			RTHOOK(13);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("appended", EX_POST);
		tr5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTCO(tr2);
		RTCO(tr4);
		ur1 = RTCCL(tr3);
		tr6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6334, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr6);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr5))(tr5, ur1x)).it_b);
		if (tb1) {
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
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.replaced_substring */
EIF_TYPED_VALUE F290_5669 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "replaced_substring";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,Result);
	RTLR(10,loc2);
	RTLR(11,loc1);
	RTLR(12,loc3);
	RTLR(13,loc4);
	RTLIU(14);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 289, Current, 4, 4, 8672);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8672);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg3), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(arg2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4830, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		ui4_1 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_2 = ti4_1;
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4830, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tr4 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr3))(tr3, ur1x)).it_b);
	if (tb1) {
		RTHOOK(7);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4836, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr3);
	} else {
		RTHOOK(8);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(361, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(9);
			RTDBGAL(1, 0xF8000169, 0, 0); /* loc1 */
			loc1 = (EIF_REFERENCE) RTCCL(loc2);
		} else {
			RTHOOK(10);
			RTDBGAL(1, 0xF8000169, 0, 0); /* loc1 */
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr3);
		}
		RTHOOK(11);
		ur1 = RTCCL(arg2);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4844, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = RTCCL(tr3);
		loc3 = RTRV(eif_new_type(359, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(12);
			ur1 = RTCCL(loc3);
			ui4_1 = arg3;
			ui4_2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6358, "replace_substring", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
		} else {
			RTHOOK(13);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ui4_1 = arg3;
			ui4_2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6358, "replace_substring", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
		}
		RTHOOK(14);
		loc4 = RTCCL(loc1);
		loc4 = RTRV(eif_new_type(357, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(15);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc4);
		} else {
			RTHOOK(16);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(arg1);
			ur2 = RTCCL(arg2);
			ui4_1 = arg3;
			ui4_2 = arg4;
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4836, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr3);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("replaced_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("replaced", EX_POST);
		ur1 = RTCCL(Result);
		RTCO(tr2);
		ur2 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.replaced_substring_8 */
EIF_TYPED_VALUE F290_5670 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "replaced_substring_8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,tr3);
	RTLR(8,loc1);
	RTLR(9,Result);
	RTLR(10,loc2);
	RTLR(11,loc3);
	RTLR(12,tr4);
	RTLIU(13);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 289, Current, 3, 4, 8673);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8673);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_start_index", EX_PRE);
		RTTE((EIF_BOOLEAN) (((EIF_INTEGER_32) 1L) <= arg3), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_end_index", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("meaningful_interval", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L));
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		ur2 = RTCCL(arg2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4831, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		ui4_1 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L));
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_2 = ti4_1;
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr3);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4831, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(6);
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(400, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(7);
		ur1 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7279, "replace_substring_by_string", loc1))(loc1, ur1x, ui4_1x, ui4_2x);
		RTHOOK(8);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(9);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(357, 0x01),loc2);
		loc3 = RTCCL(arg2);
		loc3 = RTRV(eif_new_type(355, 0x01),loc3);
		if ((EIF_BOOLEAN) (EIF_TEST(loc2) && EIF_TEST(loc3))) {
			RTHOOK(10);
			ur1 = RTCCL(loc3);
			ui4_1 = arg3;
			ui4_2 = arg4;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6281, "replace_substring", loc2))(loc2, ur1x, ui4_1x, ui4_2x);
			RTHOOK(11);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc2);
		} else {
			RTHOOK(12);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = (EIF_INTEGER_32) (arg3 - ((EIF_INTEGER_32) 1L));
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ur2 = RTCCL(arg2);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4831, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ui4_1 = (EIF_INTEGER_32) (arg4 + ((EIF_INTEGER_32) 1L));
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_2 = ti4_1;
			tr4 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr4);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4831, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr3);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("replaced_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("replaced", EX_POST);
		ur1 = RTCCL(Result);
		RTCO(tr2);
		ur2 = RTCCL(tr1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4822, dtype))(Current, ur1x, ur2x)).it_b);
		if (tb1) {
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
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.replaced_all_substrings */
EIF_TYPED_VALUE F290_5671 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "replaced_all_substrings";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,loc6);
	RTLR(7,tr1);
	RTLR(8,Result);
	RTLR(9,loc7);
	RTLR(10,tr2);
	RTLR(11,loc8);
	RTLR(12,loc5);
	RTLIU(13);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 289, Current, 8, 3, 8674);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8674);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTCC(arg3, 289, l_feature_name, 3, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = loc3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4817, dtype))(Current, ur1x, ur2x, ui4_1x)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		loc6 = RTCCL(arg1);
		loc6 = RTRV(eif_new_type(357, 0x01),loc6);
		if (EIF_TEST(loc6)) {
			RTHOOK(10);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(loc6);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4811, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(11);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(357, 0x01).id);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(Result);
			ur2 = RTCCL(arg1);
			ui4_1 = loc3;
			ui4_2 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4832, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(14);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(Result);
			ur2 = RTCCL(arg3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4830, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc2);
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc3 > loc1)) {
				RTHOOK(17);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(18);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg2);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4817, dtype))(Current, ur1x, ur2x, ui4_1x)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
			}
		}
		RTHOOK(19);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = loc3;
		ui4_2 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4832, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(20);
			RTCT("not_found", EX_CHECK);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(21);
		loc7 = RTCCL(arg1);
		loc7 = RTRV(eif_new_type(357, 0x01),loc7);
		if (EIF_TEST(loc7)) {
			RTHOOK(22);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc7);
		} else {
			RTHOOK(23);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(23,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
			if ((EIF_BOOLEAN) !tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc8 = RTCCL(tr1);
				loc8 = RTRV(eif_new_type(357, 0x01),loc8);
				tb1 = EIF_TEST(loc8);
			}
			if (tb1) {
				RTHOOK(24);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc8);
			} else {
				RTHOOK(25);
				RTDBGAL(5, 0xF8000165, 0, 0); /* loc5 */
				tr1 = RTLN(eif_new_type(400, 0x01).id);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7240, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(25,1);
				loc5 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(26);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc5);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("replaced_all_substrings_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.replaced_all_substrings_8 */
EIF_TYPED_VALUE F290_5672 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "replaced_all_substrings_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,loc5);
	RTLR(7,tr1);
	RTLR(8,Result);
	RTLR(9,loc6);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 289, Current, 6, 3, 8675);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8675);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTCC(arg3, 289, l_feature_name, 3, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = loc3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4817, dtype))(Current, ur1x, ur2x, ui4_1x)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(7);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		loc5 = RTCCL(arg1);
		loc5 = RTRV(eif_new_type(357, 0x01),loc5);
		if (EIF_TEST(loc5)) {
			RTHOOK(10);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(loc5);
			ui4_1 = loc1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4812, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(11);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(357, 0x01).id);
			ui4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(Result);
			ur2 = RTCCL(arg1);
			ui4_1 = loc3;
			ui4_2 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4833, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(14);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(Result);
			ur2 = RTCCL(arg3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4831, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(15);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc4 + loc2);
			RTHOOK(16);
			if ((EIF_BOOLEAN) (loc3 > loc1)) {
				RTHOOK(17);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			} else {
				RTHOOK(18);
				RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
				ur1 = RTCCL(arg1);
				ur2 = RTCCL(arg2);
				ui4_1 = loc3;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4817, dtype))(Current, ur1x, ur2x, ui4_1x)).it_i4);
				loc4 = (EIF_INTEGER_32) ti4_1;
			}
		}
		RTHOOK(19);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = loc3;
		ui4_2 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4833, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(20);
			RTCT("not_found", EX_CHECK);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(21);
		loc6 = RTCCL(arg1);
		loc6 = RTRV(eif_new_type(357, 0x01),loc6);
		if (EIF_TEST(loc6)) {
			RTHOOK(22);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc6);
		} else {
			RTHOOK(23);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(400, 0x01).id);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7240, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(23,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("replaced_all_substrings_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.replaced_first_substring */
EIF_TYPED_VALUE F290_5673 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "replaced_first_substring";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
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
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,loc5);
	RTLR(7,tr1);
	RTLR(8,Result);
	RTLR(9,loc6);
	RTLR(10,tr2);
	RTLR(11,loc7);
	RTLR(12,loc4);
	RTLIU(13);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 289, Current, 7, 3, 8676);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8676);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTCC(arg3, 289, l_feature_name, 3, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4817, dtype))(Current, ur1x, ur2x, ui4_1x)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		loc5 = RTCCL(arg1);
		loc5 = RTRV(eif_new_type(357, 0x01),loc5);
		if (EIF_TEST(loc5)) {
			RTHOOK(9);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(loc5);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg3))(arg3)).it_i4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) + ti4_1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4811, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(10);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(357, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg3))(arg3)).it_i4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) + ti4_1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(11);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4832, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(12);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4830, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + loc2);
		ui4_2 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4832, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(14);
			RTCT("not_found", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(15);
		loc6 = RTCCL(arg1);
		loc6 = RTRV(eif_new_type(357, 0x01),loc6);
		if (EIF_TEST(loc6)) {
			RTHOOK(16);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc6);
		} else {
			RTHOOK(17);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(17,1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
			if ((EIF_BOOLEAN) !tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc7 = RTCCL(tr1);
				loc7 = RTRV(eif_new_type(357, 0x01),loc7);
				tb1 = EIF_TEST(loc7);
			}
			if (tb1) {
				RTHOOK(18);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc7);
			} else {
				RTHOOK(19);
				RTDBGAL(4, 0xF8000165, 0, 0); /* loc4 */
				tr1 = RTLN(eif_new_type(400, 0x01).id);
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7240, Dtype(tr1)))(tr1, ur1x);
				RTNHOOK(19,1);
				loc4 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(20);
				RTDBGAL(0, 0xF8000165, 0,0); /* Result */
				Result = (EIF_REFERENCE) RTCCL(loc4);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("replaced_first_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.replaced_first_substring_8 */
EIF_TYPED_VALUE F290_5674 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "replaced_first_substring_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLR(7,tr1);
	RTLR(8,Result);
	RTLR(9,loc5);
	RTLIU(10);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 289, Current, 5, 3, 8677);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8677);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTCC(arg2, 289, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTCC(arg3, 289, l_feature_name, 3, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_new_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4817, dtype))(Current, ur1x, ur2x, ui4_1x)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		loc4 = RTCCL(arg1);
		loc4 = RTRV(eif_new_type(357, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(9);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			ur1 = RTCCL(loc4);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg3))(arg3)).it_i4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) + ti4_1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4812, dtype))(Current, ur1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(10);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(357, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg3))(arg3)).it_i4);
			ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - loc2) + ti4_1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(11);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4833, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(12);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4831, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		ur1 = RTCCL(Result);
		ur2 = RTCCL(arg1);
		ui4_1 = (EIF_INTEGER_32) (loc3 + loc2);
		ui4_2 = loc1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4833, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(14);
			RTCT("not_found", EX_CHECK);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(15);
		loc5 = RTCCL(arg1);
		loc5 = RTRV(eif_new_type(357, 0x01),loc5);
		if (EIF_TEST(loc5)) {
			RTHOOK(16);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc5);
		} else {
			RTHOOK(17);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(400, 0x01).id);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7240, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(17,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("replaced_first_substring_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.as_readable_string_8_no_uc_string */
EIF_TYPED_VALUE F290_5675 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "as_readable_string_8_no_uc_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 1, 8678);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8678);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
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
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(400, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000163, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7287, "as_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0xF8000163, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(arg1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("as_readable_string_8_no_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("aliasing", EX_POST);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(400, 0x01),loc2);
		if ((!((EIF_BOOLEAN) !EIF_TEST(loc2)) || (RTCEQ(Result, arg1)))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef arg1
}

/* {KL_STRING_ROUTINES}.as_string_8_no_uc_string */
EIF_TYPED_VALUE F290_5676 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "as_string_8_no_uc_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 1, 8679);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8679);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(400, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7287, "as_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(arg1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("as_string_8_no_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("aliasing", EX_POST);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(400, 0x01),loc2);
		if ((!((EIF_BOOLEAN) !EIF_TEST(loc2)) || (RTCEQ(Result, arg1)))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef arg1
}

/* {KL_STRING_ROUTINES}.as_string_no_uc_string */
EIF_TYPED_VALUE F290_5677 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "as_string_no_uc_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
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
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLR(7,Result);
	RTLR(8,loc3);
	RTLIU(9);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 289, Current, 3, 1, 8680);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8680);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(400, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			loc2 = RTRV(eif_new_type(357, 0x01),loc2);
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			Result = (EIF_REFERENCE) RTCCL(loc2);
		} else {
			RTHOOK(5);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7287, "as_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(6);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(arg1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("as_string_no_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("aliasing", EX_POST);
		loc3 = RTCCL(arg1);
		loc3 = RTRV(eif_new_type(400, 0x01),loc3);
		if ((!((EIF_BOOLEAN) !EIF_TEST(loc3)) || (RTCEQ(Result, arg1)))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {KL_STRING_ROUTINES}.as_readable_string_general_no_uc_string */
EIF_TYPED_VALUE F290_5678 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "as_readable_string_general_no_uc_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
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
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,Result);
	RTLR(7,loc2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 1, 8681);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8681);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(400, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr2);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(4);
			RTDBGAL(0, 0xF8000160, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7287, "as_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(5);
			RTDBGAL(0, 0xF8000160, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6167, "to_string_32", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(6);
		RTDBGAL(0, 0xF8000160, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(arg1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("as_readable_string_general_no_uc_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("aliasing", EX_POST);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(400, 0x01),loc2);
		if ((!((EIF_BOOLEAN) !EIF_TEST(loc2)) || (RTCEQ(Result, arg1)))) {
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
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef arg1
}

/* {KL_STRING_ROUTINES}.as_string */
EIF_TYPED_VALUE F290_5679 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "as_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLR(6,loc2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 1, 8682);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8682);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
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
	tb1 = '\0';
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(357, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4854, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		Result = (EIF_REFERENCE) RTCCL(loc1);
	} else {
		RTHOOK(4);
		loc2 = RTCCL(arg1);
		loc2 = RTRV(eif_new_type(400, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7287, "as_string", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(6);
			RTDBGAL(0, 0xF8000165, 0,0); /* Result */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6249, "string", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("as_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("string_type", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("aliasing", EX_POST);
		tb1 = '\01';
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		if (tb2) {
			tb1 = RTCEQ(Result, arg1);
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
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {KL_STRING_ROUTINES}.hexadecimal_to_integer */
EIF_TYPED_VALUE F290_5680 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hexadecimal_to_integer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 289, Current, 2, 1, 8630);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8630);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("hexadecimal", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4809, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result *= ((EIF_INTEGER_32) 16L);
		RTHOOK(7);
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
		switch (tw1) {
			case (EIF_CHARACTER_8) '0':
				break;
			case (EIF_CHARACTER_8) '1':
				RTHOOK(8);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result++;
				break;
			case (EIF_CHARACTER_8) '2':
				RTHOOK(9);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 2L);
				break;
			case (EIF_CHARACTER_8) '3':
				RTHOOK(10);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 3L);
				break;
			case (EIF_CHARACTER_8) '4':
				RTHOOK(11);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 4L);
				break;
			case (EIF_CHARACTER_8) '5':
				RTHOOK(12);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 5L);
				break;
			case (EIF_CHARACTER_8) '6':
				RTHOOK(13);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 6L);
				break;
			case (EIF_CHARACTER_8) '7':
				RTHOOK(14);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 7L);
				break;
			case (EIF_CHARACTER_8) '8':
				RTHOOK(15);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 8L);
				break;
			case (EIF_CHARACTER_8) '9':
				RTHOOK(16);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 9L);
				break;
			case (EIF_CHARACTER_8) 'A':
			case (EIF_CHARACTER_8) 'a':
				RTHOOK(17);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 10L);
				break;
			case (EIF_CHARACTER_8) 'B':
			case (EIF_CHARACTER_8) 'b':
				RTHOOK(18);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 11L);
				break;
			case (EIF_CHARACTER_8) 'C':
			case (EIF_CHARACTER_8) 'c':
				RTHOOK(19);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 12L);
				break;
			case (EIF_CHARACTER_8) 'D':
			case (EIF_CHARACTER_8) 'd':
				RTHOOK(20);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 13L);
				break;
			case (EIF_CHARACTER_8) 'E':
			case (EIF_CHARACTER_8) 'e':
				RTHOOK(21);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 14L);
				break;
			case (EIF_CHARACTER_8) 'F':
			case (EIF_CHARACTER_8) 'f':
				RTHOOK(22);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result += ((EIF_INTEGER_32) 15L);
				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(23);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ui4_1
#undef arg1
}

/* {KL_STRING_ROUTINES}.to_integer_64 */
EIF_TYPED_VALUE F290_5681 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_integer_64";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_INT64, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 289, Current, 0, 1, 8631);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8631);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("integer_64_string", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4808, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x24000000, 1,0); /* Result */
	ti8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6174, "to_integer_64", arg1))(arg1)).it_i8);
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef ur1
#undef arg1
}

/* {KL_STRING_ROUTINES}.left_adjust */
void F290_5682 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "left_adjust";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
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
	
	RTEAA(l_feature_name, 289, Current, 2, 1, 8632);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8632);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(354, 0x01), 0x01);
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
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
		switch (tw1) {
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				RTHOOK(6);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
				break;
			default:
				RTHOOK(7);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				break;
		}
	}
	RTHOOK(8);
	ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6231, "remove_head", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("left_adjusted", EX_POST);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			ui4_1 = ((EIF_INTEGER_32) 1L);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
			if ((EIF_BOOLEAN)(tw1 != tw2)) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
				tb4 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb4) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				tb3 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb3) {
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				tb2 = (EIF_BOOLEAN)(tw1 != tw2);
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
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {KL_STRING_ROUTINES}.right_adjust */
void F290_5683 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "right_adjust";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
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
	
	RTEAA(l_feature_name, 289, Current, 2, 1, 8633);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8633);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(354, 0x01), 0x01);
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
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		ui4_1 = loc2;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
		switch (tw1) {
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				RTHOOK(6);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2--;
				break;
			default:
				RTHOOK(7);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				break;
		}
	}
	RTHOOK(8);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6225, "keep_head", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("right_adjusted", EX_POST);
		tb1 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
			tb2 = '\0';
			tb3 = '\0';
			tb4 = '\0';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_1 = ti4_1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
			if ((EIF_BOOLEAN)(tw1 != tw2)) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
				ui4_1 = ti4_1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
				tb4 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb4) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
				ui4_1 = ti4_1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				tb3 = (EIF_BOOLEAN)(tw1 != tw2);
			}
			if (tb3) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
				ui4_1 = ti4_1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				tb2 = (EIF_BOOLEAN)(tw1 != tw2);
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
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef arg1
}

/* {KL_STRING_ROUTINES}.wipe_out */
void F290_5684 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "wipe_out";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 289, Current, 0, 1, 8634);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8634);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(354, 0x01), 0x01);
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
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6225, "keep_head", arg1))(arg1, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("wiped_out", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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
#undef arg1
}

/* {KL_STRING_ROUTINES}.prune_all_trailing */
void F290_5685 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "prune_all_trailing";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_c4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c4 = * (EIF_CHARACTER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_CHAR32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 289, Current, 0, 2, 8635);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8635);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(354, 0x01), 0x01);
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
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", arg1))(arg1)).it_b);
		if (!tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_1 = ti4_1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
			tb1 = (EIF_BOOLEAN)(tw1 != arg2);
		}
		if (tb1) break;
		RTHOOK(3);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6233, "remove_tail", arg1))(arg1, ui4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_more_trailing", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", arg1))(arg1)).it_b);
		if (!tb3) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
			ui4_1 = ti4_1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
			tb2 = (EIF_BOOLEAN)(tw1 != arg2);
		}
		if (tb2) {
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
	RTLO(4);
	RTEE;
#undef ui4_1
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.resize_buffer */
void F290_5686 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "resize_buffer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 289, Current, 1, 2, 8636);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8636);
	RTCC(arg1, 289, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n_large_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		RTTE((EIF_BOOLEAN) (arg2 >= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 - ti4_1);
	RTHOOK(5);
	ui4_1 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6235, "resize", arg1))(arg1, ui4_1x);
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(7);
		uc1 = (EIF_CHARACTER_8) '#';
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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
#undef ur1
#undef ui4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {KL_STRING_ROUTINES}.dummy_string */
RTOID (F290_5687)


EIF_TYPED_VALUE F290_5687 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F290_5687,8638,RTMS_EX_H("",0,0));
}

/* {KL_STRING_ROUTINES}.dummy_string_8 */
RTOID (F290_5688)


EIF_TYPED_VALUE F290_5688 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F290_5688,8639,RTMS_EX_H("",0,0));
}

/* {KL_STRING_ROUTINES}.max_integer_64_digits */
RTOID (F290_5689)
EIF_TYPED_VALUE F290_5689 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "max_integer_64_digits";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F290_5689);
	dtype = Dtype(Current);

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 289, Current, 0, 0, 8639);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8639);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000404, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 19L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1025,341,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 19L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
	*((EIF_CHARACTER_32 *)tr2+0) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+1) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+2) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+3) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+4) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+5) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+6) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	*((EIF_CHARACTER_32 *)tr2+7) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+8) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '6';
	*((EIF_CHARACTER_32 *)tr2+9) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+10) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '5';
	*((EIF_CHARACTER_32 *)tr2+11) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '4';
	*((EIF_CHARACTER_32 *)tr2+12) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+13) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+14) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '5';
	*((EIF_CHARACTER_32 *)tr2+15) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+16) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	*((EIF_CHARACTER_32 *)tr2+17) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+18) = (EIF_CHARACTER_32) tw1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(5149, Dtype(tr2)))(tr2).it_r;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("ninteen_digits", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 19L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

/* {KL_STRING_ROUTINES}.min_negative_integer_64_digits */
RTOID (F290_5690)
EIF_TYPED_VALUE F290_5690 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "min_negative_integer_64_digits";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F290_5690);
	dtype = Dtype(Current);

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 289, Current, 0, 0, 8640);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(289, Current, 8640);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF8000404, 0,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 19L);
	{
		static EIF_TYPE_INDEX typarr0[] = {1025,341,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_CHARACTER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 19L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
	*((EIF_CHARACTER_32 *)tr2+0) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+1) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+2) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+3) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+4) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+5) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '2';
	*((EIF_CHARACTER_32 *)tr2+6) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	*((EIF_CHARACTER_32 *)tr2+7) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '3';
	*((EIF_CHARACTER_32 *)tr2+8) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '6';
	*((EIF_CHARACTER_32 *)tr2+9) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+10) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '5';
	*((EIF_CHARACTER_32 *)tr2+11) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '4';
	*((EIF_CHARACTER_32 *)tr2+12) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+13) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '7';
	*((EIF_CHARACTER_32 *)tr2+14) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '5';
	*((EIF_CHARACTER_32 *)tr2+15) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+16) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	*((EIF_CHARACTER_32 *)tr2+17) = (EIF_CHARACTER_32) tw1;
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '8';
	*((EIF_CHARACTER_32 *)tr2+18) = (EIF_CHARACTER_32) tw1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(5149, Dtype(tr2)))(tr2).it_r;
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("ninteen_digits", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4435, "count", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 19L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef Result
}

void EIF_Minit290 (void)
{
	GTCX
	RTOTS (5687,F290_5687)
	RTOTS (5688,F290_5688)
	RTOTS (5689,F290_5689)
	RTOTS (5690,F290_5690)
}


#ifdef __cplusplus
}
#endif
