# The Alan Randoms Project (TARP)

Author: **mvac7**

Architecture: **MSX** 

Format: **ROM 16K (h4000)** 

Programming language: **C**

mail: mvac7303b@gmail.com



## Description:

This software is an AY-3-8910 groovebox, with functions for random generation of 
rhythm and melody patterns.

It is designed to be played live. 
It does not contain tools to edit sequences of various patterns, nor to load and 
save them.

The first version (0.9b) was presented in the Karoshi MSX Community eXperimental 
Sound Mini-compo 2012 contest.

http://karoshi.auic.es/index.php/topic,2294.0.html



## Requirements: 

A standard MSX computer with 16K RAM.

For compile:

* SDCC v3.9 http://sdcc.sourceforge.net/ 
* Hex2bin v2.5 http://hex2bin.sourceforge.net/



## For run:

* you can record to a flashrom 
* from disk using tools: ODO, loadrom, execrom, etc. 
* from cassette using WAVeR or similar tool.



## How does it work?

To start, press TAB to make it generate a random pattern and then press Return.


On the main screen, you will see on the left, the control area, where you can 
change settings using the cursor keys and activate some functions using a keys. 

On the right, there is a rotary vumeter for the drum and melody channels, and 
the pattern data is shown below.

The control area is divided into three parts:

### Song:
 
Contains the speed controller. It is based on VBLANK cycles.
1 = very fast; 8 = quite slow.


### Drums:
Control of the drum pattern. Contains a switch to change the drum set. 

The set is composed of three instruments: Kick (green), Snare (red) and Hi (cyan). 



### Tone:
 
Tone generator control based on two square wave oscillators.

You can disable generator B by pressing the "A + B" switcher and you can modify 
the frequency offset from the "OFFS" field (0 to 255). 

It contains a software envelope generator with 8 different waveforms, which can 
modify the parameters of speed or whether cyclical. It also includes a control 
for changing octave (1-6), and a control to increase or reduce notes of the 
pattern.



### List of keys:

#### Main Screen:

* [RETURN] It goes into Play mode and moves to the first step of the sequence. 
* [STOP] Stop the song.
* [F1] Drums audio On/Off
* [F2] Tone audio On/Off
* [TAB] Random Drums & Tone patterns
* [CTRL] Random Drums pattern
* [SHIFT] Random Tone pattern
* [1] Play the first 2 steps
* [2] Play the first 4 steps
* [3] Play the first 8 steps
* [4] Restore to 16 steps
* [BS] Play previous pattern
* [SELECT] Drums set: Normal/Casio
* [Up] Menu cursor up.
* [Down] Menu cursor down.
* [Left] Switch left or value down
* [Right] Switch right or value up
* [Ins] Octave Up
* [Del] Octave Down
* [,/<] Note Up
* [./>] Note Down
* [HOME] Show Help screen

#### Help Screen:

* Cursor/Joystick [Up] Up scroll text
* Cursor/Joystick [Down] Down scroll text
* [ESC] Return to main screen
