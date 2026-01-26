/*
 * Code for class NETWORK_SOCKET
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F260_4266(EIF_REFERENCE);
extern void F260_4267(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4268(EIF_REFERENCE);
extern void F260_4269(EIF_REFERENCE);
extern void F260_4270(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4271(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4272(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4273(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4274(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4275(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4276(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4277(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4278(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F260_4279(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F260_4280(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4281(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4282(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4283(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4284(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4285(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4286(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4287(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4288(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4289(EIF_REFERENCE);
extern void F260_4290(EIF_REFERENCE);
extern void F260_4291(EIF_REFERENCE);
extern void F260_4292(EIF_REFERENCE);
extern void F260_4293(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F260_4294(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F260_4295(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F260_4296(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F260_4297(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F260_4298(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F260_4299(EIF_REFERENCE);
extern void F260_4300(EIF_REFERENCE);
extern void F260_4301(EIF_REFERENCE);
extern void F260_4302(EIF_REFERENCE);
extern void F260_4303(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4304(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4305(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4306(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4307(EIF_REFERENCE);
extern EIF_TYPED_VALUE F260_4311(EIF_REFERENCE);
extern void F260_4312(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);extern void c_set_sock_opt_timeout(EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32, EIF_NATURAL_64);

extern EIF_TYPED_VALUE F260_4313(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);extern EIF_NATURAL_64 c_get_sock_opt_timeout(EIF_INTEGER_32, EIF_INTEGER_32, EIF_INTEGER_32);

extern void F260_4314(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);extern void en_socket_close(EIF_INTEGER_32, EIF_INTEGER_32);

extern EIF_TYPED_VALUE F260_4315(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);extern EIF_INTEGER_32 c_select_poll_with_timeout(EIF_INTEGER_32, EIF_BOOLEAN, EIF_NATURAL_64);

extern EIF_TYPED_VALUE F260_4316(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);extern EIF_INTEGER_32 c_check_exception_with_timeout(EIF_INTEGER_32, EIF_NATURAL_64);

extern void F260_4317(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);extern void en_socket_shutdown(EIF_INTEGER_32, EIF_INTEGER_32);

extern void F260_9284(EIF_REFERENCE, int);
extern void EIF_Minit260(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {NETWORK_SOCKET}.exists */
EIF_TYPED_VALUE F260_4266 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "exists";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4300);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4300);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3856, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3885, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3886, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) || (EIF_BOOLEAN) (ti4_2 > ((EIF_INTEGER_32) 0L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3856, dtype));
		if ((!(Result) || (tb1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3856, dtype));
		if ((!(Result) || (tb1))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {NETWORK_SOCKET}.close_socket */
void F260_4267 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "close_socket";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4301);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4301);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3899, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3860, dtype));
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !tb1 && tb2)) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3885, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3886, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3895, dtype))(Current, ui4_1x, ui4_2x);
	}
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3884, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_closed", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3899, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef ui4_2
}

