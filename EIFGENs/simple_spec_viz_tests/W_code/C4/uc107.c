/*
 * Code for class UC_UNICODE_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F107_1797(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1798(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1799(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1800(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1801(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1802(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1803(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1804(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1805(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1806(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1807(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1808(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1809(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1810(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1811(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1812(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1813(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1814(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1815(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1816(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1817(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1818(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1819(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1820(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1821(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1822(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1823(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1824(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1825(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1826(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1827(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1828(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1829(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1830(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1831(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1832(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1833(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1834(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1835(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1836(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1837(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1838(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1840(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1841(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1842(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1843(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1844(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1845(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1846(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1847(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1848(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1849(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1850(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1851(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1852(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1853(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1854(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1855(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1856(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1857(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1858(EIF_REFERENCE);
extern EIF_TYPED_VALUE F107_1859(EIF_REFERENCE);
extern void EIF_Minit107(void);

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

/* {UC_UNICODE_CONSTANTS}.bom_character */
RTOID (F107_1797)
EIF_TYPED_VALUE F107_1797 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "bom_character";
	RTEX;
	EIF_CHARACTER_32 tw1;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_CHARACTER_32)
	RTOTDB(EIF_CHARACTER_32, F107_1797);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 106, Current, 0, 0, 1827);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(106, Current, 1827);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tw1 = (EIF_CHARACTER_32) ((EIF_INTEGER_32) 65279L);
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef Result
}

/* {UC_UNICODE_CONSTANTS}.minimum_unicode_character_code */
EIF_TYPED_VALUE F107_1798 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.minimum_unicode_character_natural_32_code */
EIF_TYPED_VALUE F107_1799 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 0U);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.maximum_unicode_character_code */
EIF_TYPED_VALUE F107_1800 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1114111L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.maximum_unicode_character_natural_32_code */
EIF_TYPED_VALUE F107_1801 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 1114111U);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.minimum_unicode_surrogate_code */
EIF_TYPED_VALUE F107_1802 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 55296L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.minimum_unicode_surrogate_natural_32_code */
EIF_TYPED_VALUE F107_1803 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 55296U);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.maximum_unicode_surrogate_code */
EIF_TYPED_VALUE F107_1804 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 57343L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.maximum_unicode_surrogate_natural_32_code */
EIF_TYPED_VALUE F107_1805 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 57343U);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.unicode_surrogate_count */
EIF_TYPED_VALUE F107_1806 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2048L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.maximum_bmp_character_code */
EIF_TYPED_VALUE F107_1807 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 65535L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.minimum_ascii_character_code */
EIF_TYPED_VALUE F107_1808 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.maximum_ascii_character_code */
EIF_TYPED_VALUE F107_1809 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 127L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.maximum_ascii_character_natural_32_code */
EIF_TYPED_VALUE F107_1810 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 127U);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.minimum_ascii_character */
EIF_TYPED_VALUE F107_1811 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\000';
	return r;
}

/* {UC_UNICODE_CONSTANTS}.maximum_ascii_character */
EIF_TYPED_VALUE F107_1812 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '';
	return r;
}

/* {UC_UNICODE_CONSTANTS}.unassigned_other_category */
EIF_TYPED_VALUE F107_1813 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.uppercase_letter_category */
EIF_TYPED_VALUE F107_1814 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.lowercase_letter_category */
EIF_TYPED_VALUE F107_1815 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.titlecase_letter_category */
EIF_TYPED_VALUE F107_1816 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.modifier_letter_category */
EIF_TYPED_VALUE F107_1817 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.other_letter_category */
EIF_TYPED_VALUE F107_1818 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.non_spacing_mark_category */
EIF_TYPED_VALUE F107_1819 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.spacing_combining_mark_category */
EIF_TYPED_VALUE F107_1820 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.enclosing_mark_category */
EIF_TYPED_VALUE F107_1821 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.decimal_digit_number_category */
EIF_TYPED_VALUE F107_1822 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.letter_number_category */
EIF_TYPED_VALUE F107_1823 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.other_number_category */
EIF_TYPED_VALUE F107_1824 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.connector_punctuation_category */
EIF_TYPED_VALUE F107_1825 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.dash_punctuation_category */
EIF_TYPED_VALUE F107_1826 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.open_punctuation_category */
EIF_TYPED_VALUE F107_1827 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.close_punctuation_category */
EIF_TYPED_VALUE F107_1828 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.initial_quote_punctuation_category */
EIF_TYPED_VALUE F107_1829 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.final_quote_punctuation_category */
EIF_TYPED_VALUE F107_1830 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.other_punctuation_category */
EIF_TYPED_VALUE F107_1831 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.math_symbol_category */
EIF_TYPED_VALUE F107_1832 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.currency_symbol_category */
EIF_TYPED_VALUE F107_1833 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.modifier_symbol_category */
EIF_TYPED_VALUE F107_1834 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 21L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.other_symbol_category */
EIF_TYPED_VALUE F107_1835 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 22L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.space_separator_category */
EIF_TYPED_VALUE F107_1836 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 23L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.line_separator_category */
EIF_TYPED_VALUE F107_1837 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 24L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.paragraph_separator_category */
EIF_TYPED_VALUE F107_1838 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 25L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.control_other_category */
EIF_TYPED_VALUE F107_1839 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 26L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.format_other_category */
EIF_TYPED_VALUE F107_1840 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 27L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.surrogate_other_category */
EIF_TYPED_VALUE F107_1841 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 28L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.private_other_category */
EIF_TYPED_VALUE F107_1842 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 29L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.canonical_decomposition_mapping */
EIF_TYPED_VALUE F107_1843 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.font_decomposition_mapping */
EIF_TYPED_VALUE F107_1844 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.no_break_decomposition_mapping */
EIF_TYPED_VALUE F107_1845 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.initial_decomposition_mapping */
EIF_TYPED_VALUE F107_1846 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.medial_decomposition_mapping */
EIF_TYPED_VALUE F107_1847 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.final_decomposition_mapping */
EIF_TYPED_VALUE F107_1848 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.isolated_decomposition_mapping */
EIF_TYPED_VALUE F107_1849 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.encircled_decomposition_mapping */
EIF_TYPED_VALUE F107_1850 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.superscript_decomposition_mapping */
EIF_TYPED_VALUE F107_1851 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.subscript_decomposition_mapping */
EIF_TYPED_VALUE F107_1852 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.vertical_decomposition_mapping */
EIF_TYPED_VALUE F107_1853 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.wide_decomposition_mapping */
EIF_TYPED_VALUE F107_1854 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.narrow_decomposition_mapping */
EIF_TYPED_VALUE F107_1855 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.small_decomposition_mapping */
EIF_TYPED_VALUE F107_1856 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.square_decomposition_mapping */
EIF_TYPED_VALUE F107_1857 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.fraction_decomposition_mapping */
EIF_TYPED_VALUE F107_1858 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	return r;
}

/* {UC_UNICODE_CONSTANTS}.compatibility_decomposition_mapping */
EIF_TYPED_VALUE F107_1859 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

void EIF_Minit107 (void)
{
	GTCX
	RTOTS (1797,F107_1797)
}


#ifdef __cplusplus
}
#endif
