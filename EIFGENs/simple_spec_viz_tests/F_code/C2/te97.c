/*
 * Code for class TEST_SET_BASE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "te97.h"
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

/* {TEST_SET_BASE}.refute */
void F123_1656 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
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
	
	RTEAA("refute", 122, Current, 0, 2, 1686);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F112_1585(Current, arg1, (EIF_BOOLEAN) !arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("condition_was_false", EX_POST);
		if ((EIF_BOOLEAN) !arg2) {
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
}

/* {TEST_SET_BASE}.assert_true */
void F123_1657 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
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
	
	RTEAA("assert_true", 122, Current, 0, 2, 1687);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F112_1585(Current, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("condition_was_true", EX_POST);
		if (arg2) {
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
}

/* {TEST_SET_BASE}.assert_false */
void F123_1658 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
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
	
	RTEAA("assert_false", 122, Current, 0, 2, 1688);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F112_1585(Current, arg1, (EIF_BOOLEAN) !arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("condition_was_false", EX_POST);
		if ((EIF_BOOLEAN) !arg2) {
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
}

/* {TEST_SET_BASE}.assert_attached */
void F123_1659 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("assert_attached", 122, Current, 1, 2, 1689);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(4);
	tr1 = RTMS_EX_H(": expected attached object, got Void",36,150883428);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN)(arg2 != NULL)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("object_attached", EX_POST);
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_void */
void F123_1660 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("assert_void", 122, Current, 1, 2, 1690);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(4);
	tr1 = RTMS_EX_H(": expected Void",15,213581668);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN)(arg2 == NULL)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("object_void", EX_POST);
		if ((EIF_BOOLEAN)(arg2 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_same_reference */
void F123_1661 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,arg3);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_same_reference", 122, Current, 1, 3, 1691);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected same object reference",32,1551954021);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 0, F112_1585(Current, loc1, RTCEQ(arg2, arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("same_reference", EX_POST);
		if (RTCEQ(arg2, arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_not_same_reference */
void F123_1662 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,arg3);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_not_same_reference", 122, Current, 1, 3, 1692);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected different object references",38,2017408115);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 0, F112_1585(Current, loc1, !RTCEQ(arg2, arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("different_references", EX_POST);
		if (!RTCEQ(arg2, arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_equal */
void F123_1663 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_equal", 122, Current, 1, 3, 1693);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 != NULL) && (EIF_BOOLEAN)(arg3 != NULL))) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 80L)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
		RTHOOK(5);
		tr1 = RTMS_EX_H(": expected equal objects\012  Expected: ",37,1862823456);
		(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
		RTHOOK(6);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(arg2))-0])(arg2));
		(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
		RTHOOK(7);
		tr1 = RTMS_EX_H("\012  Actual:   ",13,1240942880);
		(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
		RTHOOK(8);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(arg3))-0])(arg3));
		(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
		RTHOOK(9);
		tr1 = RTCCL(arg3);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(arg2))-0])(arg2, tr1));
		(nstcall = 0, F112_1585(Current, loc1, tb1));
	} else {
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == NULL) && (EIF_BOOLEAN)(arg3 == NULL))) {
		} else {
			RTHOOK(11);
			tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 80L)));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
			RTHOOK(13);
			tr1 = RTMS_EX_H(": one object is Void, the other is not",38,14604916);
			(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
			RTHOOK(14);
			(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) 0));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_not_equal */
void F123_1664 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_not_equal", 122, Current, 1, 3, 1694);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 != NULL) && (EIF_BOOLEAN)(arg3 != NULL))) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
		RTHOOK(5);
		tr1 = RTMS_EX_H(": expected objects to be different, but both are: ",50,1513215008);
		(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
		RTHOOK(6);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(arg2))-0])(arg2));
		(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
		RTHOOK(7);
		tr1 = RTCCL(arg3);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(arg2))-0])(arg2, tr1));
		(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) !tb1));
	} else {
		RTHOOK(8);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg2 == NULL) && (EIF_BOOLEAN)(arg3 == NULL))) {
			RTHOOK(9);
			tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
			RTHOOK(11);
			tr1 = RTMS_EX_H(": expected objects to be different, but both are Void",53,1749315684);
			(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
			RTHOOK(12);
			(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) 0));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_integers_equal */
