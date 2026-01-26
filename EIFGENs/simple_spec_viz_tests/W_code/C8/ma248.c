/*
 * Code for class MA_DECIMAL_TEXT_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F248_3788(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3789(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3790(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3791(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3792(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3793(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3794(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3795(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3796(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3797(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3798(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3799(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3800(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3801(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3802(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3803(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3804(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3805(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3806(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3807(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3808(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3809(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3810(EIF_REFERENCE);
extern void F248_3811(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F248_3812(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F248_3813(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3814(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3815(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F248_3816(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3817(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3818(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3819(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3820(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3821(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3822(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3823(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3824(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3825(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F248_3826(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F248_3827(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F248_3828(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3829(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3830(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3831(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3832(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3833(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3834(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3835(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3836(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3837(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3838(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3840(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3841(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3842(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3843(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3844(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3845(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3846(EIF_REFERENCE);
extern EIF_TYPED_VALUE F248_3847(EIF_REFERENCE);
extern void F248_9282(EIF_REFERENCE, int);
extern void EIF_Minit248(void);

#ifdef __cplusplus
}
#endif

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

/* {MA_DECIMAL_TEXT_PARSER}.sign */
EIF_TYPED_VALUE F248_3788 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3468,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_sign */
EIF_TYPED_VALUE F248_3789 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3469,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.state */
EIF_TYPED_VALUE F248_3790 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3470,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.error_code */
EIF_TYPED_VALUE F248_3791 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3471,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.coefficient_begin */
EIF_TYPED_VALUE F248_3792 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3472,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.coefficient_end */
EIF_TYPED_VALUE F248_3793 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3473,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.coefficient_count */
EIF_TYPED_VALUE F248_3794 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "coefficient_count";
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
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 247, Current, 0, 0, 3906);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3906);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3472, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L));
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

/* {MA_DECIMAL_TEXT_PARSER}.fractional_part_count */
EIF_TYPED_VALUE F248_3795 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "fractional_part_count";
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
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 247, Current, 0, 0, 3907);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3907);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3481, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3481, dtype));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
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
}

/* {MA_DECIMAL_TEXT_PARSER}.exponent_as_double */
EIF_TYPED_VALUE F248_3796 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(3476,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_begin */
EIF_TYPED_VALUE F248_3797 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3477,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_end */
EIF_TYPED_VALUE F248_3798 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3478,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_significant_digits */
EIF_TYPED_VALUE F248_3799 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3479,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_count */
EIF_TYPED_VALUE F248_3800 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exponent_count";
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
	
	RTEAA(l_feature_name, 247, Current, 0, 0, 3912);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3912);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3479, dtype));
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

/* {MA_DECIMAL_TEXT_PARSER}.decimal_point_index */
EIF_TYPED_VALUE F248_3801 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3481,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.last_parsed */
EIF_TYPED_VALUE F248_3802 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(3482,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.error */
EIF_TYPED_VALUE F248_3803 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "error";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 0, 3915);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3915);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {MA_DECIMAL_TEXT_PARSER}.is_comma_allowed */
EIF_TYPED_VALUE F248_3804 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3483,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.is_infinity */
EIF_TYPED_VALUE F248_3805 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_infinity";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 0, 3917);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3917);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3510, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
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

/* {MA_DECIMAL_TEXT_PARSER}.is_nan */
EIF_TYPED_VALUE F248_3806 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_nan";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 0, 3918);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3918);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3507, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
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

/* {MA_DECIMAL_TEXT_PARSER}.is_snan */
EIF_TYPED_VALUE F248_3807 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_snan";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 0, 3919);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3919);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3508, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
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

/* {MA_DECIMAL_TEXT_PARSER}.has_point */
EIF_TYPED_VALUE F248_3808 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_point";
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
	
	RTEAA(l_feature_name, 247, Current, 0, 0, 3920);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3920);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3481, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
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

/* {MA_DECIMAL_TEXT_PARSER}.has_exponent */
EIF_TYPED_VALUE F248_3809 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_exponent";
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
	
	RTEAA(l_feature_name, 247, Current, 0, 0, 3921);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3921);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3477, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
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

