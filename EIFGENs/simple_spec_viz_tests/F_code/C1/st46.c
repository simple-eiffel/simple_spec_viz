/*
 * Code for class STATE_DIAGRAM_GENERATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "st46.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {STATE_DIAGRAM_GENERATOR}.make */
void F49_886 (EIF_REFERENCE Current)
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
	
	RTEAA("make", 48, Current, 0, 0, 903);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(30, 1).id);
	(nstcall = -1, F31_550(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("graphviz_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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

/* {STATE_DIAGRAM_GENERATOR}.graphviz */
EIF_REFERENCE F49_887 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {STATE_DIAGRAM_GENERATOR}.generate */
EIF_REFERENCE F49_888 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,loc2);
	RTLR(10,loc5);
	RTLR(11,Result);
	RTLR(12,loc6);
	RTLIU(13);
	
	RTEAA("generate", 48, Current, 6, 1, 905);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F31_558(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr2 = RTMS_EX_H(" State Machine",14,392737893);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, tr2));
	tr1 = (nstcall = 1, F32_578(RTCW(loc1), tr2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc3));
		if (tb1) break;
		RTHOOK(5);
		tr1 = (nstcall = 1, F421_4803(loc3));
		tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_0_);
		if (tb2) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F421_4803(loc3));
			tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
			tr1 = (nstcall = 1, F32_573(RTCW(loc1), tr2));
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			tr1 = (nstcall = 1, F421_4803(loc3));
			tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_1_);
			if (tb2) {
				RTHOOK(8);
				tr1 = (nstcall = 1, F421_4803(loc3));
				tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
				tr1 = (nstcall = 1, F32_575(RTCW(loc1), tr2));
				loc1 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(9);
				tr1 = (nstcall = 1, F421_4803(loc3));
				tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
				tb2 = (nstcall = 1, F32_572(RTCW(loc1), tr2));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(10);
					tr1 = (nstcall = 1, F421_4803(loc3));
					tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
					tr1 = (nstcall = 1, F32_574(RTCW(loc1), tr2));
					loc1 = (EIF_REFERENCE) tr1;
				}
			}
		}
		RTHOOK(11);
		(nstcall = 1, F421_4818(loc3));
	}
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc4 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb2 = (nstcall = 1, F421_4812(loc4));
		if (tb2) break;
		RTHOOK(13);
		tr1 = (nstcall = 1, F421_4803(loc4));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
		tr1 = (nstcall = 0, F49_891(Current, arg1, tr2));
		tr2 = (nstcall = 1, F421_4803(loc4));
		tr3 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_3_);
		tr2 = (nstcall = 0, F49_891(Current, arg1, tr3));
		tr3 = (nstcall = 1, F421_4803(loc4));
		tr4 = *(EIF_REFERENCE *)(RTCW(tr3) + _REFACS_4_);
		tr1 = (nstcall = 1, F32_576(RTCW(loc1), tr1, tr2, tr4));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(14);
		(nstcall = 1, F421_4818(loc4));
	}
	RTHOOK(15);
	tr1 = (nstcall = 1, F32_581(RTCW(loc1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(16);
	tb3 = '\0';
	tb4 = *(EIF_BOOLEAN *)(RTCW(loc2)+ _CHROFF_2_0_);
	if (tb4) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
		loc5 = tr1;
		tb3 = EIF_TEST(loc5);
	}
	if (tb3) {
		RTHOOK(17);
		tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("state_machine",13,1313861221);
		(nstcall = -1, F47_857(RTCW(tr1), tr2, loc5));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
		loc6 = tr1;
		if (EIF_TEST(loc6)) {
			RTHOOK(19);
			tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("state_machine",13,1313861221);
			tr3 = RTMS_EX_H("Failed to render state diagram: ",32,1974635808);
			tr4 = *(EIF_REFERENCE *)(loc6);
			tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr3)-1079])(tr3, tr4));
			(nstcall = -1, F47_858(RTCW(tr1), tr2, tr4));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(20);
			tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("state_machine",13,1313861221);
			tr3 = RTMS_EX_H("Unknown rendering error",23,8662898);
			(nstcall = -1, F47_858(RTCW(tr1), tr2, tr3));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(21);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {STATE_DIAGRAM_GENERATOR}.generate_to_file */
