/*
 * Code for class PATH
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pa309.h"
#include "eif_built_in.h"
#include "eif_eiffel.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F965_6337
static int inline_F965_6337 (EIF_POINTER arg1, EIF_POINTER arg2)
{
	EIF_BOOLEAN Result = EIF_FALSE;
#ifdef EIF_WINDOWS
		/* To check this, we use `CreateFileW' to open both file, and then using the information
		 * returned by `GetFileInformationByHandle' we can check whether or not they are indeed
		 * the same.
		 * Note: it is important to use the W version of CreateFileW because arguments
		 * are Unicode, not ASCII. */
	BY_HANDLE_FILE_INFORMATION l_path1_info, l_path2_info;
	HANDLE l_path2_file = CreateFileW ((LPCWSTR) arg2, GENERIC_READ, FILE_SHARE_READ, NULL,
		OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	HANDLE l_path1_file = CreateFileW ((LPCWSTR) arg1, GENERIC_READ, FILE_SHARE_READ, NULL,
			OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);

	if ((l_path2_file == INVALID_HANDLE_VALUE) || (l_path1_file == INVALID_HANDLE_VALUE)) {
			/* We do not need the handles anymore, simply close them. Since Microsoft
			 * API accepts INVALID_HANDLE_VALUE we don't check the validity of arguments. */
		CloseHandle(l_path2_file);
		CloseHandle(l_path1_file);
	} else {
		BOOL success = GetFileInformationByHandle (l_path2_file, &l_path2_info);
		success = success && GetFileInformationByHandle (l_path1_file, &l_path1_info);
			/* We do not need the handles anymore, simply close them. */
		CloseHandle(l_path2_file);
		CloseHandle(l_path1_file);
		if (success) {
				/* Check that `path2' and `path1' do not represent the same file. */
			if
				((l_path2_info.dwVolumeSerialNumber == l_path1_info.dwVolumeSerialNumber) &&
				(l_path2_info.nFileIndexLow == l_path1_info.nFileIndexLow) &&
				(l_path2_info.nFileIndexHigh == l_path1_info.nFileIndexHigh))
			{
				Result = EIF_TRUE;
			}
		}
	}
#else
	struct stat buf1, buf2;
	int status;
	#ifdef HAS_LSTAT
		status = lstat(arg1, &buf1);
		if (status == 0) {
				/* We found a file, now let's check if it is not a symbolic link. If it is, we use `stat'
			 	 * to ensure the validity of the link. */
			if ((buf1.st_mode & S_IFLNK) == S_IFLNK) {
				status = stat (arg1, &buf1);
			}
		}
		
		if (status == 0) {
			status = lstat(arg2, &buf2);
			if (status == 0) {
					/* We found a file, now let's check if it is not a symbolic link. If it is, we use `stat'
				 	 * to ensure the validity of the link. */
				if ((buf2.st_mode & S_IFLNK) == S_IFLNK) {
					status = stat (arg2, &buf2);
				}
			}
		}
	#else
		status = stat (arg1, &buf1);
		if (status == 0) {
			status = stat (arg2, &buf2);
		}
	#endif
	if (status == 0) {
			/* Both files are present, check they represent the same one. */
		if ((buf1.st_dev == buf2.st_dev) && (buf1.st_ino == buf2.st_ino)) {
			Result = EIF_TRUE;
		}
	}
#endif
return Result;
	;
}
#define INLINE_F965_6337
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PATH}.make_empty */
void F965_6276 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_empty", 964, Current, 0, 0, 12035);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	(nstcall = 0, F965_6323(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_empty", EX_POST);
		if ((nstcall = 0, F965_6286(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("is_normalized", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
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

/* {PATH}.make_current */
void F965_6277 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_current", 964, Current, 0, 0, 12036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	ti4_1 = (nstcall = 0, F965_6322(Current));
	(nstcall = -1, F1079_7731(RTCW(tr1), ti4_1));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(tr1))-1080])(tr1, (EIF_CHARACTER_8) '.'));
	RTHOOK(3);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(tr1))-1080])(tr1, (EIF_CHARACTER_8) '\000'));
	}
	RTHOOK(5);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(6);
	(nstcall = 0, F965_6323(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("not_empty", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F965_6286(Current))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_normalized", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_current", EX_POST);
		if ((nstcall = 0, F965_6283(Current))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {PATH}.make_from_string */
void F965_6278 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_string", 964, Current, 0, 1, 12037);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	ti4_2 = (nstcall = 0, F965_6322(Current));
	(nstcall = -1, F1079_7731(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 * ti4_2)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		(nstcall = 0, F965_6331(Current, *(EIF_REFERENCE *)(Current), arg1, (EIF_CHARACTER_8) '\000'));
		RTHOOK(5);
		(nstcall = 0, F965_6324(Current));
	} else {
		RTHOOK(6);
		*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(7);
	(nstcall = 0, F965_6323(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("not_empty", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		if ((EIF_BOOLEAN) !tb2) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F965_6286(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_normalized", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTHOOK(11);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {PATH}.make_from_separate */
void F965_6279 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_separate", 964, Current, 0, 1, 12038);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNSMART(eif_new_type(1080, 1).id);
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (NULL, eif_sca5, 0, &(tr2));
	}
	(nstcall = -1, F1079_7739(RTCW(tr1), tr2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(4);
	(nstcall = 0, F965_6323(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("not_empty", EX_POST);
		tb1 = '\01';
		if (RTS_CI (EIF_TRUE, arg1)) {
			RTS_BI (arg1);
			tb2 = (nstcall = 1, F965_6286(RTCW(arg1)));
			RTS_EI;
		} else {
			RTS_AC (0, arg1);
			RTS_CALL (F965_6286, eif_scr4, 0, &(tb2));
		}
		if ((EIF_BOOLEAN) !tb2) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F965_6286(Current));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_normalized", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
}

/* {PATH}.make_from_storage */
void F965_6280 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_storage", 964, Current, 0, 1, 12039);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	(nstcall = 0, F965_6324(Current));
	RTHOOK(4);
	(nstcall = 0, F965_6323(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("shared", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_normalized", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
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

/* {PATH}.make_from_normalized_storage */
void F965_6281 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_from_normalized_storage", 964, Current, 0, 1, 12040);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	RTHOOK(3);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(4);
	(nstcall = 0, F965_6323(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("shared", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("is_normalized", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
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

/* {PATH}.make_from_pointer */
void F965_6282 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make_from_pointer", 964, Current, 2, 1, 12041);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_pointer_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc2 = (nstcall = 0, F312_4360(Current, arg1));
	RTHOOK(3);
	loc2 -= (EIF_INTEGER_32) (loc2 % (nstcall = 0, F965_6322(Current)));
	RTHOOK(4);
	loc1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F238_2754(RTCW(loc1), arg1, loc2));
	RTHOOK(5);
	tr1 = (nstcall = 1, F238_2762(RTCW(loc1), ((EIF_INTEGER_32) 1L), loc2));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(7);
		(nstcall = 0, F965_6324(Current));
	}
	RTHOOK(8);
	(nstcall = 0, F965_6323(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {PATH}.is_current_symbol */
EIF_BOOLEAN F965_6283 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_current_symbol", 964, Current, 0, 0, 12042);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F965_6322(Current)))) {
		RTHOOK(2);
		Result = (nstcall = 0, F965_6334(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '.'));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.is_parent_symbol */
EIF_BOOLEAN F965_6284 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_parent_symbol", 964, Current, 0, 0, 12043);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN)(ti4_1 == (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * (nstcall = 0, F965_6322(Current))))) {
		RTHOOK(2);
		Result = (nstcall = 0, F965_6334(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '.'));
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 0, F965_6322(Current));
		Result = (nstcall = 0, F965_6334(Current, tr1, (EIF_INTEGER_32) (((EIF_INTEGER_32) 1L) + ti4_1), (EIF_CHARACTER_8) '.'));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.has_root */
EIF_BOOLEAN F965_6285 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("has_root", 964, Current, 0, 0, 12044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (nstcall = 0, F965_6328(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("defintion", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F965_6286(Current));
		}
		if (tb1) {
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

/* {PATH}.is_empty */
EIF_BOOLEAN F965_6286 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_empty", 964, Current, 0, 0, 12045);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F666_4976(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.is_relative */
EIF_BOOLEAN F965_6287 (EIF_REFERENCE Current)
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
	
	RTEAA("is_relative", 964, Current, 0, 0, 12046);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F965_6288(Current));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !Result;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.is_absolute */
EIF_BOOLEAN F965_6288 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_absolute", 964, Current, 1, 0, 12047);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F965_6328(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		if ((nstcall = 0, F263_3307(Current))) {
			RTHOOK(4);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 0, F965_6322(Current));
			tc1 = (nstcall = 0, F965_6304(Current));
			Result = (nstcall = 0, F965_6334(Current, tr1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 - ti4_1) + ((EIF_INTEGER_32) 1L)), tc1));
		} else {
			RTHOOK(5);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.is_simple */
EIF_BOOLEAN F965_6289 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_simple", 964, Current, 1, 0, 12048);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if (tb1) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		loc1 = (nstcall = 0, F965_6328(Current));
		RTHOOK(4);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN) !(nstcall = 0, F965_6286(Current));
		}
		if (tb1) {
			RTHOOK(5);
			ti4_1 = (nstcall = 0, F965_6330(Current, ((EIF_INTEGER_32) 1L)));
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.is_same_file_as */
EIF_BOOLEAN F965_6290 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("is_same_file_as", 964, Current, 2, 1, 12049);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F965_6319(Current));
	RTHOOK(3);
	tr1 = (nstcall = 1, F965_6319(RTCW(arg1)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(RTCW(loc1)+ _PTROFF_0_1_0_1_0_0_);
	tp2 = *(EIF_POINTER *)(RTCW(loc2)+ _PTROFF_0_1_0_1_0_0_);
	Result = EIF_TEST ((nstcall = 0, F965_6337(Current, tp1, tp2)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.has_extension */
EIF_BOOLEAN F965_6291 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("has_extension", 964, Current, 1, 1, 12050);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ext_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_ext_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_ext_has_no_dot", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R6127[Dtype(RTCW(arg1))-1079])(arg1, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = '\0';
	tr1 = (nstcall = 0, F965_6295(Current));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb1 = (nstcall = 1, F1076_7643(loc1, arg1));
		Result = tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.root */
EIF_REFERENCE F965_6292 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("root", 964, Current, 1, 0, 12051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F965_6328(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(4);
			Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			(nstcall = -1, F965_6281(RTCW(Result), *(EIF_REFERENCE *)(Current)));
		} else {
			RTHOOK(5);
			Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, ((EIF_INTEGER_32) 1L), loc1));
			(nstcall = -1, F965_6281(RTCW(Result), tr2));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("has_root_implies_not_void", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F965_6285(Current))) {
			tb1 = (EIF_BOOLEAN)(Result != NULL);
		}
		if (tb1) {
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
	return Result;
}

/* {PATH}.parent */
EIF_REFERENCE F965_6293 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("parent", 964, Current, 3, 0, 12052);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F965_6329(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		tr1 = (nstcall = 0, F965_6292(Current));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			
			RTHOOK(4);
			Result = (EIF_REFERENCE) loc3;
		} else {
			RTHOOK(5);
			Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			(nstcall = -1, F965_6277(RTCW(Result)));
		}
	} else {
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc1 == (nstcall = 0, F965_6322(Current)))) {
			RTHOOK(7);
			Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = (nstcall = 0, F965_6322(Current));
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, ((EIF_INTEGER_32) 1L), ti4_1));
			(nstcall = -1, F965_6281(RTCW(Result), tr2));
		} else {
			RTHOOK(8);
			loc2 = (nstcall = 0, F965_6328(Current));
			RTHOOK(9);
			if ((EIF_BOOLEAN) (loc1 <= loc2)) {
				RTHOOK(10);
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN)(loc2 == ti4_1)) {
					RTHOOK(11);
					Result = (EIF_REFERENCE) Current;
				} else {
					RTHOOK(12);
					Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
					tr1 = *(EIF_REFERENCE *)(Current);
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, ((EIF_INTEGER_32) 1L), loc2));
					(nstcall = -1, F965_6281(RTCW(Result), tr2));
				}
			} else {
				RTHOOK(13);
				Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = (nstcall = 0, F965_6322(Current));
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ti4_1)));
				(nstcall = -1, F965_6281(RTCW(Result), tr2));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.entry */
EIF_REFERENCE F965_6294 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
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
	
	RTEAA("entry", 964, Current, 2, 0, 12053);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F965_6329(Current));
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(3);
		loc2 = (nstcall = 0, F965_6328(Current));
		RTHOOK(4);
		if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(5);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
				RTHOOK(6);
				Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), ti4_1));
				(nstcall = -1, F965_6281(RTCW(Result), tr2));
			}
		} else {
			RTHOOK(7);
			Result = (EIF_REFERENCE) Current;
		}
	} else {
		RTHOOK(8);
		loc2 = (nstcall = 0, F965_6328(Current));
		RTHOOK(9);
		if ((EIF_BOOLEAN) (loc1 <= loc2)) {
			RTHOOK(10);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) (loc2 < ti4_1)) {
				RTHOOK(11);
				Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
				tr1 = *(EIF_REFERENCE *)(Current);
				tr2 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
				tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), ti4_1));
				(nstcall = -1, F965_6281(RTCW(Result), tr2));
			}
		} else {
			RTHOOK(12);
			Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(tr1))-1079])(tr1, (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L)), ti4_1));
			(nstcall = -1, F965_6281(RTCW(Result), tr2));
		}
	}
	RTHOOK(13);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(Result != NULL)) {
		tb2 = '\01';
		tb3 = '\01';
		tb4 = (nstcall = 1, F965_6286(RTCW(Result)));
		if (!tb4) {
			tb4 = (nstcall = 1, F965_6283(RTCW(Result)));
			tb3 = tb4;
		}
		if (!tb3) {
			tb3 = (nstcall = 1, F965_6284(RTCW(Result)));
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(14);
		Result = (EIF_REFERENCE) NULL;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("not_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 1, F965_6286(RTCW(Result)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.extension */
EIF_REFERENCE F965_6295 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("extension", 964, Current, 4, 0, 12054);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F965_6294(Current));
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F965_6317(loc4));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_0_0_2_);
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
		ti4_1 = (nstcall = 1, F1083_7910(RTCW(loc1), tw1, loc3));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc2 != ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(loc2 != loc3))) {
			RTHOOK(6);
			tr1 = (nstcall = 1, F1084_7966(RTCW(loc1), (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L)), loc3));
			Result = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("not_empty", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 1, F1084_7968(RTCW(Result)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("no_dot", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
			tb2 = (nstcall = 1, F1083_7931(RTCW(Result), tw1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.components */
EIF_REFERENCE F965_6296 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("components", 964, Current, 3, 0, 12055);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,964,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(Result), ((EIF_INTEGER_32) 10L)));
	RTHOOK(2);
	loc3 = (nstcall = 0, F965_6328(Current));
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7731(RTCW(loc1), loc3));
		RTHOOK(5);
		(nstcall = 1, F1081_7845(RTCW(loc1), *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 1L), loc3));
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F965_6281(RTCW(tr1), loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		RTHOOK(7);
		loc3++;
	} else {
		RTHOOK(8);
		loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTHOOK(9);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (loc3 <= ti4_1)) {
		RTHOOK(10);
		loc2 = (EIF_INTEGER_32) loc3;
		RTHOOK(11);
		loc3 = (nstcall = 0, F965_6330(Current, loc2));
		for (;;) {
			RTHOOK(12);
			if ((EIF_BOOLEAN)(loc3 == ((EIF_INTEGER_32) 0L))) break;
			RTHOOK(13);
			loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
			(nstcall = -1, F1079_7731(RTCW(loc1), (EIF_INTEGER_32) (loc3 - loc2)));
			RTHOOK(14);
			(nstcall = 1, F1081_7845(RTCW(loc1), *(EIF_REFERENCE *)(Current), loc2, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
			RTHOOK(15);
			tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			(nstcall = -1, F965_6281(RTCW(tr1), loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
			RTHOOK(16);
			loc2 = (nstcall = 0, F965_6322(Current));
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 + loc2);
			RTHOOK(17);
			loc3 = (nstcall = 0, F965_6330(Current, loc2));
		}
		RTHOOK(18);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc2 <= ti4_1)) {
			RTHOOK(19);
			loc1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			(nstcall = -1, F1079_7731(RTCW(loc1), (EIF_INTEGER_32) (ti4_1 - loc2)));
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(Current);
			tr2 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr2)+ _LNGOFF_1_1_0_2_);
			(nstcall = 1, F1081_7845(RTCW(loc1), tr1, loc2, ti4_1));
			RTHOOK(21);
			tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			(nstcall = -1, F965_6281(RTCW(tr1), loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.absolute_path */
EIF_REFERENCE F965_6297 (EIF_REFERENCE Current)
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
	
	RTEAA("absolute_path", 964, Current, 0, 0, 12056);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(31,(nstcall = 0, F965_6327), (Current));
	tr2 = (nstcall = 1, F317_4503(RTCW(tr1)));
	Result = (nstcall = 0, F965_6298(Current, tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.absolute_path_in */
EIF_REFERENCE F965_6298 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,loc2);
	RTLIU(8);
	
	RTEAA("absolute_path_in", 964, Current, 2, 1, 12057);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_current_directory_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_current_directory_absolute", EX_PRE);
		tb1 = (nstcall = 1, F965_6288(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if (tb1) {
		RTHOOK(4);
		Result = (EIF_REFERENCE) arg1;
	} else {
		RTHOOK(5);
		if ((nstcall = 0, F965_6288(Current))) {
			RTHOOK(6);
			Result = (EIF_REFERENCE) Current;
		} else {
			RTHOOK(7);
			if ((nstcall = 0, F263_3307(Current))) {
				RTHOOK(8);
				tr1 = (nstcall = 0, F965_6292(Current));
				loc1 = tr1;
				if (EIF_TEST(loc1)) {
					RTHOOK(9);
					tb1 = '\0';
					tb2 = '\0';
					tr1 = *(EIF_REFERENCE *)(loc1);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
					if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L))) {
						tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
						tb2 = (EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L));
					}
					if (tb2) {
						tb2 = '\0';
						tr1 = *(EIF_REFERENCE *)(loc1);
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 1L)));
						tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
						tc2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 1L)));
						if ((EIF_BOOLEAN)(tc1 == tc2)) {
							tr1 = *(EIF_REFERENCE *)(loc1);
							tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 3L)));
							tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
							tc2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 3L)));
							tb2 = (EIF_BOOLEAN)(tc1 == tc2);
						}
						tb1 = tb2;
					}
					if (tb1) {
						RTHOOK(10);
						tr1 = (nstcall = 1, F1_14(arg1));
						Result = (EIF_REFERENCE) tr1;
					} else {
						RTHOOK(11);
						Result = (EIF_REFERENCE) loc1;
					}
					RTHOOK(12);
					tr1 = *(EIF_REFERENCE *)(RTCW(Result));
					tr2 = *(EIF_REFERENCE *)(Current);
					tr3 = *(EIF_REFERENCE *)(loc1);
					ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr3)+ _LNGOFF_1_1_0_2_);
					tr3 = *(EIF_REFERENCE *)(Current);
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr3)+ _LNGOFF_1_1_0_2_);
					tc1 = (nstcall = 0, F965_6304(Current));
					(nstcall = 0, F965_6333(Current, tr1, tr2, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)), ti4_2, tc1));
				} else {
					RTHOOK(13);
					if ((nstcall = 0, F965_6334(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '\\'))) {
						RTHOOK(14);
						tr1 = (nstcall = 1, F1_14(arg1));
						Result = (EIF_REFERENCE) tr1;
						RTHOOK(15);
						tr1 = (nstcall = 1, F965_6292(RTCW(Result)));
						loc2 = tr1;
						if (EIF_TEST(loc2)) {
							RTHOOK(16);
							Result = (EIF_REFERENCE) loc2;
						}
					} else {
						RTHOOK(17);
						tr1 = (nstcall = 1, F1_14(arg1));
						Result = (EIF_REFERENCE) tr1;
					}
					RTHOOK(18);
					tr1 = *(EIF_REFERENCE *)(RTCW(Result));
					tr2 = *(EIF_REFERENCE *)(Current);
					tc1 = (nstcall = 0, F965_6304(Current));
					(nstcall = 0, F965_6332(Current, tr1, tr2, tc1));
				}
			} else {
				RTHOOK(19);
				tr1 = (nstcall = 1, F1_14(arg1));
				Result = (EIF_REFERENCE) tr1;
				RTHOOK(20);
				tr1 = *(EIF_REFERENCE *)(RTCW(Result));
				tr2 = *(EIF_REFERENCE *)(Current);
				tc1 = (nstcall = 0, F965_6304(Current));
				(nstcall = 0, F965_6332(Current, tr1, tr2, tc1));
			}
			RTHOOK(21);
			(nstcall = 1, F965_6323(RTCW(Result)));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(22);
		RTCT("has_root", EX_POST);
		tb1 = (nstcall = 1, F965_6285(RTCW(Result)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.canonical_path */
EIF_REFERENCE F965_6299 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,loc1);
	RTLR(6,tr2);
	RTLR(7,loc5);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("canonical_path", 964, Current, 5, 0, 12058);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc2 = (nstcall = 0, F965_6297(Current));
	RTHOOK(2);
	tr1 = (nstcall = 1, F965_6292(RTCW(loc2)));
	loc4 = tr1;
	if (EIF_TEST(loc4)) {
		RTHOOK(3);
		loc3 = RTLNSMART(eif_new_type(1080, 1).id);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc2));
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		(nstcall = -1, F1079_7731(RTCW(loc3), ti4_1));
		RTHOOK(4);
		tr1 = (nstcall = 1, F965_6296(RTCW(loc2)));
		loc1 = (EIF_REFERENCE) tr1;
		
		RTHOOK(5);
		(nstcall = 1, F867_5816(RTCW(loc1)));
		RTHOOK(6);
		tr1 = (nstcall = 1, F867_5790(RTCW(loc1)));
		tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
		tc1 = (nstcall = 0, F965_6304(Current));
		(nstcall = 0, F965_6332(Current, loc3, tr2, tc1));
		RTHOOK(7);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4420[Dtype(RTCW(loc1))-663])(loc1));
		for (;;) {
			RTHOOK(8);
			tb1 = (nstcall = 1, F827_5528(RTCW(loc1)));
			if (tb1) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, F867_5790(RTCW(loc1)));
			tb2 = (nstcall = 1, F965_6283(RTCW(tr1)));
			if (tb2) {
				RTHOOK(10);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4420[Dtype(RTCW(loc1))-663])(loc1));
			} else {
				RTHOOK(11);
				tr1 = (nstcall = 1, F867_5790(RTCW(loc1)));
				tb2 = (nstcall = 1, F965_6284(RTCW(tr1)));
				if (tb2) {
					RTHOOK(12);
					tb2 = (nstcall = 1, F797_5502(RTCW(loc1)));
					if ((EIF_BOOLEAN) !tb2) {
						RTHOOK(13);
						(nstcall = 1, F867_5819(RTCW(loc1)));
						RTHOOK(14);
						(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4420[Dtype(RTCW(loc1))-663])(loc1));
					}
					RTHOOK(15);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4420[Dtype(RTCW(loc1))-663])(loc1));
				} else {
					RTHOOK(16);
					(nstcall = 1, F867_5818(RTCW(loc1)));
				}
			}
		}
		RTHOOK(17);
		tr1 = (nstcall = 1, F867_5799(RTCW(loc1)));
		loc5 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb2 = (nstcall = 1, F421_4812(loc5));
			if (tb2) break;
			RTHOOK(18);
			tr1 = (nstcall = 1, F421_4803(loc5));
			tr2 = *(EIF_REFERENCE *)(RTCW(tr1));
			tc1 = (nstcall = 0, F965_6304(Current));
			(nstcall = 0, F965_6332(Current, loc3, tr2, tc1));
			RTHOOK(19);
			(nstcall = 1, F421_4818(loc5));
		}
		RTHOOK(20);
		Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F965_6281(RTCW(Result), loc3));
	} else {
		
		RTHOOK(21);
		Result = (EIF_REFERENCE) loc2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(22);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.hash_code */
EIF_INTEGER_32 F965_6300 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("hash_code", 964, Current, 0, 0, 12059);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F74_995(Current))) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5229[Dtype(RTCW(tr1))-962])(tr1));
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(3);
		tr1 = (nstcall = 0, F965_6317(Current));
		ti4_1 = (nstcall = 1, F1076_7611(RTCW(tr1)));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("good_hash_value", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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

/* {PATH}.native_string */
EIF_REFERENCE F965_6301 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("native_string", 964, Current, 0, 0, 12060);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(313, 0x01).id, 313, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F314_4424(RTCW(Result), *(EIF_REFERENCE *)(Current)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("set", EX_POST);
		tr1 = (nstcall = 1, F314_4425(RTCW(Result)));
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6254[Dtype(RTCW(tr1))-1079])(tr1, *(EIF_REFERENCE *)(Current)));
		if (tb1) {
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

/* {PATH}.directory_separator */
EIF_CHARACTER_8 F965_6304 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("directory_separator", 964, Current, 0, 0, 12063);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(2);
		Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\\';
	} else {
		RTHOOK(3);
		Result = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '/';
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.extended */
EIF_REFERENCE F965_6305 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,Result);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("extended", 964, Current, 2, 1, 12064);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_name_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_name_has_no_root", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F965_6286(Current))) {
			tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
			(nstcall = -1, F965_6278(RTCW(tr1), arg1));
			tb2 = (nstcall = 1, F965_6285(RTCW(tr1)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = RTLNSMART(eif_new_type(1080, 1).id);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	ti4_3 = (nstcall = 0, F965_6322(Current));
	ti4_4 = (nstcall = 0, F965_6322(Current));
	(nstcall = -1, F1079_7731(RTCW(loc1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 * ti4_3)) + ti4_4)));
	RTHOOK(5);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc1))-1080])(loc1, *(EIF_REFERENCE *)(Current)));
	RTHOOK(6);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN)((nstcall = 0, F965_6328(Current)) == ti4_1);
	}
	if (tb1) {
		RTHOOK(7);
		(nstcall = 0, F965_6331(Current, loc1, arg1, (EIF_CHARACTER_8) '\000'));
	} else {
		RTHOOK(8);
		tc1 = (nstcall = 0, F965_6304(Current));
		(nstcall = 0, F965_6331(Current, loc1, arg1, tc1));
	}
	RTHOOK(9);
	Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
	(nstcall = -1, F965_6280(RTCW(Result), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("associated_path_of_name", EX_POST);
		tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F965_6278(RTCW(tr1), arg1));
		loc2 = tr1;
		if ((EIF_TRUE)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("not_empty", EX_POST);
		tb1 = (nstcall = 1, F965_6286(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("extended_with_only_empty_or_root", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tr1 = (nstcall = 0, F965_6292(Current));
		if (!(nstcall = 0, F965_6309(Current, tr1))) {
			tb2 = (nstcall = 0, F965_6286(Current));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F965_6317(RTCW(Result)));
			tr2 = (nstcall = 0, F965_6317(Current));
			tr3 = (nstcall = 1, F965_6317(loc2));
			tr3 = (nstcall = 1, F1084_7960(RTCW(tr2), tr3));
			tb2 = (nstcall = 1, F1083_7924(RTCW(tr1), tr3));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("extended_with_more_than_root_or_not_empty", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = (nstcall = 0, F965_6292(Current));
		if ((EIF_BOOLEAN) !(nstcall = 0, F965_6309(Current, tr1))) {
			tb2 = (EIF_BOOLEAN) !(nstcall = 0, F965_6286(Current));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F965_6317(RTCW(Result)));
			tr2 = (nstcall = 0, F965_6317(Current));
			tr3 = RTOUCR(32,(nstcall = 0, F965_6335), (Current));
			tr3 = (nstcall = 1, F1084_7960(RTCW(tr2), tr3));
			tr2 = (nstcall = 1, F965_6317(loc2));
			tr2 = (nstcall = 1, F1084_7960(RTCW(tr3), tr2));
			tb2 = (nstcall = 1, F1083_7924(RTCW(tr1), tr2));
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
	return Result;
}

/* {PATH}.extended_path */
EIF_REFERENCE F965_6306 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLIU(7);
	
	RTEAA("extended_path", 964, Current, 1, 1, 12065);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F965_6286(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_path_has_no_root", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F965_6286(Current))) {
			tb2 = (nstcall = 1, F965_6285(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	loc1 = RTLNSMART(eif_new_type(1080, 1).id);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_3 = (nstcall = 0, F965_6322(Current));
	(nstcall = -1, F1079_7731(RTCW(loc1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) + ti4_3)));
	RTHOOK(5);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc1))-1080])(loc1, *(EIF_REFERENCE *)(Current)));
	RTHOOK(6);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN)((nstcall = 0, F965_6328(Current)) == ti4_1);
	}
	if (tb1) {
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		(nstcall = 0, F965_6332(Current, loc1, tr1, (EIF_CHARACTER_8) '\000'));
	} else {
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
		tc1 = (nstcall = 0, F965_6304(Current));
		(nstcall = 0, F965_6332(Current, loc1, tr1, tc1));
	}
	RTHOOK(9);
	Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
	(nstcall = -1, F965_6281(RTCW(Result), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("not_empty", EX_POST);
		tb1 = (nstcall = 1, F965_6286(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("extended_with_only_empty_or_root", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tr1 = (nstcall = 0, F965_6292(Current));
		if (!(nstcall = 0, F965_6309(Current, tr1))) {
			tb2 = (nstcall = 0, F965_6286(Current));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F965_6317(RTCW(Result)));
			tr2 = (nstcall = 0, F965_6317(Current));
			tr3 = (nstcall = 1, F965_6317(RTCW(arg1)));
			tr3 = (nstcall = 1, F1084_7960(RTCW(tr2), tr3));
			tb2 = (nstcall = 1, F1083_7924(RTCW(tr1), tr3));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("extended_with_more_than_root_or_not_empty", EX_POST);
		tb1 = '\01';
		tb2 = '\0';
		tr1 = (nstcall = 0, F965_6292(Current));
		if ((EIF_BOOLEAN) !(nstcall = 0, F965_6309(Current, tr1))) {
			tb2 = (EIF_BOOLEAN) !(nstcall = 0, F965_6286(Current));
		}
		if (tb2) {
			tr1 = (nstcall = 1, F965_6317(RTCW(Result)));
			tr2 = (nstcall = 0, F965_6317(Current));
			tr3 = RTOUCR(32,(nstcall = 0, F965_6335), (Current));
			tr3 = (nstcall = 1, F1084_7960(RTCW(tr2), tr3));
			tr2 = (nstcall = 1, F965_6317(RTCW(arg1)));
			tr2 = (nstcall = 1, F1084_7960(RTCW(tr3), tr2));
			tb2 = (nstcall = 1, F1083_7924(RTCW(tr1), tr2));
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
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.appended */
EIF_REFERENCE F965_6307 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,tr2);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLIU(8);
	
	RTEAA("appended", 964, Current, 1, 1, 12066);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_extra_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_extra_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = RTLNSMART(eif_new_type(1080, 1).id);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	ti4_3 = (nstcall = 0, F965_6322(Current));
	(nstcall = -1, F1079_7731(RTCW(loc1), (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 * ti4_3))));
	RTHOOK(4);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc1))-1080])(loc1, *(EIF_REFERENCE *)(Current)));
	RTHOOK(5);
	(nstcall = 0, F965_6331(Current, loc1, arg1, (EIF_CHARACTER_8) '\000'));
	RTHOOK(6);
	Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
	(nstcall = -1, F965_6280(RTCW(Result), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("not_empty", EX_POST);
		tb1 = (nstcall = 1, F965_6286(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("appended", EX_POST);
		tr1 = (nstcall = 1, F965_6317(RTCW(Result)));
		tr2 = (nstcall = 0, F965_6317(Current));
		tr3 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F965_6278(RTCW(tr3), arg1));
		tr4 = (nstcall = 1, F965_6317(RTCW(tr3)));
		tr3 = (nstcall = 1, F1084_7960(RTCW(tr2), tr4));
		tb1 = (nstcall = 1, F1083_7924(RTCW(tr1), tr3));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.appended_with_extension */
EIF_REFERENCE F965_6308 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("appended_with_extension", 964, Current, 2, 1, 12067);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ext_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_ext_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_ext_has_no_dot", EX_PRE);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R6127[Dtype(RTCW(arg1))-1079])(arg1, tw1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_ext_has_no_directory_separator", EX_PRE);
		tb1 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R6127[Dtype(RTCW(arg1))-1079])(arg1, tw1));
		if ((EIF_BOOLEAN) !tb2) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_CHARACTER_32)) R6127[Dtype(RTCW(arg1))-1079])(arg1, tw1));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("has_entry", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F965_6294(Current)) != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	loc1 = RTLNSMART(eif_new_type(1080, 1).id);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	ti4_3 = (nstcall = 0, F965_6322(Current));
	ti4_4 = (nstcall = 0, F965_6322(Current));
	(nstcall = -1, F1079_7731(RTCW(loc1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (ti4_2 * ti4_3)) + ti4_4)));
	RTHOOK(7);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(loc1))-1080])(loc1, *(EIF_REFERENCE *)(Current)));
	RTHOOK(8);
	(nstcall = 0, F965_6331(Current, loc1, arg1, (EIF_CHARACTER_8) '.'));
	RTHOOK(9);
	Result = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
	(nstcall = -1, F965_6281(RTCW(Result), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("not_empty", EX_POST);
		tb1 = (nstcall = 1, F965_6286(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("extension_set", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 1, F965_6295(RTCW(Result)));
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb2 = (nstcall = 1, F1076_7646(loc2, arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("components_stable", EX_POST);
		tr1 = (nstcall = 1, F965_6296(RTCW(Result)));
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
		tr1 = (nstcall = 0, F965_6296(Current));
		ti4_2 = (nstcall = 1, F867_5806(RTCW(tr1)));
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
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
	return Result;
}

/* {PATH}.same_as */
EIF_BOOLEAN F965_6309 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("same_as", 964, Current, 0, 1, 12068);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN)(arg1 == NULL)) {
	} else {
		RTHOOK(2);
		if ((EIF_BOOLEAN)(arg1 == Current)) {
			RTHOOK(3);
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(4);
			if ((nstcall = 0, F74_995(Current))) {
				RTHOOK(5);
				Result = (nstcall = 0, F965_6312(Current, arg1));
			} else {
				RTHOOK(6);
				Result = (nstcall = 0, F965_6313(Current, arg1));
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.is_less */
EIF_BOOLEAN F965_6310 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("is_less", 964, Current, 0, 1, 12069);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((nstcall = 0, F74_995(Current))) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2903[Dtype(RTCW(tr1))-253])(tr1, tr2));
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(4);
		tr1 = (nstcall = 0, F965_6317(Current));
		tr2 = (nstcall = 1, F1084_7963(RTCW(tr1)));
		tr1 = (nstcall = 1, F965_6317(RTCW(arg1)));
		tr3 = (nstcall = 1, F1084_7963(RTCW(tr1)));
		tb1 = (nstcall = 1, F1083_7926(RTCW(tr2), tr3));
		Result = (EIF_BOOLEAN) tb1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("asymmetric", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 1, F965_6310(RTCW(arg1), Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
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

/* {PATH}.is_equal */
EIF_BOOLEAN F965_6311 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_equal", 964, Current, 0, 1, 12070);
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
	Result = (nstcall = 0, F965_6309(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
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
		RTHOOK(5);
		RTCT("trichotomy", EX_POST);
		tb1 = '\0';
		tb2 = (nstcall = 1, F965_6310(Current, arg1));
		if ((EIF_BOOLEAN) !tb2) {
			tb2 = (nstcall = 1, F965_6310(RTCW(arg1), Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {PATH}.is_case_sensitive_equal */
EIF_BOOLEAN F965_6312 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_case_sensitive_equal", 964, Current, 0, 1, 12071);
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
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R11[Dtype(RTCW(tr1))-0])(tr1, tr2));
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.is_case_insensitive_equal */
EIF_BOOLEAN F965_6313 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_case_insensitive_equal", 964, Current, 0, 1, 12072);
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
		tr1 = (nstcall = 0, F965_6317(Current));
		tr2 = (nstcall = 1, F965_6317(RTCW(arg1)));
		tb1 = (nstcall = 1, F1083_7922(RTCW(tr1), tr2));
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.copy */
void F965_6314 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("copy", 964, Current, 0, 1, 12073);
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
		RTAR(Current, tr2);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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

/* {PATH}.out */
EIF_REFERENCE F965_6315 (EIF_REFERENCE Current)
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
	
	RTEAA("out", 964, Current, 1, 0, 12074);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F965_6317(Current));
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1078, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1079_7733(RTCW(Result), loc1));
	} else {
		RTHOOK(3);
		Result = (nstcall = 0, F965_6316(Current));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {PATH}.utf_8_name */
EIF_REFERENCE F965_6316 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	struct eif_ex_58 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(77, 0x00).id);
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("utf_8_name", 964, Current, 1, 0, 12075);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F965_6317(Current));
	tr1 = (nstcall = 1, F78_1204(RTCW(loc1), tr1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.name */
EIF_REFERENCE F965_6317 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	struct eif_ex_58 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
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
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLIU(5);
	
	RTEAA("name", 964, Current, 2, 0, 12076);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc2;
	} else {
		RTHOOK(3);
		if ((nstcall = 0, F263_3307(Current))) {
			RTHOOK(4);
			Result = RTLNS(eif_new_type(1083, 0x01).id, 1083, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr1 = (nstcall = 1, F78_1243(RTCW(loc1), *(EIF_REFERENCE *)(Current)));
			(nstcall = -1, F1083_7899(RTCW(Result), tr1));
		} else {
			RTHOOK(5);
			Result = RTLNS(eif_new_type(1083, 0x01).id, 1083, _OBJSIZ_1_0_0_4_0_0_0_0_);
			tr1 = (nstcall = 1, F78_1216(RTCW(loc1), *(EIF_REFERENCE *)(Current)));
			(nstcall = -1, F1083_7899(RTCW(Result), tr1));
		}
		RTHOOK(6);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) Result;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("roundtrip", EX_POST);
		tr1 = RTLNS(eif_new_type(964, 0x01).id, 964, _OBJSIZ_2_1_0_0_0_0_0_0_);
		(nstcall = -1, F965_6278(RTCW(tr1), Result));
		if ((nstcall = 0, F965_6309(Current, tr1))) {
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

/* {PATH}.debug_output */
EIF_REFERENCE F965_6318 (EIF_REFERENCE Current)
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
	
	RTEAA("debug_output", 964, Current, 0, 0, 12077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F965_6317(Current));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {PATH}.to_pointer */
EIF_REFERENCE F965_6319 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA("to_pointer", 964, Current, 1, 0, 12078);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(237, 0x01).id, 237, _OBJSIZ_1_0_0_1_0_0_0_0_);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = (nstcall = 0, F965_6322(Current));
	(nstcall = -1, F238_2750(RTCW(loc1), (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 + ti4_2) - ((EIF_INTEGER_32) 1L))));
	RTHOOK(2);
	(nstcall = 1, F238_2777(RTCW(loc1), *(EIF_REFERENCE *)(Current)));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.is_normalized */
EIF_BOOLEAN F965_6320 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
}


/* {PATH}.storage */
EIF_REFERENCE F965_6321 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {PATH}.unit_size */
EIF_INTEGER_32 F965_6322 (EIF_REFERENCE Current)
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
	
	RTEAA("unit_size", 964, Current, 0, 0, 12081);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(2);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	} else {
		RTHOOK(3);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.reset_internal_data */
void F965_6323 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("reset_internal_data", 964, Current, 0, 0, 12082);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {PATH}.normalize */
void F965_6324 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("normalize", 964, Current, 8, 0, 12083);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_normalized", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("storage_not_empty", EX_PRE);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 >= (nstcall = 0, F965_6322(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_REFERENCE *)(Current);
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(6);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(7);
		if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 10L))) {
			RTHOOK(8);
			tb1 = '\01';
			tb2 = '\0';
			if ((nstcall = 0, F965_6334(Current, loc1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '/'))) {
				tb3 = '\01';
				if (!(nstcall = 0, F965_6334(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '/'))) {
					tb3 = (nstcall = 0, F965_6334(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '\\'));
				}
				tb2 = tb3;
			}
			if (!tb2) {
				tb2 = '\0';
				if ((nstcall = 0, F965_6334(Current, loc1, ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '\\'))) {
					tb3 = '\01';
					if (!(nstcall = 0, F965_6334(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '\\'))) {
						tb3 = (nstcall = 0, F965_6334(Current, loc1, ((EIF_INTEGER_32) 3L), (EIF_CHARACTER_8) '/'));
					}
					tb2 = tb3;
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(9);
				tb1 = '\0';
				if ((EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, loc1, ((EIF_INTEGER_32) 5L), (EIF_CHARACTER_8) '/'))) {
					tb1 = (EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, loc1, ((EIF_INTEGER_32) 5L), (EIF_CHARACTER_8) '\\'));
				}
				if (tb1) {
					RTHOOK(10);
					loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
					RTHOOK(11);
					loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			}
		}
		RTHOOK(12);
		loc3 = (EIF_INTEGER_32) loc2;
		RTHOOK(13);
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(14);
			if ((EIF_BOOLEAN) (loc2 > loc4)) break;
			RTHOOK(15);
			if (loc6) {
				RTHOOK(16);
				loc7 = '\0';
				if ((EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, loc1, loc2, (EIF_CHARACTER_8) '\\'))) {
					loc7 = (EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, loc1, loc2, (EIF_CHARACTER_8) '/'));
				}
				RTHOOK(17);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc7;
			} else {
				RTHOOK(18);
				if ((nstcall = 0, F965_6334(Current, loc1, loc2, (EIF_CHARACTER_8) '/'))) {
					RTHOOK(19);
					tc1 = (EIF_CHARACTER_8) '\\';
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(loc1))-776])(loc1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc2));
					RTHOOK(20);
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(21);
					loc6 = (nstcall = 0, F965_6334(Current, loc1, loc2, (EIF_CHARACTER_8) '\\'));
				}
			}
			RTHOOK(22);
			if (loc7) {
				RTHOOK(23);
				if ((EIF_BOOLEAN)(loc2 != loc3)) {
					RTHOOK(24);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, loc2));
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(loc1))-776])(loc1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc3));
					RTHOOK(25);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L))));
					ti4_1 = (EIF_INTEGER_32) (loc3 + ((EIF_INTEGER_32) 1L));
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(loc1))-776])(loc1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &ti4_1));
				}
				RTHOOK(26);
				loc3 += ((EIF_INTEGER_32) 2L);
			}
			RTHOOK(27);
			loc2 += ((EIF_INTEGER_32) 2L);
		}
	} else {
		RTHOOK(28);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(29);
		loc3 = (EIF_INTEGER_32) loc2;
		RTHOOK(30);
		loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		for (;;) {
			RTHOOK(31);
			if ((EIF_BOOLEAN) (loc2 > loc4)) break;
			RTHOOK(32);
			if (loc6) {
				RTHOOK(33);
				loc7 = (nstcall = 0, F965_6334(Current, loc1, loc2, (EIF_CHARACTER_8) '/'));
				loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc7;
				RTHOOK(34);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) !loc7;
			} else {
				RTHOOK(35);
				loc6 = (nstcall = 0, F965_6334(Current, loc1, loc2, (EIF_CHARACTER_8) '/'));
			}
			RTHOOK(36);
			if (loc7) {
				RTHOOK(37);
				if ((EIF_BOOLEAN)(loc2 != loc3)) {
					RTHOOK(38);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(loc1))-776])(loc1, loc2));
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4411[Dtype(RTCW(loc1))-776])(loc1, (EIF_REFERENCE) &tc1, (EIF_REFERENCE) &loc3));
				}
				RTHOOK(39);
				loc3++;
			}
			RTHOOK(40);
			loc2++;
		}
	}
	RTHOOK(41);
	if ((EIF_BOOLEAN)(loc2 != loc3)) {
		RTHOOK(42);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R6225[Dtype(RTCW(loc1))-1080])(loc1, (EIF_INTEGER_32) (loc3 - ((EIF_INTEGER_32) 1L))));
	}
	RTHOOK(43);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(44);
	if (loc8) {
		RTHOOK(45);
		loc5 = (nstcall = 0, F965_6328(Current));
		RTHOOK(46);
		if ((EIF_BOOLEAN)(loc5 == ((EIF_INTEGER_32) 0L))) {
			RTHOOK(47);
			ti4_1 = (nstcall = 0, F965_6322(Current));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R6231[Dtype(RTCW(loc1))-1080])(loc1, ti4_1));
		}
	}
	RTHOOK(48);
	tb1 = '\0';
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
	ti4_2 = (nstcall = 0, F965_6322(Current));
	tc1 = (nstcall = 0, F965_6304(Current));
	if ((nstcall = 0, F965_6334(Current, loc1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), tc1))) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) ((nstcall = 0, F965_6328(Current)) < ti4_1);
	}
	if (tb1) {
		RTHOOK(49);
		ti4_1 = (nstcall = 0, F965_6322(Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R6233[Dtype(RTCW(loc1))-1080])(loc1, ti4_1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(50);
		RTCT("is_normalized", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(51);
	RTLE;
	RTEE;
}

/* {PATH}.internal_name */
EIF_REFERENCE F965_6325 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {PATH}.platform */
static EIF_REFERENCE F965_6326_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(33)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("platform", 964, Current, 0, 0, 12085);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(262, 0x01).id, 262, _OBJSIZ_0_0_0_0_0_0_0_0_);
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

EIF_REFERENCE F965_6326 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(33,F965_6326_body,(Current));
}

/* {PATH}.env */
static EIF_REFERENCE F965_6327_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(31)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("env", 964, Current, 0, 0, 12086);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(316, 0x01).id, 316, _OBJSIZ_0_0_0_1_0_0_0_0_);
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