/* {MA_DECIMAL_TEXT_PARSER}.decimal_point_is_comma */
EIF_TYPED_VALUE F248_3810 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3489,Dtype(Current)));
	return r;
}


/* {MA_DECIMAL_TEXT_PARSER}.parse */
void F248_3811 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 247, Current, 0, 1, 3923);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3923);
	RTCC(arg1, 247, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1720, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr1);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3491, dtype))(Current, ur1x, ur2x, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("last_decimal_not_void_when_no_error", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("last_parsed_string_affected", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3482, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
#undef ur2
#undef ub1
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.parse_with_decimal_point_comma */
void F248_3812 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "parse_with_decimal_point_comma";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 247, Current, 0, 1, 3924);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3924);
	RTCC(arg1, 247, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3483, dtype));
		tb1 = tb2;
		in_assertion = 0;
	}
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1720, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3491, dtype))(Current, ur1x, ur2x, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_mode_change", EX_POST);
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3483, dtype));
		if ((EIF_BOOLEAN)(tb2 == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("last_parsed_string_affected", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3482, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_decimal_not_void_when_no_error", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = (EIF_BOOLEAN)(tr1 != NULL);
		}
		if (tb2) {
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
#undef up1
#undef ur1
#undef ur2
#undef ub1
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.parse_ctx */
void F248_3813 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "parse_ctx";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLR(5,tr1);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 247, Current, 1, 3, 3925);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3925);
	RTCC(arg1, 247, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg2, 247, l_feature_name, 2, eif_new_type(398, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3483, dtype));
		tb1 = tb2;
		in_assertion = 0;
	}
	RTHOOK(3);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3483, dtype));
	loc1 = (EIF_BOOLEAN) tb2;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 3483, 0x04000000, 1); /* is_comma_allowed */
	*(EIF_BOOLEAN *)(Current + RTWA(3483, dtype)) = (EIF_BOOLEAN) arg3;
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3492, dtype))(Current, ur1x, ur2x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 3483, 0x04000000, 1); /* is_comma_allowed */
	*(EIF_BOOLEAN *)(Current + RTWA(3483, dtype)) = (EIF_BOOLEAN) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("no_mode_change", EX_POST);
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3483, dtype));
		if ((EIF_BOOLEAN)(tb2 == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("last_parsed_string_affected", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3482, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("last_decimal_not_void_when_no_error", EX_POST);
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb2 = (EIF_BOOLEAN)(tr1 != NULL);
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
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg3
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.parse_and_create_last_decimal */
void F248_3814 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "parse_and_create_last_decimal";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur2);
	RTLIU(6);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3926);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3926);
	RTCC(arg1, 247, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg2, 247, l_feature_name, 2, eif_new_type(398, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3493, dtype))(Current, ur1x);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 1338, 0xF800018D, 0); /* last_decimal */
		tr1 = RTLNSMART(RTWCT(1338, dtype, Dftype(Current)).id);
		ur1 = RTCCL(Current);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7061, Dtype(tr1)))(tr1, ur1x, ur2x);
		RTNHOOK(3,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(1338, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 1338, 0xF800018D, 0); /* last_decimal */
		*(EIF_REFERENCE *)(Current + RTWA(1338, dtype)) = (EIF_REFERENCE) NULL;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("last_parsed_is_s", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3482, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_decimal_created_if_no_error", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1338, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
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
#undef up1
#undef ur1
#undef ur2
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.decimal_parse */
void F248_3815 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "decimal_parse";
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
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
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR8, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 247, Current, 3, 1, 3927);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3927);
	RTCC(arg1, 247, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
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
	RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3506, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3468, 0x10000000, 1); /* sign */
	*(EIF_INTEGER_32 *)(Current + RTWA(3468, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 3469, 0x10000000, 1); /* exponent_sign */
	*(EIF_INTEGER_32 *)(Current + RTWA(3469, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3476, 0x20000000, 1); /* exponent_as_double */
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current + RTWA(3476, dtype)) = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 3472, 0x10000000, 1); /* coefficient_begin */
	*(EIF_INTEGER_32 *)(Current + RTWA(3472, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
	*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(10);
	RTDBGAA(Current, dtype, 3477, 0x10000000, 1); /* exponent_begin */
	*(EIF_INTEGER_32 *)(Current + RTWA(3477, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	RTDBGAA(Current, dtype, 3478, 0x10000000, 1); /* exponent_end */
	*(EIF_INTEGER_32 *)(Current + RTWA(3478, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(12);
	RTDBGAA(Current, dtype, 3479, 0x10000000, 1); /* exponent_significant_digits */
	*(EIF_INTEGER_32 *)(Current + RTWA(3479, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	RTDBGAA(Current, dtype, 3481, 0x10000000, 1); /* decimal_point_index */
	*(EIF_INTEGER_32 *)(Current + RTWA(3481, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(14);
	RTDBGAA(Current, dtype, 3489, 0x04000000, 1); /* decimal_point_is_comma */
	*(EIF_BOOLEAN *)(Current + RTWA(3489, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(15);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ti4_2) || (EIF_BOOLEAN) (loc2 > loc3))) break;
		RTHOOK(16);
		RTDBGAL(1, 0x08000000, 1, 0); /* loc1 */
		ui4_1 = loc2;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(17);
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		switch (ti4_3) {
			case 1L:
				RTHOOK(18);
				uc1 = loc1;
				ui4_1 = loc2;
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3494, dtype))(Current, uc1x, ui4_1x, ur1x);
				break;
			case 10L:
				RTHOOK(19);
				uc1 = loc1;
				ui4_1 = loc2;
				ur1 = RTCCL(arg1);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3496, dtype))(Current, uc1x, ui4_1x, ur1x);
				break;
			case 6L:
				RTHOOK(20);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3497, dtype))(Current, uc1x, ui4_1x);
				break;
			case 4L:
				RTHOOK(21);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3498, dtype))(Current, uc1x, ui4_1x);
				break;
			case 7L:
				RTHOOK(22);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3499, dtype))(Current, uc1x, ui4_1x);
				break;
			case 11L:
				RTHOOK(23);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3500, dtype))(Current, uc1x, ui4_1x);
				break;
			case 8L:
				RTHOOK(24);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3501, dtype))(Current, uc1x, ui4_1x);
				break;
			case 12L:
				RTHOOK(25);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3502, dtype))(Current, uc1x, ui4_1x);
				break;
			case 13L:
				RTHOOK(26);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3503, dtype))(Current, uc1x, ui4_1x);
				break;
			case 9L:
				RTHOOK(27);
				uc1 = loc1;
				ui4_1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3504, dtype))(Current, uc1x, ui4_1x);
				break;
			case 2L:
			case 3L:
			case 5L:
				RTHOOK(28);
				RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
				loc2 = (EIF_INTEGER_32) loc3;
				break;
			default:
				RTHOOK(29);
				RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
				ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_3;
				break;
		}
		RTHOOK(30);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(31);
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
	switch (ti4_3) {
		case 1L:
		case 4L:
		case 10L:
		case 11L:
		case 12L:
		case 13L:
			RTHOOK(32);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_3;
			break;
	}
	RTHOOK(33);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3489, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3483, dtype));
	if ((EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN) !tb2)) {
		RTHOOK(34);
		RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_3;
	}
	RTHOOK(35);
	RTDBGAA(Current, dtype, 3482, 0xF8000165, 0); /* last_parsed */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(3482, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(36);
		RTCT("last_parsed_is_s", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3482, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
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
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_start */
void F248_3816 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "process_start";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 247, Current, 0, 3, 3928);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3928);
	RTCC(arg3, 247, l_feature_name, 3, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_start", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3506, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_in_s", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(6269, "count", arg3));
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3472, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(3472, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3511, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
			RTHOOK(8);
			if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
				RTHOOK(9);
				RTDBGAA(Current, dtype, 3468, 0x10000000, 1); /* sign */
				*(EIF_INTEGER_32 *)(Current + RTWA(3468, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 3468, 0x10000000, 1); /* sign */
				*(EIF_INTEGER_32 *)(Current + RTWA(3468, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(11);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3515, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) 'N':
		case (EIF_CHARACTER_8) 'n':
			RTHOOK(12);
			ur1 = RTCCL(arg3);
			ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
			ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(6269, "count", arg3));
			ui4_2 = ti4_1;
			tr1 = RTMS_EX_H("an",2,24942);
			ur2 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3505, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x)).it_b);
			if (tb1) {
				RTHOOK(13);
				RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3507, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(14);
				RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
				RTHOOK(15);
				RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3520, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			}
			break;
		case (EIF_CHARACTER_8) 'S':
		case (EIF_CHARACTER_8) 's':
			RTHOOK(16);
			ur1 = RTCCL(arg3);
			ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
			ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(6269, "count", arg3));
			ui4_2 = ti4_1;
			tr1 = RTMS_EX_H("nan",3,7233902);
			ur2 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3505, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x)).it_b);
			if (tb1) {
				RTHOOK(17);
				RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3508, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(18);
				RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
				RTHOOK(19);
				RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3520, dtype))(Current)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			}
			break;
		case (EIF_CHARACTER_8) 'I':
		case (EIF_CHARACTER_8) 'i':
			RTHOOK(20);
			ur1 = RTCCL(arg3);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3495, dtype))(Current, ur1x, ui4_1x);
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(21);
			RTDBGAA(Current, dtype, 3472, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(3472, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(22);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(23);
			RTDBGAA(Current, dtype, 3481, 0x10000000, 1); /* decimal_point_index */
			*(EIF_INTEGER_32 *)(Current + RTWA(3481, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(24);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3509, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(25);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(26);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3521, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("next_state", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
		if (!tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3506, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN)(ti4_1 != ti4_2);
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
	RTLO(5);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.handle_i */
void F248_3817 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "handle_i";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,tr1);
	RTLR(3,ur2);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3929);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3929);
	RTCC(arg1, 247, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_in_s", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L));
	ui4_2 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
	tr1 = RTMS_EX_H("nf",2,28262);
	ur2 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3505, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x)).it_b);
	if (tb1) {
		RTHOOK(4);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		if (!(EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg2) + ((EIF_INTEGER_32) 1L)) == ((EIF_INTEGER_32) 3L))) {
			ur1 = RTCCL(arg1);
			ui4_1 = (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L));
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
			ui4_2 = ti4_1;
			tr1 = RTMS_EX_H("inity",5,1853211257);
			ur2 = tr1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3505, dtype))(Current, ur1x, ui4_1x, ui4_2x, ur2x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3510, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3520, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
		}
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3520, dtype))(Current)).it_i4);
		*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1339, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = '\0';
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3484, dtype))(Current)).it_b);
			if (tb3) {
				ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3510, dtype))(Current)).it_i4);
				tb2 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
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
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_sign */
void F248_3818 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "process_sign";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
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
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 247, Current, 0, 3, 3930);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3930);
	RTCC(arg3, 247, l_feature_name, 3, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_sign", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3515, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_in_s", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg3 + RTVA(6269, "count", arg3));
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch (arg1) {
		case (EIF_CHARACTER_8) 'I':
		case (EIF_CHARACTER_8) 'i':
			RTHOOK(5);
			ur1 = RTCCL(arg3);
			ui4_1 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3495, dtype))(Current, ur1x, ui4_1x);
			break;
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3472, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(3472, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(8);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3511, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(9);
			RTDBGAA(Current, dtype, 3472, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(3472, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(10);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(11);
			RTDBGAA(Current, dtype, 3481, 0x10000000, 1); /* decimal_point_index */
			*(EIF_INTEGER_32 *)(Current + RTWA(3481, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(12);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3509, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(13);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3521, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_integer_part */
void F248_3819 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_integer_part";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3931);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3931);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_integer_part", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3511, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)))++;
			break;
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'e':
			RTHOOK(4);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3517, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)))++;
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3481, 0x10000000, 1); /* decimal_point_index */
			*(EIF_INTEGER_32 *)(Current + RTWA(3481, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3512, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) ',':
			RTHOOK(8);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)))++;
			RTHOOK(9);
			RTDBGAA(Current, dtype, 3481, 0x10000000, 1); /* decimal_point_index */
			*(EIF_INTEGER_32 *)(Current + RTWA(3481, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(10);
			RTDBGAA(Current, dtype, 3489, 0x04000000, 1); /* decimal_point_is_comma */
			*(EIF_BOOLEAN *)(Current + RTWA(3489, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(11);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3516, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(12);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(13);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3522, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_starting_point */
void F248_3820 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_starting_point";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3932);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3932);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_starting_point", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3509, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 3472, 0x10000000, 1); /* coefficient_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(3472, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3513, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3521, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_point */
void F248_3821 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_point";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3933);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3933);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_point", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3512, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)))++;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3513, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'e':
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3517, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3521, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_comma */
void F248_3822 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_comma";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3934);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3934);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_comma", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3516, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)))++;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3513, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3521, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_fractional_part */
void F248_3823 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_fractional_part";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3935);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3935);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_fractional_part", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3513, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 3473, 0x10000000, 1); /* coefficient_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(3473, dtype)))++;
			break;
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'e':
			RTHOOK(4);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3517, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(6);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3523, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_start_exponent */
