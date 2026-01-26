/*
 * Code for class TIME_UTILITY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ti113.h"
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TIME_UTILITY}.mod */
EIF_INTEGER_32 F139_1903 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("mod", 138, Current, 0, 2, 1933);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 % arg2);
	RTHOOK(2);
	if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		Result += arg2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("result_definition", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 * (nstcall = 0, F139_1904(Current, arg1, arg2))) + Result))) {
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

/* {TIME_UTILITY}.div */
EIF_INTEGER_32 F139_1904 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("div", 138, Current, 0, 2, 1934);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (arg1 / arg2);
	RTHOOK(2);
	tr8_1 = (EIF_REAL_64) (Result);
	if ((EIF_BOOLEAN) eif_is_greater_real_64 (tr8_1, (EIF_REAL_64) ((EIF_REAL_64) (arg1) /  (EIF_REAL_64) (arg2)))) {
		RTHOOK(3);
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_definition", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg2 * Result) + (nstcall = 0, F139_1903(Current, arg1, arg2))))) {
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

/* {TIME_UTILITY}.date_time_tools */
static EIF_REFERENCE F139_1905_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(368)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("date_time_tools", 138, Current, 0, 0, 1935);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(87, 0x01).id, 87, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F139_1905 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(368,F139_1905_body,(Current));
}

/* {TIME_UTILITY}.default_format_string */
EIF_REFERENCE F139_1906 (EIF_REFERENCE Current)
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
	
	RTEAA("default_format_string", 138, Current, 0, 0, 1936);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(368,(nstcall = 0, F139_1905), (Current));
	tr2 = RTOUCR(407,(nstcall = 1, F88_1343), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit113 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
