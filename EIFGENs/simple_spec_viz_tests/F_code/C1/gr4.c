/*
 * Code for class GRAPHVIZ_STYLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "gr4.h"
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

/* {GRAPHVIZ_STYLE}.make_bon */
void F7_163 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make_bon", 6, Current, 0, 0, 154);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("bon",3,6451054);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("ellipse",7,1277592421);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("filled",6,2020389732);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("white",5,1752655461);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("dashed",6,2133574500);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTMS_EX_H("gray90",6,1838716208);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = RTMS_EX_H("empty",5,1836862073);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTMS_EX_H("vee",3,7759205);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTMS_EX_H("Helvetica",9,684585313);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("bon",3,6451054);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("class_shape_ellipse", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTMS_EX_H("ellipse",7,1277592421);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
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

/* {GRAPHVIZ_STYLE}.make_uml */
void F7_164 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make_uml", 6, Current, 0, 0, 155);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("uml",3,7695724);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("record",6,1893156964);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("filled",6,2020389732);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("lightyellow",11,1323013239);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("dashed",6,2133574500);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTMS_EX_H("lightgray",9,47366521);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = RTMS_EX_H("empty",5,1836862073);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTMS_EX_H("vee",3,7759205);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTMS_EX_H("Courier",7,1501170546);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("uml",3,7695724);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("class_shape_record", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = RTMS_EX_H("record",6,1893156964);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
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

/* {GRAPHVIZ_STYLE}.make_minimal */
void F7_165 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make_minimal", 6, Current, 0, 0, 156);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTMS_EX_H("minimal",7,1003080556);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("box",3,6451064);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("dashed",6,2133574500);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_5_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	tr1 = RTMS_EX_H("normal",6,2136892268);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_6_) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	tr1 = RTMS_EX_H("normal",6,2136892268);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_7_) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	tr1 = RTMS_EX_H("sans-serif",10,125682790);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_8_) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_0_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("minimal",7,1003080556);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_STYLE}.make_default */
void F7_166 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make_default", 6, Current, 0, 0, 157);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F7_165(Current));
	RTHOOK(2);
	tr1 = RTMS_EX_H("default",7,626575476);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("default",7,626575476);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, tr2));
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
}

/* {GRAPHVIZ_STYLE}.name */
EIF_REFERENCE F7_167 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {GRAPHVIZ_STYLE}.class_shape */
EIF_REFERENCE F7_168 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {GRAPHVIZ_STYLE}.class_style */
EIF_REFERENCE F7_169 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {GRAPHVIZ_STYLE}.class_fillcolor */
EIF_REFERENCE F7_170 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {GRAPHVIZ_STYLE}.deferred_style */
EIF_REFERENCE F7_171 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {GRAPHVIZ_STYLE}.expanded_fillcolor */
EIF_REFERENCE F7_172 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_5_);
}


/* {GRAPHVIZ_STYLE}.inheritance_arrowhead */
EIF_REFERENCE F7_173 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_6_);
}


/* {GRAPHVIZ_STYLE}.client_arrowhead */
EIF_REFERENCE F7_174 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_7_);
}


/* {GRAPHVIZ_STYLE}.fontname */
EIF_REFERENCE F7_175 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_8_);
}


/* {GRAPHVIZ_STYLE}.fontsize */
EIF_INTEGER_32 F7_176 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_0_0_0_);
}


/* {GRAPHVIZ_STYLE}.apply_to_class_node */
void F7_177 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
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
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("apply_to_class_node", 6, Current, 0, 3, 168);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("node_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tr1 = (nstcall = 1, F29_507(RTCW(arg1), tr1));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr1 = (nstcall = 1, F29_510(RTCW(arg1), tr1));
		(nstcall = 1, F1_31(RTCW(tr1)));
	}
	RTHOOK(5);
	if (arg2) {
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
		tr1 = (nstcall = 1, F29_510(RTCW(arg1), tr1));
		(nstcall = 1, F1_31(RTCW(tr1)));
	} else {
		RTHOOK(7);
		tb1 = '\0';
		if (arg3) {
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tb2 = (nstcall = 1, F666_4976(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(8);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
			tr1 = (nstcall = 1, F29_509(RTCW(arg1), tr1));
			(nstcall = 1, F1_31(RTCW(tr1)));
			RTHOOK(9);
			tb1 = '\01';
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
			tb2 = (nstcall = 1, F666_4976(RTCW(tr1)));
			if (!tb2) {
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
				tr2 = RTMS_EX_H("filled",6,2020389732);
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(tr1))-1079])(tr1, tr2));
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("filled",6,2020389732);
				tr1 = (nstcall = 1, F29_510(RTCW(arg1), tr1));
				(nstcall = 1, F1_31(RTCW(tr1)));
			}
		} else {
			RTHOOK(11);
			tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
			tb1 = (nstcall = 1, F666_4976(RTCW(tr1)));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(12);
				tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
				tr1 = (nstcall = 1, F29_509(RTCW(arg1), tr1));
				(nstcall = 1, F1_31(RTCW(tr1)));
			}
		}
	}
	RTHOOK(13);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	tr1 = (nstcall = 1, F29_511(RTCW(arg1), tr1));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(14);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_0_0_0_);
	tr1 = (nstcall = 1, F29_512(RTCW(arg1), ti4_1));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_STYLE}.apply_to_inheritance_edge */
void F7_178 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("apply_to_inheritance_edge", 6, Current, 0, 1, 169);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("edge_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	tr1 = (nstcall = 1, F17_332(RTCW(arg1), tr1));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_STYLE}.apply_to_client_edge */
void F7_179 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("apply_to_client_edge", 6, Current, 0, 1, 170);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("edge_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	tr1 = (nstcall = 1, F17_332(RTCW(arg1), tr1));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_STYLE}.apply_defaults_to_graph */
void F7_180 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLR(4,tr3);
	RTLR(5,tr4);
	RTLIU(6);
	
	RTEAA("apply_defaults_to_graph", 6, Current, 0, 1, 171);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("graph_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr2 = RTMS_EX_H("fontname",8,2126193509);
	tr3 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr2 = RTMS_EX_H("fontsize",8,63127397);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_0_0_0_);
	tr3 = eif_out__i4_s1(ti4_1);
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr2 = RTMS_EX_H("node",4,1852793957);
	tr3 = RTMS_EX_H("[fontname=",10,660060221);
	tr4 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr3)-1079])(tr3, tr4));
	tr3 = RTMS_EX_H(", fontsize=",11,1433247037);
	tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr4))-1079])(tr4, tr3));
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_0_0_0_);
	tr4 = eif_out__i4_s1(ti4_1);
	tr4 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr3))-1079])(tr3, tr4));
	tr3 = RTMS_EX_H("]",1,93);
	tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr4))-1079])(tr4, tr3));
	(nstcall = 1, F12_250(RTCW(tr1), tr2, tr3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {GRAPHVIZ_STYLE}._invariant */
void F7_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 3, Current, 0, 0);
	RTIT("name_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("class_shape_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("class_style_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("class_fillcolor_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("deferred_style_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("expanded_fillcolor_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("inheritance_arrowhead_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("client_arrowhead_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fontname_not_void", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_8_);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fontsize_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_9_0_0_0_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit4 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