/* {NETWORK_SOCKET}.descriptor */
EIF_TYPED_VALUE F260_4268 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "descriptor";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4302);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4302);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_handle", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3856, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3885, dtype));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {NETWORK_SOCKET}.connect */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F260_4269 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "connect";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,saved_except);
	RTLIU(4);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 259, Current, 1, 0, 4303);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4303);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_peer_address", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3890, dtype))(Current, ur1x);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 3861, 0x04000000, 1); /* is_connected */
		*(EIF_BOOLEAN *)(Current + RTWA(3861, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 3855, 0x04000000, 1); /* is_open_write */
		*(EIF_BOOLEAN *)(Current + RTWA(3855, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 3854, 0x04000000, 1); /* is_open_read */
		*(EIF_BOOLEAN *)(Current + RTWA(3854, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(8);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2447, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(9);
		RTDBGAA(Current, dtype, 3861, 0x04000000, 1); /* is_connected */
		*(EIF_BOOLEAN *)(Current + RTWA(3861, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(10);
		RTDBGAA(Current, dtype, 3854, 0x04000000, 1); /* is_open_read */
		*(EIF_BOOLEAN *)(Current + RTWA(3854, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(11);
		RTDBGAA(Current, dtype, 3855, 0x04000000, 1); /* is_open_write */
		*(EIF_BOOLEAN *)(Current + RTWA(3855, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(12);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(13);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(3);
#undef up1
#undef ur1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {NETWORK_SOCKET}.bind */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F260_4270 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bind";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,saved_except);
	RTLIU(4);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 259, Current, 1, 0, 4304);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4304);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_local_address", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3791, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTE_T
	RTHOOK(3);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(4);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3791, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3891, dtype))(Current, ur1x);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 3854, 0x04000000, 1); /* is_open_read */
		*(EIF_BOOLEAN *)(Current + RTWA(3854, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(6);
		RTDBGAA(Current, dtype, 3862, 0x04000000, 1); /* is_bound */
		*(EIF_BOOLEAN *)(Current + RTWA(3862, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(7);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2447, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 3862, 0x04000000, 1); /* is_bound */
		*(EIF_BOOLEAN *)(Current + RTWA(3862, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(9);
		RTDBGAA(Current, dtype, 3854, 0x04000000, 1); /* is_open_read */
		*(EIF_BOOLEAN *)(Current + RTWA(3854, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(10);
		RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
		loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(11);
		RTTS;
		RTPS;
		RTER;
	}
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(3);
#undef up1
#undef ur1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {NETWORK_SOCKET}.address_type */
EIF_TYPED_VALUE F260_4271 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "address_type";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4305);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4305);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_callable", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTCT0("False", EX_CHECK);
		RTCF0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("for_typing_only", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

/* {NETWORK_SOCKET}.is_closed */
EIF_TYPED_VALUE F260_4272 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3899,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.is_created */
EIF_TYPED_VALUE F260_4273 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3860,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.is_connected */
EIF_TYPED_VALUE F260_4274 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3861,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.is_bound */
EIF_TYPED_VALUE F260_4275 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(3862,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.port */
EIF_TYPED_VALUE F260_4276 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "port";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4310);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4310);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3862, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3888, dtype));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {NETWORK_SOCKET}.reuse_address */
EIF_TYPED_VALUE F260_4277 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "reuse_address";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 259, Current, 1, 0, 4311);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4311);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2619, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2649, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3844, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(loc1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {NETWORK_SOCKET}.is_valid_peer_address */
EIF_TYPED_VALUE F260_4278 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_peer_address";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	RTS_SDC;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 1, 4312);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4312);
	RTCC(arg1, 259, l_feature_name, 1, RTWCT(3791, dtype, Dftype(Current)), 0x05);
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
		RTCT("address_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	if (RTS_CI (EIF_TRUE, arg1)) {
		RTS_BI (arg1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1419, "family", arg1))(arg1)).it_i4);
		RTS_EI;
	} else {
		RTS_AC (0, arg1);
		RTS_CALL (1419, SK_INT32);
		ti4_1 = l_scoop_result.it_i4;
	}
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2678, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		if (RTS_CI (EIF_TRUE, arg1)) {
			RTS_BI (arg1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1419, "family", arg1))(arg1)).it_i4);
			RTS_EI;
		} else {
			RTS_AC (0, arg1);
			RTS_CALL (1419, SK_INT32);
			ti4_1 = l_scoop_result.it_i4;
		}
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2679, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {NETWORK_SOCKET}.is_valid_family */
EIF_TYPED_VALUE F260_4279 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid_family";
	RTEX;
#define arg1 arg1x.it_r
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 1, 4313);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4313);
	RTCC(arg1, 259, l_feature_name, 1, RTWCT(3791, dtype, Dftype(Current)), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("address_exists", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1419, "family", arg1))(arg1)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2678, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1419, "family", arg1))(arg1)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2679, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {NETWORK_SOCKET}.ready_for_reading */
EIF_TYPED_VALUE F260_4280 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ready_for_reading";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 259, Current, 1, 0, 4314);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4314);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ub1 = (EIF_BOOLEAN) 1;
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(3870, dtype));
	uu8_1 = tu8_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3896, dtype))(Current, ui4_1x, ub1x, uu8_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uu8_1
#undef ui4_1
#undef ub1
}

