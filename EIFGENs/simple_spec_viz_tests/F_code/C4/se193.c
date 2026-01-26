/*
 * Code for class SED_SESSION_DESERIALIZER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se193.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_SESSION_DESERIALIZER}.make */
void F219_2525 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make", 218, Current, 0, 1, 2552);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_deserializer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_deserializer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3381(RTCW(arg1)));
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
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(280, 1).id);
	(nstcall = -1, F281_3769(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_3_)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 0L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("deserializer_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
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

/* {SED_SESSION_DESERIALIZER}.deserializer */
EIF_REFERENCE F219_2526 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SED_SESSION_DESERIALIZER}.last_decoded_object */
EIF_REFERENCE F219_2527 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SED_SESSION_DESERIALIZER}.error */
EIF_REFERENCE F219_2528 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("error", 218, Current, 1, 0, 2555);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F665_4976(loc1));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F867_5794(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.errors */
EIF_REFERENCE F219_2529 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SED_SESSION_DESERIALIZER}.has_error */
EIF_BOOLEAN F219_2530 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("has_error", 218, Current, 1, 0, 2557);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (nstcall = 1, F665_4976(loc1));
		Result = (EIF_BOOLEAN) !tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.set_deserializer */
void F219_2531 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_deserializer", 218, Current, 0, 1, 2558);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_deserializer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_deserializer_ready", EX_PRE);
		tb1 = (nstcall = 1, F265_3381(RTCW(arg1)));
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
		RTCT("deserializer_set", EX_POST);
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

/* {SED_SESSION_DESERIALIZER}.decode */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F219_2532 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTED;
	EIF_NATURAL_32 EIF_VOLATILE loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN EIF_VOLATILE loc4 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_NATURAL_32  EIF_VOLATILE tu4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc5);
	RTLR(4,tr2);
	RTLR(5,saved_except);
	RTLIU(6);
	RTXSLS;
	
	RTEAA("decode", 218, Current, 5, 1, 2559);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc4) {
		RTHOOK(2);
		(nstcall = 0, F219_2546(Current));
		RTHOOK(3);
		if ((EIF_BOOLEAN) !arg1) {
			RTHOOK(4);
			loc2 = RTOUCR(165,(nstcall = 0, F219_2576), (Current));
			RTHOOK(5);
			tb1 = (nstcall = 1, F302_3874(loc2));
			loc3 = (EIF_BOOLEAN) tb1;
			RTHOOK(6);
			(nstcall = 1, F302_3887(loc2));
		}
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = (nstcall = 1, F109_1524(RTCW(tr1)));
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(8);
		ti4_1 = (EIF_INTEGER_32) loc1;
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0xFF01,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNSP2(typres0.id,EO_REF,(EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),sizeof(EIF_REFERENCE), EIF_FALSE);
			RT_SPECIAL_COUNT(tr1) = 0;
		}
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R2384[dtype-218])(Current, loc1));
		RTHOOK(10);
		if ((EIF_BOOLEAN) !(nstcall = 0, F219_2530(Current))) {
			RTHOOK(11);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R2391[dtype-218])(Current, loc1));
		}
	} else {
		RTHOOK(12);
		tr1 = (nstcall = 0, F217_2487(Current));
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTHOOK(13);
			tr1 = RTOUCR(163,(nstcall = 0, F219_2539), (Current));
			tr2 = (nstcall = 1, F40_765(RTCW(tr1), loc5));
			(nstcall = 0, F219_2544(Current, tr2));
		} else {
			RTHOOK(14);
			tr1 = RTOUCR(163,(nstcall = 0, F219_2539), (Current));
			tr2 = RTMS_EX_H("An Unknown exception occurred in `decode\'.",42,984962350);
			tr2 = (nstcall = 1, F40_764(RTCW(tr1), tr2));
			(nstcall = 0, F219_2544(Current, tr2));
		}
		RTHOOK(15);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	}
	RTHOOK(16);
	if ((EIF_BOOLEAN) (loc3 && (EIF_BOOLEAN)(loc2 != NULL))) {
		RTHOOK(17);
		(nstcall = 1, F302_3888(loc2));
	}
	RTHOOK(18);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R2383[dtype-218])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(19);
	loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(20);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(21);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {SED_SESSION_DESERIALIZER}.reflector */
EIF_REFERENCE F219_2533 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SED_SESSION_DESERIALIZER}.reflected_object */
EIF_REFERENCE F219_2534 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SED_SESSION_DESERIALIZER}.object_references */
EIF_REFERENCE F219_2535 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {SED_SESSION_DESERIALIZER}.is_transient_retrieval_required */
EIF_BOOLEAN F219_2536 (EIF_REFERENCE Current)
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
	
	RTEAA("is_transient_retrieval_required", 218, Current, 0, 0, 2563);
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

/* {SED_SESSION_DESERIALIZER}.is_store_settings_enabled */
EIF_BOOLEAN F219_2537 (EIF_REFERENCE Current)
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
	
	RTEAA("is_store_settings_enabled", 218, Current, 0, 0, 2564);
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

/* {SED_SESSION_DESERIALIZER}.has_reference_with_copy_semantics */
EIF_BOOLEAN F219_2538 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O2374[Dtype(Current)-218]);
}