EIF_REFERENCE F965_6327 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(31,F965_6327_body,(Current));
}

/* {PATH}.root_end_position */
EIF_INTEGER_32 F965_6328 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("root_end_position", 964, Current, 2, 0, 12087);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_normalized", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		if ((nstcall = 0, F263_3307(Current))) {
			RTHOOK(4);
			tb1 = '\0';
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN)(ti4_1 == (nstcall = 0, F965_6322(Current)))) {
				tb1 = (nstcall = 0, F965_6334(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 1L), (EIF_CHARACTER_8) '\\'));
			}
			if (tb1) {
				RTHOOK(5);
				Result = (nstcall = 0, F965_6322(Current));
			} else {
				RTHOOK(6);
				tb1 = '\0';
				tr1 = *(EIF_REFERENCE *)(Current);
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
				if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 4L))) {
					tb2 = '\0';
					tr1 = *(EIF_REFERENCE *)(Current);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 2L)));
					if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000')) {
						tr1 = *(EIF_REFERENCE *)(Current);
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 4L)));
						tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
					}
					tb1 = tb2;
				}
				if (tb1) {
					RTHOOK(7);
					tr1 = *(EIF_REFERENCE *)(Current);
					tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 1L)));
					tc2 = eif_builtin_CHARACTER_8_as_lower__c1_c1(tc1);
					loc1 = (EIF_CHARACTER_8) tc2;
					RTHOOK(8);
					tb1 = '\0';
					if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc1 >= (EIF_CHARACTER_8) 'a') && (EIF_BOOLEAN) (loc1 <= (EIF_CHARACTER_8) 'z'))) {
						tr1 = *(EIF_REFERENCE *)(Current);
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 3L)));
						tb1 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) ':');
					}
					if (tb1) {
						RTHOOK(9);
						tb1 = '\0';
						tr1 = *(EIF_REFERENCE *)(Current);
						ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
						if ((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) (((EIF_INTEGER_32) 3L) * (nstcall = 0, F965_6322(Current))))) {
							tb1 = (nstcall = 0, F965_6334(Current, *(EIF_REFERENCE *)(Current), ((EIF_INTEGER_32) 5L), (EIF_CHARACTER_8) '\\'));
						}
						if (tb1) {
							RTHOOK(10);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
						} else {
							RTHOOK(11);
							Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
						}
					} else {
						RTHOOK(12);
						tb1 = '\0';
						if ((EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '\\')) {
							tr1 = *(EIF_REFERENCE *)(Current);
							tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 3L)));
							tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\\');
						}
						if (tb1) {
							RTHOOK(13);
							Result = (nstcall = 0, F965_6322(Current));
						} else {
							RTHOOK(14);
							tb1 = '\0';
							tb2 = '\0';
							tb3 = '\0';
							tr1 = *(EIF_REFERENCE *)(Current);
							ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
							if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 10L))) {
								tb3 = (EIF_BOOLEAN)(loc1 == (EIF_CHARACTER_8) '\\');
							}
							if (tb3) {
								tr1 = *(EIF_REFERENCE *)(Current);
								tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 3L)));
								tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\\');
							}
							if (tb2) {
								tr1 = *(EIF_REFERENCE *)(Current);
								tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 5L)));
								tb1 = (EIF_BOOLEAN)(tc1 != (EIF_CHARACTER_8) '\\');
							}
							if (tb1) {
								RTHOOK(15);
								loc2 = (nstcall = 0, F965_6330(Current, ((EIF_INTEGER_32) 7L)));
								RTHOOK(16);
								tb1 = '\0';
								if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
									tr1 = *(EIF_REFERENCE *)(Current);
									ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
									tb1 = (EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + (nstcall = 0, F965_6322(Current))) <= ti4_1);
								}
								if (tb1) {
									RTHOOK(17);
									ti4_1 = (nstcall = 0, F965_6322(Current));
									ti4_1 = (nstcall = 0, F965_6330(Current, (EIF_INTEGER_32) (loc2 + ti4_1)));
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(18);
									if ((EIF_BOOLEAN) (loc2 > ((EIF_INTEGER_32) 0L))) {
										RTHOOK(19);
										Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
									} else {
										RTHOOK(20);
										tr1 = *(EIF_REFERENCE *)(Current);
										ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
										Result = (EIF_INTEGER_32) ti4_1;
									}
								}
							}
						}
					}
				}
			}
		} else {
			RTHOOK(21);
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(tr1))-776])(tr1, ((EIF_INTEGER_32) 1L)));
			if ((EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '/')) {
				RTHOOK(22);
				Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("not_too_big", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("valid_for_windows", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F263_3307(Current))) {
			tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (Result % (nstcall = 0, F965_6322(Current))) == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.end_position_of_last_directory_separator */
EIF_INTEGER_32 F965_6329 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("end_position_of_last_directory_separator", 964, Current, 0, 0, 12088);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_normalized", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F666_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		Result = (nstcall = 0, F965_6322(Current));
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - Result) + ((EIF_INTEGER_32) 1L));
		RTHOOK(4);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 1L))) {
			for (;;) {
				RTHOOK(5);
				tb1 = '\01';
				if (!(EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 1L))) {
					tr1 = *(EIF_REFERENCE *)(Current);
					tc1 = (nstcall = 0, F965_6304(Current));
					tb1 = (nstcall = 0, F965_6334(Current, tr1, Result, tc1));
				}
				if (tb1) break;
				RTHOOK(6);
				Result -= (nstcall = 0, F965_6322(Current));
			}
		}
		RTHOOK(7);
		if ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 0L))) {
			RTHOOK(8);
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		} else {
			RTHOOK(9);
			ti4_1 = (nstcall = 0, F965_6322(Current));
			Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result + ti4_1) - ((EIF_INTEGER_32) 1L));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("not_too_big", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (Result <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("valid_for_windows", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F263_3307(Current))) {
			tb2 = (EIF_BOOLEAN)((EIF_INTEGER_32) (Result % (nstcall = 0, F965_6322(Current))) == ((EIF_INTEGER_32) 0L));
		}
		if (tb2) {
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
	return Result;
}

/* {PATH}.next_directory_separator */
EIF_INTEGER_32 F965_6330 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc4);
	RTLIU(3);
	
	RTEAA("next_directory_separator", 964, Current, 4, 1, 12089);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_starting_pos_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (arg1 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_starting_pos_is_well_positionned", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F263_3307(Current))) {
			tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (arg1 % (nstcall = 0, F965_6322(Current))) == ((EIF_INTEGER_32) 1L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = (nstcall = 0, F965_6322(Current));
	RTHOOK(4);
	loc3 = (nstcall = 0, F965_6304(Current));
	RTHOOK(5);
	Result = (EIF_INTEGER_32) arg1;
	RTHOOK(6);
	loc4 = *(EIF_REFERENCE *)(Current);
	RTHOOK(7);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc4)+ _LNGOFF_1_1_0_2_);
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(8);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) ((EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 1L)) || (EIF_BOOLEAN) (Result > loc1))) {
			tb1 = (nstcall = 0, F965_6334(Current, loc4, Result, loc3));
		}
		if (tb1) break;
		RTHOOK(9);
		Result += loc2;
	}
	RTHOOK(10);
	if ((EIF_BOOLEAN) (Result > loc1)) {
		RTHOOK(11);
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("valid_position", EX_POST);
		tb2 = '\0';
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
			tb2 = (EIF_BOOLEAN) (Result <= ti4_1);
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("well_positionned", EX_POST);
		tb2 = '\01';
		if ((nstcall = 0, F263_3307(Current))) {
			tb3 = '\01';
			if (!(EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L))) {
				tb3 = (EIF_BOOLEAN)((EIF_INTEGER_32) (Result % (nstcall = 0, F965_6322(Current))) == ((EIF_INTEGER_32) 1L));
			}
			tb2 = tb3;
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("has_separator", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
			tr1 = *(EIF_REFERENCE *)(Current);
			tc1 = (nstcall = 0, F965_6304(Current));
			tb2 = (nstcall = 0, F965_6334(Current, tr1, Result, tc1));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.internal_append_into */
void F965_6331 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	struct eif_ex_58 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	memset (&sloc1.overhead, 0, OVERHEAD + _OBJSIZ_0_0_0_0_0_0_0_0_);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(77, 0x00).id);
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLIU(4);
	
	RTEAA("internal_append_into", 964, Current, 1, 3, 12090);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg2))-1079])(arg2));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg2))-1079])(arg2));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		tb1 = '\0';
		tb2 = '\0';
		tb3 = '\0';
		if ((EIF_BOOLEAN)(arg3 != (EIF_CHARACTER_8) '\000')) {
			tb4 = (nstcall = 1, F666_4976(RTCW(arg1)));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			ti4_2 = (nstcall = 0, F965_6322(Current));
			tb2 = (EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), arg3));
		}
		if (tb2) {
			tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg2))-1079])(arg2, ((EIF_INTEGER_32) 1L)));
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '/';
			tb1 = (EIF_BOOLEAN)(tw1 != tw2);
		}
		if (tb1) {
			RTHOOK(5);
			if ((nstcall = 0, F263_3307(Current))) {
				RTHOOK(6);
				tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg2))-1079])(arg2, ((EIF_INTEGER_32) 1L)));
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
				if ((EIF_BOOLEAN)(tw1 != tw2)) {
					RTHOOK(7);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, arg3));
					RTHOOK(8);
					(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\000'));
				}
			} else {
				RTHOOK(9);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, arg3));
			}
		}
		RTHOOK(10);
		if ((nstcall = 0, F263_3307(Current))) {
			RTHOOK(11);
			(nstcall = 1, F78_1230(RTCW(loc1), arg2, arg1));
		} else {
			RTHOOK(12);
			(nstcall = 1, F78_1205(RTCW(loc1), arg2, arg1));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
}

