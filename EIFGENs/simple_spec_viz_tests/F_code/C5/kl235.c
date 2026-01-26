/*
 * Code for class KL_PLATFORM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl235.h"
#include <math.h>
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

/* {KL_PLATFORM}.boolean_bits */
static EIF_INTEGER_32 F264_3355_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 443)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_bits", 263, Current, 0, 0, 3332);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (nstcall = 0, F263_3328(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
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

EIF_INTEGER_32 F264_3355 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,443,F264_3355_body,(Current));
}

/* {KL_PLATFORM}.character_bits */
static EIF_INTEGER_32 F264_3356_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 444)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_bits", 263, Current, 0, 0, 3333);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("more_than_byte", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 8L))) {
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

EIF_INTEGER_32 F264_3356 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,444,F264_3356_body,(Current));
}

/* {KL_PLATFORM}.double_bits */
static EIF_INTEGER_32 F264_3357_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 445)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_bits", 263, Current, 0, 0, 3334);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("more_than_real", EX_POST);
		if ((EIF_BOOLEAN) (Result >= RTOUCB(EIF_INTEGER_32,446,(nstcall = 0, F264_3360), (Current)))) {
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

EIF_INTEGER_32 F264_3357 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,445,F264_3357_body,(Current));
}

/* {KL_PLATFORM}.integer_bits */
static EIF_INTEGER_32 F264_3358_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 447)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_bits", 263, Current, 0, 0, 3335);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("more_than_character", EX_POST);
		if ((EIF_BOOLEAN) (Result >= RTOUCB(EIF_INTEGER_32,444,(nstcall = 0, F264_3356), (Current)))) {
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

EIF_INTEGER_32 F264_3358 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,447,F264_3358_body,(Current));
}

/* {KL_PLATFORM}.pointer_bits */
static EIF_INTEGER_32 F264_3359_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 448)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_bits", 263, Current, 0, 0, 3336);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (nstcall = 0, F263_3341(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F264_3359 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,448,F264_3359_body,(Current));
}

/* {KL_PLATFORM}.real_bits */
static EIF_INTEGER_32 F264_3360_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 446)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_bits", 263, Current, 0, 0, 3337);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_INTEGER_32 F264_3360 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,446,F264_3360_body,(Current));
}

/* {KL_PLATFORM}.boolean_bytes */
static EIF_INTEGER_32 F264_3361_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 449)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_bytes", 263, Current, 0, 0, 3338);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (nstcall = 0, F263_3314(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
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

EIF_INTEGER_32 F264_3361 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,449,F264_3361_body,(Current));
}

/* {KL_PLATFORM}.character_bytes */
static EIF_INTEGER_32 F264_3362_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 450)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_bytes", 263, Current, 0, 0, 3339);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("more_than_byte", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
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

EIF_INTEGER_32 F264_3362 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,450,F264_3362_body,(Current));
}

/* {KL_PLATFORM}.double_bytes */
static EIF_INTEGER_32 F264_3363_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 451)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("double_bytes", 263, Current, 0, 0, 3340);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("more_than_real", EX_POST);
		if ((EIF_BOOLEAN) (Result >= RTOUCB(EIF_INTEGER_32,452,(nstcall = 0, F264_3366), (Current)))) {
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

EIF_INTEGER_32 F264_3363 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,451,F264_3363_body,(Current));
}

/* {KL_PLATFORM}.integer_bytes */
static EIF_INTEGER_32 F264_3364_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 453)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_bytes", 263, Current, 0, 0, 3341);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("more_than_character", EX_POST);
		if ((EIF_BOOLEAN) (Result >= RTOUCB(EIF_INTEGER_32,450,(nstcall = 0, F264_3362), (Current)))) {
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

EIF_INTEGER_32 F264_3364 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,453,F264_3364_body,(Current));
}

/* {KL_PLATFORM}.pointer_bytes */
static EIF_INTEGER_32 F264_3365_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 454)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_bytes", 263, Current, 0, 0, 3342);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (nstcall = 0, F263_3327(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
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

EIF_INTEGER_32 F264_3365 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,454,F264_3365_body,(Current));
}

/* {KL_PLATFORM}.real_bytes */
static EIF_INTEGER_32 F264_3366_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 452)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_bytes", 263, Current, 0, 0, 3343);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
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

EIF_INTEGER_32 F264_3366 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,452,F264_3366_body,(Current));
}

/* {KL_PLATFORM}.minimum_character_code */
static EIF_INTEGER_32 F264_3367_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 430)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minimum_character_code", 263, Current, 0, 0, 3344);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
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

EIF_INTEGER_32 F264_3367 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,430,F264_3367_body,(Current));
}

/* {KL_PLATFORM}.maximum_character_code */
static EIF_INTEGER_32 F264_3368_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 431)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maximum_character_code", 263, Current, 0, 0, 3345);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 255L))) {
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

EIF_INTEGER_32 F264_3368 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,431,F264_3368_body,(Current));
}

/* {KL_PLATFORM}.minimum_integer */
static EIF_INTEGER_32 F264_3369_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 429)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minimum_integer", 263, Current, 0, 0, 3346);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0x80000000L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tr8_1 = (EIF_REAL_64) (Result);
		ti4_1 = RTOUCB(EIF_INTEGER_32,447,(nstcall = 0, F264_3358), (Current));
		tr8_2 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 2L)));
		tr8_3 = (EIF_REAL_64) (((EIF_INTEGER_32) -2L));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, (EIF_REAL_64) ((EIF_REAL_64) pow ((EIF_REAL_64) (((EIF_INTEGER_32) 2L)), (EIF_REAL_64) (tr8_2)) * tr8_3))) {
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

EIF_INTEGER_32 F264_3369 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,429,F264_3369_body,(Current));
}

/* {KL_PLATFORM}.maximum_integer */
static EIF_INTEGER_32 F264_3370_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 381)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maximum_integer", 263, Current, 0, 0, 3347);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2147483647L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) -(EIF_INTEGER_32) (RTOUCB(EIF_INTEGER_32,429,(nstcall = 0, F264_3369), (Current)) + ((EIF_INTEGER_32) 1L)))) {
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

EIF_INTEGER_32 F264_3370 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,381,F264_3370_body,(Current));
}

/* {KL_PLATFORM}.minimum_integer_64 */
static EIF_INTEGER_64 F264_3371_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_64)
	RTOUDB(EIF_INTEGER_64, 455)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("minimum_integer_64", 263, Current, 0, 0, 3348);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_64) ((EIF_INTEGER_64) RTI64C(0x8000000000000000));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
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

EIF_INTEGER_64 F264_3371 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_64,455,F264_3371_body,(Current));
}

/* {KL_PLATFORM}.maximum_integer_64 */
static EIF_INTEGER_64 F264_3372_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_64)
	RTOUDB(EIF_INTEGER_64, 456)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("maximum_integer_64", 263, Current, 0, 0, 3349);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_64) ((EIF_INTEGER_64) RTI64C(9223372036854775807));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_64) -(EIF_INTEGER_64) (RTOUCB(EIF_INTEGER_64,455,(nstcall = 0, F264_3371), (Current)) + (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L)))) {
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

EIF_INTEGER_64 F264_3372 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_64,456,F264_3372_body,(Current));
}

void EIF_Minit235 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
