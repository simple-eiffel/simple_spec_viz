/*
 * Code for class EQA_EVALUATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq268.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_EVALUATOR}.make */
void F319_4541 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make", 318, Current, 1, 0, 4575);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F319_4542(Current));
	RTHOOK(2);
	loc1 = RTLNSMART(eif_new_type(310, 1).id);
	tr1 = RTLNS(eif_new_type(239, 0x01).id, 239, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = (nstcall = 1, F240_2878(RTCW(tr1)));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
	(nstcall = -1, F311_4324(RTCW(loc1), tr2, ti4_1));
	RTHOOK(3);
	(nstcall = 1, F310_4300(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F311_4341(RTCW(loc1)));
	RTHOOK(5);
	(nstcall = 1, F310_4269(RTCW(loc1)));
	RTHOOK(6);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_7_7_);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(7);
		loc1 = RTLNSMART(eif_new_type(310, 1).id);
		tr1 = RTLNS(eif_new_type(175, 0x01).id, 175, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTOUCR(0,(nstcall = 1, F176_2363), (RTCW(tr1)));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
		(nstcall = -1, F311_4324(RTCW(loc1), tr2, ti4_1));
		RTHOOK(8);
		(nstcall = 1, F310_4300(RTCW(loc1)));
		RTHOOK(9);
		(nstcall = 1, F311_4341(RTCW(loc1)));
		RTHOOK(10);
		(nstcall = 1, F310_4269(RTCW(loc1)));
	}
	RTHOOK(11);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) loc1;
	RTHOOK(12);
	(nstcall = 0, F319_4543(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {EQA_EVALUATOR}.parse_arguments */
void F319_4542 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("parse_arguments", 318, Current, 1, 0, 4576);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTOUCR(1,(nstcall = 0, F317_4501), (Current));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F483_4865(loc1));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 2L))) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F483_4851(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
		ti4_1 = (nstcall = 1, F1076_7666(RTCW(tr1)));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		tr1 = RTLNSMART(eif_new_type(964, 1).id);
		tr2 = (nstcall = 1, F483_4851(RTCW(loc1), ((EIF_INTEGER_32) 2L)));
		(nstcall = -1, F965_6278(RTCW(tr1), tr2));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 49200L);
		RTHOOK(6);
		tr1 = (nstcall = 0, F317_4503(Current));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("port_initialized", EX_POST);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_) > ((EIF_INTEGER_32) 0L))) {
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

/* {EQA_EVALUATOR}.main_loop */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F319_4543 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(9);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,tr2);
	RTLR(7,loc1);
	RTLR(8,saved_except);
	RTLIU(9);
	RTXSLS;
	
	RTEAA("main_loop", 318, Current, 6, 0, 4577);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("socket_connected", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_7_);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("socket_open_write", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_4_);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(78, 0x01).id, 78, _OBJSIZ_0_0_0_0_0_0_0_0_);
	for (;;) {
		RTHOOK(5);
		if (loc2) break;
		RTHOOK(6);
		tb1 = '\0';
		tb2 = '\0';
		tr1 = (nstcall = 0, F229_2715(Current, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
		loc4 = RTCCL(tr1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,3,996,1080,1080,1002,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc4 = RTRV(typres0,loc4);
		}
		if (EIF_TEST(loc4)) {
			tr1 = eif_boxed_item(loc4,1);
			loc5 = tr1;
			tb2 = EIF_TEST(loc5);
		}
		if (tb2) {
			tr1 = eif_boxed_item(loc4,2);
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(7);
			tr1 = RTOUCR(2,(nstcall = 0, F122_1652), (Current));
			(nstcall = 1, F79_1267(RTCW(loc3), loc5, tr1));
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tr2 = (nstcall = 1, F965_6317(RTCW(tr1)));
			tr1 = RTOUCR(3,(nstcall = 0, F122_1653), (Current));
			(nstcall = 1, F79_1267(RTCW(loc3), tr2, tr1));
			RTHOOK(9);
			tr1 = (nstcall = 1, F1076_7660(loc6));
			ti4_1 = eif_integer_32_item(loc4,3);
			loc1 = (nstcall = 0, F319_4548(Current, tr1, ti4_1));
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			(nstcall = 1, F308_4171(RTCW(tr1), (EIF_BOOLEAN) 1));
			RTHOOK(11);
			(nstcall = 0, F229_2713(Current, loc1, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
			RTHOOK(12);
			(nstcall = 1, F79_1268(RTCW(loc3)));
		} else {
			RTHOOK(13);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
			tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_9_);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(14);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
				(nstcall = 1, F308_4133(RTCW(tr1)));
			}
			RTHOOK(15);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(16);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_7_9_);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(17);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(nstcall = 1, F308_4133(RTCW(tr1)));
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(18);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {EQA_EVALUATOR}.port */
EIF_INTEGER_32 F319_4544 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_1_0_1_);
}


/* {EQA_EVALUATOR}.socket */
EIF_REFERENCE F319_4545 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {EQA_EVALUATOR}.is_stream_invalid */
EIF_BOOLEAN F319_4546 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_);
}


/* {EQA_EVALUATOR}.testing_directory */
EIF_REFERENCE F319_4547 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {EQA_EVALUATOR}.execute_test */
EIF_REFERENCE F319_4548 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,tr1);
	RTLR(1,arg1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("execute_test", 318, Current, 2, 2, 4582);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS32_EX_H("E\000\000\000Q\000\000\000A\000\000\000_\000\000\000T\000\000\000E\000\000\000S\000\000\000T\000\000\000_\000\000\000E\000\000\000V\000\000\000A\000\000\000L\000\000\000U\000\000\000A\000\000\000T\000\000\000O\000\000\000R\000\000\000 \000\000\000[\000\000\000a\000\000\000t\000\000\000t\000\000\000a\000\000\000c\000\000\000h\000\000\000e\000\000\000d\000\000\000 \000\000\000",29,1261215776);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6169[Dtype(RTCW(arg1))-1079])(arg1));
	tr2 = (nstcall = 1, F1085_8031(tr1, tr2));
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("]",1,93)));
	tr1 = (nstcall = 1, F1085_8031(RTCW(tr2), tr1));
	loc1 = (nstcall = 0, F277_3624(Current, tr1));
	RTHOOK(2);
	RTCT0("attached {EQA_TEST_EVALUATOR [EQA_TEST_SET]} new_instance_of (l_type) as l_eval", EX_CHECK);
	tr1 = (nstcall = 0, F277_3625(Current, loc1));
	loc2 = RTCCL(tr1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,317,0xFF01,121,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc2 = RTRV(typres0,loc2);
	}
	if (EIF_TEST(loc2)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	{
		EIF_TYPE_INDEX typarr0[] = {0xFFF9,2,996,0xFF01,0,1002,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 3, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_i4 = arg2;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,1,996,0xFF01,121,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr4= RTLNRF(typres0.id, (EIF_POINTER) __A268_208_2, (EIF_POINTER) _A268_208_2, (EIF_POINTER)(F230_2734),tr1, 1, 1);
	}
	tr1 = (nstcall = 1, F318_4539(loc2, tr4));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

void EIF_Minit268 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
