/*
 * Code for class MANAGED_POINTER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma253.h"
#include <string.h>
#include "eif_helpers.h"
#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MANAGED_POINTER}.make */
void F303_3908 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make", 302, Current, 0, 1, 4109);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F303_4002(Current));
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 1L));
	tp2 = calloc((size_t)ti4_1, (size_t) ((EIF_INTEGER_32) 1L));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	RTHOOK(4);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(5);
		tr1 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		(nstcall = 1, F222_2629(RTCW(tr1), tr2));
	}
	RTHOOK(6);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(7);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) != (nstcall = 0, F1_33(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("is_shared_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.make_from_array */
void F303_3909 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("make_from_array", 302, Current, 0, 1, 4110);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("data_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F303_4002(Current));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F792_5442(RTCW(arg1)));
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	ti4_2 = eif_max_int32 (ti4_1,((EIF_INTEGER_32) 1L));
	tp2 = malloc((size_t)ti4_2);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		(nstcall = 1, F222_2629(RTCW(tr1), tr2));
	}
	RTHOOK(7);
	(nstcall = 0, F303_3954(Current, arg1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(8);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) != (nstcall = 0, F1_33(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("count_set", EX_POST);
		ti4_1 = (nstcall = 1, F792_5442(RTCW(arg1)));
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("is_shared_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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
}

/* {MANAGED_POINTER}.make_from_pointer */
void F303_3910 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make_from_pointer", 302, Current, 0, 2, 4111);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ptr_not_null", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F303_4002(Current));
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (arg2,((EIF_INTEGER_32) 1L));
	tp2 = malloc((size_t)ti4_1);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		(nstcall = 1, F222_2629(RTCW(tr1), tr2));
	}
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	memcpy((void *)tp1, (const void *) arg1, (size_t) arg2);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(9);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) != (nstcall = 0, F1_33(Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("is_shared_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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

/* {MANAGED_POINTER}.share_from_pointer */
void F303_3911 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("share_from_pointer", 302, Current, 0, 2, 4112);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ptr_valid", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F1_33(Current)))) {
			tb1 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F303_4002(Current));
	RTHOOK(4);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_shared_set", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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

/* {MANAGED_POINTER}.own_from_pointer */
void F303_3912 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("own_from_pointer", 302, Current, 0, 2, 4017);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_ptr_valid", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != (nstcall = 0, F1_33(Current))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F303_4002(Current));
	RTHOOK(4);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_shared_set", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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

/* {MANAGED_POINTER}.set_from_pointer */
void F303_3913 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_from_pointer", 302, Current, 0, 2, 4018);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_shared", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_ptr_not_null", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F1_33(Current)))) {
			tb1 = (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 0L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) arg1;
	RTHOOK(5);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("item_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("count_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_shared_unchanged", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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
}

/* {MANAGED_POINTER}.item */
static EIF_POINTER F303_3914_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("item", 302, Current, 0, 0, 4019);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_POINTER) 0;
}

EIF_POINTER F303_3914 (EIF_REFERENCE Current)
{
	return *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
}


/* {MANAGED_POINTER}.count */
EIF_INTEGER_32 F303_3915 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
}


/* {MANAGED_POINTER}.is_shared */
EIF_BOOLEAN F303_3916 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
}


/* {MANAGED_POINTER}.is_equal */
EIF_BOOLEAN F303_3917 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_equal", 302, Current, 0, 1, 4022);
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
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ti4_1)) {
		RTHOOK(3);
		Result = '\01';
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
			tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
			tr1 = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)tr1 = tp1;
			tb1 = (nstcall = 1, F1037_7520(RTCW(tr1), tp2, ti4_1));
			Result = tb1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
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
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.copy */
void F303_3918 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("copy", 302, Current, 0, 1, 4023);
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
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != Current)) {
		RTHOOK(4);
		tb2 = '\01';
		tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
		if (!(EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == tp1)) {
			tb2 = *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_);
		}
		if (tb2) {
			RTHOOK(5);
			tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
			(nstcall = 0, F303_3910(Current, tp1, ti4_1));
		} else {
			RTHOOK(6);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
			(nstcall = 0, F303_3998(Current, ti4_1));
			RTHOOK(7);
			tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
			tp2 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
			memcpy((void *)tp1, (const void *) tp2, (size_t) ti4_1);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("sharing_status_not_preserved", EX_POST);
		if ((!((EIF_BOOLEAN)(arg1 != Current)) || ((!(tb1) || ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("count_preserved", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.read_natural_8 */
EIF_NATURAL_8 F303_3919 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_8", 302, Current, 0, 1, 4024);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_8 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_16 */
EIF_NATURAL_16 F303_3920 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_16", 302, Current, 0, 1, 4025);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_16 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 2L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_32 */
EIF_NATURAL_32 F303_3921 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_32", 302, Current, 0, 1, 4026);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_32 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_64 */
EIF_NATURAL_64 F303_3922 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_64", 302, Current, 0, 1, 4027);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_64 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_8 */
EIF_INTEGER_8 F303_3923 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_8", 302, Current, 0, 1, 4028);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (nstcall = 0, F303_3919(Current, arg1));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_16 */
EIF_INTEGER_16 F303_3924 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_16", 302, Current, 0, 1, 4029);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (nstcall = 0, F303_3920(Current, arg1));
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_32 */
EIF_INTEGER_32 F303_3925 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_32", 302, Current, 0, 1, 4030);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (nstcall = 0, F303_3921(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_64 */
EIF_INTEGER_64 F303_3926 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_64", 302, Current, 0, 1, 4031);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (nstcall = 0, F303_3922(Current, arg1));
	ti8_1 = (EIF_INTEGER_64) tu8_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_pointer */
EIF_POINTER F303_3927 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_pointer", 302, Current, 0, 1, 4032);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + (nstcall = 0, F263_3327(Current))) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	ti4_1 = (nstcall = 0, F263_3327(Current));
	memcpy((void *)(EIF_POINTER *) &(Result), (const void *) tp2, (size_t) ti4_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_boolean */
EIF_BOOLEAN F303_3928 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_boolean", 302, Current, 0, 1, 4033);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + (nstcall = 0, F263_3314(Current))) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	ti4_1 = (nstcall = 0, F263_3314(Current));
	memcpy((void *)(EIF_BOOLEAN *) &(Result), (const void *) tp2, (size_t) ti4_1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_character */
EIF_CHARACTER_8 F303_3929 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_character", 302, Current, 0, 1, 4034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_CHARACTER_8 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real */
EIF_REAL_32 F303_3930 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real", 302, Current, 0, 1, 4035);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_REAL_32 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_32 */
EIF_REAL_32 F303_3931 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_32", 302, Current, 0, 1, 4036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_REAL_32 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_double */
EIF_REAL_64 F303_3932 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_double", 302, Current, 0, 1, 4037);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_REAL_64 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_64 */
EIF_REAL_64 F303_3933 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_64", 302, Current, 0, 1, 4038);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_REAL_64 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_array */
EIF_REFERENCE F303_3934 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("read_array", 302, Current, 1, 2, 4039);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("count_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + arg2) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,912,1020,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		loc1 = RTLNSP2(typres0.id,0,arg2,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(nstcall = -1, F913_6137(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), arg2));
	RTHOOK(5);
	(nstcall = 0, F303_3937(Current, loc1, arg1, ((EIF_INTEGER_32) 0L), arg2));
	RTHOOK(6);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,791,1020,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		Result = RTLNS(typres0.id, 791, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	(nstcall = -1, F792_5433(RTCW(Result), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("read_array_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("read_array_valid_count", EX_POST);
		ti4_1 = (nstcall = 1, F792_5442(RTCW(Result)));
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
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

/* {MANAGED_POINTER}.read_special_natural_8 */
EIF_REFERENCE F303_3935 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("read_special_natural_8", 302, Current, 0, 2, 4040);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + arg2) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,912,1020,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNSP2(typres0.id,0,arg2,sizeof(EIF_NATURAL_8), EIF_TRUE);
	}
	(nstcall = -1, F913_6137(RTCW(Result), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), arg2));
	RTHOOK(5);
	(nstcall = 0, F303_3937(Current, Result, arg1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_special_character_8 */
EIF_REFERENCE F303_3936 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("read_special_character_8", 302, Current, 0, 2, 4041);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + arg2) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,903,1032,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		Result = RTLNSP2(typres0.id,0,arg2,sizeof(EIF_CHARACTER_8), EIF_TRUE);
	}
	(nstcall = -1, F904_6137(RTCW(Result), (EIF_CHARACTER_8) '\000', arg2));
	RTHOOK(5);
	(nstcall = 0, F303_3938(Current, Result, arg1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_into_special_natural_8 */
void F303_3937 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_into_special_natural_8", 302, Current, 0, 4, 4042);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("destination_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("destination_index_in_bound", EX_PRE);
		ti4_1 = (nstcall = 1, F913_6149(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg4) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("n_is_small_enough_for_destination", EX_PRE);
		ti4_1 = (nstcall = 1, F913_6149(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg3 + arg4) <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(8);
	tp1 = (nstcall = 1, F913_6142(RTCW(arg1), arg3));
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp3 = RTPOF(tp2,arg2);
	memcpy((void *)tp1, (const void *) tp3, (size_t) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.read_into_special_character_8 */
void F303_3938 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_into_special_character_8", 302, Current, 0, 4, 4043);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("destination_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("destination_index_in_bound", EX_PRE);
		ti4_1 = (nstcall = 1, F904_6149(arg1));
		RTTE((EIF_BOOLEAN) (arg3 <= ti4_1), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg4) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("n_is_small_enough_for_destination", EX_PRE);
		ti4_1 = (nstcall = 1, F904_6149(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg3 + arg4) <= ti4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(8);
	tp1 = (nstcall = 1, F904_6142(RTCW(arg1), arg3));
	tp2 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp3 = RTPOF(tp2,arg2);
	memcpy((void *)tp1, (const void *) tp3, (size_t) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.put_natural_8 */
void F303_3939 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8", 302, Current, 0, 2, 4044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3919(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_16 */
void F303_3940 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16", 302, Current, 0, 2, 4045);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_16 *) &(arg1), (size_t) ((EIF_INTEGER_32) 2L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3920(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_32 */
void F303_3941 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32", 302, Current, 0, 2, 4046);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3921(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_64 */
void F303_3942 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64", 302, Current, 0, 2, 4047);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3922(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_8 */
void F303_3943 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8", 302, Current, 0, 2, 4048);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (EIF_NATURAL_8) arg1;
	(nstcall = 0, F303_3939(Current, tu1_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3923(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_16 */
void F303_3944 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16", 302, Current, 0, 2, 4049);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (EIF_NATURAL_16) arg1;
	(nstcall = 0, F303_3940(Current, tu2_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3924(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_32 */
void F303_3945 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32", 302, Current, 0, 2, 4050);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (EIF_NATURAL_32) arg1;
	(nstcall = 0, F303_3941(Current, tu4_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3925(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_64 */
void F303_3946 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64", 302, Current, 0, 2, 4051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F303_3942(Current, tu8_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3926(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_pointer */
void F303_3947 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_pointer", 302, Current, 0, 2, 4052);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + (nstcall = 0, F263_3327(Current))) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	ti4_1 = (nstcall = 0, F263_3327(Current));
	memcpy((void *)tp2, (const void *) (EIF_POINTER *) &(arg1), (size_t) ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3927(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_boolean */
void F303_3948 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_boolean", 302, Current, 0, 2, 4053);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + (nstcall = 0, F263_3314(Current))) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	ti4_1 = (nstcall = 0, F263_3314(Current));
	memcpy((void *)tp2, (const void *) (EIF_BOOLEAN *) &(arg1), (size_t) ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3928(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_character */
void F303_3949 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_character", 302, Current, 0, 2, 4054);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_CHARACTER_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3929(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real */
void F303_3950 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real", 302, Current, 0, 2, 4055);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_REAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (arg1, (nstcall = 0, F303_3931(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_32 */
void F303_3951 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32", 302, Current, 0, 2, 4056);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_REAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (arg1, (nstcall = 0, F303_3931(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_double */
void F303_3952 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_double", 302, Current, 0, 2, 4057);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_REAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F303_3933(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_64 */
void F303_3953 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64", 302, Current, 0, 2, 4058);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_REAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F303_3933(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_array */
void F303_3954 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("put_array", 302, Current, 1, 2, 4059);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("data_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_position", EX_PRE);
		ti4_1 = (nstcall = 1, F792_5442(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ti4_1) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	ti4_1 = (nstcall = 1, F792_5442(RTCW(arg1)));
	memcpy((void *)tp2, (const void *) loc1, (size_t) ti4_1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("inserted", EX_POST);
		ti4_1 = (nstcall = 1, F792_5442(RTCW(arg1)));
		if (RTEQ((nstcall = 0, F303_3934(Current, arg2, ti4_1)), arg1)) {
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

/* {MANAGED_POINTER}.put_special_natural_8 */
void F303_3955 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_special_natural_8", 302, Current, 0, 4, 4060);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("destination_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("destination_index_in_bound", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		ti4_1 = (nstcall = 1, F913_6149(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg4) <= ti4_1), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("n_is_small_enough_for_destination", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg3 + arg4) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(8);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg3);
	tp1 = (nstcall = 1, F913_6142(RTCW(arg1), arg2));
	memcpy((void *)tp2, (const void *) tp1, (size_t) arg4);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("inserted", EX_POST);
		tr1 = (nstcall = 0, F303_3935(Current, arg3, arg4));
		tb1 = (nstcall = 1, F913_6152(RTCW(arg1), tr1, ((EIF_INTEGER_32) 0L), arg2, arg4));
		if (tb1) {
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

/* {MANAGED_POINTER}.put_special_character_8 */
void F303_3956 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_special_character_8", 302, Current, 0, 4, 4061);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_spec_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("source_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("destination_index_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("destination_index_in_bound", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("n_is_small_enough_for_source", EX_PRE);
		ti4_1 = (nstcall = 1, F904_6149(arg1));
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + arg4) <= ti4_1), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("n_is_small_enough_for_destination", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg3 + arg4) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(8);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg3);
	tp1 = (nstcall = 1, F904_6142(RTCW(arg1), arg2));
	memcpy((void *)tp2, (const void *) tp1, (size_t) arg4);
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("inserted", EX_POST);
		tr1 = (nstcall = 0, F303_3936(Current, arg3, arg4));
		tb1 = (nstcall = 1, F904_6152(RTCW(arg1), tr1, ((EIF_INTEGER_32) 0L), arg2, arg4));
		if (tb1) {
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

/* {MANAGED_POINTER}.read_natural_8_le */
EIF_NATURAL_8 F303_3957 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_8_le", 302, Current, 0, 1, 4062);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_8 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_16_le */
EIF_NATURAL_16 F303_3958 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_16_le", 302, Current, 1, 1, 4063);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		Result = (nstcall = 0, F303_3920(Current, arg1));
	} else {
		RTHOOK(5);
		tu1_1 = (nstcall = 0, F303_3919(Current, arg1));
		tu2_1 = (EIF_NATURAL_16) tu1_1;
		tu2_2 = eif_bit_and(((EIF_NATURAL_16) 255U),tu2_1);
		loc1 = (EIF_NATURAL_16) tu2_2;
		RTHOOK(6);
		tu1_1 = (nstcall = 0, F303_3919(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
		tu2_1 = (EIF_NATURAL_16) tu1_1;
		tu2_2 = eif_bit_shift_left(tu2_1,((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_or(tu2_2,loc1);
		Result = (EIF_NATURAL_16) tu2_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_32_le */
EIF_NATURAL_32 F303_3959 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_32_le", 302, Current, 2, 1, 4064);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		Result = (nstcall = 0, F303_3921(Current, arg1));
	} else {
		RTHOOK(5);
		tu2_1 = (nstcall = 0, F303_3958(Current, arg1));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		tu4_2 = eif_bit_and(((EIF_NATURAL_32) 65535U),tu4_1);
		loc2 = (EIF_NATURAL_32) tu4_2;
		RTHOOK(6);
		tu2_1 = (nstcall = 0, F303_3958(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L))));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		tu4_1 = (EIF_NATURAL_32) loc1;
		tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 16L));
		tu4_1 = eif_bit_or(tu4_2,loc2);
		Result = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_64_le */
EIF_NATURAL_64 F303_3960 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_64_le", 302, Current, 2, 1, 4065);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		Result = (nstcall = 0, F303_3922(Current, arg1));
	} else {
		RTHOOK(5);
		tu4_1 = (nstcall = 0, F303_3959(Current, arg1));
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tu8_2 = eif_bit_and(((EIF_NATURAL_64) RTU64C(4294967295)),tu8_1);
		loc2 = (EIF_NATURAL_64) tu8_2;
		RTHOOK(6);
		tu4_1 = (nstcall = 0, F303_3959(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L))));
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		loc1 = (EIF_NATURAL_64) tu8_1;
		RTHOOK(7);
		tu8_1 = (EIF_NATURAL_64) loc1;
		tu8_2 = eif_bit_shift_left(tu8_1,((EIF_INTEGER_32) 32L));
		tu8_1 = eif_bit_or(tu8_2,loc2);
		Result = (EIF_NATURAL_64) tu8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_8_le */
EIF_INTEGER_8 F303_3961 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_8_le", 302, Current, 0, 1, 4066);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (nstcall = 0, F303_3957(Current, arg1));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_16_le */
EIF_INTEGER_16 F303_3962 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_16_le", 302, Current, 0, 1, 4067);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (nstcall = 0, F303_3958(Current, arg1));
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_32_le */
EIF_INTEGER_32 F303_3963 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_32_le", 302, Current, 0, 1, 4068);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (nstcall = 0, F303_3959(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_64_le */
EIF_INTEGER_64 F303_3964 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_64_le", 302, Current, 0, 1, 4069);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (nstcall = 0, F303_3960(Current, arg1));
	ti8_1 = (EIF_INTEGER_64) tu8_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_32_le */
EIF_REAL_32 F303_3965 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_32_le", 302, Current, 1, 1, 4070);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	loc1 = (nstcall = 0, F303_3959(Current, arg1));
	RTHOOK(4);
	memcpy((void *)(EIF_REAL_32 *) &(Result), (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_64_le */
EIF_REAL_64 F303_3966 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_64_le", 302, Current, 1, 1, 4071);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	loc1 = (nstcall = 0, F303_3960(Current, arg1));
	RTHOOK(4);
	memcpy((void *)(EIF_REAL_64 *) &(Result), (const void *) (EIF_NATURAL_64 *) &(loc1), (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.put_natural_8_le */
void F303_3967 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8_le", 302, Current, 0, 2, 4072);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3957(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_16_le */
void F303_3968 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16_le", 302, Current, 0, 2, 4073);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		(nstcall = 0, F303_3940(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		tu2_1 = eif_bit_and(arg1,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu1_1 = (EIF_NATURAL_8) tu2_1;
		(nstcall = 0, F303_3939(Current, tu1_1, arg2));
		RTHOOK(6);
		tu2_1 = eif_bit_and(arg1,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
		tu2_2 = eif_bit_shift_right(tu2_1,((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_and(tu2_2,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu1_1 = (EIF_NATURAL_8) tu2_1;
		(nstcall = 0, F303_3939(Current, tu1_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3958(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_32_le */
void F303_3969 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32_le", 302, Current, 0, 2, 4074);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		(nstcall = 0, F303_3941(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
		tu2_1 = (EIF_NATURAL_16) tu4_1;
		(nstcall = 0, F303_3968(Current, tu2_1, arg2));
		RTHOOK(6);
		tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294901760)));
		tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 16L));
		tu4_1 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
		tu2_1 = (EIF_NATURAL_16) tu4_1;
		(nstcall = 0, F303_3968(Current, tu2_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3959(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_64_le */
void F303_3970 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64_le", 302, Current, 0, 2, 4075);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		(nstcall = 0, F303_3942(Current, arg1, arg2));
	} else {
		RTHOOK(5);
		tu8_1 = eif_bit_and(arg1,(EIF_NATURAL_64) ((EIF_INTEGER_64) RTI64C(4294967295)));
		tu4_1 = (EIF_NATURAL_32) tu8_1;
		(nstcall = 0, F303_3969(Current, tu4_1, arg2));
		RTHOOK(6);
		tu8_1 = eif_bit_and(arg1,((EIF_NATURAL_64) RTU64C(18446744069414584320)));
		tu8_2 = eif_bit_shift_right(tu8_1,((EIF_INTEGER_32) 32L));
		tu8_1 = eif_bit_and(tu8_2,(EIF_NATURAL_64) ((EIF_INTEGER_64) RTI64C(4294967295)));
		tu4_1 = (EIF_NATURAL_32) tu8_1;
		(nstcall = 0, F303_3969(Current, tu4_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L))));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3960(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_8_le */
void F303_3971 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8_le", 302, Current, 0, 2, 4076);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (EIF_NATURAL_8) arg1;
	(nstcall = 0, F303_3967(Current, tu1_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3961(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_16_le */
void F303_3972 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16_le", 302, Current, 0, 2, 4077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (EIF_NATURAL_16) arg1;
	(nstcall = 0, F303_3968(Current, tu2_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3962(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_32_le */
void F303_3973 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32_le", 302, Current, 0, 2, 4078);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (EIF_NATURAL_32) arg1;
	(nstcall = 0, F303_3969(Current, tu4_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3963(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_64_le */
void F303_3974 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64_le", 302, Current, 0, 2, 4079);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F303_3970(Current, tu8_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3964(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_32_le */
void F303_3975 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32_le", 302, Current, 1, 2, 4080);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_32 *) &(loc1), (const void *) (EIF_REAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	RTHOOK(4);
	(nstcall = 0, F303_3969(Current, loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (arg1, (nstcall = 0, F303_3965(Current, arg2)))) {
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

/* {MANAGED_POINTER}.put_real_64_le */
void F303_3976 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64_le", 302, Current, 1, 2, 4081);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_64 *) &(loc1), (const void *) (EIF_REAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	RTHOOK(4);
	(nstcall = 0, F303_3970(Current, loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F303_3966(Current, arg2)))) {
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

/* {MANAGED_POINTER}.read_natural_8_be */
EIF_NATURAL_8 F303_3977 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_8_be", 302, Current, 0, 1, 4082);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg1);
	memcpy((void *)(EIF_NATURAL_8 *) &(Result), (const void *) tp2, (size_t) ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_16_be */
EIF_NATURAL_16 F303_3978 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 loc1 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 loc2 = (EIF_NATURAL_16) 0;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_16 tu2_3;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_16_be", 302, Current, 2, 1, 4083);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		tu1_1 = (nstcall = 0, F303_3919(Current, arg1));
		tu2_1 = (EIF_NATURAL_16) tu1_1;
		loc1 = (EIF_NATURAL_16) tu2_1;
		RTHOOK(5);
		tu2_1 = (EIF_NATURAL_16) ((EIF_INTEGER_32) 255L);
		tu1_1 = (nstcall = 0, F303_3919(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L))));
		tu2_2 = (EIF_NATURAL_16) tu1_1;
		tu2_3 = eif_bit_and(tu2_1,tu2_2);
		loc2 = (EIF_NATURAL_16) tu2_3;
		RTHOOK(6);
		tu2_1 = (EIF_NATURAL_16) loc1;
		tu2_2 = eif_bit_shift_left(tu2_1,((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_or(tu2_2,loc2);
		Result = (EIF_NATURAL_16) tu2_1;
	} else {
		RTHOOK(7);
		Result = (nstcall = 0, F303_3920(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_32_be */
EIF_NATURAL_32 F303_3979 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_32_be", 302, Current, 2, 1, 4084);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		tu2_1 = (nstcall = 0, F303_3978(Current, arg1));
		tu4_1 = (EIF_NATURAL_32) tu2_1;
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(5);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
		tu2_1 = (nstcall = 0, F303_3978(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L))));
		tu4_2 = (EIF_NATURAL_32) tu2_1;
		tu4_3 = eif_bit_and(tu4_1,tu4_2);
		loc2 = (EIF_NATURAL_32) tu4_3;
		RTHOOK(6);
		tu4_1 = (EIF_NATURAL_32) loc1;
		tu4_2 = eif_bit_shift_left(tu4_1,((EIF_INTEGER_32) 16L));
		tu4_1 = eif_bit_or(tu4_2,loc2);
		Result = (EIF_NATURAL_32) tu4_1;
	} else {
		RTHOOK(7);
		Result = (nstcall = 0, F303_3921(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_natural_64_be */
EIF_NATURAL_64 F303_3980 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 loc2 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_natural_64_be", 302, Current, 2, 1, 4085);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		tu4_1 = (nstcall = 0, F303_3979(Current, arg1));
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		loc1 = (EIF_NATURAL_64) tu8_1;
		RTHOOK(5);
		tu4_1 = (nstcall = 0, F303_3979(Current, (EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L))));
		tu8_1 = (EIF_NATURAL_64) tu4_1;
		tu8_2 = eif_bit_and(((EIF_NATURAL_64) RTU64C(4294967295)),tu8_1);
		loc2 = (EIF_NATURAL_64) tu8_2;
		RTHOOK(6);
		tu8_1 = (EIF_NATURAL_64) loc1;
		tu8_2 = eif_bit_shift_left(tu8_1,((EIF_INTEGER_32) 32L));
		tu8_1 = eif_bit_or(tu8_2,loc2);
		Result = (EIF_NATURAL_64) tu8_1;
	} else {
		RTHOOK(7);
		Result = (nstcall = 0, F303_3922(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_8_be */
EIF_INTEGER_8 F303_3981 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 ti1_1;
	EIF_NATURAL_8 tu1_1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_8_be", 302, Current, 0, 1, 4086);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (nstcall = 0, F303_3977(Current, arg1));
	ti1_1 = (EIF_INTEGER_8) tu1_1;
	Result = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_16_be */
EIF_INTEGER_16 F303_3982 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 ti2_1;
	EIF_NATURAL_16 tu2_1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_16_be", 302, Current, 0, 1, 4087);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (nstcall = 0, F303_3978(Current, arg1));
	ti2_1 = (EIF_INTEGER_16) tu2_1;
	Result = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_32_be */
EIF_INTEGER_32 F303_3983 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_32_be", 302, Current, 0, 1, 4088);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (nstcall = 0, F303_3979(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) tu4_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_integer_64_be */
EIF_INTEGER_64 F303_3984 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_integer_64_be", 302, Current, 0, 1, 4089);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (nstcall = 0, F303_3980(Current, arg1));
	ti8_1 = (EIF_INTEGER_64) tu8_1;
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_32_be */
EIF_REAL_32 F303_3985 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_32_be", 302, Current, 1, 1, 4090);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	loc1 = (nstcall = 0, F303_3979(Current, arg1));
	RTHOOK(4);
	memcpy((void *)(EIF_REAL_32 *) &(Result), (const void *) (EIF_NATURAL_32 *) &(loc1), (size_t) ((EIF_INTEGER_32) 4L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.read_real_64_be */
EIF_REAL_64 F303_3986 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_64_be", 302, Current, 1, 1, 4091);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg1 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	loc1 = (nstcall = 0, F303_3980(Current, arg1));
	RTHOOK(4);
	memcpy((void *)(EIF_REAL_64 *) &(Result), (const void *) (EIF_NATURAL_64 *) &(loc1), (size_t) ((EIF_INTEGER_32) 8L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {MANAGED_POINTER}.put_natural_8_be */
void F303_3987 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_8_be", 302, Current, 0, 2, 4092);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,arg2);
	memcpy((void *)tp2, (const void *) (EIF_NATURAL_8 *) &(arg1), (size_t) ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3977(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_16_be */
void F303_3988 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	EIF_NATURAL_16 tu2_2;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_16_be", 302, Current, 0, 2, 4093);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		tu2_1 = eif_bit_and(arg1,(EIF_NATURAL_16) ((EIF_INTEGER_32) 65280L));
		tu2_2 = eif_bit_shift_right(tu2_1,((EIF_INTEGER_32) 8L));
		tu2_1 = eif_bit_and(tu2_2,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu1_1 = (EIF_NATURAL_8) tu2_1;
		(nstcall = 0, F303_3939(Current, tu1_1, arg2));
		RTHOOK(5);
		tu2_1 = eif_bit_and(arg1,(EIF_NATURAL_16) ((EIF_INTEGER_32) 255L));
		tu1_1 = (EIF_NATURAL_8) tu2_1;
		(nstcall = 0, F303_3939(Current, tu1_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L))));
	} else {
		RTHOOK(6);
		(nstcall = 0, F303_3940(Current, arg1, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3978(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_32_be */
void F303_3989 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_32_be", 302, Current, 0, 2, 4094);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_64) RTI64C(4294901760)));
		tu4_2 = eif_bit_shift_right(tu4_1,((EIF_INTEGER_32) 16L));
		tu4_1 = eif_bit_and(tu4_2,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
		tu2_1 = (EIF_NATURAL_16) tu4_1;
		(nstcall = 0, F303_3988(Current, tu2_1, arg2));
		RTHOOK(5);
		tu4_1 = eif_bit_and(arg1,(EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L));
		tu2_1 = (EIF_NATURAL_16) tu4_1;
		(nstcall = 0, F303_3988(Current, tu2_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L))));
	} else {
		RTHOOK(6);
		(nstcall = 0, F303_3941(Current, arg1, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3979(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_natural_64_be */
void F303_3990 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_natural_64_be", 302, Current, 0, 2, 4095);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (RTOUCB(EIF_BOOLEAN,34,(nstcall = 0, F263_3312), (Current))) {
		RTHOOK(4);
		tu8_1 = eif_bit_and(arg1,((EIF_NATURAL_64) RTU64C(18446744069414584320)));
		tu8_2 = eif_bit_shift_right(tu8_1,((EIF_INTEGER_32) 32L));
		tu8_1 = eif_bit_and(tu8_2,(EIF_NATURAL_64) ((EIF_INTEGER_64) RTI64C(4294967295)));
		tu4_1 = (EIF_NATURAL_32) tu8_1;
		(nstcall = 0, F303_3989(Current, tu4_1, arg2));
		RTHOOK(5);
		tu8_1 = eif_bit_and(arg1,(EIF_NATURAL_64) ((EIF_INTEGER_64) RTI64C(4294967295)));
		tu4_1 = (EIF_NATURAL_32) tu8_1;
		(nstcall = 0, F303_3989(Current, tu4_1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L))));
	} else {
		RTHOOK(6);
		(nstcall = 0, F303_3942(Current, arg1, arg2));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3980(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_8_be */
void F303_3991 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 tu1_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_8_be", 302, Current, 0, 2, 4096);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu1_1 = (EIF_NATURAL_8) arg1;
	(nstcall = 0, F303_3987(Current, tu1_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3981(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_16_be */
void F303_3992 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 tu2_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_16_be", 302, Current, 0, 2, 4097);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu2_1 = (EIF_NATURAL_16) arg1;
	(nstcall = 0, F303_3988(Current, tu2_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3982(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_32_be */
void F303_3993 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_32_be", 302, Current, 0, 2, 4098);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu4_1 = (EIF_NATURAL_32) arg1;
	(nstcall = 0, F303_3989(Current, tu4_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3983(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_integer_64_be */
void F303_3994 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 tu8_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_integer_64_be", 302, Current, 0, 2, 4099);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tu8_1 = (EIF_NATURAL_64) arg1;
	(nstcall = 0, F303_3990(Current, tu8_1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN)(arg1 == (nstcall = 0, F303_3984(Current, arg2)))) {
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
}

/* {MANAGED_POINTER}.put_real_32_be */
void F303_3995 (EIF_REFERENCE Current, EIF_REAL_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_32_be", 302, Current, 1, 2, 4100);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 4L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_32 *) &(loc1), (const void *) (EIF_REAL_32 *) &(arg1), (size_t) ((EIF_INTEGER_32) 4L));
	RTHOOK(4);
	(nstcall = 0, F303_3989(Current, loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_32 (arg1, (nstcall = 0, F303_3985(Current, arg2)))) {
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

/* {MANAGED_POINTER}.put_real_64_be */
void F303_3996 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("put_real_64_be", 302, Current, 1, 2, 4101);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("pos_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_position", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 8L)) <= *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	
	RTHOOK(3);
	memcpy((void *)(EIF_NATURAL_64 *) &(loc1), (const void *) (EIF_REAL_64 *) &(arg1), (size_t) ((EIF_INTEGER_32) 8L));
	RTHOOK(4);
	(nstcall = 0, F303_3990(Current, loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("inserted", EX_POST);
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (arg1, (nstcall = 0, F303_3986(Current, arg2)))) {
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

/* {MANAGED_POINTER}.append */
void F303_3997 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("append", 302, Current, 1, 1, 4102);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_shared", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc1 + ti4_1);
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = eif_max_int32 (loc1,((EIF_INTEGER_32) 1L));
	tr1 = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
	*(EIF_POINTER *)tr1 = tp1;
	tp2 = (nstcall = 1, F1037_7532(RTCW(tr1), ti4_1));
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
	RTHOOK(5);
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		RTHOOK(6);
		tr1 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTMS_EX_H("No more memory",14,904766585);
		(nstcall = 1, F222_2629(RTCW(tr1), tr2));
	}
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
	tp2 = RTPOF(tp1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
	tp1 = *(EIF_POINTER *)(RTCW(arg1)+ _PTROFF_0_1_0_1_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_0_1_0_0_);
	memcpy((void *)tp2, (const void *) tp1, (size_t) ti4_1);
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) loc1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.resize */
void F303_3998 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("resize", 302, Current, 0, 1, 4103);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("n_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_shared", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if ((EIF_BOOLEAN)(arg1 != *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))) {
		RTHOOK(4);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		ti4_1 = eif_max_int32 (arg1,((EIF_INTEGER_32) 1L));
		tr1 = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
		*(EIF_POINTER *)tr1 = tp1;
		tp2 = (nstcall = 1, F1037_7532(RTCW(tr1), ti4_1));
		*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) tp2;
		RTHOOK(5);
		if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
			RTHOOK(6);
			tr1 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_0_0_0_0_0_0_0_0_);
			tr2 = RTMS_EX_H("No more memory",14,904766585);
			(nstcall = 1, F222_2629(RTCW(tr1), tr2));
		}
	}
	RTHOOK(7);
	if ((EIF_BOOLEAN) (arg1 > *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_))) {
		RTHOOK(8);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		tp2 = RTPOF(tp1,*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_));
		memset((void *)tp2, (int) ((EIF_INTEGER_32) 0L), (size_t) (EIF_INTEGER_32) (arg1 - *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_)));
	}
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) = (EIF_INTEGER_32) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}.dispose */
void F303_3999 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER tp1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dispose", 302, Current, 1, 0, 4104);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
		RTHOOK(2);
		tp1 = *(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_);
		free(tp1);
	}
	RTHOOK(3);
	*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) = (EIF_POINTER) loc1;
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("shared_reset", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_)) {
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

/* {MANAGED_POINTER}.allocation_counter */
static EIF_REFERENCE F303_4000_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(138)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("allocation_counter", 302, Current, 0, 0, 4105);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,116,1011,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 116, _OBJSIZ_0_0_0_0_0_0_1_0_);
	}
	(nstcall = -1, F117_1624(RTCW(tr1), (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)));
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

EIF_REFERENCE F303_4000 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(138,F303_4000_body,(Current));
}

/* {MANAGED_POINTER}.counter */
static EIF_NATURAL_64 F303_4001_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("counter", 302, Current, 0, 0, 4106);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_NATURAL_64) 0;
}

EIF_NATURAL_64 F303_4001 (EIF_REFERENCE Current)
{
	return *(EIF_NATURAL_64 *)(Current+ _I64OFF_0_1_0_1_0_1_0_);
}


/* {MANAGED_POINTER}.increment_counter */
void F303_4002 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("increment_counter", 302, Current, 0, 0, 4107);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {MANAGED_POINTER}._invariant */
void F303_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 252, Current, 0, 0);
	RTIT("item_not_null", Current);
	tb1 = '\01';
	if ((EIF_BOOLEAN)(*(EIF_POINTER *)(Current+ _PTROFF_0_1_0_1_0_0_) == (nstcall = 0, F1_33(Current)))) {
		tb1 = (EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) == ((EIF_INTEGER_32) 0L)) && *(EIF_BOOLEAN *)(Current+ _CHROFF_0_0_));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_count", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_1_0_0_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit253 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
