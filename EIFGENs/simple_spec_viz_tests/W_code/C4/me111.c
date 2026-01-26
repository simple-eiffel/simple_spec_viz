/*
 * Code for class MEMORY_STRUCTURE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F111_1869(EIF_REFERENCE);
extern void F111_1870(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F111_1871(EIF_REFERENCE);
extern EIF_TYPED_VALUE F111_1872(EIF_REFERENCE);
extern EIF_TYPED_VALUE F111_1873(EIF_REFERENCE);
extern EIF_TYPED_VALUE F111_1875(EIF_REFERENCE);
extern EIF_TYPED_VALUE F111_1876(EIF_REFERENCE);
extern void F111_9246(EIF_REFERENCE, int);
extern void EIF_Minit111(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MEMORY_STRUCTURE}.make */
void F111_1869 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	
	RTEAA(l_feature_name, 110, Current, 1, 0, 1900);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(110, Current, 1900);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 1832, 0x40000000, 1); /* internal_item */
	*(EIF_POINTER *)(Current + RTWA(1832, dtype)) = (EIF_POINTER) loc1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1833, 0xF80000FC, 0); /* managed_pointer */
	tr1 = RTLNSMART(RTWCT(1833, dtype, Dftype(Current)).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1831, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3584, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1833, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1828, 0x04000000, 1); /* shared */
	*(EIF_BOOLEAN *)(Current + RTWA(1828, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not_shared", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1828, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
}

/* {MEMORY_STRUCTURE}.make_by_pointer */
void F111_1870 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_by_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 110, Current, 0, 1, 1901);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(110, Current, 1901);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ptr_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1832, 0x40000000, 1); /* internal_item */
	*(EIF_POINTER *)(Current + RTWA(1832, dtype)) = (EIF_POINTER) arg1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1833, 0xF80000FC, 0); /* managed_pointer */
	*(EIF_REFERENCE *)(Current + RTWA(1833, dtype)) = (EIF_REFERENCE) NULL;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1828, 0x04000000, 1); /* shared */
	*(EIF_BOOLEAN *)(Current + RTWA(1828, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("shared", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1828, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {MEMORY_STRUCTURE}.shared */
EIF_TYPED_VALUE F111_1871 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(1828,Dtype(Current)));
	return r;
}


/* {MEMORY_STRUCTURE}.item */
EIF_TYPED_VALUE F111_1872 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "item";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 110, Current, 1, 0, 1903);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(110, Current, 1903);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(1828, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x40000000, 1,0); /* Result */
		tp1 = *(EIF_POINTER *)(Current + RTWA(1832, dtype));
		Result = (EIF_POINTER) tp1;
	} else {
		RTHOOK(3);
		RTDBGAL(1, 0xF80000FC, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1833, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTHOOK(5);
			RTDBGAL(0, 0x40000000, 1,0); /* Result */
			tp1 = *(EIF_POINTER *)(loc1 + RTVA(3590, "item", loc1));
			Result = (EIF_POINTER) tp1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
}

/* {MEMORY_STRUCTURE}.exists */
EIF_TYPED_VALUE F111_1873 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exists";
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 110, Current, 0, 0, 1904);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(110, Current, 1904);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1829, dtype))(Current)).it_p);
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tp1 != tp2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {MEMORY_STRUCTURE}.internal_item */
EIF_TYPED_VALUE F111_1875 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(1832,Dtype(Current)));
	return r;
}


/* {MEMORY_STRUCTURE}.managed_pointer */
EIF_TYPED_VALUE F111_1876 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1833,Dtype(Current)));
	return r;
}


/* {MEMORY_STRUCTURE}._invariant */
void F111_9246 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 110, Current, 0, 9245);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("managed_pointer_valid", Current);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1828, dtype));
	if ((EIF_BOOLEAN) !tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1833, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("internal_item_valid", Current);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(1828, dtype));
	if (tb2) {
		tp1 = *(EIF_POINTER *)(Current + RTWA(1832, dtype));
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		tb1 = (EIF_BOOLEAN)(tp1 != tp2);
	}
	if (tb1) {
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

void EIF_Minit111 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
