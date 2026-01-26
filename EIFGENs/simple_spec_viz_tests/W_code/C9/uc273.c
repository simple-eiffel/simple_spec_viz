/*
 * Code for class UC_UTF8_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F273_4580(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4581(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4582(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4583(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4584(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4585(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4586(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4587(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4588(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4589(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4590(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4591(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4592(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4593(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4594(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4595(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4596(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4597(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4598(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4599(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4600(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4601(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4602(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4603(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4604(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4605(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4606(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4607(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4608(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4609(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4610(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4611(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4612(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4613(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F273_4614(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F273_4615(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F273_4616(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F273_4617(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F273_4618(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4619(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4620(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4621(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4622(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4623(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4624(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4625(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4626(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4627(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4628(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4629(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4630(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4631(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4632(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4633(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4634(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4635(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4636(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4637(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4638(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4639(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4640(EIF_REFERENCE);
extern EIF_TYPED_VALUE F273_4641(EIF_REFERENCE);
extern void EIF_Minit273(void);

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

/* {UC_UTF8_ROUTINES}.valid_utf8 */
EIF_TYPED_VALUE F273_4580 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "valid_utf8";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4609);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4609);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_2 = ti4_1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4146, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_b);
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
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.valid_utf8_substring */
EIF_TYPED_VALUE F273_4581 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "valid_utf8_substring";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc6 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc7 = (EIF_CHARACTER_8) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_TYPED_VALUE uc2x = {{0}, SK_CHAR8};
#define uc2 uc2x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_CHAR8, &loc6);
	RTLU(SK_CHAR8, &loc7);
	
	RTEAA(l_feature_name, 272, Current, 7, 3, 4610);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4610);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(7);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(8);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg3;
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(10);
		RTDBGAL(7, 0x08000000, 1, 0); /* loc7 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc7 = (EIF_CHARACTER_8) tc1;
		RTHOOK(11);
		uc1 = loc7;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4149, dtype))(Current, uc1x)).it_b);
		if (tb1) {
			RTHOOK(12);
			RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
			uc1 = loc7;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4166, dtype))(Current, uc1x)).it_i4);
			loc4 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(13);
			if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(14);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1++;
			} else {
				RTHOOK(15);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + loc4) - ((EIF_INTEGER_32) 1L));
				RTHOOK(16);
				if ((EIF_BOOLEAN) (loc3 > loc2)) {
					RTHOOK(17);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(18);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				} else {
					RTHOOK(19);
					RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
					uc1 = loc7;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4158, dtype))(Current, uc1x)).it_i4);
					loc5 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(20);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1++;
					RTHOOK(21);
					RTDBGAL(6, 0x08000000, 1, 0); /* loc6 */
					ui4_1 = loc1;
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
					loc6 = (EIF_CHARACTER_8) tc1;
					RTHOOK(22);
					uc1 = loc6;
					uc2 = loc7;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4151, dtype))(Current, uc1x, uc2x)).it_b);
					if ((EIF_BOOLEAN) !tb1) {
						RTHOOK(23);
						RTDBGAL(0, 0x04000000, 1,0); /* Result */
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(24);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(25);
						RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
						uc1 = loc6;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4160, dtype))(Current, uc1x)).it_i4);
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 * ((EIF_INTEGER_32) 64L)) + ti4_1);
						RTHOOK(26);
						switch (loc4) {
							case 2L:
								RTHOOK(27);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4186, dtype))(Current)).it_i4);
								if ((EIF_BOOLEAN) (loc5 <= ti4_1)) {
									RTHOOK(28);
									RTDBGAL(0, 0x04000000, 1,0); /* Result */
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
								break;
							case 3L:
								RTHOOK(29);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4184, dtype))(Current)).it_i4);
								if ((EIF_BOOLEAN) (loc5 <= ti4_1)) {
									RTHOOK(30);
									RTDBGAL(0, 0x04000000, 1,0); /* Result */
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
								break;
							case 4L:
								RTHOOK(31);
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4183, dtype))(Current)).it_i4);
								if ((EIF_BOOLEAN) (loc5 <= ti4_1)) {
									RTHOOK(32);
									RTDBGAL(0, 0x04000000, 1,0); /* Result */
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
								}
								break;
							default:
								RTEC(EN_WHEN);
						}
						RTHOOK(33);
						if (Result) {
							RTHOOK(34);
							RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
							loc1++;
							for (;;) {
								RTHOOK(35);
								if ((EIF_BOOLEAN) (loc1 > loc3)) break;
								RTHOOK(36);
								ui4_1 = loc1;
								tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
								uc1 = tc1;
								tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4150, dtype))(Current, uc1x)).it_b);
								if (tb1) {
									RTHOOK(37);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1++;
								} else {
									RTHOOK(38);
									RTDBGAL(0, 0x04000000, 1,0); /* Result */
									Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
									RTHOOK(39);
									RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
									loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
								}
							}
						}
					}
				}
			}
		} else {
			RTHOOK(40);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(41);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(42);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef uc2
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_string_8 */
EIF_TYPED_VALUE F273_4582 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_string_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_TYPED_VALUE uc2x = {{0}, SK_CHAR8};
#define uc2 uc2x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 272, Current, 3, 1, 4611);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4611);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_utf8_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(8);
		RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4166, dtype))(Current, uc1x)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 1L))) {
		} else {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 2L))) {
				RTHOOK(11);
				ui4_1 = loc1;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
				uc1 = tc1;
				ui4_1 = (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L));
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
				uc2 = tc2;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4162, dtype))(Current, uc1x, uc2x)).it_n4);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4199, dtype))(Current)).it_n4);
				if ((EIF_BOOLEAN) (tu4_1 > tu4_2)) {
					RTHOOK(12);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					RTHOOK(13);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				}
			} else {
				RTHOOK(14);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(15);
				RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
			}
		}
		RTHOOK(16);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 += loc3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui4_1
