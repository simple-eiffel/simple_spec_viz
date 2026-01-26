/*
 * Code for class SIMPLE_SPEC_VIZ
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si52.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_SPEC_VIZ}.make */
void F55_959 (EIF_REFERENCE Current)
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
	
	RTEAA("make", 54, Current, 0, 0, 994);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(53, 1).id);
	(nstcall = -1, F54_946(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(48, 1).id);
	(nstcall = -1, F49_886(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(43, 1).id);
	(nstcall = -1, F44_808(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(55, 1).id);
	(nstcall = -1, F56_972(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("loader_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("state_diagram_gen_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("screen_mockup_gen_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("traceability_gen_created", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
}

/* {SIMPLE_SPEC_VIZ}.loader */
EIF_REFERENCE F55_960 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SIMPLE_SPEC_VIZ}.state_diagram_gen */
EIF_REFERENCE F55_961 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SIMPLE_SPEC_VIZ}.screen_mockup_gen */
EIF_REFERENCE F55_962 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {SIMPLE_SPEC_VIZ}.traceability_gen */
EIF_REFERENCE F55_963 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {SIMPLE_SPEC_VIZ}.last_error */
EIF_REFERENCE F55_964 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {SIMPLE_SPEC_VIZ}.load_from_file */
EIF_REFERENCE F55_965 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("load_from_file", 54, Current, 0, 1, 986);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F54_949(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("error_on_failure", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		if ((!((EIF_BOOLEAN)(Result == NULL)) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
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

/* {SIMPLE_SPEC_VIZ}.load_from_json */
EIF_REFERENCE F55_966 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("load_from_json", 54, Current, 0, 1, 987);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("json_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("json_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F54_950(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("error_on_failure", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		if ((!((EIF_BOOLEAN)(Result == NULL)) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
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

/* {SIMPLE_SPEC_VIZ}.generate_state_diagram */
EIF_REFERENCE F55_967 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA("generate_state_diagram", 54, Current, 0, 1, 988);
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F49_888(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SIMPLE_SPEC_VIZ}.generate_screen_mockups */
EIF_REFERENCE F55_968 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA("generate_screen_mockups", 54, Current, 0, 1, 989);
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tr2 = (nstcall = 1, F44_811(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("count_matches", EX_POST);
		ti4_1 = (nstcall = 1, F867_5806(RTCW(Result)));
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_4_);
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr1)));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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

/* {SIMPLE_SPEC_VIZ}.generate_traceability_report */
EIF_REFERENCE F55_969 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	
	RTEAA("generate_traceability_report", 54, Current, 0, 1, 990);
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
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	tr2 = (nstcall = 1, F56_973(RTCW(tr1), arg1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
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

/* {SIMPLE_SPEC_VIZ}.generate_all */
EIF_BOOLEAN F55_970 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,loc2);
	RTLR(7,loc4);
	RTLR(8,tr3);
	RTLR(9,tr4);
	RTLR(10,loc3);
	RTLIU(11);
	
	RTEAA("generate_all", 54, Current, 4, 2, 991);
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
		RTCT("output_dir_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("output_dir_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) NULL;
	RTHOOK(5);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	tr1 = (nstcall = 0, F55_967(Current, arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tb1 = *(EIF_BOOLEAN *)(RTCW(loc1)+ _CHROFF_3_0_);
	if (tb1) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
		tr2 = RTMS_EX_H("/state_machine.svg",18,630250343);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(arg2))-1079])(arg2, tr2));
		tb1 = (nstcall = 0, F55_971(Current, tr1, tr2));
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(9);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	} else {
		RTHOOK(10);
		tr1 = (nstcall = 1, F47_861(RTCW(loc1)));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTHOOK(12);
	if (Result) {
		RTHOOK(13);
		tr1 = (nstcall = 0, F55_968(Current, arg1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(14);
		tr1 = (nstcall = 1, F867_5799(RTCW(loc2)));
		loc4 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb1 = (nstcall = 1, F421_4812(loc4));
			if (tb1) break;
			RTHOOK(15);
			tr1 = (nstcall = 1, F421_4803(loc4));
			tb2 = *(EIF_BOOLEAN *)(RTCW(tr1)+ _CHROFF_3_0_);
			if (tb2) {
				RTHOOK(16);
				tr1 = (nstcall = 1, F421_4803(loc4));
				tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
				tr1 = RTMS_EX_H("/",1,47);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(arg2))-1079])(arg2, tr1));
				tr3 = (nstcall = 1, F421_4803(loc4));
				tr4 = *(EIF_REFERENCE *)(RTCW(tr3));
				tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr1))-1079])(tr1, tr4));
				tr1 = RTMS_EX_H(".svg",4,779318887);
				tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr3))-1079])(tr3, tr1));
				tb2 = (nstcall = 0, F55_971(Current, tr2, tr1));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(17);
					Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			} else {
				RTHOOK(18);
				tr1 = (nstcall = 1, F421_4803(loc4));
				tr2 = (nstcall = 1, F47_861(RTCW(tr1)));
				RTAR(Current, tr2);
				*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr2;
				RTHOOK(19);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
			RTHOOK(20);
			(nstcall = 1, F421_4818(loc4));
		}
	}
	RTHOOK(21);
	if (Result) {
		RTHOOK(22);
		tr1 = (nstcall = 0, F55_969(Current, arg1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(23);
		tb2 = *(EIF_BOOLEAN *)(RTCW(loc3)+ _CHROFF_3_0_);
		if (tb2) {
			RTHOOK(24);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc3) + _REFACS_1_);
			tr2 = RTMS_EX_H("/traceability.md",16,1751101284);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(arg2))-1079])(arg2, tr2));
			tb2 = (nstcall = 0, F55_971(Current, tr1, tr2));
			if ((EIF_BOOLEAN) !tb2) {
				RTHOOK(25);
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			}
		} else {
			RTHOOK(26);
			tr1 = (nstcall = 1, F47_861(RTCW(loc3)));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
			RTHOOK(27);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("error_on_failure", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		if ((!((EIF_BOOLEAN) !Result) || ((EIF_BOOLEAN)(tr1 != NULL)))) {
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

/* {SIMPLE_SPEC_VIZ}.save_to_file */
EIF_BOOLEAN F55_971 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("save_to_file", 54, Current, 1, 2, 992);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("content_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(744, 0x01).id, 744, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F743_5010(RTCW(tr1), arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tb1 = (nstcall = 1, F743_5068(RTCW(loc1)));
	if (tb1) {
		RTHOOK(5);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3725[Dtype(RTCW(loc1))-310])(loc1, arg1));
		RTHOOK(6);
		(nstcall = 1, F743_5094(RTCW(loc1)));
		RTHOOK(7);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(8);
		tr1 = RTMS_EX_H("Cannot write to file: ",22,1433605408);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg2));
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_SPEC_VIZ}._invariant */
void F55_1 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 51, Current, 0, 0);
	RTIT("loader_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("state_diagram_gen_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("screen_mockup_gen_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("traceability_gen_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit52 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
