/*
 * Code for class SED_READER_WRITER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F89_1497(EIF_REFERENCE);
extern void F89_1498(EIF_REFERENCE);
extern void F89_1499(EIF_REFERENCE);
extern void F89_1500(EIF_REFERENCE);
extern EIF_TYPED_VALUE F89_1503(EIF_REFERENCE);
extern void F89_1504(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F89_1505(EIF_REFERENCE);
extern EIF_TYPED_VALUE F89_1506(EIF_REFERENCE);
extern EIF_TYPED_VALUE F89_1507(EIF_REFERENCE);
extern EIF_TYPED_VALUE F89_1508(EIF_REFERENCE);
extern EIF_TYPED_VALUE F89_1509(EIF_REFERENCE);
extern EIF_TYPED_VALUE F89_1510(EIF_REFERENCE);
extern EIF_TYPED_VALUE F89_1511(EIF_REFERENCE);
extern EIF_TYPED_VALUE F89_1523(EIF_REFERENCE);
extern EIF_TYPED_VALUE F89_1524(EIF_REFERENCE);
extern void F89_1525(EIF_REFERENCE);
extern void F89_1526(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F89_1527(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F89_1528(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F89_1529(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F89_1530(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F89_1531(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F89_1543(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F89_1544(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit89(void);

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

/* {SED_READER_WRITER}.read_header */
void F89_1497 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_header";
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
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1546);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1546);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
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

/* {SED_READER_WRITER}.write_header */
void F89_1498 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "write_header";
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
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1547);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1547);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
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

/* {SED_READER_WRITER}.read_footer */
void F89_1499 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_footer";
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
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1548);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1548);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
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

/* {SED_READER_WRITER}.write_footer */
void F89_1500 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "write_footer";
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
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1558);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1558);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
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

/* {SED_READER_WRITER}.is_pointer_value_stored */
EIF_TYPED_VALUE F89_1503 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1489,Dtype(Current)));
	return r;
}


/* {SED_READER_WRITER}.set_is_pointer_value_stored */
void F89_1504 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_is_pointer_value_stored";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 88, Current, 0, 1, 1560);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1560);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1489, 0x04000000, 1); /* is_pointer_value_stored */
	*(EIF_BOOLEAN *)(Current + RTWA(1489, dtype)) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_pointer_value_stored_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1489, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
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

/* {SED_READER_WRITER}.read_character_8 */
EIF_TYPED_VALUE F89_1505 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_character_8";
	RTEX;
	EIF_NATURAL_8 tu1_1;
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
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1561);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1561);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x08000000, 1,0); /* Result */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1498, dtype))(Current)).it_n1);
	RTNHOOK(2,1);
	tc1 = (EIF_CHARACTER_8) tu1_1;
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

/* {SED_READER_WRITER}.read_character_32 */
EIF_TYPED_VALUE F89_1506 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_character_32";
	RTEX;
	EIF_NATURAL_32 tu4_1;
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
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1562);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1562);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1500, dtype))(Current)).it_n4);
	RTNHOOK(2,1);
	tw1 = (EIF_CHARACTER_32) tu4_1;
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

/* {SED_READER_WRITER}.read_string_8 */
EIF_TYPED_VALUE F89_1507 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_string_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
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
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 88, Current, 2, 0, 1563);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1563);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1510, dtype))(Current)).it_n4);
	RTNHOOK(2,1);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000165, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(357, 0x01).id);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6107, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	loc2++;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(7);
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1491, dtype))(Current)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6297, "append_character", Result))(Result, uc1x);
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("read_string_8_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
#undef ui4_1
#undef uc1
}

/* {SED_READER_WRITER}.read_immutable_string_8 */
EIF_TYPED_VALUE F89_1508 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_immutable_string_8";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1564);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1564);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000164, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(356, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1493, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6237, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("read_immutable_string_8_not_void", EX_POST);
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
#undef up1
#undef ur1
}