#undef uc1
#undef uc2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_string_32 */
EIF_TYPED_VALUE F273_4583 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_string_32";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4612);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4612);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_utf8_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_encoded_first_byte */
EIF_TYPED_VALUE F273_4584 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_encoded_first_byte";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 tc3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4613);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4613);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4185, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4191, dtype))(Current)).it_c1);
	tc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4197, dtype))(Current)).it_c1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 <= tc1) || (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc2 <= arg1) && (EIF_BOOLEAN) (arg1 <= tc3)));
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

/* {UC_UTF8_ROUTINES}.is_encoded_next_byte */
EIF_TYPED_VALUE F273_4585 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_encoded_next_byte";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4614);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4614);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4185, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4190, dtype))(Current)).it_c1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
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

/* {UC_UTF8_ROUTINES}.is_encoded_second_byte */
EIF_TYPED_VALUE F273_4586 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_encoded_second_byte";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 2, 4615);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4615);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_first_byte", EX_PRE);
		uc1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4149, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4193, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN)(arg2 == tc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0x04000000, 1,0); /* Result */
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4189, dtype))(Current)).it_c1);
		tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4190, dtype))(Current)).it_c1);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4194, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN)(arg2 == tc1)) {
			RTHOOK(5);
			RTDBGAL(0, 0x04000000, 1,0); /* Result */
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4185, dtype))(Current)).it_c1);
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4189, dtype))(Current)).it_c1);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
		} else {
			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4196, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN)(arg2 == tc1)) {
				RTHOOK(7);
				RTDBGAL(0, 0x04000000, 1,0); /* Result */
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4188, dtype))(Current)).it_c1);
				tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4190, dtype))(Current)).it_c1);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
			} else {
				RTHOOK(8);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4197, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN)(arg2 == tc1)) {
					RTHOOK(9);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4185, dtype))(Current)).it_c1);
					tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4188, dtype))(Current)).it_c1);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
				} else {
					RTHOOK(10);
					RTDBGAL(0, 0x04000000, 1,0); /* Result */
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4185, dtype))(Current)).it_c1);
					tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4190, dtype))(Current)).it_c1);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (tc1 < arg1) && (EIF_BOOLEAN) (arg1 <= tc2));
				}
			}
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
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_endian_detection_character */
EIF_TYPED_VALUE F273_4587 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "is_endian_detection_character";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
#define arg3 arg3x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_TYPED_VALUE uc2x = {{0}, SK_CHAR8};
#define uc2 uc2x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_c1 = * (EIF_CHARACTER_8 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU(SK_CHAR8,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 3, 4616);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4616);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	uc1 = arg1;
	uc2 = arg2;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4153, dtype))(Current, uc1x, uc2x)).it_b);
	if (tb2) {
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4202, dtype))(Current)).it_c1);
		tb1 = (EIF_BOOLEAN)(arg3 == tc1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_start", EX_POST);
		tb1 = '\01';
		if (Result) {
			uc1 = arg1;
			uc2 = arg2;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4153, dtype))(Current, uc1x, uc2x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4156, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(arg1 == tc1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4156, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,2);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb2 = (EIF_BOOLEAN)(arg2 == tc1);
		}
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4156, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,3);
			ui4_1 = ((EIF_INTEGER_32) 3L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(arg3 == tc1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef uc1
#undef uc2
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.is_endian_detection_character_start */
EIF_TYPED_VALUE F273_4588 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "is_endian_detection_character_start";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 2, 4617);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4617);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4200, dtype))(Current)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4201, dtype))(Current)).it_c1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == tc1) && (EIF_BOOLEAN)(arg2 == tc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4156, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c1);
		if ((EIF_BOOLEAN)(arg1 == tc1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4156, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(2,2);
			ui4_1 = ((EIF_INTEGER_32) 2L);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(arg2 == tc1);
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.max_bytes */
EIF_TYPED_VALUE F273_4589 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {UC_UTF8_ROUTINES}.max_bytes_of_iso_8859_1_to_utf8 */
EIF_TYPED_VALUE F273_4590 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {UC_UTF8_ROUTINES}.utf8_bom */
RTOID (F273_4591)


EIF_TYPED_VALUE F273_4591 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F273_4591,4621,RTMS_EX_H("\357\273\277",3,15711167));
}

/* {UC_UTF8_ROUTINES}.invalid_character_utf8_byte */
EIF_TYPED_VALUE F273_4592 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\377';
	return r;
}

/* {UC_UTF8_ROUTINES}.encoded_first_value */
EIF_TYPED_VALUE F273_4593 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encoded_first_value";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4622);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4622);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4149, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	uc1 = arg1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4159, dtype))(Current, uc1x)).it_n4);
	RTNHOOK(2,1);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 128L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.natural_32_encoded_first_value */
