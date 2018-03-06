/* =============================================================================
   VDP_SPRITE.h
   v1.1 (02 February 2017)
   Description:
      Header for VDP TMS9918 SPRITE MSXBIOS Lib.
      For SDCC 3.6.0 or higher (char type is now unsigned by default) 
============================================================================= */
#ifndef  __VDP_SPRITE_H__
#define  __VDP_SPRITE_H__



/* =============================================================================
 SetSpritesSize
 Function : Set size of the sprites
 Input    : size (char)-> 0 = 8x8;    1 = 16x16                     
============================================================================= */
void SetSpritesSize(char size);



/* =============================================================================
 SetSpritesZoom
 Function : MAG Magnification option for sprites (zoom)
 Input    : Zoom state (char)-> 0/false = MAG 1x; 1/true = MAG 2x
============================================================================= */
void SetSpritesZoom(char zoom);



/* =============================================================================
 ClearSprites
 Function :  Initialises all sprite data The sprite pattern is cleared to
             null, the sprite number to the sprite plane number, the
             sprite colour to the foregtound colour. The vertical location
             of the sprite is set to 209 (mode 0 to 3) or 217 (mode 4 to 8).
============================================================================= */
void ClearSprites();



/* =============================================================================
 PUTSPRITE
 Function : Displays the sprite pattern.
 Input    : 
            (char) sprite plane (0-31) 
            (char) x 
            (char) y
            (char) color (0-15) 
            (char) pattern      
============================================================================= */
void PUTSPRITE(char plane, char x, char y, char color, char pattern);



/* =============================================================================
 setSpritePattern
 Function : Assign a pattern to a sprite plane.
 Input    : 
            (char) sprite plane (0-31) 
            (char) pattern           
============================================================================= */
void SetSpritePattern(char plane, char pattern);



/* =============================================================================
 setSpriteColor
 Function : Assign a color to a sprite plane.
 Input: 
            (char) sprite plane (0-31) 
            (char) color (0-15)         
============================================================================= */
void SetSpriteColor(char plane, char color);



/* =============================================================================
 setSpritePosition
 Function : Assigns the position coordinates of a sprite plane.
 Input: 
            (char) sprite plane (0-31) 
            (char) x 
            (char) y           
============================================================================= */
void SetSpritePosition(char plane, char x, char y);



/* =============================================================================
 setSpriteVisible
 Function : Hides or shows a sprite plane.
 Input: 
            (char) sprite plane (0-31) 
            (char) visible state -> 0 - hidden ; 1 - visible        
============================================================================= */
void SetSpriteVisible(char plane, char state);



/* =============================================================================
 SetEarlyClock
 Function :  Shift sprite 32 pixels to left
 Input    : (char) sprite layer                                
============================================================================= */
void SetEarlyClock(char plane);
//Shift32toLeft



/* =============================================================================
 UnsetEarlyClock
 Function : Restore x position
 Input    : (char) sprite layer                                
============================================================================= */
void UnsetEarlyClock(char plane);
//RestoreSpriteX



#endif