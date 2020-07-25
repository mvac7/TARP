# The Alan Randoms Project (TARP)

Author: **mvac7**

Architecture: **MSX** 

Format: **ROM 16K (h4000)** 

Programming language: **C**

mail: mvac7303b@gmail.com



## Requirements: 

* SDCC v3.9 http://sdcc.sourceforge.net/ 

* Hex2bin v2.5 http://hex2bin.sourceforge.net/



## Description:

This software is a random generator of rhythm and melody patterns.


The first version (0.9b) was presented in the Karoshi MSX Community eXperimental 
Sound Mini-compo 2012 contest.

http://karoshi.auic.es/index.php/topic,2294.0.html



## To run:

Requires a standard MSX computer.
 
* you can record to a flashrom 
* from disk using tools: ODO, loadrom, execrom, etc. 
* from cassette using WAVeR or similar tool.



## How does it work?

On the main screen, you will see on the left, the control area, where you can 
change settings using the cursor keys and activate some functions using a keys. 

On the right, there is a rotary vumeter for the drum and melody channels, and 
the pattern data is shown below.

The control area is divided into three parts:

### Song:
 
Contains the speed controller. It is based on VBLANK cycles.



### Drums:
Control of the drum pattern. Contains a switch to change the drum set. 

The set is composed of three instruments: Kick (green), Snare (red) and Hi (cyan). 



### Tone:
 
Tone generator control based on two square wave oscillators, and a 
controlfrequency offset. It contains a software envelope generator with 8 
different waveforms, which can modify the parameters of speed or whether 
cyclical. It also includes a control for changing octave and a control to 
increase or reduce notes of the pattern.



### List of keys:

* [F1] Drums audio On/Off
* [F2] Tone audio On/Off
* [TAB] Random Drums & Tone patterns.
* [CTRL] Random Drums pattern.
* [SHIFT] Random Tone pattern.
* [RETURN] Enable Drum and Tone audio channels 
* [STOP] Disable Drum and Tone audio channels
* [BS] Play previous pattern
* [SELECT] Drums set: Normal/Casio.
* [Up] Menu cursor up.
* [Down] Menu cursor down.
* [Left] Switch left or value down.
* [Right] Switch right or value up.
* [,/<] Note Up
* [./>] Note Down
