/* =============================================================================
   joystick
  (copyleft) 2016 303bcn

  Description:
     joystick C SDCC library
============================================================================= */

#ifndef __JOYSTICK_H__
#define __JOYSTICK_H__



/* =============================================================================
STICK
Returns the joystick status

input: 
  joy -> 0=cursor keys, 1=joystick A, 2=joystick B
output:
  0=inactive
  1=up
  2=up & right
  3=right
  4=down & right
  5=down
  6=down & left
  7=left
  8=up & left 
============================================================================= */
char STICK(char joy);



/* =============================================================================
STRIG
Returns current trigger status

input:
  0 - space key
  1 - button 1 joy A
  2 - button 1 joy B
  3 - button 2 joy A
  4 - button 2 joy B

output:
  0=inactive
  1=when the space key or the joystick/mouse button is pressed down
============================================================================= */
char STRIG(char joy);



#endif