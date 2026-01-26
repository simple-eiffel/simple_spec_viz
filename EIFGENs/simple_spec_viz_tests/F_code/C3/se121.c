/*
 * Code for class SED_UTILITIES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "se121.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SED_UTILITIES}.is_void_safe */
static EIF_BOOLEAN F147_1974_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOUDB(EIF_BOOLEAN, 304)
	dftype = Dftype(Current);

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("is_void_safe", 146, Current, 0, 0, 1987);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0xFF01,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNTY2(typres0, 0x01);
	}
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,898,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTY2(typres0, 0x01);
	}
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F147_1974 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_BOOLEAN,304,F147_1974_body,(Current));
}

/* {SED_UTILITIES}.abstract_type */
EIF_INTEGER_32 F147_1977 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("abstract_type", 146, Current, 1, 1, 1990);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_type_id_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = RTOUCR(305,(nstcall = 0, F147_1978), (Current));
	RTHOOK(3);
	(nstcall = 1, F889_5944(RTCW(loc1), arg1));
	RTHOOK(4);
	tb1 = (nstcall = 1, F889_5934(RTCW(loc1)));
	if (tb1) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_4_3_0_0_);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(6);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SED_UTILITIES}.special_type_mapping */
static EIF_REFERENCE F147_1978_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(305)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("special_type_mapping", 146, Current, 0, 0, 1991);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,888,1005,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 888, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F889_5902(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNTY2(eif_new_type(1035, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F981_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 3L), ti4_1));
	RTHOOK(3);
	tr1 = RTLNTY2(eif_new_type(1032, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F979_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 2L), ti4_1));
	RTHOOK(4);
	tr1 = RTLNTY2(eif_new_type(1029, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F980_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 12L), ti4_1));
	RTHOOK(5);
	tr1 = RTLNTY2(eif_new_type(1020, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F971_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 13L), ti4_1));
	RTHOOK(6);
	tr1 = RTLNTY2(eif_new_type(999, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F972_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 14L), ti4_1));
	RTHOOK(7);
	tr1 = RTLNTY2(eif_new_type(1017, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F973_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 15L), ti4_1));
	RTHOOK(8);
	tr1 = RTLNTY2(eif_new_type(1014, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F974_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 16L), ti4_1));
	RTHOOK(9);
	tr1 = RTLNTY2(eif_new_type(1011, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F975_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 9L), ti4_1));
	RTHOOK(10);
	tr1 = RTLNTY2(eif_new_type(1008, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F976_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 10L), ti4_1));
	RTHOOK(11);
	tr1 = RTLNTY2(eif_new_type(1005, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F977_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 4L), ti4_1));
	RTHOOK(12);
	tr1 = RTLNTY2(eif_new_type(1002, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F978_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 11L), ti4_1));
	RTHOOK(13);
	tr1 = RTLNTY2(eif_new_type(1023, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F970_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 5L), ti4_1));
	RTHOOK(14);
	tr1 = RTLNTY2(eif_new_type(1026, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F969_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 6L), ti4_1));
	RTHOOK(15);
	tr1 = RTLNTY2(eif_new_type(1068, 0x00), 0x00);
	ti4_1 = (nstcall = 1, F967_6341(tr1));
	(nstcall = 1, F889_5948(RTCW(Result), ((EIF_INTEGER_32) 0L), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("special_type_mapping_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F147_1978 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(305,F147_1978_body,(Current));
}

void EIF_Minit121 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
