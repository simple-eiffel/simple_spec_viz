/*
 * Code for class reference NATURAL_16
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "na313.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NATURAL_16}.is_less */
EIF_BOOLEAN F999_6568 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("is_less", 998, Current, 0, 1, 13254);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	Result = (nstcall = 0, F998_6508(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.plus */
EIF_NATURAL_16 F999_6569 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("plus", 998, Current, 0, 1, 13255);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = (nstcall = 0, F998_6517(Current, tr1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.minus */
EIF_NATURAL_16 F999_6570 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("minus", 998, Current, 0, 1, 13256);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = (nstcall = 0, F998_6518(Current, tr1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.product */
EIF_NATURAL_16 F999_6571 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("product", 998, Current, 0, 1, 13257);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = (nstcall = 0, F998_6519(Current, tr1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.quotient */
EIF_REAL_64 F999_6572 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("quotient", 998, Current, 0, 1, 13258);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	Result = (nstcall = 0, F998_6520(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.identity */
EIF_NATURAL_16 F999_6573 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("identity", 998, Current, 0, 0, 13259);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F998_6521(Current));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.integer_quotient */
EIF_NATURAL_16 F999_6574 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("integer_quotient", 998, Current, 0, 1, 13260);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = (nstcall = 0, F998_6523(Current, tr1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.integer_remainder */
EIF_NATURAL_16 F999_6575 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("integer_remainder", 998, Current, 0, 1, 13261);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = (nstcall = 0, F998_6524(Current, tr1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.power */
EIF_REAL_64 F999_6576 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("power", 998, Current, 0, 1, 13262);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6525(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.as_natural_8 */
EIF_NATURAL_8 F999_6577 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_8", 998, Current, 0, 0, 13263);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6530(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.as_natural_16 */
EIF_NATURAL_16 F999_6578 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_16", 998, Current, 0, 0, 13264);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6531(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.as_natural_32 */
EIF_NATURAL_32 F999_6579 (EIF_REFERENCE Current)
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
	
	RTEAA("as_natural_32", 998, Current, 0, 0, 13265);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6532(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.as_natural_64 */
EIF_NATURAL_64 F999_6580 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_natural_64", 998, Current, 0, 0, 13266);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6533(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.as_integer_8 */
EIF_INTEGER_8 F999_6581 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_8", 998, Current, 0, 0, 13267);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6534(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.as_integer_16 */
EIF_INTEGER_16 F999_6582 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_16", 998, Current, 0, 0, 13268);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6535(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.as_integer_32 */
EIF_INTEGER_32 F999_6583 (EIF_REFERENCE Current)
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
	
	RTEAA("as_integer_32", 998, Current, 0, 0, 13269);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6536(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.as_integer_64 */
EIF_INTEGER_64 F999_6584 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("as_integer_64", 998, Current, 0, 0, 13270);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6537(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.to_real_32 */
EIF_REAL_32 F999_6585 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_real_32", 998, Current, 0, 0, 13271);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6546(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.to_real_64 */
EIF_REAL_64 F999_6586 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_real_64", 998, Current, 0, 0, 13272);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6547(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.to_character_8 */
EIF_CHARACTER_8 F999_6587 (EIF_REFERENCE Current)
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
	
	RTEAA("to_character_8", 998, Current, 0, 0, 13273);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6555(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.to_character_32 */
EIF_CHARACTER_32 F999_6588 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("to_character_32", 998, Current, 0, 0, 13274);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F998_6556(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.bit_and */
EIF_NATURAL_16 F999_6589 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("bit_and", 998, Current, 0, 1, 13275);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = (nstcall = 0, F998_6557(Current, tr1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.bit_or */
EIF_NATURAL_16 F999_6590 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("bit_or", 998, Current, 0, 1, 13276);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = (nstcall = 0, F998_6558(Current, tr1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.bit_xor */
EIF_NATURAL_16 F999_6591 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("bit_xor", 998, Current, 0, 1, 13277);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(999, 0x00).id, 999, _OBJSIZ_0_0_1_0_0_0_0_0_);
	*(EIF_NATURAL_16 *)tr1 = arg1;
	tr1 = (nstcall = 0, F998_6559(Current, tr1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.bit_not */
EIF_NATURAL_16 F999_6592 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("bit_not", 998, Current, 0, 0, 13278);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F998_6560(Current));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.bit_shift_left */
EIF_NATURAL_16 F999_6593 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("bit_shift_left", 998, Current, 0, 1, 13279);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F998_6562(Current, arg1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {NATURAL_16}.bit_shift_right */
EIF_NATURAL_16 F999_6594 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("bit_shift_right", 998, Current, 0, 1, 13280);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F998_6563(Current, arg1));
	Result = *(EIF_NATURAL_16 *)(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit313 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