/* {NETWORK_SOCKET}.ready_for_writing */
EIF_TYPED_VALUE F260_4281 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ready_for_writing";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 259, Current, 1, 0, 4315);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4315);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ub1 = (EIF_BOOLEAN) 0;
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(3870, dtype));
	uu8_1 = tu8_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3896, dtype))(Current, ui4_1x, ub1x, uu8_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uu8_1
#undef ui4_1
#undef ub1
}

/* {NETWORK_SOCKET}.has_exception_state */
EIF_TYPED_VALUE F260_4282 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "has_exception_state";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 259, Current, 1, 0, 4316);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4316);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(3870, dtype));
	uu8_1 = tu8_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3897, dtype))(Current, ui4_1x, uu8_1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef uu8_1
#undef ui4_1
}

/* {NETWORK_SOCKET}.is_default_timeout */
EIF_TYPED_VALUE F260_4283 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_default_timeout";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_64 tu8_1;
	EIF_NATURAL_64 tu8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4317);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4317);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(3870, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3892, dtype));
	ui4_1 = ti4_1;
	tu8_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1468, dtype))(Current, ui4_1x)).it_n8);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu8_1 == tu8_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
}

/* {NETWORK_SOCKET}.timeout */
EIF_TYPED_VALUE F260_4284 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "timeout";
	RTEX;
	EIF_NATURAL_64 loc1 = (EIF_NATURAL_64) 0;
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT64, &loc1);
	
	RTEAA(l_feature_name, 259, Current, 1, 0, 4318);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4318);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x3C000000, 1, 0); /* loc1 */
	tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(3870, dtype));
	loc1 = (EIF_NATURAL_64) tu8_1;
	RTHOOK(2);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	uu8_1 = loc1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1467, dtype))(Current, uu8_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (loc1 > (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L)))) {
		RTHOOK(4);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("timeout_positive", EX_POST);
		tu8_1 = *(EIF_NATURAL_64 *)(Current + RTWA(3870, dtype));
		if ((!((EIF_BOOLEAN)(tu8_1 != (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uu8_1
}

/* {NETWORK_SOCKET}.timeout_ns */
EIF_TYPED_VALUE F260_4285 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT64;
	r.it_n8 = *(EIF_NATURAL_64 *)(Current + RTWA(3870,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.recv_timeout */
EIF_TYPED_VALUE F260_4286 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "recv_timeout";
	RTEX;
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4320);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4320);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3872, dtype))(Current)).it_n8);
	uu8_1 = tu8_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1467, dtype))(Current, uu8_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uu8_1
}

/* {NETWORK_SOCKET}.recv_timeout_ns */
EIF_TYPED_VALUE F260_4287 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "recv_timeout_ns";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4321);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4321);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2619, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2647, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3894, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)).it_n8);
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {NETWORK_SOCKET}.send_timeout */
EIF_TYPED_VALUE F260_4288 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "send_timeout";
	RTEX;
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4322);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4322);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x10000000, 1,0); /* Result */
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3874, dtype))(Current)).it_n8);
	uu8_1 = tu8_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1467, dtype))(Current, uu8_1x)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_not_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uu8_1
}

/* {NETWORK_SOCKET}.send_timeout_ns */
EIF_TYPED_VALUE F260_4289 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "send_timeout_ns";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4323);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4323);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x3C000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2619, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2648, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3894, dtype))(Current, ui4_1x, ui4_2x, ui4_3x)).it_n8);
	Result = (EIF_NATURAL_64) tu8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {NETWORK_SOCKET}.set_reuse_address */
void F260_4290 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_reuse_address";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4324);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4324);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2619, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2649, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	ui4_4 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3843, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
}

/* {NETWORK_SOCKET}.do_not_reuse_address */
void F260_4291 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "do_not_reuse_address";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4325);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4325);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2619, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2649, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	ui4_4 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3843, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
}