/* {SED_SESSION_DESERIALIZER}.error_factory */
static EIF_REFERENCE F219_2539_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(163)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("error_factory", 218, Current, 0, 0, 2566);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(39, 0x01).id, 39, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
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
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F219_2539 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(163,F219_2539_body,(Current));
}

/* {SED_SESSION_DESERIALIZER}.version */
EIF_NATURAL_32 F219_2540 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current + O2376[Dtype(Current)-218]);
}


/* {SED_SESSION_DESERIALIZER}.dynamic_type_table */
EIF_REFERENCE F219_2541 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {SED_SESSION_DESERIALIZER}.new_dynamic_type_id */
EIF_INTEGER_32 F219_2542 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("new_dynamic_type_id", 218, Current, 1, 1, 2569);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_old_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F901_6149(loc1));
		if ((EIF_BOOLEAN) (arg1 < ti4_1)) {
			RTHOOK(4);
			ti4_1 = (nstcall = 1, F901_6139(loc1, arg1));
			Result = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(5);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		}
	} else {
		RTHOOK(6);
		Result = (EIF_INTEGER_32) arg1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("minus_one_of_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) -1L))) {
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

/* {SED_SESSION_DESERIALIZER}.set_error */
void F219_2543 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_error", 218, Current, 0, 1, 2570);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F219_2544(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("error_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F219_2528(Current)) == arg1)) {
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

/* {SED_SESSION_DESERIALIZER}.add_error */
void F219_2544 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("add_error", 218, Current, 3, 1, 2571);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(loc2)-663])(loc2, arg1));
	} else {
		RTHOOK(3);
		{
			static EIF_TYPE_INDEX typarr0[] = {866,0xFF01,38,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc1 = RTLNSMART(typres0.id);
		}
		(nstcall = -1, F867_5785(RTCW(loc1), ((EIF_INTEGER_32) 10L)));
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, arg1));
		RTHOOK(5);
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) loc1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("error_set", EX_POST);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb2 = (nstcall = 1, F867_5797(loc3, arg1));
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
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.raise_fatal_error */
void F219_2545 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("raise_fatal_error", 218, Current, 2, 1, 2572);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F219_2544(Current, arg1));
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(200, 0x01).id, 200, _OBJSIZ_5_1_0_1_0_0_0_0_);
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 1, F178_2382(RTCW(loc1), tr1));
	RTHOOK(4);
	(nstcall = 1, F178_2367(RTCW(loc1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("error_set", EX_POST);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb2 = (nstcall = 1, F867_5797(loc2, arg1));
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
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.reset_errors */
void F219_2546 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("reset_errors", 218, Current, 0, 0, 2573);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) NULL;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("errors_reset", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) == NULL)) {
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

/* {SED_SESSION_DESERIALIZER}.clear_internal_data */
void F219_2547 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("clear_internal_data", 218, Current, 0, 0, 2574);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 0L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr1) = 0;
	}
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F265_3381(RTCW(tr1)));
	if (tb1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F265_3384(RTCW(tr1)));
	}
	RTHOOK(4);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_header */