/* {PATH}.internal_path_append_into */
void F965_6332 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("internal_path_append_into", 964, Current, 0, 3, 12091);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if ((EIF_BOOLEAN)(arg3 != (EIF_CHARACTER_8) '\000')) {
		tb4 = (nstcall = 1, F666_4976(RTCW(arg1)));
		tb3 = (EIF_BOOLEAN) !tb4;
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_2 = (nstcall = 0, F965_6322(Current));
		tb2 = (EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), arg3));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, arg2, ((EIF_INTEGER_32) 1L), arg3));
	}
	if (tb1) {
		RTHOOK(4);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, arg3));
		RTHOOK(5);
		if ((nstcall = 0, F263_3307(Current))) {
			RTHOOK(6);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\000'));
		}
	}
	RTHOOK(7);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6293[Dtype(RTCW(arg1))-1080])(arg1, arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {PATH}.internal_path_append_substring_into */
void F965_6333 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_CHARACTER_8 arg5)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("internal_path_append_substring_into", 964, Current, 0, 5, 12092);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("other_has_not_trailing_directory_separator", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		ti4_2 = (nstcall = 0, F965_6322(Current));
		tc1 = (nstcall = 0, F965_6304(Current));
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, arg2, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), tc1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	if ((EIF_BOOLEAN)(arg5 != (EIF_CHARACTER_8) '\000')) {
		tb4 = (nstcall = 1, F666_4976(RTCW(arg1)));
		tb3 = (EIF_BOOLEAN) !tb4;
	}
	if (tb3) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		ti4_2 = (nstcall = 0, F965_6322(Current));
		tb2 = (EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, arg1, (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) + ((EIF_INTEGER_32) 1L)), arg5));
	}
	if (tb2) {
		tb1 = (EIF_BOOLEAN) !(nstcall = 0, F965_6334(Current, arg2, arg3, arg5));
	}
	if (tb1) {
		RTHOOK(5);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, arg5));
		RTHOOK(6);
		if ((nstcall = 0, F263_3307(Current))) {
			RTHOOK(7);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R6297[Dtype(RTCW(arg1))-1080])(arg1, (EIF_CHARACTER_8) '\000'));
		}
	}
	RTHOOK(8);
	(nstcall = 1, F1081_7845(RTCW(arg1), arg2, arg3, arg4));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {PATH}.is_character */