/* {SED_READER_WRITER}.read_string_32 */
EIF_TYPED_VALUE F89_1509 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_string_32";
	RTEX;
	struct eif_ex_58 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
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
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(58, 0x00).id);
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 88, Current, 1, 0, 1565);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1565);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(2);
	RTDBGAL(0, 0xF8000169, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1493, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1213, "utf_8_string_8_to_string_32", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("read_string_8_not_void", EX_POST);
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
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {SED_READER_WRITER}.read_immutable_string_32 */
EIF_TYPED_VALUE F89_1510 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_immutable_string_32";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
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
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1566);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1566);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000168, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(360, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1495, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(6316, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("read_string_8_not_void", EX_POST);
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
#undef up1
#undef ur1
}

/* {SED_READER_WRITER}.read_boolean */
EIF_TYPED_VALUE F89_1511 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_boolean";
	RTEX;
	EIF_NATURAL_8 tu1_1;
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
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1567);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1567);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1498, dtype))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L));
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

/* {SED_READER_WRITER}.read_compressed_integer_32 */
EIF_TYPED_VALUE F89_1523 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_compressed_integer_32";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1549);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1549);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1510, dtype))(Current)).it_n4);
	RTNHOOK(2,1);
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
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

/* {SED_READER_WRITER}.read_compressed_natural_32 */
EIF_TYPED_VALUE F89_1524 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "read_compressed_natural_32";
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
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
	RTLU(SK_UINT8, &loc1);
	
	RTEAA(l_feature_name, 88, Current, 1, 0, 1550);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1550);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x30000000, 1, 0); /* loc1 */
	tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1498, dtype))(Current)).it_n1);
	loc1 = (EIF_NATURAL_8) tu1_1;
	RTHOOK(3);
	uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L);
	tu1_1 = eif_bit_and(loc1,uu1_1);
	if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		RTDBGAL(0, 0x38000000, 1,0); /* Result */
		tu4_1 = (EIF_NATURAL_32) loc1;
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(5);
		uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L);
		tu1_1 = eif_bit_and(loc1,uu1_1);
		if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 128L))) {
			RTHOOK(6);
			RTDBGAL(0, 0x38000000, 1,0); /* Result */
			tu4_1 = (EIF_NATURAL_32) loc1;
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
			tu4_2 = eif_bit_and(tu4_1,uu4_1);
			ui4_1 = ((EIF_INTEGER_32) 8L);
			tu4_1 = eif_bit_shift_left(tu4_2,ui4_1);
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1498, dtype))(Current)).it_n1);
			RTNHOOK(6,1);
			tu4_2 = (EIF_NATURAL_32) tu1_1;
			uu4_1 = tu4_2;
			tu4_3 = eif_bit_or(tu4_1,uu4_1);
			Result = (EIF_NATURAL_32) tu4_3;
		} else {
			RTHOOK(7);
			uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L);
			tu1_1 = eif_bit_and(loc1,uu1_1);
			if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 192L))) {
				RTHOOK(8);
				RTDBGAL(0, 0x38000000, 1,0); /* Result */
				tu4_1 = (EIF_NATURAL_32) loc1;
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
				tu4_2 = eif_bit_and(tu4_1,uu4_1);
				ui4_1 = ((EIF_INTEGER_32) 16L);
				tu4_1 = eif_bit_shift_left(tu4_2,ui4_1);
				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1498, dtype))(Current)).it_n1);
				RTNHOOK(8,1);
				tu4_2 = (EIF_NATURAL_32) tu1_1;
				ui4_1 = ((EIF_INTEGER_32) 8L);
				tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
				uu4_1 = tu4_3;
				tu4_2 = eif_bit_or(tu4_1,uu4_1);
				tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1498, dtype))(Current)).it_n1);
				RTNHOOK(8,2);
				tu4_1 = (EIF_NATURAL_32) tu1_1;
				uu4_1 = tu4_1;
				tu4_3 = eif_bit_or(tu4_2,uu4_1);
				Result = (EIF_NATURAL_32) tu4_3;
			} else {
				RTHOOK(9);
				uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
				tu1_1 = eif_bit_and(loc1,uu1_1);
				if ((EIF_BOOLEAN)(tu1_1 == (EIF_NATURAL_8) ((EIF_INTEGER_32) 224L))) {
					RTHOOK(10);
					RTDBGAL(0, 0x38000000, 1,0); /* Result */
					tu4_1 = (EIF_NATURAL_32) loc1;
					uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
					tu4_2 = eif_bit_and(tu4_1,uu4_1);
					ui4_1 = ((EIF_INTEGER_32) 24L);
					tu4_1 = eif_bit_shift_left(tu4_2,ui4_1);
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1498, dtype))(Current)).it_n1);
					RTNHOOK(10,1);
					tu4_2 = (EIF_NATURAL_32) tu1_1;
					ui4_1 = ((EIF_INTEGER_32) 16L);
					tu4_3 = eif_bit_shift_left(tu4_2,ui4_1);
					uu4_1 = tu4_3;
					tu4_2 = eif_bit_or(tu4_1,uu4_1);
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1498, dtype))(Current)).it_n1);
					RTNHOOK(10,2);
					tu4_1 = (EIF_NATURAL_32) tu1_1;
					ui4_1 = ((EIF_INTEGER_32) 8L);
					tu4_3 = eif_bit_shift_left(tu4_1,ui4_1);
					uu4_1 = tu4_3;
					tu4_1 = eif_bit_or(tu4_2,uu4_1);
					tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1498, dtype))(Current)).it_n1);
					RTNHOOK(10,3);
					tu4_2 = (EIF_NATURAL_32) tu1_1;
					uu4_1 = tu4_2;
					tu4_3 = eif_bit_or(tu4_1,uu4_1);
					Result = (EIF_NATURAL_32) tu4_3;
				} else {
					RTHOOK(11);
					RTDBGAL(0, 0x38000000, 1,0); /* Result */
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1500, dtype))(Current)).it_n4);
					Result = (EIF_NATURAL_32) tu4_1;
				}
			}
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
#undef ui4_1
#undef uu4_1
#undef uu1_1
}