EIF_TYPED_VALUE F273_4594 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "natural_32_encoded_first_value";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4623);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4623);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4149, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (EIF_NATURAL_32) arg1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTHOOK(3);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4185, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN) (arg1 <= tc1)) {
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4192, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN) (arg1 <= tc1)) {
			RTHOOK(5);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			Result %= (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
		} else {
			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4195, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN) (arg1 <= tc1)) {
				RTHOOK(7);
				RTDBGAL(0, 0x38000000, 1,0); /* Result */
				Result %= (EIF_NATURAL_32) ((EIF_INTEGER_32) 16L);
			} else {
				RTHOOK(8);
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4197, dtype))(Current)).it_c1);
				if ((EIF_BOOLEAN) (arg1 <= tc1)) {
					RTHOOK(9);
					RTDBGAL(0, 0x38000000, 1,0); /* Result */
					Result %= (EIF_NATURAL_32) ((EIF_INTEGER_32) 8L);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L))) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.encoded_next_value */
EIF_TYPED_VALUE F273_4595 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encoded_next_value";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4624);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4624);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_next_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4150, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	uc1 = arg1;
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4161, dtype))(Current, uc1x)).it_n4);
	RTNHOOK(2,1);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 64L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.natural_32_encoded_next_value */
EIF_TYPED_VALUE F273_4596 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "natural_32_encoded_next_value";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4625);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4625);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_next_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4150, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (EIF_NATURAL_32) arg1;
	Result = (EIF_NATURAL_32) (EIF_NATURAL_32) (tu4_1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("value_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result < (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.two_byte_character_code */
EIF_TYPED_VALUE F273_4597 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "two_byte_character_code";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 2, 4626);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4626);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("encoded_byte_count", EX_PRE);
		uc1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4166, dtype))(Current, uc1x)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_byte1_is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4149, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_byte2_is_encoded_next_byte", EX_PRE);
		uc1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4150, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (EIF_NATURAL_32) arg1;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	tu4_1 = eif_bit_shift_left(tu4_2,ui4_1);
	tu4_2 = (EIF_NATURAL_32) arg2;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
	tu4_3 = eif_bit_and(tu4_2,uu4_1);
	uu4_1 = tu4_3;
	tu4_2 = eif_bit_or(tu4_1,uu4_1);
	Result = (EIF_NATURAL_32) tu4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.three_byte_character_code */
EIF_TYPED_VALUE F273_4598 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "three_byte_character_code";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
#define arg3 arg3x.it_c1
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_c1 = * (EIF_CHARACTER_8 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU(SK_CHAR8,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 3, 4627);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4627);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("encoded_byte_count", EX_PRE);
		uc1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4166, dtype))(Current, uc1x)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_byte1_is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4149, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_byte2_is_encoded_next_byte", EX_PRE);
		uc1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4150, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_byte3_is_encoded_next_byte", EX_PRE);
		uc1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4150, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (EIF_NATURAL_32) arg1;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	tu4_1 = eif_bit_shift_left(tu4_2,ui4_1);
	tu4_2 = (EIF_NATURAL_32) arg2;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
	tu4_3 = eif_bit_and(tu4_2,uu4_1);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	tu4_2 = eif_bit_shift_left(tu4_3,ui4_1);
	uu4_1 = tu4_2;
	tu4_3 = eif_bit_or(tu4_1,uu4_1);
	tu4_1 = (EIF_NATURAL_32) arg3;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	uu4_1 = tu4_2;
	tu4_1 = eif_bit_or(tu4_3,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.four_byte_character_code */
EIF_TYPED_VALUE F273_4599 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "four_byte_character_code";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_c1
#define arg3 arg3x.it_c1
#define arg4 arg4x.it_c1
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_c1 = * (EIF_CHARACTER_8 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_c1 = * (EIF_CHARACTER_8 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_c1 = * (EIF_CHARACTER_8 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_CHAR8,&arg2);
	RTLU(SK_CHAR8,&arg3);
	RTLU(SK_CHAR8,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 4, 4628);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4628);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("encoded_byte_count", EX_PRE);
		uc1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4166, dtype))(Current, uc1x)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_byte1_is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4149, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_byte2_is_encoded_next_byte", EX_PRE);
		uc1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4150, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_byte3_is_encoded_next_byte", EX_PRE);
		uc1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4150, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("a_byte4_is_encoded_next_byte", EX_PRE);
		uc1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4150, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	RTDBGAL(0, 0x38000000, 1,0); /* Result */
	tu4_1 = (EIF_NATURAL_32) arg1;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	ui4_1 = ((EIF_INTEGER_32) 18L);
	tu4_1 = eif_bit_shift_left(tu4_2,ui4_1);
	tu4_2 = (EIF_NATURAL_32) arg2;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
	tu4_3 = eif_bit_and(tu4_2,uu4_1);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	tu4_2 = eif_bit_shift_left(tu4_3,ui4_1);
	uu4_1 = tu4_2;
	tu4_3 = eif_bit_or(tu4_1,uu4_1);
	tu4_1 = (EIF_NATURAL_32) arg3;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
	tu4_2 = eif_bit_and(tu4_1,uu4_1);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	tu4_1 = eif_bit_shift_left(tu4_2,ui4_1);
	uu4_1 = tu4_1;
	tu4_2 = eif_bit_or(tu4_3,uu4_1);
	tu4_1 = (EIF_NATURAL_32) arg4;
	uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
	tu4_3 = eif_bit_and(tu4_1,uu4_1);
	uu4_1 = tu4_3;
	tu4_1 = eif_bit_or(tu4_2,uu4_1);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.natural_32_code_to_utf8 */