EIF_BOOLEAN F965_6334 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_CHARACTER_8 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_character", 964, Current, 0, 3, 12093);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pos_valid", EX_PRE);
		tb1 = (nstcall = 1, F1076_7613(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_pos_valid_for_windows", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F263_3307(Current))) {
			tb2 = (nstcall = 1, F1076_7613(RTCW(arg1), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_pos_odd_for_windows", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F263_3307(Current))) {
			tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (arg2 % (nstcall = 0, F965_6322(Current))) == ((EIF_INTEGER_32) 1L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_storage_count_valid_for_windows", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F263_3307(Current))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % (nstcall = 0, F965_6322(Current))) == ((EIF_INTEGER_32) 0L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(6);
		Result = '\0';
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, arg2));
		if ((EIF_BOOLEAN)(tc1 == arg3)) {
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
			Result = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
		}
	} else {
		RTHOOK(7);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, arg2));
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tc1 == arg3);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, arg2));
		if ((EIF_BOOLEAN)(tc1 == arg3)) {
			tb2 = '\01';
			if ((nstcall = 0, F263_3307(Current))) {
				tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
				tb2 = (EIF_BOOLEAN)(tc1 == (EIF_CHARACTER_8) '\000');
			}
			tb1 = tb2;
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}.directory_separator_string */
static EIF_REFERENCE F965_6335_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(32)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("directory_separator_string", 964, Current, 0, 0, 12094);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	if ((nstcall = 0, F263_3307(Current))) {
		RTHOOK(2);
		Result = RTMS32_EX_H("\\\000\000\000",1,92);
	} else {
		RTHOOK(3);
		Result = RTMS32_EX_H("/\000\000\000",1,47);
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

EIF_REFERENCE F965_6335 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(32,F965_6335_body,(Current));
}

