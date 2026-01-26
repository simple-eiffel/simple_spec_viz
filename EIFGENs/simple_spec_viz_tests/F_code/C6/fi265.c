/*
 * Code for class FILE_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "fi265.h"
#include "eif_eiffel.h"
#include "eif_file.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F315_4499
static EIF_INTEGER_32 inline_F315_4499 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	#ifdef EIF_WINDOWS
				return (EIF_INTEGER) MultiByteToWideChar(CP_ACP, 0, (LPSTR) arg1, -1, (LPWSTR) arg2, (int) arg3) * sizeof(wchar_t);
			#else
				return arg3;
			#endif
	;
}
#define INLINE_F315_4499
#endif
#ifndef INLINE_F315_4500
static EIF_INTEGER_32 inline_F315_4500 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	#ifdef EIF_WINDOWS
				return (EIF_INTEGER) WideCharToMultiByte(CP_ACP, 0, (LPCWSTR) arg1, -1, (LPSTR) arg2, (int) arg3, NULL, NULL);
			#else
				return arg3;
			#endif
	;
}
#define INLINE_F315_4500
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {FILE_INFO}.make */
void F315_4442 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make", 314, Current, 0, 0, 4475);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F315_4492(Current));
	(nstcall = 0, F287_3780(Current, (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ti4_1));
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("not_exists", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_following_symlinks_set", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_)) {
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
}

/* {FILE_INFO}.protection */
EIF_INTEGER_32 F315_4443 (EIF_REFERENCE Current)
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
	
	RTEAA("protection", 314, Current, 0, 0, 4476);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.type */
EIF_INTEGER_32 F315_4444 (EIF_REFERENCE Current)
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
	
	RTEAA("type", 314, Current, 0, 0, 4477);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 11L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.inode */
EIF_INTEGER_32 F315_4445 (EIF_REFERENCE Current)
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
	
	RTEAA("inode", 314, Current, 0, 0, 4478);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.size */
EIF_INTEGER_32 F315_4446 (EIF_REFERENCE Current)
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
	
	RTEAA("size", 314, Current, 0, 0, 4479);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 6L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.user_id */
EIF_INTEGER_32 F315_4447 (EIF_REFERENCE Current)
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
	
	RTEAA("user_id", 314, Current, 0, 0, 4480);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.group_id */
EIF_INTEGER_32 F315_4448 (EIF_REFERENCE Current)
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
	
	RTEAA("group_id", 314, Current, 0, 0, 4481);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 5L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.date */
EIF_INTEGER_32 F315_4449 (EIF_REFERENCE Current)
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
	
	RTEAA("date", 314, Current, 0, 0, 4482);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 7L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.access_date */
EIF_INTEGER_32 F315_4450 (EIF_REFERENCE Current)
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
	
	RTEAA("access_date", 314, Current, 0, 0, 4483);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 8L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.change_date */
EIF_INTEGER_32 F315_4451 (EIF_REFERENCE Current)
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
	
	RTEAA("change_date", 314, Current, 0, 0, 4484);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 9L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.device */
EIF_INTEGER_32 F315_4452 (EIF_REFERENCE Current)
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
	
	RTEAA("device", 314, Current, 0, 0, 4485);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 2L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.device_type */
EIF_INTEGER_32 F315_4453 (EIF_REFERENCE Current)
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
	
	RTEAA("device_type", 314, Current, 0, 0, 4486);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 3L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.links */
EIF_INTEGER_32 F315_4454 (EIF_REFERENCE Current)
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
	
	RTEAA("links", 314, Current, 0, 0, 4487);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 10L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.owner_name */
EIF_REFERENCE F315_4455 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("owner_name", 314, Current, 0, 0, 4488);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4447(Current));
	Result = (nstcall = 0, F315_4497(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.group_name */
EIF_REFERENCE F315_4456 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("group_name", 314, Current, 0, 0, 4489);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4448(Current));
	Result = (nstcall = 0, F315_4498(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.file_name */
EIF_REFERENCE F315_4457 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("file_name", 314, Current, 1, 0, 4490);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F1076_7657(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.file_entry */
EIF_REFERENCE F315_4458 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("file_entry", 314, Current, 1, 0, 4491);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tp1 = *(EIF_POINTER *)(loc1+ _PTROFF_0_1_0_1_0_0_);
		(nstcall = -1, F965_6282(RTCW(Result), tp1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.file_name_to_pointer */
EIF_REFERENCE F315_4459 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	struct eif_ex_58 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(77, 0x00).id);
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLR(4,loc3);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,loc4);
	RTLR(8,tr1);
	RTLIU(9);
	
	RTEAA("file_name_to_pointer", 314, Current, 4, 2, 4492);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_REFERENCE) arg2;
	RTHOOK(3);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(4);
		loc3 = arg1;
		loc3 = RTRV(eif_new_type(1082, 0x01),loc3);
		if (EIF_TEST(loc3)) {
			RTHOOK(5);
			if ((EIF_BOOLEAN)(Result != NULL)) {
				RTHOOK(6);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
				(nstcall = 1, F303_3998(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L))));
			} else {
				RTHOOK(7);
				Result = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
				ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
				(nstcall = -1, F303_3908(RTCW(Result), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)) * ((EIF_INTEGER_32) 2L))));
			}
			RTHOOK(8);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			(nstcall = 1, F78_1228(RTCW(loc1), arg1, ((EIF_INTEGER_32) 1L), ti4_1, Result, ((EIF_INTEGER_32) 0L), NULL));
		} else {
			RTHOOK(9);
			loc2 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
			(nstcall = -1, F238_2749(RTCW(loc2), arg1));
			RTHOOK(10);
			if ((EIF_BOOLEAN)(Result != NULL)) {
				RTHOOK(11);
				tp1 = (nstcall = 1, F238_2771(RTCW(loc2)));
				tp2 = (nstcall = 0, F1_33(Current));
				ti4_1 = (nstcall = 0, F315_4499(Current, tp1, tp2, ((EIF_INTEGER_32) 0L)));
				(nstcall = 1, F303_3998(RTCW(Result), ti4_1));
			} else {
				RTHOOK(12);
				Result = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
				tp1 = (nstcall = 1, F238_2771(RTCW(loc2)));
				tp2 = (nstcall = 0, F1_33(Current));
				ti4_1 = (nstcall = 0, F315_4499(Current, tp1, tp2, ((EIF_INTEGER_32) 0L)));
				(nstcall = -1, F303_3908(RTCW(Result), ti4_1));
			}
			RTHOOK(13);
			tp1 = (nstcall = 1, F238_2771(RTCW(loc2)));
			tp2 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_0_1_0_0_);
			ti4_1 = (nstcall = 0, F315_4499(Current, tp1, tp2, ti4_1));
			eif_do_nothing_value.it_i4 = ti4_1;
		}
	} else {
		RTHOOK(14);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTHOOK(15);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			(nstcall = 1, F303_3998(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
		} else {
			RTHOOK(16);
			Result = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			(nstcall = -1, F303_3908(RTCW(Result), (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
		}
		RTHOOK(17);
		loc4 = arg1;
		loc4 = RTRV(eif_new_type(1082, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(18);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			(nstcall = 1, F78_1203(RTCW(loc1), arg1, ((EIF_INTEGER_32) 1L), ti4_1, Result, ((EIF_INTEGER_32) 0L), NULL));
		} else {
			RTHOOK(19);
			tr1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
			tp1 = *(EIF_POINTER *)(RTCW(Result)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
			(nstcall = -1, F238_2754(RTCW(tr1), tp1, ti4_1));
			(nstcall = 1, F238_2777(RTCW(tr1), arg1));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.pointer_to_file_name_32 */
EIF_REFERENCE F315_4460 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	struct eif_ex_58 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(77, 0x00).id);
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("pointer_to_file_name_32", 314, Current, 2, 1, 4493);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	ti4_1 = (nstcall = 0, F312_4360(Current, arg1));
	(nstcall = -1, F303_3911(RTCW(loc2), arg1, ti4_1));
	RTHOOK(2);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F78_1235(RTCW(loc1), loc2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		tr1 = (nstcall = 1, F78_1210(RTCW(loc1), loc2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.pointer_to_file_name_8 */
EIF_REFERENCE F315_4461 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("pointer_to_file_name_8", 314, Current, 2, 1, 4494);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(2);
		tp1 = (nstcall = 0, F1_33(Current));
		loc2 = (nstcall = 0, F315_4500(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
		RTHOOK(3);
		loc1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F238_2750(RTCW(loc1), loc2));
		RTHOOK(4);
		tp1 = (nstcall = 1, F238_2771(RTCW(loc1)));
		ti4_1 = (nstcall = 0, F315_4500(Current, arg1, tp1, loc2));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		tr1 = (nstcall = 1, F238_2762(RTCW(loc1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		loc1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
		(nstcall = -1, F238_2753(RTCW(loc1), arg1));
		RTHOOK(7);
		tr1 = (nstcall = 1, F238_2764(RTCW(loc1)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.exists */
EIF_BOOLEAN F315_4462 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_);
}


/* {FILE_INFO}.is_following_symlinks */
EIF_BOOLEAN F315_4463 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_);
}


/* {FILE_INFO}.is_ready */
EIF_BOOLEAN F315_4464 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_ready", 314, Current, 0, 0, 4497);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tr1 != NULL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_plain */
EIF_BOOLEAN F315_4465 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_plain", 314, Current, 0, 0, 4498);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 13L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_device */
EIF_BOOLEAN F315_4466 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_device", 314, Current, 0, 0, 4499);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 14L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_directory */
EIF_BOOLEAN F315_4467 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_directory", 314, Current, 0, 0, 4500);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 12L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_symlink */
EIF_BOOLEAN F315_4468 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_symlink", 314, Current, 0, 0, 4501);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 18L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_fifo */
EIF_BOOLEAN F315_4469 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_fifo", 314, Current, 0, 0, 4502);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 17L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_socket */
EIF_BOOLEAN F315_4470 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_socket", 314, Current, 0, 0, 4503);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 19L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_block */
EIF_BOOLEAN F315_4471 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_block", 314, Current, 0, 0, 4504);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 16L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_character */
EIF_BOOLEAN F315_4472 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_character", 314, Current, 0, 0, 4505);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (nstcall = 0, F315_4496(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 15L)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_readable */
EIF_BOOLEAN F315_4473 (EIF_REFERENCE Current)
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
	
	RTEAA("is_readable", 314, Current, 0, 0, 4506);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4495(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_writable */
EIF_BOOLEAN F315_4474 (EIF_REFERENCE Current)
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
	
	RTEAA("is_writable", 314, Current, 0, 0, 4507);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4495(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_executable */
EIF_BOOLEAN F315_4475 (EIF_REFERENCE Current)
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
	
	RTEAA("is_executable", 314, Current, 0, 0, 4508);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4495(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 2L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_setuid */
EIF_BOOLEAN F315_4476 (EIF_REFERENCE Current)
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
	
	RTEAA("is_setuid", 314, Current, 0, 0, 4509);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4495(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 3L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_setgid */
EIF_BOOLEAN F315_4477 (EIF_REFERENCE Current)
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
	
	RTEAA("is_setgid", 314, Current, 0, 0, 4510);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4495(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 4L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_sticky */
EIF_BOOLEAN F315_4478 (EIF_REFERENCE Current)
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
	
	RTEAA("is_sticky", 314, Current, 0, 0, 4511);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4495(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 5L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_owner */
EIF_BOOLEAN F315_4479 (EIF_REFERENCE Current)
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
	
	RTEAA("is_owner", 314, Current, 0, 0, 4512);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4495(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 6L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_access_owner */
EIF_BOOLEAN F315_4480 (EIF_REFERENCE Current)
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
	
	RTEAA("is_access_owner", 314, Current, 0, 0, 4513);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F315_4495(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 7L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_access_readable */
EIF_BOOLEAN F315_4481 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_access_readable", 314, Current, 1, 0, 4514);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F315_4464(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(loc1+ _PTROFF_0_1_0_1_0_0_);
		Result = (nstcall = 0, F315_4494(Current, tp1, ((EIF_INTEGER_32) 3L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_access_writable */
EIF_BOOLEAN F315_4482 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_access_writable", 314, Current, 1, 0, 4515);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F315_4464(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(loc1+ _PTROFF_0_1_0_1_0_0_);
		Result = (nstcall = 0, F315_4494(Current, tp1, ((EIF_INTEGER_32) 2L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_access_executable */
EIF_BOOLEAN F315_4483 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_access_executable", 314, Current, 1, 0, 4516);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_ready", EX_PRE);
		RTTE((nstcall = 0, F315_4464(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tp1 = *(EIF_POINTER *)(loc1+ _PTROFF_0_1_0_1_0_0_);
		Result = (nstcall = 0, F315_4494(Current, tp1, ((EIF_INTEGER_32) 1L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.is_equal */
EIF_BOOLEAN F315_4484 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("is_equal", 314, Current, 2, 1, 4517);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 == Current)) {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		tb1 = '\0';
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
			loc2 = tr1;
			tb1 = EIF_TEST(loc2);
		}
		if (tb1) {
			RTHOOK(5);
			Result = '\0';
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6152[Dtype(loc1)-1079])(loc1, loc2));
			if (tb1) {
				tb1 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_3_1_);
				Result = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) == tb1);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.copy */
void F315_4485 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("copy", 314, Current, 2, 1, 4518);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		(nstcall = 0, F1_16(Current, arg1));
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tr2 = (nstcall = 1, F1_14(tr1));
		(nstcall = 0, F287_3786(Current, tr2));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F1_14(loc1));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
		}
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTHOOK(9);
			tr1 = (nstcall = 1, F1_14(loc2));
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("not_shared_if_different", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 != Current)) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
			tb1 = (EIF_BOOLEAN)(tr1 != tr2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("equal_buffered_file_infos", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {FILE_INFO}.to_unix_file_info */
EIF_REFERENCE F315_4486 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("to_unix_file_info", 314, Current, 1, 0, 4519);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(315, 0x01).id, 315, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F315_4442(RTCW(Result)));
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		(nstcall = 1, F315_4487(RTCW(Result), loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.update */
void F315_4487 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("update", 314, Current, 0, 1, 4520);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("f_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F315_4459(Current, arg1, *(EIF_REFERENCE *)(Current + _REFACS_2_)));
	(nstcall = 0, F315_4489(Current, arg1, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {FILE_INFO}.set_is_following_symlinks */
void F315_4488 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_is_following_symlinks", 314, Current, 0, 1, 4521);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_following_symlinks_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) == arg1)) {
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
}

/* {FILE_INFO}.fast_update */
void F315_4489 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("fast_update", 314, Current, 0, 2, 4522);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("f_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_ptr_not_empty", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_0_1_0_0_);
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) arg2;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_0_1_0_1_0_0_);
	tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_);
	ti4_1 = (nstcall = 0, F315_4493(Current, tp1, *(EIF_REFERENCE *)(Current), tb1));
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("file_name_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {FILE_INFO}.internal_file_name */
EIF_REFERENCE F315_4490 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {FILE_INFO}.internal_name_pointer */
EIF_REFERENCE F315_4491 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {FILE_INFO}.stat_size */
EIF_INTEGER_32 F315_4492 (EIF_REFERENCE Current)
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
	
	RTEAA("stat_size", 314, Current, 0, 0, 4525);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) stat_size();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.eif_file_stat */
EIF_INTEGER_32 F315_4493 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_BOOLEAN arg3)
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
	
	RTEAA("eif_file_stat", 314, Current, 0, 3, 4526);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_stat((EIF_FILENAME) arg1, (rt_stat_buf*) arg2, (int) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.file_access */
EIF_BOOLEAN F315_4494 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("file_access", 314, Current, 0, 2, 4527);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_file_access((EIF_FILENAME) arg1, (EIF_INTEGER) arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.file_eaccess */
EIF_BOOLEAN F315_4495 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("file_eaccess", 314, Current, 0, 2, 4528);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_file_eaccess((rt_stat_buf*) arg1, (int) arg2));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.file_info */
EIF_INTEGER_32 F315_4496 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("file_info", 314, Current, 0, 2, 4529);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_info((rt_stat_buf*) arg1, (int) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.file_owner */
EIF_REFERENCE F315_4497 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("file_owner", 314, Current, 0, 1, 4530);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REFERENCE) eif_file_owner((int) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.file_group */
EIF_REFERENCE F315_4498 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("file_group", 314, Current, 0, 1, 4531);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REFERENCE) eif_file_group((int) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.multi_byte_to_utf_16 */
EIF_INTEGER_32 F315_4499 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("multi_byte_to_utf_16", 314, Current, 0, 3, 4532);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("{PLATFORM}.is_windows", EX_PRE);
		RTTE((nstcall = 0, F263_3307(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F315_4499 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {FILE_INFO}.utf_16_to_multi_byte */
EIF_INTEGER_32 F315_4500 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
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
	
	RTEAA("utf_16_to_multi_byte", 314, Current, 0, 3, 4533);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("{PLATFORM}.is_windows", EX_PRE);
		RTTE((nstcall = 0, F263_3307(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F315_4500 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit265 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