/* {NETWORK_SOCKET}.set_default_timeout */
void F260_4292 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_default_timeout";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4326);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4326);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3870, 0x3C000000, 1); /* timeout_ns */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3892, dtype));
	ui4_1 = ti4_1;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1468, dtype))(Current, ui4_1x)).it_n8);
	*(EIF_NATURAL_64 *)(Current + RTWA(3870, dtype)) = (EIF_NATURAL_64) tu8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("timeout_set_to_default", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3868, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {NETWORK_SOCKET}.set_timeout */
void F260_4293 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_64 tu8_1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 1, 4327);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4327);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1468, dtype))(Current, ui4_1x)).it_n8);
	uu8_1 = tu8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3879, dtype))(Current, uu8_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("timeout_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3869, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu8_1
#undef ui4_1
#undef arg1
}

/* {NETWORK_SOCKET}.set_timeout_ns */
void F260_4294 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_timeout_ns";
	RTEX;
#define arg1 arg1x.it_n8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 1, 4328);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4328);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		uu8_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1469, dtype))(Current, uu8_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3870, 0x3C000000, 1); /* timeout_ns */
	*(EIF_NATURAL_64 *)(Current + RTWA(3870, dtype)) = (EIF_NATURAL_64) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu8_1
#undef arg1
}

/* {NETWORK_SOCKET}.set_recv_timeout */
void F260_4295 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recv_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_64 tu8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 1, 4329);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4329);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_timeout", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1468, dtype))(Current, ui4_1x)).it_n8);
	uu8_1 = tu8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3881, dtype))(Current, uu8_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu8_1
#undef ui4_1
#undef arg1
}

/* {NETWORK_SOCKET}.set_recv_timeout_ns */
void F260_4296 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_recv_timeout_ns";
	RTEX;
#define arg1 arg1x.it_n8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 1, 4330);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4330);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		uu8_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1469, dtype))(Current, uu8_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2619, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2647, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	uu8_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3893, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu8_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {NETWORK_SOCKET}.set_send_timeout */
void F260_4297 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_send_timeout";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_NATURAL_64 tu8_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 1, 4331);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4331);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_negative_timeout", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ui4_1 = arg1;
	tu8_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1468, dtype))(Current, ui4_1x)).it_n8);
	uu8_1 = tu8_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3883, dtype))(Current, uu8_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu8_1
#undef ui4_1
#undef arg1
}

/* {NETWORK_SOCKET}.set_send_timeout_ns */
void F260_4298 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_send_timeout_ns";
	RTEX;
#define arg1 arg1x.it_n8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n8 = * (EIF_NATURAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 1, 4332);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4332);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		uu8_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1469, dtype))(Current, uu8_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3692, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2619, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2648, dtype))(Current)).it_i4);
	ui4_3 = ti4_3;
	uu8_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3893, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, uu8_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef uu8_1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {NETWORK_SOCKET}.set_non_blocking */
