/*
 * Code for class GRAPHVIZ_STYLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F4_163(EIF_REFERENCE);
extern void F4_164(EIF_REFERENCE);
extern void F4_165(EIF_REFERENCE);
extern void F4_166(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_167(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_168(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_169(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_170(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_171(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_172(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_173(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_174(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_175(EIF_REFERENCE);
extern EIF_TYPED_VALUE F4_176(EIF_REFERENCE);
extern void F4_177(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F4_178(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F4_179(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F4_180(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F4_9203(EIF_REFERENCE, int);
extern void EIF_Minit4(void);

#ifdef __cplusplus
}
#endif

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
void F4_163 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_bon";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 0, 154);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 154);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 173, 0xF8000165, 0); /* name */
	tr1 = RTMS_EX_H("bon",3,6451054);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(173, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 174, 0xF8000165, 0); /* class_shape */
	tr1 = RTMS_EX_H("ellipse",7,1277592421);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(174, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 175, 0xF8000165, 0); /* class_style */
	tr1 = RTMS_EX_H("filled",6,2020389732);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(175, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 176, 0xF8000165, 0); /* class_fillcolor */
	tr1 = RTMS_EX_H("white",5,1752655461);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(176, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 177, 0xF8000165, 0); /* deferred_style */
	tr1 = RTMS_EX_H("dashed",6,2133574500);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(177, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 178, 0xF8000165, 0); /* expanded_fillcolor */
	tr1 = RTMS_EX_H("gray90",6,1838716208);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(178, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 179, 0xF8000165, 0); /* inheritance_arrowhead */
	tr1 = RTMS_EX_H("empty",5,1836862073);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(179, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 180, 0xF8000165, 0); /* client_arrowhead */
	tr1 = RTMS_EX_H("vee",3,7759205);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(180, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 181, 0xF8000165, 0); /* fontname */
	tr1 = RTMS_EX_H("Helvetica",9,684585313);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(181, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 182, 0x10000000, 1); /* fontsize */
	*(EIF_INTEGER_32 *)(Current + RTWA(182, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("name_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		tr2 = RTMS_EX_H("bon",3,6451054);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("class_shape_ellipse", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		tr2 = RTMS_EX_H("ellipse",7,1277592421);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {GRAPHVIZ_STYLE}.make_uml */
void F4_164 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_uml";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 0, 155);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 155);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 173, 0xF8000165, 0); /* name */
	tr1 = RTMS_EX_H("uml",3,7695724);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(173, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 174, 0xF8000165, 0); /* class_shape */
	tr1 = RTMS_EX_H("record",6,1893156964);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(174, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 175, 0xF8000165, 0); /* class_style */
	tr1 = RTMS_EX_H("filled",6,2020389732);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(175, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 176, 0xF8000165, 0); /* class_fillcolor */
	tr1 = RTMS_EX_H("lightyellow",11,1323013239);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(176, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 177, 0xF8000165, 0); /* deferred_style */
	tr1 = RTMS_EX_H("dashed",6,2133574500);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(177, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 178, 0xF8000165, 0); /* expanded_fillcolor */
	tr1 = RTMS_EX_H("lightgray",9,47366521);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(178, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 179, 0xF8000165, 0); /* inheritance_arrowhead */
	tr1 = RTMS_EX_H("empty",5,1836862073);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(179, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 180, 0xF8000165, 0); /* client_arrowhead */
	tr1 = RTMS_EX_H("vee",3,7759205);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(180, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 181, 0xF8000165, 0); /* fontname */
	tr1 = RTMS_EX_H("Courier",7,1501170546);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(181, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 182, 0x10000000, 1); /* fontsize */
	*(EIF_INTEGER_32 *)(Current + RTWA(182, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("name_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		tr2 = RTMS_EX_H("uml",3,7695724);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("class_shape_record", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(12,1);
		tr2 = RTMS_EX_H("record",6,1893156964);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {GRAPHVIZ_STYLE}.make_minimal */
void F4_165 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_minimal";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 0, 156);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 156);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 173, 0xF8000165, 0); /* name */
	tr1 = RTMS_EX_H("minimal",7,1003080556);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(173, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 174, 0xF8000165, 0); /* class_shape */
	tr1 = RTMS_EX_H("box",3,6451064);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(174, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 175, 0xF8000165, 0); /* class_style */
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(175, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 176, 0xF8000165, 0); /* class_fillcolor */
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(176, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 177, 0xF8000165, 0); /* deferred_style */
	tr1 = RTMS_EX_H("dashed",6,2133574500);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(177, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 178, 0xF8000165, 0); /* expanded_fillcolor */
	tr1 = RTMS_EX_H("",0,0);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(178, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 179, 0xF8000165, 0); /* inheritance_arrowhead */
	tr1 = RTMS_EX_H("normal",6,2136892268);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(179, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 180, 0xF8000165, 0); /* client_arrowhead */
	tr1 = RTMS_EX_H("normal",6,2136892268);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(180, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 181, 0xF8000165, 0); /* fontname */
	tr1 = RTMS_EX_H("sans-serif",10,125682790);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(181, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 182, 0x10000000, 1); /* fontsize */
	*(EIF_INTEGER_32 *)(Current + RTWA(182, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("name_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		tr2 = RTMS_EX_H("minimal",7,1003080556);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {GRAPHVIZ_STYLE}.make_default */
void F4_166 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_default";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 0, 157);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 157);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(171, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 173, 0xF8000165, 0); /* name */
	tr1 = RTMS_EX_H("default",7,626575476);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(173, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("name_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = RTMS_EX_H("default",7,626575476);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6254, "same_string", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {GRAPHVIZ_STYLE}.name */
EIF_TYPED_VALUE F4_167 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(173,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.class_shape */
EIF_TYPED_VALUE F4_168 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(174,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.class_style */
EIF_TYPED_VALUE F4_169 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(175,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.class_fillcolor */
EIF_TYPED_VALUE F4_170 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(176,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.deferred_style */
EIF_TYPED_VALUE F4_171 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(177,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.expanded_fillcolor */
EIF_TYPED_VALUE F4_172 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(178,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.inheritance_arrowhead */
EIF_TYPED_VALUE F4_173 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(179,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.client_arrowhead */
EIF_TYPED_VALUE F4_174 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(180,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.fontname */
EIF_TYPED_VALUE F4_175 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(181,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.fontsize */
EIF_TYPED_VALUE F4_176 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(182,Dtype(Current)));
	return r;
}


/* {GRAPHVIZ_STYLE}.apply_to_class_node */
void F4_177 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "apply_to_class_node";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_b
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 3, 168);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 168);
	RTCC(arg1, 3, l_feature_name, 1, eif_new_type(25, 0x01), 0x01);
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
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(507, "set_shape", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(175, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", tr1))(tr1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(175, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(510, "set_style", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	}
	RTHOOK(5);
	if (arg2) {
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(177, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(510, "set_style", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	} else {
		RTHOOK(7);
		tb1 = '\0';
		if (arg3) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(178, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(7,1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", tr1))(tr1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTHOOK(8);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(178, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(509, "set_fillcolor", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
			RTHOOK(9);
			tb1 = '\01';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(175, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", tr1))(tr1)).it_b);
			if (!tb2) {
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(175, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,2);
				tr2 = RTMS_EX_H("filled",6,2020389732);
				ur1 = tr2;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6151, "has_substring", tr1))(tr1, ur1x)).it_b);
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(10);
				tr1 = RTMS_EX_H("filled",6,2020389732);
				ur1 = tr1;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(510, "set_style", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
			}
		} else {
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(176, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6124, "is_empty", tr1))(tr1)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(12);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(176, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(509, "set_fillcolor", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
			}
		}
	}
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(181, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(511, "set_fontname", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	RTHOOK(14);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(182, dtype));
	ui4_1 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(512, "set_fontsize", arg1))(arg1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {GRAPHVIZ_STYLE}.apply_to_inheritance_edge */
void F4_178 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "apply_to_inheritance_edge";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 1, 169);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 169);
	RTCC(arg1, 3, l_feature_name, 1, eif_new_type(13, 0x01), 0x01);
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
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(179, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(335, "set_arrowhead", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {GRAPHVIZ_STYLE}.apply_to_client_edge */
void F4_179 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "apply_to_client_edge";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 1, 170);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 170);
	RTCC(arg1, 3, l_feature_name, 1, eif_new_type(13, 0x01), 0x01);
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
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(180, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(335, "set_arrowhead", arg1))(arg1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(34, "do_nothing", tr1))(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {GRAPHVIZ_STYLE}.apply_defaults_to_graph */
void F4_180 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "apply_defaults_to_graph";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLR(7,tr4);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 3, Current, 0, 1, 171);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(3, Current, 171);
	RTCC(arg1, 3, l_feature_name, 1, eif_new_type(26, 0x01), 0x01);
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
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(522, "attributes", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("fontname",8,2126193509);
	ur1 = tr2;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(181, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(253, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(522, "attributes", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("fontsize",8,63127397);
	ur1 = tr2;
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(182, dtype));
	tr3 = eif_out__i4_s1(ti4_1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(253, "put", tr1))(tr1, ur1x, ur2x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(522, "attributes", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("node",4,1852793957);
	ur1 = tr2;
	tr3 = RTMS_EX_H("[fontname=",10,660060221);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(181, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr4);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr3))(tr3, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = RTMS_EX_H(", fontsize=",11,1433247037);
	ur2 = tr3;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr4))(tr4, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(182, dtype));
	tr4 = eif_out__i4_s1(ti4_1);
	ur2 = RTCCL(tr4);
	tr4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr3))(tr3, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr3 = RTMS_EX_H("]",1,93);
	ur2 = tr3;
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr4))(tr4, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(253, "put", tr1))(tr1, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {GRAPHVIZ_STYLE}._invariant */
void F4_9203 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 3, Current, 0, 9202);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("name_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(173, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("class_shape_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(174, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("class_style_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(175, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("class_fillcolor_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(176, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("deferred_style_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(177, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("expanded_fillcolor_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(178, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("inheritance_arrowhead_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(179, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("client_arrowhead_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(180, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fontname_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(181, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("fontsize_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(182, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit4 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
