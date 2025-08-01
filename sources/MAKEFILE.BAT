@echo off
REM MAKEFILE for 8/16K ROMs using SDCC compiler
REM CFILENAME = Source name without extension
REM ROMFILENAME = ROM file name without extension
REM ROMSIZE = 2000 for 8KBytes ROM or 4000 for 16KBytes ROM
SET CFILENAME=tarp
SET ROMFILENAME=TARP11
SET CODELOC=0x4020
SET ROMSIZE=4000
SET CRT=libs\crt_MSX816kROM4000.rel
SET LIB0=libs\memory_Z80.rel
SET LIB1=libs\joystick_MSXBIOS.rel
SET LIB2=libs\keyboard_MSXBIOS.rel
SET LIB3=libs\VDP_TMS9918A_MSXBIOS.rel
SET LIB4=libs\VDP_SPRITES.rel
SET LIB5=libs\unRLEWBtoVRAM.rel
SET LIB6=libs\unRLEWBtoRAM.rel
SET LIB7=
SET LIB8=
SET LIB9=
SET LIB10=
SET LIB11=
SET LIB12=
if exist build\ goto NEXTSTEP1
echo MAKEDIR build
md build
:NEXTSTEP1
if exist bin\ goto NEXTSTEP2
echo MAKEDIR bin
md bin
:NEXTSTEP2
REM get SDCC version
sdcc -v
if not exist build\%CFILENAME%.ihx goto COMPILA
del build\%CFILENAME%.ihx
:COMPILA
echo SDCC Compiling...
sdcc -mz80 -o build\ --code-loc %CODELOC% --data-loc 0xC000 --use-stdout --no-std-crt0 %CRT% %LIB0% %LIB1% %LIB2% %LIB3% %LIB4% %LIB5% %LIB6% %LIB7% %LIB8% %LIB9% %LIB10% %LIB11% %LIB12% src\%CFILENAME%.c
if not exist build\%CFILENAME%.ihx goto SALIDA
hex2bin -e bin -l %ROMSIZE% build\%CFILENAME%.ihx
copy build\%CFILENAME%.bin bin\%ROMFILENAME%.ROM
pause
exit /b
:SALIDA
echo ERROR
pause
exit /b