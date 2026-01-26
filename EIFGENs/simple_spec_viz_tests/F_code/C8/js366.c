/*
 * Code for class JSON_STRING
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "js366.h"
#include "eif_built_in.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_STRING}.make_from_string */
void F1089_8121 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_string", 1088, Current, 0, 1, 15034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F1089_8149(Current, arg1));
	(nstcall = 0, F1089_8124(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.make_from_string_32 */
void F1089_8122 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_string_32", 1088, Current, 0, 1, 15035);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F1089_8149(Current, arg1));
	(nstcall = 0, F1089_8124(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.make_from_string_general */
void F1089_8123 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("make_from_string_general", 1088, Current, 2, 1, 15036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1078, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		(nstcall = 0, F1089_8121(Current, loc1));
	} else {
		RTHOOK(4);
		loc2 = arg1;
		loc2 = RTRV(eif_new_type(1082, 0x01),loc2);
		if (EIF_TEST(loc2)) {
			RTHOOK(5);
			(nstcall = 0, F1089_8122(Current, loc2));
		} else {
			RTHOOK(6);
			tr1 = (nstcall = 1, F1076_7660(RTCW(arg1)));
			(nstcall = 0, F1089_8122(Current, tr1));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.make_from_escaped_json_string */
void F1089_8124 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_escaped_json_string", 1088, Current, 0, 1, 15037);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_escaped_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1076_7654(RTCW(arg1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.make_with_escaped_json */
void F1089_8125 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_escaped_json", 1088, Current, 0, 1, 15038);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_escaped_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F1089_8124(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.make_from_json_string */
void F1089_8126 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_from_json_string", 1088, Current, 0, 1, 15039);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 0, F1089_8124(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.make_json */
void F1089_8127 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_json", 1088, Current, 0, 1, 15040);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F1089_8149(Current, arg1));
	(nstcall = 0, F1089_8125(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.make_json_from_string_32 */
void F1089_8128 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_json_from_string_32", 1088, Current, 0, 1, 15041);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("item_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F1089_8149(Current, arg1));
	(nstcall = 0, F1089_8125(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.item */
EIF_REFERENCE F1089_8129 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {JSON_STRING}.is_string */
EIF_BOOLEAN F1089_8130 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_TRUE;
}

/* {JSON_STRING}.same_string */
EIF_BOOLEAN F1089_8131 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("same_string", 1088, Current, 0, 1, 15044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1089_8134(Current));
	tb1 = (nstcall = 1, F1076_7646(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.same_caseless_string */
EIF_BOOLEAN F1089_8132 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("same_caseless_string", 1088, Current, 0, 1, 15045);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F1089_8134(Current));
	tb1 = (nstcall = 1, F1076_7643(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.unescaped_string_8 */
EIF_REFERENCE F1089_8133 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("unescaped_string_8", 1088, Current, 1, 0, 15046);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
	(nstcall = -1, F1079_7731(RTCW(Result), ti4_1));
	RTHOOK(3);
	(nstcall = 0, F1089_8136(Current, Result));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.unescaped_string_32 */
EIF_REFERENCE F1089_8134 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("unescaped_string_32", 1088, Current, 1, 0, 15047);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O6269[Dtype(loc1)-1078]);
	(nstcall = -1, F1083_7897(RTCW(Result), ti4_1));
	RTHOOK(3);
	(nstcall = 0, F1089_8137(Current, Result));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.representation */
EIF_REFERENCE F1089_8135 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("representation", 1088, Current, 0, 0, 15048);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	(nstcall = -1, F1079_7731(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 2L))));
	RTHOOK(2);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '\"'));
	RTHOOK(3);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, *(EIF_REFERENCE *)(Current)));
	RTHOOK(4);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(Result))-1080])(Result, (EIF_CHARACTER_8) '\"'));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.unescape_to_string_8 */
