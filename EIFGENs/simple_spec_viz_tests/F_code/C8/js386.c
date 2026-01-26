/*
 * Code for class JSON_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js386.h"
#include "eif_built_in.h"
#include <ctype.h>
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

/* {JSON_PARSER}.make */
void F1113_8535 (EIF_REFERENCE Current)
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
	
	RTEAA("make", 1112, Current, 0, 0, 15455);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1113_8538(Current));
	RTHOOK(2);
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.make_with_string */
void F1113_8536 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_with_string", 1112, Current, 0, 1, 15456);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_content_not_empty", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F1113_8538(Current));
	RTHOOK(3);
	(nstcall = 0, F94_1370(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.make_parser */
void F1113_8537 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_parser", 1112, Current, 0, 1, 15457);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1113_8536(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.initialize */
void F1113_8538 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("initialize", 1112, Current, 1, 0, 15458);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1076_7601(RTCW(loc1)));
	RTHOOK(2);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
	RTHOOK(3);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc1;
	RTHOOK(4);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc1;
	RTHOOK(5);
	tr1 = RTLNSMART(eif_new_type(1087, 1).id);
	(nstcall = -1, F1088_8114(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTLNSMART(eif_new_type(1087, 1).id);
	(nstcall = -1, F1088_8113(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = RTLNSMART(eif_new_type(1089, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,856,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F857_5539(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.is_parsed */
EIF_BOOLEAN F1113_8539 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_);
}


/* {JSON_PARSER}.is_valid */
EIF_BOOLEAN F1113_8540 (EIF_REFERENCE Current)
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
	
	RTEAA("is_valid", 1112, Current, 0, 0, 15460);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.has_error */
EIF_BOOLEAN F1113_8541 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_);
}


/* {JSON_PARSER}.errors */
EIF_REFERENCE F1113_8542 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {JSON_PARSER}.errors_as_string */
EIF_REFERENCE F1113_8543 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA("errors_as_string", 1112, Current, 1, 0, 15463);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1076_7601(RTCW(Result)));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F857_5546(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F414_4792(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F414_4791(loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '\012'));
		RTHOOK(5);
		(nstcall = 1, F414_4794(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.current_errors */
EIF_REFERENCE F1113_8544 (EIF_REFERENCE Current)
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
	
	RTEAA("current_errors", 1112, Current, 0, 0, 15464);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1113_8543(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.default_array_size */
EIF_INTEGER_32 F1113_8545 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_1_);
}


/* {JSON_PARSER}.default_object_size */
EIF_INTEGER_32 F1113_8546 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_2_);
}


/* {JSON_PARSER}.set_default_array_size */
void F1113_8547 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_default_array_size", 1112, Current, 0, 1, 15467);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_yet_parsed", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_1_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.set_default_object_size */
void F1113_8548 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_default_object_size", 1112, Current, 0, 1, 15468);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_not_yet_parsed", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_2_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.json_string_buffer_size */
EIF_INTEGER_32 F1113_8549 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("json_string_buffer_size", 1112, Current, 0, 0, 15469);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 512L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.json_number_buffer_size */
EIF_INTEGER_32 F1113_8550 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("json_number_buffer_size", 1112, Current, 0, 0, 15470);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.parsed_json_value */
static EIF_REFERENCE F1113_8551_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("parsed_json_value", 1112, Current, 0, 0, 15471);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("attached_result_if_valid", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1113_8540(Current))) {
			tb1 = (EIF_BOOLEAN)((EIF_REFERENCE) 0 != NULL);
		}
		if (tb1) {
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
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F1113_8551 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(eif_new_type(1085, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F1113_8551_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {JSON_PARSER}.parsed_json_object */
EIF_REFERENCE F1113_8552 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("parsed_json_object", 1112, Current, 1, 0, 15472);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1086, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		Result = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.parsed_json_array */
EIF_REFERENCE F1113_8553 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("parsed_json_array", 1112, Current, 1, 0, 15473);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_parsed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1090, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		Result = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.reset */
void F1113_8554 (EIF_REFERENCE Current)
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
	
	RTEAA("reset", 1112, Current, 0, 0, 15474);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F94_1371(Current));
	RTHOOK(2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F857_5575(RTCW(tr1)));
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(6);
	(nstcall = 0, F1113_8583(Current));
	RTHOOK(7);
	tr1 = RTLNSMART(eif_new_type(1089, 1).id);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTLNSMART(eif_new_type(1087, 1).id);
	(nstcall = -1, F1088_8114(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTLNSMART(eif_new_type(1087, 1).id);
	(nstcall = -1, F1088_8113(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.parse_string */
void F1113_8555 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("parse_string", 1112, Current, 0, 1, 15475);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F94_1372(Current, arg1));
	RTHOOK(2);
	(nstcall = 0, F1113_8556(Current));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.parse_content */
void F1113_8556 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("parse_content", 1112, Current, 0, 0, 15476);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_)) {
		RTHOOK(2);
		(nstcall = 0, F1113_8582(Current));
		RTHOOK(3);
		if ((nstcall = 0, F1113_8575(Current))) {
			RTHOOK(4);
			tr1 = (nstcall = 0, F1113_8563(Current));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
			RTHOOK(5);
			tb1 = '\0';
			if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_)) {
				tb1 = (nstcall = 0, F1113_8574(Current));
			}
			if (tb1) {
				RTHOOK(6);
				tr1 = RTMS_EX_H("Remaining element outside the main json value",45,341899109);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
				(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
			}
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H("Syntax error unexpected token, expecting \'{\' or \'[\'",51,1020017191);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
			(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
		}
		RTHOOK(8);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(9);
		(nstcall = 0, F1113_8583(Current));
		RTHOOK(10);
		tr1 = RTMS_EX_H("",0,0);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
		
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("is_parsed", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_)) {
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

/* {JSON_PARSER}.report_error */
void F1113_8557 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("report_error", 1112, Current, 0, 1, 15477);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("e_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F713_5001(RTCW(tr1), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("has_error", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_not_valid", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F1113_8540(Current))) {
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

/* {JSON_PARSER}.report_error_at */
void F1113_8558 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("report_error_at", 1112, Current, 0, 2, 15478);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("e_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("pos_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H(" (position: ",12,1385097760);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(arg1))-1079])(arg1, tr1));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
		tr2 = eif_out__i4_s1(ti4_1);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, tr2));
		tr1 = RTMS_EX_H(")",1,41);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		(nstcall = 0, F1113_8557(Current, tr1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F1113_8557(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("has_error", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("is_not_valid", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F1113_8540(Current))) {
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

/* {JSON_PARSER}.parse_json */
EIF_REFERENCE F1113_8559 (EIF_REFERENCE Current)
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
	
	RTEAA("parse_json", 1112, Current, 0, 0, 15479);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1113_8556(Current));
	RTHOOK(2);
	if ((nstcall = 0, F1113_8540(Current))) {
		RTHOOK(3);
		Result = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.parse_object */
EIF_REFERENCE F1113_8560 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("parse_object", 1112, Current, 1, 0, 15480);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1113_8556(Current));
	RTHOOK(2);
	tb1 = '\0';
	if ((nstcall = 0, F1113_8540(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc1 = tr1;
		loc1 = RTRV(eif_new_type(1086, 0x01),loc1);
		tb1 = EIF_TEST(loc1);
	}
	if (tb1) {
		RTHOOK(3);
		Result = (EIF_REFERENCE) loc1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.parse */
EIF_REFERENCE F1113_8561 (EIF_REFERENCE Current)
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
	
	RTEAA("parse", 1112, Current, 0, 0, 15481);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1113_8562(Current));
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_9_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.next_parsed_json_value */
EIF_REFERENCE F1113_8562 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("next_parsed_json_value", 1112, Current, 1, 0, 15482);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
	RTHOOK(2);
	(nstcall = 0, F1113_8554(Current));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_) = (EIF_INTEGER_32) loc1;
	RTHOOK(4);
	(nstcall = 0, F1113_8582(Current));
	RTHOOK(5);
	Result = (nstcall = 0, F1113_8563(Current));
	RTHOOK(6);
	(nstcall = 0, F1113_8583(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.next_json_value */
EIF_REFERENCE F1113_8563 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("next_json_value", 1112, Current, 1, 0, 15483);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_)) {
		RTHOOK(2);
		(nstcall = 0, F94_1376(Current));
		RTHOOK(3);
		loc1 = (nstcall = 0, F94_1382(Current));
		RTHOOK(4);
		switch (loc1) {
			case (EIF_CHARACTER_8) '{':
				RTHOOK(5);
				Result = (nstcall = 0, F1113_8564(Current));
				break;
			case (EIF_CHARACTER_8) '\"':
				RTHOOK(6);
				Result = (nstcall = 0, F1113_8565(Current));
				break;
			case (EIF_CHARACTER_8) '[':
				RTHOOK(7);
				Result = (nstcall = 0, F1113_8566(Current));
				break;
			default:
				RTHOOK(8);
				tb1 = '\01';
				tb2 = EIF_TEST(isdigit(loc1));
				if (!tb2) {
					tb1 = (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '-');
				}
				if (tb1) {
					RTHOOK(9);
					Result = (nstcall = 0, F1113_8567(Current));
				} else {
					RTHOOK(10);
					if ((nstcall = 0, F1113_8568(Current))) {
						RTHOOK(11);
						Result = *(EIF_REFERENCE *)(Current + _REFACS_5_);
						RTHOOK(12);
						(nstcall = 0, F94_1374(Current));
						RTHOOK(13);
						(nstcall = 0, F94_1374(Current));
						RTHOOK(14);
						(nstcall = 0, F94_1374(Current));
					} else {
						RTHOOK(15);
						if ((nstcall = 0, F1113_8570(Current))) {
							RTHOOK(16);
							Result = *(EIF_REFERENCE *)(Current + _REFACS_4_);
							RTHOOK(17);
							(nstcall = 0, F94_1374(Current));
							RTHOOK(18);
							(nstcall = 0, F94_1374(Current));
							RTHOOK(19);
							(nstcall = 0, F94_1374(Current));
						} else {
							RTHOOK(20);
							if ((nstcall = 0, F1113_8569(Current))) {
								RTHOOK(21);
								Result = *(EIF_REFERENCE *)(Current + _REFACS_3_);
								RTHOOK(22);
								(nstcall = 0, F94_1374(Current));
								RTHOOK(23);
								(nstcall = 0, F94_1374(Current));
								RTHOOK(24);
								(nstcall = 0, F94_1374(Current));
								RTHOOK(25);
								(nstcall = 0, F94_1374(Current));
							} else {
								RTHOOK(26);
								tr1 = RTMS_EX_H("JSON value is not well formed",29,1143638628);
								ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
								(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
								RTHOOK(27);
								Result = (EIF_REFERENCE) NULL;
							}
						}
					}
				}
				break;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("is_parsed_implies_result_not_void", EX_POST);
		if ((!((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_)) || ((EIF_BOOLEAN)(Result != NULL)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.next_json_object */
EIF_REFERENCE F1113_8564 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("next_json_object", 1112, Current, 3, 0, 15484);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F94_1374(Current));
	RTHOOK(2);
	(nstcall = 0, F94_1376(Current));
	RTHOOK(3);
	if ((EIF_BOOLEAN)((nstcall = 0, F94_1382(Current)) == (EIF_CHARACTER_8) '}')) {
		RTHOOK(4);
		Result = RTLNS(eif_new_type(1086, 0x01).id, 1086, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F1087_8075(RTCW(Result), ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(5);
		Result = RTLNS(eif_new_type(1086, 0x01).id, 1086, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F1087_8075(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_2_)));
		RTHOOK(6);
		(nstcall = 0, F94_1375(Current));
		RTHOOK(7);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) !loc1) break;
			RTHOOK(9);
			(nstcall = 0, F94_1374(Current));
			RTHOOK(10);
			(nstcall = 0, F94_1376(Current));
			RTHOOK(11);
			loc2 = (nstcall = 0, F1113_8565(Current));
			RTHOOK(12);
			(nstcall = 0, F94_1374(Current));
			RTHOOK(13);
			(nstcall = 0, F94_1376(Current));
			RTHOOK(14);
			if ((EIF_BOOLEAN)((nstcall = 0, F94_1382(Current)) == (EIF_CHARACTER_8) ':')) {
				RTHOOK(15);
				(nstcall = 0, F94_1374(Current));
				RTHOOK(16);
				(nstcall = 0, F94_1376(Current));
			} else {
				RTHOOK(17);
				tr1 = RTMS_EX_H("\012 Input string is a not well formed JSON, expected [:] found [",62,979945051);
				tc1 = (nstcall = 0, F94_1382(Current));
				tr2 = eif_out__c1_s1(tc1);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
				tr1 = RTMS_EX_H("]",1,93);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
				(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
				RTHOOK(18);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(19);
			loc3 = (nstcall = 0, F1113_8563(Current));
			RTHOOK(20);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_) && (EIF_BOOLEAN) ((EIF_BOOLEAN)(loc3 != NULL) && (EIF_BOOLEAN)(loc2 != NULL)))) {
				RTHOOK(21);
				(nstcall = 1, F1087_8079(RTCW(Result), loc3, loc2));
				RTHOOK(22);
				(nstcall = 0, F94_1374(Current));
				RTHOOK(23);
				(nstcall = 0, F94_1376(Current));
				RTHOOK(24);
				if ((EIF_BOOLEAN)((nstcall = 0, F94_1382(Current)) == (EIF_CHARACTER_8) '}')) {
					RTHOOK(25);
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(26);
					if ((EIF_BOOLEAN)((nstcall = 0, F94_1382(Current)) != (EIF_CHARACTER_8) ',')) {
						RTHOOK(27);
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(28);
						tr1 = RTMS_EX_H("JSON Object syntactically malformed expected , found [",54,605843291);
						tc1 = (nstcall = 0, F94_1382(Current));
						tr2 = eif_out__c1_s1(tc1);
						tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
						tr1 = RTMS_EX_H("]",1,93);
						tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
						ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
						(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
					}
				}
			} else {
				RTHOOK(29);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.next_json_string */
EIF_REFERENCE F1113_8565 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("next_json_string", 1112, Current, 4, 0, 15485);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R6234[Dtype(RTCW(loc3))-1080])(loc3));
	RTHOOK(3);
	if ((EIF_BOOLEAN)((nstcall = 0, F94_1382(Current)) == (EIF_CHARACTER_8) '\"')) {
		RTHOOK(4);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN) !loc1) break;
			RTHOOK(6);
			(nstcall = 0, F94_1374(Current));
			RTHOOK(7);
			loc2 = (nstcall = 0, F94_1382(Current));
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '\"')) {
				RTHOOK(9);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '\\')) {
					RTHOOK(11);
					(nstcall = 0, F94_1374(Current));
					RTHOOK(12);
					loc2 = (nstcall = 0, F94_1382(Current));
					RTHOOK(13);
					if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) 'u')) {
						RTHOOK(14);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_2_);
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
						RTHOOK(15);
						tr1 = RTMS_EX_H("\\u",2,23669);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc3))-1080])(loc3, tr1));
						RTHOOK(16);
						(nstcall = 0, F1113_8571(Current, loc3));
						RTHOOK(17);
						loc2 = (nstcall = 0, F94_1382(Current));
						RTHOOK(18);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc3)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN) !(nstcall = 0, F1113_8573(Current, loc3, loc4, ti4_1))) {
							RTHOOK(19);
							loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(20);
							tr1 = RTMS_EX_H("Input string is not well formed JSON, expected Unicode value, found [",69,2033199195);
							tr2 = eif_out__c1_s1(loc2);
							tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
							tr1 = RTMS_EX_H("]",1,93);
							tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
							ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
							(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
						}
					} else {
						RTHOOK(21);
						tb1 = '\01';
						tb2 = '\0';
						if ((EIF_BOOLEAN) !(nstcall = 0, F93_1367(Current, loc2))) {
							tb2 = (EIF_BOOLEAN) !(nstcall = 0, F93_1368(Current, loc2));
						}
						if (!tb2) {
							tb1 = (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '\012');
						}
						if (tb1) {
							RTHOOK(22);
							loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
							RTHOOK(23);
							tr1 = RTMS_EX_H("Input string is not well formed JSON, found [",45,1899730011);
							tr2 = eif_out__c1_s1(loc2);
							tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
							tr1 = RTMS_EX_H("]",1,93);
							tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
							ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
							(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
						} else {
							RTHOOK(24);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc3))-1080])(loc3, (EIF_CHARACTER_8) '\\'));
							RTHOOK(25);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc3))-1080])(loc3, loc2));
						}
					}
				} else {
					RTHOOK(26);
					tb1 = '\0';
					if ((nstcall = 0, F93_1367(Current, loc2))) {
						tb1 = (EIF_BOOLEAN)(loc2 != (EIF_CHARACTER_8) '/');
					}
					if (tb1) {
						RTHOOK(27);
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(28);
						tr1 = RTMS_EX_H("Input string is not well formed JSON, found [",45,1899730011);
						tr2 = eif_out__c1_s1(loc2);
						tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
						tr1 = RTMS_EX_H("]",1,93);
						tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
						ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
						(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
					} else {
						RTHOOK(29);
						if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '\000')) {
							RTHOOK(30);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc3))-1080])(loc3, loc2));
						} else {
							RTHOOK(31);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc3))-1080])(loc3, loc2));
						}
					}
				}
			}
		}
		RTHOOK(32);
		Result = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
		tr1 = (nstcall = 1, F1_14(loc3));
		(nstcall = -1, F1089_8124(RTCW(Result), tr1));
	} else {
		RTHOOK(33);
		Result = (EIF_REFERENCE) NULL;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.parse_array */
EIF_REFERENCE F1113_8566 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("parse_array", 1112, Current, 3, 0, 15486);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1090, 0x01).id, 1090, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1091_8157(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_1_)));
	RTHOOK(2);
	(nstcall = 0, F94_1374(Current));
	RTHOOK(3);
	(nstcall = 0, F94_1376(Current));
	RTHOOK(4);
	if ((EIF_BOOLEAN)((nstcall = 0, F94_1382(Current)) == (EIF_CHARACTER_8) ']')) {
	} else {
		RTHOOK(5);
		(nstcall = 0, F94_1375(Current));
		RTHOOK(6);
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) !loc1) break;
			RTHOOK(8);
			(nstcall = 0, F94_1374(Current));
			RTHOOK(9);
			(nstcall = 0, F94_1376(Current));
			RTHOOK(10);
			loc2 = (nstcall = 0, F1113_8563(Current));
			RTHOOK(11);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_9_1_) && (EIF_BOOLEAN)(loc2 != NULL))) {
				RTHOOK(12);
				(nstcall = 1, F1091_8170(RTCW(Result), loc2));
				RTHOOK(13);
				(nstcall = 0, F94_1374(Current));
				RTHOOK(14);
				(nstcall = 0, F94_1376(Current));
				RTHOOK(15);
				loc3 = (nstcall = 0, F94_1382(Current));
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) ']')) {
					RTHOOK(17);
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				} else {
					RTHOOK(18);
					if ((EIF_BOOLEAN)(loc3 != (EIF_CHARACTER_8) ',')) {
						RTHOOK(19);
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(20);
						tr1 = RTMS_EX_H("Array is not well formed JSON, found [",38,206143579);
						tr2 = eif_out__c1_s1(loc3);
						tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
						tr1 = RTMS_EX_H("]",1,93);
						tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
						ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
						(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
					}
				}
			} else {
				RTHOOK(21);
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(22);
				tr1 = RTMS_EX_H("Array is not well formed JSON, found [",38,206143579);
				tc1 = (nstcall = 0, F94_1382(Current));
				tr2 = eif_out__c1_s1(tc1);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
				tr1 = RTMS_EX_H("]",1,93);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
				(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.next_json_number */
EIF_REFERENCE F1113_8567 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("next_json_number", 1112, Current, 4, 0, 15487);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R6234[Dtype(RTCW(loc4))-1080])(loc4));
	RTHOOK(3);
	tc1 = (nstcall = 0, F94_1382(Current));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc4))-1080])(loc4, tc1));
	RTHOOK(4);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) !loc1) break;
		RTHOOK(6);
		(nstcall = 0, F94_1374(Current));
		RTHOOK(7);
		loc3 = (nstcall = 0, F94_1382(Current));
		RTHOOK(8);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		if (!(EIF_BOOLEAN) !(nstcall = 0, F94_1379(Current))) {
			tb4 = (nstcall = 0, F93_1366(Current, loc3));
		}
		if (!tb4) {
			tb3 = (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) ',');
		}
		if (!tb3) {
			tb2 = (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\012');
		}
		if (!tb2) {
			tb1 = (EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\015');
		}
		if (tb1) {
			RTHOOK(9);
			loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(10);
			(nstcall = 0, F94_1375(Current));
		} else {
			RTHOOK(11);
			tc1 = (nstcall = 0, F94_1382(Current));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc4))-1080])(loc4, tc1));
		}
	}
	RTHOOK(12);
	if ((nstcall = 0, F1113_8572(Current, loc4))) {
		RTHOOK(13);
		tb1 = (nstcall = 1, F1076_7634(RTCW(loc4)));
		if (tb1) {
			RTHOOK(14);
			Result = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
			ti8_1 = (nstcall = 1, F1076_7668(RTCW(loc4)));
			(nstcall = -1, F1092_8178(RTCW(Result), ti8_1));
			RTHOOK(15);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(16);
			tb1 = (nstcall = 1, F1076_7627(RTCW(loc4)));
			if (tb1) {
				RTHOOK(17);
				Result = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
				tr8_1 = (nstcall = 1, F1076_7676(RTCW(loc4)));
				(nstcall = -1, F1092_8180(RTCW(Result), tr8_1));
			}
		}
	} else {
		RTHOOK(18);
		tr1 = RTMS_EX_H("Expected a number, found [",26,1659187803);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc4));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_2_0_0_);
		(nstcall = 0, F1113_8558(Current, tr1, ti4_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.is_null */
EIF_BOOLEAN F1113_8568 (EIF_REFERENCE Current)
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
	
	RTEAA("is_null", 1112, Current, 0, 0, 15488);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(325,(nstcall = 0, F1113_8578), (Current));
	Result = (nstcall = 0, F94_1378(Current, tr1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.is_false */
EIF_BOOLEAN F1113_8569 (EIF_REFERENCE Current)
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
	
	RTEAA("is_false", 1112, Current, 0, 0, 15489);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(326,(nstcall = 0, F1113_8576), (Current));
	Result = (nstcall = 0, F94_1378(Current, tr1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 5L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.is_true */
EIF_BOOLEAN F1113_8570 (EIF_REFERENCE Current)
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
	
	RTEAA("is_true", 1112, Current, 0, 0, 15490);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(327,(nstcall = 0, F1113_8577), (Current));
	Result = (nstcall = 0, F94_1378(Current, tr1, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.read_unicode_info */
void F1113_8571 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("read_unicode_info", 1112, Current, 1, 1, 15491);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 4L))) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F94_1379(Current));
		}
		if (tb1) break;
		RTHOOK(3);
		(nstcall = 0, F94_1374(Current));
		RTHOOK(4);
		tc1 = (nstcall = 0, F94_1382(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, tc1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.is_valid_number */
EIF_BOOLEAN F1113_8572 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_valid_number", 1112, Current, 4, 1, 15492);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc4 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R6234[Dtype(RTCW(loc4))-1080])(loc4));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	} else {
		RTHOOK(6);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(7);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(8);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '-')) {
			RTHOOK(10);
			(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
			RTHOOK(11);
			loc2++;
			RTHOOK(12);
			if ((EIF_BOOLEAN) (loc2 > loc3)) {
				RTHOOK(13);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			} else {
				RTHOOK(14);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
				loc1 = (EIF_CHARACTER_8) tc1;
			}
		}
		RTHOOK(15);
		tb1 = '\0';
		if (Result) {
			tb2 = EIF_TEST(isdigit(loc1));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '0')) {
				RTHOOK(17);
				(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
				RTHOOK(18);
				loc2++;
				RTHOOK(19);
				if ((EIF_BOOLEAN) (loc2 <= loc3)) {
					RTHOOK(20);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
					loc1 = (EIF_CHARACTER_8) tc1;
				}
			} else {
				RTHOOK(21);
				(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
				RTHOOK(22);
				loc2++;
				RTHOOK(23);
				if ((EIF_BOOLEAN) (loc2 <= loc3)) {
					RTHOOK(24);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
					loc1 = (EIF_CHARACTER_8) tc1;
					for (;;) {
						RTHOOK(25);
						tb1 = '\01';
						if (!(EIF_BOOLEAN) (loc2 > loc3)) {
							tb2 = EIF_TEST(isdigit(loc1));
							tb1 = (EIF_BOOLEAN) !tb2;
						}
						if (tb1) break;
						RTHOOK(26);
						(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
						RTHOOK(27);
						loc2++;
						RTHOOK(28);
						if ((EIF_BOOLEAN) (loc2 <= loc3)) {
							RTHOOK(29);
							tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
							loc1 = (EIF_CHARACTER_8) tc1;
						}
					}
				}
			}
		}
	}
	RTHOOK(30);
	if ((EIF_BOOLEAN) (loc2 > loc3)) {
	} else {
		RTHOOK(31);
		if (Result) {
			RTHOOK(32);
			if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '.')) {
				RTHOOK(33);
				(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
				RTHOOK(34);
				loc2++;
				RTHOOK(35);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
				loc1 = (EIF_CHARACTER_8) tc1;
				RTHOOK(36);
				tb2 = EIF_TEST(isdigit(loc1));
				if (tb2) {
					for (;;) {
						RTHOOK(37);
						tb2 = '\01';
						if (!(EIF_BOOLEAN) (loc2 > loc3)) {
							tb3 = EIF_TEST(isdigit(loc1));
							tb2 = (EIF_BOOLEAN) !tb3;
						}
						if (tb2) break;
						RTHOOK(38);
						(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
						RTHOOK(39);
						loc2++;
						RTHOOK(40);
						if ((EIF_BOOLEAN) (loc2 <= loc3)) {
							RTHOOK(41);
							tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
							loc1 = (EIF_CHARACTER_8) tc1;
						}
					}
				} else {
					RTHOOK(42);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			}
		}
		RTHOOK(43);
		if (Result) {
			RTHOOK(44);
			if ((nstcall = 0, F93_1369(Current, loc1))) {
				RTHOOK(45);
				(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
				RTHOOK(46);
				loc2++;
				RTHOOK(47);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
				loc1 = (EIF_CHARACTER_8) tc1;
				RTHOOK(48);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '+') || (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '-'))) {
					RTHOOK(49);
					(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
					RTHOOK(50);
					loc2++;
					RTHOOK(51);
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						RTHOOK(52);
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
						loc1 = (EIF_CHARACTER_8) tc1;
					}
				}
				RTHOOK(53);
				tb3 = EIF_TEST(isdigit(loc1));
				if (tb3) {
					for (;;) {
						RTHOOK(54);
						tb3 = '\01';
						if (!(EIF_BOOLEAN) (loc2 > loc3)) {
							tb4 = EIF_TEST(isdigit(loc1));
							tb3 = (EIF_BOOLEAN) !tb4;
						}
						if (tb3) break;
						RTHOOK(55);
						(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
						RTHOOK(56);
						loc2++;
						RTHOOK(57);
						if ((EIF_BOOLEAN) (loc2 <= loc3)) {
							RTHOOK(58);
							tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
							loc1 = (EIF_CHARACTER_8) tc1;
						}
					}
				} else {
					RTHOOK(59);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			}
		}
		RTHOOK(60);
		if (Result) {
			for (;;) {
				RTHOOK(61);
				tb4 = '\01';
				if (!(EIF_BOOLEAN) (loc2 > loc3)) {
					tb5 = eif_builtin_CHARACTER_8_is_space__c1_b(loc1);
					tb4 = (EIF_BOOLEAN) !tb5;
				}
				if (tb4) break;
				RTHOOK(62);
				(nstcall = 1, F1081_7858(RTCW(loc4), loc1));
				RTHOOK(63);
				loc2++;
				RTHOOK(64);
				if ((EIF_BOOLEAN) (loc2 <= loc3)) {
					RTHOOK(65);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
					loc1 = (EIF_CHARACTER_8) tc1;
				}
			}
			RTHOOK(66);
			Result = '\0';
			if ((EIF_BOOLEAN) (loc2 > loc3)) {
				tb5 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(loc4))-1079])(loc4, arg1));
				Result = tb5;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(67);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.is_substring_valid_unicode */
EIF_BOOLEAN F1113_8573 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_substring_valid_unicode", 1112, Current, 1, 3, 15493);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN)((EIF_INTEGER_32) (arg3 - arg2) == ((EIF_INTEGER_32) 5L))) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, arg2));
		tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\\');
	}
	if (tb2) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
		tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'u');
	}
	if (tb1) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(3);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L));
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > arg3) || (EIF_BOOLEAN)(Result == (EIF_BOOLEAN) 0))) break;
			RTHOOK(5);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
			switch (tc1) {
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
				case (EIF_CHARACTER_8) 'A':
				case (EIF_CHARACTER_8) 'B':
				case (EIF_CHARACTER_8) 'C':
				case (EIF_CHARACTER_8) 'D':
				case (EIF_CHARACTER_8) 'E':
				case (EIF_CHARACTER_8) 'F':
				case (EIF_CHARACTER_8) 'a':
				case (EIF_CHARACTER_8) 'b':
				case (EIF_CHARACTER_8) 'c':
				case (EIF_CHARACTER_8) 'd':
				case (EIF_CHARACTER_8) 'e':
				case (EIF_CHARACTER_8) 'f':
					break;
				default:
					RTHOOK(6);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					break;
			}
			RTHOOK(7);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.extra_elements */