EIF_TYPED_VALUE F273_4600 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "natural_32_code_to_utf8";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_UINT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	
	RTEAA(l_feature_name, 272, Current, 5, 1, 4629);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4629);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4187, dtype))(Current)).it_n4);
	if ((EIF_BOOLEAN) (arg1 < tu4_1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3051, 233))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * ti4_1);
		tu4_1 = eif_bit_shift_left(arg1,ui4_1);
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(3);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4203, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN) (arg1 < tu4_1)) {
			RTHOOK(4);
			RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
			loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
			RTHOOK(5);
			RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
			loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L));
			RTHOOK(6);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3051, 233))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * ti4_1);
			tu4_1 = eif_bit_shift_left(loc1,ui4_1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3051, 233))(Current)).it_i4);
			ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1);
			tu4_2 = eif_bit_shift_left(loc2,ui4_1);
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			Result = (EIF_NATURAL_32) tu4_3;
		} else {
			RTHOOK(7);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4204, dtype))(Current)).it_n4);
			if ((EIF_BOOLEAN) (arg1 < tu4_1)) {
				RTHOOK(8);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1760, 106))(Current)).it_n4);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1762, 106))(Current)).it_n4);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= tu4_1) && (EIF_BOOLEAN) (arg1 <= tu4_2))) {
					RTHOOK(9);
					RTDBGAL(0, 0x38000000, 1,0); /* Result */
					Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080));
				} else {
					RTHOOK(10);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					loc5 = (EIF_NATURAL_32) arg1;
					RTHOOK(11);
					RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
					loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(12);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					loc5 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(13);
					RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
					loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(14);
					RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
					loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L));
					RTHOOK(15);
					RTDBGAL(0, 0x38000000, 1,0); /* Result */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3051, 233))(Current)).it_i4);
					ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * ti4_1);
					tu4_1 = eif_bit_shift_left(loc1,ui4_1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3051, 233))(Current)).it_i4);
					ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1);
					tu4_2 = eif_bit_shift_left(loc2,ui4_1);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3051, 233))(Current)).it_i4);
					ui4_1 = ti4_1;
					tu4_1 = eif_bit_shift_left(loc3,ui4_1);
					uu4_1 = tu4_1;
					tu4_2 = eif_bit_or(tu4_3,uu4_1);
					Result = (EIF_NATURAL_32) tu4_2;
				}
			} else {
				RTHOOK(16);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1758, 106))(Current)).it_n4);
				if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
					RTHOOK(17);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					loc5 = (EIF_NATURAL_32) arg1;
					RTHOOK(18);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					loc4 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(19);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					loc5 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(20);
					RTDBGAL(3, 0x38000000, 1, 0); /* loc3 */
					loc3 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(21);
					RTDBGAL(5, 0x38000000, 1, 0); /* loc5 */
					loc5 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(22);
					RTDBGAL(2, 0x38000000, 1, 0); /* loc2 */
					loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L));
					RTHOOK(23);
					RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
					loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc5 / (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L));
					RTHOOK(24);
					RTDBGAL(0, 0x38000000, 1,0); /* Result */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3051, 233))(Current)).it_i4);
					ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * ti4_1);
					tu4_1 = eif_bit_shift_left(loc1,ui4_1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3051, 233))(Current)).it_i4);
					ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1);
					tu4_2 = eif_bit_shift_left(loc2,ui4_1);
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3051, 233))(Current)).it_i4);
					ui4_1 = ti4_1;
					tu4_1 = eif_bit_shift_left(loc3,ui4_1);
					uu4_1 = tu4_1;
					tu4_2 = eif_bit_or(tu4_3,uu4_1);
					uu4_1 = loc4;
					tu4_1 = eif_bit_or(tu4_2,uu4_1);
					Result = (EIF_NATURAL_32) tu4_1;
				} else {
					RTHOOK(25);
					RTDBGAL(0, 0x38000000, 1,0); /* Result */
					Result = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080));
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.encoded_byte_count */
EIF_TYPED_VALUE F273_4601 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encoded_byte_count";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4630);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4630);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_encoded_first_byte", EX_PRE);
		uc1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4149, dtype))(Current, uc1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4185, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN) (arg1 <= tc1)) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(4);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4192, dtype))(Current)).it_c1);
		if ((EIF_BOOLEAN) (arg1 <= tc1)) {
			RTHOOK(5);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4195, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN) (arg1 <= tc1)) {
				RTHOOK(7);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				RTHOOK(8);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("encoded_byte_code_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("encoded_byte_code_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.string_byte_count */
EIF_TYPED_VALUE F273_4602 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_byte_count";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4631);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4631);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	ui4_2 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4168, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_byte_count_not_negative", EX_POST);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.substring_byte_count */
EIF_TYPED_VALUE F273_4603 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "substring_byte_count";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
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
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLR(5,ur2);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLIU(9);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 272, Current, 6, 3, 4632);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4632);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	if ((EIF_BOOLEAN) (arg2 <= arg3)) {
		RTHOOK(6);
		tb1 = '\0';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		ur1 = RTCCL(arg1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4205, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb2) {
			loc4 = RTCCL(arg1);
			loc4 = RTRV(eif_new_type(357, 0x01),loc4);
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			loc3 = (EIF_INTEGER_32) arg2;
			for (;;) {
				RTHOOK(8);
				if ((EIF_BOOLEAN) (loc3 > arg3)) break;
				RTHOOK(9);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				ui4_1 = loc3;
				tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", loc4))(loc4, ui4_1x)).it_c1);
				uc1 = tc1;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4170, dtype))(Current, uc1x)).it_i4);
				Result += ti4_1;
				RTHOOK(10);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				loc3++;
			}
		} else {
			RTHOOK(11);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			ur1 = RTCCL(arg1);
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4206, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur2 = RTCCL(tr2);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
			if (tb2) {
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_new_type(400, 0x01),loc5);
				tb1 = EIF_TEST(loc5);
			}
			if (tb1) {
				RTHOOK(12);
				tb1 = '\0';
				if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
					ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(6269, "count", loc5));
					tb1 = (EIF_BOOLEAN)(arg3 == ti4_1);
				}
				if (tb1) {
					RTHOOK(13);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(7258, "byte_count", loc5));
					Result = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(14);
					RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
					ui4_1 = arg2;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7293, "byte_index", loc5))(loc5, ui4_1x)).it_i4);
					loc1 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(15);
					ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(6269, "count", loc5));
					if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
						RTHOOK(16);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(7258, "byte_count", loc5));
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc1) + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(17);
						RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
						ui4_1 = loc1;
						ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7292, "shifted_byte_index", loc5))(loc5, ui4_1x, ui4_2x)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(18);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
					}
				}
			} else {
				RTHOOK(19);
				loc6 = RTCCL(arg1);
				loc6 = RTRV(eif_new_type(401, 0x01),loc6);
				if (EIF_TEST(loc6)) {
					RTHOOK(20);
					tb1 = '\0';
					if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 1L))) {
						ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(6269, "count", loc6));
						tb1 = (EIF_BOOLEAN)(arg3 == ti4_1);
					}
					if (tb1) {
						RTHOOK(21);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(7258, "byte_count", loc6));
						Result = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(22);
						RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
						ui4_1 = arg2;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(7293, "byte_index", loc6))(loc6, ui4_1x)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(23);
						ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(6269, "count", loc6));
						if ((EIF_BOOLEAN)(arg3 == ti4_1)) {
							RTHOOK(24);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(7258, "byte_count", loc6));
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - loc1) + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(25);
							RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
							ui4_1 = loc1;
							ui4_2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg3 - arg2) + ((EIF_INTEGER_32) 1L));
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(7292, "shifted_byte_index", loc6))(loc6, ui4_1x, ui4_2x)).it_i4);
							loc2 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(26);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - loc1);
						}
					}
				} else {
					RTHOOK(27);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) arg2;
					for (;;) {
						RTHOOK(28);
						if ((EIF_BOOLEAN) (loc3 > arg3)) break;
						RTHOOK(29);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						ui4_1 = loc3;
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6110, "item", arg1))(arg1, ui4_1x)).it_c4);
						uw1 = tw1;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4171, dtype))(Current, uw1x)).it_i4);
						Result += ti4_1;
						RTHOOK(30);
						RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
						loc3++;
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("substring_byte_count_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uw1
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.character_byte_count */
EIF_TYPED_VALUE F273_4604 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "character_byte_count";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4633);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4633);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	uc1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4170, dtype))(Current, uc1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("character_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("character_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 2L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uc1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.character_8_byte_count */
EIF_TYPED_VALUE F273_4605 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "character_8_byte_count";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4634);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4634);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4185, dtype))(Current)).it_c1);
	if ((EIF_BOOLEAN) (arg1 <= tc1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("character_8_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("character_8_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 2L))) {
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
#undef arg1
}

