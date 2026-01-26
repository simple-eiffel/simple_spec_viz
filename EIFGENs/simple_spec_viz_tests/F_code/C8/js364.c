/*
 * Code for class JSON_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js364.h"
#include "eif_misc.h"
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

/* {JSON_OBJECT}.make_with_capacity */
void F1087_8075 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make_with_capacity", 1086, Current, 0, 1, 15006);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,885,0xFF01,1085,0xFF01,1088,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F886_5902(RTCW(tr1), arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.make_empty */
void F1087_8076 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_empty", 1086, Current, 0, 0, 15007);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1087_8075(Current, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.make */
void F1087_8077 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 1086, Current, 0, 0, 15008);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1087_8075(Current, ((EIF_INTEGER_32) 10L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.is_object */
EIF_BOOLEAN F1087_8078 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {JSON_OBJECT}.put */
void F1087_8079 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("put", 1086, Current, 0, 2, 15010);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1087_8093(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTLNS(eif_new_type(1089, 0x01).id, 1089, _OBJSIZ_0_0_0_0_0_0_0_0_);
		(nstcall = 1, F886_5950(RTCW(tr1), tr2, arg2));
	} else {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F886_5950(RTCW(tr1), arg1, arg2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.put_string */
void F1087_8080 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,arg1);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,tr1);
	RTLIU(7);
	
	RTEAA("put_string", 1086, Current, 3, 2, 15011);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1087_8093(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(1078, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F1089_8121(RTCW(loc1), loc2));
	} else {
		RTHOOK(4);
		loc3 = arg1;
		loc3 = RTRV(eif_new_type(1082, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(5);
			loc1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
			(nstcall = -1, F1089_8122(RTCW(loc1), loc3));
		} else {
			RTHOOK(6);
			loc1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
			tr1 = (nstcall = 1, F1076_7660(RTCW(arg1)));
			(nstcall = -1, F1089_8122(RTCW(loc1), tr1));
		}
	}
	RTHOOK(7);
	(nstcall = 0, F1087_8079(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.put_integer */
void F1087_8081 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("put_integer", 1086, Current, 1, 2, 15012);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1087_8093(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8178(RTCW(loc1), arg1));
	RTHOOK(3);
	(nstcall = 0, F1087_8079(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.put_natural */
void F1087_8082 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("put_natural", 1086, Current, 1, 2, 15013);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1087_8093(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8179(RTCW(loc1), arg1));
	RTHOOK(3);
	(nstcall = 0, F1087_8079(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.put_real */
void F1087_8083 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("put_real", 1086, Current, 1, 2, 15014);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1087_8093(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8180(RTCW(loc1), arg1));
	RTHOOK(3);
	(nstcall = 0, F1087_8079(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.put_boolean */
void F1087_8084 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("put_boolean", 1086, Current, 1, 2, 15015);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_present", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1087_8093(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(1087, 0x01).id, 1087, _OBJSIZ_0_1_0_0_0_0_0_0_);
	(nstcall = -1, F1088_8112(RTCW(loc1), arg1));
	RTHOOK(3);
	(nstcall = 0, F1087_8079(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.replace */
void F1087_8085 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg2);
	RTLIU(5);
	
	RTEAA("replace", 1086, Current, 0, 2, 15016);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTLNS(eif_new_type(1089, 0x01).id, 1089, _OBJSIZ_0_0_0_0_0_0_0_0_);
		(nstcall = 1, F886_5949(RTCW(tr1), tr2, arg2));
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F886_5949(RTCW(tr1), arg1, arg2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.replace_with_string */
void F1087_8086 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,arg2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("replace_with_string", 1086, Current, 2, 2, 15017);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(1078, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		loc1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F1089_8121(RTCW(loc1), loc2));
	} else {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr1 = (nstcall = 1, F1076_7660(RTCW(arg1)));
		(nstcall = -1, F1089_8122(RTCW(loc1), tr1));
	}
	RTHOOK(4);
	(nstcall = 0, F1087_8085(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.replace_with_integer */
void F1087_8087 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("replace_with_integer", 1086, Current, 1, 2, 15018);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8178(RTCW(loc1), arg1));
	RTHOOK(2);
	(nstcall = 0, F1087_8085(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.replace_with_with_natural */
void F1087_8088 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("replace_with_with_natural", 1086, Current, 1, 2, 15019);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8179(RTCW(loc1), arg1));
	RTHOOK(2);
	(nstcall = 0, F1087_8085(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.replace_with_real */
void F1087_8089 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("replace_with_real", 1086, Current, 1, 2, 15020);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8180(RTCW(loc1), arg1));
	RTHOOK(2);
	(nstcall = 0, F1087_8085(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.replace_with_boolean */
void F1087_8090 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("replace_with_boolean", 1086, Current, 1, 2, 15021);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1087, 0x01).id, 1087, _OBJSIZ_0_1_0_0_0_0_0_0_);
	(nstcall = -1, F1088_8112(RTCW(loc1), arg1));
	RTHOOK(2);
	(nstcall = 0, F1087_8085(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.remove */
void F1087_8091 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("remove", 1086, Current, 0, 1, 15022);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F886_5954(RTCW(tr1), arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.wipe_out */
void F1087_8092 (EIF_REFERENCE Current)
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
	
	RTEAA("wipe_out", 1086, Current, 0, 0, 15023);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F886_5956(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.has_key */
EIF_BOOLEAN F1087_8093 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("has_key", 1086, Current, 0, 1, 15024);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F886_5910(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.has_item */
EIF_BOOLEAN F1087_8094 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("has_item", 1086, Current, 0, 1, 14987);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F886_5912(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.item */
EIF_REFERENCE F1087_8095 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("item", 1086, Current, 0, 1, 14988);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5908(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.string_item */
EIF_REFERENCE F1087_8096 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("string_item", 1086, Current, 1, 1, 14989);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1087_8095(Current, arg1));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1088, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.number_item */
EIF_REFERENCE F1087_8097 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("number_item", 1086, Current, 1, 1, 14990);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1087_8095(Current, arg1));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1091, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.boolean_item */
EIF_REFERENCE F1087_8098 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("boolean_item", 1086, Current, 1, 1, 14991);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1087_8095(Current, arg1));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1087, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.object_item */
EIF_REFERENCE F1087_8099 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("object_item", 1086, Current, 1, 1, 14992);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1087_8095(Current, arg1));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1086, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.array_item */
EIF_REFERENCE F1087_8100 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("array_item", 1086, Current, 1, 1, 14993);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1087_8095(Current, arg1));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1090, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.chained_item */
EIF_REFERENCE F1087_8101 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("chained_item", 1086, Current, 1, 1, 14994);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1087_8095(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		Result = (nstcall = 0, F1086_8070(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.current_keys */
EIF_REFERENCE F1087_8102 (EIF_REFERENCE Current)
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
	
	RTEAA("current_keys", 1086, Current, 0, 0, 14995);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5913(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.representation */
EIF_REFERENCE F1087_8103 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("representation", 1086, Current, 1, 0, 14996);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(Result), ((EIF_INTEGER_32) 2L)));
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '{'));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5917(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F416_4800(loc1));
		if (tb1) break;
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 1L))) {
			RTHOOK(5);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) ','));
		}
		RTHOOK(6);
		tr1 = (nstcall = 1, F416_4798(loc1));
		tr2 = (nstcall = 1, F1089_8135(RTCW(tr1)));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr2));
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) ':'));
		RTHOOK(8);
		tr1 = (nstcall = 1, F416_4797(loc1));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6400[Dtype(RTCW(tr1))-1086])(tr1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr2));
		RTHOOK(9);
		(nstcall = 1, F416_4801(loc1));
	}
	RTHOOK(10);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '}'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.count */
EIF_INTEGER_32 F1087_8104 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("count", 1086, Current, 0, 0, 14997);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_7_3_0_6_);
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.new_cursor */
EIF_REFERENCE F1087_8105 (EIF_REFERENCE Current)
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
	
	RTEAA("new_cursor", 1086, Current, 0, 0, 14998);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5917(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
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
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.is_empty */
EIF_BOOLEAN F1087_8106 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_empty", 1086, Current, 0, 0, 14999);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.accept */
void F1087_8107 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("accept", 1086, Current, 0, 1, 15000);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_visitor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 1, F244_2986(RTCW(arg1), Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_OBJECT}.map_representation */
EIF_REFERENCE F1087_8108 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("map_representation", 1086, Current, 0, 0, 15001);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.hash_code */
EIF_INTEGER_32 F1087_8109 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("hash_code", 1086, Current, 0, 0, 15002);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F886_5941(RTCW(tr1)));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1_25(RTCW(tr1)));
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5229[Dtype(RTCW(tr2))-962])(tr2));
	Result = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, F886_5937(RTCW(tr1)));
		if (tb1) break;
		RTHOOK(4);
		ti4_1 = eif_bit_shift_left((EIF_INTEGER_32) (Result % ((EIF_INTEGER_32) 8388593L)),((EIF_INTEGER_32) 8L));
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F886_5914(RTCW(tr1)));
		ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5229[Dtype(RTCW(tr2))-962])(tr2));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F886_5942(RTCW(tr1)));
	}
	RTHOOK(6);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	return Result;
}

/* {JSON_OBJECT}.debug_output */
EIF_REFERENCE F1087_8110 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("debug_output", 1086, Current, 0, 0, 15003);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F1087_8104(Current));
	tr1 = eif_out__i4_s1(ti4_1);
	tr2 = RTMS_EX_H(" item(s)",8,1228816425);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, tr2));
	Result = (EIF_REFERENCE) tr2;
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
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_OBJECT}.items */
EIF_REFERENCE F1087_8111 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {JSON_OBJECT}._invariant */
void F1087_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 363, Current, 0, 0);
	RTIT("items_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit364 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
