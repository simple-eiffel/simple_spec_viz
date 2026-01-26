/*
 * Code for class REFLECTED_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "re241.h"
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

/* {REFLECTED_OBJECT}.class_name */
EIF_REFERENCE F276_3556 (EIF_REFERENCE Current)
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
	
	RTEAA("class_name", 275, Current, 0, 0, 3594);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1078(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.type_name */
EIF_REFERENCE F276_3557 (EIF_REFERENCE Current)
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
	
	RTEAA("type_name", 275, Current, 0, 0, 3595);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1081(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.dynamic_type */
EIF_INTEGER_32 F276_3558 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
}


/* {REFLECTED_OBJECT}.generic_count */
EIF_INTEGER_32 F276_3559 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("generic_count", 275, Current, 0, 0, 3597);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1182(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.generic_dynamic_type */
EIF_INTEGER_32 F276_3560 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("generic_dynamic_type", 275, Current, 0, 1, 3598);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_generic", EX_PRE);
		RTTE((EIF_BOOLEAN) ((nstcall = 0, F276_3559(Current)) > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("i_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L))) {
			tb1 = (EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3559(Current)));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1183(Current, ti4_1, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("dynamic_type_nonnegative", EX_POST);
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

/* {REFLECTED_OBJECT}.field */
EIF_REFERENCE F276_3561 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("field", 275, Current, 0, 1, 3599);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F276_3564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch ((nstcall = 0, F276_3577(Current, arg1))) {
		case 9L:
			RTHOOK(5);
			Result = RTLNS(eif_new_type(1011, 0x00).id, 1011, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_INTEGER_8 *)Result = (nstcall = 0, F276_3589(Current, arg1));
			break;
		case 10L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(1008, 0x00).id, 1008, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_INTEGER_16 *)Result = (nstcall = 0, F276_3590(Current, arg1));
			break;
		case 4L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)Result = (nstcall = 0, F276_3591(Current, arg1));
			break;
		case 11L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(1002, 0x00).id, 1002, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_INTEGER_64 *)Result = (nstcall = 0, F276_3592(Current, arg1));
			break;
		case 13L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(1020, 0x00).id, 1020, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_NATURAL_8 *)Result = (nstcall = 0, F276_3585(Current, arg1));
			break;
		case 14L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
			*(EIF_NATURAL_16 *)Result = (nstcall = 0, F276_3586(Current, arg1));
			break;
		case 15L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(1017, 0x00).id, 1017, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_NATURAL_32 *)Result = (nstcall = 0, F276_3587(Current, arg1));
			break;
		case 16L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(1014, 0x00).id, 1014, _OBJSIZ_0_0_0_0_0_0_1_0_);
			*(EIF_NATURAL_64 *)Result = (nstcall = 0, F276_3588(Current, arg1));
			break;
		case 5L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(1023, 0x00).id, 1023, _OBJSIZ_0_0_0_0_1_0_0_0_);
			*(EIF_REAL_32 *)Result = (nstcall = 0, F276_3593(Current, arg1));
			break;
		case 6L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
			*(EIF_REAL_64 *)Result = (nstcall = 0, F276_3595(Current, arg1));
			break;
		case 2L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(1032, 0x00).id, 1032, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_CHARACTER_8 *)Result = (nstcall = 0, F276_3582(Current, arg1));
			break;
		case 12L:
			RTHOOK(16);
			Result = RTLNS(eif_new_type(1029, 0x00).id, 1029, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_CHARACTER_32 *)Result = (nstcall = 0, F276_3583(Current, arg1));
			break;
		case 3L:
			RTHOOK(17);
			Result = RTLNS(eif_new_type(1035, 0x00).id, 1035, _OBJSIZ_0_1_0_0_0_0_0_0_);
			*(EIF_BOOLEAN *)Result = (nstcall = 0, F276_3584(Current, arg1));
			break;
		case 0L:
			RTHOOK(18);
			Result = RTLNS(eif_new_type(1068, 0x00).id, 1068, _OBJSIZ_0_0_0_0_0_1_0_0_);
			*(EIF_POINTER *)Result = (nstcall = 0, F276_3594(Current, arg1));
			break;
		case 1L:
		case 7L:
			RTHOOK(19);
			Result = (nstcall = 0, F276_3562(Current, arg1));
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.reference_field */
EIF_REFERENCE F276_3562 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("reference_field", 275, Current, 0, 1, 3600);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F276_3564(Current)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("reference_field", EX_PRE);
		tb1 = '\01';
		if (!(EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 1L))) {
			tb1 = (EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 7L));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1113(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_instance_of */
EIF_BOOLEAN F276_3563 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_instance_of", 275, Current, 0, 1, 3601);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("object_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3242[dtype-279])(Current)) != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_id_nonnegative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1085(Current, ti4_1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special */
EIF_BOOLEAN F276_3564 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special", 275, Current, 0, 0, 3602);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1144(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special_of_expanded */
EIF_BOOLEAN F276_3565 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_expanded", 275, Current, 0, 0, 3603);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F276_3564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1145(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special_of_reference */
EIF_BOOLEAN F276_3566 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_reference", 275, Current, 0, 0, 3604);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F276_3564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1146(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_expanded */
EIF_BOOLEAN F276_3567 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_expanded", 275, Current, 0, 0, 3605);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1147(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_tuple */
EIF_BOOLEAN F276_3568 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_tuple", 275, Current, 0, 0, 3606);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1148(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_field_transient */
EIF_BOOLEAN F276_3569 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_field_transient", 275, Current, 0, 1, 3607);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1097(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_field_statically_expanded */
EIF_BOOLEAN F276_3570 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_field_statically_expanded", 275, Current, 0, 1, 3608);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1098(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_copy_semantics_field */
EIF_BOOLEAN F276_3571 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_copy_semantics_field", 275, Current, 0, 1, 3609);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_reference_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1105(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_special_copy_semantics_item */
EIF_BOOLEAN F276_3572 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_special_copy_semantics_item", 275, Current, 1, 1, 3610);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F276_3564(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_special_of_reference", EX_PRE);
		RTTE((nstcall = 0, F276_3566(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3242[dtype-279])(Current));
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(897, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R5140[Dtype(loc1)-898])(loc1, arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1106(Current, arg1, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.is_field_statically_attached */
EIF_BOOLEAN F276_3573 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_field_statically_attached", 275, Current, 0, 1, 3611);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F276_3578(Current, arg1));
	Result = (nstcall = 0, F76_1094(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field_conforms_to */
EIF_BOOLEAN F276_3574 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("field_conforms_to", 275, Current, 0, 2, 3612);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_source_type_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_field_type_non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 0, F76_1095(Current, arg2));
	Result = (nstcall = 0, F76_1085(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field_name */
EIF_REFERENCE F276_3575 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("field_name", 275, Current, 0, 1, 3613);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F276_3564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	tp1 = (nstcall = 0, F76_1110(Current, arg1, ti4_1));
	(nstcall = -1, F1079_7734(RTCW(Result), tp1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_exists", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {REFLECTED_OBJECT}.field_offset */
EIF_INTEGER_32 F276_3576 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_offset", 275, Current, 0, 1, 3614);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_special", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, F276_3564(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1108(Current, arg1, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.field_type */
EIF_INTEGER_32 F276_3577 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_type", 275, Current, 0, 1, 3615);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1111(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("field_type_nonnegative", EX_POST);
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

/* {REFLECTED_OBJECT}.field_static_type */
EIF_INTEGER_32 F276_3578 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_static_type", 275, Current, 0, 1, 3616);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1112(Current, arg1, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("field_type_nonnegative", EX_POST);
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

/* {REFLECTED_OBJECT}.special_copy_semantics_item */
EIF_REFERENCE F276_3580 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("special_copy_semantics_item", 275, Current, 1, 1, 3617);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_special", EX_PRE);
		RTTE((nstcall = 0, F276_3564(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_special_reference", EX_PRE);
		RTTE((nstcall = 0, F276_3566(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_index", EX_PRE);
		tb1 = '\0';
		tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3242[dtype-279])(Current));
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(897, 0x01),loc1);
		if (EIF_TEST(loc1)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_INTEGER_32)) R5140[Dtype(loc1)-898])(loc1, arg1));
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = RTLNS(eif_new_type(279, 0x01).id, 279, _OBJSIZ_1_0_0_3_0_0_0_0_);
	tr1 = (nstcall = 0, F1_14(Current));
	(nstcall = -1, F280_3760(RTCW(Result), tr1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.character_8_field */
EIF_CHARACTER_8 F276_3582 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_8_field", 275, Current, 0, 1, 3618);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1114(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.character_32_field */
EIF_CHARACTER_32 F276_3583 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_field", 275, Current, 0, 1, 3619);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1115(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.boolean_field */
EIF_BOOLEAN F276_3584 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_field", 275, Current, 0, 1, 3620);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("boolean_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1116(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_8_field */
EIF_NATURAL_8 F276_3585 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_8_field", 275, Current, 0, 1, 3621);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1117(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_16_field */
EIF_NATURAL_16 F276_3586 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_16_field", 275, Current, 0, 1, 3559);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1118(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_32_field */
EIF_NATURAL_32 F276_3587 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_field", 275, Current, 0, 1, 3560);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1119(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.natural_64_field */
EIF_NATURAL_64 F276_3588 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_64_field", 275, Current, 0, 1, 3561);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1120(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_8_field */
EIF_INTEGER_8 F276_3589 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_8_field", 275, Current, 0, 1, 3562);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1121(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_16_field */
EIF_INTEGER_16 F276_3590 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_16_field", 275, Current, 0, 1, 3563);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1122(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_32_field */
EIF_INTEGER_32 F276_3591 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_32_field", 275, Current, 0, 1, 3564);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1123(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.integer_64_field */
EIF_INTEGER_64 F276_3592 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_64_field", 275, Current, 0, 1, 3565);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1124(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.real_32_field */
EIF_REAL_32 F276_3593 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_32_field", 275, Current, 0, 1, 3566);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1125(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.pointer_field */
EIF_POINTER F276_3594 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_field", 275, Current, 0, 1, 3567);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("pointer_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1126(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.real_64_field */
EIF_REAL_64 F276_3595 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_64_field", 275, Current, 0, 1, 3568);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1127(Current, arg1, tp1, ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.set_reference_field */
void F276_3596 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("set_reference_field", 275, Current, 0, 2, 3569);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("reference_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_value", EX_PRE);
		tb1 = '\01';
		if ((nstcall = 0, F276_3573(Current, arg1))) {
			tb1 = (EIF_BOOLEAN)(arg2 != NULL);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("value_conforms_to_field_static_type", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tr1 = (nstcall = 1, F1_5(arg2));
			ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R5302[Dtype(RTCW(tr1))-965])(tr1));
			ti4_2 = (nstcall = 0, F276_3578(Current, arg1));
			tb1 = (nstcall = 0, F276_3574(Current, ti4_1, ti4_2));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	tr1 = RTCCL(arg2);
	(nstcall = 0, F76_1152(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_real_64_field */
void F276_3597 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_64_field", 275, Current, 0, 2, 3570);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1153(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_double_field */
void F276_3598 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_double_field", 275, Current, 0, 2, 3571);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1153(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_character_8_field */
void F276_3599 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_8_field", 275, Current, 0, 2, 3572);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1154(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_character_field */
void F276_3600 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_CHARACTER_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_field", 275, Current, 0, 2, 3573);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 2L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1154(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_character_32_field */
void F276_3601 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_CHARACTER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_32_field", 275, Current, 0, 2, 3574);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("character_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1155(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_boolean_field */
void F276_3602 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_boolean_field", 275, Current, 0, 2, 3575);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("boolean_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 3L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1156(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_8_field */
void F276_3603 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_8_field", 275, Current, 0, 2, 3576);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1157(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_16_field */
void F276_3604 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_16 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_16_field", 275, Current, 0, 2, 3577);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 14L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1158(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_32_field */
void F276_3605 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_32_field", 275, Current, 0, 2, 3578);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 15L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1159(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_natural_64_field */
void F276_3606 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_NATURAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_64_field", 275, Current, 0, 2, 3579);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("natural_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 16L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1160(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_8_field */
void F276_3607 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_8 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_8_field", 275, Current, 0, 2, 3580);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_8_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1161(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_16_field */
void F276_3608 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_16 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_16_field", 275, Current, 0, 2, 3581);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_16_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1162(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_field */
void F276_3609 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_field", 275, Current, 0, 2, 3582);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1163(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_32_field */
void F276_3610 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_32_field", 275, Current, 0, 2, 3583);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1163(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_integer_64_field */
void F276_3611 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_64 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_64_field", 275, Current, 0, 2, 3584);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("integer_64_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1164(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_real_32_field */
void F276_3612 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_32_field", 275, Current, 0, 2, 3585);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1165(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_real_field */
void F276_3613 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_field", 275, Current, 0, 2, 3586);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("real_32_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 5L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1165(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.set_pointer_field */
void F276_3614 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_pointer_field", 275, Current, 0, 2, 3587);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_small_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= (nstcall = 0, F276_3615(Current))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("pointer_field", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F276_3577(Current, arg1)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	(nstcall = 0, F76_1166(Current, arg1, tp1, ((EIF_INTEGER_32) 0L), arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {REFLECTED_OBJECT}.field_count */
EIF_INTEGER_32 F276_3615 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_count", 275, Current, 0, 0, 3588);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1107(Current, ti4_1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.persistent_field_count */
EIF_INTEGER_32 F276_3616 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("persistent_field_count", 275, Current, 0, 0, 3589);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_1_0_0_0_);
	Result = (nstcall = 0, F76_1099(Current, ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("count_positive", EX_POST);
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

/* {REFLECTED_OBJECT}.physical_size */
EIF_INTEGER_32 F276_3617 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("physical_size", 275, Current, 1, 0, 3590);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F276_3619(Current));
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.deep_physical_size */
EIF_INTEGER_32 F276_3618 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("deep_physical_size", 275, Current, 1, 0, 3591);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = (nstcall = 0, F276_3620(Current));
	RTHOOK(2);
	tu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 2147483647L);
	tu8_2 = eif_min_uint64 (loc1,tu8_1);
	ti4_1 = (EIF_INTEGER_32) tu8_2;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.physical_size_64 */
EIF_NATURAL_64 F276_3619 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("physical_size_64", 275, Current, 0, 0, 3592);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tp1 = (nstcall = 0, (FUNCTION_CAST(EIF_POINTER, (EIF_REFERENCE)) R3308[dtype-279])(Current));
	Result = (nstcall = 0, F76_1109(Current, tp1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {REFLECTED_OBJECT}.deep_physical_size_64 */
EIF_NATURAL_64 F276_3620 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("deep_physical_size_64", 275, Current, 3, 0, 3593);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(152, 0x01).id, 152, _OBJSIZ_6_6_0_0_0_0_0_0_);
	RTHOOK(2);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R3242[dtype-279])(Current));
	tr2 = RTCCL(tr1);
	(nstcall = 1, F151_2040(RTCW(loc1), tr2));
	RTHOOK(3);
	(nstcall = 1, F151_2044(RTCW(loc1), (EIF_BOOLEAN) 0));
	RTHOOK(4);
	(nstcall = 1, F151_2048(RTCW(loc1)));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_4_);
	loc3 = tr1;
	if (EIF_TEST(loc3)) {
		RTHOOK(6);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4381[Dtype(loc3)-663])(loc3));
		for (;;) {
			RTHOOK(7);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4392[Dtype(loc3)-663])(loc3));
			if (tb1) break;
			RTHOOK(8);
			tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4415[Dtype(loc3)-663])(loc3));
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(9);
			Result += (nstcall = 0, F76_1109(Current, loc2));
			RTHOOK(10);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4394[Dtype(loc3)-663])(loc3));
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit241 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
