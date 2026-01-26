/*
 * Code for class KL_DOUBLE_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F105_1774(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1775(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1776(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1777(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1778(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1779(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1780(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1781(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1782(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1783(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1784(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F105_1785(EIF_REFERENCE);
extern EIF_TYPED_VALUE F105_1786(EIF_REFERENCE);
extern void EIF_Minit105(void);

#ifdef __cplusplus
}
#endif

#include <math.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_DOUBLE_ROUTINES}.log */
EIF_TYPED_VALUE F105_1774 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "log";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
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
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1804);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1804);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1440, dtype))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.log2 */
EIF_TYPED_VALUE F105_1775 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "log2";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
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
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1805);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1805);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1431, dtype))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.log10 */
EIF_TYPED_VALUE F105_1776 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "log10";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
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
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1806);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1806);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1441, dtype))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.exp */
EIF_TYPED_VALUE F105_1777 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "exp";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REAL_64 tr8_1;
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
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1807);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1807);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ur8_1 = arg1;
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1439, dtype))(Current, ur8_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur8_1
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.nth_root */
EIF_TYPED_VALUE F105_1778 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "nth_root";
	RTEX;
#define arg1 arg1x.it_r8
#define arg2 arg2x.it_r8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r8 = * (EIF_REAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU(SK_REAL64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 104, Current, 0, 2, 1808);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1808);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("divisible", EX_PRE);
		ur1 = RTLN(eif_new_type(338, 0x00).id);
		*(EIF_REAL_64 *)ur1 = arg2;
		tr1 = RTLN(eif_new_type(338, 0x00).id);
		*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) 1.0;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5221, "divisible", tr1))(tr1, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (arg1), (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (arg2))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ur1
#undef arg2
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.truncated_to_integer */
EIF_TYPED_VALUE F105_1779 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "truncated_to_integer";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1809);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1809);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1325, "minimum_integer", tr1))(tr1)).it_i4);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1326, "maximum_integer", tr1))(tr1)).it_i4);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_less_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.rounded_to_integer */
EIF_TYPED_VALUE F105_1780 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "rounded_to_integer";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1810);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1810);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		tr8_1 = eif_abs_real64 (arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1325, "minimum_integer", tr1))(tr1)).it_i4);
		tr8_2 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 ((EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5), tr8_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		tr8_1 = eif_abs_real64 (arg1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1326, "maximum_integer", tr1))(tr1)).it_i4);
		tr8_2 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 ((EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5), (EIF_REAL_64) (tr8_2 + (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tr1 = RTLN(eif_new_type(338, 0x00).id);
	*(EIF_REAL_64 *)tr1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5936, "rounded", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tr1 = RTLN(eif_new_type(338, 0x00).id);
		*(EIF_REAL_64 *)tr1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5917, "sign", tr1))(tr1)).it_i4);
		tr8_1 = eif_abs_real64 (arg1);
		ur8_1 = (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1738, dtype))(Current, ur8_1x)).it_i4);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (ti4_1 * ti4_2))) {
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
#undef up1
#undef ur8_1
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.floor_to_integer */
EIF_TYPED_VALUE F105_1781 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "floor_to_integer";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1811);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1811);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1325, "minimum_integer", tr1))(tr1)).it_i4);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1724, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1326, "maximum_integer", tr1))(tr1)).it_i4);
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 (arg1, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tr1 = RTLN(eif_new_type(338, 0x00).id);
	*(EIF_REAL_64 *)tr1 = arg1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5935, "floor", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 != Result)) {
		RTHOOK(5);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("definition", EX_POST);
		tr1 = RTLN(eif_new_type(338, 0x00).id);
		*(EIF_REAL_64 *)tr1 = arg1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5935, "floor", tr1))(tr1)).it_i4);
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.is_nan */
EIF_TYPED_VALUE F105_1782 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_nan";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1812);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1812);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = eif_is_nan_real_64 (arg1);
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
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.is_plus_infinity */
EIF_TYPED_VALUE F105_1783 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_plus_infinity";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1813);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1813);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = eif_is_positive_infinity_real_64 (arg1);
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
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.is_minus_infinity */
EIF_TYPED_VALUE F105_1784 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_minus_infinity";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 104, Current, 0, 1, 1814);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1814);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = eif_is_negative_infinity_real_64 (arg1);
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
#undef arg1
}

/* {KL_DOUBLE_ROUTINES}.plus_infinity */
RTOID (F105_1785)
EIF_TYPED_VALUE F105_1785 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "plus_infinity";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOTDB(EIF_REAL_64, F105_1785);
	dtype = Dtype(Current);

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 104, Current, 1, 0, 1815);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1815);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80000FC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(252, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3584, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(3);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(4);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(5);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(6);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(7);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(8);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(9);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(10);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3607, "read_real_64", loc1))(loc1, ui4_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("positive", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (Result, tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ui4_1
#undef uu1_1
#undef Result
}

/* {KL_DOUBLE_ROUTINES}.minus_infinity */
RTOID (F105_1786)
EIF_TYPED_VALUE F105_1786 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "minus_infinity";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOTDB(EIF_REAL_64, F105_1786);
	dtype = Dtype(Current);

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 104, Current, 1, 0, 1816);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(104, Current, 1816);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(1, 0xF80000FC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(252, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3584, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(3);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(4);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(5);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(6);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(7);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(8);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(9);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3613, "put_natural_8", loc1))(loc1, uu1_1x, ui4_1x);
	RTHOOK(10);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	ui4_1 = ((EIF_INTEGER_32) 0L);
	tr8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3607, "read_real_64", loc1))(loc1, ui4_1x)).it_r8);
	Result = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("negative", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_less_real_64 (Result, tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
#undef ui4_1
#undef uu1_1
#undef Result
}

void EIF_Minit105 (void)
{
	GTCX
	RTOTS (1785,F105_1785)
	RTOTS (1786,F105_1786)
}


#ifdef __cplusplus
}
#endif
