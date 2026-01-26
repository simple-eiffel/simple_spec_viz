/*
 * Code for class IO_MEDIUM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "io257.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {IO_MEDIUM}.is_plain_text */
EIF_BOOLEAN F307_4032 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_plain_text", 306, Current, 0, 0, 4145);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_BOOLEAN) 0;
}

/* {IO_MEDIUM}.last_character */
EIF_CHARACTER_8 F307_4033 (EIF_REFERENCE Current)
{
	return *(EIF_CHARACTER_8 *)(Current + O3695[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_string */
EIF_REFERENCE F307_4034 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {IO_MEDIUM}.last_integer */
EIF_INTEGER_32 F307_4035 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3697[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_integer_32 */
EIF_INTEGER_32 F307_4036 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_integer_32", 306, Current, 0, 0, 4149);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3697[dtype-306]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_integer_64 */
EIF_INTEGER_64 F307_4037 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_64 *)(Current + O3699[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_integer_16 */
EIF_INTEGER_16 F307_4038 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_16 *)(Current + O3700[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_integer_8 */
EIF_INTEGER_8 F307_4039 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_8 *)(Current + O3701[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_natural_64 */
EIF_NATURAL_64 F307_4040 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current + O3702[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_natural */
EIF_NATURAL_32 F307_4041 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_32 *)(Current + O3703[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_natural_32 */
EIF_NATURAL_32 F307_4042 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_natural_32", 306, Current, 0, 0, 4155);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_NATURAL_32 *)(Current + O3703[dtype-306]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_natural_16 */
EIF_NATURAL_16 F307_4043 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_16 *)(Current + O3705[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_natural_8 */
EIF_NATURAL_8 F307_4044 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_8 *)(Current + O3706[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_real */
EIF_REAL_32 F307_4045 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_32 *)(Current + O3707[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_real_32 */
EIF_REAL_32 F307_4046 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_real_32", 306, Current, 0, 0, 4159);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_32 *)(Current + O3707[dtype-306]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.last_double */
EIF_REAL_64 F307_4047 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current + O3709[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.last_real_64 */
EIF_REAL_64 F307_4048 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("last_real_64", 306, Current, 0, 0, 4135);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + O3709[dtype-306]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.bytes_read */
EIF_INTEGER_32 F307_4049 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O3711[Dtype(Current)-306]);
}


/* {IO_MEDIUM}.dispose */
void F307_4061 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 306, Current, 0, 0, 4137);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3720[dtype-310])(Current))) {
		RTHOOK(2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3722[dtype-310])(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {IO_MEDIUM}.read_stream_thread_aware */
void F307_4109 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_stream_thread_aware", 306, Current, 0, 1, 4151);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3768[dtype-310])(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {IO_MEDIUM}.read_line_thread_aware */
void F307_4112 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_line_thread_aware", 306, Current, 0, 0, 4141);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3771[dtype-310])(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("last_string_not_void", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL)) {
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

/* {IO_MEDIUM}.lastchar */
EIF_CHARACTER_8 F307_4114 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastchar", 306, Current, 0, 0, 4142);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.laststring */
EIF_REFERENCE F307_4115 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("laststring", 306, Current, 0, 0, 4143);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REFERENCE *)(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastint */
EIF_INTEGER_32 F307_4116 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastint", 306, Current, 0, 0, 4144);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current + O3697[dtype-306]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastreal */
EIF_REAL_32 F307_4117 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastreal", 306, Current, 0, 0, 4140);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_32 *)(Current + O3707[dtype-306]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {IO_MEDIUM}.lastdouble */
EIF_REAL_64 F307_4118 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lastdouble", 306, Current, 0, 0, 4138);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_REAL_64 *)(Current + O3709[dtype-306]);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit257 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