void F1089_8136 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc6);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("unescape_to_string_8", 1088, Current, 6, 1, 15049);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(5);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, loc2));
		loc4 = (EIF_CHARACTER_8) tc1;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\\')) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc2 < loc3)) {
				RTHOOK(8);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
				switch (tc1) {
					case (EIF_CHARACTER_8) '\"':
						RTHOOK(9);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\"'));
						RTHOOK(10);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) '\\':
						RTHOOK(11);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\\'));
						RTHOOK(12);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) '/':
						RTHOOK(13);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '/'));
						RTHOOK(14);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'b':
						RTHOOK(15);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\010'));
						RTHOOK(16);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'f':
						RTHOOK(17);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\014'));
						RTHOOK(18);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'n':
						RTHOOK(19);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\012'));
						RTHOOK(20);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'r':
						RTHOOK(21);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\015'));
						RTHOOK(22);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 't':
						RTHOOK(23);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\011'));
						RTHOOK(24);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'u':
						RTHOOK(25);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 5L)) <= loc3)) {
							RTHOOK(26);
							tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(loc1))-1079])(loc1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 5L))));
							loc6 = (EIF_REFERENCE) tr1;
							
							RTHOOK(27);
							loc5 = (nstcall = 0, F1089_8148(Current, loc6));
							RTHOOK(28);
							tr1 = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_0_1_0_0_0_0_);
							*(EIF_NATURAL_32 *)tr1 = loc5;
							tb1 = (nstcall = 1, F1016_7099(RTCW(tr1)));
							if (tb1) {
								RTHOOK(29);
								(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_NATURAL_32)) R6206[Dtype(RTCW(arg1))-1080])(arg1, loc5));
							} else {
								RTHOOK(30);
								(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, loc4));
								RTHOOK(31);
								(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) 'u'));
								RTHOOK(32);
								(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(arg1))-1080])(arg1, loc6));
							}
							RTHOOK(33);
							loc2 += ((EIF_INTEGER_32) 6L);
						} else {
							RTHOOK(34);
							(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, loc4));
							RTHOOK(35);
							loc2++;
						}
						break;
					default:
						RTHOOK(36);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, loc4));
						RTHOOK(37);
						loc2++;
						break;
				}
			} else {
				RTHOOK(38);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, loc4));
				RTHOOK(39);
				loc2++;
			}
		} else {
			RTHOOK(40);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, loc4));
			RTHOOK(41);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(42);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.unescape_to_string_32 */
