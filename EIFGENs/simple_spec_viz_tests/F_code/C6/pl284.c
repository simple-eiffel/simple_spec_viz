/*
 * Code for class PLAIN_TEXT_FILE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "pl284.h"
#include "eif_file.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {PLAIN_TEXT_FILE}.make_with_name */
void F745_5288 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_name", 744, Current, 0, 1, 6829);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("fn_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("fn_not_empty", EX_PRE);
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6124[Dtype(RTCW(arg1))-1079])(arg1));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F743_5007(Current, arg1));
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(1084, 1).id);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("file_named", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F743_5066(Current))) {
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

/* {PLAIN_TEXT_FILE}.make_with_path */
void F745_5289 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_path", 744, Current, 0, 1, 6830);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_path_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F965_6286(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F743_5008(Current, arg1));
	RTHOOK(4);
	tr1 = RTLNSMART(eif_new_type(1084, 1).id);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_3_) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("path_set", EX_POST);
		tr1 = (nstcall = 0, F743_5017(Current));
		tb1 = (nstcall = 1, F965_6309(RTCW(tr1), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("file_closed", EX_POST);
		if ((nstcall = 0, F743_5066(Current))) {
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

/* {PLAIN_TEXT_FILE}.is_plain_text */
EIF_BOOLEAN F745_5290 (EIF_REFERENCE Current)
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
	
	RTEAA("is_plain_text", 744, Current, 0, 0, 6831);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.support_storable */
EIF_BOOLEAN F745_5291 (EIF_REFERENCE Current)
{
	return (EIF_BOOLEAN) EIF_FALSE;
}

/* {PLAIN_TEXT_FILE}.put_integer */
void F745_5292 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("put_integer", 744, Current, 0, 1, 6833);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putint */
void F745_5293 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("putint", 744, Current, 0, 1, 6834);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_32 */
void F745_5294 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("put_integer_32", 744, Current, 0, 1, 6835);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i4_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_64 */
void F745_5295 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	
	RTEAA("put_integer_64", 744, Current, 0, 1, 6836);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i8_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_16 */
void F745_5296 (EIF_REFERENCE Current, EIF_INTEGER_16 arg1)
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
	
	RTEAA("put_integer_16", 744, Current, 0, 1, 6837);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i2_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_integer_8 */
void F745_5297 (EIF_REFERENCE Current, EIF_INTEGER_8 arg1)
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
	
	RTEAA("put_integer_8", 744, Current, 0, 1, 6838);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__i1_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_64 */
void F745_5298 (EIF_REFERENCE Current, EIF_NATURAL_64 arg1)
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
	
	RTEAA("put_natural_64", 744, Current, 0, 1, 6839);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u8_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural */
void F745_5299 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("put_natural", 744, Current, 0, 1, 6840);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u4_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_32 */
void F745_5300 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("put_natural_32", 744, Current, 0, 1, 6841);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u4_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_16 */
void F745_5301 (EIF_REFERENCE Current, EIF_NATURAL_16 arg1)
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
	
	RTEAA("put_natural_16", 744, Current, 0, 1, 6842);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u2_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_natural_8 */
void F745_5302 (EIF_REFERENCE Current, EIF_NATURAL_8 arg1)
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
	
	RTEAA("put_natural_8", 744, Current, 0, 1, 6843);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = eif_out__u1_s1(arg1);
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_boolean */
void F745_5303 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("put_boolean", 744, Current, 0, 1, 6844);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		tr1 = RTOUCR(61,(nstcall = 0, F743_5174), (Current));
	} else {
		RTHOOK(4);
		tr1 = RTOUCR(62,(nstcall = 0, F743_5175), (Current));
	}
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putbool */
void F745_5304 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	
	RTEAA("putbool", 744, Current, 0, 1, 6845);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if (arg1) {
		RTHOOK(3);
		tr1 = RTOUCR(61,(nstcall = 0, F743_5174), (Current));
	} else {
		RTHOOK(4);
		tr1 = RTOUCR(62,(nstcall = 0, F743_5175), (Current));
	}
	(nstcall = 0, F745_5312(Current, tr1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_real */
void F745_5305 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("put_real", 744, Current, 0, 1, 6846);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	(nstcall = 0, F745_5350(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putreal */
void F745_5306 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("putreal", 744, Current, 0, 1, 6847);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	(nstcall = 0, F745_5350(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_real_32 */
void F745_5307 (EIF_REFERENCE Current, EIF_REAL_32 arg1)
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
	
	RTEAA("put_real_32", 744, Current, 0, 1, 6848);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	(nstcall = 0, F745_5350(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_double */
void F745_5308 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("put_double", 744, Current, 0, 1, 6849);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	(nstcall = 0, F745_5351(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.putdouble */
void F745_5309 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("putdouble", 744, Current, 0, 1, 6850);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	(nstcall = 0, F745_5351(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_real_64 */
void F745_5310 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("put_real_64", 744, Current, 0, 1, 6851);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	(nstcall = 0, F745_5351(Current, tp1, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_string_32 */
void F745_5311 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("put_string_32", 744, Current, 0, 1, 6852);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F745_5312(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_string_general */
void F745_5312 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,loc4);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,loc1);
	RTLR(6,loc3);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("put_string_general", 744, Current, 4, 1, 6853);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("extendible", EX_PRE);
		RTTE((nstcall = 0, F743_5071(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("non_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc4 = (nstcall = 0, F745_5333(Current));
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(36, 0x01).id, 36, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc2 = RTOUCR(63,(nstcall = 0, F37_743), (RTCW(tr1)));
	RTHOOK(5);
	(nstcall = 1, F38_752(RTCW(loc2), loc4, arg1));
	RTHOOK(6);
	tb1 = (nstcall = 1, F38_753(RTCW(loc2)));
	if (tb1) {
		RTHOOK(7);
		tr1 = (nstcall = 1, F38_749(RTCW(loc2)));
		loc1 = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(36, 0x01).id, 36, _OBJSIZ_0_0_0_0_0_0_0_0_);
		loc3 = RTOUCR(64,(nstcall = 0, F37_741), (RTCW(tr1)));
		RTHOOK(9);
		(nstcall = 1, F38_752(RTCW(loc2), loc3, arg1));
		RTHOOK(10);
		tb1 = (nstcall = 1, F38_753(RTCW(loc2)));
		if (tb1) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F38_749(RTCW(loc2)));
			loc1 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			tb1 = (nstcall = 1, F38_755(RTCW(loc3), loc4));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(13);
				(nstcall = 1, F38_752(RTCW(loc3), loc4, loc1));
				RTHOOK(14);
				tb1 = (nstcall = 1, F38_753(RTCW(loc3)));
				if (tb1) {
					RTHOOK(15);
					tr1 = (nstcall = 1, F38_749(RTCW(loc3)));
					loc1 = (EIF_REFERENCE) tr1;
				}
			}
		} else {
			RTHOOK(16);
			tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6123[Dtype(RTCW(arg1))-1079])(arg1));
			if (tb1) {
				RTHOOK(17);
				tr1 = (nstcall = 1, F1076_7654(RTCW(arg1)));
				loc1 = (EIF_REFERENCE) tr1;
			} else {
				RTHOOK(18);
				tr2 = (nstcall = 1, F1076_7660(RTCW(arg1)));
				tr1 = RTLNS(eif_new_type(76, 0x00).id, 76, _OBJSIZ_0_0_0_0_0_0_0_0_);
				loc1 = (nstcall = 0, F77_1087(RTCW(tr1), tr2));
			}
		}
	}
	RTHOOK(19);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R3725[dtype-310])(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_64 */
void F745_5313 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_64", 744, Current, 0, 0, 6854);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	ti8_1 = (nstcall = 1, F172_2341(RTCW(tr1)));
	*(EIF_INTEGER_64 *)(Current + O3699[dtype-306]) = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer */
void F745_5314 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer", 744, Current, 0, 0, 6855);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F743_5065(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(4);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	ti4_1 = (nstcall = 1, F172_2339(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current + O3697[dtype-306]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.readint */
void F745_5315 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("readint", 744, Current, 0, 0, 6856);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F743_5065(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(4);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	ti4_1 = (nstcall = 1, F172_2339(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current + O3697[dtype-306]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_32 */
void F745_5316 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_32", 744, Current, 0, 0, 6857);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	ti4_1 = (nstcall = 1, F172_2339(RTCW(tr1)));
	*(EIF_INTEGER_32 *)(Current + O3697[dtype-306]) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_16 */
void F745_5317 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_16 ti2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_16", 744, Current, 0, 0, 6858);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	ti2_1 = (nstcall = 1, F172_2338(RTCW(tr1)));
	*(EIF_INTEGER_16 *)(Current + O3700[dtype-306]) = (EIF_INTEGER_16) ti2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_8 */
void F745_5318 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_8", 744, Current, 0, 0, 6859);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	ti1_1 = (nstcall = 1, F172_2337(RTCW(tr1)));
	*(EIF_INTEGER_8 *)(Current + O3701[dtype-306]) = (EIF_INTEGER_8) ti1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_64 */
void F745_5319 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_64", 744, Current, 0, 0, 6860);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	tu8_1 = (nstcall = 1, F172_2346(RTCW(tr1)));
	*(EIF_NATURAL_64 *)(Current + O3702[dtype-306]) = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural */
void F745_5320 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural", 744, Current, 0, 0, 6861);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	tu4_1 = (nstcall = 1, F172_2344(RTCW(tr1)));
	*(EIF_NATURAL_32 *)(Current + O3703[dtype-306]) = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_32 */
void F745_5321 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_32", 744, Current, 0, 0, 6862);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	tu4_1 = (nstcall = 1, F172_2344(RTCW(tr1)));
	*(EIF_NATURAL_32 *)(Current + O3703[dtype-306]) = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_16 */
void F745_5322 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_16 tu2_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_16", 744, Current, 0, 0, 6863);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	tu2_1 = (nstcall = 1, F172_2343(RTCW(tr1)));
	*(EIF_NATURAL_16 *)(Current + O3705[dtype-306]) = (EIF_NATURAL_16) tu2_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_natural_8 */
void F745_5323 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_8 tu1_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_natural_8", 744, Current, 0, 0, 6864);
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
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4637[dtype-744])(Current));
	RTHOOK(3);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	tu1_1 = (nstcall = 1, F172_2342(RTCW(tr1)));
	*(EIF_NATURAL_8 *)(Current + O3706[dtype-306]) = (EIF_NATURAL_8) tu1_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_real */
void F745_5324 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real", 744, Current, 0, 0, 6865);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F743_5065(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	tr4_1 = (nstcall = 0, F745_5347(Current, tp1));
	*(EIF_REAL_32 *)(Current + O3707[dtype-306]) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.readreal */
void F745_5325 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readreal", 744, Current, 0, 0, 6866);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F743_5065(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	tr4_1 = (nstcall = 0, F745_5347(Current, tp1));
	*(EIF_REAL_32 *)(Current + O3707[dtype-306]) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_real_32 */
void F745_5326 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_32 tr4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_32", 744, Current, 0, 0, 6867);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F743_5065(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	tr4_1 = (nstcall = 0, F745_5347(Current, tp1));
	*(EIF_REAL_32 *)(Current + O3707[dtype-306]) = (EIF_REAL_32) tr4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_double */
void F745_5327 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_double", 744, Current, 0, 0, 6868);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F743_5065(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	tr8_1 = (nstcall = 0, F745_5348(Current, tp1));
	*(EIF_REAL_64 *)(Current + O3709[dtype-306]) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.readdouble */
void F745_5328 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("readdouble", 744, Current, 0, 0, 6869);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F743_5065(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	tr8_1 = (nstcall = 0, F745_5348(Current, tp1));
	*(EIF_REAL_64 *)(Current + O3709[dtype-306]) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_real_64 */
void F745_5329 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_REAL_64 tr8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("read_real_64", 744, Current, 0, 0, 6870);
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
		RTCK;
		RTHOOK(2);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F743_5065(Current)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	tr8_1 = (nstcall = 0, F745_5348(Current, tp1));
	*(EIF_REAL_64 *)(Current + O3709[dtype-306]) = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_to_string */
EIF_INTEGER_32 F745_5330 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("read_to_string", 744, Current, 0, 3, 6871);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_readable", EX_PRE);
		RTTE((nstcall = 0, F743_5065(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_end_of_file", EX_PRE);
		RTTE((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4474[dtype-743])(Current)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_position", EX_PRE);
		tb1 = (nstcall = 1, F1076_7613(RTCW(arg1), arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("nb_large_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("nb_small_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (arg3 <= (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg2) + ((EIF_INTEGER_32) 1L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(Current + O4462[dtype-742]);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1));
	tp2 = (nstcall = 1, F904_6142(RTCW(tr1), (EIF_INTEGER_32) (arg2 - ((EIF_INTEGER_32) 1L))));
	Result = (nstcall = 0, F743_5187(Current, tp1, tp2, arg3));
	RTHOOK(8);
	(nstcall = 1, F1078_7699(RTCW(arg1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("nb_char_read_large_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("nb_char_read_small_enough", EX_POST);
		if ((EIF_BOOLEAN) (Result <= arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("character_read", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4474[dtype-743])(Current))) {
			tb1 = (EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
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

/* {PLAIN_TEXT_FILE}.last_string_32 */
EIF_REFERENCE F745_5331 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_3_);
}


/* {PLAIN_TEXT_FILE}.read_unicode_line */
void F745_5332 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("read_unicode_line", 744, Current, 1, 0, 6873);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3771[dtype-310])(Current));
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(36, 0x01).id, 36, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = RTOUCR(63,(nstcall = 0, F37_743), (RTCW(tr1)));
	RTHOOK(3);
	tr1 = (nstcall = 0, F745_5333(Current));
	(nstcall = 1, F38_752(RTCW(tr1), loc1, *(EIF_REFERENCE *)(Current)));
	RTHOOK(4);
	tr1 = (nstcall = 0, F745_5333(Current));
	tb1 = (nstcall = 1, F38_753(RTCW(tr1)));
	if (tb1) {
		RTHOOK(5);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		(nstcall = 1, F1085_8041(RTCW(tr1)));
		RTHOOK(6);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_3_);
		tr2 = (nstcall = 0, F745_5333(Current));
		tr3 = (nstcall = 1, F38_750(RTCW(tr2)));
		(nstcall = 1, F1085_8012(RTCW(tr1), tr3));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.encoding */
EIF_REFERENCE F745_5333 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("encoding", 744, Current, 1, 0, 6874);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(3);
		Result = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4627[dtype-744])(Current));
		RTHOOK(4);
		RTAR(Current, Result);
		*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) Result;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("encoding_not_void", EX_POST);
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

/* {PLAIN_TEXT_FILE}.default_encoding */
static EIF_REFERENCE F745_5334_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(65)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("default_encoding", 744, Current, 0, 0, 6875);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(36, 0x01).id, 36, _OBJSIZ_0_0_0_0_0_0_0_0_);
	Result = RTOUCR(64,(nstcall = 0, F37_741), (RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_encoding_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

EIF_REFERENCE F745_5334 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(65,F745_5334_body,(Current));
}

/* {PLAIN_TEXT_FILE}.set_encoding */
void F745_5335 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("set_encoding", 744, Current, 0, 1, 6876);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("enc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_4_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("encoding_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F745_5333(Current)) == arg1)) {
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

/* {PLAIN_TEXT_FILE}.set_utf8_encoding */
void F745_5336 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("set_utf8_encoding", 744, Current, 0, 0, 6877);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(36, 0x01).id, 36, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(64,(nstcall = 0, F37_741), (RTCW(tr1)));
	(nstcall = 0, F745_5335(Current, tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("encoding_set", EX_POST);
		tr1 = (nstcall = 0, F745_5333(Current));
		tr2 = RTLNS(eif_new_type(36, 0x01).id, 36, _OBJSIZ_0_0_0_0_0_0_0_0_);
		tr2 = RTOUCR(64,(nstcall = 0, F37_741), (RTCW(tr2)));
		if ((EIF_BOOLEAN)(tr1 == tr2)) {
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

/* {PLAIN_TEXT_FILE}.detect_encoding */
void F745_5337 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_8 loc2 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc3 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc4 = (EIF_CHARACTER_8) 0;
	EIF_CHARACTER_8 loc5 = (EIF_CHARACTER_8) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("detect_encoding", 744, Current, 5, 0, 6878);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_read", EX_PRE);
		RTTE((nstcall = 0, F743_5067(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	loc1 = (nstcall = 0, F743_5020(Current));
	RTHOOK(3);
	(nstcall = 0, F743_5095(Current));
	RTHOOK(4);
	if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
		RTHOOK(6);
		loc2 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
		RTHOOK(7);
		switch (loc2) {
			case (EIF_CHARACTER_8) '\357':
				RTHOOK(8);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
					RTHOOK(9);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
					RTHOOK(10);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
					RTHOOK(11);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\273')) {
						RTHOOK(12);
						if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
							RTHOOK(13);
							(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
							RTHOOK(14);
							loc4 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
							RTHOOK(15);
							if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\277')) {
								RTHOOK(16);
								(nstcall = 0, F745_5336(Current));
							} else {
								RTHOOK(17);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
							}
						}
					} else {
						RTHOOK(18);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
					}
				}
				break;
			case (EIF_CHARACTER_8) '\377':
				RTHOOK(19);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
					RTHOOK(20);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
					RTHOOK(21);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
					RTHOOK(22);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\376')) {
						RTHOOK(23);
						if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
							RTHOOK(24);
							(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
							RTHOOK(25);
							loc4 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
							RTHOOK(26);
							if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
								RTHOOK(27);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
								RTHOOK(28);
								loc5 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
							}
							RTHOOK(29);
							if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\000') && (EIF_BOOLEAN)(loc5 == (EIF_CHARACTER_8) '\000'))) {
								RTHOOK(30);
								tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
								tr2 = RTOUCR(66,(nstcall = 0, F36_736), (Current));
								(nstcall = -1, F38_746(RTCW(tr1), tr2));
								(nstcall = 0, F745_5335(Current, tr1));
							} else {
								RTHOOK(31);
								tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
								tr2 = RTOUCR(67,(nstcall = 0, F36_735), (Current));
								(nstcall = -1, F38_746(RTCW(tr1), tr2));
								(nstcall = 0, F745_5335(Current, tr1));
								RTHOOK(32);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
								RTHOOK(33);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
							}
						}
					} else {
						RTHOOK(34);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
					}
				}
				break;
			case (EIF_CHARACTER_8) '\376':
				RTHOOK(35);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
					RTHOOK(36);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
					RTHOOK(37);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
					RTHOOK(38);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\377')) {
						RTHOOK(39);
						tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
						tr2 = RTOUCR(68,(nstcall = 0, F36_737), (Current));
						(nstcall = -1, F38_746(RTCW(tr1), tr2));
						(nstcall = 0, F745_5335(Current, tr1));
					} else {
						RTHOOK(40);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
					}
				}
				break;
			case (EIF_CHARACTER_8) '\000':
				RTHOOK(41);
				if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
					RTHOOK(42);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
					RTHOOK(43);
					loc3 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
					RTHOOK(44);
					if ((EIF_BOOLEAN)(loc3 == (EIF_CHARACTER_8) '\000')) {
						RTHOOK(45);
						if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
							RTHOOK(46);
							(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
							RTHOOK(47);
							loc4 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
							RTHOOK(48);
							if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_8) '\376')) {
								RTHOOK(49);
								if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3718[dtype-310])(Current))) {
									RTHOOK(50);
									(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
									RTHOOK(51);
									loc5 = *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]);
									RTHOOK(52);
									if ((EIF_BOOLEAN)(loc5 == (EIF_CHARACTER_8) '\377')) {
										RTHOOK(53);
										tr1 = RTLNS(eif_new_type(37, 0x01).id, 37, _OBJSIZ_2_0_0_0_0_0_0_0_);
										tr2 = RTOUCR(69,(nstcall = 0, F36_738), (Current));
										(nstcall = -1, F38_746(RTCW(tr1), tr2));
										(nstcall = 0, F745_5335(Current, tr1));
									} else {
										RTHOOK(54);
										(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
									}
								}
							} else {
								RTHOOK(55);
								(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
							}
						}
					} else {
						RTHOOK(56);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
					}
				}
				break;
			default:
				RTHOOK(57);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
				break;
		}
	}
	RTHOOK(58);
	if ((EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(59);
		(nstcall = 0, F743_5100(Current, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(60);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.put_encoding_bom */
void F745_5338 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("put_encoding_bom", 744, Current, 1, 0, 6879);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_open_write", EX_PRE);
		RTTE((nstcall = 0, F743_5068(Current)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("at_beginning", EX_PRE);
		RTTE((EIF_BOOLEAN)((nstcall = 0, F743_5020(Current)) == ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCV((nstcall = 0, F745_5333(Current))));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTOUCR(70,(nstcall = 0, F36_732), (Current));
	tb1 = (nstcall = 1, F1076_7643(RTCW(loc1), tr1));
	if (tb1) {
		RTHOOK(5);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\357'));
		RTHOOK(6);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\273'));
		RTHOOK(7);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\277'));
	} else {
		RTHOOK(8);
		tr1 = RTOUCR(67,(nstcall = 0, F36_735), (Current));
		tb1 = (nstcall = 1, F1076_7643(RTCW(loc1), tr1));
		if (tb1) {
			RTHOOK(9);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\377'));
			RTHOOK(10);
			(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\376'));
		} else {
			RTHOOK(11);
			tr1 = RTOUCR(68,(nstcall = 0, F36_737), (Current));
			tb1 = (nstcall = 1, F1076_7643(RTCW(loc1), tr1));
			if (tb1) {
				RTHOOK(12);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\376'));
				RTHOOK(13);
				(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\377'));
			} else {
				RTHOOK(14);
				tr1 = RTOUCR(66,(nstcall = 0, F36_736), (Current));
				tb1 = (nstcall = 1, F1076_7643(RTCW(loc1), tr1));
				if (tb1) {
					RTHOOK(15);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\377'));
					RTHOOK(16);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\376'));
					RTHOOK(17);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\000'));
					RTHOOK(18);
					(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\000'));
				} else {
					RTHOOK(19);
					tr1 = RTOUCR(69,(nstcall = 0, F36_738), (Current));
					tb1 = (nstcall = 1, F1076_7643(RTCW(loc1), tr1));
					if (tb1) {
						RTHOOK(20);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\000'));
						RTHOOK(21);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\000'));
						RTHOOK(22);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\376'));
						RTHOOK(23);
						(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R3727[dtype-310])(Current, (EIF_CHARACTER_8) '\377'));
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.internal_encoding */
EIF_REFERENCE F745_5339 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_4_);
}


/* {PLAIN_TEXT_FILE}.ctoi_convertor */
static EIF_REFERENCE F745_5340_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(71)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("ctoi_convertor", 744, Current, 0, 0, 6881);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(171, 0x01).id, 171, _OBJSIZ_2_3_0_3_0_0_2_0_);
	(nstcall = -1, F172_2326(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTOUCR(72,(nstcall = 0, F745_5341), (Current));
	(nstcall = 1, F169_2271(RTCW(Result), tr1));
	RTHOOK(3);
	(nstcall = 1, F169_2270(RTCW(Result), (EIF_BOOLEAN) 1));
	RTHOOK(4);
	(nstcall = 1, F169_2269(RTCW(Result), (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F745_5340 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(71,F745_5340_body,(Current));
}

/* {PLAIN_TEXT_FILE}.internal_leading_separators */

EIF_REFERENCE F745_5341 (EIF_REFERENCE Current)
{
	GTCX
	RTOUC (72,RTMS_EX_H(" \012\015\011",4,537529609));
}

/* {PLAIN_TEXT_FILE}.is_sequence_an_expected_numeric */
EIF_BOOLEAN F745_5342 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O4635[Dtype(Current)-744]);
}


/* {PLAIN_TEXT_FILE}.read_number_sequence */
void F745_5343 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("read_number_sequence", 744, Current, 0, 2, 6884);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R2200[Dtype(RTCW(arg1))-169])(arg1, arg2));
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + O4635[dtype-744]) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4474[dtype-743])(Current))) {
			tb1 = (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O4635[dtype-744]);
		}
		if (tb1) break;
		RTHOOK(4);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R3755[dtype-310])(Current));
		RTHOOK(5);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4474[dtype-743])(Current))) {
			RTHOOK(6);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_CHARACTER_8)) R2206[Dtype(RTCW(arg1))-169])(arg1, *(EIF_CHARACTER_8 *)(Current + O3695[dtype-306])));
			RTHOOK(7);
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2198[Dtype(RTCW(arg1))-169])(arg1));
			*(EIF_BOOLEAN *)(Current + O4635[dtype-744]) = (EIF_BOOLEAN) tb2;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.read_integer_with_no_type */
void F745_5344 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("read_integer_with_no_type", 744, Current, 0, 0, 6885);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4633[dtype-744])(Current));
	(nstcall = 0, F745_5343(Current, tr1, ((EIF_INTEGER_32) 0L)));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O4635[dtype-744])) {
		RTHOOK(3);
		(nstcall = 0, F745_5345(Current));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.return_characters */
void F745_5345 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("return_characters", 744, Current, 0, 0, 6886);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(*(EIF_CHARACTER_8 *)(Current + O3695[dtype-306]) == (EIF_CHARACTER_8) '\012')) {
		tb1 = (nstcall = 0, F263_3307(Current));
	}
	if (tb1) {
		RTHOOK(2);
		(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
	}
	RTHOOK(3);
	(nstcall = 0, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4396[dtype-743])(Current));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.file_gi */
EIF_INTEGER_32 F745_5346 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_gi", 744, Current, 0, 1, 6887);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_file_gi((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.file_gr */
EIF_REAL_32 F745_5347 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_gr", 744, Current, 0, 1, 6888);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REAL_32) eif_file_gr((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.file_gd */
EIF_REAL_64 F745_5348 (EIF_REFERENCE Current, EIF_POINTER arg1)
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
	
	RTEAA("file_gd", 744, Current, 0, 1, 6889);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_REAL_64) eif_file_gd((FILE*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {PLAIN_TEXT_FILE}.file_pi */
void F745_5349 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pi", 744, Current, 0, 2, 6890);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pi((FILE*) arg1, (EIF_INTEGER) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.file_pr */
void F745_5350 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pr", 744, Current, 0, 2, 6891);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pr((FILE*) arg1, (EIF_REAL_32) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}.file_pd */
void F745_5351 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("file_pd", 744, Current, 0, 2, 6892);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_file_pd((FILE*) arg1, (EIF_REAL_64) arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {PLAIN_TEXT_FILE}._invariant */
void F745_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 283, Current, 0, 0);
	RTIT("plain_text", Current);
	if ((nstcall = 0, F745_5290(Current))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit284 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