void F123_1665 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_integers_equal", 122, Current, 1, 3, 1695);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(4);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = RTMS_EX_H(", got ",6,1822110752);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	tr1 = eif_out__i4_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN)(arg2 == arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("values_equal", EX_POST);
		if ((EIF_BOOLEAN)(arg2 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_naturals_equal */
void F123_1666 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_NATURAL_64 arg2, EIF_NATURAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_naturals_equal", 122, Current, 1, 3, 1696);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__u8_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H(", got ",6,1822110752);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = eif_out__u8_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN)(arg2 == arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("values_equal", EX_POST);
		if ((EIF_BOOLEAN)(arg2 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_greater_than */
void F123_1667 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_greater_than", 122, Current, 1, 3, 1697);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H(" > ",3,2113056);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = eif_out__i4_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) (arg2 > arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("value_greater", EX_POST);
		if ((EIF_BOOLEAN) (arg2 > arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_greater_or_equal */
void F123_1668 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_greater_or_equal", 122, Current, 1, 3, 1698);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H(" >= ",4,540949792);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = eif_out__i4_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) (arg2 >= arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("value_greater_or_equal", EX_POST);
		if ((EIF_BOOLEAN) (arg2 >= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_less_than */
void F123_1669 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_less_than", 122, Current, 1, 3, 1699);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H(" < ",3,2112544);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = eif_out__i4_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) (arg2 < arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("value_less", EX_POST);
		if ((EIF_BOOLEAN) (arg2 < arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_less_or_equal */
void F123_1670 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_less_or_equal", 122, Current, 1, 3, 1700);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H(" <= ",4,540818720);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = eif_out__i4_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) (arg2 <= arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("value_less_or_equal", EX_POST);
		if ((EIF_BOOLEAN) (arg2 <= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_in_range */
void F123_1671 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_in_range", 122, Current, 1, 4, 1701);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_range", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= arg4), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(4);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = RTMS_EX_H(" in [",5,1769070683);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	tr1 = eif_out__i4_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(8);
	tr1 = RTMS_EX_H("..",2,11822);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(9);
	tr1 = eif_out__i4_s1(arg4);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(10);
	tr1 = RTMS_EX_H("]",1,93);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(11);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= arg3) && (EIF_BOOLEAN) (arg2 <= arg4))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("value_in_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= arg3) && (EIF_BOOLEAN) (arg2 <= arg4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_positive */
void F123_1672 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_positive", 122, Current, 1, 2, 1702);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected positive, got ",25,1824254240);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("value_positive", EX_POST);
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_negative */
void F123_1673 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_negative", 122, Current, 1, 2, 1703);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected negative, got ",25,781967392);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 0L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("value_negative", EX_POST);
		if ((EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_zero */
void F123_1674 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_zero", 122, Current, 1, 2, 1704);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected zero, got ",21,487650080);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("value_zero", EX_POST);
		if ((EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_non_zero */
void F123_1675 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_non_zero", 122, Current, 1, 2, 1705);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected non-zero, got ",25,1641541920);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) 0L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("value_non_zero", EX_POST);
		if ((EIF_BOOLEAN)(arg2 != ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_non_negative */
void F123_1676 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_non_negative", 122, Current, 1, 2, 1706);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected non-negative, got ",29,22130976);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("value_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_non_positive */
void F123_1677 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_non_positive", 122, Current, 1, 2, 1707);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected non-positive, got ",29,1064417824);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 0L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("value_non_positive", EX_POST);
		if ((EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_reals_equal */
void F123_1678 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3, EIF_REAL_64 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_reals_equal", 122, Current, 1, 4, 1708);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("epsilon_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg4, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 80L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(4);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = eif_out__r8_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = RTMS_EX_H(" +/- ",5,724757792);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	tr1 = eif_out__r8_s1(arg4);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(8);
	tr1 = RTMS_EX_H(", got ",6,1822110752);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(9);
	tr1 = eif_out__r8_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(10);
	tr8_1 = eif_abs_real64 ((EIF_REAL_64) (arg2 - arg3));
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, arg4)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("within_epsilon", EX_POST);
		tr8_1 = eif_abs_real64 ((EIF_REAL_64) (arg2 - arg3));
		if ((EIF_BOOLEAN) eif_is_less_equal_real_64 (tr8_1, arg4)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_real_greater_than */
void F123_1679 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_real_greater_than", 122, Current, 1, 3, 1709);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__r8_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H(" > ",3,2113056);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = eif_out__r8_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) eif_is_greater_real_64 (arg2, arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("value_greater", EX_POST);
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (arg2, arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_real_less_than */
void F123_1680 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_real_less_than", 122, Current, 1, 3, 1710);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__r8_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H(" < ",3,2112544);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = eif_out__r8_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) eif_is_less_real_64 (arg2, arg3)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("value_less", EX_POST);
		if ((EIF_BOOLEAN) eif_is_less_real_64 (arg2, arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_real_in_range */
void F123_1681 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REAL_64 arg2, EIF_REAL_64 arg3, EIF_REAL_64 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("assert_real_in_range", 122, Current, 1, 4, 1711);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_range", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_less_equal_real_64 (arg3, arg4), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(4);
	tr1 = RTMS_EX_H(": expected ",11,485818144);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = eif_out__r8_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	tr1 = RTMS_EX_H(" in [",5,1769070683);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	tr1 = eif_out__r8_s1(arg3);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(8);
	tr1 = RTMS_EX_H("..",2,11822);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(9);
	tr1 = eif_out__r8_s1(arg4);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(10);
	tr1 = RTMS_EX_H("]",1,93);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(11);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg2, arg3) && (EIF_BOOLEAN) eif_is_less_equal_real_64 (arg2, arg4))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("value_in_range", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg2, arg3) && (EIF_BOOLEAN) eif_is_less_equal_real_64 (arg2, arg4))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_string_contains */
void F123_1682 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLR(4,arg2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_string_contains", 122, Current, 1, 3, 1712);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected string to contain \'",30,1466685735);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg3));
	RTHOOK(5);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
	(nstcall = 1, F1085_8025(RTCW(loc1), tw1));
	RTHOOK(6);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(arg2))-1079])(arg2, arg3));
	(nstcall = 0, F112_1585(Current, loc1, tb1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("contains_substring", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(arg2))-1079])(arg2, arg3));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_string_not_contains */
void F123_1683 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLR(4,arg2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_string_not_contains", 122, Current, 1, 3, 1713);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected string to NOT contain \'",34,1009913639);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg3));
	RTHOOK(5);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
	(nstcall = 1, F1085_8025(RTCW(loc1), tw1));
	RTHOOK(6);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(arg2))-1079])(arg2, arg3));
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) !tb1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("not_contains_substring", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(arg2))-1079])(arg2, arg3));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_string_starts_with */
void F123_1684 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLR(4,arg2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_string_starts_with", 122, Current, 1, 3, 1714);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected string to start with \'",33,82307623);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg3));
	RTHOOK(5);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
	(nstcall = 1, F1085_8025(RTCW(loc1), tw1));
	RTHOOK(6);
	tb1 = (nstcall = 1, F1076_7648(RTCW(arg2), arg3));
	(nstcall = 0, F112_1585(Current, loc1, tb1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("starts_with_prefix", EX_POST);
		tb1 = (nstcall = 1, F1076_7648(RTCW(arg2), arg3));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_string_ends_with */
void F123_1685 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLR(4,arg2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_string_ends_with", 122, Current, 1, 3, 1715);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected string to end with \'",31,555212583);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg3));
	RTHOOK(5);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
	(nstcall = 1, F1085_8025(RTCW(loc1), tw1));
	RTHOOK(6);
	tb1 = (nstcall = 1, F1076_7649(RTCW(arg2), arg3));
	(nstcall = 0, F112_1585(Current, loc1, tb1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("ends_with_suffix", EX_POST);
		tb1 = (nstcall = 1, F1076_7649(RTCW(arg2), arg3));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_string_empty */
void F123_1686 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("assert_string_empty", 122, Current, 1, 2, 1716);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected empty string, got \'",30,175370791);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg2));
	RTHOOK(5);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
	(nstcall = 1, F1085_8025(RTCW(loc1), tw1));
	RTHOOK(6);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg2))-1079])(arg2));
	(nstcall = 0, F112_1585(Current, loc1, tb1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("string_is_empty", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg2))-1079])(arg2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_string_not_empty */
void F123_1687 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("assert_string_not_empty", 122, Current, 1, 2, 1717);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected non-empty string",27,1667098727);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg2))-1079])(arg2));
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) !tb1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("string_not_empty", EX_POST);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg2))-1079])(arg2));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_string_length */
void F123_1688 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("assert_string_length", 122, Current, 1, 3, 1718);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected length ",18,2016630816);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H(", got ",6,1822110752);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg3))-1079])(arg3));
	tr1 = eif_out__i4_s1(ti4_1);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg3))-1079])(arg3));
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN)(ti4_1 == arg2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("length_matches", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg3))-1079])(arg3));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_strings_equal_case_insensitive */
void F123_1689 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,arg3);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("assert_strings_equal_case_insensitive", 122, Current, 1, 3, 1719);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 80L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected \'",12,1963095847);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg2));
	RTHOOK(5);
	tr1 = RTMS_EX_H("\' (case-insensitive), got \'",27,168288807);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg3));
	RTHOOK(7);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
	(nstcall = 1, F1085_8025(RTCW(loc1), tw1));
	RTHOOK(8);
	tb1 = (nstcall = 1, F1076_7643(RTCW(arg2), arg3));
	(nstcall = 0, F112_1585(Current, loc1, tb1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("case_insensitive_equal", EX_POST);
		tb1 = (nstcall = 1, F1076_7643(RTCW(arg2), arg3));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_strings_equal_diff */
void F123_1690 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,arg3);
	RTLR(2,loc1);
	RTLR(3,arg1);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLIU(6);
	
	RTEAA("assert_strings_equal_diff", 122, Current, 1, 3, 1720);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 1, F1083_7924(RTCW(arg2), arg3));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 0, F123_1696(Current, arg1, arg2, arg3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) 0));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("strings_equal", EX_POST);
		tb1 = (nstcall = 1, F1083_7924(RTCW(arg2), arg3));
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
}