void F1089_8137 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLR(3,loc6);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("unescape_to_string_32", 1088, Current, 6, 1, 15050);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1) + O6269[Dtype(loc1)-1078]);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(5);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, loc2));
		loc5 = (EIF_CHARACTER_8) tc1;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc5 == (EIF_CHARACTER_8) '\\')) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) (loc2 < loc3)) {
				RTHOOK(8);
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
				switch (tc1) {
					case (EIF_CHARACTER_8) '\"':
						RTHOOK(9);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
						(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
						RTHOOK(10);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) '\\':
						RTHOOK(11);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
						(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
						RTHOOK(12);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) '/':
						RTHOOK(13);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
						(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
						RTHOOK(14);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'b':
						RTHOOK(15);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\010';
						(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
						RTHOOK(16);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'f':
						RTHOOK(17);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\014';
						(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
						RTHOOK(18);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'n':
						RTHOOK(19);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
						(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
						RTHOOK(20);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'r':
						RTHOOK(21);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
						(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
						RTHOOK(22);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 't':
						RTHOOK(23);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
						(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
						RTHOOK(24);
						loc2 += ((EIF_INTEGER_32) 2L);
						break;
					case (EIF_CHARACTER_8) 'u':
						RTHOOK(25);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 5L)) <= loc3)) {
							RTHOOK(26);
							tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(loc1))-1079])(loc1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 5L))));
							loc6 = (EIF_REFERENCE) tr1;
							
							RTHOOK(27);
							tu4_1 = (nstcall = 0, F1089_8148(Current, loc6));
							(nstcall = 1, F1078_7701(RTCW(arg1), tu4_1));
							RTHOOK(28);
							loc2 += ((EIF_INTEGER_32) 6L);
						} else {
							RTHOOK(29);
							tw1 = (EIF_CHARACTER_32) loc5;
							(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
							RTHOOK(30);
							loc2++;
						}
						break;
					default:
						RTHOOK(31);
						tw1 = (EIF_CHARACTER_32) loc5;
						(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
						RTHOOK(32);
						loc2++;
						break;
				}
			} else {
				RTHOOK(33);
				tw1 = (EIF_CHARACTER_32) loc5;
				(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
				RTHOOK(34);
				loc2++;
			}
		} else {
			RTHOOK(35);
			tu4_1 = (EIF_NATURAL_32) loc5;
			loc4 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(36);
			if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
				
				RTHOOK(37);
				tw1 = (EIF_CHARACTER_32) loc5;
				(nstcall = 1, F1085_8025(RTCW(arg1), tw1));
			} else {
				RTHOOK(38);
				if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L))) {
					RTHOOK(39);
					loc2++;
					RTHOOK(40);
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						RTHOOK(41);
						tu4_1 = eif_bit_and(loc4,(EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
						tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 6L));
						tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(loc1))-1079])(loc1, loc2));
						tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
						tu4_1 = eif_bit_or(tu4_2,tu4_3);
						(nstcall = 1, F1078_7701(RTCW(arg1), tu4_1));
					}
				} else {
					RTHOOK(42);
					if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L))) {
						RTHOOK(43);
						loc2 += ((EIF_INTEGER_32) 2L);
						RTHOOK(44);
						if ((EIF_BOOLEAN) (loc2 <= loc3)) {
							RTHOOK(45);
							tu4_1 = eif_bit_and(loc4,(EIF_NATURAL_32) ((EIF_INTEGER_32) 15L));
							tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 12L));
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(loc1))-1079])(loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
							tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_1 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 6L));
							tu4_3 = eif_bit_or(tu4_2,tu4_1);
							tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(loc1))-1079])(loc1, loc2));
							tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
							tu4_1 = eif_bit_or(tu4_3,tu4_2);
							(nstcall = 1, F1078_7701(RTCW(arg1), tu4_1));
						}
					} else {
						RTHOOK(46);
						if ((EIF_BOOLEAN) (loc4 <= (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L))) {
							RTHOOK(47);
							loc2 += ((EIF_INTEGER_32) 3L);
							RTHOOK(48);
							if ((EIF_BOOLEAN) (loc2 <= loc3)) {
								RTHOOK(49);
								tu4_1 = eif_bit_and(loc4,(EIF_NATURAL_32) ((EIF_INTEGER_32) 7L));
								tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 18L));
								tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(loc1))-1079])(loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 2L))));
								tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_1 = eif_bit_shift_left(tu4_3,((EIF_INTEGER_32) 12L));
								tu4_3 = eif_bit_or(tu4_2,tu4_1);
								tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(loc1))-1079])(loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
								tu4_2 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_1 = eif_bit_shift_left(tu4_2,((EIF_INTEGER_32) 6L));
								tu4_2 = eif_bit_or(tu4_3,tu4_1);
								tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(loc1))-1079])(loc1, loc2));
								tu4_3 = eif_bit_and(tu4_1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 63L));
								tu4_1 = eif_bit_or(tu4_2,tu4_3);
								(nstcall = 1, F1078_7701(RTCW(arg1), tu4_1));
							}
						}
					}
				}
			}
			RTHOOK(50);
			loc2++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(51);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.accept */
