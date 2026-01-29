/*
 * Code for class DIRECTORY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "di263.h"
#include "eif_dir.h"
#include "eif_helpers.h"
#include "eif_file.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DIRECTORY}.make */
void F313_4362 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make", 312, Current, 0, 1, 4414);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F313_4363(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DIRECTORY}.make_with_name */
void F313_4363 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_name", 312, Current, 0, 1, 4415);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F313_4399(Current, arg1));
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DIRECTORY}.make_with_path */
void F313_4364 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make_with_path", 312, Current, 0, 1, 4416);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F965_6317(RTCW(arg1)));
	(nstcall = 0, F313_4362(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.make_open_read */
void F313_4365 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_open_read", 312, Current, 0, 1, 4417);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F313_4362(Current, arg1));
	RTHOOK(3);
	(nstcall = 0, F313_4372(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DIRECTORY}.create_dir */
void F313_4366 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("create_dir", 312, Current, 0, 0, 4418);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("physical_not_exists", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F313_4410(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.recursive_create_dir */
void F313_4367 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLIU(8);
	
	RTEAA("recursive_create_dir", 312, Current, 5, 0, 4419);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F313_4368(Current));
	tr2 = (nstcall = 1, F965_6299(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(312, 0x01).id, 312, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F313_4364(RTCW(loc1), loc3));
	RTHOOK(3);
	tb1 = (nstcall = 1, F313_4387(RTCW(loc1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,964,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			loc2 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F867_5785(RTCW(loc2), ((EIF_INTEGER_32) 10L)));
		RTHOOK(5);
		tr1 = (nstcall = 1, F965_6294(RTCW(loc3)));
		loc4 = (EIF_REFERENCE) tr1;
		for (;;) {
			RTHOOK(6);
			tb1 = '\01';
			tb2 = (nstcall = 1, F313_4387(RTCW(loc1)));
			if (!tb2) {
				tb1 = (EIF_BOOLEAN)(loc4 == NULL);
			}
			if (tb1) break;
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc2))-663])(loc2, loc3));
			RTHOOK(8);
			tr1 = (nstcall = 1, F965_6293(RTCW(loc3)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			tr1 = (nstcall = 1, F965_6294(RTCW(loc3)));
			loc4 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			(nstcall = 1, F313_4364(RTCW(loc1), loc3));
		}
		RTHOOK(11);
		(nstcall = 1, F867_5817(RTCW(loc2)));
		for (;;) {
			RTHOOK(12);
			tb2 = (nstcall = 1, F827_5529(RTCW(loc2)));
			if (tb2) break;
			RTHOOK(13);
			tr1 = (nstcall = 1, F867_5790(RTCW(loc2)));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(14);
			(nstcall = 1, F867_5819(RTCW(loc2)));
			RTHOOK(15);
			(nstcall = 1, F313_4364(RTCW(loc1), loc3));
			RTHOOK(16);
			(nstcall = 1, F313_4366(RTCW(loc1)));
			RTHOOK(17);
			tb3 = (nstcall = 1, F313_4387(RTCW(loc1)));
			if ((EIF_BOOLEAN) !tb3) {
				RTHOOK(18);
				loc5 = RTLNS(eif_new_type(199, 0x01).id, 199, _OBJSIZ_5_1_0_3_0_0_0_0_);
				RTHOOK(19);
				tr1 = RTMS32_EX_H("C\000\000\000a\000\000\000n\000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000c\000\000\000r\000\000\000e\000\000\000a\000\000\000t\000\000\000e\000\000\000:\000\000\000 \000\000\000",15,2053611808);
				tr2 = (nstcall = 1, F965_6317(RTCW(loc3)));
				tr2 = (nstcall = 1, F1085_8031(tr1, tr2));
				(nstcall = 1, F178_2382(RTCW(loc5), tr2));
				RTHOOK(20);
				(nstcall = 1, F178_2367(RTCW(loc5)));
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("physical_exists", EX_POST);
		if ((nstcall = 0, F313_4387(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.path */
EIF_REFERENCE F313_4368 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("path", 312, Current, 0, 0, 4420);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = -1, F965_6282(RTCW(Result), tp1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("entry_not_empty", EX_POST);
		tb1 = (nstcall = 1, F965_6286(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {DIRECTORY}.readentry */
void F313_4369 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("readentry", 312, Current, 0, 0, 4421);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F313_4385(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp1 = (nstcall = 0, F313_4414(Current, tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) = (EIF_POINTER) tp1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(4);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	} else {
		RTHOOK(5);
		tr1 = RTOUCR(142,(nstcall = 0, F313_4409), (Current));
		tr2 = (nstcall = 1, F315_4461(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_)));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.name */
EIF_REFERENCE F313_4370 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
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
	
	RTEAA("name", 312, Current, 0, 0, 4422);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F1076_7657(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("name_not_empty", EX_POST);
		tb1 = (nstcall = 1, F670_4976(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
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

/* {DIRECTORY}.has_entry */
EIF_BOOLEAN F313_4371 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc4);
	RTLIU(7);
	
	RTEAA("has_entry", 312, Current, 4, 1, 4423);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("string_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(312, 0x01).id, 312, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F313_4365(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(3);
	(nstcall = 1, F313_4374(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F313_4369(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		tb1 = '\01';
		if (!Result) {
			tb1 = (EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)));
		}
		if (tb1) break;
		RTHOOK(7);
		loc3 = arg1;
		loc3 = RTRV(eif_new_type(1078, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(8);
			tr1 = RTOUCR(142,(nstcall = 0, F313_4409), (Current));
			tr2 = (nstcall = 1, F315_4461(RTCW(tr1), loc2));
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6152[Dtype(RTCW(arg1))-1079])(arg1, tr2));
			Result = (EIF_BOOLEAN) tb2;
		} else {
			RTHOOK(9);
			tr1 = RTOUCR(142,(nstcall = 0, F313_4409), (Current));
			tr2 = (nstcall = 1, F315_4460(RTCW(tr1), loc2));
			loc4 = tr2;
			if ((EIF_TRUE)) {
				RTHOOK(10);
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6152[Dtype(RTCW(arg1))-1079])(arg1, loc4));
				Result = (EIF_BOOLEAN) tb2;
			}
		}
		RTHOOK(11);
		(nstcall = 1, F313_4369(RTCW(loc1)));
		RTHOOK(12);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(13);
	(nstcall = 1, F313_4373(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.open_read */
void F313_4372 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("open_read", 312, Current, 0, 0, 4424);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, F313_4411(Current, tp1));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.close */
void F313_4373 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("close", 312, Current, 0, 0, 4425);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F313_4385(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	(nstcall = 0, F313_4413(Current, tp1));
	RTHOOK(3);
	tp1 = (nstcall = 0, F1_33(Current));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.start */
void F313_4374 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("start", 312, Current, 0, 0, 4426);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_opened", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F313_4385(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp1 = (nstcall = 0, F313_4412(Current, tp1, tp2));
	*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.change_name */
void F313_4375 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("change_name", 312, Current, 1, 1, 4427);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(142,(nstcall = 0, F313_4409), (Current));
	tr2 = (nstcall = 1, F315_4459(RTCW(tr1), arg1, NULL));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F313_4420(Current, tp1, tp2));
	RTHOOK(5);
	(nstcall = 0, F313_4399(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("name_changed", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DIRECTORY}.rename_path */
void F313_4376 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("rename_path", 312, Current, 1, 1, 4428);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("new_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("new_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F965_6286(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("file_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = (nstcall = 1, F965_6319(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F313_4420(Current, tp1, tp2));
	RTHOOK(6);
	tr1 = (nstcall = 1, F965_6317(RTCW(arg1)));
	(nstcall = 0, F313_4399(Current, tr1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("name_changed", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, F965_6317(RTCW(arg1)));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
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

/* {DIRECTORY}.count */
EIF_INTEGER_32 F313_4377 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	
	RTEAA("count", 312, Current, 1, 0, 4429);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTLNS(eif_new_type(312, 0x01).id, 312, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F313_4365(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(3);
	(nstcall = 1, F313_4374(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F313_4369(RTCW(loc1)));
	for (;;) {
		RTHOOK(5);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		if ((EIF_BOOLEAN)(tp1 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(6);
		Result++;
		RTHOOK(7);
		(nstcall = 1, F313_4369(RTCW(loc1)));
	}
	RTHOOK(8);
	(nstcall = 1, F313_4373(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.entries */
EIF_REFERENCE F313_4378 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("entries", 312, Current, 2, 0, 4430);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(312, 0x01).id, 312, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F313_4365(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,964,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F313_4374(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F313_4369(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(7);
		tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F965_6282(RTCW(tr1), loc2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		RTHOOK(8);
		(nstcall = 1, F313_4369(RTCW(loc1)));
		RTHOOK(9);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(10);
	(nstcall = 1, F313_4373(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.resolved_entries */
EIF_REFERENCE F313_4379 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("resolved_entries", 312, Current, 3, 0, 4431);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(312, 0x01).id, 312, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F313_4365(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,964,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F313_4374(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F313_4369(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(6);
	loc3 = (nstcall = 0, F313_4368(Current));
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F965_6282(RTCW(tr1), loc2));
		tr1 = (nstcall = 1, F965_6306(RTCW(loc3), tr1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		RTHOOK(9);
		(nstcall = 1, F313_4369(RTCW(loc1)));
		RTHOOK(10);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(11);
	(nstcall = 1, F313_4373(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.linear_representation */
EIF_REFERENCE F313_4380 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("linear_representation", 312, Current, 2, 0, 4432);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(312, 0x01).id, 312, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F313_4365(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F313_4374(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F313_4369(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(7);
		tr1 = RTOUCR(142,(nstcall = 0, F313_4409), (Current));
		tr2 = (nstcall = 1, F315_4461(RTCW(tr1), loc2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr2));
		RTHOOK(8);
		(nstcall = 1, F313_4369(RTCW(loc1)));
		RTHOOK(9);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(10);
	(nstcall = 1, F313_4373(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.linear_representation_32 */
EIF_REFERENCE F313_4381 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc3);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("linear_representation_32", 312, Current, 3, 0, 4433);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(312, 0x01).id, 312, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F313_4365(RTCW(loc1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1084,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(Result), ((EIF_INTEGER_32) 16L)));
	RTHOOK(3);
	(nstcall = 1, F313_4374(RTCW(loc1)));
	RTHOOK(4);
	(nstcall = 1, F313_4369(RTCW(loc1)));
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
	loc2 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == (nstcall = 0, F1_33(Current)))) break;
		RTHOOK(7);
		loc3 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F965_6282(RTCW(loc3), loc2));
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = (nstcall = 1, F965_6317(RTCW(loc3)));
		(nstcall = -1, F1083_7899(RTCW(tr1), tr2));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		RTHOOK(9);
		(nstcall = 1, F313_4369(RTCW(loc1)));
		RTHOOK(10);
		tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_3_0_0_1_0_1_);
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(11);
	(nstcall = 1, F313_4373(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.last_entry_32 */
EIF_REFERENCE F313_4382 (EIF_REFERENCE Current)
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
	
	RTEAA("last_entry_32", 312, Current, 0, 0, 4434);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(2);
		tr1 = RTOUCR(142,(nstcall = 0, F313_4409), (Current));
		tr2 = (nstcall = 1, F315_4460(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.last_entry_8 */
EIF_REFERENCE F313_4383 (EIF_REFERENCE Current)
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
	
	RTEAA("last_entry_8", 312, Current, 0, 0, 4435);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_) != (nstcall = 0, F1_33(Current)))) {
		RTHOOK(2);
		tr1 = RTOUCR(142,(nstcall = 0, F313_4409), (Current));
		tr2 = (nstcall = 1, F315_4461(RTCW(tr1), *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.lastentry */
static EIF_REFERENCE F313_4384_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastentry", 312, Current, 0, 0, 4436);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F313_4384 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		if (RTAT(eif_new_type(1080, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F313_4384_body (Current));
			*(EIF_REFERENCE *)(Current) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.is_closed */
EIF_BOOLEAN F313_4385 (EIF_REFERENCE Current)
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
	
	RTEAA("is_closed", 312, Current, 0, 0, 4437);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_empty */
EIF_BOOLEAN F313_4386 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 312, Current, 0, 0, 4438);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F313_4377(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.exists */
EIF_BOOLEAN F313_4387 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("exists", 312, Current, 0, 0, 4439);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F313_4416(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_readable */
EIF_BOOLEAN F313_4388 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_readable", 312, Current, 0, 0, 4440);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F313_4417(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_executable */
EIF_BOOLEAN F313_4389 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_executable", 312, Current, 0, 0, 4441);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F313_4418(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.is_writable */
EIF_BOOLEAN F313_4390 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_writable", 312, Current, 0, 0, 4442);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	Result = (nstcall = 0, F313_4419(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.delete */
void F313_4391 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("delete", 312, Current, 0, 0, 4443);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("empty_directory", EX_PRE);
		RTTE((nstcall = 0, F313_4386(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCV((nstcall = 0, F313_4401(Current)))+ _PTROFF_0_1_0_1_0_0_);
	(nstcall = 0, F313_4415(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.delete_content */
void F313_4392 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("delete_content", 312, Current, 0, 0, 4444);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F313_4394(Current, NULL, NULL, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.recursive_delete */
void F313_4393 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("recursive_delete", 312, Current, 0, 0, 4445);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F313_4392(Current));
	RTHOOK(3);
	if ((nstcall = 0, F313_4386(Current))) {
		RTHOOK(4);
		(nstcall = 0, F313_4391(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.delete_content_with_action */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F313_4394 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	RTED;
	EIF_REFERENCE EIF_VOLATILE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc6 = (EIF_POINTER) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 EIF_VOLATILE loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc9 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN EIF_VOLATILE loc10 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,loc9);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc5);
	RTLR(5,loc7);
	RTLR(6,loc1);
	RTLR(7,tr2);
	RTLR(8,loc4);
	RTLR(9,arg1);
	RTLR(10,arg2);
	RTLR(11,loc2);
	RTLR(12,saved_except);
	RTLIU(13);
	RTXSLS;
	
	RTEAA("delete_content_with_action", 312, Current, 10, 3, 4446);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_file_number", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1082,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = eif_min_int32 (arg3,((EIF_INTEGER_32) 1024L));
	(nstcall = -1, F867_5785(RTCW(tr1), ti4_1));
	loc9 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc3 = RTOUCR(142,(nstcall = 0, F313_4409), (Current));
	RTHOOK(5);
	(nstcall = 1, F315_4488(RTCW(loc3), (EIF_BOOLEAN) 0));
	RTHOOK(6);
	tr1 = RTLNS(eif_new_type(312, 0x01).id, 312, _OBJSIZ_3_0_0_1_0_2_0_0_);
	(nstcall = -1, F313_4365(RTCW(tr1), *(EIF_REFERENCE *)(Current + _REFACS_1_)));
	loc5 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	(nstcall = 1, F313_4374(RTCW(loc5)));
	RTHOOK(8);
	(nstcall = 1, F313_4369(RTCW(loc5)));
	RTHOOK(9);
	tp1 = *(EIF_POINTER *)(RTCW(loc5)+ _PTROFF_3_0_0_1_0_1_);
	loc6 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(10);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)(loc6 == (nstcall = 0, F1_33(Current)))) {
			tb1 = loc10;
		}
		if (tb1) break;
		RTHOOK(11);
		tr1 = (nstcall = 1, F315_4460(RTCW(loc3), loc6));
		loc7 = (EIF_REFERENCE) tr1;
		RTHOOK(12);
		tb2 = '\0';
		tr1 = RTOUCR(143,(nstcall = 0, F313_4406), (Current));
		tb3 = (nstcall = 1, F1076_7646(RTCW(loc7), tr1));
		if ((EIF_BOOLEAN) !tb3) {
			tr1 = RTOUCR(144,(nstcall = 0, F313_4407), (Current));
			tb3 = (nstcall = 1, F1076_7646(RTCW(loc7), tr1));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		if (tb2) {
			RTHOOK(13);
			tr1 = (nstcall = 0, F313_4368(Current));
			tr2 = (nstcall = 1, F965_6305(RTCW(tr1), loc7));
			loc1 = (EIF_REFERENCE) tr2;
			RTHOOK(14);
			tr1 = (nstcall = 1, F965_6317(RTCW(loc1)));
			(nstcall = 1, F315_4487(RTCW(loc3), tr1));
			RTHOOK(15);
			tb2 = *(EIF_BOOLEAN *)(RTCW(loc3)+ _CHROFF_3_0_);
			if (tb2) {
				RTHOOK(16);
				tb2 = '\0';
				tb3 = (nstcall = 1, F315_4468(RTCW(loc3)));
				if ((EIF_BOOLEAN) !tb3) {
					tb3 = (nstcall = 1, F315_4467(RTCW(loc3)));
					tb2 = tb3;
				}
				if (tb2) {
					RTHOOK(17);
					if ((EIF_BOOLEAN)(loc4 != NULL)) {
						RTHOOK(18);
						(nstcall = 1, F313_4364(RTCW(loc4), loc1));
					} else {
						RTHOOK(19);
						tr1 = RTLNS(eif_new_type(312, 0x01).id, 312, _OBJSIZ_3_0_0_1_0_2_0_0_);
						(nstcall = -1, F313_4364(RTCW(tr1), loc1));
						loc4 = (EIF_REFERENCE) tr1;
					}
					RTHOOK(20);
					(nstcall = 1, F313_4395(RTCW(loc4), arg1, arg2, arg3));
				} else {
					RTHOOK(21);
					tb2 = (nstcall = 1, F315_4474(RTCW(loc3)));
					if (tb2) {
						RTHOOK(22);
						if ((EIF_BOOLEAN)(loc2 != NULL)) {
							RTHOOK(23);
							(nstcall = 1, F743_5142(RTCW(loc2), loc1));
						} else {
							RTHOOK(24);
							tr1 = RTLNS(eif_new_type(743, 0x01).id, 743, _OBJSIZ_4_6_2_4_1_1_2_1_);
							(nstcall = -1, F743_5008(RTCW(tr1), loc1));
							loc2 = (EIF_REFERENCE) tr1;
						}
						RTHOOK(25);
						(nstcall = 1, F743_5140(RTCW(loc2)));
						RTHOOK(26);
						tr1 = (nstcall = 1, F965_6317(RTCW(loc1)));
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc9))-663])(loc9, tr1));
						RTHOOK(27);
						loc8++;
					}
				}
				RTHOOK(28);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc8 >= arg3))) {
					RTHOOK(29);
					if ((EIF_BOOLEAN)(arg1 != NULL)) {
						RTHOOK(30);
						(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
							*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc9);
					}
					RTHOOK(31);
					if ((EIF_BOOLEAN)(arg2 != NULL)) {
						RTHOOK(32);
						tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_0_))(
							*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_1_),
							*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_));
						tb3 = tb2;
						loc10 = (EIF_BOOLEAN) tb3;
					}
					RTHOOK(33);
					(nstcall = 1, F867_5844(RTCW(loc9)));
					RTHOOK(34);
					loc8 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
		RTHOOK(35);
		(nstcall = 1, F313_4369(RTCW(loc5)));
		RTHOOK(36);
		tp1 = *(EIF_POINTER *)(RTCW(loc5)+ _PTROFF_3_0_0_1_0_1_);
		loc6 = (EIF_POINTER) tp1;
	}
	RTHOOK(37);
	(nstcall = 1, F313_4373(RTCW(loc5)));
	RTHOOK(38);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc8 > ((EIF_INTEGER_32) 0L))) && (EIF_BOOLEAN)(arg1 != NULL))) {
		RTHOOK(39);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc9);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(40);
	tb2 = '\0';
	if ((EIF_BOOLEAN)(loc5 != NULL)) {
		tb3 = (nstcall = 1, F313_4385(RTCW(loc5)));
		tb2 = (EIF_BOOLEAN) !tb3;
	}
	if (tb2) {
		RTHOOK(41);
		(nstcall = 1, F313_4373(RTCW(loc5)));
	}
	/* NOTREACHED */
	RTE_EE
	RTHOOK(42);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {DIRECTORY}.recursive_delete_with_action */
void F313_4395 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("recursive_delete_with_action", 312, Current, 1, 3, 4447);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("directory_exists", EX_PRE);
		RTTE((nstcall = 0, F313_4387(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F313_4394(Current, arg1, arg2, arg3));
	RTHOOK(3);
	tb1 = '\01';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = (FUNCTION_CAST(EIF_BOOLEAN, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_3_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_));
		tb3 = tb2;
		tb1 = (EIF_BOOLEAN) !tb3;
	}
	if (tb1) {
		RTHOOK(4);
		(nstcall = 0, F313_4391(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(arg1 != NULL))) {
			RTHOOK(6);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1075,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
				loc1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
			}
			(nstcall = -1, F867_5785(RTCW(loc1), ((EIF_INTEGER_32) 1L)));
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(loc1))-663])(loc1, *(EIF_REFERENCE *)(Current + _REFACS_1_)));
			RTHOOK(8);
			(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_0_))(
				*(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_4_2_0_3_0_1_),
				*(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_), loc1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.dispose */
void F313_4396 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 312, Current, 0, 0, 4448);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, F313_4385(Current))) {
		RTHOOK(2);
		(nstcall = 0, F313_4373(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.directory_pointer */
EIF_POINTER F313_4397 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_0_);
}


/* {DIRECTORY}.last_entry_pointer */
EIF_POINTER F313_4398 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_3_0_0_1_0_1_);
}


/* {DIRECTORY}.set_name */
void F313_4399 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_name", 312, Current, 0, 1, 4451);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(2);
	tr1 = RTOUCR(142,(nstcall = 0, F313_4409), (Current));
	tr2 = (nstcall = 1, F315_4459(RTCW(tr1), arg1, *(EIF_REFERENCE *)(Current + _REFACS_2_)));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {DIRECTORY}.internal_name */
EIF_REFERENCE F313_4400 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DIRECTORY}.internal_name_pointer */
EIF_REFERENCE F313_4401 (EIF_REFERENCE Current)
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
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("internal_name_pointer", 312, Current, 1, 0, 4393);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		RTCT0("internal_name_pointer_set", EX_CHECK);
			RTCF0;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.internal_detachable_name_pointer */
static EIF_REFERENCE F313_4402_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("internal_detachable_name_pointer", 312, Current, 0, 0, 4394);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F313_4402 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(eif_new_type(302, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F313_4402_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {DIRECTORY}.mode */
EIF_INTEGER_32 F313_4403 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_0_0_0_);
}


/* {DIRECTORY}.current_directory_string */

EIF_REFERENCE F313_4406 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (143,RTMS_EX_H(".",1,46));
}

/* {DIRECTORY}.parent_directory_string */

EIF_REFERENCE F313_4407 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (144,RTMS_EX_H("..",2,11822));
}

/* {DIRECTORY}.directory_separator_string */
static EIF_REFERENCE F313_4408_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(145)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("directory_separator_string", 312, Current, 0, 0, 4400);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
	tc1 = RTOUCB(EIF_CHARACTER_8,88,(nstcall = 1, F74_991), (RTCW(tr1)));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, tc1));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F313_4408 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(145,F313_4408_body,(Current));
}

/* {DIRECTORY}.file_info */
static EIF_REFERENCE F313_4409_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(142)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("file_info", 312, Current, 0, 0, 4401);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(314, 0x01).id, 314, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F315_4442(RTCW(tr1)));
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

EIF_REFERENCE F313_4409 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(142,F313_4409_body,(Current));
}

/* {DIRECTORY}.file_mkdir */
void F313_4410 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_mkdir", 312, Current, 0, 1, 4402);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_mkdir((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.dir_open */
EIF_POINTER F313_4411 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dir_open", 312, Current, 0, 1, 4403);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_dir_open((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.dir_rewind */
EIF_POINTER F313_4412 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dir_rewind", 312, Current, 0, 2, 4404);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_dir_rewind((EIF_POINTER) arg1, (EIF_FILENAME) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.dir_close */
void F313_4413 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dir_close", 312, Current, 0, 1, 4405);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_dir_close(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.eif_dir_next */
EIF_POINTER F313_4414 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_next", 312, Current, 0, 1, 4406);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_POINTER) eif_dir_next(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_delete */
void F313_4415 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_delete", 312, Current, 0, 1, 4407);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_unlink((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}.eif_dir_exists */
EIF_BOOLEAN F313_4416 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_dir_exists", 312, Current, 0, 1, 4408);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_exists((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_is_readable */
EIF_BOOLEAN F313_4417 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_dir_is_readable", 312, Current, 0, 1, 4409);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_readable((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_is_executable */
EIF_BOOLEAN F313_4418 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_dir_is_executable", 312, Current, 0, 1, 4410);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_executable((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_is_writable */
EIF_BOOLEAN F313_4419 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_dir_is_writable", 312, Current, 0, 1, 4411);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_dir_is_writable((EIF_FILENAME) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {DIRECTORY}.eif_dir_rename */
void F313_4420 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_dir_rename", 312, Current, 0, 2, 4412);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_rename((EIF_FILENAME) arg1, (EIF_FILENAME) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {DIRECTORY}._invariant */
void F313_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 262, Current, 0, 0);
	RTIT("name_attached", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit263 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