/* {UC_UTF8_ROUTINES}.character_32_byte_count */
EIF_TYPED_VALUE F273_4606 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "character_32_byte_count";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4635);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4635);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu4_1 = (EIF_NATURAL_32) arg1;
	uu4_1 = tu4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4173, dtype))(Current, uu4_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("character_32_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("character_32_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uu4_1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.code_byte_count */
EIF_TYPED_VALUE F273_4607 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "code_byte_count";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4636);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4636);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_code_not_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1757, 106))(Current)).it_i4);
	if ((EIF_BOOLEAN) (arg1 <= ti4_1)) {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		tu4_1 = (EIF_NATURAL_32) arg1;
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4173, dtype))(Current, uu4_1x)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("code_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("code_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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
#undef uu4_1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.natural_32_code_byte_count */
EIF_TYPED_VALUE F273_4608 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "natural_32_code_byte_count";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4637);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4637);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4187, dtype))(Current)).it_n4);
	if ((EIF_BOOLEAN) (arg1 < tu4_1)) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(3);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4203, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN) (arg1 < tu4_1)) {
			RTHOOK(4);
			RTDBGAL(0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(5);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1760, 106))(Current)).it_n4);
			if ((EIF_BOOLEAN) (arg1 < tu4_1)) {
				RTHOOK(6);
				RTDBGAL(0, 0x10000000, 1,0); /* Result */
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				RTHOOK(7);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1762, 106))(Current)).it_n4);
				if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
					RTHOOK(8);
					RTDBGAL(0, 0x10000000, 1,0); /* Result */
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(9);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4204, dtype))(Current)).it_n4);
					if ((EIF_BOOLEAN) (arg1 < tu4_1)) {
						RTHOOK(10);
						RTDBGAL(0, 0x10000000, 1,0); /* Result */
						Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
					} else {
						RTHOOK(11);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1758, 106))(Current)).it_n4);
						if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
							RTHOOK(12);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						} else {
							RTHOOK(13);
							RTDBGAL(0, 0x10000000, 1,0); /* Result */
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						}
					}
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("natural_32_code_byte_count_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("natural_32_code_byte_count_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 4L))) {
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {UC_UTF8_ROUTINES}.unicode_character_count */
EIF_TYPED_VALUE F273_4609 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "unicode_character_count";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 1, 4638);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4638);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string_8", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_utf8_valid", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	ui4_2 = ti4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4175, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("unicode_character_count_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.unicode_substring_character_count */
EIF_TYPED_VALUE F273_4610 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "unicode_substring_character_count";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
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
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 272, Current, 2, 3, 4639);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4639);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string_8", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		RTTE(tb1, label_1);
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
		RTHOOK(6);
		RTCT("a_utf8_valid_substring", EX_PRE);
		ur1 = RTCCL(arg1);
		ui4_1 = arg2;
		ui4_2 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4146, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) arg3;
	RTHOOK(8);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg2;
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(10);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result++;
		RTHOOK(11);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4166, dtype))(Current, uc1x)).it_i4);
		loc1 += ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("unicode_character_count_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.string_to_utf8 */
EIF_TYPED_VALUE F273_4611 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "string_to_utf8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 272, Current, 1, 1, 4640);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4640);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
	ui4_2 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4177, dtype))(Current, ur1x, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("string_to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("string_to_utf8_is_string", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("valid_utf8", EX_POST);
		tb1 = '\01';
		RTNHOOK(5,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg1))(arg1)).it_i4);
		ui4_1 = ti4_1;
		tr1 = RTLN(eif_new_type(317, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5570, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc1))(loc1)).it_b);
			if (tb3) break;
			RTHOOK(6);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc1))(loc1)).it_i4);
			ti4_2 = ti4_1;
			ui4_1 = ti4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			tr1 = RTLN(eif_new_type(394, 0x01).id);
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6996, 394))(tr1, uu4_1x)).it_b);
			tb2 = tb4;
			RTNHOOK(6,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc1))(loc1);
		}
		if (tb2) {
			ur1 = RTCCL(Result);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("byte_count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ur1 = RTCCL(arg1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4167, dtype))(Current, ur1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.substring_to_utf8 */
EIF_TYPED_VALUE F273_4612 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "substring_to_utf8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLR(5,ur2);
	RTLR(6,loc1);
	RTLR(7,tr2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 272, Current, 1, 3, 4641);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4641);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
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
	RTHOOK(5);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ur1 = RTCCL(arg1);
	ui4_1 = arg2;
	ui4_2 = arg3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4168, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(5,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	ur1 = RTCCL(Result);
	ur2 = RTCCL(arg1);
	ui4_1 = arg2;
	ui4_2 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4180, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("substring_to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("substring_to_utf8_is_string", EX_POST);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", Result))(Result, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("valid_utf8", EX_POST);
		tb1 = '\01';
		RTNHOOK(9,1);
		ui4_1 = arg3;
		tr1 = RTLN(eif_new_type(317, 0x00).id);
		*(EIF_INTEGER_32 *)tr1 = arg2;
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5570, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc1))(loc1)).it_b);
			if (tb3) break;
			RTHOOK(10);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc1))(loc1)).it_i4);
			ti4_2 = ti4_1;
			ui4_1 = ti4_2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			tr1 = RTLN(eif_new_type(394, 0x01).id);
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6996, 394))(tr1, uu4_1x)).it_b);
			tb2 = tb4;
			RTNHOOK(10,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc1))(loc1);
		}
		if (tb2) {
			ur1 = RTCCL(Result);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("byte_count_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(6269, "count", Result));
		ur1 = RTCCL(arg1);
		ui4_1 = arg2;
		ui4_2 = arg3;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4168, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.to_utf8 */
EIF_TYPED_VALUE F273_4613 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "to_utf8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLR(6,tr2);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 272, Current, 3, 1, 4642);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4642);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	loc3 = RTCCL(arg1);
	loc3 = RTRV(eif_new_type(400, 0x01),loc3);
	if (EIF_TEST(loc3)) {
		RTHOOK(3);
		RTDBGAL(0, 0xF8000165, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7282, "to_utf8", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
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
			ur1 = RTCCL(Result);
			ui4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg1))(arg1, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4182, dtype))(Current, ur1x, uu4_1x);
			RTHOOK(9);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("to_utf8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("string_type", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4141, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ur1 = RTCCL(Result);
		tr2 = RTMS_EX_H("",0,0);
		ur2 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(48, "same_types", tr1))(tr1, ur1x, ur2x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("valid_utf8", EX_POST);
		ur1 = RTCCL(Result);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg1
}

/* {UC_UTF8_ROUTINES}.append_string_to_utf8 */
void F273_4614 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_string_to_utf8";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,ur2);
	RTLR(7,loc1);
	RTLR(8,tr3);
	RTLR(9,tr4);
	RTLIU(10);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 272, Current, 1, 2, 4643);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4643);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg2, 272, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_not_void", EX_PRE);
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
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4180, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("a_utf8", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		RTCO(tr1);
		if (tb1) {
			RTNHOOK(5,1);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
			ui4_1 = ti4_2;
			tr3 = RTLN(eif_new_type(317, 0x00).id);
			*(EIF_INTEGER_32 *)tr3 = ((EIF_INTEGER_32) 1L);
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5570, "interval", tr3))(tr3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", tr4))(tr4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc1 = (EIF_REFERENCE) RTCCL(tr3);
			tb4 = EIF_TRUE;
			for (;;) {
				if (!tb4) break;
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc1))(loc1)).it_b);
				if (tb5) break;
				RTHOOK(6);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc1))(loc1)).it_i4);
				ti4_3 = ti4_2;
				ui4_1 = ti4_3;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
				uu4_1 = tu4_1;
				tr3 = RTLN(eif_new_type(394, 0x01).id);
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6996, 394))(tr3, uu4_1x)).it_b);
				tb4 = tb6;
				RTNHOOK(6,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc1))(loc1);
			}
			tb3 = tb4;
		}
		if (tb3) {
			ur1 = RTCCL(arg1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		RTCO(tr2);
		ur1 = RTCCL(arg2);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4167, dtype))(Current, ur1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ti4_3))) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.append_substring_to_utf8 */
