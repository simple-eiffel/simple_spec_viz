/*
 * Code for class SED_SESSION_SERIALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se122.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_SESSION_SERIALIZER}.make */
void F148_1979 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 147, Current, 0, 1, 2027);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_serializer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_serializer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(276, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(280, 1).id);
	(nstcall = -1, F281_3769(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNSMART(eif_new_type(890, 1).id);
	(nstcall = -1, F891_6014(RTCW(tr1), (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTOUCR(160,(nstcall = 0, F148_1993), (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(8);
	(nstcall = 0, F148_1996(Current, ((EIF_NATURAL_32) 4U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("serializer_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
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

/* {SED_SESSION_SERIALIZER}.root_object */
EIF_REFERENCE F148_1980 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("root_object", 147, Current, 0, 0, 2028);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_SERIALIZER}.serializer */
EIF_REFERENCE F148_1981 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SED_SESSION_SERIALIZER}.is_traversing_mode_set */
EIF_BOOLEAN F148_1982 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_traversing_mode_set", 147, Current, 0, 0, 2030);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_SERIALIZER}.is_root_object_set */
EIF_BOOLEAN F148_1983 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_);
}


/* {SED_SESSION_SERIALIZER}.set_breadth_first_traversing_mode */
void F148_1984 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("set_breadth_first_traversing_mode", 147, Current, 1, 0, 2032);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(160,(nstcall = 0, F148_1993), (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("traversing_mode_set", EX_POST);
		if ((nstcall = 0, F148_1982(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("breadth_first_mode", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc1 = tr1;
		loc1 = RTRV(eif_new_type(152, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.set_depth_first_traversing_mode */
void F148_1985 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("set_depth_first_traversing_mode", 147, Current, 1, 0, 2033);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(161,(nstcall = 0, F148_1994), (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("traversing_mode_set", EX_POST);
		if ((nstcall = 0, F148_1982(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("depth_first_mode", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		loc1 = tr1;
		loc1 = RTRV(eif_new_type(151, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.set_root_object */
void F148_1986 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("set_root_object", 147, Current, 0, 1, 2034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("traversing_mode_set", EX_PRE);
		RTTE((nstcall = 0, F148_1982(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = RTCCL(arg1);
	(nstcall = 1, F151_2040(RTCW(tr1), tr2));
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("root_object_set", EX_POST);
		tb1 = '\0';
		if (RTCEQ((nstcall = 0, F148_1980(Current)), arg1)) {
			tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("root_object_identity", EX_POST);
		tr1 = (nstcall = 0, F148_1980(Current));
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr3 = *(EIF_REFERENCE *)(RTCW(tr2));
		tr2 = tr3;
		if (RTCEQ(tr1, tr2)) {
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

/* {SED_SESSION_SERIALIZER}.set_serializer */
void F148_1987 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_serializer", 147, Current, 0, 1, 2035);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_serializer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_serializer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3382(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("serializer_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
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

/* {SED_SESSION_SERIALIZER}.encode */
void F148_1988 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLIU(6);
	
	RTEAA("encode", 147, Current, 5, 0, 1992);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("traversing_mode_set", EX_PRE);
		RTTE((nstcall = 0, F148_1982(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("root_object_set", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_5_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) !(nstcall = 0, F263_3306(Current))) {
		RTHOOK(4);
		loc1 = RTLNS(eif_new_type(301, 0x01).id, 301, _OBJSIZ_0_0_0_0_0_0_0_0_);
		RTHOOK(5);
		tb1 = (nstcall = 1, F302_3874(loc1));
		loc2 = (EIF_BOOLEAN) tb1;
		RTHOOK(6);
		(nstcall = 1, F302_3887(loc1));
	}
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(nstcall = 1, F151_2044(RTCW(tr1), (EIF_BOOLEAN) 1));
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(nstcall = 1, F151_2045(RTCW(tr1), (EIF_BOOLEAN) 1));
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(nstcall = 1, F151_2048(RTCW(tr1)));
	RTHOOK(10);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_4_);
	loc4 = tr2;
	if (EIF_TEST(loc4)) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_5_);
		loc5 = tr2;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_1_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_) = (EIF_BOOLEAN) tb1;
		RTHOOK(12);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(loc4)-743])(loc4));
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(13);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(loc4)-743])(loc4));
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_4_3_0_9_);
		if ((EIF_BOOLEAN) (ti4_1 > ti4_2)) {
			RTHOOK(14);
			tr1 = RTLNSMART(eif_new_type(890, 1).id);
			(nstcall = -1, F891_6014(RTCW(tr1), loc3));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(15);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F109_1544(RTCW(tr1), loc3));
		RTHOOK(16);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R1947[dtype-147])(Current, loc4, loc5));
		RTHOOK(17);
		(nstcall = 0, F148_2002(Current, loc4));
	}
	RTHOOK(18);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	(nstcall = 1, F151_2049(RTCW(tr1)));
	RTHOOK(19);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	(nstcall = 1, F891_6016(RTCW(tr1)));
	RTHOOK(20);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != NULL) && loc2)) {
		RTHOOK(21);
		(nstcall = 1, F302_3888(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.reflector */
EIF_REFERENCE F148_1989 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SED_SESSION_SERIALIZER}.reflected_object */
EIF_REFERENCE F148_1990 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SED_SESSION_SERIALIZER}.traversable */
EIF_REFERENCE F148_1991 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SED_SESSION_SERIALIZER}.object_indexes */
EIF_REFERENCE F148_1992 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SED_SESSION_SERIALIZER}.breadth_first_traversable */
static EIF_REFERENCE F148_1993_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(160)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("breadth_first_traversable", 147, Current, 0, 0, 1997);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(152, 0x01).id, 152, _OBJSIZ_6_6_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F148_1993 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(160,F148_1993_body,(Current));
}

/* {SED_SESSION_SERIALIZER}.depth_first_traversable */
static EIF_REFERENCE F148_1994_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(161)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("depth_first_traversable", 147, Current, 0, 0, 1998);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(151, 0x01).id, 151, _OBJSIZ_6_6_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F148_1994 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(161,F148_1994_body,(Current));
}

/* {SED_SESSION_SERIALIZER}.version */
EIF_NATURAL_32 F148_1995 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current+ _LNGOFF_5_2_0_0_);
}


/* {SED_SESSION_SERIALIZER}.set_version */
void F148_1996 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_version", 147, Current, 0, 1, 2000);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_5_2_0_0_) = (EIF_NATURAL_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.is_store_settings_enabled */
EIF_BOOLEAN F148_1997 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_store_settings_enabled", 147, Current, 0, 0, 2001);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_SERIALIZER}.has_reference_with_copy_semantics */
EIF_BOOLEAN F148_1998 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_);
}


/* {SED_SESSION_SERIALIZER}.write_header */
void F148_1999 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("write_header", 147, Current, 0, 2, 2003);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_list_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[Dtype(RTCW(arg1))-663])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F148_2000(Current));
	RTHOOK(4);
	(nstcall = 0, F148_2001(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.write_settings */
void F148_2000 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("write_settings", 147, Current, 0, 0, 2004);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F148_1997(Current))) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F109_1544(RTCW(tr1), *(EIF_NATURAL_32 *)(Current+ _LNGOFF_5_2_0_0_)));
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F109_1531(RTCW(tr1), *(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.write_object_table */
void F148_2001 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc3);
	RTLR(5,loc7);
	RTLR(6,tr1);
	RTLR(7,loc6);
	RTLR(8,loc8);
	RTLIU(9);
	
	RTEAA("write_object_table", 147, Current, 8, 1, 2005);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_list_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[Dtype(RTCW(arg1))-663])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1531(RTCW(loc2), (EIF_BOOLEAN) 1));
	RTHOOK(5);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	RTHOOK(6);
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(7);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4901[Dtype(RTCW(arg1))-866])(arg1));
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
	loc5 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc4 == loc5)) break;
		RTHOOK(11);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc7))-776])(loc7, loc4));
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(12);
		tr1 = RTCCL(loc6);
		(nstcall = 1, F281_3778(RTCW(loc1), tr1));
		RTHOOK(13);
		loc4++;
		RTHOOK(14);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_0_);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		(nstcall = 1, F109_1544(RTCW(loc2), tu4_1));
		RTHOOK(15);
		tr1 = RTCCL(loc6);
		tu4_1 = (nstcall = 1, F891_6015(RTCW(loc3), tr1));
		(nstcall = 1, F109_1544(RTCW(loc2), tu4_1));
		RTHOOK(16);
		tb1 = (nstcall = 1, F276_3564(RTCW(loc1)));
		if (tb1) {
			RTHOOK(17);
			(nstcall = 1, F110_1561(RTCW(loc2), ((EIF_NATURAL_8) 1U)));
			RTHOOK(18);
			ti4_1 = (nstcall = 1, F276_3560(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			ti4_1 = (nstcall = 0, F147_1977(Current, ti4_1));
			(nstcall = 1, F109_1543(RTCW(loc2), ti4_1));
			RTHOOK(19);
			loc8 = RTCCL(loc6);
			loc8 = RTRV(eif_new_type(897, 0x01),loc8);
			if ((loc8) && RTS_OS (Current, loc8)) loc8 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc8)) {
				RTHOOK(20);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5139[Dtype(loc8)-898])(loc8));
				(nstcall = 1, F109_1543(RTCW(loc2), ti4_1));
			} else {
				
			}
		} else {
			RTHOOK(21);
			tb1 = (nstcall = 1, F276_3568(RTCW(loc1)));
			if (tb1) {
				RTHOOK(22);
				(nstcall = 1, F110_1561(RTCW(loc2), ((EIF_NATURAL_8) 2U)));
			} else {
				RTHOOK(23);
				(nstcall = 1, F110_1561(RTCW(loc2), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L)));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_objects */
void F148_2002 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc8 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc7);
	RTLR(6,tr1);
	RTLR(7,loc4);
	RTLR(8,loc9);
	RTLIU(9);
	
	RTEAA("encode_objects", 147, Current, 9, 1, 2006);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_list_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4371[Dtype(RTCW(arg1))-663])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	RTHOOK(4);
	loc2 = *(EIF_REFERENCE *)(Current);
	RTHOOK(5);
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(6);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4901[Dtype(RTCW(arg1))-866])(arg1));
	loc7 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(8);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(arg1))-743])(arg1));
	loc6 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc5 == loc6)) break;
		RTHOOK(10);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc7))-776])(loc7, loc5));
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		tr1 = RTCCL(loc4);
		(nstcall = 1, F281_3778(RTCW(loc1), tr1));
		RTHOOK(12);
		loc5++;
		RTHOOK(13);
		tr1 = RTCCL(loc4);
		tu4_1 = (nstcall = 1, F891_6015(RTCW(loc3), tr1));
		loc8 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(14);
		(nstcall = 1, F109_1544(RTCW(loc2), loc8));
		
		RTHOOK(15);
		tb1 = (nstcall = 1, F276_3564(RTCW(loc1)));
		if (tb1) {
			RTHOOK(16);
			tr1 = RTCCL(loc4);
			ti4_1 = (nstcall = 1, F276_3560(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			ti4_1 = (nstcall = 0, F147_1977(Current, ti4_1));
			(nstcall = 0, F148_2006(Current, tr1, ti4_1));
		} else {
			RTHOOK(17);
			tb1 = (nstcall = 1, F276_3568(RTCW(loc1)));
			if (tb1) {
				RTHOOK(18);
				loc9 = RTCCL(loc4);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,996,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc9 = RTRV(typres0,loc9);
				}
				if ((loc9) && RTS_OS (Current, loc9)) loc9 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc9)) {
					RTHOOK(19);
					(nstcall = 0, F148_2005(Current, loc9));
				} else {
					
				}
			} else {
				RTHOOK(20);
				(nstcall = 0, F148_2004(Current, loc1));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_reference */
void F148_2003 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("encode_reference", 147, Current, 0, 1, 2007);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr3 = RTCCL(arg1);
		tu4_1 = (nstcall = 1, F891_6015(RTCW(tr2), tr3));
		(nstcall = 1, F109_1544(RTCW(tr1), tu4_1));
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F109_1544(RTCW(tr1), (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_normal_object */
void F148_2004 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("encode_normal_object", 147, Current, 4, 1, 2008);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F276_3615(RTCW(arg1)));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(5);
		tb1 = (nstcall = 1, F276_3569(RTCW(arg1), loc1));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F276_3577(RTCW(arg1), loc1));
			switch (ti4_1) {
				case 3L:
					RTHOOK(7);
					tb1 = (nstcall = 1, F276_3584(RTCW(arg1), loc1));
					(nstcall = 1, F109_1531(RTCW(loc3), tb1));
					break;
				case 2L:
					RTHOOK(8);
					tc1 = (nstcall = 1, F276_3582(RTCW(arg1), loc1));
					(nstcall = 1, F109_1526(RTCW(loc3), tc1));
					break;
				case 12L:
					RTHOOK(9);
					tw1 = (nstcall = 1, F276_3583(RTCW(arg1), loc1));
					(nstcall = 1, F109_1527(RTCW(loc3), tw1));
					break;
				case 13L:
					RTHOOK(10);
					tu1_1 = (nstcall = 1, F276_3585(RTCW(arg1), loc1));
					(nstcall = 1, F110_1561(RTCW(loc3), tu1_1));
					break;
				case 14L:
					RTHOOK(11);
					tu2_1 = (nstcall = 1, F276_3586(RTCW(arg1), loc1));
					(nstcall = 1, F110_1562(RTCW(loc3), tu2_1));
					break;
				case 15L:
					RTHOOK(12);
					tu4_1 = (nstcall = 1, F276_3587(RTCW(arg1), loc1));
					(nstcall = 1, F110_1563(RTCW(loc3), tu4_1));
					break;
				case 16L:
					RTHOOK(13);
					tu8_1 = (nstcall = 1, F276_3588(RTCW(arg1), loc1));
					(nstcall = 1, F110_1564(RTCW(loc3), tu8_1));
					break;
				case 9L:
					RTHOOK(14);
					ti1_1 = (nstcall = 1, F276_3589(RTCW(arg1), loc1));
					(nstcall = 1, F110_1565(RTCW(loc3), ti1_1));
					break;
				case 10L:
					RTHOOK(15);
					ti2_1 = (nstcall = 1, F276_3590(RTCW(arg1), loc1));
					(nstcall = 1, F110_1566(RTCW(loc3), ti2_1));
					break;
				case 4L:
					RTHOOK(16);
					ti4_1 = (nstcall = 1, F276_3591(RTCW(arg1), loc1));
					(nstcall = 1, F110_1567(RTCW(loc3), ti4_1));
					break;
				case 11L:
					RTHOOK(17);
					ti8_1 = (nstcall = 1, F276_3592(RTCW(arg1), loc1));
					(nstcall = 1, F110_1568(RTCW(loc3), ti8_1));
					break;
				case 5L:
					RTHOOK(18);
					tr4_1 = (nstcall = 1, F276_3593(RTCW(arg1), loc1));
					(nstcall = 1, F110_1569(RTCW(loc3), tr4_1));
					break;
				case 6L:
					RTHOOK(19);
					tr8_1 = (nstcall = 1, F276_3595(RTCW(arg1), loc1));
					(nstcall = 1, F110_1570(RTCW(loc3), tr8_1));
					break;
				case 0L:
					RTHOOK(20);
					tp1 = (nstcall = 1, F276_3594(RTCW(arg1), loc1));
					(nstcall = 1, F110_1571(RTCW(loc3), tp1));
					break;
				case 1L:
					RTHOOK(21);
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_5_1_)) {
						RTHOOK(22);
						tb1 = (nstcall = 1, F276_3571(RTCW(arg1), loc1));
						if (tb1) {
							RTHOOK(23);
							(nstcall = 1, F109_1531(RTCW(loc3), (EIF_BOOLEAN) 1));
							RTHOOK(24);
							tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3266[Dtype(RTCW(arg1))-279])(arg1, loc1));
							loc4 = (EIF_REFERENCE) tr1;
							RTHOOK(25);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_0_0_0_);
							(nstcall = 1, F109_1543(RTCW(loc3), ti4_1));
							RTHOOK(26);
							(nstcall = 0, F148_2004(Current, loc4));
						} else {
							RTHOOK(27);
							(nstcall = 1, F109_1531(RTCW(loc3), (EIF_BOOLEAN) 0));
							RTHOOK(28);
							tr1 = (nstcall = 1, F276_3562(RTCW(arg1), loc1));
							tr2 = RTCCL(tr1);
							(nstcall = 0, F148_2003(Current, tr2));
						}
					} else {
						RTHOOK(29);
						tr1 = (nstcall = 1, F276_3562(RTCW(arg1), loc1));
						tr2 = RTCCL(tr1);
						(nstcall = 0, F148_2003(Current, tr2));
					}
					break;
				case 7L:
					RTHOOK(30);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
					(nstcall = 1, F109_1543(RTCW(loc3), ti4_1));
					RTHOOK(31);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3268[Dtype(RTCW(arg1))-279])(arg1, loc1));
					(nstcall = 0, F148_2004(Current, tr1));
					break;
				default:
					
					break;
			}
		}
		RTHOOK(32);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_tuple_object */
