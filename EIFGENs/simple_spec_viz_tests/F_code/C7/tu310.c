/*
 * Code for class TUPLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "tu310.h"
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TUPLE}.item */
EIF_REFERENCE F997_6368 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("item", 996, Current, 0, 1, 13027);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch ((nstcall = 0, F997_6477(Current, arg1))) {
		case 1U:
			RTHOOK(3);
			Result = RTLNS(eif_new_type(1035, 0x00).id, 1035, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F997_6371(Current, arg1));
			break;
		case 2U:
			RTHOOK(4);
			Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F997_6372(Current, arg1));
			break;
		case 14U:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F997_6374(Current, arg1));
			break;
		case 3U:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F997_6376(Current, arg1));
			break;
		case 4U:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(1023, 0x00).id, 1023, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F997_6388(Current, arg1));
			break;
		case 5U:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F997_6387(Current, arg1));
			break;
		case 10U:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(1020, 0x00).id, 1020, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F997_6378(Current, arg1));
			break;
		case 11U:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F997_6379(Current, arg1));
			break;
		case 12U:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(1014, 0x00).id, 1014, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F997_6380(Current, arg1));
			break;
		case 13U:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(1011, 0x00).id, 1011, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F997_6381(Current, arg1));
			break;
		case 6U:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(1008, 0x00).id, 1008, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F997_6382(Current, arg1));
			break;
		case 7U:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F997_6383(Current, arg1));
			break;
		case 8U:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F997_6384(Current, arg1));
			break;
		case 9U:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F997_6386(Current, arg1));
			break;
		case 0U:
			RTHOOK(17);
			Result = (nstcall = 0, F997_6370(Current, arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.at */
EIF_REFERENCE F997_6369 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("at", 996, Current, 0, 1, 13028);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch ((nstcall = 0, F997_6477(Current, arg1))) {
		case 1U:
			RTHOOK(2);
			Result = RTLNS(eif_new_type(1035, 0x00).id, 1035, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F997_6371(Current, arg1));
			break;
		case 2U:
			RTHOOK(3);
			Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F997_6372(Current, arg1));
			break;
		case 14U:
			RTHOOK(4);
			Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F997_6374(Current, arg1));
			break;
		case 3U:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F997_6376(Current, arg1));
			break;
		case 4U:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(1023, 0x00).id, 1023, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F997_6388(Current, arg1));
			break;
		case 5U:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F997_6387(Current, arg1));
			break;
		case 10U:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(1020, 0x00).id, 1020, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F997_6378(Current, arg1));
			break;
		case 11U:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F997_6379(Current, arg1));
			break;
		case 12U:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(1014, 0x00).id, 1014, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F997_6380(Current, arg1));
			break;
		case 13U:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(1011, 0x00).id, 1011, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F997_6381(Current, arg1));
			break;
		case 6U:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(1008, 0x00).id, 1008, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F997_6382(Current, arg1));
			break;
		case 7U:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F997_6383(Current, arg1));
			break;
		case 8U:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F997_6384(Current, arg1));
			break;
		case 9U:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F997_6386(Current, arg1));
			break;
		case 0U:
			RTHOOK(16);
			Result = (nstcall = 0, F997_6370(Current, arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.reference_item */
EIF_REFERENCE F997_6370 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("reference_item", 996, Current, 0, 1, 13029);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_reference", EX_PRE);
		RTTE((nstcall = 0, F997_6441(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_REFERENCE) eif_builtin_TUPLE_reference_item__i4_o (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.boolean_item */
EIF_BOOLEAN F997_6371 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("boolean_item", 996, Current, 0, 1, 13030);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_boolean", EX_PRE);
		RTTE((nstcall = 0, F997_6422(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_BOOLEAN) eif_builtin_TUPLE_boolean_item__i4_b (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_8_item */
EIF_CHARACTER_8 F997_6372 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_8_item", 996, Current, 0, 1, 13031);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_8", EX_PRE);
		RTTE((nstcall = 0, F997_6423(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_CHARACTER_8) eif_builtin_TUPLE_character_8_item__i4_c1 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_item */
EIF_CHARACTER_8 F997_6373 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_item", 996, Current, 0, 1, 13032);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_8", EX_PRE);
		RTTE((nstcall = 0, F997_6423(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F997_6372(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_32_item */
EIF_CHARACTER_32 F997_6374 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_item", 996, Current, 0, 1, 13033);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_32", EX_PRE);
		RTTE((nstcall = 0, F997_6425(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_CHARACTER_32) eif_builtin_TUPLE_character_32_item__i4_c4 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.wide_character_item */
EIF_CHARACTER_32 F997_6375 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("wide_character_item", 996, Current, 0, 1, 13034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_character_32", EX_PRE);
		RTTE((nstcall = 0, F997_6425(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F997_6374(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_64_item */
EIF_REAL_64 F997_6376 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_64_item", 996, Current, 0, 1, 13035);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_numeric", EX_PRE);
		RTTE((nstcall = 0, F997_6439(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_REAL_64) eif_builtin_TUPLE_real_64_item__i4_r8 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.double_item */
EIF_REAL_64 F997_6377 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_item", 996, Current, 0, 1, 13036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_numeric", EX_PRE);
		RTTE((nstcall = 0, F997_6440(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F997_6376(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_8_item */
EIF_NATURAL_8 F997_6378 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_8_item", 996, Current, 0, 1, 13037);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6427(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_8) eif_builtin_TUPLE_natural_8_item__i4_u1 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_16_item */
EIF_NATURAL_16 F997_6379 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_16_item", 996, Current, 0, 1, 13038);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6428(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_16) eif_builtin_TUPLE_natural_16_item__i4_u2 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_32_item */
EIF_NATURAL_32 F997_6380 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_item", 996, Current, 0, 1, 13039);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6429(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_32) eif_builtin_TUPLE_natural_32_item__i4_u4 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.natural_64_item */
EIF_NATURAL_64 F997_6381 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_64_item", 996, Current, 0, 1, 13040);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6430(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_64) eif_builtin_TUPLE_natural_64_item__i4_u8 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_8_item */
EIF_INTEGER_8 F997_6382 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_8_item", 996, Current, 0, 1, 13041);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6431(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_8) eif_builtin_TUPLE_integer_8_item__i4_i1 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_16_item */
EIF_INTEGER_16 F997_6383 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_16_item", 996, Current, 0, 1, 13042);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6432(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_16) eif_builtin_TUPLE_integer_16_item__i4_i2 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_32_item */
EIF_INTEGER_32 F997_6384 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("integer_32_item", 996, Current, 0, 1, 13043);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6434(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_integer_32_item__i4_i4 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_item */
EIF_INTEGER_32 F997_6385 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("integer_item", 996, Current, 0, 1, 13044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6434(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F997_6384(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_64_item */
EIF_INTEGER_64 F997_6386 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_64_item", 996, Current, 0, 1, 13045);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6435(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_INTEGER_64) eif_builtin_TUPLE_integer_64_item__i4_i8 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.pointer_item */
EIF_POINTER F997_6387 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("pointer_item", 996, Current, 0, 1, 13046);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_pointer", EX_PRE);
		RTTE((nstcall = 0, F997_6436(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_POINTER) eif_builtin_TUPLE_pointer_item__i4_p (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_32_item */
EIF_REAL_32 F997_6388 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_32_item", 996, Current, 0, 1, 13047);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_real_or_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6437(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_REAL_32) eif_builtin_TUPLE_real_32_item__i4_r4 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_item */
EIF_REAL_32 F997_6389 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_item", 996, Current, 0, 1, 13048);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_real_or_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6438(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F997_6388(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.object_comparison */
EIF_BOOLEAN F997_6390 (EIF_REFERENCE Current)
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
	
	RTEAA("object_comparison", 996, Current, 0, 0, 13049);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_TUPLE_object_comparison__b (Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_equal */
EIF_BOOLEAN F997_6391 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA("is_equal", 996, Current, 3, 1, 13050);
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
	loc3 = (nstcall = 0, F997_6390(Current));
	RTHOOK(3);
	tb1 = (nstcall = 1, F997_6390(arg1));
	if ((EIF_BOOLEAN)(loc3 == tb1)) {
		RTHOOK(4);
		if (loc3) {
			RTHOOK(5);
			loc2 = (nstcall = 0, F997_6397(Current));
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F997_6397(arg1));
			if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(8);
				loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				for (;;) {
					RTHOOK(9);
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
					RTHOOK(10);
					tr1 = (nstcall = 0, F997_6368(Current, loc1));
					tr2 = (nstcall = 1, F997_6368(RTCW(arg1), loc1));
					Result = (EIF_BOOLEAN) RTEQ(tr1, tr2);
					RTHOOK(11);
					loc1++;
				}
			}
		} else {
			RTHOOK(12);
			Result = (nstcall = 0, F1_8(Current, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
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
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.compare_objects */
void F997_6392 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("compare_objects", 996, Current, 0, 0, 13051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F997_6499(Current, (EIF_BOOLEAN) 1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("object_comparison", EX_POST);
		if ((nstcall = 0, F997_6390(Current))) {
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

/* {TUPLE}.compare_references */
void F997_6393 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("compare_references", 996, Current, 0, 0, 13052);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F997_6499(Current, (EIF_BOOLEAN) 0));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("reference_comparison", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F997_6390(Current))) {
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

/* {TUPLE}.hash_code */
EIF_INTEGER_32 F997_6394 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc4);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("hash_code", 996, Current, 4, 0, 13053);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	loc2 = (nstcall = 0, F997_6397(Current));
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		switch ((nstcall = 0, F997_6477(Current, loc1))) {
			case 1U:
				RTHOOK(5);
				tb1 = (nstcall = 0, F997_6371(Current, loc1));
				ti4_1 = (tb1 ? 1L : 0L);
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 2U:
				RTHOOK(6);
				tc1 = (nstcall = 0, F997_6372(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (tc1);
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 14U:
				RTHOOK(7);
				tw1 = (nstcall = 0, F997_6374(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (tw1);
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 3U:
				RTHOOK(8);
				tr8_1 = (nstcall = 0, F997_6376(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr8_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 4U:
				RTHOOK(9);
				tr4_1 = (nstcall = 0, F997_6388(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tr4_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 5U:
				RTHOOK(10);
				tp1 = (nstcall = 0, F997_6387(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tp1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 10U:
				RTHOOK(11);
				tu1_1 = (nstcall = 0, F997_6378(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu1_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 11U:
				RTHOOK(12);
				tu2_1 = (nstcall = 0, F997_6379(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu2_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 12U:
				RTHOOK(13);
				tu4_1 = (nstcall = 0, F997_6380(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu4_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 13U:
				RTHOOK(14);
				tu8_1 = (nstcall = 0, F997_6381(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (tu8_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 6U:
				RTHOOK(15);
				ti1_1 = (nstcall = 0, F997_6382(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti1_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 7U:
				RTHOOK(16);
				ti2_1 = (nstcall = 0, F997_6383(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti2_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 8U:
				RTHOOK(17);
				ti4_1 = (nstcall = 0, F997_6384(Current, loc1));
				ti4_2 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti4_1)));
				loc3 = (EIF_INTEGER_32) ti4_2;
				break;
			case 9U:
				RTHOOK(18);
				ti8_1 = (nstcall = 0, F997_6386(Current, loc1));
				ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (ti8_1)));
				loc3 = (EIF_INTEGER_32) ti4_1;
				break;
			case 0U:
				RTHOOK(19);
				tr1 = (nstcall = 0, F997_6370(Current, loc1));
				loc4 = RTCCL(tr1);
				loc4 = RTRV(eif_new_type(961, 0x01),loc4);
				if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
				if (EIF_TEST(loc4)) {
					RTHOOK(20);
					ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5229[Dtype(loc4)-962])(loc4));
					loc3 = (EIF_INTEGER_32) ti4_1;
				} else {
					RTHOOK(21);
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
				break;
			default:
				RTEC(EN_WHEN);
		}
		RTHOOK(22);
		tr1 = RTOUCR(11,(nstcall = 0, F997_6498), (Current));
		ti4_1 = (nstcall = 1, F664_4970(RTCW(tr1), loc1));
		Result += (EIF_INTEGER_32) (loc3 * ti4_1);
		RTHOOK(23);
		loc1++;
	}
	RTHOOK(24);
	ti4_1 = (EIF_INTEGER_32) (0x7FFFFFFF & (EIF_INTEGER_32) ((rt_int_ptr) (Result)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(25);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.valid_index */
EIF_BOOLEAN F997_6395 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("valid_index", 996, Current, 0, 1, 13054);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
		Result = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F997_6397(Current)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("only_if_in_index_set", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = '\0';
			if ((EIF_BOOLEAN) ((nstcall = 0, F997_6398(Current)) <= arg1)) {
				tb2 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F997_6397(Current)));
			}
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.valid_type_for_index */
EIF_BOOLEAN F997_6396 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
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
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(19);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
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
	RTLR(18,loc1);
	RTLIU(19);
	
	RTEAA("valid_type_for_index", 996, Current, 16, 2, 13055);
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
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
		RTHOOK(3);
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6477(Current, arg2)) == ((EIF_NATURAL_8) 0U))) {
			RTHOOK(4);
			tr1 = (nstcall = 0, F1_5(Current));
			tr2 = (nstcall = 1, F966_6340(tr1, arg2));
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R5307[Dtype(RTCW(tr2))-965])(tr2));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
		}
	} else {
		RTHOOK(5);
		switch ((nstcall = 0, F997_6477(Current, arg2))) {
			case 1U:
				RTHOOK(6);
				loc3 = RTCCL(arg1);
				loc3 = RTRV(eif_new_type(1033, 0x01),loc3);
				if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc3);
				break;
			case 2U:
				RTHOOK(7);
				loc4 = RTCCL(arg1);
				loc4 = RTRV(eif_new_type(1030, 0x01),loc4);
				if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc4);
				break;
			case 14U:
				RTHOOK(8);
				loc5 = RTCCL(arg1);
				loc5 = RTRV(eif_new_type(1027, 0x01),loc5);
				if ((loc5) && RTS_OS (Current, loc5)) loc5 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc5);
				break;
			case 3U:
				RTHOOK(9);
				loc6 = RTCCL(arg1);
				loc6 = RTRV(eif_new_type(1024, 0x01),loc6);
				if ((loc6) && RTS_OS (Current, loc6)) loc6 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc6);
				break;
			case 4U:
				RTHOOK(10);
				loc7 = RTCCL(arg1);
				loc7 = RTRV(eif_new_type(1021, 0x01),loc7);
				if ((loc7) && RTS_OS (Current, loc7)) loc7 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc7);
				break;
			case 5U:
				RTHOOK(11);
				loc8 = RTCCL(arg1);
				loc8 = RTRV(eif_new_type(1036, 0x01),loc8);
				if ((loc8) && RTS_OS (Current, loc8)) loc8 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc8);
				break;
			case 10U:
				RTHOOK(12);
				loc9 = RTCCL(arg1);
				loc9 = RTRV(eif_new_type(1018, 0x01),loc9);
				if ((loc9) && RTS_OS (Current, loc9)) loc9 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc9);
				break;
			case 11U:
				RTHOOK(13);
				loc10 = RTCCL(arg1);
				loc10 = RTRV(eif_new_type(1015, 0x01),loc10);
				if ((loc10) && RTS_OS (Current, loc10)) loc10 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc10);
				break;
			case 12U:
				RTHOOK(14);
				loc11 = RTCCL(arg1);
				loc11 = RTRV(eif_new_type(1012, 0x01),loc11);
				if ((loc11) && RTS_OS (Current, loc11)) loc11 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc11);
				break;
			case 13U:
				RTHOOK(15);
				loc12 = RTCCL(arg1);
				loc12 = RTRV(eif_new_type(1009, 0x01),loc12);
				if ((loc12) && RTS_OS (Current, loc12)) loc12 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc12);
				break;
			case 6U:
				RTHOOK(16);
				loc13 = RTCCL(arg1);
				loc13 = RTRV(eif_new_type(1006, 0x01),loc13);
				if ((loc13) && RTS_OS (Current, loc13)) loc13 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc13);
				break;
			case 7U:
				RTHOOK(17);
				loc14 = RTCCL(arg1);
				loc14 = RTRV(eif_new_type(1003, 0x01),loc14);
				if ((loc14) && RTS_OS (Current, loc14)) loc14 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc14);
				break;
			case 8U:
				RTHOOK(18);
				loc15 = RTCCL(arg1);
				loc15 = RTRV(eif_new_type(1000, 0x01),loc15);
				if ((loc15) && RTS_OS (Current, loc15)) loc15 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc15);
				break;
			case 9U:
				RTHOOK(19);
				loc16 = RTCCL(arg1);
				loc16 = RTRV(eif_new_type(997, 0x01),loc16);
				if ((loc16) && RTS_OS (Current, loc16)) loc16 = (EIF_REFERENCE) 0;
				Result = (EIF_BOOLEAN) EIF_TEST(loc16);
				break;
			case 0U:
				RTHOOK(20);
				loc1 = RTLNS(eif_new_type(276, 0x01).id, 276, _OBJSIZ_0_0_0_0_0_0_0_0_);
				RTHOOK(21);
				tr1 = RTCCL(arg1);
				loc2 = (nstcall = 0, F78_1158(Current, tr1));
				RTHOOK(22);
				tr1 = (nstcall = 0, F1_5(Current));
				tr2 = (nstcall = 1, F966_6340(tr1, arg2));
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5302[Dtype(RTCW(tr2))-965])(tr2));
				tb1 = (nstcall = 1, F277_3623(RTCW(loc1), loc2, ti4_1));
				Result = (EIF_BOOLEAN) tb1;
				break;
			default:
				RTEC(EN_WHEN);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.count */
EIF_INTEGER_32 F997_6397 (EIF_REFERENCE Current)
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
	
	RTEAA("count", 996, Current, 0, 0, 13056);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_TUPLE_count__i4 (Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.lower */
EIF_INTEGER_32 F997_6398 (EIF_REFERENCE Current)
{
	return (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
}

/* {TUPLE}.upper */
EIF_INTEGER_32 F997_6399 (EIF_REFERENCE Current)
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
	
	RTEAA("upper", 996, Current, 0, 0, 13058);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6397(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (nstcall = 0, F997_6397(Current)))) {
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

/* {TUPLE}.is_empty */
EIF_BOOLEAN F997_6400 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 996, Current, 0, 0, 13059);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F997_6397(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.put */
void F997_6401 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
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
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
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
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(17);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,loc2);
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
	RTLIU(17);
	
	RTEAA("put", 996, Current, 14, 2, 13060);
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
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type_for_index", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F997_6396(Current, tr1, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	switch ((nstcall = 0, F997_6477(Current, arg2))) {
		case 1U:
			RTHOOK(4);
			loc1 = RTCCL(arg1);
			loc1 = RTRV(eif_new_type(1033, 0x01),loc1);
			if ((loc1) && RTS_OS (Current, loc1)) loc1 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc1)) {
				RTHOOK(5);
				tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_0_0_);
				(nstcall = 0, F997_6403(Current, tb1, arg2));
			}
			break;
		case 2U:
			RTHOOK(6);
			loc2 = RTCCL(arg1);
			loc2 = RTRV(eif_new_type(1030, 0x01),loc2);
			if ((loc2) && RTS_OS (Current, loc2)) loc2 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc2)) {
				RTHOOK(7);
				tc1 = *(EIF_CHARACTER_8 *)(loc2+ _CHROFF_0_0_);
				(nstcall = 0, F997_6404(Current, tc1, arg2));
			}
			break;
		case 14U:
			RTHOOK(8);
			loc3 = RTCCL(arg1);
			loc3 = RTRV(eif_new_type(1027, 0x01),loc3);
			if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc3)) {
				RTHOOK(9);
				tw1 = *(EIF_CHARACTER_32 *)(loc3+ _LNGOFF_0_0_0_0_);
				(nstcall = 0, F997_6406(Current, tw1, arg2));
			}
			break;
		case 3U:
			RTHOOK(10);
			loc4 = RTCCL(arg1);
			loc4 = RTRV(eif_new_type(1024, 0x01),loc4);
			if ((loc4) && RTS_OS (Current, loc4)) loc4 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc4)) {
				RTHOOK(11);
				tr8_1 = *(EIF_REAL_64 *)(loc4+ _R64OFF_0_0_0_0_0_0_0_0_);
				(nstcall = 0, F997_6408(Current, tr8_1, arg2));
			}
			break;
		case 4U:
			RTHOOK(12);
			loc5 = RTCCL(arg1);
			loc5 = RTRV(eif_new_type(1021, 0x01),loc5);
			if ((loc5) && RTS_OS (Current, loc5)) loc5 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc5)) {
				RTHOOK(13);
				tr4_1 = *(EIF_REAL_32 *)(loc5+ _R32OFF_0_0_0_0_0_);
				(nstcall = 0, F997_6410(Current, tr4_1, arg2));
			}
			break;
		case 5U:
			RTHOOK(14);
			loc6 = RTCCL(arg1);
			loc6 = RTRV(eif_new_type(1036, 0x01),loc6);
			if ((loc6) && RTS_OS (Current, loc6)) loc6 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc6)) {
				RTHOOK(15);
				tp1 = *(EIF_POINTER *)(loc6+ _PTROFF_0_0_0_0_0_0_);
				(nstcall = 0, F997_6412(Current, tp1, arg2));
			}
			break;
		case 10U:
			RTHOOK(16);
			loc7 = RTCCL(arg1);
			loc7 = RTRV(eif_new_type(1018, 0x01),loc7);
			if ((loc7) && RTS_OS (Current, loc7)) loc7 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc7)) {
				RTHOOK(17);
				tu1_1 = *(EIF_NATURAL_8 *)(loc7+ _CHROFF_0_0_);
				(nstcall = 0, F997_6413(Current, tu1_1, arg2));
			}
			break;
		case 11U:
			RTHOOK(18);
			loc8 = RTCCL(arg1);
			loc8 = RTRV(eif_new_type(1015, 0x01),loc8);
			if ((loc8) && RTS_OS (Current, loc8)) loc8 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc8)) {
				RTHOOK(19);
				tu2_1 = *(EIF_NATURAL_16 *)(loc8+ _I16OFF_0_0_0_);
				(nstcall = 0, F997_6414(Current, tu2_1, arg2));
			}
			break;
		case 12U:
			RTHOOK(20);
			loc9 = RTCCL(arg1);
			loc9 = RTRV(eif_new_type(1012, 0x01),loc9);
			if ((loc9) && RTS_OS (Current, loc9)) loc9 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc9)) {
				RTHOOK(21);
				tu4_1 = *(EIF_NATURAL_32 *)(loc9+ _LNGOFF_0_0_0_0_);
				(nstcall = 0, F997_6415(Current, tu4_1, arg2));
			}
			break;
		case 13U:
			RTHOOK(22);
			loc10 = RTCCL(arg1);
			loc10 = RTRV(eif_new_type(1009, 0x01),loc10);
			if ((loc10) && RTS_OS (Current, loc10)) loc10 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc10)) {
				RTHOOK(23);
				tu8_1 = *(EIF_NATURAL_64 *)(loc10+ _I64OFF_0_0_0_0_0_0_0_);
				(nstcall = 0, F997_6416(Current, tu8_1, arg2));
			}
			break;
		case 6U:
			RTHOOK(24);
			loc11 = RTCCL(arg1);
			loc11 = RTRV(eif_new_type(1006, 0x01),loc11);
			if ((loc11) && RTS_OS (Current, loc11)) loc11 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc11)) {
				RTHOOK(25);
				ti1_1 = *(EIF_INTEGER_8 *)(loc11+ _CHROFF_0_0_);
				(nstcall = 0, F997_6419(Current, ti1_1, arg2));
			}
			break;
		case 7U:
			RTHOOK(26);
			loc12 = RTCCL(arg1);
			loc12 = RTRV(eif_new_type(1003, 0x01),loc12);
			if ((loc12) && RTS_OS (Current, loc12)) loc12 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc12)) {
				RTHOOK(27);
				ti2_1 = *(EIF_INTEGER_16 *)(loc12+ _I16OFF_0_0_0_);
				(nstcall = 0, F997_6420(Current, ti2_1, arg2));
			}
			break;
		case 8U:
			RTHOOK(28);
			loc13 = RTCCL(arg1);
			loc13 = RTRV(eif_new_type(1000, 0x01),loc13);
			if ((loc13) && RTS_OS (Current, loc13)) loc13 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc13)) {
				RTHOOK(29);
				ti4_1 = *(EIF_INTEGER_32 *)(loc13+ _LNGOFF_0_0_0_0_);
				(nstcall = 0, F997_6417(Current, ti4_1, arg2));
			}
			break;
		case 9U:
			RTHOOK(30);
			loc14 = RTCCL(arg1);
			loc14 = RTRV(eif_new_type(997, 0x01),loc14);
			if ((loc14) && RTS_OS (Current, loc14)) loc14 = (EIF_REFERENCE) 0;
			if (EIF_TEST(loc14)) {
				RTHOOK(31);
				ti8_1 = *(EIF_INTEGER_64 *)(loc14+ _I64OFF_0_0_0_0_0_0_0_);
				(nstcall = 0, F997_6421(Current, ti8_1, arg2));
			}
			break;
		case 0U:
			RTHOOK(32);
			tr1 = RTCCL(arg1);
			(nstcall = 0, F997_6402(Current, tr1, arg2));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {TUPLE}.put_reference */
void F997_6402 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_reference", 996, Current, 0, 2, 13061);
	RTSA(Dtype(Current));
	RTSC;
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
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type_for_index", EX_PRE);
		tr1 = RTCCL(arg1);
		RTTE((nstcall = 0, F997_6396(Current, tr1, arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6441(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_reference__o_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {TUPLE}.put_boolean */
void F997_6403 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_boolean", 996, Current, 0, 2, 13062);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6422(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_boolean__b_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_character_8 */
void F997_6404 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character_8", 996, Current, 0, 2, 13063);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6423(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_character_8__c1_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_character */
void F997_6405 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character", 996, Current, 0, 2, 13064);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6423(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F997_6404(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_character_32 */
void F997_6406 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character_32", 996, Current, 0, 2, 13065);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6425(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_character_32__c4_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_wide_character */
void F997_6407 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_wide_character", 996, Current, 0, 2, 13066);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6425(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F997_6406(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_real_64 */
void F997_6408 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64", 996, Current, 0, 2, 13067);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6440(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_real_64__r8_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_double */
void F997_6409 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_double", 996, Current, 0, 2, 13068);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6440(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F997_6408(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_real_32 */
void F997_6410 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32", 996, Current, 0, 2, 13069);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6438(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_real_32__r4_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_real */
void F997_6411 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real", 996, Current, 0, 2, 13070);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6438(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F997_6410(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_pointer */
void F997_6412 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_pointer", 996, Current, 0, 2, 13071);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6436(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_pointer__p_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_8 */
void F997_6413 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8", 996, Current, 0, 2, 13072);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6427(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_8__u1_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_16 */
void F997_6414 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16", 996, Current, 0, 2, 13073);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6428(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_16__u2_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_32 */
void F997_6415 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32", 996, Current, 0, 2, 13074);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6429(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_32__u4_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_natural_64 */
void F997_6416 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64", 996, Current, 0, 2, 13075);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6430(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_natural_64__u8_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_32 */
void F997_6417 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32", 996, Current, 0, 2, 13076);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6434(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_32__i4_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer */
void F997_6418 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer", 996, Current, 0, 2, 13077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6434(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F997_6417(Current, arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_8 */
void F997_6419 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8", 996, Current, 0, 2, 13078);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6431(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_8__i1_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_16 */
void F997_6420 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16", 996, Current, 0, 2, 13079);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6432(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_16__i2_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.put_integer_64 */
void F997_6421 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64", 996, Current, 0, 2, 13080);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg2)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		RTTE((nstcall = 0, F997_6435(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	eif_builtin_TUPLE_put_integer_64__i8_i4_ (Current, arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {TUPLE}.is_boolean_item */
EIF_BOOLEAN F997_6422 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_boolean_item", 996, Current, 0, 1, 13081);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 1U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_character_8_item */
EIF_BOOLEAN F997_6423 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_8_item", 996, Current, 0, 1, 13082);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 2U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_character_item */
EIF_BOOLEAN F997_6424 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_item", 996, Current, 0, 1, 13083);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 2U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_character_32_item */
EIF_BOOLEAN F997_6425 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character_32_item", 996, Current, 0, 1, 13084);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 14U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_wide_character_item */
EIF_BOOLEAN F997_6426 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_wide_character_item", 996, Current, 0, 1, 13085);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 14U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_8_item */
EIF_BOOLEAN F997_6427 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_8_item", 996, Current, 0, 1, 13086);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 10U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_16_item */
EIF_BOOLEAN F997_6428 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_16_item", 996, Current, 0, 1, 13087);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 11U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_32_item */
EIF_BOOLEAN F997_6429 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_32_item", 996, Current, 0, 1, 13088);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 12U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_natural_64_item */
EIF_BOOLEAN F997_6430 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_natural_64_item", 996, Current, 0, 1, 13089);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 13U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_8_item */
EIF_BOOLEAN F997_6431 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_8_item", 996, Current, 0, 1, 13090);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 6U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_16_item */
EIF_BOOLEAN F997_6432 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_16_item", 996, Current, 0, 1, 13091);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 7U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_item */
EIF_BOOLEAN F997_6433 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_item", 996, Current, 0, 1, 13092);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 8U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_32_item */
EIF_BOOLEAN F997_6434 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_32_item", 996, Current, 0, 1, 13093);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 8U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_integer_64_item */
EIF_BOOLEAN F997_6435 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_integer_64_item", 996, Current, 0, 1, 13094);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 9U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_pointer_item */
EIF_BOOLEAN F997_6436 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_pointer_item", 996, Current, 0, 1, 13095);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 5U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_real_32_item */
EIF_BOOLEAN F997_6437 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_real_32_item", 996, Current, 0, 1, 13096);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 4U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_real_item */
EIF_BOOLEAN F997_6438 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_real_item", 996, Current, 0, 1, 13097);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F997_6437(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_real_64_item */
EIF_BOOLEAN F997_6439 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_real_64_item", 996, Current, 0, 1, 13098);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 3U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_double_item */
EIF_BOOLEAN F997_6440 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_double_item", 996, Current, 0, 1, 13099);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F997_6439(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_reference_item */
EIF_BOOLEAN F997_6441 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_reference_item", 996, Current, 0, 1, 13100);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tu1_1 = (nstcall = 0, F997_6477(Current, arg1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == ((EIF_NATURAL_8) 0U));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_numeric_item */
EIF_BOOLEAN F997_6442 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 loc1 = (EIF_NATURAL_8) 0;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_numeric_item", 996, Current, 1, 1, 13101);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F997_6477(Current, arg1));
	RTHOOK(3);
	switch (loc1) {
		case 3U:
		case 4U:
		case 6U:
		case 7U:
		case 8U:
		case 9U:
			RTHOOK(4);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform */
EIF_BOOLEAN F997_6443 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform", 996, Current, 0, 0, 13102);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 255U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_boolean */
EIF_BOOLEAN F997_6444 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_boolean", 996, Current, 0, 0, 13103);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 1U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_character_8 */
EIF_BOOLEAN F997_6445 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_character_8", 996, Current, 0, 0, 13104);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 2U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_character */
EIF_BOOLEAN F997_6446 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_character", 996, Current, 0, 0, 13105);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 2U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_character_32 */
EIF_BOOLEAN F997_6447 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_character_32", 996, Current, 0, 0, 13106);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 14U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_wide_character */
EIF_BOOLEAN F997_6448 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_wide_character", 996, Current, 0, 0, 13107);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 14U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_natural_8 */
EIF_BOOLEAN F997_6449 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_natural_8", 996, Current, 0, 0, 13108);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 10U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_natural_16 */
EIF_BOOLEAN F997_6450 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_natural_16", 996, Current, 0, 0, 13109);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 11U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_natural_32 */
EIF_BOOLEAN F997_6451 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_natural_32", 996, Current, 0, 0, 13110);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 12U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_natural_64 */
EIF_BOOLEAN F997_6452 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_natural_64", 996, Current, 0, 0, 13111);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 13U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer_8 */
EIF_BOOLEAN F997_6453 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_integer_8", 996, Current, 0, 0, 13112);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 6U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer_16 */
EIF_BOOLEAN F997_6454 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_integer_16", 996, Current, 0, 0, 13113);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 7U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer */
EIF_BOOLEAN F997_6455 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_integer", 996, Current, 0, 0, 13114);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 8U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer_32 */
EIF_BOOLEAN F997_6456 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_integer_32", 996, Current, 0, 0, 13115);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 8U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_integer_64 */
EIF_BOOLEAN F997_6457 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_integer_64", 996, Current, 0, 0, 13116);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 9U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_pointer */
EIF_BOOLEAN F997_6458 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_pointer", 996, Current, 0, 0, 13117);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 5U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_real_32 */
EIF_BOOLEAN F997_6459 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_real_32", 996, Current, 0, 0, 13118);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 4U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_real */
EIF_BOOLEAN F997_6460 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_real", 996, Current, 0, 0, 13119);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6459(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_real_64 */
EIF_BOOLEAN F997_6461 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_real_64", 996, Current, 0, 0, 13120);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 3U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_double */
EIF_BOOLEAN F997_6462 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_double", 996, Current, 0, 0, 13121);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6461(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.is_uniform_reference */
EIF_BOOLEAN F997_6463 (EIF_REFERENCE Current)
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
	
	RTEAA("is_uniform_reference", 996, Current, 0, 0, 13122);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F997_6497(Current, ((EIF_NATURAL_8) 0U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.plus */
EIF_REFERENCE F997_6464 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(14);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc10);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc9);
	RTLR(6,loc8);
	RTLR(7,loc5);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc1);
	RTLR(11,loc11);
	RTLR(12,loc12);
	RTLR(13,loc13);
	RTLIU(14);
	
	RTEAA("plus", 996, Current, 13, 1, 13123);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc3 = (nstcall = 0, F997_6397(Current));
	RTHOOK(2);
	ti4_1 = (nstcall = 1, F997_6397(arg1));
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1_14(arg1));
		loc10 = tr1;
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,996,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			loc10 = RTRV(typres0,loc10);
		}
		if (EIF_TEST(loc10)) {
			RTHOOK(5);
			Result = (EIF_REFERENCE) loc10;
		} else {
			
		}
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc4 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			Result = (nstcall = 0, F1_14(Current));
		} else {
			RTHOOK(8);
			loc9 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tr1 = RTMS_EX_H("TUPLE [",7,776318043);
			(nstcall = -1, F1079_7733(RTCW(loc9), tr1));
			RTHOOK(9);
			{
				static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0xFF04,0,0xFFFF};
				EIF_TYPE typres0;
				static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
				
				typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
				loc8 = RTLNSP2(typres0.id,EO_REF,(EIF_INTEGER_32) (loc3 + loc4),sizeof(EIF_REFERENCE), EIF_FALSE);
				RT_SPECIAL_COUNT(loc8) = 0;
			}
			RTHOOK(10);
			loc5 = (nstcall = 0, F1_5(Current));
			
			RTHOOK(11);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(12);
				if ((EIF_BOOLEAN) (loc2 > loc3)) break;
				RTHOOK(13);
				if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 1L))) {
					RTHOOK(14);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc9))-1080])(loc9, (EIF_CHARACTER_8) ','));
					RTHOOK(15);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc9))-1080])(loc9, (EIF_CHARACTER_8) ' '));
				}
				RTHOOK(16);
				tr1 = (nstcall = 1, F966_6340(loc5, loc2));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(tr1))-0])(tr1));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc9))-1080])(loc9, tr2));
				RTHOOK(17);
				tr1 = (nstcall = 0, F997_6368(Current, loc2));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5153[Dtype(RTCW(loc8))-898])(loc8, tr2, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
				RTHOOK(18);
				loc2++;
			}
			RTHOOK(19);
			tr1 = (nstcall = 1, F1_5(arg1));
			loc6 = (EIF_REFERENCE) tr1;
			
			for (;;) {
				RTHOOK(20);
				if ((EIF_BOOLEAN) (loc2 > (EIF_INTEGER_32) (loc3 + loc4))) break;
				RTHOOK(21);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc9))-1080])(loc9, (EIF_CHARACTER_8) ','));
				RTHOOK(22);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc9))-1080])(loc9, (EIF_CHARACTER_8) ' '));
				RTHOOK(23);
				tr1 = (nstcall = 1, F966_6340(loc6, (EIF_INTEGER_32) (loc2 - loc3)));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R28[Dtype(RTCW(tr1))-0])(tr1));
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc9))-1080])(loc9, tr2));
				RTHOOK(24);
				tr1 = (nstcall = 1, F997_6368(RTCW(arg1), (EIF_INTEGER_32) (loc2 - loc3)));
				tr2 = RTCCL(tr1);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_INTEGER_32)) R5153[Dtype(RTCW(loc8))-898])(loc8, tr2, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
				RTHOOK(25);
				loc2++;
			}
			RTHOOK(26);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(loc9))-1080])(loc9, (EIF_CHARACTER_8) ']'));
			RTHOOK(27);
			loc1 = RTLNS(eif_new_type(276, 0x01).id, 276, _OBJSIZ_0_0_0_0_0_0_0_0_);
			RTHOOK(28);
			ti4_1 = (nstcall = 1, F277_3624(RTCW(loc1), loc9));
			loc7 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(29);
			if ((EIF_BOOLEAN) (loc7 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(30);
				tr1 = (nstcall = 1, F277_3627(RTCW(loc1), loc7, loc8));
				loc11 = tr1;
				{
					static EIF_TYPE_INDEX typarr0[] = {0xFFF9,0,996,0xFFFF};
					EIF_TYPE typres0;
					static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
					
					typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
					loc11 = RTRV(typres0,loc11);
				}
				if (EIF_TEST(loc11)) {
					RTHOOK(31);
					Result = (EIF_REFERENCE) loc11;
				}
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(32);
		RTCT("has_expected_count", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			ti4_1 = (nstcall = 1, F997_6397(Result));
			ti4_2 = (nstcall = 1, F997_6397(arg1));
			tb1 = (EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) ((nstcall = 0, F997_6397(Current)) + ti4_2));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(33);
		RTCT("has_expected_items", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = '\0';
			ti4_1 = (nstcall = 0, F997_6397(Current));
			tr1 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
			tr2 = (nstcall = 1, F1001_6625(RTCW(tr1), ti4_1));
			tr1 = (nstcall = 1, F749_5385(RTCW(tr2)));
			loc12 = (EIF_REFERENCE) tr1;
			tb3 = EIF_TRUE;
			for (;;) {
				if (!tb3) break;
				tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc12)-334])(loc12));
				if (tb4) break;
				RTHOOK(34);
				ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc12)-334])(loc12));
				tr1 = (nstcall = 1, F997_6368(RTCW(Result), ti4_1));
				ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc12)-334])(loc12));
				tr2 = (nstcall = 0, F997_6368(Current, ti4_1));
				tb3 = RTCEQ(tr1, tr2);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc12)-334])(loc12));
			}
			if (tb3) {
				ti4_1 = (nstcall = 1, F997_6397(arg1));
				tr1 = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_1_0_0_0_0_);
				*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
				tr2 = (nstcall = 1, F1001_6625(RTCW(tr1), ti4_1));
				tr1 = (nstcall = 1, F749_5385(RTCW(tr2)));
				loc13 = (EIF_REFERENCE) tr1;
				tb3 = EIF_TRUE;
				for (;;) {
					if (!tb3) break;
					tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc13)-334])(loc13));
					if (tb4) break;
					RTHOOK(35);
					ti4_1 = (nstcall = 0, F997_6397(Current));
					ti4_2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc13)-334])(loc13));
					tr1 = (nstcall = 1, F997_6368(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
					ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc13)-334])(loc13));
					tr2 = (nstcall = 1, F997_6368(RTCW(arg1), ti4_1));
					tb3 = RTCEQ(tr1, tr2);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc13)-334])(loc13));
				}
				tb2 = tb3;
			}
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
	RTHOOK(36);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.convertible_to_double */
