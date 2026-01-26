/*
 * Code for class TEST_APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F62_1276(EIF_REFERENCE);
extern void F62_1277(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F62_1278(EIF_REFERENCE);
extern EIF_TYPED_VALUE F62_1279(EIF_REFERENCE);
extern void EIF_Minit62(void);
extern EIF_REFERENCE _A98_136();
extern EIF_REFERENCE _A98_155();
extern EIF_REFERENCE _A98_151();
extern EIF_REFERENCE _A98_119();
extern EIF_REFERENCE _A98_130();
extern EIF_REFERENCE _A98_156();
extern EIF_REFERENCE _A98_141();
extern EIF_REFERENCE _A98_157();
extern EIF_REFERENCE _A98_146();
extern EIF_REFERENCE _A98_124();
extern EIF_REFERENCE _A98_161();
extern EIF_REFERENCE _A98_150();
extern EIF_REFERENCE _A98_135();
extern EIF_REFERENCE _A98_176();
extern EIF_REFERENCE _A98_118();
extern EIF_REFERENCE _A98_167();
extern EIF_REFERENCE _A98_129();
extern EIF_REFERENCE _A98_140();
extern EIF_REFERENCE _A98_168();
extern EIF_REFERENCE _A98_171();
extern EIF_REFERENCE _A98_123();
extern EIF_REFERENCE _A98_145();
extern EIF_REFERENCE _A98_153();
extern EIF_REFERENCE _A98_134();
extern EIF_REFERENCE _A98_175();
extern EIF_REFERENCE _A98_117();
extern EIF_REFERENCE _A98_166();
extern EIF_REFERENCE _A98_164();
extern EIF_REFERENCE _A98_128();
extern EIF_REFERENCE _A98_170();
extern EIF_REFERENCE _A98_177();
extern EIF_REFERENCE _A98_139();
extern EIF_REFERENCE _A98_122();
extern EIF_REFERENCE _A98_163();
extern EIF_REFERENCE _A98_133();
extern EIF_REFERENCE _A98_165();
extern EIF_REFERENCE _A98_154();
extern EIF_REFERENCE _A98_144();
extern EIF_REFERENCE _A98_127();
extern EIF_REFERENCE _A98_160();
extern EIF_REFERENCE _A98_172();
extern EIF_REFERENCE _A98_138();
extern EIF_REFERENCE _A98_162();
extern EIF_REFERENCE _A98_121();
extern EIF_REFERENCE _A98_149();
extern EIF_REFERENCE _A98_173();
extern EIF_REFERENCE _A98_132();
extern EIF_REFERENCE _A98_152();
extern EIF_REFERENCE _A98_143();
extern EIF_REFERENCE _A98_126();
extern EIF_REFERENCE _A98_137();
extern EIF_REFERENCE _A98_174();
extern EIF_REFERENCE _A98_120();
extern EIF_REFERENCE _A98_148();
extern EIF_REFERENCE _A98_131();
extern EIF_REFERENCE _A98_159();
extern EIF_REFERENCE _A98_142();
extern EIF_REFERENCE _A98_169();
extern EIF_REFERENCE _A98_158();
extern EIF_REFERENCE _A98_125();

#ifdef __cplusplus
}
#endif

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

/* {TEST_APP}.make */
void F62_1276 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 61, Current, 3, 0, 1387);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(61, Current, 1387);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000061, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(97, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("Running simple_spec_viz tests...\012\012",34,214518538);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("test_spec_state_creation",24,1751611246);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_117, (EIF_POINTER)(0),1657, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("test_spec_state_initial_final",29,1291304812);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_118, (EIF_POINTER)(0),1658, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("test_spec_state_screen_association",34,1060960366);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_119, (EIF_POINTER)(0),1659, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("test_spec_state_actions",23,111355763);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_120, (EIF_POINTER)(0),1660, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("test_spec_transition_creation",29,6580334);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_121, (EIF_POINTER)(0),1661, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("test_spec_transition_self_loop",30,1913545584);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_122, (EIF_POINTER)(0),1662, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("test_spec_transition_requirements",33,1432136563);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_123, (EIF_POINTER)(0),1663, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("test_spec_screen_creation",25,526469230);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_124, (EIF_POINTER)(0),1664, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("test_spec_screen_widgets",24,679645299);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_125, (EIF_POINTER)(0),1665, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("test_spec_widget_creation",25,873792110);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_126, (EIF_POINTER)(0),1666, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(13);
	tr1 = RTMS_EX_H("test_spec_widget_types",22,1442387827);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_127, (EIF_POINTER)(0),1667, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(14);
	tr1 = RTMS_EX_H("test_spec_widget_position_size",30,1970467429);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_128, (EIF_POINTER)(0),1668, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(15);
	tr1 = RTMS_EX_H("test_spec_widget_display_text",29,1324882804);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_129, (EIF_POINTER)(0),1669, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(16);
	tr1 = RTMS_EX_H("test_spec_document_creation",27,1478929774);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_130, (EIF_POINTER)(0),1670, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(17);
	tr1 = RTMS_EX_H("test_spec_document_add_elements",31,1675189619);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_131, (EIF_POINTER)(0),1671, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(18);
	tr1 = RTMS_EX_H("test_spec_document_queries",26,648499571);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_132, (EIF_POINTER)(0),1672, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(19);
	tr1 = RTMS_EX_H("test_loader_from_string",23,995359591);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_133, (EIF_POINTER)(0),1673, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(20);
	tr1 = RTMS_EX_H("test_loader_states_parsed",25,655432036);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_134, (EIF_POINTER)(0),1674, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(21);
	tr1 = RTMS_EX_H("test_loader_transitions_parsed",30,1233086052);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_135, (EIF_POINTER)(0),1675, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(22);
	tr1 = RTMS_EX_H("test_loader_screens_parsed",26,76986724);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_136, (EIF_POINTER)(0),1676, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(23);
	tr1 = RTMS_EX_H("test_loader_traceability_parsed",31,1413199204);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_137, (EIF_POINTER)(0),1677, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(24);
	tr1 = RTMS_EX_H("test_traceability_matrix",24,2137733496);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_138, (EIF_POINTER)(0),1678, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(25);
	tr1 = RTMS_EX_H("test_traceability_reverse_lookup",32,639785584);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_139, (EIF_POINTER)(0),1679, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(26);
	tr1 = RTMS_EX_H("test_state_diagram_generator",28,504641650);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_140, (EIF_POINTER)(0),1680, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(27);
	tr1 = RTMS_EX_H("test_state_diagram_svg_generation",33,1508374894);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_141, (EIF_POINTER)(0),1681, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(28);
	tr1 = RTMS_EX_H("test_screen_mockup_generator",28,899204466);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_142, (EIF_POINTER)(0),1682, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(29);
	tr1 = RTMS_EX_H("test_screen_mockup_all",22,1783885676);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_143, (EIF_POINTER)(0),1683, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(30);
	tr1 = RTMS_EX_H("test_traceability_report_generator",34,377673330);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_144, (EIF_POINTER)(0),1684, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(31);
	tr1 = RTMS_EX_H("test_simple_spec_viz_facade",27,899143781);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_145, (EIF_POINTER)(0),1685, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(32);
	tr1 = RTMS_EX_H("test_end_to_end_file_generation",31,308105582);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_146, (EIF_POINTER)(0),1686, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(33);
	tr1 = RTMS_EX_H("test_spec_viz_result_success",28,804962163);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_148, (EIF_POINTER)(0),1688, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(34);
	tr1 = RTMS_EX_H("test_spec_viz_result_failure",28,817055077);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_149, (EIF_POINTER)(0),1689, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(35);
	tr1 = RTMS_EX_H("test_svg_renderer_rect",22,2016920692);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_150, (EIF_POINTER)(0),1690, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(36);
	tr1 = RTMS_EX_H("test_svg_renderer_text",22,2050480500);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_151, (EIF_POINTER)(0),1691, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(37);
	tr1 = RTMS_EX_H("test_svg_renderer_xml_escape",28,1774645349);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_152, (EIF_POINTER)(0),1692, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(38);
	tr1 = RTMS_EX_H("test_spec_requirement",21,601551732);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_153, (EIF_POINTER)(0),1693, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(39);
	tr1 = RTMS_EX_H("test_spec_requirement_types",27,711897459);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_154, (EIF_POINTER)(0),1694, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(40);
	tr1 = RTMS_EX_H("test_adversarial_empty_spec",27,1490480995);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_155, (EIF_POINTER)(0),1695, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(41);
	tr1 = RTMS_EX_H("test_adversarial_single_state",29,1199263333);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_156, (EIF_POINTER)(0),1696, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(42);
	tr1 = RTMS_EX_H("test_adversarial_max_states",27,1176011379);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_157, (EIF_POINTER)(0),1697, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(43);
	tr1 = RTMS_EX_H("test_adversarial_self_transitions_only",38,1246577529);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_158, (EIF_POINTER)(0),1698, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(44);
	tr1 = RTMS_EX_H("test_adversarial_unreachable_state",34,1918004581);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_159, (EIF_POINTER)(0),1699, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(45);
	tr1 = RTMS_EX_H("test_adversarial_duplicate_prevention",37,189434990);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_160, (EIF_POINTER)(0),1700, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(46);
	tr1 = RTMS_EX_H("test_adversarial_missing_screen_reference",41,1482672229);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_161, (EIF_POINTER)(0),1701, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(47);
	tr1 = RTMS_EX_H("test_adversarial_malformed_json",31,49615982);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_162, (EIF_POINTER)(0),1702, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(48);
	tr1 = RTMS_EX_H("test_adversarial_missing_required_field",39,535266660);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_163, (EIF_POINTER)(0),1703, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(49);
	tr1 = RTMS_EX_H("test_adversarial_invalid_state_reference",40,2127652197);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_164, (EIF_POINTER)(0),1704, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(50);
	tr1 = RTMS_EX_H("test_adversarial_empty_string_state_id",38,1017584484);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_165, (EIF_POINTER)(0),1705, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(51);
	tr1 = RTMS_EX_H("test_adversarial_unicode_strings",32,939212147);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_166, (EIF_POINTER)(0),1706, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(52);
	tr1 = RTMS_EX_H("test_adversarial_very_long_strings",34,1748331123);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_167, (EIF_POINTER)(0),1707, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(53);
	tr1 = RTMS_EX_H("test_adversarial_large_widget_count",35,379289204);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_168, (EIF_POINTER)(0),1708, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(54);
	tr1 = RTMS_EX_H("test_adversarial_complex_requirement_traceability",49,1670417273);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_169, (EIF_POINTER)(0),1709, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(55);
	tr1 = RTMS_EX_H("test_adversarial_result_xor_invariant",37,1597701492);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_170, (EIF_POINTER)(0),1710, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(56);
	tr1 = RTMS_EX_H("test_adversarial_result_empty_strings",37,1458045043);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_171, (EIF_POINTER)(0),1711, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(57);
	tr1 = RTMS_EX_H("test_adversarial_concurrent_reads",33,393295731);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_172, (EIF_POINTER)(0),1712, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(58);
	tr1 = RTMS_EX_H("test_adversarial_state_immutability",35,2080505977);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_173, (EIF_POINTER)(0),1713, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(59);
	tr1 = RTMS_EX_H("test_adversarial_loader_recovery",32,920244345);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_174, (EIF_POINTER)(0),1714, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(60);
	tr1 = RTMS_EX_H("test_adversarial_generator_with_missing_data",44,1350869345);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_175, (EIF_POINTER)(0),1715, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(61);
	tr1 = RTMS_EX_H("test_adversarial_void_safety_state",34,1220962661);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_176, (EIF_POINTER)(0),1716, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(62);
	tr1 = RTMS_EX_H("test_adversarial_collection_iteration",37,1814557550);
	ur1 = tr1;
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,309,0xFF01,97,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRW(typres0.id, 0, (EIF_POINTER) _A98_177, (EIF_POINTER)(0),1717, 0, 0, 1, -1, tr2, 0);
	}
	ur2 = RTCCL(tr3);
	ui4_1 = loc2;
	ui4_2 = loc3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1276, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
	RTHOOK(63);
	tr1 = RTMS_EX_H("\012=== SUMMARY ===\012",17,71040010);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(64);
	tr1 = RTMS_EX_H("Passed: ",8,1376144672);
	tr2 = eif_out__i4_s1(loc2);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\012",1,10);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(65);
	tr1 = RTMS_EX_H("Failed: ",8,1354126112);
	tr2 = eif_out__i4_s1(loc3);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\012",1,10);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(66);
	tr1 = RTMS_EX_H("Total:  ",8,2097566752);
	tr2 = eif_out__i4_s1((EIF_INTEGER_32) (loc2 + loc3));
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\012",1,10);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(67);
	if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(68);
		tr1 = RTLN(eif_new_type(195, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(68,1);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2466, "die", tr1))(tr1, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(69);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
}

