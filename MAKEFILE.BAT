sdcc -mz80 -o build\ --code-loc 0x4020 --data-loc 0xC000 --use-stdout --no-std-crt0 libs\crt0msx.16k.4000.rel libs\functions.rel libs\VDP_TMS9918_BIOS.rel  src\tarp.c
hex2bin -s 0 -l 8000 build\tarp.ihx
pause