/* {TEST_SET_BASE}.assert_array_has_item */
void F123_1691 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg3);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("assert_array_has_item", 122, Current, 4, 3, 1721);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_1_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_0_);
		if (!(EIF_BOOLEAN) (loc3 > ti4_1)) {
			tb1 = loc2;
		}
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(arg2))-776])(arg2, (EIF_REFERENCE) &loc3));
		if (RTCEQ(tr1, arg3)) {
			RTHOOK(4);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(5);
		loc3++;
	}
	RTHOOK(6);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(8);
	tr1 = RTMS_EX_H(": array should contain item",27,1454335597);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(9);
	(nstcall = 0, F112_1585(Current, loc1, loc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("array_has_item", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_0_);
		tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), ti4_2));
		tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
		loc4 = (EIF_REFERENCE) tr1;
		tb2 = EIF_FALSE;
		for (;;) {
			if (tb2) break;
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc4)-334])(loc4));
			if (tb3) break;
			RTHOOK(11);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc4)-334])(loc4));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(arg2))-776])(arg2, (EIF_REFERENCE) &ti4_1));
			tb2 = RTCEQ(tr1, arg3);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc4)-334])(loc4));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_array_not_has_item */
void F123_1692 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg3);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("assert_array_not_has_item", 122, Current, 4, 3, 1722);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_1_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_0_);
		if (!(EIF_BOOLEAN) (loc3 > ti4_1)) {
			tb1 = loc2;
		}
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(arg2))-776])(arg2, (EIF_REFERENCE) &loc3));
		if (RTCEQ(tr1, arg3)) {
			RTHOOK(4);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(5);
		loc3++;
	}
	RTHOOK(6);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(8);
	tr1 = RTMS_EX_H(": array should NOT contain item",31,373738861);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(9);
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN) !loc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("array_not_has_item", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_0_);
		tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), ti4_2));
		tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
		loc4 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc4)-334])(loc4));
			if (tb3) break;
			RTHOOK(11);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc4)-334])(loc4));
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R4408[Dtype(RTCW(arg2))-776])(arg2, (EIF_REFERENCE) &ti4_1));
			tb2 = !RTCEQ(tr1, arg3);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc4)-334])(loc4));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_iterable_is_empty */
