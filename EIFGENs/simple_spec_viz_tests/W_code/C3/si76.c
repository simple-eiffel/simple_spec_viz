/*
 * Code for class SIMPLE_ISO_8859_15_ZCODEC
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F76_1390(EIF_REFERENCE);
extern EIF_TYPED_VALUE F76_1391(EIF_REFERENCE);
extern void EIF_Minit76(void);

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

/* {SIMPLE_ISO_8859_15_ZCODEC}.name */
RTOID (F76_1390)


EIF_TYPED_VALUE F76_1390 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F76_1390,1456,RTMS_EX_H("ISO-8859-15",11,1347677237));
}

/* {SIMPLE_ISO_8859_15_ZCODEC}.unicode_table */
RTOID (F76_1391)
EIF_TYPED_VALUE F76_1391 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unicode_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F76_1391);
	dtype = Dtype(Current);

	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 75, Current, 2, 0, 1456);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(75, Current, 1456);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0xF800026D, 0,0); /* Result */
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
	uw1 = tw1;
	ui4_1 = ((EIF_INTEGER_32) 128L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,621,341,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_CHARACTER_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(5142, Dtype(tr1)))(tr1, uw1x, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 31L);
	tr1 = RTLN(eif_new_type(314, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 0L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5517, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc1))(loc1)).it_b);
		if (tb1) break;
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc1))(loc1)).it_i4);
		tw1 = (EIF_CHARACTER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 128L) + ti4_1);
		uw1 = tw1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc1))(loc1)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc1))(loc1);
	}
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 127L);
	tr1 = RTLN(eif_new_type(314, 0x00).id);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 32L);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5517, "interval", tr1))(tr1, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4236, "new_cursor", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4124, "after", loc2))(loc2)).it_b);
		if (tb2) break;
		RTHOOK(6);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc2))(loc2)).it_i4);
		tw1 = (EIF_CHARACTER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 128L) + ti4_1);
		uw1 = tw1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4123, "item", loc2))(loc2)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4125, "forth", loc2))(loc2);
	}
	RTHOOK(8);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 8364L);
	uw1 = tw1;
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 164L) - ((EIF_INTEGER_32) 128L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
	RTHOOK(9);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 352L);
	uw1 = tw1;
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 166L) - ((EIF_INTEGER_32) 128L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
	RTHOOK(10);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 353L);
	uw1 = tw1;
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 168L) - ((EIF_INTEGER_32) 128L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
	RTHOOK(11);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 381L);
	uw1 = tw1;
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 180L) - ((EIF_INTEGER_32) 128L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
	RTHOOK(12);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 382L);
	uw1 = tw1;
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 184L) - ((EIF_INTEGER_32) 128L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
	RTHOOK(13);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 338L);
	uw1 = tw1;
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 188L) - ((EIF_INTEGER_32) 128L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
	RTHOOK(14);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 339L);
	uw1 = tw1;
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 189L) - ((EIF_INTEGER_32) 128L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
	RTHOOK(15);
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 376L);
	uw1 = tw1;
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 190L) - ((EIF_INTEGER_32) 128L));
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5152, "put", Result))(Result, uw1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("correct_size", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5138, "count", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 128L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef uw1
#undef Result
}

void EIF_Minit76 (void)
{
	GTCX
	RTOTS (1390,F76_1390)
	RTOTS (1391,F76_1391)
}


#ifdef __cplusplus
}
#endif