/* {TEST_APP}.run_test */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F62_1277 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "run_test";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	RTS_SDX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLR(6,saved_except);
	RTLIU(7);
	RTXSLS;
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 61, Current, 1, 4, 1388);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(61, Current, 1388);
	RTCC(arg1, 61, l_feature_name, 1, eif_new_type(357, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,427,0xFF01,0xFFF9,0,309,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 61, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6076, "call", arg2))(arg2, ur1x);
		RTHOOK(3);
		tr1 = RTMS_EX_H("  PASS: ",8,489410592);
		ur1 = RTCCL(arg1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
		RTHOOK(4);
		RTDBGAA(Current, dtype, 1277, 0x10000000, 1); /* passed */
		(*(EIF_INTEGER_32 *)(Current + RTWA(1277, dtype)))++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTS_SRR
	RTHOOK(5);
	tr1 = RTMS_EX_H("  FAIL: ",8,301518880);
	ur1 = RTCCL(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H("\012",1,10);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6259, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, dtype))(Current, ur1x);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1278, 0x10000000, 1); /* failed */
	(*(EIF_INTEGER_32 *)(Current + RTWA(1278, dtype)))++;
	RTHOOK(7);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(8);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(7);
#undef up1
#undef ur1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {TEST_APP}.passed */
EIF_TYPED_VALUE F62_1278 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1277,Dtype(Current)));
	return r;
}


/* {TEST_APP}.failed */
EIF_TYPED_VALUE F62_1279 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1278,Dtype(Current)));
	return r;
}


void EIF_Minit62 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