void F248_3824 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_start_exponent";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3936);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3936);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_start_exponent", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3517, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 3476, 0x20000000, 1); /* exponent_as_double */
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ti4_2));
			*(EIF_REAL_64 *)(Current + RTWA(3476, dtype)) = (EIF_REAL_64) tr8_1;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 3477, 0x10000000, 1); /* exponent_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(3477, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3478, 0x10000000, 1); /* exponent_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(3478, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(6);
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(3476, dtype));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
				RTHOOK(7);
				RTDBGAA(Current, dtype, 3479, 0x10000000, 1); /* exponent_significant_digits */
				*(EIF_INTEGER_32 *)(Current + RTWA(3479, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(8);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
			RTHOOK(9);
			if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 3469, 0x10000000, 1); /* exponent_sign */
				*(EIF_INTEGER_32 *)(Current + RTWA(3469, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(11);
				RTDBGAA(Current, dtype, 3469, 0x10000000, 1); /* exponent_sign */
				*(EIF_INTEGER_32 *)(Current + RTWA(3469, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(12);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3518, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(13);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3524, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_exponent_sign */
void F248_3825 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_exponent_sign";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3937);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3937);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_exponent_sign", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3518, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 3476, 0x20000000, 1); /* exponent_as_double */
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ti4_2));
			*(EIF_REAL_64 *)(Current + RTWA(3476, dtype)) = (EIF_REAL_64) tr8_1;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 3477, 0x10000000, 1); /* exponent_begin */
			*(EIF_INTEGER_32 *)(Current + RTWA(3477, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(5);
			RTDBGAA(Current, dtype, 3478, 0x10000000, 1); /* exponent_end */
			*(EIF_INTEGER_32 *)(Current + RTWA(3478, dtype)) = (EIF_INTEGER_32) arg2;
			RTHOOK(6);
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(3476, dtype));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
				RTHOOK(7);
				RTDBGAA(Current, dtype, 3479, 0x10000000, 1); /* exponent_significant_digits */
				*(EIF_INTEGER_32 *)(Current + RTWA(3479, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(8);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(9);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(10);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3524, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.process_exponent */
void F248_3826 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "process_exponent";
	RTEX;
#define arg1 arg1x.it_c1
#define arg2 arg2x.it_i4
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 247, Current, 0, 2, 3938);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3938);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_exponent", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN)(ti4_1 == ti4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			RTDBGAA(Current, dtype, 3476, 0x20000000, 1); /* exponent_as_double */
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(3476, dtype));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 10L));
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr8_3 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ti4_2));
			*(EIF_REAL_64 *)(Current + RTWA(3476, dtype)) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3);
			RTHOOK(4);
			RTDBGAA(Current, dtype, 3478, 0x10000000, 1); /* exponent_end */
			(*(EIF_INTEGER_32 *)(Current + RTWA(3478, dtype)))++;
			RTHOOK(5);
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(3476, dtype));
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
				RTHOOK(6);
				RTDBGAA(Current, dtype, 3479, 0x10000000, 1); /* exponent_significant_digits */
				(*(EIF_INTEGER_32 *)(Current + RTWA(3479, dtype)))++;
			}
			RTHOOK(7);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3514, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			RTHOOK(8);
			RTDBGAA(Current, dtype, 3470, 0x10000000, 1); /* state */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3519, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3470, dtype)) = (EIF_INTEGER_32) ti4_1;
			RTHOOK(9);
			RTDBGAA(Current, dtype, 3471, 0x10000000, 1); /* error_code */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3524, dtype))(Current)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(3471, dtype)) = (EIF_INTEGER_32) ti4_1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.case_insensitive_substring_equal */