/* {SED_READER_WRITER}.cleanup */
void F89_1525 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cleanup";
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
	
	RTEAA(l_feature_name, 88, Current, 0, 0, 1551);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1551);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1487, dtype))(Current)).it_b);
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

/* {SED_READER_WRITER}.write_character_8 */
void F89_1526 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "write_character_8";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 88, Current, 0, 1, 1552);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1552);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (EIF_INTEGER_32) (arg1);
	tu1_1 = (EIF_NATURAL_8) ti4_1;
	uu1_1 = tu1_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu1_1
#undef arg1
}

/* {SED_READER_WRITER}.write_character_32 */
void F89_1527 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "write_character_32";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 88, Current, 0, 1, 1553);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1553);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (EIF_NATURAL_32) arg1;
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1520, dtype))(Current, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu4_1
#undef arg1
}

/* {SED_READER_WRITER}.write_string_8 */
void F89_1528 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "write_string_8";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 88, Current, 2, 1, 1554);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1554);
	RTCC(arg1, 88, l_feature_name, 1, eif_new_type(355, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	tu4_1 = (EIF_NATURAL_32) ti4_1;
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1530, dtype))(Current, uu4_1x);
	RTHOOK(4);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(6269, "count", arg1));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(7);
		ui4_1 = loc1;
		tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4657, "item", arg1))(arg1, ui4_1x)).it_c1);
		uc1 = tc1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1512, dtype))(Current, uc1x);
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef uc1
#undef arg1
}

/* {SED_READER_WRITER}.write_string_32 */
void F89_1529 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "write_string_32";
	RTEX;
	struct eif_ex_58 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(58, 0x00).id);
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 88, Current, 1, 1, 1555);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1555);
	RTCC(arg1, 88, l_feature_name, 1, eif_new_type(352, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1199, "utf_32_string_to_utf_8_string_8", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1514, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {SED_READER_WRITER}.write_immutable_string_8 */
void F89_1530 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "write_immutable_string_8";
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
	
	RTEAA(l_feature_name, 88, Current, 0, 1, 1556);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1556);
	RTCC(arg1, 88, l_feature_name, 1, eif_new_type(356, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("v_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1514, dtype))(Current, ur1x);
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

/* {SED_READER_WRITER}.write_boolean */
void F89_1531 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "write_boolean";
	RTEX;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 88, Current, 0, 1, 1557);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1557);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
	} else {
		RTHOOK(4);
		uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu1_1
#undef arg1
}

/* {SED_READER_WRITER}.write_compressed_integer_32 */
void F89_1543 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "write_compressed_integer_32";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 88, Current, 0, 1, 1568);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1568);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu4_1 = (EIF_NATURAL_32) arg1;
	uu4_1 = tu4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1530, dtype))(Current, uu4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu4_1
#undef arg1
}

