/*
 * Code for class SIMPLE_ZCODEC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F75_1386(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F75_1387(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F75_1388(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F75_1389(EIF_REFERENCE);
extern void F75_9241(EIF_REFERENCE, int);
extern void EIF_Minit75(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_ZCODEC}.encoded_character */
EIF_TYPED_VALUE F75_1386 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "encoded_character";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR8, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 74, Current, 2, 1, 1451);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1451);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x38000000, 1, 0); /* loc1 */
	tu4_1 = (EIF_NATURAL_32) arg1;
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = (EIF_CHARACTER_8) loc1;
		Result = (EIF_CHARACTER_8) tc1;
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x08000000, 1,0); /* Result */
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1382, dtype))(Current)).it_c1);
		Result = (EIF_CHARACTER_8) tc1;
		RTHOOK(5);
		RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(6);
			tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1382, dtype))(Current)).it_c1);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 128L)) || (EIF_BOOLEAN)(Result != tc1))) break;
			RTHOOK(7);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1378, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			ui4_1 = loc2;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c4);
			if ((EIF_BOOLEAN)(tw1 == arg1)) {
				RTHOOK(8);
				RTDBGAL(0, 0x08000000, 1,0); /* Result */
				tc2 = (EIF_CHARACTER_8) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 128L));
				Result = (EIF_CHARACTER_8) tc2;
			}
			RTHOOK(9);
			RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
			loc2++;
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
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ZCODEC}.can_encode */
EIF_TYPED_VALUE F75_1387 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "can_encode";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 74, Current, 0, 1, 1452);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1452);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	uw1 = arg1;
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1379, dtype))(Current, uw1x)).it_c1);
	tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1382, dtype))(Current)).it_c1);
	if (!(EIF_BOOLEAN)(tc1 != tc2)) {
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1382, dtype))(Current)).it_c1);
		tw1 = (EIF_CHARACTER_32) tc1;
		tb1 = (EIF_BOOLEAN)(arg1 == tw1);
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
#undef uw1
#undef arg1
}

/* {SIMPLE_ZCODEC}.decoded_character */
EIF_TYPED_VALUE F75_1388 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "decoded_character";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 74, Current, 1, 1, 1453);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(74, Current, 1453);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (EIF_INTEGER_32) (arg1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 128L))) {
		RTHOOK(3);
		RTDBGAL(0, 0x1C000000, 1,0); /* Result */
		tw1 = (EIF_CHARACTER_32) arg1;
		Result = (EIF_CHARACTER_32) tw1;
	} else {
		RTHOOK(4);
		RTDBGAL(0, 0x1C000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1378, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		ui4_1 = (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 128L));
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", tr1))(tr1, ui4_1x)).it_c4);
		Result = (EIF_CHARACTER_32) tw1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {SIMPLE_ZCODEC}.substitute */
EIF_TYPED_VALUE F75_1389 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\032';
	return r;
}

/* {SIMPLE_ZCODEC}._invariant */
void F75_9241 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 74, Current, 0, 9240);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("unicode_table_exists", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1378, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("unicode_table_correct_size", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1378, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5138, "count", tr1))(tr1)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 128L))) {
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

void EIF_Minit75 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