void F123_1693 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("assert_iterable_is_empty", 122, Current, 4, 2, 1723);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(arg2))-365])(arg2));
	loc3 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc3)-334])(loc3));
		if (tb1) break;
		RTHOOK(3);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc3)-334])(loc3));
	}
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(7);
	tr1 = RTMS_EX_H(": expected empty collection",27,848523886);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 0, F112_1585(Current, loc1, loc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("collection_empty", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(arg2))-365])(arg2));
		loc4 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc4)-334])(loc4));
			if (tb3) break;
			RTHOOK(10);
			tb2 = (EIF_BOOLEAN) 0;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc4)-334])(loc4));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_iterable_not_empty */
void F123_1694 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc3);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLR(5,Current);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("assert_iterable_not_empty", 122, Current, 4, 2, 1724);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(arg2))-365])(arg2));
	loc3 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc3)-334])(loc3));
		if (tb1) break;
		RTHOOK(3);
		loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc3)-334])(loc3));
	}
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(7);
	tr1 = RTMS_EX_H(": expected non-empty collection",31,2118432622);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(8);
	(nstcall = 0, F112_1585(Current, loc1, loc2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("collection_not_empty", EX_POST);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(arg2))-365])(arg2));
		loc4 = (EIF_REFERENCE) tr1;
		tb2 = EIF_FALSE;
		for (;;) {
			if (tb2) break;
			tb3 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc4)-334])(loc4));
			if (tb3) break;
			RTHOOK(10);
			tb2 = (EIF_BOOLEAN) 1;
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc4)-334])(loc4));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.assert_count_equals */
void F123_1695 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,arg3);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("assert_count_equals", 122, Current, 1, 3, 1725);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 60L)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H(": expected count ",17,242376224);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(4);
	tr1 = eif_out__i4_s1(arg2);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H(", got ",6,1822110752);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(6);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg3))-743])(arg3));
	tr1 = eif_out__i4_s1(ti4_1);
	(nstcall = 1, F1085_8011(RTCW(loc1), tr1));
	RTHOOK(7);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg3))-743])(arg3));
	(nstcall = 0, F112_1585(Current, loc1, (EIF_BOOLEAN)(ti4_1 == arg2)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("count_matches", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg3))-743])(arg3));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {TEST_SET_BASE}.build_string_diff */
