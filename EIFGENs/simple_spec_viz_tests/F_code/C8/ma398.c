/*
 * Code for class MA_DECIMAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma398.h"
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

/* {MA_DECIMAL}.make */
void F1125_8846 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make", 1124, Current, 0, 1, 15775);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_precision_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(862, 0x01).id, 862, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F863_5691(RTCW(tr1), arg1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	(nstcall = 0, F1125_8922(Current));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F863_5702(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("zero", EX_POST);
		if ((nstcall = 0, F1125_8882(Current))) {
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

/* {MA_DECIMAL}.make_copy */
void F1125_8847 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_copy", 1124, Current, 0, 1, 15776);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, F1125_8878(RTCW(arg1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		ti4_1 = (nstcall = 1, F1125_8894(RTCW(arg1)));
		(nstcall = 0, F1125_8846(Current, ti4_1));
		RTHOOK(4);
		(nstcall = 0, F1125_8902(Current, arg1));
	} else {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		(nstcall = 0, F1125_8854(Current, ti4_1));
		RTHOOK(6);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("special_copy", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("coefficient_copy", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		tb1 = (nstcall = 1, F863_5708(RTCW(tr1), tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("sign_copy", EX_POST);
		ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
		if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("exponent_copy", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
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

/* {MA_DECIMAL}.make_zero */
void F1125_8848 (EIF_REFERENCE Current)
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
	
	RTEAA("make_zero", 1124, Current, 0, 0, 15777);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(377,(nstcall = 0, F1125_8968), (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("zero", EX_POST);
		if ((nstcall = 0, F1125_8882(Current))) {
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

/* {MA_DECIMAL}.make_one */
void F1125_8849 (EIF_REFERENCE Current)
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
	
	RTEAA("make_one", 1124, Current, 0, 0, 15778);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1125_8846(Current, ((EIF_INTEGER_32) 1L)));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F863_5702(RTCW(tr1), ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_one", EX_POST);
		if ((nstcall = 0, F1125_8883(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
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

/* {MA_DECIMAL}.make_from_integer */
void F1125_8850 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make_from_integer", 1124, Current, 4, 1, 15779);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		(nstcall = 0, F1125_8922(Current));
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc1;
	} else {
		RTHOOK(5);
		(nstcall = 0, F1125_8921(Current));
	}
	RTHOOK(6);
	loc2 = (EIF_INTEGER_32) loc1;
	RTHOOK(7);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(9);
		tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
		ti4_1 = (nstcall = 1, F350_4660(RTCW(tr1), loc2, ((EIF_INTEGER_32) 10L)));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
			RTHOOK(11);
			loc4++;
		}
	}
	RTHOOK(12);
	tr1 = RTLNS(eif_new_type(862, 0x01).id, 862, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F863_5691(RTCW(tr1), (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L))));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(13);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F863_5702(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(15);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(16);
		loc2 = (EIF_INTEGER_32) loc1;
		for (;;) {
			RTHOOK(17);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(18);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			ti4_1 = (nstcall = 1, F350_4661(RTCW(tr2), loc2, ((EIF_INTEGER_32) 10L)));
			(nstcall = 1, F863_5702(RTCW(tr1), (EIF_INTEGER_32) -ti4_1, loc3));
			RTHOOK(19);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			ti4_1 = (nstcall = 1, F350_4660(RTCW(tr1), loc2, ((EIF_INTEGER_32) 10L)));
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(20);
			if ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(21);
				loc3++;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("equal_to_value", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1125_8898(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.make_from_string_ctx */
void F1125_8851 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("make_from_string_ctx", 1124, Current, 1, 2, 15780);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("context_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTOUCR(379,(nstcall = 0, F1125_8965), (Current));
	RTHOOK(4);
	(nstcall = 1, F298_3815(RTCW(loc1), arg1));
	RTHOOK(5);
	(nstcall = 0, F1125_8852(Current, loc1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.make_from_parser */
void F1125_8852 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("make_from_parser", 1124, Current, 1, 2, 15781);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_decimal_parser_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_context_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	loc1 = tr1;
	if (!((EIF_BOOLEAN) !EIF_TEST(loc1))) {
		tb2 = (nstcall = 1, F298_3803(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg2)+ _CHROFF_3_0_);
		if (tb1) {
			RTHOOK(5);
			(nstcall = 0, F1125_8855(Current));
		} else {
			RTHOOK(6);
			(nstcall = 0, F1125_8856(Current));
		}
	} else {
		RTHOOK(7);
		tb1 = (nstcall = 1, F298_3805(RTCW(arg1)));
		if (tb1) {
			RTHOOK(8);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(379,(nstcall = 0, F1125_8965), (Current)))+ _LNGOFF_2_2_0_0_);
			(nstcall = 0, F1125_8857(Current, ti4_1));
		} else {
			RTHOOK(9);
			tb1 = (nstcall = 1, F298_3807(RTCW(arg1)));
			if (tb1) {
				RTHOOK(10);
				(nstcall = 0, F1125_8856(Current));
			} else {
				RTHOOK(11);
				tb1 = (nstcall = 1, F298_3806(RTCW(arg1)));
				if (tb1) {
					RTHOOK(12);
					(nstcall = 0, F1125_8855(Current));
				} else {
					RTHOOK(13);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_2_0_0_);
					if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
						RTHOOK(14);
						(nstcall = 0, F1125_8921(Current));
					} else {
						RTHOOK(15);
						(nstcall = 0, F1125_8922(Current));
					}
					RTHOOK(16);
					tb1 = (nstcall = 1, F298_3809(RTCW(arg1)));
					if (tb1) {
						RTHOOK(17);
						tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_2_2_0_10_0_0_0_0_);
						tr1 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
						ti4_1 = RTOUCB(EIF_INTEGER_32,381,(nstcall = 1, F264_3370), (RTCW(tr1)));
						tr8_2 = (EIF_REAL_64) (ti4_1);
						if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, tr8_2)) {
							RTHOOK(18);
							ti4_1 = ((EIF_INTEGER_32) 999999999L);
							ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
							ti4_3 = (nstcall = 1, F298_3800(RTCW(arg1)));
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ti4_3) + ((EIF_INTEGER_32) 2L));
						} else {
							RTHOOK(19);
							tr1 = RTOUCR(382,(nstcall = 0, F91_1349), (Current));
							tr8_1 = *(EIF_REAL_64 *)(RTCW(arg1)+ _R64OFF_2_2_0_10_0_0_0_0_);
							ti4_1 = (nstcall = 1, F131_1779(RTCW(tr1), tr8_1));
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
						}
						RTHOOK(20);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(379,(nstcall = 0, F1125_8965), (Current)))+ _LNGOFF_2_2_0_1_);
						if ((EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 0L))) {
							RTHOOK(21);
							*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) -*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
						}
					} else {
						RTHOOK(22);
						*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					}
					RTHOOK(23);
					tb1 = (nstcall = 1, F298_3808(RTCW(arg1)));
					if (tb1) {
						RTHOOK(24);
						ti4_1 = (nstcall = 1, F298_3795(RTCW(arg1)));
						(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) -= ti4_1;
					}
					RTHOOK(25);
					tr1 = RTLNS(eif_new_type(862, 0x01).id, 862, _OBJSIZ_1_0_0_2_0_0_0_0_);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
					ti4_2 = (nstcall = 1, F298_3794(RTCW(arg1)));
					ti4_3 = eif_max_int32 ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)),ti4_2);
					(nstcall = -1, F863_5691(RTCW(tr1), ti4_3));
					RTAR(Current, tr1);
					*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
					RTHOOK(26);
					tr1 = *(EIF_REFERENCE *)(Current);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_2_0_4_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_2_2_0_5_);
					(nstcall = 1, F863_5700(RTCW(tr1), loc1, ti4_1, ti4_2));
					RTHOOK(27);
					(nstcall = 0, F1125_8952(Current, arg2));
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.make_from_string */
void F1125_8853 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_string", 1124, Current, 0, 1, 15782);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F128_1763(Current));
	(nstcall = 0, F1125_8851(Current, arg1, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.make_special */
void F1125_8854 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("make_special", 1124, Current, 0, 1, 15783);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_code_special", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 3L))) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 2L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(377,(nstcall = 0, F1125_8968), (Current));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_special", EX_POST);
		if ((nstcall = 0, F1125_8878(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exponent_zero", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ((EIF_INTEGER_32) 0L))) {
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

/* {MA_DECIMAL}.make_nan */
void F1125_8855 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_nan", 1124, Current, 0, 0, 15784);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1125_8854(Current, ((EIF_INTEGER_32) 3L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_nan", EX_POST);
		if ((nstcall = 0, F1125_8880(Current))) {
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

/* {MA_DECIMAL}.make_snan */
void F1125_8856 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_snan", 1124, Current, 0, 0, 15785);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1125_8854(Current, ((EIF_INTEGER_32) 2L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_snan", EX_POST);
		if ((nstcall = 0, F1125_8879(Current))) {
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

/* {MA_DECIMAL}.make_infinity */
void F1125_8857 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_infinity", 1124, Current, 0, 1, 15786);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_sign_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) -1L)) || (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F1125_8854(Current, ((EIF_INTEGER_32) 1L)));
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_infinity", EX_POST);
		if ((nstcall = 0, F1125_8881(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("sign_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == arg1)) {
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

/* {MA_DECIMAL}.sign */
EIF_INTEGER_32 F1125_8858 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("sign", 1124, Current, 0, 0, 15787);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition1", EX_POST);
		if ((!((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) -1L))) || (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("definition2", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 1L))) {
			tb1 = (nstcall = 0, F1125_8876(Current));
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
	return Result;
}

/* {MA_DECIMAL}.exponent */
EIF_INTEGER_32 F1125_8859 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
}


/* {MA_DECIMAL}.hash_code */
EIF_INTEGER_32 F1125_8860 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("hash_code", 1124, Current, 5, 0, 15789);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc5 = (nstcall = 0, F1125_8882(Current));
	RTHOOK(2);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	RTHOOK(3);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	ti4_1 = (nstcall = 1, F350_4667(RTCW(tr1), Result, ((EIF_INTEGER_32) 10L)));
	Result += ti4_1;
	RTHOOK(4);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	tr2 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	ti4_1 = (nstcall = 1, F350_4668(RTCW(tr2), Result, ((EIF_INTEGER_32) 6L)));
	ti4_1 = (nstcall = 1, F350_4665(RTCW(tr1), Result, ti4_1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	if ((EIF_BOOLEAN) !loc5) {
		RTHOOK(6);
		Result += (nstcall = 0, F1125_8858(Current));
	}
	RTHOOK(7);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	ti4_1 = (nstcall = 1, F350_4667(RTCW(tr1), Result, ((EIF_INTEGER_32) 10L)));
	Result += ti4_1;
	RTHOOK(8);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	tr2 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	ti4_1 = (nstcall = 1, F350_4668(RTCW(tr2), Result, ((EIF_INTEGER_32) 6L)));
	ti4_1 = (nstcall = 1, F350_4665(RTCW(tr1), Result, ti4_1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current))) {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, F863_5694(RTCW(tr1)));
		loc4 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, F863_5697(RTCW(tr1)));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(12);
		loc2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		for (;;) {
			RTHOOK(13);
			tb1 = '\01';
			if (!(EIF_BOOLEAN) (loc3 > loc4)) {
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), loc3));
				tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
			}
			if (tb1) break;
			RTHOOK(14);
			loc3++;
			RTHOOK(15);
			loc2++;
		}
		RTHOOK(16);
		if ((EIF_BOOLEAN) !loc5) {
			RTHOOK(17);
			Result += loc2;
		}
		RTHOOK(18);
		tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
		ti4_1 = (nstcall = 1, F350_4667(RTCW(tr1), Result, ((EIF_INTEGER_32) 10L)));
		Result += ti4_1;
		RTHOOK(19);
		tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
		tr2 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
		ti4_1 = (nstcall = 1, F350_4668(RTCW(tr2), Result, ((EIF_INTEGER_32) 6L)));
		ti4_1 = (nstcall = 1, F350_4665(RTCW(tr1), Result, ti4_1));
		Result = (EIF_INTEGER_32) ti4_1;
		RTHOOK(20);
		loc1 = (EIF_INTEGER_32) loc3;
		for (;;) {
			RTHOOK(21);
			if ((EIF_BOOLEAN) (loc1 > loc4)) break;
			RTHOOK(22);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), loc1));
			Result += ti4_1;
			RTHOOK(23);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			ti4_1 = (nstcall = 1, F350_4667(RTCW(tr1), Result, ((EIF_INTEGER_32) 10L)));
			Result += ti4_1;
			RTHOOK(24);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			tr2 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			ti4_1 = (nstcall = 1, F350_4668(RTCW(tr2), Result, ((EIF_INTEGER_32) 6L)));
			ti4_1 = (nstcall = 1, F350_4665(RTCW(tr1), Result, ti4_1));
			Result = (EIF_INTEGER_32) ti4_1;
			RTHOOK(25);
			loc1++;
		}
	}
	RTHOOK(26);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	ti4_1 = (nstcall = 1, F350_4667(RTCW(tr1), Result, ((EIF_INTEGER_32) 3L)));
	Result += ti4_1;
	RTHOOK(27);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	tr2 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	ti4_1 = (nstcall = 1, F350_4668(RTCW(tr2), Result, ((EIF_INTEGER_32) 11L)));
	ti4_1 = (nstcall = 1, F350_4665(RTCW(tr1), Result, ti4_1));
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(28);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	ti4_1 = (nstcall = 1, F350_4667(RTCW(tr1), Result, ((EIF_INTEGER_32) 15L)));
	Result += ti4_1;
	RTHOOK(29);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	tr2 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
	ti4_1 = RTOUCB(EIF_INTEGER_32,381,(nstcall = 1, F264_3370), (RTCW(tr2)));
	ti4_1 = (nstcall = 1, F350_4663(RTCW(tr1), Result, ti4_1));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(30);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.one */
EIF_REFERENCE F1125_8861 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("one", 1124, Current, 0, 0, 15790);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTOUCR(383,(nstcall = 0, F1125_8967), (Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("one_is_one", EX_POST);
		tb1 = (nstcall = 1, F1125_8883(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("one_is_positive", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_1_0_);
		if ((EIF_BOOLEAN) !tb1) {
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

/* {MA_DECIMAL}.minus_one */
static EIF_REFERENCE F1125_8862_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(384)

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("minus_one", 1124, Current, 0, 0, 15791);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	tr2 = (nstcall = 0, F1125_8861(Current));
	(nstcall = -1, F1125_8847(RTCW(tr1), tr2));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1125_8921(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("minus_one_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_minus_one", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1125_8883(RTCW(Result)));
		if (tb2) {
			tb2 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_1_0_);
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
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1125_8862 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(384,F1125_8862_body,(Current));
}

/* {MA_DECIMAL}.zero */
EIF_REFERENCE F1125_8863 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("zero", 1124, Current, 0, 0, 15792);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTOUCR(385,(nstcall = 0, F1125_8966), (Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_zero", EX_POST);
		tb1 = (nstcall = 1, F1125_8882(RTCW(Result)));
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

/* {MA_DECIMAL}.negative_zero */
static EIF_REFERENCE F1125_8864_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(386)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("negative_zero", 1124, Current, 0, 0, 15793);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8848(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F1125_8921(RTCW(Result)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("negative_zero_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_zero", EX_POST);
		tb1 = (nstcall = 1, F1125_8882(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_negative", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_1_0_);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1125_8864 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(386,F1125_8864_body,(Current));
}

/* {MA_DECIMAL}.nan */
static EIF_REFERENCE F1125_8865_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(387)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("nan", 1124, Current, 0, 0, 15794);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8855(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("nan_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_nan", EX_POST);
		tb1 = (nstcall = 1, F1125_8877(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1125_8865 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(387,F1125_8865_body,(Current));
}

/* {MA_DECIMAL}.snan */
static EIF_REFERENCE F1125_8866_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(388)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("snan", 1124, Current, 0, 0, 15795);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8856(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("snan_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_snan", EX_POST);
		tb1 = (nstcall = 1, F1125_8879(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1125_8866 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(388,F1125_8866_body,(Current));
}

/* {MA_DECIMAL}.infinity */
static EIF_REFERENCE F1125_8867_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(389)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("infinity", 1124, Current, 0, 0, 15796);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8857(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("infinity_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_infinity", EX_POST);
		tb1 = (nstcall = 1, F1125_8881(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_positive", EX_POST);
		tb1 = (nstcall = 1, F1125_8876(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1125_8867 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(389,F1125_8867_body,(Current));
}

/* {MA_DECIMAL}.negative_infinity */
static EIF_REFERENCE F1125_8868_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(390)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("negative_infinity", 1124, Current, 0, 0, 15797);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8857(RTCW(tr1), ((EIF_INTEGER_32) -1L)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("negative_infinity_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_infinity", EX_POST);
		tb1 = (nstcall = 1, F1125_8881(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("is_negative", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_1_0_);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1125_8868 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(390,F1125_8868_body,(Current));
}

/* {MA_DECIMAL}.adjusted_exponent */
EIF_INTEGER_32 F1125_8869 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("adjusted_exponent", 1124, Current, 0, 0, 15798);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_1 = (nstcall = 0, F1125_8894(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) ((EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) + (nstcall = 0, F1125_8894(Current))) - ((EIF_INTEGER_32) 1L)))) {
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

/* {MA_DECIMAL}.coefficient */
EIF_REFERENCE F1125_8870 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {MA_DECIMAL}.is_integer */
EIF_BOOLEAN F1125_8871 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_integer", 1124, Current, 2, 0, 15800);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F1125_8882(Current))) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) ((nstcall = 0, F1125_8869(Current)) >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(5);
				loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
				loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) -loc1;
				RTHOOK(6);
				ti4_1 = (nstcall = 0, F1125_8894(Current));
				ti4_2 = eif_min_int32 (loc1,ti4_1);
				loc2 = (EIF_INTEGER_32) ti4_2;
				for (;;) {
					RTHOOK(7);
					tb1 = '\01';
					if (!(EIF_BOOLEAN) (loc2 <= ((EIF_INTEGER_32) 0L))) {
						tr1 = *(EIF_REFERENCE *)(Current);
						ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
						tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
					}
					if (tb1) break;
					RTHOOK(8);
					loc2--;
				}
				RTHOOK(9);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L));
			} else {
				RTHOOK(10);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		} else {
			RTHOOK(11);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.is_double */
EIF_BOOLEAN F1125_8872 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_double", 1124, Current, 1, 0, 15801);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F1125_8901(Current));
	RTHOOK(2);
	tb1 = (nstcall = 1, F1076_7627(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.divisible */
EIF_BOOLEAN F1125_8873 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("divisible", 1124, Current, 0, 1, 15802);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, F1125_8882(RTCW(arg1)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tb1 = (nstcall = 1, F1125_8882(RTCW(arg1)));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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

/* {MA_DECIMAL}.exponentiable */
EIF_BOOLEAN F1125_8874 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("exponentiable", 1124, Current, 0, 1, 15803);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return (EIF_BOOLEAN) 0;
}

/* {MA_DECIMAL}.is_negative */
EIF_BOOLEAN F1125_8875 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
}


/* {MA_DECIMAL}.is_positive */
EIF_BOOLEAN F1125_8876 (EIF_REFERENCE Current)
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
	
	RTEAA("is_positive", 1124, Current, 0, 0, 15805);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_))) {
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

/* {MA_DECIMAL}.is_nan */
EIF_BOOLEAN F1125_8877 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_nan", 1124, Current, 0, 0, 15806);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	if (!(nstcall = 0, F1125_8879(Current))) {
		Result = (nstcall = 0, F1125_8880(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8879(Current))) {
			tb1 = (nstcall = 0, F1125_8880(Current));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {MA_DECIMAL}.is_special */
EIF_BOOLEAN F1125_8878 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special", 1124, Current, 0, 0, 15807);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8877(Current))) {
			tb1 = (nstcall = 0, F1125_8881(Current));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {MA_DECIMAL}.is_signaling_nan */
EIF_BOOLEAN F1125_8879 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_signaling_nan", 1124, Current, 0, 0, 15808);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.is_quiet_nan */
EIF_BOOLEAN F1125_8880 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_quiet_nan", 1124, Current, 0, 0, 15809);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.is_infinity */
EIF_BOOLEAN F1125_8881 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_infinity", 1124, Current, 0, 0, 15810);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.is_zero */
EIF_BOOLEAN F1125_8882 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_zero", 1124, Current, 0, 0, 15811);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb2 = (nstcall = 1, F261_3280(RTCW(tr1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb2 = (nstcall = 1, F261_3280(RTCW(tr1)));
			tb1 = tb2;
		}
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

/* {MA_DECIMAL}.is_one */
EIF_BOOLEAN F1125_8883 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_one", 1124, Current, 0, 0, 15812);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current))) {
		tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ((EIF_INTEGER_32) 0L));
	}
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tb2 = (nstcall = 1, F261_3281(RTCW(tr1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tb2 = (nstcall = 1, F261_3281(RTCW(tr1)));
			tb1 = tb2;
		}
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

/* {MA_DECIMAL}.product */
EIF_REFERENCE F1125_8884 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("product", 1124, Current, 0, 1, 15813);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8905(Current, arg1, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("product_not_void", EX_POST);
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

/* {MA_DECIMAL}.identity */
EIF_REFERENCE F1125_8885 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	
	RTEAA("identity", 1124, Current, 0, 0, 15814);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8912(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("unary_plus_not_void", EX_POST);
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

/* {MA_DECIMAL}.binary_plus */
EIF_REFERENCE F1125_8886 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("binary_plus", 1124, Current, 0, 1, 15815);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8903(Current, arg1, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("commutative", EX_POST);
		tr1 = (nstcall = 1, F1125_8886(RTCW(arg1), Current));
		if (RTEQ(Result, tr1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("sum_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {MA_DECIMAL}.opposite */
EIF_REFERENCE F1125_8887 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	
	RTEAA("opposite", 1124, Current, 0, 0, 15816);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8914(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("unary_minus_not_void", EX_POST);
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

/* {MA_DECIMAL}.binary_minus */
EIF_REFERENCE F1125_8888 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("binary_minus", 1124, Current, 0, 1, 15817);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8904(Current, arg1, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("subtract_not_void", EX_POST);
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

/* {MA_DECIMAL}.quotient */
EIF_REFERENCE F1125_8889 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("quotient", 1124, Current, 0, 1, 15818);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("good_divisor", EX_PRE);
		RTTE((nstcall = 0, F1125_8873(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8906(Current, arg1, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("division_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {MA_DECIMAL}.integer_remainder */
EIF_REFERENCE F1125_8890 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("integer_remainder", 1124, Current, 0, 1, 15819);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8908(Current, arg1, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("remainder_not_void", EX_POST);
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

/* {MA_DECIMAL}.integer_quotient */
EIF_REFERENCE F1125_8891 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("integer_quotient", 1124, Current, 0, 1, 15820);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8907(Current, arg1, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("integer_division_not_void", EX_POST);
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

/* {MA_DECIMAL}.power */
EIF_REFERENCE F1125_8892 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("power", 1124, Current, 0, 1, 15821);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.is_less */
EIF_BOOLEAN F1125_8893 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("is_less", 1124, Current, 1, 1, 15822);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F128_1763(Current));
	loc1 = (nstcall = 0, F1125_8919(Current, arg1, tr1));
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_1_0_);
	if (tb1) {
		RTHOOK(4);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.count */
EIF_INTEGER_32 F1125_8894 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("count", 1124, Current, 0, 0, 15823);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F1125_8878(Current))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_0_0_1_);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("zero_when_special", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1125_8878(Current))) {
			tb1 = (EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L));
		}
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
	return Result;
}

/* {MA_DECIMAL}.is_equal */
EIF_BOOLEAN F1125_8895 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("is_equal", 1124, Current, 1, 1, 15824);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	if ((nstcall = 0, F1125_8877(Current))) {
		tb2 = (nstcall = 1, F1125_8877(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		if ((nstcall = 0, F1125_8880(Current))) {
			RTHOOK(4);
			tb1 = (nstcall = 1, F1125_8880(RTCW(arg1)));
			Result = (EIF_BOOLEAN) tb1;
		} else {
			RTHOOK(5);
			if ((nstcall = 0, F1125_8879(Current))) {
				RTHOOK(6);
				tb1 = (nstcall = 1, F1125_8879(RTCW(arg1)));
				Result = (EIF_BOOLEAN) tb1;
			}
		}
	} else {
		RTHOOK(7);
		tb1 = '\0';
		if ((nstcall = 0, F1125_8881(Current))) {
			tb2 = (nstcall = 1, F1125_8881(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(8);
			ti4_1 = (nstcall = 0, F1125_8858(Current));
			ti4_2 = (nstcall = 1, F1125_8858(RTCW(arg1)));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
		} else {
			RTHOOK(9);
			tr1 = (nstcall = 0, F128_1763(Current));
			loc1 = (nstcall = 0, F1125_8919(Current, arg1, tr1));
			RTHOOK(10);
			tb1 = (nstcall = 1, F1125_8882(RTCW(loc1)));
			if (tb1) {
				RTHOOK(11);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.out */
EIF_REFERENCE F1125_8896 (EIF_REFERENCE Current)
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
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("out", 1124, Current, 0, 0, 15825);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(Result), ((EIF_INTEGER_32) 0L)));
	RTHOOK(2);
	tr1 = RTMS_EX_H("[",1,91);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(3);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("1",1,49);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	} else {
		RTHOOK(5);
		tr1 = RTMS_EX_H("0",1,48);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	}
	RTHOOK(6);
	tr1 = RTMS_EX_H(",",1,44);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(7);
	if ((nstcall = 0, F1125_8881(Current))) {
		RTHOOK(8);
		tr1 = RTMS_EX_H("inf",3,6909542);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	} else {
		RTHOOK(9);
		if ((nstcall = 0, F1125_8879(Current))) {
			RTHOOK(10);
			tr1 = RTMS_EX_H("sNaN",4,1934516558);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		} else {
			RTHOOK(11);
			if ((nstcall = 0, F1125_8880(Current))) {
				RTHOOK(12);
				tr1 = RTMS_EX_H("qNaN",4,1900962126);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
			} else {
				RTHOOK(13);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = (nstcall = 1, F863_5704(RTCW(tr1)));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr2));
				RTHOOK(14);
				tr1 = RTMS_EX_H(",",1,44);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
				RTHOOK(15);
				ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
				tr1 = eif_out__i4_s1(ti4_1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
			}
		}
	}
	RTHOOK(16);
	tr1 = RTMS_EX_H("]",1,93);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(18);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {MA_DECIMAL}.to_double */
EIF_REAL_64 F1125_8897 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("to_double", 1124, Current, 1, 0, 15826);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_double", EX_PRE);
		RTTE((nstcall = 0, F1125_8872(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F1125_8901(Current));
	RTHOOK(3);
	tr8_1 = (nstcall = 1, F1076_7676(RTCW(loc1)));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.to_integer */
EIF_INTEGER_32 F1125_8898 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("to_integer", 1124, Current, 1, 0, 15827);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F1125_8871(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("large_enough", EX_PRE);
		tr1 = RTOUCR(391,(nstcall = 0, F136_1868), (Current));
		tr2 = RTOUCR(392,(nstcall = 1, F132_1795), (RTCW(tr1)));
		tb1 = (nstcall = 1, F92_1353(Current, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("small_enough", EX_PRE);
		tr1 = RTOUCR(391,(nstcall = 0, F136_1868), (Current));
		tr2 = RTOUCR(393,(nstcall = 1, F132_1796), (RTCW(tr1)));
		tb1 = (nstcall = 1, F92_1351(Current, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = RTLNS(eif_new_type(1125, 0x01).id, 1125, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1126_8970(RTCW(loc1)));
	RTHOOK(5);
	Result = (nstcall = 0, F1125_8899(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.to_integer_ctx */
EIF_INTEGER_32 F1125_8899 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,loc1);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTEAA("to_integer_ctx", 1124, Current, 2, 1, 15828);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F1125_8871(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("large_enough", EX_PRE);
		tr1 = RTOUCR(391,(nstcall = 0, F136_1868), (Current));
		tr2 = RTOUCR(392,(nstcall = 1, F132_1795), (RTCW(tr1)));
		tb1 = (nstcall = 1, F92_1353(Current, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("small_enough", EX_PRE);
		tr1 = RTOUCR(391,(nstcall = 0, F136_1868), (Current));
		tr2 = RTOUCR(393,(nstcall = 1, F132_1796), (RTCW(tr1)));
		tb1 = (nstcall = 1, F92_1351(Current, tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = (nstcall = 0, F1125_8911(Current, arg1));
	RTHOOK(5);
	ti4_1 = (nstcall = 1, F1125_8894(RTCW(loc1)));
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L));
	RTHOOK(6);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), loc2));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 10L)) + ti4_1);
		RTHOOK(9);
		loc2--;
	}
	RTHOOK(10);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(11);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) -Result;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.to_engineering_string */
EIF_REFERENCE F1125_8900 (EIF_REFERENCE Current)
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
	
	RTEAA("to_engineering_string", 1124, Current, 0, 0, 15829);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1125_8964(Current, (EIF_BOOLEAN) 1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("to_string_not_void", EX_POST);
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

/* {MA_DECIMAL}.to_scientific_string */
EIF_REFERENCE F1125_8901 (EIF_REFERENCE Current)
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
	
	RTEAA("to_scientific_string", 1124, Current, 0, 0, 15830);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F1125_8964(Current, (EIF_BOOLEAN) 0));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("to_string_not_void", EX_POST);
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

/* {MA_DECIMAL}.copy */
void F1125_8902 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("copy", 1124, Current, 0, 1, 15831);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == NULL)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = RTOUCR(377,(nstcall = 0, F1125_8968), (Current));
			tb1 = (EIF_BOOLEAN)(tr1 == tr2);
		}
		if (tb1) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
			tr2 = (nstcall = 1, F863_5706(RTCW(tr1)));
			RTAR(Current, tr2);
			*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(6);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
			(nstcall = 1, F863_5705(RTCW(tr1), tr2));
		}
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(8);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) tb1;
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_1_);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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

/* {MA_DECIMAL}.add */
EIF_REFERENCE F1125_8903 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("add", 1124, Current, 2, 2, 15832);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8878(Current))) {
		tb2 = (nstcall = 1, F1125_8878(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		Result = (nstcall = 0, F1125_8930(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		loc1 = RTLNSMART(dftype);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
		(nstcall = -1, F1125_8846(RTCW(loc1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
		RTHOOK(6);
		(nstcall = 1, F1125_8902(RTCW(loc1), Current));
		RTHOOK(7);
		loc2 = RTLNSMART(dftype);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
		(nstcall = -1, F1125_8846(RTCW(loc2), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
		RTHOOK(8);
		(nstcall = 1, F1125_8902(RTCW(loc2), arg1));
		RTHOOK(9);
		tb1 = '\0';
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
			tb2 = (nstcall = 1, F1125_8876(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(10);
			(nstcall = 1, F1125_8933(RTCW(loc2), loc1, arg2));
			RTHOOK(11);
			Result = (EIF_REFERENCE) loc2;
		} else {
			RTHOOK(12);
			tb1 = '\0';
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
				tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(13);
				(nstcall = 1, F1125_8932(RTCW(loc1), loc2, arg2));
				RTHOOK(14);
				Result = (EIF_REFERENCE) loc1;
				RTHOOK(15);
				(nstcall = 1, F1125_8921(RTCW(Result)));
			} else {
				RTHOOK(16);
				tb1 = '\0';
				if ((nstcall = 0, F1125_8876(Current))) {
					tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(17);
					(nstcall = 1, F1125_8933(RTCW(loc1), loc2, arg2));
					RTHOOK(18);
					Result = (EIF_REFERENCE) loc1;
				} else {
					RTHOOK(19);
					(nstcall = 1, F1125_8932(RTCW(loc1), loc2, arg2));
					RTHOOK(20);
					Result = (EIF_REFERENCE) loc1;
				}
			}
		}
		RTHOOK(21);
		tb1 = (nstcall = 1, F1125_8882(RTCW(Result)));
		if (tb1) {
			RTHOOK(22);
			tb1 = '\01';
			tb2 = '\0';
			if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
				tb3 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
				tb2 = tb3;
			}
			if (!tb2) {
				tb2 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_1_);
				if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 3L))) {
					ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
					tb2 = (EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) != ti4_1);
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(23);
				(nstcall = 1, F1125_8921(RTCW(Result)));
			} else {
				RTHOOK(24);
				(nstcall = 1, F1125_8922(RTCW(Result)));
			}
		}
		RTHOOK(25);
		(nstcall = 1, F1125_8952(RTCW(Result), arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(26);
		RTCT("add_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(27);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.subtract */
EIF_REFERENCE F1125_8904 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("subtract", 1124, Current, 1, 2, 15833);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8878(Current))) {
		tb2 = (nstcall = 1, F1125_8878(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		Result = (nstcall = 0, F1125_8931(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		loc1 = RTLNSMART(Dftype(Current));
		(nstcall = -1, F1125_8847(RTCW(loc1), arg1));
		RTHOOK(6);
		tb1 = (nstcall = 1, F1125_8876(RTCW(loc1)));
		if (tb1) {
			RTHOOK(7);
			(nstcall = 1, F1125_8921(RTCW(loc1)));
		} else {
			RTHOOK(8);
			(nstcall = 1, F1125_8922(RTCW(loc1)));
		}
		RTHOOK(9);
		Result = (nstcall = 0, F1125_8903(Current, loc1, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("subtract_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {MA_DECIMAL}.multiply */
EIF_REFERENCE F1125_8905 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,tr2);
	RTLR(8,tr3);
	RTLIU(9);
	
	RTEAA("multiply", 1124, Current, 2, 2, 15834);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8878(Current))) {
		tb2 = (nstcall = 1, F1125_8878(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8877(Current))) {
			tb2 = (nstcall = 1, F1125_8877(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			tb1 = '\01';
			if (!(nstcall = 0, F1125_8879(Current))) {
				tb2 = (nstcall = 1, F1125_8879(RTCW(arg1)));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(6);
				tr1 = RTMS_EX_H("sNan in multiply",16,1487660921);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
			}
			RTHOOK(7);
			Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
		} else {
			RTHOOK(8);
			tb1 = '\01';
			if (!(nstcall = 0, F1125_8881(Current))) {
				tb2 = (nstcall = 1, F1125_8881(RTCW(arg1)));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(9);
				tb1 = '\01';
				if (!(nstcall = 0, F1125_8882(Current))) {
					tb2 = (nstcall = 1, F1125_8882(RTCW(arg1)));
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(10);
					tr1 = RTMS_EX_H("0 * Inf",7,1141833574);
					(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
					RTHOOK(11);
					Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
				} else {
					RTHOOK(12);
					ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
					if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
						RTHOOK(13);
						Result = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
					} else {
						RTHOOK(14);
						Result = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
					}
				}
			} else {
				RTHOOK(15);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			}
		}
	} else {
		RTHOOK(16);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8882(Current))) {
			tb2 = (nstcall = 1, F1125_8882(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(17);
			Result = RTLNSMART(dftype);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
			(nstcall = -1, F1125_8846(RTCW(Result), ti4_1));
			RTHOOK(18);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
			(nstcall = 1, F1125_8920(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
			RTHOOK(19);
			ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
			if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
				RTHOOK(20);
				(nstcall = 1, F1125_8922(RTCW(Result)));
			} else {
				RTHOOK(21);
				(nstcall = 1, F1125_8921(RTCW(Result)));
			}
		} else {
			RTHOOK(22);
			loc1 = (EIF_REFERENCE) Current;
			RTHOOK(23);
			loc2 = (EIF_REFERENCE) arg1;
			RTHOOK(24);
			Result = RTLNSMART(dftype);
			ti4_1 = (nstcall = 1, F1125_8894(RTCW(loc1)));
			ti4_2 = (nstcall = 1, F1125_8894(RTCW(loc2)));
			(nstcall = -1, F1125_8846(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 2L))));
			RTHOOK(25);
			tr1 = *(EIF_REFERENCE *)(RTCW(Result));
			tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
			tr3 = *(EIF_REFERENCE *)(RTCW(loc2));
			(nstcall = 1, F863_5712(RTCW(tr1), tr2, tr3));
			RTHOOK(26);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_1_0_0_);
			(nstcall = 1, F1125_8920(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
			RTHOOK(27);
			ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
			if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
				RTHOOK(28);
				(nstcall = 1, F1125_8922(RTCW(Result)));
			} else {
				RTHOOK(29);
				(nstcall = 1, F1125_8921(RTCW(Result)));
			}
			RTHOOK(30);
			(nstcall = 1, F1125_8952(RTCW(Result), arg2));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(31);
		RTCT("multiply_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.divide */
EIF_REFERENCE F1125_8906 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("divide", 1124, Current, 0, 2, 15835);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F1125_8961(Current, arg1, arg2, ((EIF_INTEGER_32) 1L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("divide_not_void", EX_POST);
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

/* {MA_DECIMAL}.divide_integer */
EIF_REFERENCE F1125_8907 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("divide_integer", 1124, Current, 0, 2, 15836);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F1125_8961(Current, arg1, arg2, ((EIF_INTEGER_32) 2L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("divide_integer_not_void", EX_POST);
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

/* {MA_DECIMAL}.remainder */
EIF_REFERENCE F1125_8908 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("remainder", 1124, Current, 0, 2, 15837);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8878(Current))) {
		tb2 = (nstcall = 1, F1125_8878(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8877(Current))) {
			tb2 = (nstcall = 1, F1125_8877(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			tb1 = '\01';
			if (!(nstcall = 0, F1125_8879(Current))) {
				tb2 = (nstcall = 1, F1125_8879(RTCW(arg1)));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(6);
				tr1 = RTMS_EX_H("sNan in remainder",17,1460372594);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
			}
			RTHOOK(7);
			Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
		} else {
			RTHOOK(8);
			if ((nstcall = 0, F1125_8881(Current))) {
				RTHOOK(9);
				tr1 = RTMS_EX_H("[+-] Inf dividend in remainder",30,918751090);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
				RTHOOK(10);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			} else {
				RTHOOK(11);
				tb1 = (nstcall = 1, F1125_8881(RTCW(arg1)));
				if (tb1) {
					RTHOOK(12);
					Result = RTLNSMART(dftype);
					(nstcall = -1, F1125_8847(RTCW(Result), Current));
					RTHOOK(13);
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
						RTHOOK(14);
						(nstcall = 1, F1125_8921(RTCW(Result)));
					}
				} else {
					RTHOOK(15);
					Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
				}
			}
		}
	} else {
		RTHOOK(16);
		tb1 = (nstcall = 1, F1125_8882(RTCW(arg1)));
		if (tb1) {
			RTHOOK(17);
			tr1 = RTMS_EX_H("Zero divisor in remainder",25,993764722);
			(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
			RTHOOK(18);
			Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
		} else {
			RTHOOK(19);
			if ((nstcall = 0, F1125_8882(Current))) {
				RTHOOK(20);
				Result = RTLNSMART(dftype);
				(nstcall = -1, F1125_8848(RTCW(Result)));
				RTHOOK(21);
				if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < ((EIF_INTEGER_32) 0L))) {
					RTHOOK(22);
					(nstcall = 1, F1125_8920(RTCW(Result), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)));
				} else {
					RTHOOK(23);
					(nstcall = 1, F1125_8920(RTCW(Result), ((EIF_INTEGER_32) 0L)));
				}
				RTHOOK(24);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
					RTHOOK(25);
					(nstcall = 1, F1125_8921(RTCW(Result)));
				}
			} else {
				RTHOOK(26);
				Result = (nstcall = 0, F1125_8962(Current, arg1, arg2, ((EIF_INTEGER_32) 3L)));
				RTHOOK(27);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
					RTHOOK(28);
					(nstcall = 1, F1125_8921(RTCW(Result)));
				}
				RTHOOK(29);
				(nstcall = 1, F1125_8952(RTCW(Result), arg2));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(30);
		RTCT("remainder_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.rescale */
EIF_REFERENCE F1125_8909 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("rescale", 1124, Current, 5, 2, 15838);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_2_);
	if ((EIF_BOOLEAN) (arg1 <= ti4_1)) {
		ti4_1 = (nstcall = 1, F1126_8979(RTCW(arg2)));
		tb1 = (EIF_BOOLEAN) (arg1 >= ti4_1);
	}
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		tr1 = RTMS_EX_H("new exponent is not within limits [Etiny..Emax]",47,1826148957);
		(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
		RTHOOK(4);
		Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
	} else {
		RTHOOK(5);
		if ((nstcall = 0, F1125_8878(Current))) {
			RTHOOK(6);
			Result = RTLNSMART(dftype);
			(nstcall = -1, F1125_8847(RTCW(Result), Current));
			RTHOOK(7);
			(nstcall = 1, F1125_8963(RTCW(Result), arg2));
		} else {
			RTHOOK(8);
			if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < arg1)) {
				RTHOOK(9);
				if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8882(Current))) {
					RTHOOK(10);
					loc1 = (nstcall = 0, F1125_8869(Current));
					loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - arg1) + ((EIF_INTEGER_32) 1L));
					RTHOOK(11);
					if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
						RTHOOK(12);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
						loc5 = (nstcall = 0, F1125_8894(Current));
						loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + loc5) + ((EIF_INTEGER_32) 1L));
					} else {
						RTHOOK(13);
						if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
							RTHOOK(14);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
							loc5 = (nstcall = 0, F1125_8894(Current));
							loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + loc5);
						} else {
							RTHOOK(15);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
							loc5 = (nstcall = 0, F1125_8894(Current));
							loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (loc5 - loc1));
						}
					}
					RTHOOK(16);
					Result = RTLNSMART(dftype);
					(nstcall = -1, F1125_8846(RTCW(Result), loc5));
					RTHOOK(17);
					(nstcall = 1, F1125_8902(RTCW(Result), Current));
					RTHOOK(18);
					tr1 = *(EIF_REFERENCE *)(RTCW(Result));
					(nstcall = 1, F863_5718(RTCW(tr1), loc5));
					RTHOOK(19);
					(nstcall = 1, F1125_8934(RTCW(Result), arg2));
					RTHOOK(20);
					(nstcall = 1, F1125_8953(RTCW(Result)));
					RTHOOK(21);
					tb1 = (nstcall = 1, F1125_8951(RTCW(Result), arg2));
					if (tb1) {
						RTHOOK(22);
						(nstcall = 1, F1125_8957(RTCW(Result), arg2));
					}
					RTHOOK(23);
					tb1 = '\0';
					tb2 = (nstcall = 1, F1126_8981(RTCW(arg2), ((EIF_INTEGER_32) 8L)));
					if (tb2) {
						tb2 = (nstcall = 1, F1126_8981(RTCW(arg2), ((EIF_INTEGER_32) 2L)));
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(24);
						tr1 = RTMS_EX_H("Underflow when rescaling",24,1775083111);
						(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 7L), tr1));
					}
					RTHOOK(25);
					tb1 = (nstcall = 1, F1125_8950(RTCW(Result), arg2));
					if (tb1) {
						RTHOOK(26);
						(nstcall = 1, F1125_8956(RTCW(Result), arg2));
					}
					RTHOOK(27);
					if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > arg1)) {
						RTHOOK(28);
						(nstcall = 1, F1125_8938(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - arg1)));
					}
				} else {
					RTHOOK(29);
					Result = RTLNSMART(dftype);
					(nstcall = -1, F1125_8847(RTCW(Result), Current));
				}
				RTHOOK(30);
				(nstcall = 1, F1125_8920(RTCW(Result), arg1));
			} else {
				RTHOOK(31);
				if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > arg1)) {
					RTHOOK(32);
					if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8882(Current))) {
						RTHOOK(33);
						loc2 = (nstcall = 0, F1125_8869(Current));
						loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - arg1) + ((EIF_INTEGER_32) 1L));
						RTHOOK(34);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
						if ((EIF_BOOLEAN) (loc2 > ti4_1)) {
							RTHOOK(35);
							Result = RTLNSMART(dftype);
							ti4_1 = (nstcall = 0, F1125_8894(Current));
							(nstcall = -1, F1125_8846(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
							RTHOOK(36);
							(nstcall = 1, F1125_8902(RTCW(Result), Current));
							RTHOOK(37);
							(nstcall = 1, F1125_8938(RTCW(Result), ((EIF_INTEGER_32) 1L)));
							RTHOOK(38);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_2_);
							loc4 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(39);
							ti4_1 = (nstcall = 0, F1125_8894(Current));
							(nstcall = 1, F1126_8987(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
							RTHOOK(40);
							(nstcall = 1, F1125_8920(RTCW(Result), ((EIF_INTEGER_32) 1L)));
							RTHOOK(41);
							(nstcall = 1, F1125_8956(RTCW(Result), arg2));
							RTHOOK(42);
							tb1 = (nstcall = 1, F1125_8878(RTCW(Result)));
							if ((EIF_BOOLEAN) !tb1) {
								RTHOOK(43);
								(nstcall = 1, F1125_8920(RTCW(Result), arg1));
							}
							RTHOOK(44);
							(nstcall = 1, F1126_8987(RTCW(arg2), loc4));
						} else {
							RTHOOK(45);
							loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
							loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - arg1);
							RTHOOK(46);
							Result = RTLNSMART(dftype);
							ti4_1 = (nstcall = 0, F1125_8894(Current));
							(nstcall = -1, F1125_8846(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + loc3)));
							RTHOOK(47);
							(nstcall = 1, F1125_8902(RTCW(Result), Current));
							RTHOOK(48);
							(nstcall = 1, F1125_8938(RTCW(Result), loc3));
						}
					} else {
						RTHOOK(49);
						tb1 = '\0';
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < ((EIF_INTEGER_32) 0L)))) {
							tb1 = (EIF_BOOLEAN) ((nstcall = 0, F1125_8894(Current)) > ((EIF_INTEGER_32) 1L));
						}
						if (tb1) {
							RTHOOK(50);
							loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -arg1 + ((EIF_INTEGER_32) 1L));
						} else {
							RTHOOK(51);
							loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						}
						RTHOOK(52);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
						if ((EIF_BOOLEAN) (loc2 > ti4_1)) {
							RTHOOK(53);
							Result = RTLNSMART(dftype);
							ti4_1 = (nstcall = 0, F1125_8894(Current));
							(nstcall = -1, F1125_8846(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
							RTHOOK(54);
							(nstcall = 1, F1125_8902(RTCW(Result), Current));
							RTHOOK(55);
							(nstcall = 1, F1125_8938(RTCW(Result), ((EIF_INTEGER_32) 1L)));
							RTHOOK(56);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_2_);
							loc4 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(57);
							ti4_1 = (nstcall = 1, F1125_8869(RTCW(Result)));
							(nstcall = 1, F1126_8987(RTCW(arg2), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
							RTHOOK(58);
							(nstcall = 1, F1125_8956(RTCW(Result), arg2));
							RTHOOK(59);
							(nstcall = 1, F1126_8987(RTCW(arg2), loc4));
						} else {
							RTHOOK(60);
							if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
								RTHOOK(61);
								loc3 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
								loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - arg1);
								RTHOOK(62);
								Result = RTLNSMART(dftype);
								ti4_1 = (nstcall = 0, F1125_8894(Current));
								(nstcall = -1, F1125_8846(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + loc3)));
								RTHOOK(63);
								(nstcall = 1, F1125_8902(RTCW(Result), Current));
								RTHOOK(64);
								(nstcall = 1, F1125_8938(RTCW(Result), loc3));
							} else {
								RTHOOK(65);
								Result = RTLNSMART(dftype);
								(nstcall = -1, F1125_8847(RTCW(Result), Current));
							}
							RTHOOK(66);
							(nstcall = 1, F1125_8920(RTCW(Result), arg1));
						}
					}
					RTHOOK(67);
					(nstcall = 1, F1125_8952(RTCW(Result), arg2));
				} else {
					RTHOOK(68);
					Result = RTLNSMART(dftype);
					(nstcall = -1, F1125_8847(RTCW(Result), Current));
					RTHOOK(69);
					(nstcall = 1, F1125_8952(RTCW(Result), arg2));
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(70);
		RTCT("rescale_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(71);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.rescale_decimal */
EIF_REFERENCE F1125_8910 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTEAA("rescale_decimal", 1124, Current, 4, 2, 15839);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_exponent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	tb2 = (nstcall = 1, F1125_8878(RTCW(arg1)));
	if (!tb2) {
		tb1 = (nstcall = 0, F1125_8878(Current));
	}
	if (tb1) {
		RTHOOK(4);
		tb1 = '\01';
		tb2 = (nstcall = 1, F1125_8879(RTCW(arg1)));
		if (!tb2) {
			tb1 = (nstcall = 0, F1125_8879(Current));
		}
		if (tb1) {
			RTHOOK(5);
			tr1 = RTMS_EX_H("sNaN as new exponent in \'rescale_decimal\'",41,1179579687);
			(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
			RTHOOK(6);
			Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
		} else {
			RTHOOK(7);
			tb1 = (nstcall = 1, F1125_8880(RTCW(arg1)));
			if (tb1) {
				RTHOOK(8);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			} else {
				RTHOOK(9);
				tb1 = (nstcall = 1, F1125_8881(RTCW(arg1)));
				if (tb1) {
					RTHOOK(10);
					tr1 = RTMS_EX_H("Inf as new exponent in \'rescale_decimal\'",40,1368234279);
					(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
					RTHOOK(11);
					Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
				} else {
					RTHOOK(12);
					Result = RTLNSMART(Dftype(Current));
					(nstcall = -1, F1125_8847(RTCW(Result), Current));
					RTHOOK(13);
					(nstcall = 1, F1125_8963(RTCW(Result), arg2));
				}
			}
		}
	} else {
		RTHOOK(14);
		loc1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_2_);
		(nstcall = -1, F1125_8850(RTCW(loc1), ti4_1));
		RTHOOK(15);
		loc2 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
		ti4_1 = (nstcall = 1, F1126_8979(RTCW(arg2)));
		(nstcall = -1, F1125_8850(RTCW(loc2), ti4_1));
		RTHOOK(16);
		tb1 = '\0';
		tb2 = (nstcall = 1, F92_1351(RTCW(arg1), loc1));
		if (tb2) {
			tb2 = (nstcall = 1, F92_1353(RTCW(arg1), loc2));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(17);
			loc4 = RTLNS(eif_new_type(1125, 0x01).id, 1125, _OBJSIZ_3_2_0_3_0_0_0_0_);
			(nstcall = -1, F1126_8970(RTCW(loc4)));
			RTHOOK(18);
			tb1 = (nstcall = 1, F1125_8871(RTCW(arg1)));
			if (tb1) {
				RTHOOK(19);
				ti4_1 = (nstcall = 1, F1125_8899(RTCW(arg1), loc4));
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(20);
				tb1 = '\0';
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_2_);
				if ((EIF_BOOLEAN) (loc3 <= ti4_1)) {
					ti4_1 = (nstcall = 1, F1126_8979(RTCW(arg2)));
					tb1 = (EIF_BOOLEAN) (loc3 >= ti4_1);
				}
				if (tb1) {
					RTHOOK(21);
					Result = (nstcall = 0, F1125_8909(Current, loc3, arg2));
				} else {
					RTHOOK(22);
					tr1 = RTMS_EX_H("new exponent is not within limits [Etiny..Emax]",47,1826148957);
					(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
					RTHOOK(23);
					Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
				}
			} else {
				RTHOOK(24);
				tr1 = RTMS_EX_H("new exponent has fractional part in \'rescale_decimal\'",53,840779303);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
				RTHOOK(25);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			}
		} else {
			RTHOOK(26);
			tr1 = RTMS_EX_H("new exponent if not within limits [Etiny..Emax]",47,1340971869);
			(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
			RTHOOK(27);
			Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("rescale_decimal_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {MA_DECIMAL}.round_to_integer */
EIF_REFERENCE F1125_8911 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("round_to_integer", 1124, Current, 0, 1, 15840);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F1125_8909(Current, ((EIF_INTEGER_32) 0L), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("round_to_integer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, F1125_8878(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_0_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
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
	return Result;
}

/* {MA_DECIMAL}.plus */
EIF_REFERENCE F1125_8912 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("plus", 1124, Current, 1, 1, 15841);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	(nstcall = -1, F1125_8846(RTCW(loc1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	(nstcall = 1, F1125_8920(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)));
	RTHOOK(4);
	tr1 = (nstcall = 1, F1125_8903(RTCW(loc1), Current, arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("plus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {MA_DECIMAL}.normalize */
EIF_REFERENCE F1125_8913 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("normalize", 1124, Current, 2, 0, 15842);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8912(Current, tr1));
	RTHOOK(2);
	tb1 = (nstcall = 1, F1125_8882(RTCW(Result)));
	if (tb1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		(nstcall = 1, F863_5707(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
		RTHOOK(4);
		(nstcall = 1, F1125_8920(RTCW(Result), ((EIF_INTEGER_32) 0L)));
	} else {
		RTHOOK(5);
		tb1 = (nstcall = 1, F1125_8878(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(6);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(7);
			ti4_1 = (nstcall = 1, F1125_8894(RTCW(Result)));
			loc1 = (EIF_INTEGER_32) ti4_1;
			for (;;) {
				RTHOOK(8);
				tb1 = '\01';
				if (!(EIF_BOOLEAN) (loc2 >= (nstcall = 0, F1125_8894(Current)))) {
					tr1 = *(EIF_REFERENCE *)(RTCW(Result));
					ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), loc2));
					tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
				}
				if (tb1) break;
				RTHOOK(9);
				loc2++;
			}
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
				RTHOOK(11);
				(nstcall = 1, F1125_8939(RTCW(Result), loc2));
				RTHOOK(12);
				tr1 = *(EIF_REFERENCE *)(RTCW(Result));
				tr2 = *(EIF_REFERENCE *)(RTCW(Result));
				ti4_1 = (nstcall = 1, F863_5694(RTCW(tr2)));
				(nstcall = 1, F863_5707(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
			}
		}
	}
	RTHOOK(13);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(14);
		(nstcall = 1, F1125_8921(RTCW(Result)));
	} else {
		RTHOOK(15);
		(nstcall = 1, F1125_8922(RTCW(Result)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("normalize_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.minus */
EIF_REFERENCE F1125_8914 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("minus", 1124, Current, 1, 1, 15843);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNSMART(Dftype(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	(nstcall = -1, F1125_8846(RTCW(loc1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(3);
	(nstcall = 1, F1125_8920(RTCW(loc1), *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)));
	RTHOOK(4);
	tr1 = (nstcall = 1, F1125_8904(RTCW(loc1), Current, arg1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("minus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {MA_DECIMAL}.abs */
EIF_REFERENCE F1125_8915 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
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
	
	RTEAA("abs", 1124, Current, 0, 0, 15844);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F128_1763(Current));
	Result = (nstcall = 0, F1125_8916(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("abs_not_void", EX_POST);
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

/* {MA_DECIMAL}.abs_ctx */
EIF_REFERENCE F1125_8916 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("abs_ctx", 1124, Current, 0, 1, 15845);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		RTHOOK(3);
		Result = (nstcall = 0, F1125_8914(Current, arg1));
	} else {
		RTHOOK(4);
		Result = (nstcall = 0, F1125_8912(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("abs_ctx_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("definition", EX_POST);
		ti4_1 = (nstcall = 1, F1125_8858(RTCW(Result)));
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
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
	return Result;
}

/* {MA_DECIMAL}.max_ctx */
EIF_REFERENCE F1125_8917 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTEAA("max_ctx", 1124, Current, 1, 2, 15846);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8877(Current))) {
		tb2 = (nstcall = 1, F1125_8877(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8879(Current))) {
			tb2 = (nstcall = 1, F1125_8879(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			tr1 = RTMS_EX_H("sNan in max",11,718317176);
			(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
		}
		RTHOOK(6);
		Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
	} else {
		RTHOOK(7);
		loc1 = (nstcall = 0, F1125_8919(Current, arg1, arg2));
		RTHOOK(8);
		tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_1_0_);
		if (tb1) {
			RTHOOK(9);
			Result = (EIF_REFERENCE) arg1;
		} else {
			RTHOOK(10);
			Result = (EIF_REFERENCE) Current;
		}
		RTHOOK(11);
		(nstcall = 1, F1125_8952(RTCW(Result), arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("max_ctx_not_void", EX_POST);
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

/* {MA_DECIMAL}.min_ctx */
EIF_REFERENCE F1125_8918 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLIU(6);
	
	RTEAA("min_ctx", 1124, Current, 1, 2, 15847);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8877(Current))) {
		tb2 = (nstcall = 1, F1125_8877(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8879(Current))) {
			tb2 = (nstcall = 1, F1125_8879(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			tr1 = RTMS_EX_H("sNan in max",11,718317176);
			(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
		}
		RTHOOK(6);
		Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
	} else {
		RTHOOK(7);
		loc1 = (nstcall = 0, F1125_8919(Current, arg1, arg2));
		RTHOOK(8);
		tb1 = '\01';
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_1_0_);
		if (!tb2) {
			tb2 = (nstcall = 1, F1125_8882(RTCW(loc1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(9);
			Result = (EIF_REFERENCE) Current;
		} else {
			RTHOOK(10);
			Result = (EIF_REFERENCE) arg1;
		}
		RTHOOK(11);
		(nstcall = 1, F1125_8952(RTCW(Result), arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("min_ctx_not_void", EX_POST);
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

/* {MA_DECIMAL}.compare */
EIF_REFERENCE F1125_8919 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("compare", 1124, Current, 3, 2, 15848);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8878(Current))) {
		tb2 = (nstcall = 1, F1125_8878(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8877(Current))) {
			tb2 = (nstcall = 1, F1125_8877(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(5);
			Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			RTHOOK(6);
			tb1 = '\01';
			if (!(nstcall = 0, F1125_8879(Current))) {
				tb2 = (nstcall = 1, F1125_8879(RTCW(arg1)));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(7);
				tr1 = RTMS_EX_H("sNaN in \'compare\'",17,1951204135);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
			}
		} else {
			RTHOOK(8);
			if ((nstcall = 0, F1125_8881(Current))) {
				RTHOOK(9);
				tb1 = '\0';
				tb2 = (nstcall = 1, F1125_8881(RTCW(arg1)));
				if (tb2) {
					tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
					tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
				}
				if (tb1) {
					RTHOOK(10);
					Result = (nstcall = 0, F1125_8863(Current));
				} else {
					RTHOOK(11);
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
						RTHOOK(12);
						Result = RTOUCR(384,(nstcall = 0, F1125_8862), (Current));
					} else {
						RTHOOK(13);
						Result = (nstcall = 0, F1125_8861(Current));
					}
				}
			} else {
				RTHOOK(14);
				tb1 = (nstcall = 1, F1125_8881(RTCW(arg1)));
				if (tb1) {
					RTHOOK(15);
					tb1 = '\0';
					if ((nstcall = 0, F1125_8881(Current))) {
						tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
						tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) == tb2);
					}
					if (tb1) {
						RTHOOK(16);
						Result = (nstcall = 0, F1125_8863(Current));
					} else {
						RTHOOK(17);
						tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
						if (tb1) {
							RTHOOK(18);
							Result = (nstcall = 0, F1125_8861(Current));
						} else {
							RTHOOK(19);
							Result = RTOUCR(384,(nstcall = 0, F1125_8862), (Current));
						}
					}
				} else {
					RTHOOK(20);
					Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
				}
			}
		}
	} else {
		RTHOOK(21);
		loc1 = RTLNSMART(dftype);
		(nstcall = -1, F1125_8847(RTCW(loc1), Current));
		RTHOOK(22);
		loc2 = RTLNSMART(dftype);
		(nstcall = -1, F1125_8847(RTCW(loc2), arg1));
		RTHOOK(23);
		tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) != tb1)) {
			RTHOOK(24);
			if ((nstcall = 0, F1125_8882(Current))) {
				RTHOOK(25);
				loc1 = RTLNSMART(dftype);
				(nstcall = -1, F1125_8848(RTCW(loc1)));
			} else {
				RTHOOK(26);
				loc1 = RTLNSMART(dftype);
				(nstcall = -1, F1125_8849(RTCW(loc1)));
				RTHOOK(27);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
					RTHOOK(28);
					(nstcall = 1, F1125_8921(RTCW(loc1)));
				}
			}
			RTHOOK(29);
			tb1 = (nstcall = 1, F1125_8882(RTCW(arg1)));
			if (tb1) {
				RTHOOK(30);
				loc2 = RTLNSMART(dftype);
				(nstcall = -1, F1125_8848(RTCW(loc2)));
			} else {
				RTHOOK(31);
				loc2 = RTLNSMART(dftype);
				(nstcall = -1, F1125_8849(RTCW(loc2)));
				RTHOOK(32);
				tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
				if (tb1) {
					RTHOOK(33);
					(nstcall = 1, F1125_8921(RTCW(loc2)));
				}
			}
		}
		RTHOOK(34);
		tr1 = (nstcall = 1, F1105_8404(RTCW(arg2)));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(35);
		(nstcall = 1, F1126_8994(RTCW(loc3)));
		RTHOOK(36);
		tr1 = (nstcall = 1, F1125_8904(RTCW(loc1), loc2, loc3));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(37);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1125_8882(RTCW(Result)));
		if (tb2) {
			tb2 = (nstcall = 1, F1126_8981(RTCW(loc3), ((EIF_INTEGER_32) 8L)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(38);
			Result = (nstcall = 0, F1125_8863(Current));
		} else {
			RTHOOK(39);
			tb1 = *(EIF_BOOLEAN *)(RTCW(Result)+ _CHROFF_1_0_);
			if (tb1) {
				RTHOOK(40);
				Result = RTOUCR(384,(nstcall = 0, F1125_8862), (Current));
			} else {
				RTHOOK(41);
				Result = (nstcall = 0, F1125_8861(Current));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(42);
		RTCT("compare_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(43);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.set_exponent */
void F1125_8920 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_exponent", 1124, Current, 0, 1, 15849);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("exponent_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == arg1)) {
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

/* {MA_DECIMAL}.set_negative */
void F1125_8921 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_negative", 1124, Current, 0, 0, 15850);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("negative", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
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

/* {MA_DECIMAL}.set_positive */
void F1125_8922 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_positive", 1124, Current, 0, 0, 15851);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive", EX_POST);
		if ((nstcall = 0, F1125_8876(Current))) {
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

/* {MA_DECIMAL}.special */
EIF_INTEGER_32 F1125_8928 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_);
}


/* {MA_DECIMAL}.set_quiet_nan */
void F1125_8929 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_quiet_nan", 1124, Current, 0, 0, 15858);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1125_8855(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("qnan", EX_POST);
		if ((nstcall = 0, F1125_8880(Current))) {
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

/* {MA_DECIMAL}.add_special */
EIF_REFERENCE F1125_8930 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("add_special", 1124, Current, 0, 2, 15859);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("special", EX_PRE);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8878(Current))) {
			tb2 = (nstcall = 1, F1125_8878(RTCW(arg1)));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8877(Current))) {
		tb2 = (nstcall = 1, F1125_8877(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8879(Current))) {
			tb2 = (nstcall = 1, F1125_8879(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			tr1 = RTMS_EX_H("sNaN operand in add",19,667875428);
			(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
		}
		RTHOOK(7);
		Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
	} else {
		RTHOOK(8);
		tb1 = '\0';
		if ((nstcall = 0, F1125_8881(Current))) {
			tb2 = (nstcall = 1, F1125_8881(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(9);
			ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
			if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) != ti4_1)) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("+Inf and -Inf operands in add",29,1456613732);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
				RTHOOK(11);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			} else {
				RTHOOK(12);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
					RTHOOK(13);
					Result = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
				} else {
					RTHOOK(14);
					Result = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
				}
			}
		} else {
			RTHOOK(15);
			tb1 = '\01';
			if (!(nstcall = 0, F1125_8881(Current))) {
				tb2 = (nstcall = 1, F1125_8881(RTCW(arg1)));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(16);
				if ((nstcall = 0, F1125_8881(Current))) {
					RTHOOK(17);
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
						RTHOOK(18);
						Result = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
					} else {
						RTHOOK(19);
						Result = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
					}
				} else {
					RTHOOK(20);
					tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_1_0_);
					if (tb1) {
						RTHOOK(21);
						Result = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
					} else {
						RTHOOK(22);
						Result = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
					}
				}
			} else {
				RTHOOK(23);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("add_special_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {MA_DECIMAL}.subtract_special */
EIF_REFERENCE F1125_8931 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("subtract_special", 1124, Current, 0, 2, 15860);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("special", EX_PRE);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8878(Current))) {
			tb2 = (nstcall = 1, F1125_8878(RTCW(arg1)));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8877(Current))) {
		tb2 = (nstcall = 1, F1125_8877(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8879(Current))) {
			tb2 = (nstcall = 1, F1125_8879(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			tr1 = RTMS_EX_H("sNaN operand in subtract",24,404634484);
			(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
		}
		RTHOOK(7);
		Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
	} else {
		RTHOOK(8);
		tb1 = '\0';
		if ((nstcall = 0, F1125_8881(Current))) {
			tb2 = (nstcall = 1, F1125_8881(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(9);
			ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
			if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("Inf and Inf operands in subtract",32,1318973300);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
				RTHOOK(11);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			} else {
				RTHOOK(12);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
					RTHOOK(13);
					Result = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
				} else {
					RTHOOK(14);
					Result = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
				}
			}
		} else {
			RTHOOK(15);
			tb1 = '\01';
			if (!(nstcall = 0, F1125_8881(Current))) {
				tb2 = (nstcall = 1, F1125_8881(RTCW(arg1)));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(16);
				Result = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
				RTHOOK(17);
				if ((nstcall = 0, F1125_8881(Current))) {
					RTHOOK(18);
					if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
						RTHOOK(19);
						Result = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
					}
				} else {
					RTHOOK(20);
					tb1 = (nstcall = 1, F1125_8876(RTCW(arg1)));
					if (tb1) {
						RTHOOK(21);
						Result = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
					} else {
						RTHOOK(22);
						Result = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
					}
				}
			} else {
				RTHOOK(23);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(24);
		RTCT("subtract_special_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {MA_DECIMAL}.unsigned_add */
void F1125_8932 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("unsigned_add", 1124, Current, 2, 2, 15861);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
	loc1 = (nstcall = 0, F1125_8935(Current, arg1, ti4_1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
		ti4_2 = (nstcall = 0, F1125_8894(Current));
		(nstcall = 0, F1125_8938(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)) - ti4_2)));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
		ti4_1 = (nstcall = 1, F863_5694(RTCW(tr3)));
		ti4_1 = (nstcall = 1, F863_5693(RTCW(tr2), ti4_1));
		(nstcall = 1, F863_5702(RTCW(tr1), ti4_1, ((EIF_INTEGER_32) 0L)));
		RTHOOK(7);
		tr1 = RTMS_EX_H("",0,0);
		(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 2L), tr1));
	} else {
		RTHOOK(8);
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(9);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, F863_5694(RTCW(tr2)));
			ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), ti4_1));
			loc2 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(10);
			(nstcall = 0, F1125_8902(Current, arg1));
			RTHOOK(11);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
			ti4_2 = (nstcall = 0, F1125_8894(Current));
			(nstcall = 0, F1125_8938(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)) - ti4_2)));
			RTHOOK(12);
			tr1 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F863_5702(RTCW(tr1), loc2, ((EIF_INTEGER_32) 0L)));
			RTHOOK(13);
			tr1 = RTMS_EX_H("",0,0);
			(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 2L), tr1));
		} else {
			RTHOOK(14);
			if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 5L))) {
				RTHOOK(15);
				(nstcall = 0, F1125_8902(Current, arg1));
			} else {
				RTHOOK(16);
				if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 4L))) {
				} else {
					RTHOOK(17);
					tr1 = *(EIF_REFERENCE *)(Current);
					tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
					(nstcall = 1, F863_5711(RTCW(tr1), tr2));
					RTHOOK(18);
					ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
					ti4_3 = eif_min_int32 (ti4_1,ti4_2);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_3;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.unsigned_subtract */
void F1125_8933 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("unsigned_subtract", 1124, Current, 2, 2, 15862);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
	loc2 = (nstcall = 0, F1125_8935(Current, arg1, ti4_1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 1L))) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
		ti4_2 = (nstcall = 0, F1125_8894(Current));
		(nstcall = 0, F1125_8938(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)) - ti4_2)));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_0_0_1_);
		(nstcall = 1, F863_5715(RTCW(tr1), ((EIF_INTEGER_32) 1L), ti4_1));
	} else {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 2L))) {
			RTHOOK(8);
			(nstcall = 0, F1125_8902(Current, arg1));
			RTHOOK(9);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
			ti4_2 = (nstcall = 0, F1125_8894(Current));
			(nstcall = 0, F1125_8938(Current, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L)) - ti4_2)));
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_0_0_1_);
			(nstcall = 1, F863_5715(RTCW(tr1), ((EIF_INTEGER_32) 1L), ti4_1));
			RTHOOK(11);
			(nstcall = 0, F1125_8921(Current));
		} else {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 4L))) {
			} else {
				RTHOOK(13);
				if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 5L))) {
					RTHOOK(14);
					(nstcall = 0, F1125_8902(Current, arg1));
					RTHOOK(15);
					(nstcall = 0, F1125_8921(Current));
				} else {
					RTHOOK(16);
					tr1 = *(EIF_REFERENCE *)(Current);
					tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
					ti4_1 = (nstcall = 1, F863_5703(RTCW(tr1), tr2));
					loc1 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(17);
					if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
						RTHOOK(18);
						tr1 = *(EIF_REFERENCE *)(Current);
						(nstcall = 1, F863_5707(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
						RTHOOK(19);
						tr1 = *(EIF_REFERENCE *)(Current);
						(nstcall = 1, F863_5702(RTCW(tr1), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
					} else {
						RTHOOK(20);
						if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
							RTHOOK(21);
							tr1 = *(EIF_REFERENCE *)(Current);
							tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
							(nstcall = 1, F863_5714(RTCW(tr1), tr2));
						} else {
							RTHOOK(22);
							tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
							(nstcall = 1, F863_5714(RTCW(tr1), *(EIF_REFERENCE *)(Current)));
							RTHOOK(23);
							tr1 = *(EIF_REFERENCE *)(Current);
							tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
							(nstcall = 1, F863_5705(RTCW(tr1), tr2));
							RTHOOK(24);
							(nstcall = 0, F1125_8921(Current));
						}
					}
					RTHOOK(25);
					ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
					ti4_3 = eif_min_int32 (ti4_1,ti4_2);
					*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) ti4_3;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.round */
void F1125_8934 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("round", 1124, Current, 0, 1, 15863);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("roundable", EX_PRE);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
			tb1 = (EIF_BOOLEAN) ((nstcall = 0, F1125_8894(Current)) > ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((nstcall = 0, F1125_8878(Current))) {
		RTHOOK(4);
		if ((nstcall = 0, F1125_8879(Current))) {
			RTHOOK(5);
			tr1 = RTMS_EX_H("sNaN in \'round\'",15,142702375);
			(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 3L), tr1));
		}
	} else {
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		if ((EIF_BOOLEAN) ((nstcall = 0, F1125_8894(Current)) > ti4_1)) {
			RTHOOK(7);
			tr1 = RTMS_EX_H("Argument rounded",16,2117652836);
			(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 6L), tr1));
			RTHOOK(8);
			if ((nstcall = 0, F1125_8949(Current, arg1))) {
				RTHOOK(9);
				tr1 = RTMS_EX_H("Inexact when rouding",20,1448171367);
				(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 2L), tr1));
			}
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_1_);
			switch (ti4_1) {
				case 0L:
					RTHOOK(11);
					(nstcall = 0, F1125_8941(Current, arg1));
					break;
				case 1L:
					RTHOOK(12);
					(nstcall = 0, F1125_8942(Current, arg1));
					break;
				case 2L:
					RTHOOK(13);
					(nstcall = 0, F1125_8943(Current, arg1));
					break;
				case 3L:
					RTHOOK(14);
					(nstcall = 0, F1125_8944(Current, arg1));
					break;
				case 4L:
					RTHOOK(15);
					(nstcall = 0, F1125_8945(Current, arg1));
					break;
				case 5L:
					RTHOOK(16);
					(nstcall = 0, F1125_8946(Current, arg1));
					break;
				case 6L:
					RTHOOK(17);
					(nstcall = 0, F1125_8948(Current, arg1));
					break;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(18);
		RTCT("rounded", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		if ((EIF_BOOLEAN) ((nstcall = 0, F1125_8894(Current)) <= ti4_1)) {
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
}

/* {MA_DECIMAL}.align_and_hint */
EIF_INTEGER_32 F1125_8935 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("align_and_hint", 1124, Current, 4, 2, 15864);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L));
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
		RTHOOK(3);
		ti4_1 = (nstcall = 0, F1125_8894(Current));
		ti4_2 = (nstcall = 1, F1125_8894(RTCW(arg1)));
		ti4_3 = eif_max_int32 (ti4_1,ti4_2);
		loc1 = (EIF_INTEGER_32) ti4_3;
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > (nstcall = 0, F1125_8894(Current)))) {
			RTHOOK(5);
			(nstcall = 0, F1125_8940(Current, loc1));
		}
		RTHOOK(6);
		ti4_1 = (nstcall = 1, F1125_8894(RTCW(arg1)));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) {
			RTHOOK(7);
			(nstcall = 1, F1125_8940(RTCW(arg1), loc1));
		}
		RTHOOK(8);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	} else {
		RTHOOK(9);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > ti4_1)) {
			RTHOOK(10);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
			ti4_2 = (nstcall = 0, F1125_8869(Current));
			ti4_3 = eif_min_int32 (ti4_1,(EIF_INTEGER_32) (ti4_2 - (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
			loc2 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(11);
			ti4_1 = (nstcall = 1, F1125_8869(RTCW(arg1)));
			if ((EIF_BOOLEAN) (loc2 > ti4_1)) {
				RTHOOK(12);
				if ((nstcall = 0, F1125_8882(Current))) {
					RTHOOK(13);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
				} else {
					RTHOOK(14);
					if (loc3) {
						RTHOOK(15);
						tb1 = (nstcall = 1, F1125_8882(RTCW(arg1)));
						if (tb1) {
							RTHOOK(16);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						} else {
							RTHOOK(17);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
						}
						RTHOOK(18);
						loc4 = (nstcall = 0, F1125_8894(Current));
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) - loc4);
						RTHOOK(19);
						if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
							RTHOOK(20);
							(nstcall = 0, F1125_8938(Current, loc4));
						}
					}
				}
			} else {
				RTHOOK(21);
				if (loc3) {
					RTHOOK(22);
					(nstcall = 0, F1125_8936(Current, arg1, arg2));
				} else {
					RTHOOK(23);
					(nstcall = 0, F1125_8937(Current, arg1));
				}
				RTHOOK(24);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			}
		} else {
			RTHOOK(25);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
			ti4_2 = (nstcall = 1, F1125_8869(RTCW(arg1)));
			ti4_3 = eif_min_int32 (ti4_1,(EIF_INTEGER_32) (ti4_2 - (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
			loc2 = (EIF_INTEGER_32) ti4_3;
			RTHOOK(26);
			if ((EIF_BOOLEAN) (loc2 > (nstcall = 0, F1125_8869(Current)))) {
				RTHOOK(27);
				tb1 = (nstcall = 1, F1125_8882(RTCW(arg1)));
				if (tb1) {
					RTHOOK(28);
					Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
				} else {
					RTHOOK(29);
					if (loc3) {
						RTHOOK(30);
						if ((nstcall = 0, F1125_8882(Current))) {
							RTHOOK(31);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
						} else {
							RTHOOK(32);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
						}
						RTHOOK(33);
						ti4_1 = (nstcall = 1, F1125_8894(RTCW(arg1)));
						loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) - ti4_1);
						RTHOOK(34);
						if ((EIF_BOOLEAN) (loc4 > ((EIF_INTEGER_32) 0L))) {
							RTHOOK(35);
							(nstcall = 1, F1125_8938(RTCW(arg1), loc4));
						}
					}
				}
			} else {
				RTHOOK(36);
				if (loc3) {
					RTHOOK(37);
					(nstcall = 1, F1125_8936(RTCW(arg1), Current, arg2));
				} else {
					RTHOOK(38);
					(nstcall = 1, F1125_8937(RTCW(arg1), Current));
				}
				RTHOOK(39);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(40);
		RTCT("hint_both_is_same_count", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 3L))) {
			ti4_1 = (nstcall = 1, F1125_8894(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F1125_8894(Current)) == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(41);
		RTCT("hint_both_is_same_exponent", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 3L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(42);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.align_overlapped */
void F1125_8936 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("align_overlapped", 1124, Current, 2, 2, 15865);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("exponent_greater", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ti4_1);
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(5);
		(nstcall = 0, F1125_8938(Current, loc1));
	}
	RTHOOK(6);
	ti4_1 = (nstcall = 0, F1125_8894(Current));
	ti4_2 = (nstcall = 1, F1125_8894(RTCW(arg1)));
	ti4_3 = eif_max_int32 (ti4_1,ti4_2);
	loc2 = (EIF_INTEGER_32) ti4_3;
	RTHOOK(7);
	ti4_1 = (nstcall = 1, F1125_8894(RTCW(arg1)));
	if ((EIF_BOOLEAN) (loc2 > ti4_1)) {
		RTHOOK(8);
		(nstcall = 1, F1125_8940(RTCW(arg1), loc2));
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) (loc2 > (nstcall = 0, F1125_8894(Current)))) {
		RTHOOK(10);
		(nstcall = 0, F1125_8940(Current, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F1125_8894(RTCW(arg1)));
		if ((EIF_BOOLEAN)((nstcall = 0, F1125_8894(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("same_exponent", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
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

/* {MA_DECIMAL}.align_unlimited */
void F1125_8937 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("align_unlimited", 1124, Current, 1, 1, 15866);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("exponent_greater", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		RTTE((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) > ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
	(nstcall = 0, F1125_8938(Current, (EIF_INTEGER_32) (ti4_1 - ti4_2)));
	RTHOOK(4);
	loc1 = (nstcall = 0, F1125_8894(Current));
	ti4_1 = (nstcall = 1, F1125_8894(RTCW(arg1)));
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ti4_1);
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		ti4_1 = (nstcall = 0, F1125_8894(Current));
		(nstcall = 1, F1125_8940(RTCW(arg1), ti4_1));
	} else {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			ti4_1 = (nstcall = 1, F1125_8894(RTCW(arg1)));
			(nstcall = 0, F1125_8940(Current, ti4_1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F1125_8894(RTCW(arg1)));
		if ((EIF_BOOLEAN)((nstcall = 0, F1125_8894(Current)) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("same_exponent", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ti4_1)) {
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

/* {MA_DECIMAL}.shift_left */
void F1125_8938 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("shift_left", 1124, Current, 0, 1, 15867);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_count_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_1 = (nstcall = 0, F1125_8894(Current));
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F863_5709(RTCW(tr2), arg1));
	RTHOOK(4);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) -= arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("count_adapted", EX_POST);
		RTCO(tr1);
		if ((EIF_BOOLEAN)((nstcall = 0, F1125_8894(Current)) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("exponent_adapted", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (ti4_2 - arg1))) {
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

/* {MA_DECIMAL}.shift_right */
void F1125_8939 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("shift_right", 1124, Current, 0, 1, 15868);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_count_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F863_5710(RTCW(tr1), arg1));
	RTHOOK(4);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) += arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("exponent_adapted", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == (EIF_INTEGER_32) (ti4_1 + arg1))) {
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

/* {MA_DECIMAL}.grow */
void F1125_8940 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("grow", 1124, Current, 0, 1, 15869);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_count_greater_zero", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_count_less_10_000", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 10000L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F863_5701(RTCW(tr1), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1125_8894(Current)) == arg1)) {
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

/* {MA_DECIMAL}.do_round_up */
void F1125_8941 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("do_round_up", 1124, Current, 2, 1, 15870);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((nstcall = 0, F1125_8949(Current, arg1))) {
		RTHOOK(3);
		loc1 = (nstcall = 0, F1125_8894(Current));
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		(nstcall = 1, F863_5713(RTCW(tr1), ((EIF_INTEGER_32) 1L), ti4_1));
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 - ti4_1);
		RTHOOK(6);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) += loc2;
	}
	RTHOOK(7);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	if ((EIF_BOOLEAN) ((nstcall = 0, F1125_8894(Current)) > ti4_1)) {
		RTHOOK(8);
		ti4_1 = (nstcall = 0, F1125_8894(Current));
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		(nstcall = 0, F1125_8939(Current, (EIF_INTEGER_32) (ti4_1 - ti4_2)));
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		(nstcall = 1, F863_5707(RTCW(tr1), ti4_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.do_round_down */
void F1125_8942 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("do_round_down", 1124, Current, 2, 1, 15871);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_precision", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = (nstcall = 0, F1125_8894(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 - ti4_1);
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F863_5710(RTCW(tr1), loc2));
	RTHOOK(5);
	loc1 = (EIF_INTEGER_32) loc2;
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_)) += loc1;
	RTHOOK(7);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	(nstcall = 1, F863_5707(RTCW(tr1), ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.do_round_ceiling */
void F1125_8943 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("do_round_ceiling", 1124, Current, 0, 1, 15872);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\01';
	if (!*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, F1125_8949(Current, arg1));
	}
	if (tb1) {
		RTHOOK(3);
		(nstcall = 0, F1125_8942(Current, arg1));
	} else {
		RTHOOK(4);
		(nstcall = 0, F1125_8941(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.do_round_floor */
void F1125_8944 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("do_round_floor", 1124, Current, 0, 1, 15873);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8876(Current))) {
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, F1125_8949(Current, arg1));
	}
	if (tb1) {
		RTHOOK(3);
		(nstcall = 0, F1125_8942(Current, arg1));
	} else {
		RTHOOK(4);
		(nstcall = 0, F1125_8941(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.do_round_half_up */
void F1125_8945 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("do_round_half_up", 1124, Current, 0, 1, 15874);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch ((nstcall = 0, F1125_8947(Current, arg1))) {
		case 0L:
		case 1L:
			RTHOOK(3);
			(nstcall = 0, F1125_8941(Current, arg1));
			break;
		default:
			RTHOOK(4);
			(nstcall = 0, F1125_8942(Current, arg1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.do_round_half_down */
void F1125_8946 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("do_round_half_down", 1124, Current, 0, 1, 15875);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch ((nstcall = 0, F1125_8947(Current, arg1))) {
		case -1L:
			RTHOOK(3);
			(nstcall = 0, F1125_8942(Current, arg1));
			break;
		case 1L:
			RTHOOK(4);
			(nstcall = 0, F1125_8941(Current, arg1));
			break;
		default:
			RTHOOK(5);
			(nstcall = 0, F1125_8942(Current, arg1));
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.three_way_compare_discarded_to_half */
EIF_INTEGER_32 F1125_8947 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("three_way_compare_discarded_to_half", 1124, Current, 2, 1, 15876);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 0, F1125_8894(Current));
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ((EIF_INTEGER_32) 1L))));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 5L))) {
		RTHOOK(4);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	} else {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 5L))) {
			RTHOOK(6);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
		} else {
			RTHOOK(7);
			loc2 = (nstcall = 0, F1125_8894(Current));
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - ti4_1) - ((EIF_INTEGER_32) 2L));
			for (;;) {
				RTHOOK(8);
				tb1 = '\01';
				if (!(EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L))) {
					tr1 = *(EIF_REFERENCE *)(Current);
					ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), loc2));
					tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
				}
				if (tb1) break;
				RTHOOK(9);
				loc2--;
			}
			RTHOOK(10);
			if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(11);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			} else {
				RTHOOK(12);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) -1L)) && (EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.do_round_half_even */
void F1125_8948 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("do_round_half_even", 1124, Current, 0, 1, 15877);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch ((nstcall = 0, F1125_8947(Current, arg1))) {
		case -1L:
			RTHOOK(3);
			(nstcall = 0, F1125_8942(Current, arg1));
			break;
		case 1L:
			RTHOOK(4);
			(nstcall = 0, F1125_8941(Current, arg1));
			break;
		default:
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 0, F1125_8894(Current));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
			ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
			if ((EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(6);
				(nstcall = 0, F1125_8942(Current, arg1));
			} else {
				RTHOOK(7);
				(nstcall = 0, F1125_8941(Current, arg1));
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.lost_digits */
EIF_BOOLEAN F1125_8949 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
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
	
	RTEAA("lost_digits", 1124, Current, 1, 1, 15878);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F1125_8894(Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) - ((EIF_INTEGER_32) 1L));
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 < ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 1, F863_5693(RTCW(tr1), loc1));
			tb1 = (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
		}
		if (tb1) break;
		RTHOOK(4);
		loc1--;
	}
	RTHOOK(5);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 >= ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("definition1", EX_POST);
		tb2 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((nstcall = 0, F1125_8894(Current)) - ti4_1) - ((EIF_INTEGER_32) 1L)) >= ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 0, F1125_8894(Current));
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
			tr2 = (nstcall = 1, F863_5695(RTCW(tr1), ((EIF_INTEGER_32) 0L), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ((EIF_INTEGER_32) 1L))));
			tb3 = (nstcall = 1, F261_3282(RTCW(tr2)));
			tb2 = (EIF_BOOLEAN)(Result == tb3);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("definition2", EX_POST);
		tb2 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) ((EIF_INTEGER_32) ((nstcall = 0, F1125_8894(Current)) - ti4_1) - ((EIF_INTEGER_32) 1L)) < ((EIF_INTEGER_32) 0L))) {
			tb2 = (EIF_BOOLEAN) !Result;
		}
		if (tb2) {
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

/* {MA_DECIMAL}.is_overflow */
EIF_BOOLEAN F1125_8950 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_overflow", 1124, Current, 0, 1, 15879);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F1125_8869(Current));
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((nstcall = 0, F1125_8869(Current)) > ti4_1))) {
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

/* {MA_DECIMAL}.is_underflow */
EIF_BOOLEAN F1125_8951 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_underflow", 1124, Current, 0, 1, 15880);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F1125_8869(Current));
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < (EIF_INTEGER_32) -ti4_2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((nstcall = 0, F1125_8869(Current)) < (EIF_INTEGER_32) -ti4_1))) {
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

/* {MA_DECIMAL}.clean_up */
void F1125_8952 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("clean_up", 1124, Current, 2, 1, 15881);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current))) {
		RTHOOK(3);
		tb1 = (nstcall = 1, F1126_8982(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
		loc1 = (EIF_BOOLEAN) tb1;
		RTHOOK(4);
		tb1 = (nstcall = 1, F1126_8981(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
		loc2 = (EIF_BOOLEAN) tb1;
		RTHOOK(5);
		(nstcall = 1, F1126_8991(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
		RTHOOK(6);
		(nstcall = 1, F1126_8993(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
		RTHOOK(7);
		(nstcall = 0, F1125_8953(Current));
		RTHOOK(8);
		if ((nstcall = 0, F1125_8951(Current, arg1))) {
			RTHOOK(9);
			(nstcall = 0, F1125_8957(Current, arg1));
		} else {
			RTHOOK(10);
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
			if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
				tb1 = (EIF_BOOLEAN) ((nstcall = 0, F1125_8894(Current)) > ti4_1);
			}
			if (tb1) {
				RTHOOK(11);
				(nstcall = 0, F1125_8934(Current, arg1));
			}
			RTHOOK(12);
			if ((nstcall = 0, F1125_8950(Current, arg1))) {
				RTHOOK(13);
				(nstcall = 0, F1125_8956(Current, arg1));
			}
		}
		RTHOOK(14);
		if (loc1) {
			RTHOOK(15);
			(nstcall = 1, F1126_8990(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
		}
		RTHOOK(16);
		tb1 = '\01';
		if (!loc2) {
			tb2 = (nstcall = 1, F1126_8981(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(17);
			(nstcall = 1, F1126_8992(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
		} else {
			RTHOOK(18);
			(nstcall = 1, F1126_8993(RTCW(arg1), ((EIF_INTEGER_32) 4L)));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(19);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.strip_leading_zeroes */
void F1125_8953 (EIF_REFERENCE Current)
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
	
	RTEAA("strip_leading_zeroes", 1124, Current, 0, 0, 15882);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F1125_8878(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F261_3295(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.set_largest */
void F1125_8954 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_largest", 1124, Current, 1, 1, 15883);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	if ((EIF_BOOLEAN) ((nstcall = 0, F1125_8894(Current)) < ti4_1)) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		(nstcall = 0, F1125_8940(Current, ti4_1));
	}
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 >= (nstcall = 0, F1125_8894(Current)))) break;
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, F863_5702(RTCW(tr1), ((EIF_INTEGER_32) 9L), loc1));
		RTHOOK(7);
		loc1++;
	}
	RTHOOK(8);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	(nstcall = 1, F863_5707(RTCW(tr1), ti4_1));
	RTHOOK(9);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
		ti4_2 = (nstcall = 0, F1125_8894(Current));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 + (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
	} else {
		RTHOOK(11);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
		ti4_2 = (nstcall = 0, F1125_8894(Current));
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - (EIF_INTEGER_32) (ti4_2 - ((EIF_INTEGER_32) 1L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.promote_to_infinity */
void F1125_8955 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("promote_to_infinity", 1124, Current, 0, 1, 15884);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1125_8857(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("infinity", EX_POST);
		if ((nstcall = 0, F1125_8881(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("sign_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == arg1)) {
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

/* {MA_DECIMAL}.do_overflow */
void F1125_8956 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("do_overflow", 1124, Current, 0, 1, 15885);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("overflow", EX_PRE);
		RTTE((nstcall = 0, F1125_8950(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8882(Current))) {
		RTHOOK(4);
		tr1 = RTMS_EX_H("",0,0);
		(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 5L), tr1));
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_1_);
		switch (ti4_1) {
			case 0L:
			case 4L:
			case 5L:
			case 6L:
				RTHOOK(6);
				ti4_1 = (nstcall = 0, F1125_8858(Current));
				(nstcall = 0, F1125_8955(Current, ti4_1));
				break;
			case 1L:
				RTHOOK(7);
				(nstcall = 0, F1125_8954(Current, arg1));
				break;
			case 2L:
				RTHOOK(8);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
					RTHOOK(9);
					(nstcall = 0, F1125_8954(Current, arg1));
				} else {
					RTHOOK(10);
					ti4_1 = (nstcall = 0, F1125_8858(Current));
					(nstcall = 0, F1125_8955(Current, ti4_1));
				}
				break;
			case 3L:
				RTHOOK(11);
				if ((nstcall = 0, F1125_8876(Current))) {
					RTHOOK(12);
					(nstcall = 0, F1125_8954(Current, arg1));
				} else {
					RTHOOK(13);
					ti4_1 = (nstcall = 0, F1125_8858(Current));
					(nstcall = 0, F1125_8955(Current, ti4_1));
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(14);
		tr1 = RTMS_EX_H("do_overflow",11,2067033207);
		(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 2L), tr1));
		RTHOOK(15);
		tr1 = RTMS_EX_H("do_overflow",11,2067033207);
		(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 6L), tr1));
	} else {
		RTHOOK(16);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
		(nstcall = 0, F1125_8920(Current, ti4_1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.do_underflow */
void F1125_8957 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc8);
	RTLIU(4);
	
	RTEAA("do_underflow", 1124, Current, 9, 1, 15886);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("underflow", EX_PRE);
		RTTE((nstcall = 0, F1125_8951(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc6 = (nstcall = 0, F1125_8882(Current));
	RTHOOK(4);
	if ((EIF_BOOLEAN) !loc6) {
		RTHOOK(5);
		tr1 = RTMS_EX_H("",0,0);
		(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 8L), tr1));
	} else {
		RTHOOK(6);
		tb1 = (nstcall = 1, F1126_8981(RTCW(arg1), ((EIF_INTEGER_32) 6L)));
		loc7 = (EIF_BOOLEAN) tb1;
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		loc8 = (EIF_REFERENCE) tr1;
	}
	RTHOOK(8);
	ti4_1 = (nstcall = 1, F1126_8979(RTCW(arg1)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(9);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < loc1)) {
		RTHOOK(10);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
		loc5 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(11);
		loc2 = (nstcall = 0, F1125_8869(Current));
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 - loc1) + ((EIF_INTEGER_32) 1L));
		RTHOOK(12);
		if ((EIF_BOOLEAN) (loc2 < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(13);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
			loc5 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(14);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_0_0_1_);
			(nstcall = 1, F1126_9004(RTCW(arg1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(15);
			loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
			RTHOOK(16);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_1_);
			switch (ti4_1) {
				case 0L:
					RTHOOK(17);
					loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					break;
				case 2L:
					RTHOOK(18);
					tb1 = '\0';
					if ((nstcall = 0, F1125_8876(Current))) {
						tb1 = (nstcall = 0, F1125_8949(Current, arg1));
					}
					if (tb1) {
						RTHOOK(19);
						loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
					break;
				case 3L:
					RTHOOK(20);
					tb1 = '\01';
					if (!(nstcall = 0, F1125_8876(Current))) {
						tb1 = (EIF_BOOLEAN) !(nstcall = 0, F1125_8949(Current, arg1));
					}
					if (tb1) {
						RTHOOK(21);
						loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					} else {
						RTHOOK(22);
						loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					}
					break;
				default:
					RTHOOK(23);
					loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
					break;
			}
			RTHOOK(24);
			(nstcall = 1, F1126_8986(RTCW(arg1), loc5));
			RTHOOK(25);
			tr1 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F863_5702(RTCW(tr1), loc9, ((EIF_INTEGER_32) 0L)));
			RTHOOK(26);
			tr1 = *(EIF_REFERENCE *)(Current);
			(nstcall = 1, F863_5707(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
			RTHOOK(27);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc1;
			RTHOOK(28);
			tr1 = RTMS_EX_H("Rescaling to e_tiny",19,1576160121);
			(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 2L), tr1));
			RTHOOK(29);
			tr1 = RTMS_EX_H("Rescaling to e_tiny",19,1576160121);
			(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 6L), tr1));
			RTHOOK(30);
			tr1 = RTMS_EX_H("Rescaling to e_tiny",19,1576160121);
			(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 7L), tr1));
		} else {
			RTHOOK(31);
			if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) 0L))) {
				RTHOOK(32);
				(nstcall = 1, F1126_8986(RTCW(arg1), ((EIF_INTEGER_32) 1L)));
				RTHOOK(33);
				ti4_1 = (nstcall = 0, F1125_8894(Current));
				(nstcall = 0, F1125_8940(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
			} else {
				RTHOOK(34);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
				loc4 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
				loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 - loc4) + ((EIF_INTEGER_32) 1L));
				RTHOOK(35);
				if ((EIF_BOOLEAN) ((nstcall = 0, F1125_8894(Current)) < loc4)) {
					RTHOOK(36);
					(nstcall = 0, F1125_8940(Current, loc4));
				}
				RTHOOK(37);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) -ti4_1 - loc1) + ((EIF_INTEGER_32) 1L));
				RTHOOK(38);
				(nstcall = 1, F1126_8986(RTCW(arg1), loc3));
			}
			RTHOOK(39);
			(nstcall = 0, F1125_8934(Current, arg1));
			RTHOOK(40);
			(nstcall = 1, F1126_8986(RTCW(arg1), loc5));
			RTHOOK(41);
			(nstcall = 0, F1125_8953(Current));
			RTHOOK(42);
			tb1 = '\0';
			tb2 = (nstcall = 1, F1126_8981(RTCW(arg1), ((EIF_INTEGER_32) 8L)));
			if (tb2) {
				tb2 = (nstcall = 1, F1126_8981(RTCW(arg1), ((EIF_INTEGER_32) 2L)));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(43);
				tr1 = RTMS_EX_H("Underflow when rescaling",24,1775083111);
				(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 7L), tr1));
			}
			RTHOOK(44);
			if ((nstcall = 0, F1125_8950(Current, arg1))) {
				RTHOOK(45);
				(nstcall = 0, F1125_8956(Current, arg1));
			}
		}
		RTHOOK(46);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) = (EIF_INTEGER_32) loc1;
		RTHOOK(47);
		if (loc6) {
			RTHOOK(48);
			if ((EIF_BOOLEAN) (loc7 && (EIF_BOOLEAN)(loc8 != NULL))) {
				RTHOOK(49);
				(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 6L), loc8));
			} else {
				RTHOOK(50);
				(nstcall = 1, F1126_8993(RTCW(arg1), ((EIF_INTEGER_32) 6L)));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(51);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.do_divide */
EIF_REFERENCE F1125_8961 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("do_divide", 1124, Current, 1, 3, 15890);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(arg3 == ((EIF_INTEGER_32) 3L)));
	RTHOOK(4);
	tb1 = '\01';
	if (!(nstcall = 0, F1125_8878(Current))) {
		tb2 = (nstcall = 1, F1125_8878(RTCW(arg1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		tb1 = '\01';
		if (!(nstcall = 0, F1125_8877(Current))) {
			tb2 = (nstcall = 1, F1125_8877(RTCW(arg1)));
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			tb1 = '\01';
			if (!(nstcall = 0, F1125_8879(Current))) {
				tb2 = (nstcall = 1, F1125_8879(RTCW(arg1)));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(7);
				tr1 = RTMS_EX_H("sNan in divide",14,2043698789);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
			}
			RTHOOK(8);
			Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
		} else {
			RTHOOK(9);
			tb1 = '\0';
			if ((nstcall = 0, F1125_8881(Current))) {
				tb2 = (nstcall = 1, F1125_8881(RTCW(arg1)));
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("[+-] Inf / [+-] Inf",19,343116390);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
				RTHOOK(11);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			} else {
				RTHOOK(12);
				if ((nstcall = 0, F1125_8881(Current))) {
					RTHOOK(13);
					ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
					if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
						RTHOOK(14);
						Result = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
					} else {
						RTHOOK(15);
						Result = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
					}
					RTHOOK(16);
					tb1 = (nstcall = 1, F1125_8882(RTCW(arg1)));
					if (tb1) {
						RTHOOK(17);
						tr1 = RTMS_EX_H("[+-] Inf / [+-] 0",17,739381040);
						(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 1L), tr1));
					}
				} else {
					RTHOOK(18);
					tb1 = (nstcall = 1, F1125_8881(RTCW(arg1)));
					if (tb1) {
						RTHOOK(19);
						ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
						if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
							RTHOOK(20);
							Result = (nstcall = 0, F1125_8863(Current));
						} else {
							RTHOOK(21);
							Result = RTOUCR(386,(nstcall = 0, F1125_8864), (Current));
						}
					} else {
						RTHOOK(22);
						Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
					}
				}
			}
		}
	} else {
		RTHOOK(23);
		tb1 = (nstcall = 1, F1125_8882(RTCW(arg1)));
		if (tb1) {
			RTHOOK(24);
			if ((nstcall = 0, F1125_8882(Current))) {
				RTHOOK(25);
				tr1 = RTMS_EX_H("Division Undefined : O/O",24,2072290895);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
				RTHOOK(26);
				Result = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
			} else {
				RTHOOK(27);
				tr1 = RTMS_EX_H("Division by zero",16,625366895);
				(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 1L), tr1));
				RTHOOK(28);
				ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
				if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
					RTHOOK(29);
					Result = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
				} else {
					RTHOOK(30);
					Result = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
				}
			}
		} else {
			RTHOOK(31);
			if ((nstcall = 0, F1125_8882(Current))) {
				RTHOOK(32);
				Result = RTLNSMART(Dftype(Current));
				(nstcall = -1, F1125_8848(RTCW(Result)));
				RTHOOK(33);
				if (loc1) {
					RTHOOK(34);
					(nstcall = 1, F1125_8920(RTCW(Result), ((EIF_INTEGER_32) 0L)));
				} else {
					RTHOOK(35);
					ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
					ti4_2 = (nstcall = 1, F1125_8869(RTCW(arg1)));
					(nstcall = 1, F1125_8920(RTCW(Result), (EIF_INTEGER_32) (ti4_1 - ti4_2)));
				}
				RTHOOK(36);
				ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
				if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
					RTHOOK(37);
					(nstcall = 1, F1125_8922(RTCW(Result)));
				} else {
					RTHOOK(38);
					(nstcall = 1, F1125_8921(RTCW(Result)));
				}
				RTHOOK(39);
				(nstcall = 1, F1125_8952(RTCW(Result), arg2));
			} else {
				RTHOOK(40);
				Result = (nstcall = 0, F1125_8962(Current, arg1, arg2, arg3));
				RTHOOK(41);
				ti4_1 = (nstcall = 1, F1125_8858(RTCW(arg1)));
				if ((EIF_BOOLEAN)((nstcall = 0, F1125_8858(Current)) == ti4_1)) {
					RTHOOK(42);
					(nstcall = 1, F1125_8922(RTCW(Result)));
				} else {
					RTHOOK(43);
					(nstcall = 1, F1125_8921(RTCW(Result)));
				}
				RTHOOK(44);
				(nstcall = 1, F1125_8952(RTCW(Result), arg2));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(45);
		RTCT("divide_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(46);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.internal_divide */
EIF_REFERENCE F1125_8962 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc13 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc14 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc15 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc16 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLR(6,tr1);
	RTLR(7,tr2);
	RTLR(8,loc3);
	RTLIU(9);
	
	RTEAA("internal_divide", 1124, Current, 16, 3, 15891);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("ctx_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN)(arg3 != ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	loc1 = RTLNSMART(dftype);
	(nstcall = -1, F1125_8847(RTCW(loc1), Current));
	RTHOOK(5);
	loc2 = RTLNSMART(dftype);
	(nstcall = -1, F1125_8847(RTCW(loc2), arg1));
	RTHOOK(6);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_1_0_0_);
	loc10 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
	loc9 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	tb1 = (nstcall = 1, F1125_8882(RTCW(loc1)));
	if (tb1) {
		RTHOOK(9);
		loc16 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(10);
	Result = RTLNSMART(dftype);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
	(nstcall = -1, F1125_8846(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	RTHOOK(11);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(12);
	loc5 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	loc6 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	for (;;) {
		RTHOOK(14);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCW(loc2));
		tb1 = (nstcall = 1, F259_3265(RTCW(tr1), tr2));
		if (tb1) break;
		RTHOOK(15);
		(nstcall = 1, F1125_8938(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
		RTHOOK(16);
		loc4++;
		RTHOOK(17);
		loc6++;
	}
	
	RTHOOK(18);
	(nstcall = 1, F1125_8938(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
	for (;;) {
		RTHOOK(19);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tr2 = *(EIF_REFERENCE *)(RTCW(loc2));
		tb2 = (nstcall = 1, F261_3284(RTCW(tr1), tr2));
		if (tb2) break;
		RTHOOK(20);
		loc4--;
		RTHOOK(21);
		(nstcall = 1, F1125_8938(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
		RTHOOK(22);
		loc5++;
	}
	
	RTHOOK(23);
	(nstcall = 1, F1125_8939(RTCW(loc2), ((EIF_INTEGER_32) 1L)));
	RTHOOK(24);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
	tr2 = *(EIF_REFERENCE *)(RTCW(loc2));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_0_0_1_);
	(nstcall = 1, F863_5707(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(25);
	if (loc13) {
		RTHOOK(26);
		loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc9 - (EIF_INTEGER_32) (loc10 + loc4));
		RTHOOK(27);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc7 >= ti4_1);
		RTHOOK(28);
		loc15 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc7 < ((EIF_INTEGER_32) 0L));
		RTHOOK(29);
		loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc15 || loc14);
	} else {
		RTHOOK(30);
		loc14 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(31);
		loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTHOOK(32);
	if ((EIF_BOOLEAN) !loc12) {
		RTHOOK(33);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
		(nstcall = 1, F863_5701(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
		RTHOOK(34);
		tr1 = *(EIF_REFERENCE *)(RTCW(Result));
		(nstcall = 1, F863_5707(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	}
	for (;;) {
		RTHOOK(35);
		if (loc12) break;
		for (;;) {
			RTHOOK(36);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
			tr2 = *(EIF_REFERENCE *)(RTCW(loc1));
			tb3 = (nstcall = 1, F261_3285(RTCW(tr1), tr2));
			if (tb3) break;
			RTHOOK(37);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			tr2 = *(EIF_REFERENCE *)(RTCW(loc2));
			(nstcall = 1, F863_5714(RTCW(tr1), tr2));
			RTHOOK(38);
			tr1 = *(EIF_REFERENCE *)(RTCW(Result));
			ti4_1 = (nstcall = 1, F1125_8894(RTCW(Result)));
			(nstcall = 1, F863_5713(RTCW(tr1), ((EIF_INTEGER_32) 1L), ti4_1));
		}
		RTHOOK(39);
		switch (arg3) {
			case 1L:
				RTHOOK(40);
				tb4 = '\01';
				tb5 = '\0';
				tb6 = (nstcall = 1, F1125_8882(RTCW(loc1)));
				if (tb6) {
					tb5 = (EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 0L));
				}
				if (!tb5) {
					ti4_1 = (nstcall = 1, F1125_8894(RTCW(Result)));
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_3_2_0_0_);
					tb4 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
				}
				if (tb4) {
					RTHOOK(41);
					loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				break;
			default:
				RTHOOK(42);
				if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) {
					RTHOOK(43);
					loc12 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
				break;
		}
		RTHOOK(44);
		if ((EIF_BOOLEAN) !loc12) {
			RTHOOK(45);
			tr1 = *(EIF_REFERENCE *)(RTCW(Result));
			(nstcall = 1, F863_5709(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
			RTHOOK(46);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
			(nstcall = 1, F863_5709(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
			RTHOOK(47);
			loc4++;
			RTHOOK(48);
			loc7--;
		}
	}
	RTHOOK(49);
	if (loc14) {
		RTHOOK(50);
		(nstcall = 1, F1125_8929(RTCW(Result)));
		RTHOOK(51);
		tr1 = RTMS_EX_H("Division impossible",19,1915827557);
		(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 3L), tr1));
	} else {
		RTHOOK(52);
		loc3 = (EIF_REFERENCE) loc1;
		RTHOOK(53);
		switch (arg3) {
			case 1L:
				RTHOOK(54);
				tb4 = (nstcall = 1, F1125_8882(RTCW(loc3)));
				if (tb4) {
					RTHOOK(55);
					if ((EIF_BOOLEAN) (loc4 < ((EIF_INTEGER_32) 0L))) {
						RTHOOK(56);
						tr1 = RTMS_EX_H("Artificial rounding in division where remainder is zero",55,1295062383);
						(nstcall = 1, F1126_9000(RTCW(arg2), ((EIF_INTEGER_32) 6L), tr1));
					}
				} else {
					RTHOOK(57);
					tr1 = *(EIF_REFERENCE *)(RTCW(Result));
					(nstcall = 1, F863_5709(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
					RTHOOK(58);
					loc4++;
					RTHOOK(59);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
					tr2 = *(EIF_REFERENCE *)(RTCW(loc3));
					(nstcall = 1, F863_5714(RTCW(tr1), tr2));
					RTHOOK(60);
					tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
					tr2 = *(EIF_REFERENCE *)(RTCW(loc3));
					ti4_1 = (nstcall = 1, F863_5703(RTCW(tr1), tr2));
					switch (ti4_1) {
						case 0L:
							RTHOOK(61);
							tr1 = *(EIF_REFERENCE *)(RTCW(Result));
							(nstcall = 1, F863_5702(RTCW(tr1), ((EIF_INTEGER_32) 5L), ((EIF_INTEGER_32) 0L)));
							break;
						case 1L:
							RTHOOK(62);
							tr1 = *(EIF_REFERENCE *)(RTCW(Result));
							(nstcall = 1, F863_5702(RTCW(tr1), ((EIF_INTEGER_32) 4L), ((EIF_INTEGER_32) 0L)));
							break;
						default:
							RTHOOK(63);
							tr1 = *(EIF_REFERENCE *)(RTCW(Result));
							(nstcall = 1, F863_5702(RTCW(tr1), ((EIF_INTEGER_32) 6L), ((EIF_INTEGER_32) 0L)));
							break;
					}
				}
				RTHOOK(64);
				tb4 = (nstcall = 1, F1125_8882(RTCW(loc1)));
				if (tb4) {
					RTHOOK(65);
					(nstcall = 1, F1125_8920(RTCW(Result), (EIF_INTEGER_32) (loc9 - (EIF_INTEGER_32) (loc10 + loc4))));
				} else {
					RTHOOK(66);
					(nstcall = 1, F1125_8920(RTCW(Result), (EIF_INTEGER_32) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) - (EIF_INTEGER_32) (loc10 + loc4))));
				}
				break;
			case 2L:
				RTHOOK(67);
				(nstcall = 1, F1125_8920(RTCW(Result), ((EIF_INTEGER_32) 0L)));
				break;
			default:
				RTHOOK(68);
				Result = (EIF_REFERENCE) loc3;
				RTHOOK(69);
				if (loc15) {
					RTHOOK(70);
					Result = RTLNSMART(dftype);
					(nstcall = -1, F1125_8847(RTCW(Result), Current));
				} else {
					RTHOOK(71);
					ti4_1 = eif_min_int32 (loc9,loc10);
					loc8 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(72);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc2)+ _LNGOFF_1_1_0_0_);
					ti4_3 = eif_min_int32 (ti4_1,ti4_2);
					loc11 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 - ti4_3);
					RTHOOK(73);
					tb4 = (nstcall = 1, F1125_8882(RTCW(Result)));
					if (tb4) {
						RTHOOK(74);
						if (loc16) {
							RTHOOK(75);
							loc8 = (EIF_INTEGER_32) loc9;
						} else {
							RTHOOK(76);
							if ((EIF_BOOLEAN) (loc8 >= ((EIF_INTEGER_32) 0L))) {
								RTHOOK(77);
								loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
							} else {
								RTHOOK(78);
								loc8 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
								loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc8 - (EIF_INTEGER_32) (loc10 + loc4));
							}
						}
					} else {
						RTHOOK(79);
						if ((EIF_BOOLEAN)(loc11 != ((EIF_INTEGER_32) 0L))) {
							RTHOOK(80);
							tr1 = *(EIF_REFERENCE *)(RTCW(Result));
							ti4_1 = eif_abs_int32 (loc11);
							(nstcall = 1, F863_5710(RTCW(tr1), ti4_1));
						}
					}
					RTHOOK(81);
					(nstcall = 1, F1125_8920(RTCW(Result), loc8));
				}
				break;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(82);
		RTCT("divide_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(83);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.do_rescale_special */
void F1125_8963 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("do_rescale_special", 1124, Current, 0, 1, 15892);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F1125_8878(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_constant_infinity", EX_PRE);
		tr1 = RTOUCR(389,(nstcall = 0, F1125_8867), (Current));
		RTTE((EIF_BOOLEAN)(Current != tr1), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_constant_negative_infinity", EX_PRE);
		tr1 = RTOUCR(390,(nstcall = 0, F1125_8868), (Current));
		RTTE((EIF_BOOLEAN)(Current != tr1), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("not_constant_nan", EX_PRE);
		tr1 = RTOUCR(387,(nstcall = 0, F1125_8865), (Current));
		RTTE((EIF_BOOLEAN)(Current != tr1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("not_constant_snan", EX_PRE);
		tr1 = RTOUCR(388,(nstcall = 0, F1125_8866), (Current));
		RTTE((EIF_BOOLEAN)(Current != tr1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	if ((nstcall = 0, F1125_8880(Current))) {
	} else {
		RTHOOK(7);
		if ((nstcall = 0, F1125_8879(Current))) {
			RTHOOK(8);
			tr1 = RTMS_EX_H("sNaN as operand in rescale",26,767991653);
			(nstcall = 1, F1126_9000(RTCW(arg1), ((EIF_INTEGER_32) 3L), tr1));
			RTHOOK(9);
			(nstcall = 0, F1125_8929(Current));
		} else {
			RTHOOK(10);
			if ((nstcall = 0, F1125_8881(Current))) {
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL}.to_string_general */
EIF_REFERENCE F1125_8964 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("to_string_general", 1124, Current, 9, 1, 15893);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(Result), ((EIF_INTEGER_32) 0L)));
	RTHOOK(2);
	if ((nstcall = 0, F1125_8878(Current))) {
		RTHOOK(3);
		if ((nstcall = 0, F1125_8880(Current))) {
			RTHOOK(4);
			tr1 = RTMS_EX_H("NaN",3,5136718);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		} else {
			RTHOOK(5);
			if ((nstcall = 0, F1125_8879(Current))) {
				RTHOOK(6);
				tr1 = RTMS_EX_H("sNaN",4,1934516558);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
			} else {
				RTHOOK(7);
				if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
					RTHOOK(8);
					tr1 = RTMS_EX_H("-",1,45);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
				}
				RTHOOK(9);
				tr1 = RTMS_EX_H("Infinity",8,1600908409);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
			}
		}
	} else {
		RTHOOK(10);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_1_0_)) {
			RTHOOK(11);
			tr1 = RTMS_EX_H("-",1,45);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
		}
		RTHOOK(12);
		loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		ti4_1 = (nstcall = 0, F1125_8894(Current));
		(nstcall = -1, F1079_7731(RTCW(loc1), ti4_1));
		RTHOOK(13);
		loc3 = (nstcall = 0, F1125_8894(Current));
		loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L));
		for (;;) {
			RTHOOK(14);
			if ((EIF_BOOLEAN) (loc3 < ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(15);
			tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
			ti4_1 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_2 = (nstcall = 1, F863_5693(RTCW(tr2), loc3));
			tc1 = (nstcall = 1, F350_4651(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc1))-1080])(loc1, tc1));
			RTHOOK(16);
			loc3--;
		}
		RTHOOK(17);
		loc5 = (nstcall = 0, F1125_8869(Current));
		RTHOOK(18);
		loc9 = '\0';
		if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) <= ((EIF_INTEGER_32) 0L))) {
			loc9 = (EIF_BOOLEAN) ((nstcall = 0, F1125_8869(Current)) >= ((EIF_INTEGER_32) -6L));
		}
		loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc9;
		RTHOOK(19);
		if (loc9) {
			RTHOOK(20);
			loc6 = (EIF_INTEGER_32) loc5;
			RTHOOK(21);
			if (arg1) {
				for (;;) {
					RTHOOK(22);
					if ((EIF_BOOLEAN)((EIF_INTEGER_32) (loc6 % ((EIF_INTEGER_32) 3L)) == ((EIF_INTEGER_32) 0L))) break;
					RTHOOK(23);
					loc6--;
				}
				RTHOOK(24);
				loc7 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc5 - loc6);
				RTHOOK(25);
				if ((EIF_BOOLEAN) !(nstcall = 0, F1125_8882(Current))) {
					RTHOOK(26);
					loc8 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + loc7);
					for (;;) {
						RTHOOK(27);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN) (ti4_1 >= loc8)) break;
						RTHOOK(28);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc1))-1080])(loc1, (EIF_CHARACTER_8) '0'));
					}
				} else {
					RTHOOK(29);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				}
			} else {
				RTHOOK(30);
				loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(31);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (ti4_2 > loc8)) {
				RTHOOK(32);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(loc1))-1079])(loc1, ((EIF_INTEGER_32) 1L), loc8));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
				RTHOOK(33);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '.'));
				RTHOOK(34);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(loc1))-1079])(loc1, (EIF_INTEGER_32) (loc8 + ((EIF_INTEGER_32) 1L)), ti4_2));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
			} else {
				RTHOOK(35);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, loc1));
			}
			RTHOOK(36);
			if ((EIF_BOOLEAN)(loc6 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(37);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) 'E'));
				RTHOOK(38);
				if ((EIF_BOOLEAN) (loc5 < ((EIF_INTEGER_32) 0L))) {
					RTHOOK(39);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '-'));
				} else {
					RTHOOK(40);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '+'));
				}
				RTHOOK(41);
				ti4_2 = eif_abs_int32 (loc6);
				tr1 = eif_out__i4_s1(ti4_2);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
			}
		} else {
			RTHOOK(42);
			if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) < ((EIF_INTEGER_32) 0L))) {
				RTHOOK(43);
				ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_);
				ti4_3 = eif_abs_int32 (ti4_2);
				loc4 = (EIF_INTEGER_32) ti4_3;
				RTHOOK(44);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (loc4 > ti4_2)) {
					RTHOOK(45);
					loc2 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
					(nstcall = -1, F1079_7732(RTCW(loc2), (EIF_CHARACTER_8) '0', (EIF_INTEGER_32) (loc4 - ti4_2)));
					RTHOOK(46);
					tr1 = RTMS_EX_H("0.",2,12334);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					RTHOOK(47);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, loc2));
					RTHOOK(48);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, loc1));
				} else {
					RTHOOK(49);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(loc4 == ti4_2)) {
						RTHOOK(50);
						tr1 = RTMS_EX_H("0.",2,12334);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
						RTHOOK(51);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, loc1));
					} else {
						RTHOOK(52);
						ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
						tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(loc1))-1079])(loc1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (ti4_2 - loc4)));
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
						RTHOOK(53);
						tr1 = RTMS_EX_H(".",1,46);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
						RTHOOK(54);
						ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
						ti4_3 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
						tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(loc1))-1079])(loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - loc4) + ((EIF_INTEGER_32) 1L)), ti4_3));
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					}
				}
			} else {
				RTHOOK(55);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, loc1));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(56);
		RTCT("to_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(57);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL}.parser */
static EIF_REFERENCE F1125_8965_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(379)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("parser", 1124, Current, 0, 0, 15770);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(297, 0x01).id, 297, _OBJSIZ_2_2_0_10_0_0_0_1_);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("parser_not_void", EX_POST);
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

