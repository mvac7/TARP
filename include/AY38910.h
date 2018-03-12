/* =============================================================================
   AY38910.h                                                             
   v1.3 (11 March 2018)
                                                                        
   Description                                                              
     Opensource library for acces to PSG AY-3-8910
     not use the BIOS.
     
   More info from AY-3-8910: 
     http://problemkaputt.de/portar.htm#soundgenerator 
============================================================================= */

#ifndef  __AY38910_H__
#define  __AY38910_H__



// boolean
#ifndef _BOOLEAN
#define _BOOLEAN
  typedef enum {false = 0, true = 1} boolean;
#endif




//envelope shapes
#define ENV_LowerBeat      0 
#define ENV_Upper          4 
#define ENV_LeftSaw        8
#define ENV_LowerTriangle 10 
#define ENV_LowerHold     11 
#define ENV_RightSaw      12
#define ENV_UpperHold     13
#define ENV_UpperTriangle 14 
 


//extern char PSG_type;   // 0 = PSG interno , 1 = MegaflashROM SCC+


/* =============================================================================
  escribe en un registro del PSG
  Write into a register of PSG
 
input: 
  reg (byte) - register number
  value (byte) - register value
============================================================================= */
void Sound(char reg, char value);


/* =============================================================================
  Lee el valor de un registro del PSG
  Read PSG register value

input: 
  reg (byte) - register number

output:
  (byte) - register value 
============================================================================= */
char GetSound(char reg);


/* =============================================================================
  Set Tone Period for any channel
  
input:
  channel (char) - channel number (0, 1 or 2)
  period (uint) - Tone period (0 - 4095) 
============================================================================= */
void SetTonePeriod(char channel, unsigned int period);


/* =============================================================================
  Set Noise Period
  
input:
  period (char) - Tone period (0 - 31) 
============================================================================= */
void SetNoisePeriod(char period);


/* =============================================================================
  Set Envelope Period
  
input:
  period (uint) - Envelope period (0 - 65535) 
============================================================================= */
void SetEnvelopePeriod(unsigned int period);


/* =============================================================================
  Set volume channel
    
input:
  channel (char) - channel number (0, 1 or 2)
  volume (char) - 0-15 or 16 for activate envelope
============================================================================= */
void SetVolume(char channel, char volume);


/* =============================================================================
  Mixer. Enable Tone and Noise channels.
  
input:
  channel (char) - channel number (0, 1 or 2)
  isTone (boolean) - tone state
  isNoise (boolean) - noise state 
============================================================================= */
void SetChannel(char channel, boolean isTone, boolean isNoise);


/* =============================================================================
  Set envelope type.
  Play the sound that in the volume has the value 16 (envelope). 
input:
  shape (char) - Envelope shape (0-15) 
============================================================================= */
void PlaySound(char shape);


#endif