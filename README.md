# The Alan Randoms Project (TARP)

Author: **mvac7**

Architecture: **MSX** 

Format: **ROM 16K (h4000)** 

Programming language: **C and Z80 Assembler**

Compiler: **SDCC**

mail: mvac7303b@gmail.com


## Sorry!: This text is pending correction of the English translation.

## Description:

TARP is an application for MSX computers to make music with functions for random generation of rhythm and melody patterns.

It is only used for playing live, so it does not contain tools for editing sequences of various patterns, or for loading and save them.

Use it in your Jam sessions, add effect generators and enjoy!

The first version (0.9b) was presented in the Karoshi MSX Community eXperimental Sound Minicompo 2012 contest.

http://web.archive.org/web/20191116233848/http://karoshi.auic.es/index.php/topic,2294.0.html

![TARPv1_screenshot_main_x2](https://raw.githubusercontent.com/mvac7/TARP/master/_GFX/TARPv1_screenshot_main_x2.png)

![TARPv1_screenshot_title_TMS](https://raw.githubusercontent.com/mvac7/TARP/master/_GFX/TARPv1_screenshot_title_TMS.png) ![TARPv1_screenshot_help](https://raw.githubusercontent.com/mvac7/TARP/master/_GFX/TARPv1_screenshot_help.png)



## Requirements: 

### To compile:

* SDCC v3.9 http://sdcc.sourceforge.net/ 
* Hex2bin v2.5 http://hex2bin.sourceforge.net/

**Note:** The project includes a script for Win but it is possible to compile on Linux computers.


### To run:

A standard MSX computer with 64K RAM (or 16K if running from a FlashROM).

On second-generation or higher MSX computers, an enhanced palette is used.

* You can record it to a FlashROM and you can execute in a standard MSX computer with 16K RAM.
* From disk, using tools like ODO, loadrom, execrom, etc. 
* From cassette, using WAVeR or a similar tool.



## Acknowledgments

* **Kun/Paxanga Soft** - Participant in the Experimental Sound Minicompo with his application Noise Raiser. http://paxangasoft.retroinvaders.com/
* **Hap** - Participant in the Experimental Sound Minicompo with his application VDP Music.
* **Fubukimaru** for betatesting
* **Karoshi MSX Community** (RIP 2007-2020)


## User Guide

To start, press TAB to make it generate a random pattern and then press Return.

On the main screen, you will see on the left the control area. There you can change the settings using the cursor keys or any of the joystick and activate some functions. 

On the right, there is a rotary vumeter for the drum and melody channels, and the pattern data is shown below.


The control area is divided into three parts:

### Song:
 
- If you click on the title "Song", it will generate a random pattern, it will activate the Rhythm and Melody channels and if it is not, it will go into Play mode.  
- Random button, generates Rhythm and Melody patterns. 
- Play/Stop button, for change play mode.
- A/B radio button, swap patterns A and B.
- Copy option, copy the current pattern over the opposite. 
- Speed controller. It is based on VBLANK cycles. [1 = very fast; 9 = quite slow]

### Rhythm:

- When you press the title, the status of the rhythm channel changes.
- Random button, generates a Rhythm pattern. 
- Drum Kit switcher. Change between two percussion kits: Standard or similar to the Casio PT series. 

The drums kit is composed of three instruments: Kick (green), Snare (red) and Hi Hat (cyan). 



### Melody:
 
Tone generator control based on two square wave oscillators.

Both are enabled by default, but you can disable generator B and modify the frequency offset.

It contains a software envelope generator with 8 different waveforms, which can modify the parameters of speed or whether cyclical. It also includes a control for changing octave, and a control to increase or reduce notes of the pattern.

List of controls:
- When you press the title, the status of the Melody channel changes.
- Random button, generates a Melody pattern.
- A+B switcher, enables/disables square wave generator B.
- OFFS value entry, frequency offset [0-255]
- ENV selector, choose from 8 types of wave envelopes. `[0 \, 1 /, 2 \/, 3 /\, 4 ¯|_, 5 ~, 6 ¯\_, 7 \-\]`
- Loop switcher, changes the state of the wave envelope loop.

- Octave value entry, increase or reduce octave of the pattern. [1-6]
- Transpose pattern UP or Down, increase or reduce notes of the pattern.



### List of shortcuts keys:

#### Main Screen:

Using keyboard shortcuts you can operate many of the controls in the control area, except those related to the wave envelope, but add controls that affect playback, such as those that limit the size of the pattern.

**Cursor keys and Joystick A or B:**
* [Up] Menu cursor up
* [Down] Menu cursor down
* [Left] Switch left or decrease value
* [Right] Switch right or increase value
* [SPACE] or Joystick Button - Actuate the random buttons or the switchers
 
**Keyboard:**
* [RETURN] It goes into Play mode and moves to the first step of the sequence 
* [STOP] Stop pattern playback
* [F1] Rhythm channel On/Off
* [F2] Melody channel On/Off
* [TAB] Generate random Rhythm and Melody patterns
* [CTRL] Generate random Rhythm pattern
* [SHIFT] Generate random Melody pattern
* [1] Loop first 2 steps
* [2] Loop first 4 steps
* [3] Loop first 8 steps
* [4] Restore pattern length to 16 steps
* [BS] Swap patterns A and B
* [GRAPH] Copy the current pattern over the opposite
* [SELECT] Drums kit: Standard/Casio
* [Ins] Octave Up
* [Del] Octave Down
* [,] Transpose pattern Down
* [.] Transpose pattern Up
* [HOME] Show Help screen

#### Help Screen:

* Cursor/Joystick [Up] Up scroll text
* Cursor/Joystick [Down] Down scroll text
* [ESC] Return to main screen



## Users feelings

> _"For me TARP is like having a great tool in the hands of a 3 year old kid. I have a lot of fun and, eventually, I get really cool sounds even though I have no idea about music. I just mash buttons."_
> [@PresidentFubu](https://twitter.com/PresidentFubu)


## Songs and Jams 

- **TARPatinando** by Fubukimaru --> https://soundcloud.com/fusbus/tarpatinando
- **TARPeando: La venganza** by Fubukimaru --> https://soundcloud.com/fusbus/tarpeando-la-venganza