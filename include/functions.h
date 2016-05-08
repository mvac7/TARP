#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

#include "newTypes.h"

/*
int x;
int y;
byte acel; 
byte speed;
*/


//void joyController(char controller);
//void mouseController();
//void joyController(char controller, int *nx, int *ny, byte *nacel, byte *nspeed);

//byte strLength(char * str);
void vprint(byte posx, byte posy, char* text);
void vPrintLines(byte posx, byte posy, char* text);
void vprintLength(byte posx, byte posy, char* text, byte length);
//void vprintNumber(byte column, byte line, uint aNumber, byte aLength);

byte peek(unsigned int address);
int peek_word(int address);
void poke_word(int address,int value);
void poke(int address, char value);
void poke_block(int address, char* block, int size);

char joystick(unsigned char n);
char joytrig(unsigned char n);

byte inkey();
//void wait_retrace();

void CHKRAM();
void KILBUF();
byte SNSMAT(byte line);

//byte getNumTile(byte xPos, byte yPos);
byte getNumTileByCoordinates(byte xPos, byte yPos);
//int getAddress(byte column, byte line);
int getVAddressByPosition(byte column, byte line);



#endif