EIF_BOOLEAN F1113_8574 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("extra_elements", 1112, Current, 1, 0, 15494);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F94_1379(Current))) {
		RTHOOK(2);
		(nstcall = 0, F94_1374(Current));
	}
	RTHOOK(3);
	loc1 = (nstcall = 0, F94_1382(Current));
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) ' ') || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\015')) || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\000')) || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\011')) || (EIF_BOOLEAN)(loc1 != (EIF_CHARACTER_8) '\012'))) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F94_1379(Current));
		}
		if (tb1) break;
		RTHOOK(5);
		(nstcall = 0, F94_1374(Current));
		RTHOOK(6);
		loc1 = (nstcall = 0, F94_1382(Current));
	}
	RTHOOK(7);
	Result = (nstcall = 0, F94_1379(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.is_valid_start_symbol */
EIF_BOOLEAN F1113_8575 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_valid_start_symbol", 1112, Current, 1, 0, 15495);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if ((EIF_TRUE)) {
		ti4_1 = *(EIF_INTEGER_32 *)(loc1+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(2);
		Result = '\01';
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(loc1)-776])(loc1, ((EIF_INTEGER_32) 1L)));
		if (!(EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '{')) {
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(loc1)-776])(loc1, ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '[');
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_PARSER}.false_id */