EIF_REFERENCE F49_889 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLR(8,tr3);
	RTLR(9,tr4);
	RTLR(10,loc2);
	RTLR(11,Result);
	RTLR(12,loc5);
	RTLIU(13);
	
	RTEAA("generate_to_file", 48, Current, 5, 2, 906);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F31_558(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr2 = RTMS_EX_H(" State Machine",14,392737893);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, tr2));
	tr1 = (nstcall = 1, F32_578(RTCW(loc1), tr2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc3));
		if (tb1) break;
		RTHOOK(7);
		tr1 = (nstcall = 1, F421_4803(loc3));
		tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_0_);
		if (tb2) {
			RTHOOK(8);
			tr1 = (nstcall = 1, F421_4803(loc3));
			tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
			tr1 = (nstcall = 1, F32_573(RTCW(loc1), tr2));
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(9);
			tr1 = (nstcall = 1, F421_4803(loc3));
			tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_1_);
			if (tb2) {
				RTHOOK(10);
				tr1 = (nstcall = 1, F421_4803(loc3));
				tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
				tr1 = (nstcall = 1, F32_575(RTCW(loc1), tr2));
				loc1 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(11);
				tr1 = (nstcall = 1, F421_4803(loc3));
				tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
				tb2 = (nstcall = 1, F32_572(RTCW(loc1), tr2));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(12);
					tr1 = (nstcall = 1, F421_4803(loc3));
					tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
					tr1 = (nstcall = 1, F32_574(RTCW(loc1), tr2));
					loc1 = (EIF_REFERENCE) tr1;
				}
			}
		}
		RTHOOK(13);
		(nstcall = 1, F421_4818(loc3));
	}
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc4 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb2 = (nstcall = 1, F421_4812(loc4));
		if (tb2) break;
		RTHOOK(15);
		tr1 = (nstcall = 1, F421_4803(loc4));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
		tr1 = (nstcall = 0, F49_891(Current, arg1, tr2));
		tr2 = (nstcall = 1, F421_4803(loc4));
		tr3 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_3_);
		tr2 = (nstcall = 0, F49_891(Current, arg1, tr3));
		tr3 = (nstcall = 1, F421_4803(loc4));
		tr4 = *(EIF_REFERENCE *)(RTCW(tr3) + _REFACS_4_);
		tr1 = (nstcall = 1, F32_576(RTCW(loc1), tr1, tr2, tr4));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(16);
		(nstcall = 1, F421_4818(loc4));
	}
	RTHOOK(17);
	tr1 = (nstcall = 1, F32_582(RTCW(loc1), arg2));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(18);
	tb3 = *(EIF_BOOLEAN *)(RTCW(loc2)+ _CHROFF_2_0_);
	if (tb3) {
		RTHOOK(19);
		tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("state_machine",13,1313861221);
		tr3 = RTMS_EX_H("Saved to: ",10,2029096992);
		tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr3)-1079])(tr3, arg2));
		(nstcall = -1, F47_857(RTCW(tr1), tr2, tr4));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(20);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
		loc5 = tr1;
		if (EIF_TEST(loc5)) {
			RTHOOK(21);
			tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("state_machine",13,1313861221);
			tr3 = RTMS_EX_H("Failed to save state diagram: ",30,243020064);
			tr4 = *(EIF_REFERENCE *)(loc5);
			tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr3)-1079])(tr3, tr4));
			(nstcall = -1, F47_858(RTCW(tr1), tr2, tr4));
			Result = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(22);
			tr1 = RTLNS(eif_new_type(46, 0x01).id, 46, _OBJSIZ_3_1_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("state_machine",13,1313861221);
			tr3 = RTMS_EX_H("Unknown save error",18,983095410);
			(nstcall = -1, F47_858(RTCW(tr1), tr2, tr3));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
	return Result;
}

/* {STATE_DIAGRAM_GENERATOR}.generate_dot */
EIF_REFERENCE F49_890 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,tr3);
	RTLR(8,tr4);
	RTLR(9,Result);
	RTLIU(10);
	
	RTEAA("generate_dot", 48, Current, 3, 1, 907);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F31_558(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tr2 = RTMS_EX_H(" State Machine",14,392737893);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, tr2));
	tr1 = (nstcall = 1, F32_578(RTCW(loc1), tr2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc2));
		if (tb1) break;
		RTHOOK(5);
		tr1 = (nstcall = 1, F421_4803(loc2));
		tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_0_);
		if (tb2) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F421_4803(loc2));
			tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
			tr1 = (nstcall = 1, F32_573(RTCW(loc1), tr2));
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			tr1 = (nstcall = 1, F421_4803(loc2));
			tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_6_1_);
			if (tb2) {
				RTHOOK(8);
				tr1 = (nstcall = 1, F421_4803(loc2));
				tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
				tr1 = (nstcall = 1, F32_575(RTCW(loc1), tr2));
				loc1 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(9);
				tr1 = (nstcall = 1, F421_4803(loc2));
				tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
				tb2 = (nstcall = 1, F32_572(RTCW(loc1), tr2));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(10);
					tr1 = (nstcall = 1, F421_4803(loc2));
					tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
					tr1 = (nstcall = 1, F32_574(RTCW(loc1), tr2));
					loc1 = (EIF_REFERENCE) tr1;
				}
			}
		}
		RTHOOK(11);
		(nstcall = 1, F421_4818(loc2));
	}
	RTHOOK(12);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb2 = (nstcall = 1, F421_4812(loc3));
		if (tb2) break;
		RTHOOK(13);
		tr1 = (nstcall = 1, F421_4803(loc3));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_2_);
		tr1 = (nstcall = 0, F49_891(Current, arg1, tr2));
		tr2 = (nstcall = 1, F421_4803(loc3));
		tr3 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_3_);
		tr2 = (nstcall = 0, F49_891(Current, arg1, tr3));
		tr3 = (nstcall = 1, F421_4803(loc3));
		tr4 = *(EIF_REFERENCE *)(RTCW(tr3) + _REFACS_4_);
		tr1 = (nstcall = 1, F32_576(RTCW(loc1), tr1, tr2, tr4));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(14);
		(nstcall = 1, F421_4818(loc3));
	}
	RTHOOK(15);
	tr1 = (nstcall = 1, F32_580(RTCW(loc1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("result_not_void", EX_POST);
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

/* {STATE_DIAGRAM_GENERATOR}.state_name_for_id */
EIF_REFERENCE F49_891 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("state_name_for_id", 48, Current, 1, 2, 908);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("doc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("state_id_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 1, F48_875(RTCW(arg1), arg2));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		Result = (EIF_REFERENCE) arg2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {STATE_DIAGRAM_GENERATOR}._invariant */
void F49_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 45, Current, 0, 0);
	RTIT("graphviz_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit46 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
