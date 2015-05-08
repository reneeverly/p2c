/* Header for module GENERAL_1, generated by p2c */
#ifndef GENERAL_1_H
#define GENERAL_1_H



#ifndef IODECLARATIONS_H
#include <p2c/iodecl.h>
#endif



#ifdef GENERAL_1_G
# define vextern
#else
# define vextern extern
#endif
extern Void P_ioinitialize PV( );
extern Void P_iouninitialize PV( );
extern Void P_ioreset PP((int select_code));
extern Void P_readchar PP((int select_code, Char *value));
extern Void P_writechar PP((int select_code, int value));
extern Void P_readword PP((int select_code, long *num));
extern Void P_writeword PP((int select_code, long value));
extern Void set_timeout PP((int select_code, double time));



#undef vextern

#endif /*GENERAL_1_H*/

/* End. */

