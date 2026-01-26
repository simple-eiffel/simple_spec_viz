/*
 * Code for class DOT_ATTRIBUTES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "do9.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DOT_ATTRIBUTES}.default_create */
void F12_243 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("default_create", 11, Current, 0, 0, 247);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F12_244(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_empty", EX_POST);
		ti4_1 = (nstcall = 0, F12_247(Current));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* {DOT_ATTRIBUTES}.make */
void F12_244 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make", 11, Current, 0, 0, 248);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,885,0xFF01,1080,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F886_5902(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_empty", EX_POST);
		ti4_1 = (nstcall = 0, F12_247(Current));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* {DOT_ATTRIBUTES}.attributes_model */
EIF_REFERENCE F12_245 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("attributes_model", 11, Current, 2, 0, 249);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,268,0xFF01,1080,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 268, _OBJSIZ_2_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F269_3419(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5913(RTCW(tr1)));
	tr1 = (nstcall = 1, F778_5439(RTCW(tr2)));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F421_4803(loc1));
		tr2 = (nstcall = 1, F886_5908(RTCW(tr1), tr2));
		loc2 = tr2;
		if (EIF_TEST(loc2)) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F421_4803(loc1));
			tr1 = (nstcall = 1, F269_3434(RTCW(Result), tr1, loc2));
			Result = (EIF_REFERENCE) tr1;
		}
		RTHOOK(5);
		(nstcall = 1, F421_4818(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {DOT_ATTRIBUTES}.item */
EIF_REFERENCE F12_246 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("item", 11, Current, 0, 1, 250);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F886_5908(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_if_has", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 0, F12_249(Current, arg1));
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(Result != NULL);
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

/* {DOT_ATTRIBUTES}.count */
EIF_INTEGER_32 F12_247 (EIF_REFERENCE Current)
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
	
	RTEAA("count", 11, Current, 0, 0, 251);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_7_3_0_6_);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {DOT_ATTRIBUTES}.is_empty */
EIF_BOOLEAN F12_248 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_empty", 11, Current, 0, 0, 239);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		ti4_1 = (nstcall = 0, F12_247(Current));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
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

/* {DOT_ATTRIBUTES}.has */
EIF_BOOLEAN F12_249 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("has", 11, Current, 0, 1, 240);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F886_5910(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 0, F12_245(Current));
		tr2 = (nstcall = 1, F269_3427(RTCW(tr1)));
		tb1 = (nstcall = 1, F272_3500(RTCW(tr2), arg1));
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {DOT_ATTRIBUTES}.put */
void F12_250 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc1);
	RTLR(7,tr4);
	RTLIU(8);
	
	RTEAA("put", 11, Current, 1, 2, 241);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("value_not_void", EX_PRE);
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
		tr2 = (nstcall = 0, F12_245(Current));
		tr3 = (nstcall = 1, F269_3435(RTCW(tr2), arg1));
		tr2 = (nstcall = 1, F269_3427(RTCW(tr3)));
		tr1 = tr2;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr3 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F886_5949(RTCW(tr3), arg2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("has_key", EX_POST);
		tb1 = (nstcall = 0, F12_249(Current, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("value_set", EX_POST);
		tb1 = '\01';
		tr3 = (nstcall = 0, F12_246(Current, arg1));
		loc1 = tr3;
		if (EIF_TEST(loc1)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(loc1)-1079])(loc1, arg2));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("others_unchanged", EX_POST);
		tr3 = (nstcall = 0, F12_245(Current));
		tr4 = (nstcall = 1, F269_3435(RTCW(tr3), arg1));
		tr3 = (nstcall = 1, F269_3427(RTCW(tr4)));
		RTCO(tr2);
		tb1 = (nstcall = 1, F272_3506(RTCW(tr3), tr1));
		if (tb1) {
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

/* {DOT_ATTRIBUTES}.remove */
void F12_251 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("remove", 11, Current, 0, 1, 242);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr2 = (nstcall = 0, F12_245(Current));
		tr3 = (nstcall = 1, F269_3435(RTCW(tr2), arg1));
		tr1 = tr3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr3 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F886_5954(RTCW(tr3), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_has", EX_POST);
		tb1 = (nstcall = 0, F12_249(Current, arg1));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("others_unchanged", EX_POST);
		tr3 = (nstcall = 0, F12_245(Current));
		RTCO(tr2);
		tb1 = (nstcall = 1, F269_3433(RTCW(tr3), tr1));
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

/* {DOT_ATTRIBUTES}.to_dot */
EIF_REFERENCE F12_252 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("to_dot", 11, Current, 3, 0, 243);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (nstcall = 0, F12_248(Current));
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1076_7601(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 50L)));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '['));
		RTHOOK(5);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F886_5913(RTCW(tr1)));
		tr1 = (nstcall = 1, F778_5439(RTCW(tr2)));
		loc2 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, F421_4812(loc2));
			if (tb1) break;
			RTHOOK(7);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, F421_4803(loc2));
			tr2 = (nstcall = 1, F886_5908(RTCW(tr1), tr2));
			loc3 = tr2;
			if (EIF_TEST(loc3)) {
				RTHOOK(8);
				if ((EIF_BOOLEAN) !loc1) {
					RTHOOK(9);
					tr1 = RTMS_EX_H(", ",2,11296);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
				}
				RTHOOK(10);
				tr1 = (nstcall = 1, F421_4803(loc2));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
				RTHOOK(11);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '='));
				RTHOOK(12);
				tr1 = (nstcall = 0, F12_253(Current, loc3));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
				RTHOOK(13);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(14);
			(nstcall = 1, F421_4818(loc2));
		}
		RTHOOK(15);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) ']'));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("empty_if_none", EX_POST);
		tb2 = '\01';
		tb3 = (nstcall = 0, F12_248(Current));
		if (tb3) {
			tb3 = (nstcall = 1, F666_4976(RTCW(Result)));
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("bracketed_if_any", EX_POST);
		tb2 = '\01';
		tb3 = (nstcall = 0, F12_248(Current));
		if ((EIF_BOOLEAN) !tb3) {
			tb3 = '\0';
			tr1 = RTMS_EX_H("[",1,91);
			tb4 = (nstcall = 1, F1079_7767(RTCW(Result), tr1));
			if (tb4) {
				tr1 = RTMS_EX_H("]",1,93);
				tb4 = (nstcall = 1, F1079_7768(RTCW(Result), tr1));
				tb3 = tb4;
			}
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
	return Result;
}

/* {DOT_ATTRIBUTES}.escape_value */
EIF_REFERENCE F12_253 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("escape_value", 11, Current, 3, 1, 244);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if (!(EIF_BOOLEAN) (loc2 > ti4_1)) {
			tb1 = loc1;
		}
		if (tb1) break;
		RTHOOK(5);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) ' ') || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\"')) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\\')) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\012')) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) ',')) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '=')) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '{')) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '}')) || (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '|'))) {
			RTHOOK(7);
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
		RTHOOK(8);
		loc2++;
	}
	RTHOOK(9);
	if (loc1) {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		(nstcall = -1, F1079_7731(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 10L))));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '\"'));
		RTHOOK(12);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
			RTHOOK(14);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
			loc3 = (EIF_CHARACTER_8) tc1;
			RTHOOK(15);
			switch (loc3) {
				case (EIF_CHARACTER_8) '\"':
					RTHOOK(16);
					tr1 = RTMS_EX_H("\\\"",2,23586);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				case (EIF_CHARACTER_8) '\\':
					RTHOOK(17);
					tr1 = RTMS_EX_H("\\\\",2,23644);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				case (EIF_CHARACTER_8) '\012':
					RTHOOK(18);
					tr1 = RTMS_EX_H("\\n",2,23662);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				default:
					RTHOOK(19);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, loc3));
					break;
			}
			RTHOOK(20);
			loc2++;
		}
		RTHOOK(21);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '\"'));
	} else {
		RTHOOK(22);
		tr1 = (nstcall = 1, F1_14(arg1));
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("not_shorter", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		ti4_3 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (ti4_2 >= ti4_3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
	return Result;
}

/* {DOT_ATTRIBUTES}.internal_table */
EIF_REFERENCE F12_254 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DOT_ATTRIBUTES}._invariant */
void F12_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 8, Current, 0, 0);
	RTIT("internal_table_exists", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_consistent", Current);
	ti4_1 = (nstcall = 0, F12_247(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_7_3_0_6_);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit9 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