/* {PATH}.c_same_files */
EIF_BOOLEAN F965_6337 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_POINTER arg2)
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
	
	RTEAA("c_same_files", 964, Current, 0, 2, 12096);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path1_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_path2_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = EIF_TEST(inline_F965_6337 ((EIF_POINTER) arg1, (EIF_POINTER) arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {PATH}._invariant */
void F965_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTEAINV(l_feature_name, 308, Current, 0, 0);
	RTIT("little_endian_windows", Current);
	tb1 = '\01';
	if ((nstcall = 0, F263_3307(Current))) {
		tr1 = RTOUCR(33,(nstcall = 0, F965_6326), (Current));
		tb2 = RTOUCB(EIF_BOOLEAN,34,(nstcall = 1, F263_3312), (RTCW(tr1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("even_count_on_windows", Current);
	tb1 = '\01';
	if ((nstcall = 0, F263_3307(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % (nstcall = 0, F965_6322(Current))) == ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_forward_slash_on_windows", Current);
	tb1 = '\01';
	if ((nstcall = 0, F263_3307(Current))) {
		tr1 = *(EIF_REFERENCE *)(Current);
		tr2 = RTMS_EX_H("/\000",2,12032);
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6151[Dtype(RTCW(tr1))-1079])(tr1, tr2));
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit309 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
