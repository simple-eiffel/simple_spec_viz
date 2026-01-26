/*
 * Code for class MA_DECIMAL_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma106.h"
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

/* {MA_DECIMAL_CONSTANTS}.zero */
static EIF_REFERENCE F132_1787_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(421)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("zero", 131, Current, 0, 0, 1817);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	(nstcall = -1, F1125_8846(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1125_8863(RTCW(Result)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("zero_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1787 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(421,F132_1787_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.negative_zero */
static EIF_REFERENCE F132_1788_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(422)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("negative_zero", 131, Current, 0, 0, 1818);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(421,(nstcall = 0, F132_1787), (Current));
	tr2 = RTOUCR(386,(nstcall = 1, F1125_8864), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("negative_zero_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1788 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(422,F132_1788_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.one */
static EIF_REFERENCE F132_1789_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(423)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("one", 131, Current, 0, 0, 1819);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(421,(nstcall = 0, F132_1787), (Current));
	tr2 = (nstcall = 1, F1125_8861(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("one_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1789 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(423,F132_1789_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.minus_one */
static EIF_REFERENCE F132_1790_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(424)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("minus_one", 131, Current, 0, 0, 1820);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(421,(nstcall = 0, F132_1787), (Current));
	tr2 = RTOUCR(384,(nstcall = 1, F1125_8862), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("minus_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1790 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(424,F132_1790_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.infinity */
static EIF_REFERENCE F132_1791_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(425)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("infinity", 131, Current, 0, 0, 1821);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(421,(nstcall = 0, F132_1787), (Current));
	tr2 = RTOUCR(389,(nstcall = 1, F1125_8867), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("infinity_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1791 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(425,F132_1791_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.negative_infinity */
static EIF_REFERENCE F132_1792_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(426)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("negative_infinity", 131, Current, 0, 0, 1822);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(421,(nstcall = 0, F132_1787), (Current));
	tr2 = RTOUCR(390,(nstcall = 1, F1125_8868), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("negative_infinity_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1792 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(426,F132_1792_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.not_a_number */
static EIF_REFERENCE F132_1793_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(427)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("not_a_number", 131, Current, 0, 0, 1823);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(421,(nstcall = 0, F132_1787), (Current));
	tr2 = RTOUCR(387,(nstcall = 1, F1125_8865), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_a_number", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1793 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(427,F132_1793_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.signaling_not_a_number */
static EIF_REFERENCE F132_1794_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(428)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("signaling_not_a_number", 131, Current, 0, 0, 1824);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(421,(nstcall = 0, F132_1787), (Current));
	tr2 = RTOUCR(388,(nstcall = 1, F1125_8866), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("signaling_not_a_number", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1794 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(428,F132_1794_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.minimum_integer */
static EIF_REFERENCE F132_1795_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(392)

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("minimum_integer", 131, Current, 1, 0, 1825);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1125, 0x01).id, 1125, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1126_8972(RTCW(loc1)));
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	tr2 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
	ti4_1 = RTOUCB(EIF_INTEGER_32,429,(nstcall = 1, F264_3369), (RTCW(tr2)));
	tr2 = eif_out__i4_s1(ti4_1);
	(nstcall = -1, F1125_8851(RTCW(tr1), tr2, loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("minimum_integer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1795 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(392,F132_1795_body,(Current));
}

/* {MA_DECIMAL_CONSTANTS}.maximum_integer */
static EIF_REFERENCE F132_1796_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(393)

	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("maximum_integer", 131, Current, 1, 0, 1826);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(1125, 0x01).id, 1125, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1126_8972(RTCW(loc1)));
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1124, 0x01).id, 1124, _OBJSIZ_1_1_0_2_0_0_0_0_);
	tr2 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
	ti4_1 = RTOUCB(EIF_INTEGER_32,381,(nstcall = 1, F264_3370), (RTCW(tr2)));
	tr2 = eif_out__i4_s1(ti4_1);
	(nstcall = -1, F1125_8851(RTCW(tr1), tr2, loc1));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("maximum_integer_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F132_1796 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(393,F132_1796_body,(Current));
}

void EIF_Minit106 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