void F273_4615 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "append_substring_to_utf8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,loc3);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLIU(9);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 272, Current, 3, 4, 4644);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4644);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg2, 272, l_feature_name, 2, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("s_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("e_small_enough", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6146, "count", arg2))(arg2)).it_i4);
		RTTE((EIF_BOOLEAN) (arg4 <= ti4_1), label_1);
		RTCK;
		RTHOOK(6);
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
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (arg3 <= arg4)) {
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1 = (EIF_INTEGER_32) arg3;
		RTHOOK(9);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) arg4;
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(11);
			ur1 = RTCCL(arg1);
			ui4_1 = loc1;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
			uu4_1 = tu4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4182, dtype))(Current, ur1x, uu4_1x);
			RTHOOK(12);
			RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
			loc1++;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("a_utf8", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		RTCO(tr1);
		if (tb1) {
			RTNHOOK(13,1);
			ui4_1 = arg4;
			tr3 = RTLN(eif_new_type(317, 0x00).id);
			*(EIF_INTEGER_32 *)tr3 = arg3;
			tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5570, "interval", tr3))(tr3, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", tr4))(tr4)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc3 = (EIF_REFERENCE) RTCCL(tr3);
			tb4 = EIF_TRUE;
			for (;;) {
				if (!tb4) break;
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc3))(loc3)).it_b);
				if (tb5) break;
				RTHOOK(14);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc3))(loc3)).it_i4);
				ti4_3 = ti4_2;
				ui4_1 = ti4_3;
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6109, "code", arg2))(arg2, ui4_1x)).it_n4);
				uu4_1 = tu4_1;
				tr3 = RTLN(eif_new_type(394, 0x01).id);
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(6996, 394))(tr3, uu4_1x)).it_b);
				tb4 = tb6;
				RTNHOOK(14,1);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc3))(loc3);
			}
			tb3 = tb4;
		}
		if (tb3) {
			ur1 = RTCCL(arg1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(15);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		RTCO(tr2);
		ur1 = RTCCL(arg2);
		ui4_1 = arg3;
		ui4_2 = arg4;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4168, dtype))(Current, ur1x, ui4_1x, ui4_2x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ti4_3))) {
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

/* {UC_UTF8_ROUTINES}.append_code_to_utf8 */
void F273_4616 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_code_to_utf8";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 2, 4645);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4645);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_code_not_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(4);
	ur1 = RTCCL(arg1);
	tu4_1 = (EIF_NATURAL_32) arg2;
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(4182, dtype))(Current, ur1x, uu4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("a_utf8_valid", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		RTCO(tr1);
		if (tb1) {
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ui4_1 = arg2;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6995, "valid_non_surrogate_code", tr3))(tr3, ui4_1x)).it_b);
			tb3 = tb4;
		}
		if (tb3) {
			ur1 = RTCCL(arg1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		RTCO(tr2);
		ui4_1 = arg2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4172, dtype))(Current, ui4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ti4_3))) {
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
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.append_natural_32_code_to_utf8 */
void F273_4617 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_natural_32_code_to_utf8";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_CHAR8, &loc2);
	RTLU(SK_CHAR8, &loc3);
	RTLU(SK_UINT32, &loc4);
	
	RTEAA(l_feature_name, 272, Current, 4, 2, 4646);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4646);
	RTCC(arg1, 272, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_utf8_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_utf8_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10, "same_type", arg1))(arg1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ur1 = RTCCL(arg1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
		tb1 = tb2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		ti4_1 = ti4_2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4187, dtype))(Current)).it_n4);
	if ((EIF_BOOLEAN) (arg2 < tu4_1)) {
		RTHOOK(4);
		tc1 = (EIF_CHARACTER_8) arg2;
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
	} else {
		RTHOOK(5);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4203, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN) (arg2 < tu4_1)) {
			RTHOOK(6);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			loc4 = (EIF_NATURAL_32) arg2;
			RTHOOK(7);
			RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
			loc1 = (EIF_CHARACTER_8) tc1;
			RTHOOK(8);
			RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
			loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
			RTHOOK(9);
			tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) (loc4 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L)));
			uc1 = tc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
			RTHOOK(10);
			uc1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
		} else {
			RTHOOK(11);
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4204, dtype))(Current)).it_n4);
			if ((EIF_BOOLEAN) (arg2 < tu4_1)) {
				RTHOOK(12);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1760, 106))(Current)).it_n4);
				tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1762, 106))(Current)).it_n4);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= tu4_1) && (EIF_BOOLEAN) (arg2 <= tu4_2))) {
					RTHOOK(13);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4157, dtype))(Current)).it_c1);
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
				} else {
					RTHOOK(14);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					loc4 = (EIF_NATURAL_32) arg2;
					RTHOOK(15);
					RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc2 = (EIF_CHARACTER_8) tc1;
					RTHOOK(16);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(17);
					RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc1 = (EIF_CHARACTER_8) tc1;
					RTHOOK(18);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(19);
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) (loc4 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L)));
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
					RTHOOK(20);
					uc1 = loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
					RTHOOK(21);
					uc1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
				}
			} else {
				RTHOOK(22);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1758, 106))(Current)).it_n4);
				if ((EIF_BOOLEAN) (arg2 <= tu4_1)) {
					RTHOOK(23);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					loc4 = (EIF_NATURAL_32) arg2;
					RTHOOK(24);
					RTDBGAL(3, 0x08000000, 1, 0); /* loc3 */
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc3 = (EIF_CHARACTER_8) tc1;
					RTHOOK(25);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(26);
					RTDBGAL(2, 0x08000000, 1, 0); /* loc2 */
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc2 = (EIF_CHARACTER_8) tc1;
					RTHOOK(27);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(28);
					RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) ((EIF_NATURAL_32) (loc4 % (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L)));
					loc1 = (EIF_CHARACTER_8) tc1;
					RTHOOK(29);
					RTDBGAL(4, 0x38000000, 1, 0); /* loc4 */
					loc4 /= (EIF_NATURAL_32) ((EIF_INTEGER_32) 64L);
					RTHOOK(30);
					tc1 = (EIF_CHARACTER_8) ((EIF_NATURAL_32) (loc4 + (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L)));
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
					RTHOOK(31);
					uc1 = loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
					RTHOOK(32);
					uc1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
					RTHOOK(33);
					uc1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
				} else {
					RTHOOK(34);
					tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4157, dtype))(Current)).it_c1);
					uc1 = tc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", arg1))(arg1, uc1x);
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(35);
		RTCT("a_utf8_valid", EX_POST);
		tb2 = '\01';
		tb3 = '\0';
		RTCO(tr1);
		if (tb1) {
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(35,1);
			uu4_1 = arg2;
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6996, "valid_non_surrogate_natural_32_code", tr3))(tr3, uu4_1x)).it_b);
			tb3 = tb4;
		}
		if (tb3) {
			ur1 = RTCCL(arg1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4145, dtype))(Current, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(36);
		RTCT("byte_count_set", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		RTCO(tr2);
		uu4_1 = arg2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(4173, dtype))(Current, uu4_1x)).it_i4);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ti4_3))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef uu4_1