void F148_2005 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("encode_tuple_object", 147, Current, 4, 1, 2009);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tuple_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = (nstcall = 1, F997_6397(arg1));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tu1_1 = (nstcall = 1, F997_6477(arg1, loc1));
		loc3 = (EIF_NATURAL_8) tu1_1;
		RTHOOK(7);
		(nstcall = 1, F110_1561(RTCW(loc4), loc3));
		RTHOOK(8);
		switch (loc3) {
			case 1U:
				RTHOOK(9);
				tb1 = (nstcall = 1, F997_6371(arg1, loc1));
				(nstcall = 1, F109_1531(RTCW(loc4), tb1));
				break;
			case 2U:
				RTHOOK(10);
				tc1 = (nstcall = 1, F997_6372(arg1, loc1));
				(nstcall = 1, F109_1526(RTCW(loc4), tc1));
				break;
			case 14U:
				RTHOOK(11);
				tw1 = (nstcall = 1, F997_6374(arg1, loc1));
				(nstcall = 1, F109_1527(RTCW(loc4), tw1));
				break;
			case 10U:
				RTHOOK(12);
				tu1_1 = (nstcall = 1, F997_6378(arg1, loc1));
				(nstcall = 1, F110_1561(RTCW(loc4), tu1_1));
				break;
			case 11U:
				RTHOOK(13);
				tu2_1 = (nstcall = 1, F997_6379(arg1, loc1));
				(nstcall = 1, F110_1562(RTCW(loc4), tu2_1));
				break;
			case 12U:
				RTHOOK(14);
				tu4_1 = (nstcall = 1, F997_6380(arg1, loc1));
				(nstcall = 1, F110_1563(RTCW(loc4), tu4_1));
				break;
			case 13U:
				RTHOOK(15);
				tu8_1 = (nstcall = 1, F997_6381(arg1, loc1));
				(nstcall = 1, F110_1564(RTCW(loc4), tu8_1));
				break;
			case 6U:
				RTHOOK(16);
				ti1_1 = (nstcall = 1, F997_6382(arg1, loc1));
				(nstcall = 1, F110_1565(RTCW(loc4), ti1_1));
				break;
			case 7U:
				RTHOOK(17);
				ti2_1 = (nstcall = 1, F997_6383(arg1, loc1));
				(nstcall = 1, F110_1566(RTCW(loc4), ti2_1));
				break;
			case 8U:
				RTHOOK(18);
				ti4_1 = (nstcall = 1, F997_6384(arg1, loc1));
				(nstcall = 1, F110_1567(RTCW(loc4), ti4_1));
				break;
			case 9U:
				RTHOOK(19);
				ti8_1 = (nstcall = 1, F997_6386(arg1, loc1));
				(nstcall = 1, F110_1568(RTCW(loc4), ti8_1));
				break;
			case 4U:
				RTHOOK(20);
				tr4_1 = (nstcall = 1, F997_6388(arg1, loc1));
				(nstcall = 1, F110_1569(RTCW(loc4), tr4_1));
				break;
			case 3U:
				RTHOOK(21);
				tr8_1 = (nstcall = 1, F997_6376(arg1, loc1));
				(nstcall = 1, F110_1570(RTCW(loc4), tr8_1));
				break;
			case 5U:
				RTHOOK(22);
				tp1 = (nstcall = 1, F997_6387(arg1, loc1));
				(nstcall = 1, F110_1571(RTCW(loc4), tp1));
				break;
			case 0U:
				RTHOOK(23);
				tr1 = (nstcall = 1, F997_6370(arg1, loc1));
				tr2 = RTCCL(tr1);
				(nstcall = 0, F148_2003(Current, tr2));
				break;
			default:
				
				break;
		}
		RTHOOK(24);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special */
