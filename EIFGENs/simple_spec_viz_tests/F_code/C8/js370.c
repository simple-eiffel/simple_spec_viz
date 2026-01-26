/*
 * Code for class JSON_DECIMAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js370.h"
#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_DECIMAL}.make_decimal */
void F1093_8204 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA("make_decimal", 1092, Current, 0, 1, 15120);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("decimal_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1098_8229(RTCW(arg1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("item_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = (nstcall = 1, F1098_8229(RTCW(arg1)));
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
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

/* {JSON_DECIMAL}.make_from_string */
void F1093_8205 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_string", 1092, Current, 0, 1, 15121);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("value_is_numeric", EX_PRE);
		tb1 = (nstcall = 0, F1093_8207(Current, arg1));
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
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("item_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, arg1));
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

/* {JSON_DECIMAL}.is_real */
EIF_BOOLEAN F1093_8206 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {JSON_DECIMAL}.is_valid_number_string */
EIF_BOOLEAN F1093_8207 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("is_valid_number_string", 1092, Current, 4, 1, 15123);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			tb1 = (EIF_BOOLEAN) !Result;
		}
		if (tb1) break;
		RTHOOK(4);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
		loc2 = (EIF_CHARACTER_8) tc1;
		RTHOOK(5);
		tb2 = EIF_TEST(isdigit(loc2));
		if (tb2) {
			RTHOOK(6);
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			if ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '.')) {
				RTHOOK(8);
				if (loc4) {
					RTHOOK(9);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
				RTHOOK(10);
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			} else {
				RTHOOK(11);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '-') || (EIF_BOOLEAN)(loc2 == (EIF_CHARACTER_8) '+'))) {
					RTHOOK(12);
					if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 1L))) {
						RTHOOK(13);
						Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
					}
				} else {
					RTHOOK(14);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			}
		}
		RTHOOK(15);
		loc1++;
	}
	RTHOOK(16);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (Result && loc3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit370 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
