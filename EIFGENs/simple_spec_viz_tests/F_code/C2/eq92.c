/*
 * Code for class EQA_ASSERTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq92.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_ASSERTIONS}.assert */
void F112_1585 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLIU(3);
	
	RTEAA("assert", 111, Current, 1, 2, 1610);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current + O1551[dtype-111]) = (EIF_BOOLEAN) (EIF_BOOLEAN) !arg2;
	RTHOOK(3);
	if (*(EIF_BOOLEAN *)(Current + O1551[dtype-111])) {
		RTHOOK(4);
		(nstcall = 0, F112_1587(Current, arg1));
		RTHOOK(5);
		loc1 = RTLNS(eif_new_type(178, 0x01).id, 178, _OBJSIZ_5_1_0_1_0_0_0_0_);
		RTHOOK(6);
		(nstcall = 1, F178_2382(RTCW(loc1), arg1));
		RTHOOK(7);
		(nstcall = 1, F178_2367(RTCW(loc1)));
	} else {
		RTHOOK(8);
		(nstcall = 0, F112_1588(Current, arg1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {EQA_ASSERTIONS}.disassert */
void F112_1586 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
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
	
	RTEAA("disassert", 111, Current, 0, 2, 1611);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_tag_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F112_1585(Current, arg1, (EIF_BOOLEAN) !arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_ASSERTIONS}.on_violation */
void F112_1587 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("on_violation", 111, Current, 0, 1, 1612);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("last_assertion_failed", EX_PRE);
		RTTE(*(EIF_BOOLEAN *)(Current + O1551[dtype-111]), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_tag_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_ASSERTIONS}.on_satisfaction */
void F112_1588 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("on_satisfaction", 111, Current, 0, 1, 1613);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("last_assertion_succeeded", EX_PRE);
		RTTE((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current + O1551[dtype-111]), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_tag_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EQA_ASSERTIONS}.last_assertion_failed */
EIF_BOOLEAN F112_1589 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current + O1551[Dtype(Current)-111]);
}


void EIF_Minit92 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
