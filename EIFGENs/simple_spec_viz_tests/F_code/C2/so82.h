
#ifndef _C2_so82_
#define _C2_so82_

#ifdef __cplusplus
extern "C" {
#endif

extern void F102_1424(EIF_REFERENCE);
extern void F102_1425(EIF_REFERENCE, EIF_REFERENCE);
extern void eif_sca5 (call_data * a);
extern void eif_sca13 (call_data * a);
extern void eif_scr1 (call_data * a);
extern EIF_REFERENCE F102_1426(EIF_REFERENCE);
extern EIF_INTEGER_32 F102_1427(EIF_REFERENCE);
extern EIF_BOOLEAN F102_1428(EIF_REFERENCE, EIF_REFERENCE);
extern EIF_INTEGER_32 F102_1429(EIF_REFERENCE);
extern void F102_1430(EIF_REFERENCE, EIF_INTEGER_32);
extern void F102_1431(EIF_REFERENCE, EIF_REFERENCE);
extern EIF_INTEGER_32 F102_1432(EIF_REFERENCE);extern EIF_INTEGER_32 address_size();

extern void F102_1433(EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32);extern void set_sock_family(EIF_POINTER, EIF_INTEGER_32);

extern EIF_INTEGER_32 F102_1434(EIF_REFERENCE, EIF_POINTER);extern EIF_INTEGER_32 get_sock_family(EIF_POINTER);

extern void F102_1435(EIF_REFERENCE, EIF_POINTER, EIF_POINTER);extern void set_sock_data(EIF_POINTER, EIF_POINTER);

extern EIF_POINTER F102_1436(EIF_REFERENCE, EIF_POINTER);extern EIF_POINTER get_sock_data(EIF_POINTER);

extern void EIF_Minit82(void);
extern void F303_3910(EIF_REFERENCE, EIF_POINTER, EIF_INTEGER_32);
extern void F1_16(EIF_REFERENCE, EIF_REFERENCE);
extern EIF_BOOLEAN F1_9(EIF_REFERENCE, EIF_REFERENCE);
extern void F303_3908(EIF_REFERENCE, EIF_INTEGER_32);
extern EIF_REFERENCE F1_14(EIF_REFERENCE);
extern EIF_BOOLEAN F303_3917(EIF_REFERENCE, EIF_REFERENCE);
extern EIF_BOOLEAN F1_7(EIF_REFERENCE, EIF_REFERENCE);
extern char *(*R1421[])();
extern char *(*R1422[])();
extern char *(*R1423[])();

#ifdef __cplusplus
}
#endif

#endif
