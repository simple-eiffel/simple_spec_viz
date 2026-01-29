/*
 * Code for class SED_OBJECTS_TABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se297.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F891_6018
static EIF_INTEGER_32 inline_F891_6018 (EIF_POINTER arg1)
{
	return (EIF_INTEGER_32) (0x7FFFFFF & (((rt_uint_ptr) arg1) / sizeof(rt_uint_ptr)));
	;
}
#define INLINE_F891_6018
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_OBJECTS_TABLE}.make */
void F891_6014 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 890, Current, 0, 1, 10395);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_not_too_large", EX_PRE);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2147483647L);
		RTTE((EIF_BOOLEAN) (arg1 <= tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (EIF_INTEGER_32) arg1;
	(nstcall = 0, F888_5902(Current, ti4_1));
	RTHOOK(3);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("last_index_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) == (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
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

/* {SED_OBJECTS_TABLE}.index */
EIF_NATURAL_32 F891_6015 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc6 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_POINTER loc10 = (EIF_POINTER) 0;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc8);
	RTLR(3,loc9);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("index", 890, Current, 10, 1, 10396);
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
		RTCT("an_obj_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc10 = (EIF_POINTER) arg1;
	RTHOOK(3);
	loc8 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	RTHOOK(4);
	loc9 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	RTHOOK(5);
	loc6 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_3_);
	RTHOOK(6);
	loc7 = (EIF_INTEGER_32) loc6;
	RTHOOK(7);
	loc1 = (nstcall = 0, F891_6017(Current, loc10));
	RTHOOK(8);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + (EIF_INTEGER_32) (loc1 % (EIF_INTEGER_32) (loc6 - ((EIF_INTEGER_32) 1L))));
	RTHOOK(9);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 % loc6) - loc2);
	for (;;) {
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc7 == ((EIF_INTEGER_32) 0L))) break;
		RTHOOK(11);
		loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc5 + loc2) % loc6);
		RTHOOK(12);
		ti4_1 = (nstcall = 1, F900_6139(RTCW(loc9), loc5));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(13);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (loc3 >= ((EIF_INTEGER_32) 0L))) {
			tp1 = (nstcall = 1, F905_6139(RTCW(loc8), loc3));
			tb1 = (EIF_BOOLEAN)(tp1 == loc10);
		}
		if (tb1) {
			RTHOOK(14);
			loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(15);
			tr1 = *(EIF_REFERENCE *)(Current);
			tu4_1 = (nstcall = 1, F906_6139(RTCW(tr1), loc3));
			Result = (EIF_NATURAL_32) tu4_1;
		} else {
			RTHOOK(16);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) -1L))) {
				RTHOOK(17);
				loc7 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				RTHOOK(18);
				Result = *(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_);
				Result = (EIF_NATURAL_32) (EIF_NATURAL_32) (Result + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L));
				RTHOOK(19);
				*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) Result;
				RTHOOK(20);
				ti4_1 = (nstcall = 1, F905_6149(loc8));
				loc4 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(21);
				ti4_1 = (nstcall = 1, F905_6150(loc8));
				if ((EIF_BOOLEAN) (loc4 < ti4_1)) {
					RTHOOK(22);
					(nstcall = 1, F900_6154(RTCW(loc9), loc4, loc5));
					RTHOOK(23);
					tr1 = *(EIF_REFERENCE *)(Current);
					(nstcall = 1, F906_6155(RTCW(tr1), Result, loc4));
					RTHOOK(24);
					(nstcall = 1, F905_6155(RTCW(loc8), arg1, loc4));
					RTHOOK(25);
					(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_4_3_0_9_))++;
				} else {
					RTHOOK(26);
					(nstcall = 0, F888_5948(Current, Result, loc10));
				}
			}
		}
		RTHOOK(27);
		loc7--;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {SED_OBJECTS_TABLE}.wipe_out */
void F891_6016 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wipe_out", 890, Current, 0, 0, 10397);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_NATURAL_32 *)(Current+ _LNGOFF_4_3_0_0_) = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(2);
	(nstcall = 0, F888_5956(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SED_OBJECTS_TABLE}.hash_code_of */
EIF_INTEGER_32 F891_6017 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("hash_code_of", 890, Current, 0, 1, 10398);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F891_6018(Current, arg1));
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

/* {SED_OBJECTS_TABLE}.c_hash_code_of */
EIF_INTEGER_32 F891_6018 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("c_hash_code_of", 890, Current, 0, 1, 10399);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F891_6018 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_OBJECTS_TABLE}._invariant */
void F891_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 296, Current, 0, 0);
	RTIT("not_is_dotnet", Current);
	if ((EIF_BOOLEAN) !(nstcall = 0, F263_3306(Current))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit297 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