void F1089_8138 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("accept", 1088, Current, 0, 1, 15051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_visitor_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 1, F244_2987(RTCW(arg1), Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.is_equal */
EIF_BOOLEAN F1089_8139 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("is_equal", 1088, Current, 0, 1, 15052);
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
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
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.append */
void F1089_8140 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("append", 1088, Current, 0, 1, 15053);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_escaped_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(tr1))-1080])(tr1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.append_json_string */
void F1089_8141 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("append_json_string", 1088, Current, 0, 1, 15054);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_json_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 0, F1089_8140(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.append_string */
void F1089_8142 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("append_string", 1088, Current, 0, 1, 15055);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F1089_8149(Current, arg1));
	(nstcall = 0, F1089_8140(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.append_string_32 */
void F1089_8143 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("append_string_32", 1088, Current, 0, 1, 15056);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F1089_8149(Current, arg1));
	(nstcall = 0, F1089_8140(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.append_string_general */
void F1089_8144 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("append_string_general", 1088, Current, 1, 1, 15057);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = arg1;
	loc1 = RTRV(eif_new_type(1078, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1076_7654(RTCW(arg1)));
		(nstcall = 0, F1089_8142(Current, tr1));
	} else {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1076_7660(RTCW(arg1)));
		(nstcall = 0, F1089_8143(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {JSON_STRING}.hash_code */
EIF_INTEGER_32 F1089_8145 (EIF_REFERENCE Current)
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
	
	RTEAA("hash_code", 1088, Current, 0, 0, 15058);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5229[Dtype(RTCW(tr1))-962])(tr1));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("good_hash_value", EX_POST);
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

/* {JSON_STRING}.debug_output */
EIF_REFERENCE F1089_8146 (EIF_REFERENCE Current)
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
	
	RTEAA("debug_output", 1088, Current, 0, 0, 15059);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
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
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.is_hexadecimal */
EIF_BOOLEAN F1089_8147 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_hexadecimal", 1088, Current, 1, 1, 15060);
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
		tr1 = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
		*(EIF_CHARACTER_8 *)tr1 = tc1;
		tb2 = (nstcall = 1, F1031_7474(RTCW(tr1)));
		Result = (EIF_BOOLEAN) tb2;
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.hexadecimal_to_natural_32 */
EIF_NATURAL_32 F1089_8148 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("hexadecimal_to_natural_32", 1088, Current, 3, 1, 15061);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_hexadecimal", EX_PRE);
		RTTE((nstcall = 0, F1089_8147(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1) + O6269[Dtype(arg1)-1078]);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN) (loc2 >= ((EIF_INTEGER_32) 2L))) {
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, ((EIF_INTEGER_32) 2L)));
		tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) 'x');
	}
	if (tb1) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	} else {
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	for (;;) {
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(8);
		Result *= (EIF_NATURAL_32) ((EIF_INTEGER_32) 16L);
		RTHOOK(9);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
		loc3 = (EIF_CHARACTER_8) tc1;
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc3 >= (EIF_CHARACTER_8) '0') && (EIF_BOOLEAN) (loc3 <= (EIF_CHARACTER_8) '9'))) {
			RTHOOK(11);
			tr1 = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)tr1 = loc3;
			ti4_1 = (nstcall = 1, F1031_7456(RTCW(tr1), (EIF_CHARACTER_8) '0'));
			tu4_1 = (EIF_NATURAL_32) ti4_1;
			Result += tu4_1;
		} else {
			RTHOOK(12);
			tc1 = eif_builtin_CHARACTER_8_as_lower__c1_c1(loc3);
			tr1 = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)tr1 = tc1;
			ti4_1 = (nstcall = 1, F1031_7456(RTCW(tr1), (EIF_CHARACTER_8) 'a'));
			tu4_1 = (EIF_NATURAL_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 10L));
			Result += tu4_1;
		}
		RTHOOK(13);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.escaped_json_string */
