# not the most sophisticated Makefile

# add -DWORDS_BIGENDIAN if necessary
CC = gcc -g
#CC = vc +i386-linux

all:
	$(CC) -Ilib65816 -I. main.c src/*.c -o emu65816