void F260_4299 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_non_blocking";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4333);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4333);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3885, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3846, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3886, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3886, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3846, dtype))(Current, ui4_1x);
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3819, 0x04000000, 1); /* is_blocking */
	*(EIF_BOOLEAN *)(Current + RTWA(3819, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("not is_blocking", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3819, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {NETWORK_SOCKET}.set_blocking */
void F260_4300 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_blocking";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4334);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4334);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("socket_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3885, dtype));
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3847, dtype))(Current, ui4_1x);
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3886, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3886, dtype));
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(3847, dtype))(Current, ui4_1x);
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 3819, 0x04000000, 1); /* is_blocking */
	*(EIF_BOOLEAN *)(Current + RTWA(3819, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_blocking", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(3819, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
}

/* {NETWORK_SOCKET}.make_socket */
void F260_4301 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_socket";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4335);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4335);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_family", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3788, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_type", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3790, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_protocol", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3789, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3889, dtype))(Current);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3885, dtype));
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) -1L))) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 3899, 0x04000000, 1); /* is_closed */
		*(EIF_BOOLEAN *)(Current + RTWA(3899, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(7);
		RTDBGAA(Current, dtype, 3856, 0x04000000, 1); /* descriptor_available */
		*(EIF_BOOLEAN *)(Current + RTWA(3856, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(3818, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {NETWORK_SOCKET}.set_closed */
void F260_4302 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_closed";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4336);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4336);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 3899, 0x04000000, 1); /* is_closed */
	*(EIF_BOOLEAN *)(Current + RTWA(3899, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 3856, 0x04000000, 1); /* descriptor_available */
	*(EIF_BOOLEAN *)(Current + RTWA(3856, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 3854, 0x04000000, 1); /* is_open_read */
	*(EIF_BOOLEAN *)(Current + RTWA(3854, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 3855, 0x04000000, 1); /* is_open_write */
	*(EIF_BOOLEAN *)(Current + RTWA(3855, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {NETWORK_SOCKET}.shutdown */
void F260_4303 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "shutdown";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 0, 4337);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(259, Current, 4337);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(3885, dtype));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(3886, dtype));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(3898, dtype))(Current, ui4_1x, ui4_2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef ui4_2
}

/* {NETWORK_SOCKET}.fd */
EIF_TYPED_VALUE F260_4304 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3885,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.fd1 */
EIF_TYPED_VALUE F260_4305 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3886,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.last_fd */
EIF_TYPED_VALUE F260_4306 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3887,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.internal_port */
EIF_TYPED_VALUE F260_4307 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3888,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.default_timeout */
EIF_TYPED_VALUE F260_4311 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(3892,Dtype(Current)));
	return r;
}


/* {NETWORK_SOCKET}.c_set_sock_opt_timeout */
void F260_4312 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_set_sock_opt_timeout";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_n8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n8 = * (EIF_NATURAL_64 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_UINT64,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 4, 4343);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(259, Current, 4343);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		uu8_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1469, dtype))(Current, uu8_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;c_set_sock_opt_timeout(arg1, arg2, arg3, arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
#undef uu8_1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {NETWORK_SOCKET}.c_get_sock_opt_timeout */
EIF_TYPED_VALUE F260_4313 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_get_sock_opt_timeout";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 3, 4344);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(259, Current, 4344);
	RTIV(Current, RTAL);Result = (EIF_NATURAL_64) c_get_sock_opt_timeout(arg1, arg2, arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {NETWORK_SOCKET}.c_close */
void F260_4314 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_close";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 2, 4345);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(259, Current, 4345);
	RTIV(Current, RTAL);en_socket_close(arg1, arg2);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {NETWORK_SOCKET}.c_select_poll_with_timeout */
EIF_TYPED_VALUE F260_4315 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_select_poll_with_timeout";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_b
#define arg3 arg3x.it_n8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n8 = * (EIF_NATURAL_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_b = * (EIF_BOOLEAN *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_BOOL,&arg2);
	RTLU(SK_UINT64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 3, 4346);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(259, Current, 4346);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		uu8_1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1469, dtype))(Current, uu8_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_select_poll_with_timeout(arg1, arg2, arg3);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uu8_1
#undef arg3
#undef arg2
#undef arg1
}

/* {NETWORK_SOCKET}.c_check_exception_with_timeout */
EIF_TYPED_VALUE F260_4316 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_check_exception_with_timeout";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_n8
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n8 = * (EIF_NATURAL_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_UINT64,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 2, 4347);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(259, Current, 4347);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_valid_timeout_ns", EX_PRE);
		uu8_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1469, dtype))(Current, uu8_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	EIF_ENTER_C;Result = (EIF_INTEGER_32) c_check_exception_with_timeout(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef uu8_1
#undef arg2
#undef arg1
}

/* {NETWORK_SOCKET}.c_shutdown */
void F260_4317 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "c_shutdown";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 259, Current, 0, 2, 4348);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(259, Current, 4348);
	RTIV(Current, RTAL);
	EIF_ENTER_C;en_socket_shutdown(arg1, arg2);
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {NETWORK_SOCKET}._invariant */
void F260_9284 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 259, Current, 0, 9283);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("correct_exist", Current);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(3860, dtype));
	if ((EIF_BOOLEAN) !tb2) {
		tb2 = '\0';
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(3899, dtype));
		if (tb3) {
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(3712, dtype))(Current)).it_b);
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit260 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
