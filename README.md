# The Alan Randoms Project (TARP)

Author: mvac7

Version: v0.9b

Architecture: MSX ROM 16k

Programming language: C

Requirements: 

* SDCC v3.6 http://sdcc.sourceforge.net/ 

* Hex2bin v2.2 http://hex2bin.sourceforge.net/

WEB: http://psged.blogspot.com.es/2012/05/alan-randoms-project-v09b.html

mail: mvac7303b@gmail.com

Description: Random music maker

for eXperimental Sound Mini-compo 2012 (Karoshi MSX Community)

http://karoshi.auic.es/index.php/topic,2294.0.html

Format: ROM 16k (h4000)

Requires a standard MSX computer.

To run: 
* you can record to a flashrom 
* from disk using tools: ODO, loadrom, execrom, etc. 
* from cassette using WAVeR or similar tool.

This software is a random generator of rhythm and melody patterns.

On the main screen, you will see on the left, the control area, where you can 
change settings using the cursor keys and activate some functions using control 
keys. On the right, have a rotary vumeter drum for channels and melody, and a 
display pattern data.

The control area is divided into three parts:

# Song: 
Contains tempo controller and random pattern generator (rhythm and melody).

# Drums: 
Control of the drum pattern. Includes random generator and switch to change 
the drum set. The set is composed of three instruments: 
Kick (green), Snare (red) and Hi (cyan). 

# Tone: 
Tone generator control based on two square wave oscillators, and a 
controlfrequency offset. It contains a software envelope generator with 8 
different waveforms, which can modify the parameters of speed or whether 
cyclical. It also includes a generator of random notes, a control for changing 
octave and a control to increase or reduce notes of the pattern.

# List of keys:
* [F1] Random Drums & Tone patterns.
* [F2] Random Drums pattern.
* [F3] Random Tone pattern.
* [F4] Drums audio On/Off.
* [F5] Tone audio On/Off.
* [SELECT] Drums set: Normal/Casio.
* [STOP] Drums & Tone audio off
* [Up] Menu cursor up.
* [Down] Menu cursor down.
* [Left] Switch left or value down.
* [Right] Switch right or value up.