void F219_2548 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_header", 218, Current, 0, 1, 2575);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F219_2549(Current));
	RTHOOK(2);
	(nstcall = 0, F219_2550(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_settings */
void F219_2549 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_settings", 218, Current, 0, 0, 2576);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F219_2537(Current))) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current);
		tu4_1 = (nstcall = 1, F109_1524(RTCW(tr1)));
		*(EIF_NATURAL_32 *)(Current + O2376[dtype-218]) = (EIF_NATURAL_32) tu4_1;
		RTHOOK(3);
		if ((EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current + O2376[dtype-218]) >= ((EIF_NATURAL_32) 4U))) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current);
			tb1 = (nstcall = 1, F109_1511(RTCW(tr1)));
			*(EIF_BOOLEAN *)(Current + O2374[dtype-218]) = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(5);
			*(EIF_BOOLEAN *)(Current + O2374[dtype-218]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(6);
		*(EIF_NATURAL_32 *)(Current + O2376[dtype-218]) = (EIF_NATURAL_32) ((EIF_NATURAL_32) 0U);
		RTHOOK(7);
		*(EIF_BOOLEAN *)(Current + O2374[dtype-218]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_object_table */
void F219_2550 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,loc1);
	RTLR(6,loc11);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("read_object_table", 218, Current, 11, 1, 2577);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F109_1511(RTCW(tr1)));
	if (tb1) {
		RTHOOK(2);
		loc4 = RTOUCR(165,(nstcall = 0, F219_2576), (Current));
		RTHOOK(3);
		tb1 = (nstcall = 1, F302_3874(loc4));
		loc5 = (EIF_BOOLEAN) tb1;
		RTHOOK(4);
		loc2 = *(EIF_REFERENCE *)(Current);
		RTHOOK(5);
		loc3 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		RTHOOK(6);
		loc1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5154[Dtype(RTCW(loc1))-898])(loc1, Current));
		RTHOOK(8);
		loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(9);
		ti4_1 = (EIF_INTEGER_32) arg1;
		loc10 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(10);
			if ((EIF_BOOLEAN)(loc9 == loc10)) break;
			RTHOOK(11);
			if ((EIF_BOOLEAN) (loc5 && (EIF_BOOLEAN)((EIF_INTEGER_32) (loc9 / ((EIF_INTEGER_32) 2000L)) == ((EIF_INTEGER_32) 0L)))) {
				RTHOOK(12);
				(nstcall = 1, F302_3887(loc4));
			}
			RTHOOK(13);
			tu4_1 = (nstcall = 1, F109_1524(RTCW(loc2)));
			ti4_1 = (EIF_INTEGER_32) tu4_1;
			loc8 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			loc7 = (nstcall = 0, F219_2542(Current, loc8));
			RTHOOK(15);
			if ((EIF_BOOLEAN) (loc7 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(16);
				tr1 = *(EIF_REFERENCE *)(Current);
				tu4_1 = (nstcall = 1, F109_1524(RTCW(tr1)));
				loc6 = (EIF_NATURAL_32) tu4_1;
				
				
				RTHOOK(17);
				tu1_1 = (nstcall = 1, F110_1550(RTCW(loc2)));
				if ((EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 1U))) {
					RTHOOK(18);
					ti4_1 = (nstcall = 1, F109_1523(RTCW(loc2)));
					ti4_2 = (nstcall = 1, F109_1523(RTCW(loc2)));
					loc11 = (nstcall = 0, F219_2559(Current, loc7, ti4_1, ti4_2));
				} else {
					RTHOOK(19);
					tr1 = (nstcall = 1, F277_3625(RTCW(loc3), loc7));
					loc11 = (EIF_REFERENCE) RTCCL(tr1);
				}
				RTHOOK(20);
				tr1 = RTCCL(loc11);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R5154[Dtype(RTCW(loc1))-898])(loc1, tr1));
			} else {
				RTHOOK(21);
				tr1 = RTOUCR(163,(nstcall = 0, F219_2539), (Current));
				tr2 = RTMS_EX_H("Cannot read object type. Corrupted data!",40,1055785505);
				tr2 = (nstcall = 1, F40_764(RTCW(tr1), tr2));
				(nstcall = 0, F219_2545(Current, tr2));
			}
			RTHOOK(22);
			loc9++;
		}
		RTHOOK(23);
		if (loc5) {
			RTHOOK(24);
			(nstcall = 1, F302_3888(loc4));
		}
	} else {
		RTHOOK(25);
		tr1 = RTOUCR(163,(nstcall = 0, F219_2539), (Current));
		tr2 = (nstcall = 1, F40_771(RTCW(tr1)));
		(nstcall = 0, F219_2545(Current, tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_default_value */
void F219_2551 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
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
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_default_value", 218, Current, 1, 1, 2578);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	switch (arg1) {
		case 3L:
			RTHOOK(3);
			tb1 = (nstcall = 1, F109_1511(RTCW(loc1)));
			eif_do_nothing_value.it_b = tb1;
			break;
		case 2L:
			RTHOOK(4);
			tc1 = (nstcall = 1, F109_1505(RTCW(loc1)));
			eif_do_nothing_value.it_c1 = tc1;
			break;
		case 12L:
			RTHOOK(5);
			tw1 = (nstcall = 1, F109_1506(RTCW(loc1)));
			eif_do_nothing_value.it_c4 = tw1;
			break;
		case 13L:
			RTHOOK(6);
			tu1_1 = (nstcall = 1, F110_1550(RTCW(loc1)));
			eif_do_nothing_value.it_n1 = tu1_1;
			break;
		case 14L:
			RTHOOK(7);
			tu2_1 = (nstcall = 1, F110_1551(RTCW(loc1)));
			eif_do_nothing_value.it_n2 = tu2_1;
			break;
		case 15L:
			RTHOOK(8);
			tu4_1 = (nstcall = 1, F110_1552(RTCW(loc1)));
			eif_do_nothing_value.it_n4 = tu4_1;
			break;
		case 16L:
			RTHOOK(9);
			tu8_1 = (nstcall = 1, F110_1553(RTCW(loc1)));
			eif_do_nothing_value.it_n8 = tu8_1;
			break;
		case 9L:
			RTHOOK(10);
			ti1_1 = (nstcall = 1, F110_1554(RTCW(loc1)));
			eif_do_nothing_value.it_i1 = ti1_1;
			break;
		case 10L:
			RTHOOK(11);
			ti2_1 = (nstcall = 1, F110_1555(RTCW(loc1)));
			eif_do_nothing_value.it_i2 = ti2_1;
			break;
		case 4L:
			RTHOOK(12);
			ti4_1 = (nstcall = 1, F110_1556(RTCW(loc1)));
			eif_do_nothing_value.it_i4 = ti4_1;
			break;
		case 11L:
			RTHOOK(13);
			ti8_1 = (nstcall = 1, F110_1557(RTCW(loc1)));
			eif_do_nothing_value.it_i8 = ti8_1;
			break;
		case 5L:
			RTHOOK(14);
			tr4_1 = (nstcall = 1, F110_1558(RTCW(loc1)));
			eif_do_nothing_value.it_r4 = tr4_1;
			break;
		case 6L:
			RTHOOK(15);
			tr8_1 = (nstcall = 1, F110_1559(RTCW(loc1)));
			eif_do_nothing_value.it_r8 = tr8_1;
			break;
		case 0L:
			RTHOOK(16);
			tp1 = (nstcall = 1, F110_1560(RTCW(loc1)));
			eif_do_nothing_value.it_p = tp1;
			break;
		case 1L:
			RTHOOK(17);
			tu4_1 = (nstcall = 1, F109_1524(RTCW(loc1)));
			eif_do_nothing_value.it_n4 = tu4_1;
			break;
		case 7L:
			RTHOOK(18);
			tu1_1 = (nstcall = 1, F110_1550(RTCW(loc1)));
			eif_do_nothing_value.it_n1 = tu1_1;
			break;
		default:
			
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.read_reference */
EIF_REFERENCE F219_2552 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
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
	
	RTEAA("read_reference", 218, Current, 1, 0, 2579);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tu4_1 = (nstcall = 1, F109_1524(RTCW(tr1)));
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
		
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
		ti4_1 = (EIF_INTEGER_32) loc1;
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ti4_1));
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.read_persistent_field_count */
EIF_INTEGER_32 F219_2553 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_persistent_field_count", 218, Current, 0, 1, 2580);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 1, F276_3615(RTCW(arg1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.new_attribute_offset */
EIF_INTEGER_32 F219_2554 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("new_attribute_offset", 218, Current, 0, 2, 2581);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_new_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_old_offset_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_INTEGER_32) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("new_attribute_offset_non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {SED_SESSION_DESERIALIZER}.decode_objects */
void F219_2555 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("decode_objects", 218, Current, 1, 1, 2582);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_count_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F219_2556(Current, (EIF_BOOLEAN) 1));
	RTHOOK(3);
	loc1 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 == arg1)) break;
		RTHOOK(5);
		(nstcall = 0, F219_2556(Current, (EIF_BOOLEAN) 0));
		RTHOOK(6);
		loc1 += (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_object */
void F219_2556 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("decode_object", 218, Current, 4, 1, 2530);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	loc2 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	RTHOOK(3);
	tu4_1 = (nstcall = 1, F109_1524(RTCW(loc1)));
	loc4 = (EIF_NATURAL_32) tu4_1;
	
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	ti4_1 = (EIF_INTEGER_32) loc4;
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ti4_1));
	loc3 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(5);
	tr1 = RTCCL(loc3);
	(nstcall = 1, F281_3778(RTCW(loc2), tr1));
	RTHOOK(6);
	tb1 = (nstcall = 1, F276_3564(RTCW(loc2)));
	if (tb1) {
		RTHOOK(7);
		tr1 = RTCCL(loc3);
		ti4_1 = (nstcall = 1, F276_3560(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
		ti4_1 = (nstcall = 0, F147_1977(Current, ti4_1));
		(nstcall = 0, F219_2560(Current, tr1, ti4_1));
	} else {
		RTHOOK(8);
		tb1 = (nstcall = 1, F276_3568(RTCW(loc2)));
		if (tb1) {
			RTHOOK(9);
			tr1 = RTCCL(loc3);
			(nstcall = 0, F219_2558(Current, tr1));
		} else {
			RTHOOK(10);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2393[dtype-218])(Current, loc2));
		}
	}
	RTHOOK(11);
	if (arg1) {
		RTHOOK(12);
		tr1 = RTCCL(loc3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_normal_object */
void F219_2557 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
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
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc7);
	RTLIU(6);
	
	RTEAA("decode_normal_object", 218, Current, 7, 1, 2531);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_0_0_0_);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	loc3 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_REFERENCE)) R2389[dtype-218])(Current, arg1));
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == loc3)) break;
		RTHOOK(7);
		loc6 = (nstcall = 0, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R2390[dtype-218])(Current, loc4, loc2));
		
		RTHOOK(8);
		tb1 = (nstcall = 1, F276_3569(RTCW(arg1), loc6));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(9);
			ti4_1 = (nstcall = 1, F276_3577(RTCW(arg1), loc6));
			switch (ti4_1) {
				case 3L:
					RTHOOK(10);
					tb1 = (nstcall = 1, F109_1511(RTCW(loc1)));
					(nstcall = 1, F276_3602(RTCW(arg1), loc6, tb1));
					break;
				case 2L:
					RTHOOK(11);
					tc1 = (nstcall = 1, F109_1505(RTCW(loc1)));
					(nstcall = 1, F276_3599(RTCW(arg1), loc6, tc1));
					break;
				case 12L:
					RTHOOK(12);
					tw1 = (nstcall = 1, F109_1506(RTCW(loc1)));
					(nstcall = 1, F276_3601(RTCW(arg1), loc6, tw1));
					break;
				case 13L:
					RTHOOK(13);
					tu1_1 = (nstcall = 1, F110_1550(RTCW(loc1)));
					(nstcall = 1, F276_3603(RTCW(arg1), loc6, tu1_1));
					break;
				case 14L:
					RTHOOK(14);
					tu2_1 = (nstcall = 1, F110_1551(RTCW(loc1)));
					(nstcall = 1, F276_3604(RTCW(arg1), loc6, tu2_1));
					break;
				case 15L:
					RTHOOK(15);
					tu4_1 = (nstcall = 1, F110_1552(RTCW(loc1)));
					(nstcall = 1, F276_3605(RTCW(arg1), loc6, tu4_1));
					break;
				case 16L:
					RTHOOK(16);
					tu8_1 = (nstcall = 1, F110_1553(RTCW(loc1)));
					(nstcall = 1, F276_3606(RTCW(arg1), loc6, tu8_1));
					break;
				case 9L:
					RTHOOK(17);
					ti1_1 = (nstcall = 1, F110_1554(RTCW(loc1)));
					(nstcall = 1, F276_3607(RTCW(arg1), loc6, ti1_1));
					break;
				case 10L:
					RTHOOK(18);
					ti2_1 = (nstcall = 1, F110_1555(RTCW(loc1)));
					(nstcall = 1, F276_3608(RTCW(arg1), loc6, ti2_1));
					break;
				case 4L:
					RTHOOK(19);
					ti4_1 = (nstcall = 1, F110_1556(RTCW(loc1)));
					(nstcall = 1, F276_3610(RTCW(arg1), loc6, ti4_1));
					break;
				case 11L:
					RTHOOK(20);
					ti8_1 = (nstcall = 1, F110_1557(RTCW(loc1)));
					(nstcall = 1, F276_3611(RTCW(arg1), loc6, ti8_1));
					break;
				case 5L:
					RTHOOK(21);
					tr4_1 = (nstcall = 1, F110_1558(RTCW(loc1)));
					(nstcall = 1, F276_3612(RTCW(arg1), loc6, tr4_1));
					break;
				case 6L:
					RTHOOK(22);
					tr8_1 = (nstcall = 1, F110_1559(RTCW(loc1)));
					(nstcall = 1, F276_3597(RTCW(arg1), loc6, tr8_1));
					break;
				case 0L:
					RTHOOK(23);
					tp1 = (nstcall = 1, F110_1560(RTCW(loc1)));
					(nstcall = 1, F276_3614(RTCW(arg1), loc6, tp1));
					break;
				case 1L:
					RTHOOK(24);
					if (*(EIF_BOOLEAN *)(Current + O2374[dtype-218])) {
						RTHOOK(25);
						tb1 = (nstcall = 1, F109_1511(RTCW(loc1)));
						if (tb1) {
							RTHOOK(26);
							ti4_1 = (nstcall = 1, F109_1523(RTCW(loc1)));
							loc5 = (nstcall = 0, F219_2542(Current, ti4_1));
							RTHOOK(27);
							if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
								RTHOOK(28);
								tr1 = RTOUCR(163,(nstcall = 0, F219_2539), (Current));
								tr2 = RTMS_EX_H("Cannot read object type. Corrupted data!",40,1055785505);
								tr2 = (nstcall = 1, F40_764(RTCW(tr1), tr2));
								(nstcall = 0, F219_2545(Current, tr2));
							} else {
								RTHOOK(29);
								loc7 = RTLNS(eif_new_type(280, 0x01).id, 280, _OBJSIZ_1_0_0_2_0_0_0_0_);
								tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
								tr2 = (nstcall = 1, F277_3625(RTCW(tr1), loc5));
								tr1 = RTCCL(tr2);
								(nstcall = -1, F281_3769(RTCW(loc7), tr1));
								RTHOOK(30);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2393[dtype-218])(Current, loc7));
								RTHOOK(31);
								tr1 = (nstcall = 1, F281_3772(RTCW(loc7)));
								tr2 = RTCCL(tr1);
								(nstcall = 1, F276_3596(RTCW(arg1), loc6, tr2));
							}
						} else {
							RTHOOK(32);
							tr1 = (nstcall = 0, F219_2552(Current));
							tr2 = RTCCL(tr1);
							(nstcall = 1, F276_3596(RTCW(arg1), loc6, tr2));
						}
					} else {
						RTHOOK(33);
						tr1 = (nstcall = 0, F219_2552(Current));
						tr2 = RTCCL(tr1);
						(nstcall = 1, F276_3596(RTCW(arg1), loc6, tr2));
					}
					break;
				case 7L:
					RTHOOK(34);
					ti4_1 = (nstcall = 1, F109_1523(RTCW(loc1)));
					eif_do_nothing_value.it_i4 = ti4_1;
					RTHOOK(35);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R3268[Dtype(RTCW(arg1))-279])(arg1, loc6));
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2393[dtype-218])(Current, tr1));
					break;
				default:
					
					break;
			}
		}
		RTHOOK(36);
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_tuple */
void F219_2558 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
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
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc4);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,loc5);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("decode_tuple", 218, Current, 5, 1, 2532);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_obj_is_tuple", EX_PRE);
		loc4 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,996,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc4 = RTRV(typres0,loc4);
		}
		RTTE(EIF_TEST(loc4), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	loc5 = RTCCL(arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc5 = RTRV(typres0,loc5);
	}
	if (EIF_TEST(loc5)) {
		RTHOOK(5);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F997_6397(loc5));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc2 == loc3)) break;
			RTHOOK(8);
			tu1_1 = (nstcall = 1, F110_1550(RTCW(loc1)));
			switch (tu1_1) {
				case 1U:
					RTHOOK(9);
					tb1 = (nstcall = 1, F109_1511(RTCW(loc1)));
					(nstcall = 1, F997_6403(loc5, tb1, loc2));
					break;
				case 2U:
					RTHOOK(10);
					tc1 = (nstcall = 1, F109_1505(RTCW(loc1)));
					(nstcall = 1, F997_6404(loc5, tc1, loc2));
					break;
				case 14U:
					RTHOOK(11);
					tw1 = (nstcall = 1, F109_1506(RTCW(loc1)));
					(nstcall = 1, F997_6406(loc5, tw1, loc2));
					break;
				case 10U:
					RTHOOK(12);
					tu1_1 = (nstcall = 1, F110_1550(RTCW(loc1)));
					(nstcall = 1, F997_6413(loc5, tu1_1, loc2));
					break;
				case 11U:
					RTHOOK(13);
					tu2_1 = (nstcall = 1, F110_1551(RTCW(loc1)));
					(nstcall = 1, F997_6414(loc5, tu2_1, loc2));
					break;
				case 12U:
					RTHOOK(14);
					tu4_1 = (nstcall = 1, F110_1552(RTCW(loc1)));
					(nstcall = 1, F997_6415(loc5, tu4_1, loc2));
					break;
				case 13U:
					RTHOOK(15);
					tu8_1 = (nstcall = 1, F110_1553(RTCW(loc1)));
					(nstcall = 1, F997_6416(loc5, tu8_1, loc2));
					break;
				case 6U:
					RTHOOK(16);
					ti1_1 = (nstcall = 1, F110_1554(RTCW(loc1)));
					(nstcall = 1, F997_6419(loc5, ti1_1, loc2));
					break;
				case 7U:
					RTHOOK(17);
					ti2_1 = (nstcall = 1, F110_1555(RTCW(loc1)));
					(nstcall = 1, F997_6420(loc5, ti2_1, loc2));
					break;
				case 8U:
					RTHOOK(18);
					ti4_1 = (nstcall = 1, F110_1556(RTCW(loc1)));
					(nstcall = 1, F997_6417(loc5, ti4_1, loc2));
					break;
				case 9U:
					RTHOOK(19);
					ti8_1 = (nstcall = 1, F110_1557(RTCW(loc1)));
					(nstcall = 1, F997_6421(loc5, ti8_1, loc2));
					break;
				case 4U:
					RTHOOK(20);
					tr4_1 = (nstcall = 1, F110_1558(RTCW(loc1)));
					(nstcall = 1, F997_6410(loc5, tr4_1, loc2));
					break;
				case 3U:
					RTHOOK(21);
					tr8_1 = (nstcall = 1, F110_1559(RTCW(loc1)));
					(nstcall = 1, F997_6408(loc5, tr8_1, loc2));
					break;
				case 5U:
					RTHOOK(22);
					tp1 = (nstcall = 1, F110_1560(RTCW(loc1)));
					(nstcall = 1, F997_6412(loc5, tp1, loc2));
					break;
				case 0U:
					RTHOOK(23);
					tr1 = (nstcall = 0, F219_2552(Current));
					tr2 = RTCCL(tr1);
					(nstcall = 1, F997_6402(loc5, tr2, loc2));
					break;
				default:
					
					break;
			}
			RTHOOK(24);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.new_special_instance */
