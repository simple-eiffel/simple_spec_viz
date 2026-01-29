/*
 * Code for class EXECUTION_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex267.h"
#include <string.h>
#include "eif_path_name.h"
#include <eif_system.h>
#include "eif_dir.h"
#include <stdlib.h>
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F317_4516
static EIF_NATURAL_32 inline_F317_4516 (void)
{
	#ifdef EIF_WINDOWS
	SYSTEM_INFO SysInfo;
	ZeroMemory (&SysInfo, sizeof (SYSTEM_INFO));
	GetSystemInfo (&SysInfo);
	return (EIF_NATURAL_32) SysInfo.dwNumberOfProcessors;
#elif defined(EIF_MACOSX)
		/* MacOS X < 10.4 */
	int nm [2];
	size_t len = 4;
	uint32_t count;
	nm [0] = CTL_HW; nm [1] = HW_AVAILCPU;
	sysctl (nm, 2, &count, &len, NULL, 0);
	if(count < 1) {
		nm[1] = HW_NCPU;
		sysctl(nm, 2, &count, &len, NULL, 0);
		if (count < 1) {count = 1;}
	}
	return (EIF_NATURAL_32) count;
#else
		/* Linux, Solaris, AIX, Mac OS X >=10.4 (i.e. Tiger onwards), ... */
	return (EIF_NATURAL_32) sysconf(_SC_NPROCESSORS_ONLN);
#endif
	;
}
#define INLINE_F317_4516
#endif
#ifndef INLINE_F317_4525
static EIF_POINTER inline_F317_4525 (EIF_INTEGER_32 arg1)
{
	if (eif_environ) {
	#ifdef EIF_WINDOWS
		EIF_NATIVE_CHAR *vars = (EIF_NATIVE_CHAR *) eif_environ;
		int cnt = 0;
		for (; *vars; vars++) {
		   if (arg1==cnt) return vars;
		   while (*vars) { vars++; }
		   cnt++;
		}
		return NULL;
	#else
		return ((EIF_NATIVE_CHAR **)eif_environ)[arg1];
	#endif
} else {
	return NULL;
}
	;
}
#define INLINE_F317_4525
#endif
#ifndef INLINE_F317_4529
static EIF_POINTER inline_F317_4529 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wgetenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return getenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F317_4529
#endif
#ifndef INLINE_F317_4530
static EIF_INTEGER_32 inline_F317_4530 (EIF_POINTER arg1)
{
	#ifdef EIF_WINDOWS
	return _wputenv ((EIF_NATIVE_CHAR *) arg1);
#else
	return putenv ((EIF_NATIVE_CHAR *) arg1);
#endif
	;
}
#define INLINE_F317_4530
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXECUTION_ENVIRONMENT}.arguments */
static EIF_REFERENCE F317_4501_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(1)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("arguments", 316, Current, 0, 0, 4534);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(482, 0x01).id, 482, _OBJSIZ_0_0_0_0_0_0_0_0_);
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

EIF_REFERENCE F317_4501 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(1,F317_4501_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.command_line */
static EIF_REFERENCE F317_4502_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(44)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("command_line", 316, Current, 0, 0, 4535);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(367, 0x01).id, 367, _OBJSIZ_0_0_0_0_0_0_0_0_);
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

