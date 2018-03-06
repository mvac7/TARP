/* =============================================================================
   VDP_TMS9918.h
   v1.0 (14 February 2014)
   Description:
     Header for VDP TMS9918 MSXBIOS Lib.
============================================================================= */
#ifndef  __VDP_TMS9918_H__
#define  __VDP_TMS9918_H__

#include "newTypes.h"


//system vars
#define RG0SAV	0xF3DF	//Content of VDP(0) register (R#0)
#define RG1SAV	0xF3E0	//Content of VDP(1) register (R#1)
#define RG2SAV	0xF3E1	//Content of VDP(2) register (R#2)
#define RG3SAV	0xF3E2	//Content of VDP(3) register (R#3)
#define RG4SAV	0xF3E3	//Content of VDP(4) register (R#4)
#define RG5SAV	0xF3E4	//Content of VDP(5) register (R#5)
#define RG6SAV	0xF3E5	//Content of VDP(6) register (R#6)
#define RG7SAV	0xF3E6	//Content of VDP(7) register (R#7)
#define FORCLR  0xF3E9 //foreground colour
#define BAKCLR  0xF3EA //Background colour
#define BDRCLR  0xF3EB //Border colour


//VDP Ports  
#define VDPVRAM   0x98  //VRAM Data (Read/Write)
#define VDPSTATUS 0x99  //VDP Status Registers

//BIOS info by MSX Assembly Page
//http://map.grauw.nl/resources/msxbios.php
#define DISSCR    0x0041 //inhibits the screen display
#define ENASCR    0x0044 //displays the screen
#define WRTVDP    0x0047 //write data in the VDP-register
#define RDVRM     0x004A //Reads the content of VRAM
#define WRTVRM    0x004D //Writes data in VRAM
#define SETRD     0x0050 //Enable VDP to read
#define SETWRT    0x0053 //Enable VDP to write
#define FILVRM    0x0056 //fill VRAM with value
#define LDIRMV    0x0059 //Block transfer to memory from VRAM
#define LDIRVM    0x005C //Block transfer to VRAM from memory
#define CHGMOD    0x005F //Switches to given screenmode
#define CHGCLR    0x0062 //Changes the screencolors
#define CLRSPR    0x0069 //Initialises all sprites
#define INITXT    0x006C //Switches to SCREEN 0 (text screen with 40 * 24 characters)
#define INIT32    0x006F //Switches to SCREEN 1 (text screen with 32*24 characters)
#define INIGRP    0x0072 //Switches to SCREEN 2 (high resolution screen with 256*192 pixels)
#define INIMLT    0x0075 //Switches to SCREEN 3 (multi-color screen 64*48 pixels)
#define SETTXT    0x0078 //Switches to VDP in SCREEN 0 mode
#define SETT32    0x007B //Switches VDP in SCREEN mode 1
#define SETGRP    0x007E //Switches VDP to SCREEN 2 mode
#define SETMLT    0x0081 //Switches VDP to SCREEN 3 mode
#define CALPAT    0x0084 //Returns the address of the sprite pattern table
#define CALATR    0x0087 //Returns the address of the sprite attribute table
#define GSPSIZ    0x008A //Returns current sprite size
#define GRPPRT    0x008D //Displays a character on the graphic screen

// screen modes
#define TXT40  0  // text mode       (sc0)
#define TXT32  1  // graphics 1 mode (sc1)
#define GRAPH1 2  // graphics 2 mode (sc2)
#define GRAPH2 3  // multicolor mode (sc3)


//screen modes
#define T1 0  //screen 0
#define M1 1  //screen 1
#define M2 2  //screen 2
#define MC 3  //screen 3
#define M3 4  //screen 4



// palette color codes
#define TRANSPARENT   0
#define BLACK         1
#define GREEN         2
#define LIGHT_GREEN   3
#define DARK_BLUE     4
#define LIGHT_BLUE    5
#define DARK_RED      6
#define CYAN          7
#define RED           8
#define LIGHT_RED     9
#define DARK_YELLOW  10
#define LIGHT_YELLOW 11
#define DARK_GREEN   12
#define MAGENTA      13
#define GRAY         14
#define GREY         14
#define WHITE        15

// VRAM address tables screen 0 TXT40
#define BASE0 0x0000 // base 0 name table
#define BASE2 0x0800 // base 2 character pattern table

// VRAM address tables screen 1 TXT32
#define BASE5 0x1800 // base 5 name table
#define BASE6 0x2000 // base 6 color table
#define BASE7 0x0000 // base 7 character pattern table
#define BASE8 0x1B00 // base 8 sprite attribute table
#define BASE9 0x3800 // base 9 sprite pattern table

// VRAM address tables screen 2 GRAPH1
#define BASE10 0x1800 // base 10 name table
#define BASE11 0x2000 // base 11 color table
#define BASE12 0x0000 // base 12 character pattern table
#define BASE13 0x1B00 // base 13 sprite attribute table
#define BASE14 0x3800 // base 14 sprite pattern table

// VRAM address tables screen 3 GRAPH2
#define BASE15 0x0800 // base 15 name table
#define BASE17 0x0000 // base 17 character pattern table
#define BASE18 0x1B00 // base 18 sprite attribute table
#define BASE19 0x3800 // base 19 sprite pattern table

#define BANK0  0x0000
#define BANK1  0x0800
#define BANK2  0x1000





/* =============================================================================
 screen
 Function : Sets the display mode of the screen. 
 Input    : (char) - number of screen mode
============================================================================= */
extern void SCREEN(char);


/* =============================================================================
 color
 Function : Specifies the foreground color, background and ink colors. 
 Input    : (char) - ink color
            (char) - background color
            (char) - border color     
============================================================================= */
extern void COLOR(char, char, char);


/* =============================================================================
 vpoke
 Description : Writes a byte to the video RAM. 
 Input  : (uint) - VRAM address
          (char) - value 
============================================================================= */
extern void VPOKE(uint, char);


/* =============================================================================
 vpeek
 Function : Reads data from the video RAM. 
 Input    : (uint) - VRAM address
 Output   : (char) - value
============================================================================= */ 
extern char VPEEK(uint);


/* =============================================================================
 fillVRAM                               
 Function : Fill a large area of the VRAM of the same byte.
            Llena un area de la RAM de video de un mismo byte.
 Input    : (uint) - address of VRAM
            (uint) - blocklength
            (char) - Value to fill.
============================================================================= */
extern void FillVRAM(uint, uint, char);


/* =============================================================================
 copy2VRAM
 Function : Block transfer from memory to VRAM 
 Input    : (uint) address of RAM
            (uint) address of VRAM
            (uint) blocklength
============================================================================= */
extern void CopyToVRAM(uint, uint, uint);


/* =============================================================================
 copyFromVRAM
 Function : Block transfer from VRAM to memory
 Input    : (uint) address of VRAM                     
            (uint) address of RAM
            (uint) blocklength            
============================================================================= */
extern void CopyFromVRAM(uint, uint, uint);


/* =============================================================================
 setVDP
 Function : writes a value in VDP reg
 Input    : (char) VDP reg                     
            (char) value            
============================================================================= */
extern void SetVDP(char, char);


#endif