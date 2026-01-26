/*
 * Code for class DEPENDENCY_BUILDER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "de12.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {DEPENDENCY_BUILDER}.make */
void F15_295 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("make", 14, Current, 0, 1, 295);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("renderer_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	tr1 = RTLNSMART(eif_new_type(29, 1).id);
	tr2 = RTMS_EX_H("Dependencies",12,2039632755);
	(nstcall = -1, F30_518(RTCW(tr1), tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	tr1 = RTMS_EX_H("rankdir",7,1389421170);
	tr3 = RTMS_EX_H("TB",2,21570);
	(nstcall = 1, F12_250(RTCW(tr2), tr1, tr3));
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,10,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 5L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("renderer_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("show_external_default", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_);
		if (tb1) {
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

/* {DEPENDENCY_BUILDER}.renderer */
EIF_REFERENCE F15_296 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {DEPENDENCY_BUILDER}.graph */
EIF_REFERENCE F15_297 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {DEPENDENCY_BUILDER}.show_external */
EIF_BOOLEAN F15_298 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_);
}


/* {DEPENDENCY_BUILDER}.set_show_external */
EIF_REFERENCE F15_299 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("set_show_external", 14, Current, 0, 1, 299);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) arg1;
	RTHOOK(2);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("show_external_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_);
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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

/* {DEPENDENCY_BUILDER}.set_title */
EIF_REFERENCE F15_300 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_title", 14, Current, 0, 1, 300);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("title_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
	tr1 = RTMS_EX_H("label",5,1634667884);
	(nstcall = 1, F12_250(RTCW(tr2), tr1, arg1));
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("title_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1) + _REFACS_1_);
		tr1 = RTMS_EX_H("label",5,1634667884);
		tb1 = (nstcall = 1, F12_249(RTCW(tr2), tr1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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

/* {DEPENDENCY_BUILDER}.from_ecf */
EIF_REFERENCE F15_301 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("from_ecf", 14, Current, 0, 1, 301);
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
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
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

/* {DEPENDENCY_BUILDER}.add_library */
void F15_302 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("add_library", 14, Current, 1, 2, 302);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_duplicate", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (nstcall = 1, F30_531(RTCW(tr1), arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F30_542(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr2 = RTMS_EX_H("label",5,1634667884);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, arg1));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr2 = RTMS_EX_H("shape",5,1752099429);
	tr3 = RTMS_EX_H("box",3,6451064);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(7);
	if (arg2) {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
		tr2 = RTMS_EX_H("style",5,1954997861);
		tr3 = RTMS_EX_H("filled",6,2020389732);
		(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
		RTHOOK(9);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
		tr2 = RTMS_EX_H("fillcolor",9,204136562);
		tr3 = RTMS_EX_H("lightgray",9,47366521);
		(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	} else {
		RTHOOK(10);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
		tr2 = RTMS_EX_H("style",5,1954997861);
		tr3 = RTMS_EX_H("filled",6,2020389732);
		(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
		RTHOOK(11);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
		tr2 = RTMS_EX_H("fillcolor",9,204136562);
		tr3 = RTMS_EX_H("lightblue",9,2110572133);
		(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("library_added", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb1 = (nstcall = 1, F30_531(RTCW(tr1), arg1));
		if (tb1) {
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

/* {DEPENDENCY_BUILDER}.add_dependency */
void F15_303 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLIU(8);
	
	RTEAA("add_dependency", 14, Current, 1, 2, 303);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("from_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("to_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_524(RTCW(tr1)));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_543(RTCW(tr2), arg1, arg2));
	loc1 = (EIF_REFERENCE) tr3;
	RTHOOK(4);
	tr2 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
	tr3 = RTMS_EX_H("style",5,1954997861);
	tr4 = RTMS_EX_H("dashed",6,2133574500);
	(nstcall = 1, F12_250(RTCW(tr2), tr3, tr4));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("edge_added", EX_POST);
		tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		ti4_2 = (nstcall = 1, F30_524(RTCW(tr2)));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
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

/* {DEPENDENCY_BUILDER}.add_cluster */
void F15_304 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,loc3);
	RTLR(7,Current);
	RTLR(8,loc2);
	RTLIU(9);
	
	RTEAA("add_cluster", 14, Current, 3, 2, 304);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("libraries_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(10, 0x01).id, 10, _OBJSIZ_4_1_0_0_0_0_0_0_);
	(nstcall = -1, F11_224(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr2 = RTMS_EX_H("label",5,1634667884);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, arg1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr2 = RTMS_EX_H("style",5,1954997861);
	tr3 = RTMS_EX_H("filled",6,2020389732);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_1_);
	tr2 = RTMS_EX_H("fillcolor",9,204136562);
	tr3 = RTMS_EX_H("lightyellow",11,1323013239);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(7);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(arg2))-365])(arg2));
	loc3 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc3)-334])(loc3));
		if (tb1) break;
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
		tb2 = (nstcall = 1, F30_531(RTCW(tr1), tr2));
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(9);
			tr1 = RTLNS(eif_new_type(28, 0x01).id, 28, _OBJSIZ_2_0_0_0_0_0_0_0_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
			(nstcall = -1, F29_501(RTCW(tr1), tr2));
			loc2 = (EIF_REFERENCE) tr1;
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
			tr2 = RTMS_EX_H("label",5,1634667884);
			tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
			(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(RTCW(loc2) + _REFACS_1_);
			tr2 = RTMS_EX_H("shape",5,1752099429);
			tr3 = RTMS_EX_H("box",3,6451064);
			(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
			RTHOOK(12);
			(nstcall = 1, F11_237(RTCW(loc1), loc2));
		}
		RTHOOK(13);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc3)-334])(loc3));
	}
	RTHOOK(14);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F30_541(RTCW(tr1), loc1));
	RTHOOK(15);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(tr1))-663])(tr1, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("cluster_added", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tb2 = (nstcall = 1, F30_532(RTCW(tr1), arg1));
		if (tb2) {
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
}

/* {DEPENDENCY_BUILDER}.to_dot */
EIF_REFERENCE F15_305 (EIF_REFERENCE Current)
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
	
	RTEAA("to_dot", 14, Current, 0, 0, 305);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr2 = (nstcall = 1, F30_544(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_void", EX_POST);
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

/* {DEPENDENCY_BUILDER}.to_svg */
EIF_REFERENCE F15_306 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("to_svg", 14, Current, 0, 0, 306);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_544(RTCW(tr2)));
	tr2 = (nstcall = 1, F18_356(RTCW(tr1), tr3));
	Result = (EIF_REFERENCE) tr2;
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

/* {DEPENDENCY_BUILDER}.to_svg_file */
EIF_REFERENCE F15_307 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("to_svg_file", 14, Current, 0, 1, 307);
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
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr3 = (nstcall = 1, F30_544(RTCW(tr2)));
	tr2 = RTMS_EX_H("svg",3,7566951);
	tr2 = (nstcall = 1, F18_360(RTCW(tr1), tr3, tr2, arg1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
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

/* {DEPENDENCY_BUILDER}.internal_clusters */
EIF_REFERENCE F15_308 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {DEPENDENCY_BUILDER}._invariant */
void F15_1 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 11, Current, 0, 0);
	RTIT("renderer_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("graph_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("internal_clusters_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit12 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