EIF_REFERENCE F1089_8149 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLR(3,loc6);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("escaped_json_string", 1088, Current, 7, 1, 15062);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(Result), (EIF_INTEGER_32) (loc3 + (EIF_INTEGER_32) (loc3 / ((EIF_INTEGER_32) 10L)))));
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc3)) break;
		RTHOOK(6);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
		loc4 = (EIF_CHARACTER_32) tw1;
		RTHOOK(7);
		tb1 = (loc4 <= 0xFF);
		if (tb1) {
			RTHOOK(8);
			tc1 = (EIF_CHARACTER_8) loc4;
			loc5 = (EIF_CHARACTER_8) tc1;
			RTHOOK(9);
			switch (loc5) {
				case (EIF_CHARACTER_8) '\000':
					RTHOOK(10);
					tr1 = RTMS_EX_H("\\u0000",6,990242352);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				case (EIF_CHARACTER_8) '\"':
					RTHOOK(11);
					tr1 = RTMS_EX_H("\\\"",2,23586);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				case (EIF_CHARACTER_8) '\\':
					RTHOOK(12);
					tr1 = RTMS_EX_H("\\\\",2,23644);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				case (EIF_CHARACTER_8) '/':
					RTHOOK(13);
					tb1 = '\0';
					tb2 = (nstcall = 1, F1076_7613(RTCW(arg1), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
					if (tb2) {
						tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
						tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '<';
						tb1 = (EIF_BOOLEAN)(tw1 == tw2);
					}
					if (tb1) {
						RTHOOK(14);
						tr1 = RTMS_EX_H("\\/",2,23599);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					} else {
						RTHOOK(15);
						tr1 = RTMS_EX_H("/",1,47);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					}
					break;
				case (EIF_CHARACTER_8) '\010':
					RTHOOK(16);
					tr1 = RTMS_EX_H("\\b",2,23650);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				case (EIF_CHARACTER_8) '\014':
					RTHOOK(17);
					tr1 = RTMS_EX_H("\\f",2,23654);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				case (EIF_CHARACTER_8) '\012':
					RTHOOK(18);
					tr1 = RTMS_EX_H("\\n",2,23662);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				case (EIF_CHARACTER_8) '\015':
					RTHOOK(19);
					tr1 = RTMS_EX_H("\\r",2,23666);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				case (EIF_CHARACTER_8) '\011':
					RTHOOK(20);
					tr1 = RTMS_EX_H("\\t",2,23668);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
					break;
				default:
					RTHOOK(21);
					tu4_1 = (EIF_NATURAL_32) loc4;
					if ((EIF_BOOLEAN) (tu4_1 > (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L))) {
						RTHOOK(22);
						loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
					RTHOOK(23);
					(nstcall = 1, F1081_7858(RTCW(Result), loc5));
					break;
			}
		} else {
			RTHOOK(24);
			tr1 = RTMS_EX_H("\\u",2,23669);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, tr1));
			RTHOOK(25);
			ti4_1 = (EIF_INTEGER_32) (loc4);
			tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			tr2 = (nstcall = 1, F1004_6747(RTCW(tr1)));
			loc6 = (EIF_REFERENCE) tr2;
			RTHOOK(26);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			for (;;) {
				RTHOOK(27);
				tb1 = '\01';
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				if (!(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
					tb2 = '\0';
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc6))-776])(loc6, loc2));
						tb2 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '0');
					}
					tb1 = tb2;
				}
				if (tb1) break;
				RTHOOK(28);
				loc2++;
			}
			RTHOOK(29);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(loc6))-1079])(loc6, loc2, ti4_1));
			loc6 = (EIF_REFERENCE) tr1;
			for (;;) {
				RTHOOK(30);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc6)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L))) break;
				RTHOOK(31);
				(nstcall = 1, F1081_7840(RTCW(loc6), ((EIF_INTEGER_32) 0L)));
			}
			
			RTHOOK(32);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(Result))-1080])(Result, loc6));
		}
		RTHOOK(33);
		loc1++;
	}
	RTHOOK(34);
	if (loc7) {
		RTHOOK(35);
		tr1 = RTOUCR(314,(nstcall = 0, F1089_8150), (Current));
		tr2 = (nstcall = 1, F78_1200(RTCW(tr1), Result));
		Result = (EIF_REFERENCE) tr2;
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(36);
	RTLE;
	RTEE;
	return Result;
}

/* {JSON_STRING}.utf_converter */
static EIF_REFERENCE F1089_8150_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(314)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("utf_converter", 1088, Current, 0, 0, 15063);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	Result= RTLN(eif_new_type(77, 0x00).id);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(77, 0x00).id, 77, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr1 = (tr1);
	RTXA(tr1, Result);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1089_8150 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(314,F1089_8150_body,(Current));
}

/* {JSON_STRING}._invariant */
void F1089_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 365, Current, 0, 0);
	RTIT("item_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit366 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