EIF_BOOLEAN F997_6465 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("convertible_to_double", 996, Current, 3, 0, 13124);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F997_6397(Current));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(5);
		loc3 = (nstcall = 0, F997_6477(Current, loc1));
		RTHOOK(6);
		switch (loc3) {
			case 3U:
			case 4U:
			case 6U:
			case 7U:
			case 8U:
			case 9U:
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
			default:
				RTHOOK(8);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				break;
		}
		RTHOOK(9);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.convertible_to_real */
EIF_BOOLEAN F997_6466 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("convertible_to_real", 996, Current, 3, 0, 13125);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F997_6397(Current));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
		RTHOOK(5);
		loc3 = (nstcall = 0, F997_6477(Current, loc1));
		RTHOOK(6);
		switch (loc3) {
			case 4U:
			case 6U:
			case 7U:
			case 8U:
			case 9U:
				RTHOOK(7);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
			default:
				RTHOOK(8);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				break;
		}
		RTHOOK(9);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("yes_if_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6397(Current)) == ((EIF_INTEGER_32) 0L))) {
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
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.arrayed */
EIF_REFERENCE F997_6467 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("arrayed", 996, Current, 2, 0, 13126);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	loc2 = (nstcall = 0, F997_6397(Current));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,777,0xFF04,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 777, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F778_5430(RTCW(Result), NULL, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tr1 = (nstcall = 0, F997_6368(Current, loc1));
		tr2 = RTCCL(tr1);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(Result))-776])(Result, tr2, (EIF_REFERENCE) &loc1));
		RTHOOK(6);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(Result))-743])(Result));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F997_6397(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.boolean_arrayed */
EIF_REFERENCE F997_6468 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("boolean_arrayed", 996, Current, 2, 0, 13127);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_boolean", EX_PRE);
		RTTE((nstcall = 0, F997_6444(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F997_6397(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,780,1035,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 780, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F781_5430(RTCW(Result), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tb1 = (nstcall = 0, F997_6371(Current, loc1));
		(nstcall = 1, F781_5454(RTCW(Result), tb1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F781_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F997_6397(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_8_arrayed */
EIF_REFERENCE F997_6469 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("character_8_arrayed", 996, Current, 2, 0, 13128);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_character", EX_PRE);
		RTTE((nstcall = 0, F997_6446(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F997_6397(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,782,1032,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 782, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F783_5430(RTCW(Result), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tc1 = (nstcall = 0, F997_6372(Current, loc1));
		(nstcall = 1, F783_5454(RTCW(Result), tc1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F783_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F997_6397(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.character_arrayed */
EIF_REFERENCE F997_6470 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("character_arrayed", 996, Current, 2, 0, 13129);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_character", EX_PRE);
		RTTE((nstcall = 0, F997_6446(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F997_6397(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,782,1032,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 782, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F783_5430(RTCW(Result), (EIF_CHARACTER_8) ' ', ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tc1 = (nstcall = 0, F997_6372(Current, loc1));
		(nstcall = 1, F783_5454(RTCW(Result), tc1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F783_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F997_6397(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.double_arrayed */
EIF_REFERENCE F997_6471 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("double_arrayed", 996, Current, 2, 0, 13130);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("convertible", EX_PRE);
		RTTE((nstcall = 0, F997_6465(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F997_6397(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,787,1026,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 787, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F788_5430(RTCW(Result), (EIF_REAL_64) 0.0, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tr8_1 = (nstcall = 0, F997_6377(Current, loc1));
		(nstcall = 1, F788_5454(RTCW(Result), tr8_1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F788_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F997_6397(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.integer_arrayed */
EIF_REFERENCE F997_6472 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("integer_arrayed", 996, Current, 2, 0, 13131);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_integer", EX_PRE);
		RTTE((nstcall = 0, F997_6455(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F997_6397(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,778,1002,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 778, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F779_5430(RTCW(Result), ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		ti4_1 = (nstcall = 0, F997_6384(Current, loc1));
		(nstcall = 1, F779_5454(RTCW(Result), ti4_1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F779_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F997_6397(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.pointer_arrayed */
EIF_REFERENCE F997_6473 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("pointer_arrayed", 996, Current, 2, 0, 13132);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_uniform_pointer", EX_PRE);
		RTTE((nstcall = 0, F997_6458(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F997_6397(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,783,1068,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 783, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tp1 = (nstcall = 0, F1_33(Current));
	(nstcall = -1, F784_5430(RTCW(Result), tp1, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tp1 = (nstcall = 0, F997_6387(Current, loc1));
		(nstcall = 1, F784_5454(RTCW(Result), tp1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F784_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F997_6397(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.real_arrayed */
EIF_REFERENCE F997_6474 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REAL_32 tr4_1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("real_arrayed", 996, Current, 2, 0, 13133);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("convertible", EX_PRE);
		RTTE((nstcall = 0, F997_6466(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	loc2 = (nstcall = 0, F997_6397(Current));
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,786,1023,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 786, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F787_5430(RTCW(Result), (EIF_REAL_32) 0.0, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tr4_1 = (nstcall = 0, F997_6389(Current, loc1));
		(nstcall = 1, F787_5454(RTCW(Result), tr4_1, loc1));
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F787_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F997_6397(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.string_arrayed */
EIF_REFERENCE F997_6475 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("string_arrayed", 996, Current, 3, 0, 13134);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	loc2 = (nstcall = 0, F997_6397(Current));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,777,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 777, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F778_5430(RTCW(Result), NULL, ((EIF_INTEGER_32) 1L), loc2));
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(5);
		tr1 = (nstcall = 0, F997_6368(Current, loc1));
		loc3 = RTCCL(tr1);
		loc3 = RTRV(eif_new_type(1080, 0x01),loc3);
		if ((loc3) && RTS_OS (Current, loc3)) loc3 = (EIF_REFERENCE) 0;
		if (EIF_TEST(loc3)) {
			RTHOOK(6);
			(nstcall = 1, F778_5454(RTCW(Result), loc3, loc1));
		}
		RTHOOK(7);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("same_count", EX_POST);
		ti4_1 = (nstcall = 1, F778_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F997_6397(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.correct_mismatch */
void F997_6476 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("correct_mismatch", 996, Current, 4, 0, 13135);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(12,(nstcall = 0, F864_5720), (Current));
	tr2 = RTOUCR(13,(nstcall = 0, F997_6496), (Current));
	tr2 = (nstcall = 1, F886_5908(RTCW(tr1), tr2));
	loc4 = RTCCL(tr2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc4 = RTRV(typres0,loc4);
	}
	if (EIF_TEST(loc4)) {
		RTHOOK(2);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(3);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5138[Dtype(loc4)-898])(loc4));
		loc2 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(4);
			if ((EIF_BOOLEAN) (loc1 > loc2)) break;
			RTHOOK(5);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(loc4)-776])(loc4, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(6);
			tr1 = RTCCL(loc3);
			if ((nstcall = 0, F997_6396(Current, tr1, loc1))) {
				RTHOOK(7);
				tr1 = RTCCL(loc3);
				(nstcall = 0, F997_6401(Current, tr1, loc1));
			} else {
				RTHOOK(8);
				(nstcall = 0, F864_5719(Current));
			}
			RTHOOK(9);
			loc1++;
		}
	} else {
		RTHOOK(10);
		(nstcall = 0, F864_5719(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {TUPLE}.item_code */
EIF_NATURAL_8 F997_6477 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("item_code", 996, Current, 0, 1, 13136);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		RTTE((nstcall = 0, F997_6395(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = (EIF_NATURAL_8) eif_builtin_TUPLE_item_code__i4_u1 (Current, arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.area_name */

EIF_REFERENCE F997_6496 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (13,RTMS_EX_H("area",4,1634887009));
}

/* {TUPLE}.is_tuple_uniform */
EIF_BOOLEAN F997_6497 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 tu1_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_tuple_uniform", 996, Current, 3, 1, 13156);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	if ((EIF_BOOLEAN) ((nstcall = 0, F997_6397(Current)) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc2 = (nstcall = 0, F997_6397(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_8) 255U))) {
			RTHOOK(5);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			RTHOOK(6);
			loc3 = (nstcall = 0, F997_6477(Current, ((EIF_INTEGER_32) 1L)));
		} else {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			RTHOOK(8);
			loc3 = (EIF_NATURAL_8) arg1;
		}
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(10);
			tu1_1 = (nstcall = 0, F997_6477(Current, loc1));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == tu1_1);
			RTHOOK(11);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {TUPLE}.internal_primes */
static EIF_REFERENCE F997_6498_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(11)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("internal_primes", 996, Current, 0, 0, 13157);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(663, 0x01).id, 663, _OBJSIZ_0_1_0_1_0_0_0_0_);
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

EIF_REFERENCE F997_6498 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(11,F997_6498_body,(Current));
}

/* {TUPLE}.set_object_comparison */
void F997_6499 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_object_comparison", 996, Current, 0, 1, 13158);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_TUPLE_set_object_comparison__b_ (Current, arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("object_comparison_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F997_6390(Current)) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit310 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