EIF_REFERENCE F123_1696 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc5 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_32 loc6 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,arg1);
	RTLR(3,arg2);
	RTLR(4,arg3);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("build_string_diff", 122, Current, 6, 3, 1726);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 200L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1085_8011(RTCW(Result), arg1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H("================================================================================",80,1340717885);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(5);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(6);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg3))-1079])(arg3));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	tr1 = RTMS_EX_H("Expected length: ",17,8463904);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(9);
	(nstcall = 1, F1085_8015(RTCW(Result), loc3));
	RTHOOK(10);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(11);
	tr1 = RTMS_EX_H("Actual length:   ",17,968441632);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(12);
	(nstcall = 1, F1085_8015(RTCW(Result), loc4));
	RTHOOK(13);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(14);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(15);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(16);
		tb1 = '\01';
		ti4_1 = eif_min_int32 (loc3,loc4);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) break;
		RTHOOK(17);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg2))-1079])(arg2, loc1));
		tw2 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg3))-1079])(arg3, loc1));
		if ((EIF_BOOLEAN)(tw1 != tw2)) {
			RTHOOK(18);
			loc2 = (EIF_INTEGER_32) loc1;
		}
		RTHOOK(19);
		loc1++;
	}
	RTHOOK(20);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc3 != loc4))) {
		RTHOOK(21);
		ti4_1 = eif_min_int32 (loc3,loc4);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	}
	RTHOOK(22);
	tr1 = RTMS_EX_H("First diff at:   position ",26,2058622752);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(23);
	(nstcall = 1, F1085_8015(RTCW(Result), loc2));
	RTHOOK(24);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(25);
	tr1 = RTMS_EX_H("================================================================================",80,1340717885);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(26);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(27);
	tr1 = RTMS_EX_H("EXPECTED:\012  ",12,1600549664);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(28);
	tr1 = (nstcall = 0, F123_1697(Current, arg2));
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(29);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(30);
	tr1 = RTMS_EX_H("ACTUAL:\012  ",10,679504160);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(31);
	tr1 = (nstcall = 0, F123_1697(Current, arg3));
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(32);
	tr1 = RTMS_EX_H("\012",1,10);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTHOOK(33);
	if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(34);
		tr1 = RTMS_EX_H("================================================================================",80,1340717885);
		(nstcall = 1, F1085_8011(RTCW(Result), tr1));
		RTHOOK(35);
		tr1 = RTMS_EX_H("\012",1,10);
		(nstcall = 1, F1085_8011(RTCW(Result), tr1));
		RTHOOK(36);
		tr1 = RTMS_EX_H("Character-by-character at difference position ",46,2066942496);
		(nstcall = 1, F1085_8011(RTCW(Result), tr1));
		RTHOOK(37);
		(nstcall = 1, F1085_8015(RTCW(Result), loc2));
		RTHOOK(38);
		tr1 = RTMS_EX_H(":\012",2,14858);
		(nstcall = 1, F1085_8011(RTCW(Result), tr1));
		RTHOOK(39);
		ti4_1 = eif_max_int32 ((EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L)),((EIF_INTEGER_32) 1L));
		loc1 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(40);
			ti4_1 = eif_max_int32 (loc3,loc4);
			ti4_2 = eif_min_int32 ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)),ti4_1);
			if ((EIF_BOOLEAN) (loc1 > ti4_2)) break;
			RTHOOK(41);
			tr1 = RTMS_EX_H("  Position ",11,399455008);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			RTHOOK(42);
			(nstcall = 1, F1085_8015(RTCW(Result), loc1));
			RTHOOK(43);
			tr1 = RTMS_EX_H(": ",2,14880);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			RTHOOK(44);
			if ((EIF_BOOLEAN) (loc1 <= loc3)) {
				RTHOOK(45);
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg2))-1079])(arg2, loc1));
				loc5 = (EIF_CHARACTER_32) tw1;
				RTHOOK(46);
				tr1 = RTMS_EX_H("Expected=",9,344101181);
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
				RTHOOK(47);
				tr1 = (nstcall = 0, F123_1698(Current, loc5));
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
				RTHOOK(48);
				tr1 = RTMS_EX_H(" (",2,8232);
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
				RTHOOK(49);
				ti4_1 = (EIF_INTEGER_32) (loc5);
				(nstcall = 1, F1085_8015(RTCW(Result), ti4_1));
				RTHOOK(50);
				tr1 = RTMS_EX_H(")",1,41);
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			} else {
				RTHOOK(51);
				tr1 = RTMS_EX_H("Expected=<END>",14,311845182);
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			}
			RTHOOK(52);
			tr1 = RTMS_EX_H("  ",2,8224);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			RTHOOK(53);
			if ((EIF_BOOLEAN) (loc1 <= loc4)) {
				RTHOOK(54);
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg3))-1079])(arg3, loc1));
				loc6 = (EIF_CHARACTER_32) tw1;
				RTHOOK(55);
				tr1 = RTMS_EX_H("Actual=",7,520746045);
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
				RTHOOK(56);
				tr1 = (nstcall = 0, F123_1698(Current, loc6));
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
				RTHOOK(57);
				tr1 = RTMS_EX_H(" (",2,8232);
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
				RTHOOK(58);
				ti4_1 = (EIF_INTEGER_32) (loc6);
				(nstcall = 1, F1085_8015(RTCW(Result), ti4_1));
				RTHOOK(59);
				tr1 = RTMS_EX_H(")",1,41);
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			} else {
				RTHOOK(60);
				tr1 = RTMS_EX_H("Actual=<END>",12,1369069118);
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			}
			RTHOOK(61);
			if ((EIF_BOOLEAN)(loc1 == loc2)) {
				RTHOOK(62);
				tr1 = RTMS_EX_H(" <-- FIRST DIFFERENCE",21,1270945349);
				(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			}
			RTHOOK(63);
			tr1 = RTMS_EX_H("\012",1,10);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			RTHOOK(64);
			loc1++;
		}
	}
	RTHOOK(65);
	tr1 = RTMS_EX_H("================================================================================",80,1340717885);
	(nstcall = 1, F1085_8011(RTCW(Result), tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(66);
	RTLE;
	RTEE;
	return Result;
}

/* {TEST_SET_BASE}.printable_string */
EIF_REFERENCE F123_1697 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("printable_string", 122, Current, 1, 1, 1727);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	(nstcall = -1, F1083_7897(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 * ((EIF_INTEGER_32) 2L))));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
		tr1 = (nstcall = 0, F123_1698(Current, tw1));
		(nstcall = 1, F1085_8011(RTCW(Result), tr1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {TEST_SET_BASE}.printable_char */
EIF_REFERENCE F123_1698 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("printable_char", 122, Current, 0, 1, 1728);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1083_7897(RTCW(tr1), ((EIF_INTEGER_32) 6L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\012':
			RTHOOK(3);
			tr1 = RTMS_EX_H("\\n",2,23662);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			break;
		case (EIF_CHARACTER_8) '\015':
			RTHOOK(4);
			tr1 = RTMS_EX_H("\\r",2,23666);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			break;
		case (EIF_CHARACTER_8) '\011':
			RTHOOK(5);
			tr1 = RTMS_EX_H("\\t",2,23668);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			break;
		case (EIF_CHARACTER_8) '\010':
			RTHOOK(6);
			tr1 = RTMS_EX_H("\\b",2,23650);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			break;
		case (EIF_CHARACTER_8) '\014':
			RTHOOK(7);
			tr1 = RTMS_EX_H("\\f",2,23654);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			break;
		case (EIF_CHARACTER_8) '\'':
			RTHOOK(8);
			tr1 = RTMS_EX_H("\\\'",2,23591);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			break;
		case (EIF_CHARACTER_8) '\"':
			RTHOOK(9);
			tr1 = RTMS_EX_H("\\\"",2,23586);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			break;
		case (EIF_CHARACTER_8) '%':
			RTHOOK(10);
			tr1 = RTMS_EX_H("\\\\",2,23644);
			(nstcall = 1, F1085_8011(RTCW(Result), tr1));
			break;
		default:
			RTHOOK(11);
			tb1 = '\0';
			ti4_1 = (EIF_INTEGER_32) (arg1);
			if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 32L))) {
				ti4_1 = (EIF_INTEGER_32) (arg1);
				tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 126L));
			}
			if (tb1) {
				RTHOOK(12);
				(nstcall = 1, F1085_8025(RTCW(Result), arg1));
			} else {
				RTHOOK(13);
				ti4_1 = (EIF_INTEGER_32) (arg1);
				if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 32L))) {
					RTHOOK(14);
					tr1 = RTMS_EX_H("\\x",2,23672);
					(nstcall = 1, F1085_8011(RTCW(Result), tr1));
					RTHOOK(15);
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
					*(EIF_INTEGER_32 *)tr1 = ti4_1;
					tr2 = (nstcall = 1, F1004_6747(RTCW(tr1)));
					(nstcall = 1, F1085_8011(RTCW(Result), tr2));
				} else {
					RTHOOK(16);
					tr1 = RTMS_EX_H("\\u",2,23669);
					(nstcall = 1, F1085_8011(RTCW(Result), tr1));
					RTHOOK(17);
					ti4_1 = (EIF_INTEGER_32) (arg1);
					tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
					*(EIF_INTEGER_32 *)tr1 = ti4_1;
					tr2 = (nstcall = 1, F1004_6747(RTCW(tr1)));
					(nstcall = 1, F1085_8011(RTCW(Result), tr2));
				}
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit97 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