void F148_2006 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(18);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,loc11);
	RTLR(13,loc12);
	RTLR(14,loc13);
	RTLR(15,loc14);
	RTLR(16,loc15);
	RTLR(17,loc16);
	RTLIU(18);
	
	RTEAA("encode_special", 147, Current, 16, 2, 2010);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_object_is_special", EX_PRE);
		loc1 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF05,898,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTRV(typres0,loc1);
		}
		RTTE(EIF_TEST(loc1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_item_type_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch (arg2) {
		case 3L:
			RTHOOK(5);
			loc2 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,901,1035,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc2 = RTRV(typres0,loc2);
			}
			if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc2)) {
				RTHOOK(6);
				(nstcall = 0, F148_2007(Current, loc2));
			} else {
				
			}
			break;
		case 2L:
			RTHOOK(7);
			loc3 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,903,1032,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc3 = RTRV(typres0,loc3);
			}
			if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc3)) {
				RTHOOK(8);
				(nstcall = 0, F148_2008(Current, loc3));
			} else {
				
			}
			break;
		case 12L:
		case 15L:
			RTHOOK(9);
			loc4 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,902,1029,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc4 = RTRV(typres0,loc4);
			}
			if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc4)) {
				RTHOOK(10);
				(nstcall = 0, F148_2009(Current, loc4));
			} else {
				RTHOOK(11);
				loc5 = RTCCL(arg1);
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFF01,905,1014,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc5 = RTRV(typres0,loc5);
				}
				if ((loc5) && RTS_OS (Current, loc5)) loc5 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc5)) {
					RTHOOK(12);
					(nstcall = 0, F148_2012(Current, loc5));
				} else {
					
				}
			}
			break;
		case 13L:
			RTHOOK(13);
			loc6 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,912,1020,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc6 = RTRV(typres0,loc6);
			}
			if ((loc6) && RTS_OS (Current, loc6)) loc6 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc6)) {
				RTHOOK(14);
				(nstcall = 0, F148_2010(Current, loc6));
			} else {
				
			}
			break;
		case 14L:
			RTHOOK(15);
			loc7 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,1017,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc7 = RTRV(typres0,loc7);
			}
			if ((loc7) && RTS_OS (Current, loc7)) loc7 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc7)) {
				RTHOOK(16);
				(nstcall = 0, F148_2011(Current, loc7));
			} else {
				
			}
			break;
		case 16L:
			RTHOOK(17);
			loc8 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,900,1011,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc8 = RTRV(typres0,loc8);
			}
			if ((loc8) && RTS_OS (Current, loc8)) loc8 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc8)) {
				RTHOOK(18);
				(nstcall = 0, F148_2013(Current, loc8));
			} else {
				
			}
			break;
		case 9L:
			RTHOOK(19);
			loc9 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,906,1008,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc9 = RTRV(typres0,loc9);
			}
			if ((loc9) && RTS_OS (Current, loc9)) loc9 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc9)) {
				RTHOOK(20);
				(nstcall = 0, F148_2014(Current, loc9));
			} else {
				
			}
			break;
		case 10L:
			RTHOOK(21);
			loc10 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,909,1005,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc10 = RTRV(typres0,loc10);
			}
			if ((loc10) && RTS_OS (Current, loc10)) loc10 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc10)) {
				RTHOOK(22);
				(nstcall = 0, F148_2015(Current, loc10));
			} else {
				
			}
			break;
		case 4L:
			RTHOOK(23);
			loc11 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,1002,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc11 = RTRV(typres0,loc11);
			}
			if ((loc11) && RTS_OS (Current, loc11)) loc11 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc11)) {
				RTHOOK(24);
				(nstcall = 0, F148_2016(Current, loc11));
			} else {
				
			}
			break;
		case 11L:
			RTHOOK(25);
			loc12 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,910,999,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc12 = RTRV(typres0,loc12);
			}
			if ((loc12) && RTS_OS (Current, loc12)) loc12 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc12)) {
				RTHOOK(26);
				(nstcall = 0, F148_2017(Current, loc12));
			} else {
				
			}
			break;
		case 5L:
			RTHOOK(27);
			loc13 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,907,1023,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc13 = RTRV(typres0,loc13);
			}
			if ((loc13) && RTS_OS (Current, loc13)) loc13 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc13)) {
				RTHOOK(28);
				(nstcall = 0, F148_2018(Current, loc13));
			} else {
				
			}
			break;
		case 6L:
			RTHOOK(29);
			loc14 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,908,1026,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc14 = RTRV(typres0,loc14);
			}
			if ((loc14) && RTS_OS (Current, loc14)) loc14 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc14)) {
				RTHOOK(30);
				(nstcall = 0, F148_2019(Current, loc14));
			} else {
				
			}
			break;
		case 0L:
			RTHOOK(31);
			loc15 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,904,1068,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc15 = RTRV(typres0,loc15);
			}
			if ((loc15) && RTS_OS (Current, loc15)) loc15 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc15)) {
				RTHOOK(32);
				(nstcall = 0, F148_2020(Current, loc15));
			} else {
				
			}
			break;
		default:
			
			RTHOOK(33);
			loc16 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc16 = RTRV(typres0,loc16);
			}
			if ((loc16) && RTS_OS (Current, loc16)) loc16 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc16)) {
				RTHOOK(34);
				(nstcall = 0, F148_2021(Current, loc16));
			} else {
				
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_boolean */
void F148_2007 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_boolean", 147, Current, 3, 1, 2011);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F902_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tb1 = (nstcall = 1, F902_6139(RTCW(arg1), loc1));
		(nstcall = 1, F109_1531(RTCW(loc3), tb1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_character_8 */
void F148_2008 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_character_8", 147, Current, 3, 1, 2012);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F904_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tc1 = (nstcall = 1, F904_6139(RTCW(arg1), loc1));
		(nstcall = 1, F109_1526(RTCW(loc3), tc1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_character_32 */
void F148_2009 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_character_32", 147, Current, 3, 1, 2013);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F903_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tw1 = (nstcall = 1, F903_6139(RTCW(arg1), loc1));
		(nstcall = 1, F109_1527(RTCW(loc3), tw1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_natural_8 */
void F148_2010 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_natural_8", 147, Current, 3, 1, 2014);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F913_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tu1_1 = (nstcall = 1, F913_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1561(RTCW(loc3), tu1_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_natural_16 */
void F148_2011 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_natural_16", 147, Current, 3, 1, 2015);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F912_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tu2_1 = (nstcall = 1, F912_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1562(RTCW(loc3), tu2_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_natural_32 */
void F148_2012 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_natural_32", 147, Current, 3, 1, 2016);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F906_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tu4_1 = (nstcall = 1, F906_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1563(RTCW(loc3), tu4_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_natural_64 */
void F148_2013 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_natural_64", 147, Current, 3, 1, 2017);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F901_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tu8_1 = (nstcall = 1, F901_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1564(RTCW(loc3), tu8_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_integer_8 */
void F148_2014 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_integer_8", 147, Current, 3, 1, 2018);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F907_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		ti1_1 = (nstcall = 1, F907_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1565(RTCW(loc3), ti1_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_integer_16 */
void F148_2015 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_16 ti2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_integer_16", 147, Current, 3, 1, 2019);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F910_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		ti2_1 = (nstcall = 1, F910_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1566(RTCW(loc3), ti2_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_integer_32 */
void F148_2016 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_integer_32", 147, Current, 3, 1, 2020);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F900_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F900_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1567(RTCW(loc3), ti4_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_integer_64 */
void F148_2017 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_integer_64", 147, Current, 3, 1, 2021);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F911_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		ti8_1 = (nstcall = 1, F911_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1568(RTCW(loc3), ti8_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_real_32 */
void F148_2018 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_real_32", 147, Current, 3, 1, 2022);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F908_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tr4_1 = (nstcall = 1, F908_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1569(RTCW(loc3), tr4_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_real_64 */
void F148_2019 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_real_64", 147, Current, 3, 1, 2023);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F909_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tr8_1 = (nstcall = 1, F909_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1570(RTCW(loc3), tr8_1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_pointer */
void F148_2020 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("encode_special_pointer", 147, Current, 3, 1, 2024);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F905_6149(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc3), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN)(loc1 == loc2)) break;
		RTHOOK(6);
		tp1 = (nstcall = 1, F905_6139(RTCW(arg1), loc1));
		(nstcall = 1, F110_1571(RTCW(loc3), tp1));
		RTHOOK(7);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}.encode_special_reference */
void F148_2021 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc5);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("encode_special_reference", 147, Current, 6, 1, 2025);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc5 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5138[Dtype(RTCW(arg1))-898])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	(nstcall = 1, F109_1543(RTCW(loc5), loc2));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current+ _LNGOFF_5_2_0_0_) >= ((EIF_NATURAL_32) 4U))) {
		RTHOOK(6);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		RTHOOK(7);
		(nstcall = 1, F281_3778(RTCW(loc3), arg1));
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc1 == loc2)) break;
			RTHOOK(9);
			tb1 = (nstcall = 1, F276_3572(RTCW(loc3), loc1));
			if (tb1) {
				RTHOOK(10);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(11);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L));
			}
			RTHOOK(12);
			loc1++;
		}
		RTHOOK(13);
		(nstcall = 1, F109_1531(RTCW(loc5), loc6));
		RTHOOK(14);
		if (loc6) {
			RTHOOK(15);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			for (;;) {
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc1 == loc2)) break;
				RTHOOK(17);
				tb1 = (nstcall = 1, F276_3572(RTCW(loc3), loc1));
				if (tb1) {
					RTHOOK(18);
					(nstcall = 1, F109_1531(RTCW(loc5), (EIF_BOOLEAN) 1));
					RTHOOK(19);
					tr1 = (nstcall = 1, F276_3580(RTCW(loc3), loc1));
					loc4 = (EIF_REFERENCE) tr1;
					RTHOOK(20);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_0_0_0_);
					(nstcall = 1, F109_1543(RTCW(loc5), ti4_1));
					RTHOOK(21);
					(nstcall = 0, F148_2004(Current, loc4));
				} else {
					RTHOOK(22);
					(nstcall = 1, F109_1531(RTCW(loc5), (EIF_BOOLEAN) 0));
					RTHOOK(23);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
					tr2 = RTCCL(tr1);
					(nstcall = 0, F148_2003(Current, tr2));
				}
				RTHOOK(24);
				loc1++;
			}
		}
	}
	RTHOOK(25);
	if ((EIF_BOOLEAN) !loc6) {
		RTHOOK(26);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		for (;;) {
			RTHOOK(27);
			if ((EIF_BOOLEAN)(loc1 == loc2)) break;
			RTHOOK(28);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
			tr2 = RTCCL(tr1);
			(nstcall = 0, F148_2003(Current, tr2));
			RTHOOK(29);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
}

/* {SED_SESSION_SERIALIZER}._invariant */
void F148_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 121, Current, 0, 0);
	RTIT("reflector_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("reflected_object_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("traversable_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("serializer_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("object_indexes_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit122 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
