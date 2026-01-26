/*
 * Code for class RT_DBG_FIELD_RECORD [INTEGER_8]
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "rt1129.h"
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

/* {RT_DBG_FIELD_RECORD}.make */
void F959_6232 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 958, Current, 0, 4, 11999);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_1_) = (EIF_INTEGER_32) arg3;
	RTHOOK(5);
	*(EIF_INTEGER_8 *)(Current+ _CHROFF_2_0_) = (EIF_INTEGER_8) arg4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_DBG_FIELD_RECORD}.object */
EIF_REFERENCE F959_6233 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {RT_DBG_FIELD_RECORD}.value */
EIF_INTEGER_8 F959_6234 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_8 *)(Current+ _CHROFF_2_0_);
}


/* {RT_DBG_FIELD_RECORD}.current_value_record */
EIF_REFERENCE F959_6235 (EIF_REFERENCE Current)
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
	
	RTEAA("current_value_record", 958, Current, 0, 0, 12002);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTCCL(tr1);
	Result = (nstcall = 0, F279_3725(Current, ti4_1, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_FIELD_RECORD}.associated_object */
EIF_REFERENCE F959_6236 (EIF_REFERENCE Current)
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
	
	RTEAA("associated_object", 958, Current, 0, 0, 12003);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_FIELD_RECORD}.is_local_record */
EIF_BOOLEAN F959_6237 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {RT_DBG_FIELD_RECORD}.is_same_as */
EIF_BOOLEAN F959_6238 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_same_as", 958, Current, 1, 1, 12005);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = '\0';
	tb1 = '\0';
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(dftype, 1),loc1);
	if (EIF_TEST(loc1)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_2_1_0_0_);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_) == ti4_1);
	}
	if (tb1) {
		ti1_1 = *(EIF_INTEGER_8 *)(loc1+ _CHROFF_2_0_);
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_8 *)(Current+ _CHROFF_2_0_) == ti1_1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("same_type", EX_POST);
		tb1 = '\01';
		if (Result) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O5183[Dtype(arg1)-913]);
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_1_) == ti4_1);
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
	RTLE;
	RTEE;
	return Result;
}