EIF_TYPED_VALUE F248_3827 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "case_insensitive_substring_equal";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r
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
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 247, Current, 2, 4, 3939);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(247, Current, 3939);
	RTCC(arg1, 247, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	RTCC(arg4, 247, l_feature_name, 4, eif_new_type(357, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("t_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(4);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(6269, "count", arg4));
			tb3 = (EIF_BOOLEAN) (loc2 > ti4_1);
		}
		if (!tb3) {
			tb2 = (EIF_BOOLEAN) (loc1 > arg3);
		}
		if (!tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1817, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ui4_1 = loc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
			uc1 = tc1;
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1729, "as_lower", tr1))(tr1, uc1x)).it_c1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1817, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,2);
			ui4_1 = loc2;
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg4))(arg4, ui4_1x)).it_c1);
			uc1 = tc2;
			tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1729, "as_lower", tr1))(tr1, uc1x)).it_c1);
			tb1 = (EIF_BOOLEAN)(tc1 != tc2);
		}
		if (tb1) break;
		RTHOOK(6);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
		RTHOOK(7);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTHOOK(8);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb2 = '\0';
	if ((EIF_BOOLEAN) (loc1 > arg3)) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg4 + RTVA(6269, "count", arg4));
		tb2 = (EIF_BOOLEAN) (loc2 > ti4_1);
	}
	Result = (EIF_BOOLEAN) tb2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("definition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3467, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(9,1);
		ui4_1 = arg2;
		ui4_2 = arg3;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6187, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6168, "as_lower", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr3);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6168, "as_lower", arg4))(arg4)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr2);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4822, "same_string", tr1))(tr1, ur1x, ur2x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb2)) {
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
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef uc1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {MA_DECIMAL_TEXT_PARSER}.state_start */
EIF_TYPED_VALUE F248_3828 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_nan */
EIF_TYPED_VALUE F248_3829 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_snan */
EIF_TYPED_VALUE F248_3830 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_starting_point */
EIF_TYPED_VALUE F248_3831 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_infinity */
EIF_TYPED_VALUE F248_3832 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_integer_part */
EIF_TYPED_VALUE F248_3833 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_point */
EIF_TYPED_VALUE F248_3834 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_fractional_part */
EIF_TYPED_VALUE F248_3835 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_exponent */
EIF_TYPED_VALUE F248_3836 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_sign */
EIF_TYPED_VALUE F248_3837 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_comma */
EIF_TYPED_VALUE F248_3838 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_start_exponent */
EIF_TYPED_VALUE F248_3839 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_exponent_sign */
EIF_TYPED_VALUE F248_3840 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.state_error */
EIF_TYPED_VALUE F248_3841 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_value */
EIF_TYPED_VALUE F248_3842 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_character */
EIF_TYPED_VALUE F248_3843 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_character_in_integer_part */
EIF_TYPED_VALUE F248_3844 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 103L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_character_in_decimal_part */
EIF_TYPED_VALUE F248_3845 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_character_in_exponent */
EIF_TYPED_VALUE F248_3846 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 105L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}.error_invalid_state */
EIF_TYPED_VALUE F248_3847 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 106L);
	return r;
}

/* {MA_DECIMAL_TEXT_PARSER}._invariant */
void F248_9282 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 247, Current, 0, 9281);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("decimal_point_is_comma_implies_has_fractional_part", Current);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3489, dtype));
	if (tb2) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3487, dtype))(Current)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit248 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
