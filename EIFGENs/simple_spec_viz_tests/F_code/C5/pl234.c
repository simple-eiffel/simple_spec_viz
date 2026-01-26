/*
 * Code for class PLATFORM
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pl234.h"
#include <string.h>
#include "eif_built_in.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PLATFORM}.is_thread_capable */
EIF_BOOLEAN F263_3304 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_thread_capable", 262, Current, 0, 0, 3299);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_thread_capable__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_scoop_capable */
EIF_BOOLEAN F263_3305 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_scoop_capable", 262, Current, 0, 0, 3300);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_scoop_capable__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_dotnet */
EIF_BOOLEAN F263_3306 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_dotnet", 262, Current, 0, 0, 3301);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_dotnet__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_windows */
EIF_BOOLEAN F263_3307 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_windows", 262, Current, 0, 0, 3302);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_windows__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_unix */
EIF_BOOLEAN F263_3308 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_unix", 262, Current, 0, 0, 3303);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_unix__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_vms */
EIF_BOOLEAN F263_3309 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_vms", 262, Current, 0, 0, 3304);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_vms__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_mac */
EIF_BOOLEAN F263_3310 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_mac", 262, Current, 0, 0, 3305);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_mac__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_vxworks */
EIF_BOOLEAN F263_3311 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_vxworks", 262, Current, 0, 0, 3306);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_vxworks__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.is_little_endian */
static EIF_BOOLEAN F263_3312_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_8 loc2 = (EIF_NATURAL_8) 0;
	EIF_NATURAL_8 loc3 = (EIF_NATURAL_8) 0;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOUDB(EIF_BOOLEAN, 34)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_little_endian", 262, Current, 3, 0, 3307);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = (EIF_NATURAL_16) (EIF_NATURAL_16) ((EIF_INTEGER_32) 17185L);
	RTHOOK(2);
	loc2 = (EIF_NATURAL_8) (EIF_NATURAL_8) ((EIF_INTEGER_32) 33L);
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_8 *) &(loc3), (const void *) (EIF_NATURAL_16 *) &(loc1), (size_t) ((EIF_INTEGER_32) 1L));
	RTHOOK(4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc3 == loc2);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_BOOLEAN F263_3312 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_BOOLEAN,34,F263_3312_body,(Current));
}

/* {PLATFORM}.is_64_bits */
EIF_BOOLEAN F263_3313 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_64_bits", 262, Current, 0, 0, 3308);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_PLATFORM_is_64_bits__b;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.boolean_bytes */
EIF_INTEGER_32 F263_3314 (EIF_REFERENCE Current)
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
	
	RTEAA("boolean_bytes", 262, Current, 0, 0, 3309);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_boolean_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.pointer_bytes */
EIF_INTEGER_32 F263_3327 (EIF_REFERENCE Current)
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
	
	RTEAA("pointer_bytes", 262, Current, 0, 0, 3322);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_pointer_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.boolean_bits */
EIF_INTEGER_32 F263_3328 (EIF_REFERENCE Current)
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
	
	RTEAA("boolean_bits", 262, Current, 0, 0, 3323);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F263_3314(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.pointer_bits */
EIF_INTEGER_32 F263_3341 (EIF_REFERENCE Current)
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
	
	RTEAA("pointer_bits", 262, Current, 0, 0, 3285);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F263_3327(Current));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.character_bytes */
EIF_INTEGER_32 F263_3342 (EIF_REFERENCE Current)
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
	
	RTEAA("character_bytes", 262, Current, 0, 0, 3286);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_character_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.wide_character_bytes */
EIF_INTEGER_32 F263_3343 (EIF_REFERENCE Current)
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
	
	RTEAA("wide_character_bytes", 262, Current, 0, 0, 3287);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_wide_character_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.integer_bytes */
EIF_INTEGER_32 F263_3344 (EIF_REFERENCE Current)
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
	
	RTEAA("integer_bytes", 262, Current, 0, 0, 3288);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_integer_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.real_bytes */
EIF_INTEGER_32 F263_3345 (EIF_REFERENCE Current)
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
	
	RTEAA("real_bytes", 262, Current, 0, 0, 3289);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_real_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.double_bytes */
EIF_INTEGER_32 F263_3346 (EIF_REFERENCE Current)
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
	
	RTEAA("double_bytes", 262, Current, 0, 0, 3290);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_PLATFORM_double_bytes__i4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.character_bits */
EIF_INTEGER_32 F263_3347 (EIF_REFERENCE Current)
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
	
	RTEAA("character_bits", 262, Current, 0, 0, 3291);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.integer_bits */
EIF_INTEGER_32 F263_3348 (EIF_REFERENCE Current)
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
	
	RTEAA("integer_bits", 262, Current, 0, 0, 3292);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.real_bits */
EIF_INTEGER_32 F263_3349 (EIF_REFERENCE Current)
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
	
	RTEAA("real_bits", 262, Current, 0, 0, 3293);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 32L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.double_bits */
EIF_INTEGER_32 F263_3350 (EIF_REFERENCE Current)
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
	
	RTEAA("double_bits", 262, Current, 0, 0, 3294);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 64L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.maximum_character_code */
EIF_INTEGER_32 F263_3351 (EIF_REFERENCE Current)
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
	
	RTEAA("maximum_character_code", 262, Current, 0, 0, 3295);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 255L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 127L))) {
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

/* {PLATFORM}.maximum_integer */
EIF_INTEGER_32 F263_3352 (EIF_REFERENCE Current)
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
	
	RTEAA("maximum_integer", 262, Current, 0, 0, 3296);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
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
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {PLATFORM}.minimum_character_code */
EIF_INTEGER_32 F263_3353 (EIF_REFERENCE Current)
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
	
	RTEAA("minimum_character_code", 262, Current, 0, 0, 3297);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("meaningful", EX_POST);
		if ((EIF_BOOLEAN) (Result <= ((EIF_INTEGER_32) 0L))) {
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

/* {PLATFORM}.minimum_integer */
EIF_INTEGER_32 F263_3354 (EIF_REFERENCE Current)
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
	
	RTEAA("minimum_integer", 262, Current, 0, 0, 3298);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
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
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit234 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