/* {RT_DBG_FIELD_RECORD}.to_string */
EIF_REFERENCE F959_6239 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 loc1 = (EIF_INTEGER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("to_string", 958, Current, 1, 0, 12006);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_8 *)(Current+ _CHROFF_2_0_);
	RTHOOK(2);
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_1_)) {
		case 1L:
			RTHOOK(3);
			if (EIF_TRUE) {
				RTHOOK(4);
				tr1 = eif_out__p_s1((EIF_INTEGER_8 *) &(loc1));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(5);
				Result = RTMS_EX_H("Void",4,1450142052);
			}
			break;
		case 7L:
			
			RTHOOK(6);
			if (EIF_TRUE) {
				RTHOOK(7);
				tr1 = eif_out__p_s1((EIF_INTEGER_8 *) &(loc1));
				Result = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(8);
				Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F1076_7601(RTCW(Result)));
			}
			break;
		default:
			RTHOOK(9);
			if (EIF_TRUE) {
				RTHOOK(10);
				Result = (nstcall = 0, F959_6244(Current, loc1));
			} else {
				
				RTHOOK(11);
				Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
				(nstcall = -1, F1076_7601(RTCW(Result)));
			}
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {RT_DBG_FIELD_RECORD}.get_value */
void F959_6240 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_8 loc2 = (EIF_INTEGER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("get_value", 958, Current, 2, 0, 12007);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(301,(nstcall = 0, F279_3757), (Current));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTCCL(tr1);
	(nstcall = 1, F281_3778(RTCW(loc1), tr2));
	RTHOOK(3);
	tr2 = (nstcall = 1, F276_3561(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_)));
	tr1 = RTCCL(tr2);
	RTOB(*(EIF_INTEGER_8 *), eif_gen_param(Dftype(Current), 1), tr1, loc2, tb1);
	if (tb1) {
		RTHOOK(4);
		*(EIF_INTEGER_8 *)(Current+ _CHROFF_2_0_) = (EIF_INTEGER_8) loc2;
	} else {
		RTHOOK(5);
		ti1_1 = (nstcall = 0, F959_6245(Current));
		*(EIF_INTEGER_8 *)(Current+ _CHROFF_2_0_) = (EIF_INTEGER_8) ti1_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {RT_DBG_FIELD_RECORD}.restore */
void F959_6241 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("restore", 958, Current, 0, 1, 12008);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("val_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((nstcall = 0, F959_6238(Current, arg1))) {
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTCCL(tr1);
		(nstcall = 0, F959_6243(Current, tr2, Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {RT_DBG_FIELD_RECORD}.revert */
void F959_6242 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("revert", 958, Current, 0, 1, 12009);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("bak_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = RTCCL(tr1);
	(nstcall = 0, F959_6243(Current, tr2, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {RT_DBG_FIELD_RECORD}.set_object_field */
void F959_6243 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
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
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
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
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(23);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLR(12,loc10);
	RTLR(13,loc11);
	RTLR(14,loc12);
	RTLR(15,loc13);
	RTLR(16,loc14);
	RTLR(17,loc15);
	RTLR(18,loc16);
	RTLR(19,loc17);
	RTLR(20,loc18);
	RTLR(21,loc19);
	RTLR(22,loc20);
	RTLIU(23);
	
	RTEAA("set_object_field", 958, Current, 20, 2, 12010);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("r_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_1_0_0_);
	RTHOOK(4);
	loc2 = RTOUCR(301,(nstcall = 0, F279_3757), (Current));
	RTHOOK(5);
	tr1 = RTCCL(arg1);
	(nstcall = 1, F281_3778(RTCW(loc2), tr1));
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2) + O5183[Dtype(arg2)-913]);
	switch (ti4_1) {
		case 9L:
			RTHOOK(7);
			loc3 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,958,1011,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc3 = RTRV(typres0,loc3);
			}
			if (EIF_TEST(loc3)) {
				RTHOOK(8);
				ti1_1 = *(EIF_INTEGER_8 *)(loc3+ _CHROFF_2_0_);
				(nstcall = 1, F276_3607(RTCW(loc2), loc1, ti1_1));
			}
			break;
		case 10L:
			RTHOOK(9);
			loc4 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,952,1008,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc4 = RTRV(typres0,loc4);
			}
			if (EIF_TEST(loc4)) {
				RTHOOK(10);
				ti2_1 = *(EIF_INTEGER_16 *)(loc4+ _I16OFF_2_0_0_);
				(nstcall = 1, F276_3608(RTCW(loc2), loc1, ti2_1));
			}
			break;
		case 4L:
			RTHOOK(11);
			loc5 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,947,1005,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc5 = RTRV(typres0,loc5);
			}
			if (EIF_TEST(loc5)) {
				RTHOOK(12);
				ti4_1 = *(EIF_INTEGER_32 *)(loc5+ _LNGOFF_2_0_0_2_);
				(nstcall = 1, F276_3610(RTCW(loc2), loc1, ti4_1));
			}
			break;
		case 11L:
			RTHOOK(13);
			loc6 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,948,1002,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc6 = RTRV(typres0,loc6);
			}
			if (EIF_TEST(loc6)) {
				RTHOOK(14);
				ti8_1 = *(EIF_INTEGER_64 *)(loc6+ _I64OFF_2_0_0_2_0_0_0_);
				(nstcall = 1, F276_3611(RTCW(loc2), loc1, ti8_1));
			}
			break;
		case 13L:
			RTHOOK(15);
			loc7 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,955,1020,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc7 = RTRV(typres0,loc7);
			}
			if (EIF_TEST(loc7)) {
				RTHOOK(16);
				tu1_1 = *(EIF_NATURAL_8 *)(loc7+ _CHROFF_2_0_);
				(nstcall = 1, F276_3603(RTCW(loc2), loc1, tu1_1));
			}
			break;
		case 14L:
			RTHOOK(17);
			loc8 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,956,999,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc8 = RTRV(typres0,loc8);
			}
			if (EIF_TEST(loc8)) {
				RTHOOK(18);
				tu2_1 = *(EIF_NATURAL_16 *)(loc8+ _I16OFF_2_0_0_);
				(nstcall = 1, F276_3604(RTCW(loc2), loc1, tu2_1));
			}
			break;
		case 15L:
			RTHOOK(19);
			loc9 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,950,1017,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc9 = RTRV(typres0,loc9);
			}
			if (EIF_TEST(loc9)) {
				RTHOOK(20);
				tu4_1 = *(EIF_NATURAL_32 *)(loc9+ _LNGOFF_2_0_0_0_);
				(nstcall = 1, F276_3605(RTCW(loc2), loc1, tu4_1));
			}
			break;
		case 16L:
			RTHOOK(21);
			loc10 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,951,1014,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc10 = RTRV(typres0,loc10);
			}
			if (EIF_TEST(loc10)) {
				RTHOOK(22);
				tu8_1 = *(EIF_NATURAL_64 *)(loc10+ _I64OFF_2_0_0_2_0_0_0_);
				(nstcall = 1, F276_3606(RTCW(loc2), loc1, tu8_1));
			}
			break;
		case 0L:
			RTHOOK(23);
			loc11 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,945,1068,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc11 = RTRV(typres0,loc11);
			}
			if (EIF_TEST(loc11)) {
				RTHOOK(24);
				tp1 = *(EIF_POINTER *)(loc11+ _PTROFF_2_0_0_2_0_0_);
				(nstcall = 1, F276_3614(RTCW(loc2), loc1, tp1));
			}
			break;
		case 1L:
			RTHOOK(25);
			tb1 = '\0';
			loc12 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,944,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc12 = RTRV(typres0,loc12);
			}
			if (EIF_TEST(loc12)) {
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5214[Dtype(loc12)-944])(loc12));
				loc13 = RTCCL(tr1);
				tb1 = EIF_TEST(loc13);
			}
			if (tb1) {
				RTHOOK(26);
				tr1 = RTCCL(loc13);
				(nstcall = 1, F276_3596(RTCW(loc2), loc1, tr1));
			}
			break;
		case 7L:
			RTHOOK(27);
			tb1 = '\0';
			loc14 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,944,0xFF01,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc14 = RTRV(typres0,loc14);
			}
			if (EIF_TEST(loc14)) {
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R5214[Dtype(loc14)-944])(loc14));
				loc15 = RTCCL(tr1);
				tb1 = EIF_TEST(loc15);
			}
			if (tb1) {
				RTHOOK(28);
				tr1 = RTCCL(loc15);
				(nstcall = 1, F276_3596(RTCW(loc2), loc1, tr1));
			}
			break;
		case 3L:
			RTHOOK(29);
			loc16 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,946,1035,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc16 = RTRV(typres0,loc16);
			}
			if (EIF_TEST(loc16)) {
				RTHOOK(30);
				tb1 = *(EIF_BOOLEAN *)(loc16+ _CHROFF_2_0_);
				(nstcall = 1, F276_3602(RTCW(loc2), loc1, tb1));
			}
			break;
		case 5L:
			RTHOOK(31);
			loc17 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,954,1023,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc17 = RTRV(typres0,loc17);
			}
			if (EIF_TEST(loc17)) {
				RTHOOK(32);
				tr4_1 = *(EIF_REAL_32 *)(loc17+ _R32OFF_2_0_0_2_0_);
				(nstcall = 1, F276_3612(RTCW(loc2), loc1, tr4_1));
			}
			break;
		case 6L:
			RTHOOK(33);
			loc18 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,953,1026,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc18 = RTRV(typres0,loc18);
			}
			if (EIF_TEST(loc18)) {
				RTHOOK(34);
				tr8_1 = *(EIF_REAL_64 *)(loc18+ _R64OFF_2_0_0_2_0_0_0_0_);
				(nstcall = 1, F276_3597(RTCW(loc2), loc1, tr8_1));
			}
			break;
		case 2L:
			RTHOOK(35);
			loc19 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,949,1032,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc19 = RTRV(typres0,loc19);
			}
			if (EIF_TEST(loc19)) {
				RTHOOK(36);
				tc1 = *(EIF_CHARACTER_8 *)(loc19+ _CHROFF_2_0_);
				(nstcall = 1, F276_3599(RTCW(loc2), loc1, tc1));
			}
			break;
		case 12L:
			RTHOOK(37);
			loc20 = arg2;
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,957,1029,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc20 = RTRV(typres0,loc20);
			}
			if (EIF_TEST(loc20)) {
				RTHOOK(38);
				tw1 = *(EIF_CHARACTER_32 *)(loc20+ _LNGOFF_2_0_0_0_);
				(nstcall = 1, F276_3601(RTCW(loc2), loc1, tw1));
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTLE;
	RTEE;
}

/* {RT_DBG_FIELD_RECORD}.out_value */
EIF_REFERENCE F959_6244 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("out_value", 958, Current, 0, 1, 12011);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("v_attached", EX_PRE);
		RTTE(EIF_TRUE, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i1_s1(arg1);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {RT_DBG_FIELD_RECORD}.default_value */
EIF_INTEGER_8 F959_6245 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("default_value", 958, Current, 0, 0, 12012);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_INTEGER_8) 0;
}

/* {RT_DBG_FIELD_RECORD}._invariant */
void F959_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 1128, Current, 0, 0);
	RTIT("object_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit1129 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
