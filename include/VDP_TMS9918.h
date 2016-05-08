/* ========================================================================== */
/*                                                                            */
/*   VDP_TMS9918.h                                                            */
/*                                                                            */
/*   Description                                                              */
/*   Opensource library for acces to VDP TMS9918                              */
/* ========================================================================== */
#ifndef  __VDP_TMS9918_H__
#define  __VDP_TMS9918_H__

#include "newTypes.h"


// screen modes - modos de pantalla
#define TXT40 0x00   // text mode       (sc0)
#define TXT32 0x01   // graphics 1 mode (sc1)
#define GRAPH1 0x02  // graphics 2 mode (sc2)
#define GRAPH2 0x03  // multicolor mode (sc3)

// palette color codes by L!T
#define TRANSPARENT 0
#define BLACK       1
#define GREEN       2
#define LIGHT_GREEN 3
#define DARK_BLUE   4
#define LIGHT_BLUE  5
#define DARK_RED    6
#define CYAN        7
#define RED         8
#define LIGHT_RED   9
#define DARK_YELLOW 10
#define LIGHT_YELLOW 11
#define DARK_GREEN  12
#define MAGENTA     13
#define GRAY        14
#define GREY        14
#define WHITE       15

// direcciones tablas VRAM screen 0 TXT40
#define BASE0 0x0000 // base 0 name table (0)
#define BASE2 0x0800 // base 2 character pattern table (2048)

// direcciones tablas VRAM screen 1 TXT32
#define BASE5 0x1800 // base 5 name table (6144)
#define BASE6 0x2000 // base 6 color table (8192)
#define BASE7 0x0000 // base 7 character pattern table (0)
#define BASE8 0x1B00 // base 8 sprite attribute table (6912)
#define BASE9 0x3800 // base 9 sprite pattern table (14336)

// direcciones tablas VRAM screen 2 GRAPH1
#define BASE10 0x1800 // base 10 name table (6144)
#define BASE11 0x2000 // base 11 color table (8192)
#define BASE12 0x0000 // base 12 character pattern table (0)
#define BASE13 0x1B00 // base 13 sprite attribute table (6912)
#define BASE14 0x3800 // base 14 sprite pattern table (14336)

// direcciones tablas VRAM screen 3 GRAPH2
#define BASE15 0x0800 // base 15 name table (2048)
#define BASE17 0x0000 // base 17 character pattern table (0)
#define BASE18 0x1B00 // base 18 sprite attribute table (6912)
#define BASE19 0x3800 // base 19 sprite pattern table (14336)


/* ===========================================================================
 screen
 Function : Sets the display mode of the screen. 
 Input    : mode (char) - number of screen mode
=========================================================================== */
void screen(char mode);

/* ===========================================================================
 color
 Function : Specifies the foreground color, background and area of the edges. 
 Input    : ink    (char) - number of ink color
            border (char) - number of border color     
=========================================================================== */
void color(char ink, char border);

/* ===========================================================================
 vpoke
 Function : Writes a byte to the video RAM. 
 Input    : address (unsigned int) - memory address
            value (unsigned char) - value
 by L!T 
=========================================================================== */
void vpoke(uint address, byte value);


/* ===========================================================================
 vpeek
 Function : Reads data from the video RAM. 
 Input    : address (unsigned int) - memory address
 by L!T 
=========================================================================== */ 
unsigned char vpeek(uint address);


/* ===========================================================================
 vpoke_block
 Escribe un bloque de datos en la VRAM. 
 Write a block of data in the VRAM.
 by Andrear
=========================================================================== */
void vpoke_block(uint address, char* block, uint size);


/* ===========================================================================
fillVRAM (FILVRM - BIOS Address  : #0056)                                
Function : Fill a large area of the VRAM of the same byte.
           Llena un area de la RAM de video de un mismo byte.
Input    : vaddress (unsigned int) - Start address of VRAM
           size (unsigned int) - blocklength
           value (unsigned char) - Value to fill.
=========================================================================== */
void fillVRAM (uint vaddress, uint size, byte value);


/* ===========================================================================
LDIRVM
Address  : #005C
Function : Block transfer from memory to VRAM 
Input    : BC - blocklength
           DE - Start address of VRAM
           HL - Start address of memory
=========================================================================== */
void copy2VRAM(uint address, uint vaddress, uint length);


/* ===========================================================================
LDIRMV
#0059
Function : Block transfer from VRAM to memory
Input    : BC - blocklength                     
           DE - Start address of memory
           HL - Start address of VRAM            
=========================================================================== */
void copyFromVRAM(uint vaddress, uint address, uint length);


// ===========================================================================
// muestra un sprite en la pantalla
// by Andrear
// ===========================================================================
// DEPRECATED
//void put_sprite(byte number, byte xpos, byte ypos, byte color);


/* ===========================================================================
 setSpriteCol

 by L!T           
=========================================================================== */
void setSpriteCol(char num, char col);

/* ===========================================================================
 setSpritePos

 by L!T           
=========================================================================== */
void setSpritePos(char num, byte x, byte y);

/* ===========================================================================
 setSpritePat

 by L!T           
=========================================================================== */
void setSpritePat(char num, char pat);


/* ===========================================================================
 inicializa los sprites en screen2
 initializes the sprites in Screen2
 by Andrear
=========================================================================== */
void setupSprites(char spritesize, char zoom);


#endif