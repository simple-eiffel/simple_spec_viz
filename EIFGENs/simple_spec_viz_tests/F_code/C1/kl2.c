/*
 * Code for class KL_ANY_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl2.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_ANY_ROUTINES}.same_types */
EIF_BOOLEAN F3_44 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("same_types", 2, Current, 0, 2, 35);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("obj1_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("obj2_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTCCL(arg2);
	tb1 = (nstcall = 1, F1_7(arg1, tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_ANY_ROUTINES}.same_objects */
EIF_BOOLEAN F3_45 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg2;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTEAA("same_objects", 2, Current, 0, 2, 36);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg2 = (EIF_BOOLEAN) RTS_OU (arg2);
	uarg = uarg1 || uarg2;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg2);
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) RTCEQ(arg1, arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == RTCEQ(arg1, arg2))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {KL_ANY_ROUTINES}.equal_objects */
EIF_BOOLEAN F3_46 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("equal_objects", 2, Current, 0, 2, 37);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (RTCEQ(arg1, arg2)) {
		RTHOOK(2);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) RTEQ(arg1, arg2);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == RTEQ(arg1, arg2))) {
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

/* {KL_ANY_ROUTINES}.to_any */
EIF_REFERENCE F3_47 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("to_any", 2, Current, 0, 1, 38);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_REFERENCE) RTCCL(arg1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr2 = RTCCL(Result);
		tr3 = RTCCL(arg1);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,1093,0,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
			tr1 = RTLNS(typres0.id, 1093, _OBJSIZ_0_0_0_0_0_0_0_0_);
		}
		if ((nstcall = 0, F1094_8208(RTCW(tr1), tr2, tr3))) {
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

void EIF_Minit2 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
