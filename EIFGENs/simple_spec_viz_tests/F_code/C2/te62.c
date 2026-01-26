/*
 * Code for class TEST_APP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "te62.h"
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
void F80_1276 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	
	RTEAA("make", 79, Current, 3, 0, 1387);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(123, 0x01).id, 123, _OBJSIZ_3_2_0_0_0_0_0_0_);
	(nstcall = -1, F122_1636(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTMS_EX_H("Running simple_spec_viz tests...\012\012",34,214518538);
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(3);
	tr1 = RTMS_EX_H("test_spec_state_creation",24,1751611246);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_117, (EIF_POINTER) _A98_117, (EIF_POINTER)(F124_1700),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(4);
	tr1 = RTMS_EX_H("test_spec_state_initial_final",29,1291304812);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_118, (EIF_POINTER) _A98_118, (EIF_POINTER)(F124_1701),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(5);
	tr1 = RTMS_EX_H("test_spec_state_screen_association",34,1060960366);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_119, (EIF_POINTER) _A98_119, (EIF_POINTER)(F124_1702),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(6);
	tr1 = RTMS_EX_H("test_spec_state_actions",23,111355763);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_120, (EIF_POINTER) _A98_120, (EIF_POINTER)(F124_1703),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(7);
	tr1 = RTMS_EX_H("test_spec_transition_creation",29,6580334);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_121, (EIF_POINTER) _A98_121, (EIF_POINTER)(F124_1704),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(8);
	tr1 = RTMS_EX_H("test_spec_transition_self_loop",30,1913545584);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_122, (EIF_POINTER) _A98_122, (EIF_POINTER)(F124_1705),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(9);
	tr1 = RTMS_EX_H("test_spec_transition_requirements",33,1432136563);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_123, (EIF_POINTER) _A98_123, (EIF_POINTER)(F124_1706),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(10);
	tr1 = RTMS_EX_H("test_spec_screen_creation",25,526469230);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_124, (EIF_POINTER) _A98_124, (EIF_POINTER)(F124_1707),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(11);
	tr1 = RTMS_EX_H("test_spec_screen_widgets",24,679645299);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_125, (EIF_POINTER) _A98_125, (EIF_POINTER)(F124_1708),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(12);
	tr1 = RTMS_EX_H("test_spec_widget_creation",25,873792110);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_126, (EIF_POINTER) _A98_126, (EIF_POINTER)(F124_1709),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(13);
	tr1 = RTMS_EX_H("test_spec_widget_types",22,1442387827);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_127, (EIF_POINTER) _A98_127, (EIF_POINTER)(F124_1710),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(14);
	tr1 = RTMS_EX_H("test_spec_widget_position_size",30,1970467429);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_128, (EIF_POINTER) _A98_128, (EIF_POINTER)(F124_1711),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(15);
	tr1 = RTMS_EX_H("test_spec_widget_display_text",29,1324882804);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_129, (EIF_POINTER) _A98_129, (EIF_POINTER)(F124_1712),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(16);
	tr1 = RTMS_EX_H("test_spec_document_creation",27,1478929774);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_130, (EIF_POINTER) _A98_130, (EIF_POINTER)(F124_1713),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(17);
	tr1 = RTMS_EX_H("test_spec_document_add_elements",31,1675189619);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_131, (EIF_POINTER) _A98_131, (EIF_POINTER)(F124_1714),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(18);
	tr1 = RTMS_EX_H("test_spec_document_queries",26,648499571);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_132, (EIF_POINTER) _A98_132, (EIF_POINTER)(F124_1715),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(19);
	tr1 = RTMS_EX_H("test_loader_from_string",23,995359591);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_133, (EIF_POINTER) _A98_133, (EIF_POINTER)(F124_1716),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(20);
	tr1 = RTMS_EX_H("test_loader_states_parsed",25,655432036);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_134, (EIF_POINTER) _A98_134, (EIF_POINTER)(F124_1717),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(21);
	tr1 = RTMS_EX_H("test_loader_transitions_parsed",30,1233086052);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_135, (EIF_POINTER) _A98_135, (EIF_POINTER)(F124_1718),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(22);
	tr1 = RTMS_EX_H("test_loader_screens_parsed",26,76986724);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_136, (EIF_POINTER) _A98_136, (EIF_POINTER)(F124_1719),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(23);
	tr1 = RTMS_EX_H("test_loader_traceability_parsed",31,1413199204);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_137, (EIF_POINTER) _A98_137, (EIF_POINTER)(F124_1720),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(24);
	tr1 = RTMS_EX_H("test_traceability_matrix",24,2137733496);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_138, (EIF_POINTER) _A98_138, (EIF_POINTER)(F124_1721),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(25);
	tr1 = RTMS_EX_H("test_traceability_reverse_lookup",32,639785584);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_139, (EIF_POINTER) _A98_139, (EIF_POINTER)(F124_1722),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(26);
	tr1 = RTMS_EX_H("test_state_diagram_generator",28,504641650);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_140, (EIF_POINTER) _A98_140, (EIF_POINTER)(F124_1723),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(27);
	tr1 = RTMS_EX_H("test_state_diagram_svg_generation",33,1508374894);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_141, (EIF_POINTER) _A98_141, (EIF_POINTER)(F124_1724),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(28);
	tr1 = RTMS_EX_H("test_screen_mockup_generator",28,899204466);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_142, (EIF_POINTER) _A98_142, (EIF_POINTER)(F124_1725),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(29);
	tr1 = RTMS_EX_H("test_screen_mockup_all",22,1783885676);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_143, (EIF_POINTER) _A98_143, (EIF_POINTER)(F124_1726),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(30);
	tr1 = RTMS_EX_H("test_traceability_report_generator",34,377673330);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_144, (EIF_POINTER) _A98_144, (EIF_POINTER)(F124_1727),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(31);
	tr1 = RTMS_EX_H("test_simple_spec_viz_facade",27,899143781);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_145, (EIF_POINTER) _A98_145, (EIF_POINTER)(F124_1728),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(32);
	tr1 = RTMS_EX_H("test_end_to_end_file_generation",31,308105582);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_146, (EIF_POINTER) _A98_146, (EIF_POINTER)(F124_1729),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(33);
	tr1 = RTMS_EX_H("test_spec_viz_result_success",28,804962163);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_148, (EIF_POINTER) _A98_148, (EIF_POINTER)(F124_1731),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(34);
	tr1 = RTMS_EX_H("test_spec_viz_result_failure",28,817055077);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_149, (EIF_POINTER) _A98_149, (EIF_POINTER)(F124_1732),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(35);
	tr1 = RTMS_EX_H("test_svg_renderer_rect",22,2016920692);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_150, (EIF_POINTER) _A98_150, (EIF_POINTER)(F124_1733),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(36);
	tr1 = RTMS_EX_H("test_svg_renderer_text",22,2050480500);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_151, (EIF_POINTER) _A98_151, (EIF_POINTER)(F124_1734),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(37);
	tr1 = RTMS_EX_H("test_svg_renderer_xml_escape",28,1774645349);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_152, (EIF_POINTER) _A98_152, (EIF_POINTER)(F124_1735),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(38);
	tr1 = RTMS_EX_H("test_spec_requirement",21,601551732);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_153, (EIF_POINTER) _A98_153, (EIF_POINTER)(F124_1736),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(39);
	tr1 = RTMS_EX_H("test_spec_requirement_types",27,711897459);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_154, (EIF_POINTER) _A98_154, (EIF_POINTER)(F124_1737),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(40);
	tr1 = RTMS_EX_H("test_adversarial_empty_spec",27,1490480995);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_155, (EIF_POINTER) _A98_155, (EIF_POINTER)(F124_1738),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(41);
	tr1 = RTMS_EX_H("test_adversarial_single_state",29,1199263333);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_156, (EIF_POINTER) _A98_156, (EIF_POINTER)(F124_1739),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(42);
	tr1 = RTMS_EX_H("test_adversarial_max_states",27,1176011379);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_157, (EIF_POINTER) _A98_157, (EIF_POINTER)(F124_1740),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(43);
	tr1 = RTMS_EX_H("test_adversarial_self_transitions_only",38,1246577529);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_158, (EIF_POINTER) _A98_158, (EIF_POINTER)(F124_1741),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(44);
	tr1 = RTMS_EX_H("test_adversarial_unreachable_state",34,1918004581);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_159, (EIF_POINTER) _A98_159, (EIF_POINTER)(F124_1742),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(45);
	tr1 = RTMS_EX_H("test_adversarial_duplicate_prevention",37,189434990);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_160, (EIF_POINTER) _A98_160, (EIF_POINTER)(F124_1743),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(46);
	tr1 = RTMS_EX_H("test_adversarial_missing_screen_reference",41,1482672229);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_161, (EIF_POINTER) _A98_161, (EIF_POINTER)(F124_1744),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(47);
	tr1 = RTMS_EX_H("test_adversarial_malformed_json",31,49615982);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_162, (EIF_POINTER) _A98_162, (EIF_POINTER)(F124_1745),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(48);
	tr1 = RTMS_EX_H("test_adversarial_missing_required_field",39,535266660);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_163, (EIF_POINTER) _A98_163, (EIF_POINTER)(F124_1746),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(49);
	tr1 = RTMS_EX_H("test_adversarial_invalid_state_reference",40,2127652197);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_164, (EIF_POINTER) _A98_164, (EIF_POINTER)(F124_1747),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(50);
	tr1 = RTMS_EX_H("test_adversarial_empty_string_state_id",38,1017584484);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_165, (EIF_POINTER) _A98_165, (EIF_POINTER)(F124_1748),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(51);
	tr1 = RTMS_EX_H("test_adversarial_unicode_strings",32,939212147);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_166, (EIF_POINTER) _A98_166, (EIF_POINTER)(F124_1749),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(52);
	tr1 = RTMS_EX_H("test_adversarial_very_long_strings",34,1748331123);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_167, (EIF_POINTER) _A98_167, (EIF_POINTER)(F124_1750),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(53);
	tr1 = RTMS_EX_H("test_adversarial_large_widget_count",35,379289204);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_168, (EIF_POINTER) _A98_168, (EIF_POINTER)(F124_1751),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(54);
	tr1 = RTMS_EX_H("test_adversarial_complex_requirement_traceability",49,1670417273);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_169, (EIF_POINTER) _A98_169, (EIF_POINTER)(F124_1752),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(55);
	tr1 = RTMS_EX_H("test_adversarial_result_xor_invariant",37,1597701492);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_170, (EIF_POINTER) _A98_170, (EIF_POINTER)(F124_1753),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(56);
	tr1 = RTMS_EX_H("test_adversarial_result_empty_strings",37,1458045043);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_171, (EIF_POINTER) _A98_171, (EIF_POINTER)(F124_1754),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(57);
	tr1 = RTMS_EX_H("test_adversarial_concurrent_reads",33,393295731);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_172, (EIF_POINTER) _A98_172, (EIF_POINTER)(F124_1755),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(58);
	tr1 = RTMS_EX_H("test_adversarial_state_immutability",35,2080505977);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_173, (EIF_POINTER) _A98_173, (EIF_POINTER)(F124_1756),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(59);
	tr1 = RTMS_EX_H("test_adversarial_loader_recovery",32,920244345);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_174, (EIF_POINTER) _A98_174, (EIF_POINTER)(F124_1757),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(60);
	tr1 = RTMS_EX_H("test_adversarial_generator_with_missing_data",44,1350869345);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_175, (EIF_POINTER) _A98_175, (EIF_POINTER)(F124_1758),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(61);
	tr1 = RTMS_EX_H("test_adversarial_void_safety_state",34,1220962661);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_176, (EIF_POINTER) _A98_176, (EIF_POINTER)(F124_1759),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(62);
	tr1 = RTMS_EX_H("test_adversarial_collection_iteration",37,1814557550);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,1,996,0xFF01,123,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 2, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_r = loc1;
	RTAR(tr2,loc1);
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1070,0xFF01,0xFFF9,0,996,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3= RTLNRF(typres0.id, (EIF_POINTER) __A98_177, (EIF_POINTER) _A98_177, (EIF_POINTER)(F124_1760),tr2, 1, 0);
	}
	(nstcall = 0, F80_1277(Current, tr1, tr3, loc2, loc3));
	RTHOOK(63);
	tr1 = RTMS_EX_H("\012=== SUMMARY ===\012",17,71040010);
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(64);
	tr1 = RTMS_EX_H("Passed: ",8,1376144672);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	tr2 = eif_out__i4_s1(ti4_1);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("\012",1,10);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(65);
	tr1 = RTMS_EX_H("Failed: ",8,1354126112);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr2 = eif_out__i4_s1(ti4_1);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("\012",1,10);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(66);
	tr1 = RTMS_EX_H("Total:  ",8,2097566752);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	tr2 = eif_out__i4_s1((EIF_INTEGER_32) (ti4_1 + ti4_2));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr2));
	tr1 = RTMS_EX_H("\012",1,10);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(67);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(68);
		tr1 = RTLNS(eif_new_type(221, 0x01).id, 221, _OBJSIZ_0_0_0_0_0_0_0_0_);
		(nstcall = 1, F222_2631(tr1, ((EIF_INTEGER_32) 1L)));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(69);
	RTLE;
	RTEE;
}

/* {TEST_APP}.run_test */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F80_1277 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	RTS_SDX;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	RTSN;
	RTDA;
	RTLD;
	RTXD;
	
	RTLI(6);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,tr2);
	RTLR(4,Current);
	RTLR(5,saved_except);
	RTLIU(6);
	RTXSLS;
	
	RTEAA("run_test", 79, Current, 1, 4, 1388);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_POINTER, EIF_REFERENCE)) *(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_2_0_3_0_0_))(
			*(EIF_POINTER *)(RTCW(arg2)+ _PTROFF_4_2_0_3_0_1_),
			*(EIF_REFERENCE *)(RTCW(arg2) + _REFACS_1_));
		RTHOOK(3);
		tr1 = RTMS_EX_H("  PASS: ",8,489410592);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg1));
		tr1 = RTMS_EX_H("\012",1,10);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		(nstcall = 0, F1_27(Current, tr1));
		RTHOOK(4);
		(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_))++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTXSC;
	RTS_SRR
	RTHOOK(5);
	tr1 = RTMS_EX_H("  FAIL: ",8,301518880);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, arg1));
	tr1 = RTMS_EX_H("\012",1,10);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
	(nstcall = 0, F1_27(Current, tr1));
	RTHOOK(6);
	(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_))++;
	RTHOOK(7);
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(8);
	RTER;
	/* NOTREACHED */
	RTE_EE
	RTHOOK(9);
	RTEOK;
	RTLE;
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {TEST_APP}.passed */
EIF_INTEGER_32 F80_1278 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_0_);
}


/* {TEST_APP}.failed */
EIF_INTEGER_32 F80_1279 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_0_0_0_1_);
}


void EIF_Minit62 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