EIF_REFERENCE F219_2559 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("new_special_instance", 218, Current, 0, 3, 2533);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dtype_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_item_type_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_count_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
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
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,901,1035,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_BOOLEAN), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 2L:
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,902,1032,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_CHARACTER_8), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 12L:
			RTHOOK(7);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,912,1029,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_CHARACTER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 13L:
			RTHOOK(8);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,903,1020,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_NATURAL_8), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 14L:
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,999,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_NATURAL_16), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 15L:
			RTHOOK(10);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,905,1017,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_NATURAL_32), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 16L:
			RTHOOK(11);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,1014,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_NATURAL_64), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 9L:
			RTHOOK(12);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,906,1011,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_INTEGER_8), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 10L:
			RTHOOK(13);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,909,1008,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_INTEGER_16), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 4L:
			RTHOOK(14);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,900,1005,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_INTEGER_32), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 11L:
			RTHOOK(15);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,910,1002,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_INTEGER_64), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 5L:
			RTHOOK(16);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,907,1023,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_REAL_32), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 6L:
			RTHOOK(17);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,908,1026,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_REAL_64), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		case 0L:
			RTHOOK(18);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,904,1068,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				Result = RTLNSP2(typres0.id,0,arg3,sizeof(EIF_POINTER), EIF_TRUE);
				RT_SPECIAL_COUNT(Result) = 0;
			}
			break;
		default:
			RTHOOK(19);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tr2 = (nstcall = 1, F277_3626(RTCW(tr1), arg1, arg3));
			Result = (EIF_REFERENCE) tr2;
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("new_special_instance_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_SESSION_DESERIALIZER}.decode_special */
void F219_2560 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
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
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(19);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
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
	RTLR(18,loc17);
	RTLIU(19);
	
	RTEAA("decode_special", 218, Current, 17, 2, 2534);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_obj_is_special", EX_PRE);
		loc2 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc2 = RTRV(typres0,loc2);
		}
		RTTE(EIF_TEST(loc2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F109_1523(RTCW(tr1)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	switch (arg2) {
		case 3L:
			RTHOOK(5);
			loc3 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,901,1035,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc3 = RTRV(typres0,loc3);
			}
			if (EIF_TEST(loc3)) {
				RTHOOK(6);
				(nstcall = 0, F219_2561(Current, loc3, loc1));
			} else {
				
			}
			break;
		case 2L:
			RTHOOK(7);
			loc4 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,902,1032,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc4 = RTRV(typres0,loc4);
			}
			if (EIF_TEST(loc4)) {
				RTHOOK(8);
				(nstcall = 0, F219_2562(Current, loc4, loc1));
			} else {
				
			}
			break;
		case 12L:
			RTHOOK(9);
			loc5 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,912,1029,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc5 = RTRV(typres0,loc5);
			}
			if (EIF_TEST(loc5)) {
				RTHOOK(10);
				(nstcall = 0, F219_2563(Current, loc5, loc1));
			} else {
				
			}
			break;
		case 13L:
			RTHOOK(11);
			loc6 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,903,1020,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc6 = RTRV(typres0,loc6);
			}
			if (EIF_TEST(loc6)) {
				RTHOOK(12);
				(nstcall = 0, F219_2564(Current, loc6, loc1));
			} else {
				
			}
			break;
		case 14L:
			RTHOOK(13);
			loc7 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,911,999,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc7 = RTRV(typres0,loc7);
			}
			if (EIF_TEST(loc7)) {
				RTHOOK(14);
				(nstcall = 0, F219_2565(Current, loc7, loc1));
			} else {
				
			}
			break;
		case 15L:
			RTHOOK(15);
			loc8 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,905,1017,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc8 = RTRV(typres0,loc8);
			}
			if (EIF_TEST(loc8)) {
				RTHOOK(16);
				(nstcall = 0, F219_2566(Current, loc8, loc1));
			} else {
				
			}
			break;
		case 16L:
			RTHOOK(17);
			loc9 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,899,1014,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc9 = RTRV(typres0,loc9);
			}
			if (EIF_TEST(loc9)) {
				RTHOOK(18);
				(nstcall = 0, F219_2567(Current, loc9, loc1));
			} else {
				
			}
			break;
		case 9L:
			RTHOOK(19);
			loc10 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,906,1011,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc10 = RTRV(typres0,loc10);
			}
			if (EIF_TEST(loc10)) {
				RTHOOK(20);
				(nstcall = 0, F219_2568(Current, loc10, loc1));
			} else {
				
			}
			break;
		case 10L:
			RTHOOK(21);
			loc11 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,909,1008,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc11 = RTRV(typres0,loc11);
			}
			if (EIF_TEST(loc11)) {
				RTHOOK(22);
				(nstcall = 0, F219_2569(Current, loc11, loc1));
			} else {
				
			}
			break;
		case 4L:
			RTHOOK(23);
			loc12 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,900,1005,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc12 = RTRV(typres0,loc12);
			}
			if (EIF_TEST(loc12)) {
				RTHOOK(24);
				(nstcall = 0, F219_2570(Current, loc12, loc1));
			} else {
				
			}
			break;
		case 11L:
			RTHOOK(25);
			loc13 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,910,1002,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc13 = RTRV(typres0,loc13);
			}
			if (EIF_TEST(loc13)) {
				RTHOOK(26);
				(nstcall = 0, F219_2571(Current, loc13, loc1));
			} else {
				
			}
			break;
		case 5L:
			RTHOOK(27);
			loc14 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,907,1023,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc14 = RTRV(typres0,loc14);
			}
			if (EIF_TEST(loc14)) {
				RTHOOK(28);
				(nstcall = 0, F219_2572(Current, loc14, loc1));
			} else {
				
			}
			break;
		case 6L:
			RTHOOK(29);
			loc15 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,908,1026,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc15 = RTRV(typres0,loc15);
			}
			if (EIF_TEST(loc15)) {
				RTHOOK(30);
				(nstcall = 0, F219_2573(Current, loc15, loc1));
			} else {
				
			}
			break;
		case 0L:
			RTHOOK(31);
			loc16 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,904,1068,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc16 = RTRV(typres0,loc16);
			}
			if (EIF_TEST(loc16)) {
				RTHOOK(32);
				(nstcall = 0, F219_2574(Current, loc16, loc1));
			} else {
				
			}
			break;
		default:
			
			RTHOOK(33);
			loc17 = RTCCL(arg1);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc17 = RTRV(typres0,loc17);
			}
			if (EIF_TEST(loc17)) {
				RTHOOK(34);
				(nstcall = 0, F219_2575(Current, loc17, loc1));
			} else {
				
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_boolean */
void F219_2561 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_boolean", 218, Current, 2, 2, 2535);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tb1 = (nstcall = 1, F109_1511(RTCW(loc2)));
		(nstcall = 1, F902_6156(RTCW(arg1), tb1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_character_8 */
void F219_2562 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_character_8", 218, Current, 2, 2, 2536);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tc1 = (nstcall = 1, F109_1505(RTCW(loc2)));
		(nstcall = 1, F903_6156(RTCW(arg1), tc1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_character_32 */
void F219_2563 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_CHARACTER_32 tw1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_character_32", 218, Current, 2, 2, 2537);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tw1 = (nstcall = 1, F109_1506(RTCW(loc2)));
		(nstcall = 1, F913_6156(RTCW(arg1), tw1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_natural_8 */
void F219_2564 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_natural_8", 218, Current, 2, 2, 2538);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tu1_1 = (nstcall = 1, F110_1550(RTCW(loc2)));
		(nstcall = 1, F904_6156(RTCW(arg1), tu1_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_natural_16 */
void F219_2565 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_natural_16", 218, Current, 2, 2, 2539);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tu2_1 = (nstcall = 1, F110_1551(RTCW(loc2)));
		(nstcall = 1, F912_6156(RTCW(arg1), tu2_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_natural_32 */
void F219_2566 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_natural_32", 218, Current, 2, 2, 2540);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tu4_1 = (nstcall = 1, F110_1552(RTCW(loc2)));
		(nstcall = 1, F906_6156(RTCW(arg1), tu4_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_natural_64 */
void F219_2567 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_natural_64", 218, Current, 2, 2, 2541);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tu8_1 = (nstcall = 1, F110_1553(RTCW(loc2)));
		(nstcall = 1, F900_6156(RTCW(arg1), tu8_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_integer_8 */
void F219_2568 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_8 ti1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_integer_8", 218, Current, 2, 2, 2542);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		ti1_1 = (nstcall = 1, F110_1554(RTCW(loc2)));
		(nstcall = 1, F907_6156(RTCW(arg1), ti1_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_integer_16 */
void F219_2569 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_16 ti2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_integer_16", 218, Current, 2, 2, 2543);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		ti2_1 = (nstcall = 1, F110_1555(RTCW(loc2)));
		(nstcall = 1, F910_6156(RTCW(arg1), ti2_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_integer_32 */
void F219_2570 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_integer_32", 218, Current, 2, 2, 2544);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		ti4_1 = (nstcall = 1, F110_1556(RTCW(loc2)));
		(nstcall = 1, F901_6156(RTCW(arg1), ti4_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_integer_64 */
void F219_2571 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_64 ti8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_integer_64", 218, Current, 2, 2, 2545);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		ti8_1 = (nstcall = 1, F110_1557(RTCW(loc2)));
		(nstcall = 1, F911_6156(RTCW(arg1), ti8_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_real_32 */
void F219_2572 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REAL_32 tr4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_real_32", 218, Current, 2, 2, 2546);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tr4_1 = (nstcall = 1, F110_1558(RTCW(loc2)));
		(nstcall = 1, F908_6156(RTCW(arg1), tr4_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_real_64 */
void F219_2573 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_real_64", 218, Current, 2, 2, 2547);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tr8_1 = (nstcall = 1, F110_1559(RTCW(loc2)));
		(nstcall = 1, F909_6156(RTCW(arg1), tr8_1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_pointer */
void F219_2574 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("decode_special_pointer", 218, Current, 2, 2, 2548);
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
	loc2 = *(EIF_REFERENCE *)(Current);
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(loc1 == arg2)) break;
		RTHOOK(4);
		tp1 = (nstcall = 1, F110_1560(RTCW(loc2)));
		(nstcall = 1, F905_6156(RTCW(arg1), tp1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.decode_special_reference */
void F219_2575 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc5);
	RTLIU(6);
	
	RTEAA("decode_special_reference", 218, Current, 5, 2, 2549);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (*(EIF_NATURAL_32 *)(Current + O2376[dtype-218]) >= ((EIF_NATURAL_32) 4U))) {
		RTHOOK(3);
		tb1 = (nstcall = 1, F109_1511(RTCW(loc3)));
		loc2 = (EIF_BOOLEAN) tb1;
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN) !loc2) {
		for (;;) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(loc1 == arg2)) break;
			RTHOOK(6);
			tr1 = (nstcall = 0, F219_2552(Current));
			tr2 = RTCCL(tr1);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5153[Dtype(RTCW(arg1))-898])(arg1, tr2, loc1));
			RTHOOK(7);
			loc1++;
		}
	} else {
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN)(loc1 == arg2)) break;
			RTHOOK(9);
			tb1 = (nstcall = 1, F109_1511(RTCW(loc3)));
			if (tb1) {
				RTHOOK(10);
				ti4_1 = (nstcall = 1, F109_1523(RTCW(loc3)));
				loc4 = (nstcall = 0, F219_2542(Current, ti4_1));
				RTHOOK(11);
				if ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L))) {
					RTHOOK(12);
					tr1 = RTOUCR(163,(nstcall = 0, F219_2539), (Current));
					tr2 = RTMS_EX_H("Cannot read object type. Corrupted data!",40,1055785505);
					tr2 = (nstcall = 1, F40_764(RTCW(tr1), tr2));
					(nstcall = 0, F219_2545(Current, tr2));
				} else {
					RTHOOK(13);
					loc5 = RTLNS(eif_new_type(280, 0x01).id, 280, _OBJSIZ_1_0_0_2_0_0_0_0_);
					tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
					tr2 = (nstcall = 1, F277_3625(RTCW(tr1), loc4));
					tr1 = RTCCL(tr2);
					(nstcall = -1, F281_3769(RTCW(loc5), tr1));
					RTHOOK(14);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2393[dtype-218])(Current, loc5));
					RTHOOK(15);
					tr1 = (nstcall = 1, F281_3772(RTCW(loc5)));
					tr2 = RTCCL(tr1);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5153[Dtype(RTCW(arg1))-898])(arg1, tr2, loc1));
				}
			} else {
				RTHOOK(16);
				tr1 = (nstcall = 0, F219_2552(Current));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5153[Dtype(RTCW(arg1))-898])(arg1, tr2, loc1));
			}
			RTHOOK(17);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
}

/* {SED_SESSION_DESERIALIZER}.memory */
static EIF_REFERENCE F219_2576_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(165)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("memory", 218, Current, 0, 0, 2550);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(301, 0x01).id, 301, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("memory_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F219_2576 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(165,F219_2576_body,(Current));
}

/* {SED_SESSION_DESERIALIZER}._invariant */
void F219_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 192, Current, 0, 0);
	RTIT("reflector_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_3_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("reflected_object_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_4_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("deserializer_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("object_references_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_5_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit193 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
