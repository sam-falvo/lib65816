CC      := gcc
CCFLAGS := -c -O2 -fomit-frame-pointer $(CCOPTS)
LD      := gcc
LDFLAGS :=

PREFIX  := /Programs/Kestrel/1
LIBPATH := $(PREFIX)/lib
INCPATH := $(PREFIX)/include

DELETE  := rm -rf