#undef uc1
#undef arg2
#undef arg1
}

/* {UC_UTF8_ROUTINES}.code_15 */
EIF_TYPED_VALUE F273_4618 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	return r;
}

/* {UC_UTF8_ROUTINES}.code_31 */
EIF_TYPED_VALUE F273_4619 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 31L);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_127 */
EIF_TYPED_VALUE F273_4620 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '';
	return r;
}

/* {UC_UTF8_ROUTINES}.code_127 */
EIF_TYPED_VALUE F273_4621 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 127L);
	return r;
}

/* {UC_UTF8_ROUTINES}.natural_32_code_128 */
EIF_TYPED_VALUE F273_4622 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 128U);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_143 */
EIF_TYPED_VALUE F273_4623 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\217';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_159 */
EIF_TYPED_VALUE F273_4624 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\237';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_191 */
EIF_TYPED_VALUE F273_4625 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\277';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_194 */
EIF_TYPED_VALUE F273_4626 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\302';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_223 */
EIF_TYPED_VALUE F273_4627 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\337';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_224 */
EIF_TYPED_VALUE F273_4628 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\340';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_237 */
EIF_TYPED_VALUE F273_4629 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\355';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_239 */
EIF_TYPED_VALUE F273_4630 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\357';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_240 */
EIF_TYPED_VALUE F273_4631 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\360';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_244 */
EIF_TYPED_VALUE F273_4632 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\364';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_253 */
EIF_TYPED_VALUE F273_4633 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\375';
	return r;
}

