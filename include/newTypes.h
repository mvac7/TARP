#ifndef  __NEWTYPES_H__
#define  __NEWTYPES_H__

// boolean
typedef enum {false = 0, true = 1} boolean;

// unsigned integer
#ifndef uint
typedef unsigned int uint;
#endif

// unsigned char
#ifndef byte
typedef unsigned char byte;
#endif

// Z80 Wait for interrupt or reset
//#define  HALT __asm halt __endasm

// MSX System Variables
#define CLIKSW	0xF3DB  // 0 disabled / 1 enabled


#endif