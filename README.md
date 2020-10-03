# The Alan Randoms Project (TARP)

Author: **mvac7**

Architecture: **MSX** 

Format: **ROM 16K (h4000)** 

Programming language: **C**

mail: mvac7303b@gmail.com



## Description:

This software is an AY-3-8910 groovebox, with functions for random generation of 
rhythm and melody patterns.

It is only used for playing live, so it does not contain tools for editing sequences of various patterns, or for loading and save them.

Use it in your Jam sessions, add effect generators and enjoy!

The first version (0.9b) was presented in the Karoshi MSX Community eXperimental 
Sound Minicompo 2012 contest.

http://karoshi.auic.es/index.php/topic,2294.0.html

![TARPv1_screenshot_main_x2](https://user-images.githubusercontent.com/5410950/94923536-4b61de80-04bc-11eb-8896-8bdf73d06d1c.png)



## Requirements: 

A standard MSX computer with 16K RAM.

To compile:

* SDCC v3.9 http://sdcc.sourceforge.net/ 
* Hex2bin v2.5 http://hex2bin.sourceforge.net/



## To run:

* You can record it to a FlashROM 
* From disk using tools like ODO, loadrom, execrom, etc. 
* From cassette using WAVeR or a similar tool.



## How does it work?

To start, press TAB to make it generate a random pattern and then press Return.

On the main screen, you will see on the left the control area. There you can 
change settings using the cursor keys and activate some functions using a keys. 

On the right, there is a rotary vumeter for the drum and melody channels, and 
the pattern data is shown below.

The control area is divided into three parts:

### Song:
 
Contains the speed controller. It is based on VBLANK cycles.
1 = very fast; 8 = quite slow.


### Rhythm:
Control of the drum pattern. Contains a switch to change between two percussion
kits: Standard or similar to the Casio PT series. 

The kit is composed of three instruments: Kick (green), Snare (red) and Hi Hat (cyan). 



### Melody:
 
Tone generator control based on two square wave oscillators.

You can disable the generator B by pressing the "A + B" switcher and you can
modify the frequency offset from the "OFFS" field (0 to 255). 

It contains a software envelope generator with 8 different waveforms, which can 
modify the parameters of speed or whether cyclical. It also includes a control 
for changing octave (1-6), and a control to increase or reduce notes of the 
pattern.



### List of shortcuts keys:

#### Main Screen:

* [Up] Menu cursor up
* [Down] Menu cursor down
* [Left] Switch left or decrease value
* [Right] Switch right or increase value
* [SPACE] or Joystick Button - Actuate the random buttons or the switchers
* [RETURN] It goes into Play mode and moves to the first step of the sequence 
* [STOP] Stop pattern playback
* [F1] Rhythm channel On/Off
* [F2] Melody channel On/Off
* [TAB] Random Rhythm & Melody patterns
* [CTRL] Random Rhythm pattern
* [SHIFT] Random Melody pattern
* [1] Play the first 2 steps
* [2] Play the first 4 steps
* [3] Play the first 8 steps
* [4] Restore to 16 steps
* [BS] Play previous pattern
* [SELECT] Drums kit: Standard/Casio
* [Ins] Octave Up
* [Del] Octave Down
* [,] Note Up
* [.] Note Down
* [HOME] Show Help screen

#### Help Screen:

* Cursor/Joystick [Up] Up scroll text
* Cursor/Joystick [Down] Down scroll text
* [ESC] Return to main screen