/* {UC_UTF8_ROUTINES}.natural_32_code_255 */
EIF_TYPED_VALUE F273_4634 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 255U);
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_ef */
EIF_TYPED_VALUE F273_4635 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\357';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_bb */
EIF_TYPED_VALUE F273_4636 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\273';
	return r;
}

/* {UC_UTF8_ROUTINES}.byte_bf */
EIF_TYPED_VALUE F273_4637 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\277';
	return r;
}

/* {UC_UTF8_ROUTINES}.natural_32_code_2048 */
EIF_TYPED_VALUE F273_4638 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 2048U);
	return r;
}

/* {UC_UTF8_ROUTINES}.natural_32_code_65536 */
EIF_TYPED_VALUE F273_4639 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 65536U);
	return r;
}

/* {UC_UTF8_ROUTINES}.dummy_string */
RTOID (F273_4640)


EIF_TYPED_VALUE F273_4640 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F273_4640,4670,RTMS_EX_H("",0,0));
}

/* {UC_UTF8_ROUTINES}.dummy_uc_string */
RTOID (F273_4641)
EIF_TYPED_VALUE F273_4641 (EIF_REFERENCE Current)
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
	RTOTDR(F273_4641);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 272, Current, 0, 0, 4670);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(272, Current, 4670);
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

void EIF_Minit273 (void)
{
	GTCX
	RTOTS (4591,F273_4591)
	RTOTS (4640,F273_4640)
	RTOTS (4641,F273_4641)
}


#ifdef __cplusplus
}
#endif