EIF_REFERENCE F317_4502 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(44,F317_4502_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.current_working_path */
EIF_REFERENCE F317_4503 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("current_working_path", 316, Current, 3, 0, 4536);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3908(RTCW(loc3), loc1));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F317_4528(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(5);
		Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr1 = RTMS_EX_H(".",1,46);
		(nstcall = -1, F965_6278(RTCW(Result), tr1));
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) loc2;
			RTHOOK(8);
			(nstcall = 1, F303_3998(RTCW(loc3), loc1));
			RTHOOK(9);
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			loc2 = (nstcall = 0, F317_4528(Current, tp1, loc1));
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			RTHOOK(11);
			Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			(nstcall = -1, F965_6282(RTCW(Result), tp1));
		} else {
			RTHOOK(12);
			Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr1 = RTMS_EX_H(".",1,46);
			(nstcall = -1, F965_6278(RTCW(Result), tr1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.current_working_directory */
EIF_REFERENCE F317_4504 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("current_working_directory", 316, Current, 3, 0, 4537);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3908(RTCW(loc3), loc1));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F317_4528(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc2 == ((EIF_INTEGER_32) -1L))) {
		RTHOOK(5);
		Result = RTMS_EX_H(".",1,46);
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(7);
			loc1 = (EIF_INTEGER_32) loc2;
			RTHOOK(8);
			(nstcall = 1, F303_3998(RTCW(loc3), loc1));
			RTHOOK(9);
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			loc2 = (nstcall = 0, F317_4528(Current, tp1, loc1));
		}
		RTHOOK(10);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
			RTHOOK(11);
			tr1 = RTOUCR(45,(nstcall = 0, F317_4527), (Current));
			tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
			tr2 = (nstcall = 1, F315_4461(RTCW(tr1), tp1));
			Result = (EIF_REFERENCE) tr2;
		} else {
			RTHOOK(12);
			Result = RTMS_EX_H(".",1,46);
			
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.default_shell */
static EIF_REFERENCE F317_4505_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(46)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("default_shell", 316, Current, 0, 0, 4538);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTMS_EX_H("SHELL",5,1213138508);
	Result = (nstcall = 0, F317_4507(Current, tr1));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(Result != NULL)) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1076_7601(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
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

EIF_REFERENCE F317_4505 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(46,F317_4505_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.get */
EIF_REFERENCE F317_4506 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("get", 316, Current, 1, 1, 4539);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_has_null_character", EX_PRE);
		tc1 = (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R4370[Dtype(RTCW(arg1))-663])(arg1, (EIF_REFERENCE) &tc1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F317_4507(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1076_7657(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.item */
EIF_REFERENCE F317_4507 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("item", 316, Current, 2, 1, 4540);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R6127[Dtype(RTCW(arg1))-1079])(arg1, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F314_4421(RTCW(loc1), arg1));
	RTHOOK(4);
	tp1 = (nstcall = 1, F314_4428(RTCW(loc1)));
	loc2 = (nstcall = 0, F317_4529(Current, tp1));
	RTHOOK(5);
	tb1 = !loc2;
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F314_4423(RTCW(tr1), loc2));
		tr2 = (nstcall = 1, F314_4426(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.home_directory_path */
static EIF_REFERENCE F317_4508_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(47)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLIU(3);
	
	RTEAA("home_directory_path", 316, Current, 3, 0, 4541);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("home_directory_supported", EX_PRE);
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb1 = (nstcall = 1, F74_993(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(3);
	loc3 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3908(RTCW(loc3), loc1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F317_4534(Current, tp1, loc1));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		(nstcall = 1, F303_3998(RTCW(loc3), loc1));
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F317_4534(Current, tp1, loc1));
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		(nstcall = -1, F965_6282(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F317_4508 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(47,F317_4508_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.user_directory_path */
static EIF_REFERENCE F317_4509_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(48)

	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc4);
	RTLIU(4);
	
	RTEAA("user_directory_path", 316, Current, 4, 0, 4542);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3908(RTCW(loc3), ((EIF_INTEGER_32) 50L)));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F317_4535(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		(nstcall = 1, F303_3998(RTCW(loc3), loc1));
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F317_4535(Current, tp1, loc1));
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		(nstcall = -1, F965_6282(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = (nstcall = 1, F965_6286(RTCW(Result)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
	} else {
		RTHOOK(11);
		tb1 = '\0';
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb2 = (nstcall = 1, F74_993(tr1));
		if (tb2) {
			tr1 = RTOUCR(47,(nstcall = 0, F317_4508), (Current));
			loc4 = tr1;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(12);
			Result = (EIF_REFERENCE) loc4;
		} else {
			RTHOOK(13);
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F317_4509 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(48,F317_4509_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.temporary_directory_path */
static EIF_REFERENCE F317_4510_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(49)

	RTLI(4);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("temporary_directory_path", 316, Current, 3, 0, 4543);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F314_4422(RTCW(loc3), loc1));
	RTHOOK(3);
	tp1 = (nstcall = 1, F314_4428(RTCW(loc3)));
	loc2 = (nstcall = 0, F317_4536(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		loc3 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F314_4422(RTCW(loc3), loc1));
		RTHOOK(7);
		tp1 = (nstcall = 1, F314_4428(RTCW(loc3)));
		loc2 = (nstcall = 0, F317_4536(Current, tp1, loc1));
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = (nstcall = 1, F314_4426(RTCW(loc3)));
		(nstcall = -1, F965_6278(RTCW(tr1), tr2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F317_4510 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(49,F317_4510_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.home_directory_name */
static EIF_REFERENCE F317_4511_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(50)

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("home_directory_name", 316, Current, 3, 0, 4544);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("home_directory_supported", EX_PRE);
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb1 = (nstcall = 1, F74_993(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(2);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(3);
	loc3 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3908(RTCW(loc3), loc1));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F317_4534(Current, tp1, loc1));
	RTHOOK(5);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(6);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(7);
		(nstcall = 1, F303_3998(RTCW(loc3), loc1));
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F317_4534(Current, tp1, loc1));
	}
	RTHOOK(9);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(10);
		tr1 = RTOUCR(45,(nstcall = 0, F317_4527), (Current));
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		tr2 = (nstcall = 1, F315_4461(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F317_4511 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(50,F317_4511_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.user_directory_name */
static EIF_REFERENCE F317_4512_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(51)

	RTLI(5);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc4);
	RTLIU(5);
	
	RTEAA("user_directory_name", 316, Current, 4, 0, 4545);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	loc3 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3908(RTCW(loc3), ((EIF_INTEGER_32) 50L)));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
	loc2 = (nstcall = 0, F317_4535(Current, tp1, loc1));
	RTHOOK(4);
	if ((EIF_BOOLEAN) (loc2 > loc1)) {
		RTHOOK(5);
		loc1 = (EIF_INTEGER_32) loc2;
		RTHOOK(6);
		(nstcall = 1, F303_3998(RTCW(loc3), loc1));
		RTHOOK(7);
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		loc2 = (nstcall = 0, F317_4535(Current, tp1, loc1));
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc2 <= loc1))) {
		RTHOOK(9);
		tr1 = RTOUCR(45,(nstcall = 0, F317_4527), (Current));
		tp1 = *(EIF_POINTER *)(RTCW(loc3)+ _PTROFF_0_1_0_1_0_0_);
		tr2 = (nstcall = 1, F315_4461(RTCW(tr1), tp1));
		Result = (EIF_REFERENCE) tr2;
	}
	RTHOOK(10);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = (nstcall = 1, F670_4976(RTCW(Result)));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
	} else {
		RTHOOK(11);
		tb1 = '\0';
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb2 = (nstcall = 1, F74_993(tr1));
		if (tb2) {
			tr1 = RTOUCR(50,(nstcall = 0, F317_4511), (Current));
			loc4 = tr1;
			tb1 = EIF_TEST(loc4);
		}
		if (tb1) {
			RTHOOK(12);
			Result = (EIF_REFERENCE) loc4;
		} else {
			RTHOOK(13);
			Result = (EIF_REFERENCE) NULL;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F317_4512 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(51,F317_4512_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.root_directory_name */
static EIF_REFERENCE F317_4513_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(52)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("root_directory_name", 316, Current, 0, 0, 4546);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("root_directory_supported", EX_PRE);
		tr1 = RTOUCR(10,(nstcall = 0, F1_28), (Current));
		tb1 = (nstcall = 1, F74_994(tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTOTP;
	RTHOOK(2);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(3);
		Result = RTMS_EX_H("\\",1,92);
	} else {
		RTHOOK(4);
		if ((nstcall = 0, F263_3309(Current))) {
			RTHOOK(5);
			Result = RTMS_EX_H("[000000]",8,1461084509);
		} else {
			RTHOOK(6);
			Result = RTMS_EX_H("/",1,47);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F317_4513 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(52,F317_4513_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.starting_environment_variables */
EIF_REFERENCE F317_4514 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("starting_environment_variables", 316, Current, 4, 0, 4547);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,885,0xFF01,1080,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 885, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F886_5902(RTCW(Result), ((EIF_INTEGER_32) 40L)));
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	loc1 = (nstcall = 0, F317_4525(Current, loc2));
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F314_4422(RTCW(loc3), ((EIF_INTEGER_32) 0L)));
	for (;;) {
		RTHOOK(5);
		tb1 = !loc1;
		if (tb1) break;
		RTHOOK(6);
		(nstcall = 1, F314_4438(RTCW(loc3), loc1));
		RTHOOK(7);
		tr1 = (nstcall = 1, F314_4426(RTCW(loc3)));
		tr1 = (nstcall = 0, F317_4526(Current, tr1));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(8);
			tr1 = eif_boxed_item(loc4,1);
			tr2 = (nstcall = 1, F1076_7657(RTCW(tr1)));
			tr1 = eif_boxed_item(loc4,2);
			tr3 = (nstcall = 1, F1076_7657(RTCW(tr1)));
			(nstcall = 1, F886_5949(RTCW(Result), tr2, tr3));
		}
		RTHOOK(9);
		loc2++;
		RTHOOK(10);
		loc1 = (nstcall = 0, F317_4525(Current, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.starting_environment */
EIF_REFERENCE F317_4515 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc3);
	RTLR(3,loc4);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("starting_environment", 316, Current, 4, 0, 4548);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,885,0xFF01,1084,0xFF01,1084,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 885, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F886_5902(RTCW(Result), ((EIF_INTEGER_32) 40L)));
	RTHOOK(2);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(3);
	loc1 = (nstcall = 0, F317_4525(Current, loc2));
	RTHOOK(4);
	loc3 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F314_4422(RTCW(loc3), ((EIF_INTEGER_32) 0L)));
	for (;;) {
		RTHOOK(5);
		tb1 = !loc1;
		if (tb1) break;
		RTHOOK(6);
		(nstcall = 1, F314_4438(RTCW(loc3), loc1));
		RTHOOK(7);
		tr1 = (nstcall = 1, F314_4426(RTCW(loc3)));
		tr1 = (nstcall = 0, F317_4526(Current, tr1));
		loc4 = tr1;
		if (EIF_TEST(loc4)) {
			RTHOOK(8);
			tr1 = eif_boxed_item(loc4,1);
			tr2 = eif_boxed_item(loc4,2);
			(nstcall = 1, F886_5949(RTCW(Result), tr1, tr2));
		}
		RTHOOK(9);
		loc2++;
		RTHOOK(10);
		loc1 = (nstcall = 0, F317_4525(Current, loc2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.available_cpu_count */
EIF_NATURAL_32 F317_4516 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("available_cpu_count", 316, Current, 0, 0, 4549);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F317_4516 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.return_code */
EIF_INTEGER_32 F317_4517 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current + O4090[Dtype(Current)-316]);
}


/* {EXECUTION_ENVIRONMENT}.change_working_directory */
void F317_4518 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("change_working_directory", 316, Current, 1, 1, 4551);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(45,(nstcall = 0, F317_4527), (Current));
	tr2 = (nstcall = 1, F315_4459(RTCW(tr1), arg1, NULL));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = (nstcall = 0, F317_4531(Current, tp1));
	*(EIF_INTEGER_32 *)(Current + O4090[dtype-316]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.change_working_path */
void F317_4519 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("change_working_path", 316, Current, 1, 1, 4552);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F965_6319(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = (nstcall = 0, F317_4531(Current, tp1));
	*(EIF_INTEGER_32 *)(Current + O4090[dtype-316]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.put */
void F317_4520 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,tr2);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("put", 316, Current, 3, 2, 4553);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_meaningful", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg2))-1079])(arg2));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_key_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R6127[Dtype(RTCW(arg2))-1079])(arg2, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("value_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("not_value_has_null_character", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R6127[Dtype(RTCW(arg1))-1079])(arg1, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	loc1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg2))-1079])(arg2));
	(nstcall = -1, F1083_7897(RTCW(loc1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ((EIF_INTEGER_32) 1L))));
	RTHOOK(7);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg2));
	RTHOOK(8);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
	(nstcall = 1, F1085_8025(RTCW(loc1), tw1));
	RTHOOK(9);
	(nstcall = 1, F1085_8011(RTCW(loc1), arg1));
	RTHOOK(10);
	loc2 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F314_4421(RTCW(loc2), loc1));
	RTHOOK(11);
	tr1 = RTOUCR(53,(nstcall = 0, F317_4524), (Current));
	tr2 = RTLNS(eif_new_type(1083, 0x01).id, 1083, _OBJSIZ_1_0_0_4_0_0_0_0_);
	(nstcall = -1, F1084_7950(RTCW(tr2), arg2));
	(nstcall = 1, F886_5949(RTCW(tr1), loc2, tr2));
	RTHOOK(12);
	tp1 = (nstcall = 1, F314_4428(RTCW(loc2)));
	ti4_1 = (nstcall = 0, F317_4530(Current, tp1));
	*(EIF_INTEGER_32 *)(Current + O4090[dtype-316]) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("variable_set", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current + O4090[dtype-316]) == ((EIF_INTEGER_32) 0L))) {
			tb2 = '\01';
			tb3 = '\0';
			tb4 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
			if (tb4) {
				tb3 = (EIF_BOOLEAN)((nstcall = 0, F317_4507(Current, arg2)) == NULL);
			}
			if (!tb3) {
				tb3 = '\0';
				tb4 = '\0';
				tb5 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
				if ((EIF_BOOLEAN) !tb5) {
					tr1 = (nstcall = 0, F317_4507(Current, arg2));
					loc3 = tr1;
					tb4 = EIF_TEST(loc3);
				}
				if (tb4) {
					tb4 = (nstcall = 1, F1076_7646(loc3, arg1));
					tb3 = tb4;
				}
				tb2 = tb3;
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.system */
void F317_4521 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("system", 316, Current, 1, 1, 4554);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
	if (tb1) {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = RTOUCR(46,(nstcall = 0, F317_4505), (Current));
		(nstcall = -1, F314_4421(RTCW(loc1), tr1));
	} else {
		RTHOOK(4);
		loc1 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F314_4421(RTCW(loc1), arg1));
	}
	RTHOOK(5);
	tp1 = (nstcall = 1, F314_4428(RTCW(loc1)));
	ti4_1 = (nstcall = 0, F317_4532(Current, tp1));
	*(EIF_INTEGER_32 *)(Current + O4090[dtype-316]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.launch */
void F317_4522 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("launch", 316, Current, 1, 1, 4555);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
	if (tb1) {
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
		tr1 = RTOUCR(46,(nstcall = 0, F317_4505), (Current));
		(nstcall = -1, F314_4421(RTCW(loc1), tr1));
	} else {
		RTHOOK(4);
		loc1 = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F314_4421(RTCW(loc1), arg1));
	}
	RTHOOK(5);
	tp1 = (nstcall = 1, F314_4428(RTCW(loc1)));
	(nstcall = 0, F317_4533(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.sleep */
void F317_4523 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("sleep", 316, Current, 0, 1, 4556);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_nanoseconds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F317_4537(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.environ */
static EIF_REFERENCE F317_4524_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(53)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("environ", 316, Current, 0, 0, 4557);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,885,0xFF01,313,0xFF01,1083,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 885, _OBJSIZ_7_3_0_7_0_0_0_0_);
	}
	(nstcall = -1, F886_5902(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
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

EIF_REFERENCE F317_4524 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(53,F317_4524_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.i_th_environ */
EIF_POINTER F317_4525 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("i_th_environ", 316, Current, 0, 1, 4558);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("i_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F317_4525 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.separated_variables */
EIF_REFERENCE F317_4526 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("separated_variables", 316, Current, 3, 1, 4559);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_var_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > loc2) || loc3)) break;
		RTHOOK(5);
		tw1 = (nstcall = 1, F1085_7979(RTCW(arg1), loc1));
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '=';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(6);
			loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			loc1++;
		}
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (loc1 < loc2))) {
		RTHOOK(9);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,996,0xFF01,1084,0xFF01,1084,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNTS(typres0.id, 3, 0);
		}
		tr2 = (nstcall = 1, F1085_8059(RTCW(arg1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), loc2));
		((EIF_TYPED_VALUE *)tr1+1)->it_r = tr2;
		RTAR(tr1,tr2);
		tr2 = (nstcall = 1, F1085_8059(RTCW(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		((EIF_TYPED_VALUE *)tr1+2)->it_r = tr2;
		RTAR(tr1,tr2);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.file_info */
static EIF_REFERENCE F317_4527_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(45)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("file_info", 316, Current, 0, 0, 4560);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(314, 0x01).id, 314, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F315_4442(RTCW(tr1)));
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

EIF_REFERENCE F317_4527 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(45,F317_4527_body,(Current));
}

/* {EXECUTION_ENVIRONMENT}.eif_dir_current */
EIF_INTEGER_32 F317_4528 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_dir_current", 316, Current, 0, 2, 4561);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_dir_current((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_getenv */
EIF_POINTER F317_4529 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_getenv", 316, Current, 0, 1, 4562);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F317_4529 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_putenv */
EIF_INTEGER_32 F317_4530 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_putenv", 316, Current, 0, 1, 4563);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F317_4530 ((EIF_POINTER) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_chdir */
EIF_INTEGER_32 F317_4531 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("eif_chdir", 316, Current, 0, 1, 4564);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_chdir((EIF_FILENAME) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.system_call */
EIF_INTEGER_32 F317_4532 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("system_call", 316, Current, 0, 1, 4565);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;Result = (EIF_INTEGER_32) eif_system(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.asynchronous_system_call */
void F317_4533 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("asynchronous_system_call", 316, Current, 0, 1, 4566);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_system_asynchronous(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {EXECUTION_ENVIRONMENT}.eif_home_directory_name_ptr */
EIF_INTEGER_32 F317_4534 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_home_directory_name_ptr", 316, Current, 0, 2, 4567);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_home_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_user_directory_name_ptr */
EIF_INTEGER_32 F317_4535 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_user_directory_name_ptr", 316, Current, 0, 2, 4568);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_user_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_temporary_directory_name_ptr */
EIF_INTEGER_32 F317_4536 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("eif_temporary_directory_name_ptr", 316, Current, 0, 2, 4569);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_temporary_directory_name_ptr((EIF_FILENAME) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {EXECUTION_ENVIRONMENT}.eif_sleep */
void F317_4537 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_sleep", 316, Current, 0, 1, 4570);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_nanoseconds", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= (EIF_INTEGER_64) ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	EIF_ENTER_C;eif_sleep(arg1);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

void EIF_Minit267 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