EIF_REFERENCE F1125_8965 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(379,F1125_8965_body,(Current));
}

/* {MA_DECIMAL}.once_zero */
static EIF_REFERENCE F1125_8966_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(385)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("once_zero", 1124, Current, 0, 0, 15771);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8848(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("zero_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_zero", EX_POST);
		tb1 = (nstcall = 1, F1125_8882(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1125_8966 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(385,F1125_8966_body,(Current));
}

/* {MA_DECIMAL}.once_one */
static EIF_REFERENCE F1125_8967_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(383)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("once_one", 1124, Current, 0, 0, 15772);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8849(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("one_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("is_one", EX_POST);
		tb1 = (nstcall = 1, F1125_8883(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1125_8967 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(383,F1125_8967_body,(Current));
}

/* {MA_DECIMAL}.special_coefficient */
static EIF_REFERENCE F1125_8968_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(377)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("special_coefficient", 1124, Current, 0, 0, 15773);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(862, 0x01).id, 862, _OBJSIZ_1_0_0_2_0_0_0_0_);
	(nstcall = -1, F863_5691(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F863_5702(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("special_coefficient_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("zero", EX_POST);
		tb1 = (nstcall = 1, F261_3280(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1125_8968 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(377,F1125_8968_body,(Current));
}

/* {MA_DECIMAL}._invariant */
void F1125_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTEAINV(l_feature_name, 397, Current, 0, 0);
	RTIT("special_values", Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_1_) <= ((EIF_INTEGER_32) 3L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("coefficient_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("special_share_coefficient", Current);
	tb1 = '\01';
	if ((nstcall = 0, F1125_8878(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTOUCR(377,(nstcall = 0, F1125_8968), (Current));
		tb1 = (EIF_BOOLEAN)(tr1 == tr2);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("special_has_exponent_zero", Current);
	tb1 = '\01';
	if ((nstcall = 0, F1125_8878(Current))) {
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_1_0_0_) == ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("special_coefficient_is_zero", Current);
	tr1 = RTOUCR(377,(nstcall = 0, F1125_8968), (Current));
	tb1 = (nstcall = 1, F261_3280(RTCW(tr1)));
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit398 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
