#ifndef __KEYBOARD_H__
#define __KEYBOARD_H__

#include "newTypes.h"



/* =============================================================================
   Clear keyboard buffer
   Borra el buffer del teclado
   OLD name: KILBUF
============================================================================= */
void KillBuffer();



/* =============================================================================
  One character input (waiting) and return its code
  Espera a que se pulse una tecla y devuelve su valor
============================================================================= */
byte INKEY();



/* =============================================================================
   Returns the value of the specified line from the keyboard matrix
   Devuelve el valor de la línea especificada de la matriz del teclado
   Old name: SNSMAT 
============================================================================= */
byte GetKeyMatrix(byte line);




#endif