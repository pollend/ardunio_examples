## Programming


avrdude -c <programmer-id> -p attiny85 -b 19200 -U flash:w:main.hex -U lfuse:w:0xe2:m -U hfuse:w:0xdf:m -U efuse:w:0xff:m 