EIF_REFERENCE F1113_8576 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (326,RTMS_EX_H("false",5,1635280741));
}

/* {JSON_PARSER}.true_id */

EIF_REFERENCE F1113_8577 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (327,RTMS_EX_H("true",4,1953658213));
}

/* {JSON_PARSER}.null_id */

EIF_REFERENCE F1113_8578 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (325,RTMS_EX_H("null",4,1853189228));
}

/* {JSON_PARSER}.false_value */
EIF_REFERENCE F1113_8579 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {JSON_PARSER}.true_value */
EIF_REFERENCE F1113_8580 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {JSON_PARSER}.null_value */
EIF_REFERENCE F1113_8581 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {JSON_PARSER}.initialize_buffers */
void F1113_8582 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("initialize_buffers", 1112, Current, 0, 0, 15502);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	tr2 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
	ti4_2 = (nstcall = 0, F1113_8549(Current));
	ti4_3 = eif_min_int32 (ti4_1,ti4_2);
	(nstcall = -1, F1079_7731(RTCW(tr1), ti4_3));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	ti4_1 = (nstcall = 0, F1113_8550(Current));
	(nstcall = -1, F1079_7731(RTCW(tr1), ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	ti4_1 = (nstcall = 0, F1113_8550(Current));
	(nstcall = -1, F1079_7731(RTCW(tr1), ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.free_buffers */
void F1113_8583 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("free_buffers", 1112, Current, 1, 0, 15503);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1076_7601(RTCW(loc1)));
	RTHOOK(2);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) loc1;
	RTHOOK(3);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) loc1;
	RTHOOK(4);
	RTAR(Current, loc1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {JSON_PARSER}.buffer_json_string */
EIF_REFERENCE F1113_8584 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {JSON_PARSER}.buffer_json_number */
EIF_REFERENCE F1113_8585 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {JSON_PARSER}.buffer_is_number */
EIF_REFERENCE F1113_8586 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


void EIF_Minit386 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