/* {SED_READER_WRITER}.write_compressed_natural_32 */
void F89_1544 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "write_compressed_natural_32";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_8 tu1_1;
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
	
	RTEAA(l_feature_name, 88, Current, 0, 1, 1569);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(88, Current, 1569);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1488, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 16384L))) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (arg1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L))) {
			RTHOOK(4);
			tu1_1 = (EIF_NATURAL_8) arg1;
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
		} else {
			RTHOOK(5);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32768L);
			tu4_1 = eif_bit_or(arg1,uu4_1);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L);
			tu4_2 = eif_bit_and(tu4_1,uu4_1);
			ui4_1 = ((EIF_INTEGER_32) 8L);
			tu4_1 = eif_bit_shift_right(tu4_2,ui4_1);
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
			RTHOOK(6);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
			tu4_1 = eif_bit_and(arg1,uu4_1);
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
		}
	} else {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (arg1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 2097152L))) {
			RTHOOK(8);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 12582912L);
			tu4_1 = eif_bit_or(arg1,uu4_1);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 16711680L);
			tu4_2 = eif_bit_and(tu4_1,uu4_1);
			ui4_1 = ((EIF_INTEGER_32) 16L);
			tu4_1 = eif_bit_shift_right(tu4_2,ui4_1);
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
			RTHOOK(9);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L);
			tu4_1 = eif_bit_and(arg1,uu4_1);
			ui4_1 = ((EIF_INTEGER_32) 8L);
			tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
			tu1_1 = (EIF_NATURAL_8) tu4_2;
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
			RTHOOK(10);
			uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
			tu4_1 = eif_bit_and(arg1,uu4_1);
			tu1_1 = (EIF_NATURAL_8) tu4_1;
			uu1_1 = tu1_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
		} else {
			RTHOOK(11);
			if ((EIF_BOOLEAN) (arg1 < (EIF_NATURAL_32) ((EIF_INTEGER_32) 268435456L))) {
				RTHOOK(12);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(3758096384));
				tu4_1 = eif_bit_or(arg1,uu4_1);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4278190080));
				tu4_2 = eif_bit_and(tu4_1,uu4_1);
				ui4_1 = ((EIF_INTEGER_32) 24L);
				tu4_1 = eif_bit_shift_right(tu4_2,ui4_1);
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				uu1_1 = tu1_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
				RTHOOK(13);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 16711680L);
				tu4_1 = eif_bit_and(arg1,uu4_1);
				ui4_1 = ((EIF_INTEGER_32) 16L);
				tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
				tu1_1 = (EIF_NATURAL_8) tu4_2;
				uu1_1 = tu1_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
				RTHOOK(14);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65280L);
				tu4_1 = eif_bit_and(arg1,uu4_1);
				ui4_1 = ((EIF_INTEGER_32) 8L);
				tu4_2 = eif_bit_shift_right(tu4_1,ui4_1);
				tu1_1 = (EIF_NATURAL_8) tu4_2;
				uu1_1 = tu1_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
				RTHOOK(15);
				uu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
				tu4_1 = eif_bit_and(arg1,uu4_1);
				tu1_1 = (EIF_NATURAL_8) tu4_1;
				uu1_1 = tu1_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
			} else {
				RTHOOK(16);
				uu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1518, dtype))(Current, uu1_1x);
				RTHOOK(17);
				uu4_1 = arg1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1520, dtype))(Current, uu4_1x);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef uu4_1
#undef uu1_1
#undef arg1
}

void EIF_Minit89 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
