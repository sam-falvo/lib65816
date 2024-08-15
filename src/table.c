/*
 * lib65816/table.c Release 1p1
 * See LICENSE for more details.
 *
 * Code originally from XGS: Apple IIGS Emulator (table.c)
 *
 * Originally written and Copyright (C)1996 by Joshua M. Thompson
 * Copyright (C) 2006 by Samuel A. Falvo II
 *
 * Modified for greater portability and virtual hardware independence.
 */

#include "cputable.h"

typedef void (*fp)(void);

const fp cpu_opcode_table[1300] = {
	e0m1x1_opcode_0x00,
	e0m1x1_opcode_0x01,
	e0m1x1_opcode_0x02,
	e0m1x1_opcode_0x03,
	e0m1x1_opcode_0x04,
	e0m1x1_opcode_0x05,
	e0m1x1_opcode_0x06,
	e0m1x1_opcode_0x07,
	e0m1x1_opcode_0x08,
	e0m1x1_opcode_0x09,
	e0m1x1_opcode_0x0A,
	e0m1x1_opcode_0x0B,
	e0m1x1_opcode_0x0C,
	e0m1x1_opcode_0x0D,
	e0m1x1_opcode_0x0E,
	e0m1x1_opcode_0x0F,
	e0m1x1_opcode_0x10,
	e0m1x1_opcode_0x11,
	e0m1x1_opcode_0x12,
	e0m1x1_opcode_0x13,
	e0m1x1_opcode_0x14,
	e0m1x1_opcode_0x15,
	e0m1x1_opcode_0x16,
	e0m1x1_opcode_0x17,
	e0m1x1_opcode_0x18,
	e0m1x1_opcode_0x19,
	e0m1x1_opcode_0x1A,
	e0m1x1_opcode_0x1B,
	e0m1x1_opcode_0x1C,
	e0m1x1_opcode_0x1D,
	e0m1x1_opcode_0x1E,
	e0m1x1_opcode_0x1F,
	e0m1x1_opcode_0x20,
	e0m1x1_opcode_0x21,
	e0m1x1_opcode_0x22,
	e0m1x1_opcode_0x23,
	e0m1x1_opcode_0x24,
	e0m1x1_opcode_0x25,
	e0m1x1_opcode_0x26,
	e0m1x1_opcode_0x27,
	e0m1x1_opcode_0x28,
	e0m1x1_opcode_0x29,
	e0m1x1_opcode_0x2A,
	e0m1x1_opcode_0x2B,
	e0m1x1_opcode_0x2C,
	e0m1x1_opcode_0x2D,
	e0m1x1_opcode_0x2E,
	e0m1x1_opcode_0x2F,
	e0m1x1_opcode_0x30,
	e0m1x1_opcode_0x31,
	e0m1x1_opcode_0x32,
	e0m1x1_opcode_0x33,
	e0m1x1_opcode_0x34,
	e0m1x1_opcode_0x35,
	e0m1x1_opcode_0x36,
	e0m1x1_opcode_0x37,
	e0m1x1_opcode_0x38,
	e0m1x1_opcode_0x39,
	e0m1x1_opcode_0x3A,
	e0m1x1_opcode_0x3B,
	e0m1x1_opcode_0x3C,
	e0m1x1_opcode_0x3D,
	e0m1x1_opcode_0x3E,
	e0m1x1_opcode_0x3F,
	e0m1x1_opcode_0x40,
	e0m1x1_opcode_0x41,
	e0m1x1_opcode_0x42,
	e0m1x1_opcode_0x43,
	e0m1x1_opcode_0x44,
	e0m1x1_opcode_0x45,
	e0m1x1_opcode_0x46,
	e0m1x1_opcode_0x47,
	e0m1x1_opcode_0x48,
	e0m1x1_opcode_0x49,
	e0m1x1_opcode_0x4A,
	e0m1x1_opcode_0x4B,
	e0m1x1_opcode_0x4C,
	e0m1x1_opcode_0x4D,
	e0m1x1_opcode_0x4E,
	e0m1x1_opcode_0x4F,
	e0m1x1_opcode_0x50,
	e0m1x1_opcode_0x51,
	e0m1x1_opcode_0x52,
	e0m1x1_opcode_0x53,
	e0m1x1_opcode_0x54,
	e0m1x1_opcode_0x55,
	e0m1x1_opcode_0x56,
	e0m1x1_opcode_0x57,
	e0m1x1_opcode_0x58,
	e0m1x1_opcode_0x59,
	e0m1x1_opcode_0x5A,
	e0m1x1_opcode_0x5B,
	e0m1x1_opcode_0x5C,
	e0m1x1_opcode_0x5D,
	e0m1x1_opcode_0x5E,
	e0m1x1_opcode_0x5F,
	e0m1x1_opcode_0x60,
	e0m1x1_opcode_0x61,
	e0m1x1_opcode_0x62,
	e0m1x1_opcode_0x63,
	e0m1x1_opcode_0x64,
	e0m1x1_opcode_0x65,
	e0m1x1_opcode_0x66,
	e0m1x1_opcode_0x67,
	e0m1x1_opcode_0x68,
	e0m1x1_opcode_0x69,
	e0m1x1_opcode_0x6A,
	e0m1x1_opcode_0x6B,
	e0m1x1_opcode_0x6C,
	e0m1x1_opcode_0x6D,
	e0m1x1_opcode_0x6E,
	e0m1x1_opcode_0x6F,
	e0m1x1_opcode_0x70,
	e0m1x1_opcode_0x71,
	e0m1x1_opcode_0x72,
	e0m1x1_opcode_0x73,
	e0m1x1_opcode_0x74,
	e0m1x1_opcode_0x75,
	e0m1x1_opcode_0x76,
	e0m1x1_opcode_0x77,
	e0m1x1_opcode_0x78,
	e0m1x1_opcode_0x79,
	e0m1x1_opcode_0x7A,
	e0m1x1_opcode_0x7B,
	e0m1x1_opcode_0x7C,
	e0m1x1_opcode_0x7D,
	e0m1x1_opcode_0x7E,
	e0m1x1_opcode_0x7F,
	e0m1x1_opcode_0x80,
	e0m1x1_opcode_0x81,
	e0m1x1_opcode_0x82,
	e0m1x1_opcode_0x83,
	e0m1x1_opcode_0x84,
	e0m1x1_opcode_0x85,
	e0m1x1_opcode_0x86,
	e0m1x1_opcode_0x87,
	e0m1x1_opcode_0x88,
	e0m1x1_opcode_0x89,
	e0m1x1_opcode_0x8A,
	e0m1x1_opcode_0x8B,
	e0m1x1_opcode_0x8C,
	e0m1x1_opcode_0x8D,
	e0m1x1_opcode_0x8E,
	e0m1x1_opcode_0x8F,
	e0m1x1_opcode_0x90,
	e0m1x1_opcode_0x91,
	e0m1x1_opcode_0x92,
	e0m1x1_opcode_0x93,
	e0m1x1_opcode_0x94,
	e0m1x1_opcode_0x95,
	e0m1x1_opcode_0x96,
	e0m1x1_opcode_0x97,
	e0m1x1_opcode_0x98,
	e0m1x1_opcode_0x99,
	e0m1x1_opcode_0x9A,
	e0m1x1_opcode_0x9B,
	e0m1x1_opcode_0x9C,
	e0m1x1_opcode_0x9D,
	e0m1x1_opcode_0x9E,
	e0m1x1_opcode_0x9F,
	e0m1x1_opcode_0xA0,
	e0m1x1_opcode_0xA1,
	e0m1x1_opcode_0xA2,
	e0m1x1_opcode_0xA3,
	e0m1x1_opcode_0xA4,
	e0m1x1_opcode_0xA5,
	e0m1x1_opcode_0xA6,
	e0m1x1_opcode_0xA7,
	e0m1x1_opcode_0xA8,
	e0m1x1_opcode_0xA9,
	e0m1x1_opcode_0xAA,
	e0m1x1_opcode_0xAB,
	e0m1x1_opcode_0xAC,
	e0m1x1_opcode_0xAD,
	e0m1x1_opcode_0xAE,
	e0m1x1_opcode_0xAF,
	e0m1x1_opcode_0xB0,
	e0m1x1_opcode_0xB1,
	e0m1x1_opcode_0xB2,
	e0m1x1_opcode_0xB3,
	e0m1x1_opcode_0xB4,
	e0m1x1_opcode_0xB5,
	e0m1x1_opcode_0xB6,
	e0m1x1_opcode_0xB7,
	e0m1x1_opcode_0xB8,
	e0m1x1_opcode_0xB9,
	e0m1x1_opcode_0xBA,
	e0m1x1_opcode_0xBB,
	e0m1x1_opcode_0xBC,
	e0m1x1_opcode_0xBD,
	e0m1x1_opcode_0xBE,
	e0m1x1_opcode_0xBF,
	e0m1x1_opcode_0xC0,
	e0m1x1_opcode_0xC1,
	e0m1x1_opcode_0xC2,
	e0m1x1_opcode_0xC3,
	e0m1x1_opcode_0xC4,
	e0m1x1_opcode_0xC5,
	e0m1x1_opcode_0xC6,
	e0m1x1_opcode_0xC7,
	e0m1x1_opcode_0xC8,
	e0m1x1_opcode_0xC9,
	e0m1x1_opcode_0xCA,
	e0m1x1_opcode_0xCB,
	e0m1x1_opcode_0xCC,
	e0m1x1_opcode_0xCD,
	e0m1x1_opcode_0xCE,
	e0m1x1_opcode_0xCF,
	e0m1x1_opcode_0xD0,
	e0m1x1_opcode_0xD1,
	e0m1x1_opcode_0xD2,
	e0m1x1_opcode_0xD3,
	e0m1x1_opcode_0xD4,
	e0m1x1_opcode_0xD5,
	e0m1x1_opcode_0xD6,
	e0m1x1_opcode_0xD7,
	e0m1x1_opcode_0xD8,
	e0m1x1_opcode_0xD9,
	e0m1x1_opcode_0xDA,
	e0m1x1_opcode_0xDB,
	e0m1x1_opcode_0xDC,
	e0m1x1_opcode_0xDD,
	e0m1x1_opcode_0xDE,
	e0m1x1_opcode_0xDF,
	e0m1x1_opcode_0xE0,
	e0m1x1_opcode_0xE1,
	e0m1x1_opcode_0xE2,
	e0m1x1_opcode_0xE3,
	e0m1x1_opcode_0xE4,
	e0m1x1_opcode_0xE5,
	e0m1x1_opcode_0xE6,
	e0m1x1_opcode_0xE7,
	e0m1x1_opcode_0xE8,
	e0m1x1_opcode_0xE9,
	e0m1x1_opcode_0xEA,
	e0m1x1_opcode_0xEB,
	e0m1x1_opcode_0xEC,
	e0m1x1_opcode_0xED,
	e0m1x1_opcode_0xEE,
	e0m1x1_opcode_0xEF,
	e0m1x1_opcode_0xF0,
	e0m1x1_opcode_0xF1,
	e0m1x1_opcode_0xF2,
	e0m1x1_opcode_0xF3,
	e0m1x1_opcode_0xF4,
	e0m1x1_opcode_0xF5,
	e0m1x1_opcode_0xF6,
	e0m1x1_opcode_0xF7,
	e0m1x1_opcode_0xF8,
	e0m1x1_opcode_0xF9,
	e0m1x1_opcode_0xFA,
	e0m1x1_opcode_0xFB,
	e0m1x1_opcode_0xFC,
	e0m1x1_opcode_0xFD,
	e0m1x1_opcode_0xFE,
	e0m1x1_opcode_0xFF,
	e0m1x1_reset,
	e0m1x1_abort,
	e0m1x1_nmi,
	e0m1x1_irq,
	e0m1x0_opcode_0x00,
	e0m1x0_opcode_0x01,
	e0m1x0_opcode_0x02,
	e0m1x0_opcode_0x03,
	e0m1x0_opcode_0x04,
	e0m1x0_opcode_0x05,
	e0m1x0_opcode_0x06,
	e0m1x0_opcode_0x07,
	e0m1x0_opcode_0x08,
	e0m1x0_opcode_0x09,
	e0m1x0_opcode_0x0A,
	e0m1x0_opcode_0x0B,
	e0m1x0_opcode_0x0C,
	e0m1x0_opcode_0x0D,
	e0m1x0_opcode_0x0E,
	e0m1x0_opcode_0x0F,
	e0m1x0_opcode_0x10,
	e0m1x0_opcode_0x11,
	e0m1x0_opcode_0x12,
	e0m1x0_opcode_0x13,
	e0m1x0_opcode_0x14,
	e0m1x0_opcode_0x15,
	e0m1x0_opcode_0x16,
	e0m1x0_opcode_0x17,
	e0m1x0_opcode_0x18,
	e0m1x0_opcode_0x19,
	e0m1x0_opcode_0x1A,
	e0m1x0_opcode_0x1B,
	e0m1x0_opcode_0x1C,
	e0m1x0_opcode_0x1D,
	e0m1x0_opcode_0x1E,
	e0m1x0_opcode_0x1F,
	e0m1x0_opcode_0x20,
	e0m1x0_opcode_0x21,
	e0m1x0_opcode_0x22,
	e0m1x0_opcode_0x23,
	e0m1x0_opcode_0x24,
	e0m1x0_opcode_0x25,
	e0m1x0_opcode_0x26,
	e0m1x0_opcode_0x27,
	e0m1x0_opcode_0x28,
	e0m1x0_opcode_0x29,
	e0m1x0_opcode_0x2A,
	e0m1x0_opcode_0x2B,
	e0m1x0_opcode_0x2C,
	e0m1x0_opcode_0x2D,
	e0m1x0_opcode_0x2E,
	e0m1x0_opcode_0x2F,
	e0m1x0_opcode_0x30,
	e0m1x0_opcode_0x31,
	e0m1x0_opcode_0x32,
	e0m1x0_opcode_0x33,
	e0m1x0_opcode_0x34,
	e0m1x0_opcode_0x35,
	e0m1x0_opcode_0x36,
	e0m1x0_opcode_0x37,
	e0m1x0_opcode_0x38,
	e0m1x0_opcode_0x39,
	e0m1x0_opcode_0x3A,
	e0m1x0_opcode_0x3B,
	e0m1x0_opcode_0x3C,
	e0m1x0_opcode_0x3D,
	e0m1x0_opcode_0x3E,
	e0m1x0_opcode_0x3F,
	e0m1x0_opcode_0x40,
	e0m1x0_opcode_0x41,
	e0m1x0_opcode_0x42,
	e0m1x0_opcode_0x43,
	e0m1x0_opcode_0x44,
	e0m1x0_opcode_0x45,
	e0m1x0_opcode_0x46,
	e0m1x0_opcode_0x47,
	e0m1x0_opcode_0x48,
	e0m1x0_opcode_0x49,
	e0m1x0_opcode_0x4A,
	e0m1x0_opcode_0x4B,
	e0m1x0_opcode_0x4C,
	e0m1x0_opcode_0x4D,
	e0m1x0_opcode_0x4E,
	e0m1x0_opcode_0x4F,
	e0m1x0_opcode_0x50,
	e0m1x0_opcode_0x51,
	e0m1x0_opcode_0x52,
	e0m1x0_opcode_0x53,
	e0m1x0_opcode_0x54,
	e0m1x0_opcode_0x55,
	e0m1x0_opcode_0x56,
	e0m1x0_opcode_0x57,
	e0m1x0_opcode_0x58,
	e0m1x0_opcode_0x59,
	e0m1x0_opcode_0x5A,
	e0m1x0_opcode_0x5B,
	e0m1x0_opcode_0x5C,
	e0m1x0_opcode_0x5D,
	e0m1x0_opcode_0x5E,
	e0m1x0_opcode_0x5F,
	e0m1x0_opcode_0x60,
	e0m1x0_opcode_0x61,
	e0m1x0_opcode_0x62,
	e0m1x0_opcode_0x63,
	e0m1x0_opcode_0x64,
	e0m1x0_opcode_0x65,
	e0m1x0_opcode_0x66,
	e0m1x0_opcode_0x67,
	e0m1x0_opcode_0x68,
	e0m1x0_opcode_0x69,
	e0m1x0_opcode_0x6A,
	e0m1x0_opcode_0x6B,
	e0m1x0_opcode_0x6C,
	e0m1x0_opcode_0x6D,
	e0m1x0_opcode_0x6E,
	e0m1x0_opcode_0x6F,
	e0m1x0_opcode_0x70,
	e0m1x0_opcode_0x71,
	e0m1x0_opcode_0x72,
	e0m1x0_opcode_0x73,
	e0m1x0_opcode_0x74,
	e0m1x0_opcode_0x75,
	e0m1x0_opcode_0x76,
	e0m1x0_opcode_0x77,
	e0m1x0_opcode_0x78,
	e0m1x0_opcode_0x79,
	e0m1x0_opcode_0x7A,
	e0m1x0_opcode_0x7B,
	e0m1x0_opcode_0x7C,
	e0m1x0_opcode_0x7D,
	e0m1x0_opcode_0x7E,
	e0m1x0_opcode_0x7F,
	e0m1x0_opcode_0x80,
	e0m1x0_opcode_0x81,
	e0m1x0_opcode_0x82,
	e0m1x0_opcode_0x83,
	e0m1x0_opcode_0x84,
	e0m1x0_opcode_0x85,
	e0m1x0_opcode_0x86,
	e0m1x0_opcode_0x87,
	e0m1x0_opcode_0x88,
	e0m1x0_opcode_0x89,
	e0m1x0_opcode_0x8A,
	e0m1x0_opcode_0x8B,
	e0m1x0_opcode_0x8C,
	e0m1x0_opcode_0x8D,
	e0m1x0_opcode_0x8E,
	e0m1x0_opcode_0x8F,
	e0m1x0_opcode_0x90,
	e0m1x0_opcode_0x91,
	e0m1x0_opcode_0x92,
	e0m1x0_opcode_0x93,
	e0m1x0_opcode_0x94,
	e0m1x0_opcode_0x95,
	e0m1x0_opcode_0x96,
	e0m1x0_opcode_0x97,
	e0m1x0_opcode_0x98,
	e0m1x0_opcode_0x99,
	e0m1x0_opcode_0x9A,
	e0m1x0_opcode_0x9B,
	e0m1x0_opcode_0x9C,
	e0m1x0_opcode_0x9D,
	e0m1x0_opcode_0x9E,
	e0m1x0_opcode_0x9F,
	e0m1x0_opcode_0xA0,
	e0m1x0_opcode_0xA1,
	e0m1x0_opcode_0xA2,
	e0m1x0_opcode_0xA3,
	e0m1x0_opcode_0xA4,
	e0m1x0_opcode_0xA5,
	e0m1x0_opcode_0xA6,
	e0m1x0_opcode_0xA7,
	e0m1x0_opcode_0xA8,
	e0m1x0_opcode_0xA9,
	e0m1x0_opcode_0xAA,
	e0m1x0_opcode_0xAB,
	e0m1x0_opcode_0xAC,
	e0m1x0_opcode_0xAD,
	e0m1x0_opcode_0xAE,
	e0m1x0_opcode_0xAF,
	e0m1x0_opcode_0xB0,
	e0m1x0_opcode_0xB1,
	e0m1x0_opcode_0xB2,
	e0m1x0_opcode_0xB3,
	e0m1x0_opcode_0xB4,
	e0m1x0_opcode_0xB5,
	e0m1x0_opcode_0xB6,
	e0m1x0_opcode_0xB7,
	e0m1x0_opcode_0xB8,
	e0m1x0_opcode_0xB9,
	e0m1x0_opcode_0xBA,
	e0m1x0_opcode_0xBB,
	e0m1x0_opcode_0xBC,
	e0m1x0_opcode_0xBD,
	e0m1x0_opcode_0xBE,
	e0m1x0_opcode_0xBF,
	e0m1x0_opcode_0xC0,
	e0m1x0_opcode_0xC1,
	e0m1x0_opcode_0xC2,
	e0m1x0_opcode_0xC3,
	e0m1x0_opcode_0xC4,
	e0m1x0_opcode_0xC5,
	e0m1x0_opcode_0xC6,
	e0m1x0_opcode_0xC7,
	e0m1x0_opcode_0xC8,
	e0m1x0_opcode_0xC9,
	e0m1x0_opcode_0xCA,
	e0m1x0_opcode_0xCB,
	e0m1x0_opcode_0xCC,
	e0m1x0_opcode_0xCD,
	e0m1x0_opcode_0xCE,
	e0m1x0_opcode_0xCF,
	e0m1x0_opcode_0xD0,
	e0m1x0_opcode_0xD1,
	e0m1x0_opcode_0xD2,
	e0m1x0_opcode_0xD3,
	e0m1x0_opcode_0xD4,
	e0m1x0_opcode_0xD5,
	e0m1x0_opcode_0xD6,
	e0m1x0_opcode_0xD7,
	e0m1x0_opcode_0xD8,
	e0m1x0_opcode_0xD9,
	e0m1x0_opcode_0xDA,
	e0m1x0_opcode_0xDB,
	e0m1x0_opcode_0xDC,
	e0m1x0_opcode_0xDD,
	e0m1x0_opcode_0xDE,
	e0m1x0_opcode_0xDF,
	e0m1x0_opcode_0xE0,
	e0m1x0_opcode_0xE1,
	e0m1x0_opcode_0xE2,
	e0m1x0_opcode_0xE3,
	e0m1x0_opcode_0xE4,
	e0m1x0_opcode_0xE5,
	e0m1x0_opcode_0xE6,
	e0m1x0_opcode_0xE7,
	e0m1x0_opcode_0xE8,
	e0m1x0_opcode_0xE9,
	e0m1x0_opcode_0xEA,
	e0m1x0_opcode_0xEB,
	e0m1x0_opcode_0xEC,
	e0m1x0_opcode_0xED,
	e0m1x0_opcode_0xEE,
	e0m1x0_opcode_0xEF,
	e0m1x0_opcode_0xF0,
	e0m1x0_opcode_0xF1,
	e0m1x0_opcode_0xF2,
	e0m1x0_opcode_0xF3,
	e0m1x0_opcode_0xF4,
	e0m1x0_opcode_0xF5,
	e0m1x0_opcode_0xF6,
	e0m1x0_opcode_0xF7,
	e0m1x0_opcode_0xF8,
	e0m1x0_opcode_0xF9,
	e0m1x0_opcode_0xFA,
	e0m1x0_opcode_0xFB,
	e0m1x0_opcode_0xFC,
	e0m1x0_opcode_0xFD,
	e0m1x0_opcode_0xFE,
	e0m1x0_opcode_0xFF,
	e0m1x0_reset,
	e0m1x0_abort,
	e0m1x0_nmi,
	e0m1x0_irq,
	e0m0x1_opcode_0x00,
	e0m0x1_opcode_0x01,
	e0m0x1_opcode_0x02,
	e0m0x1_opcode_0x03,
	e0m0x1_opcode_0x04,
	e0m0x1_opcode_0x05,
	e0m0x1_opcode_0x06,
	e0m0x1_opcode_0x07,
	e0m0x1_opcode_0x08,
	e0m0x1_opcode_0x09,
	e0m0x1_opcode_0x0A,
	e0m0x1_opcode_0x0B,
	e0m0x1_opcode_0x0C,
	e0m0x1_opcode_0x0D,
	e0m0x1_opcode_0x0E,
	e0m0x1_opcode_0x0F,
	e0m0x1_opcode_0x10,
	e0m0x1_opcode_0x11,
	e0m0x1_opcode_0x12,
	e0m0x1_opcode_0x13,
	e0m0x1_opcode_0x14,
	e0m0x1_opcode_0x15,
	e0m0x1_opcode_0x16,
	e0m0x1_opcode_0x17,
	e0m0x1_opcode_0x18,
	e0m0x1_opcode_0x19,
	e0m0x1_opcode_0x1A,
	e0m0x1_opcode_0x1B,
	e0m0x1_opcode_0x1C,
	e0m0x1_opcode_0x1D,
	e0m0x1_opcode_0x1E,
	e0m0x1_opcode_0x1F,
	e0m0x1_opcode_0x20,
	e0m0x1_opcode_0x21,
	e0m0x1_opcode_0x22,
	e0m0x1_opcode_0x23,
	e0m0x1_opcode_0x24,
	e0m0x1_opcode_0x25,
	e0m0x1_opcode_0x26,
	e0m0x1_opcode_0x27,
	e0m0x1_opcode_0x28,
	e0m0x1_opcode_0x29,
	e0m0x1_opcode_0x2A,
	e0m0x1_opcode_0x2B,
	e0m0x1_opcode_0x2C,
	e0m0x1_opcode_0x2D,
	e0m0x1_opcode_0x2E,
	e0m0x1_opcode_0x2F,
	e0m0x1_opcode_0x30,
	e0m0x1_opcode_0x31,
	e0m0x1_opcode_0x32,
	e0m0x1_opcode_0x33,
	e0m0x1_opcode_0x34,
	e0m0x1_opcode_0x35,
	e0m0x1_opcode_0x36,
	e0m0x1_opcode_0x37,
	e0m0x1_opcode_0x38,
	e0m0x1_opcode_0x39,
	e0m0x1_opcode_0x3A,
	e0m0x1_opcode_0x3B,
	e0m0x1_opcode_0x3C,
	e0m0x1_opcode_0x3D,
	e0m0x1_opcode_0x3E,
	e0m0x1_opcode_0x3F,
	e0m0x1_opcode_0x40,
	e0m0x1_opcode_0x41,
	e0m0x1_opcode_0x42,
	e0m0x1_opcode_0x43,
	e0m0x1_opcode_0x44,
	e0m0x1_opcode_0x45,
	e0m0x1_opcode_0x46,
	e0m0x1_opcode_0x47,
	e0m0x1_opcode_0x48,
	e0m0x1_opcode_0x49,
	e0m0x1_opcode_0x4A,
	e0m0x1_opcode_0x4B,
	e0m0x1_opcode_0x4C,
	e0m0x1_opcode_0x4D,
	e0m0x1_opcode_0x4E,
	e0m0x1_opcode_0x4F,
	e0m0x1_opcode_0x50,
	e0m0x1_opcode_0x51,
	e0m0x1_opcode_0x52,
	e0m0x1_opcode_0x53,
	e0m0x1_opcode_0x54,
	e0m0x1_opcode_0x55,
	e0m0x1_opcode_0x56,
	e0m0x1_opcode_0x57,
	e0m0x1_opcode_0x58,
	e0m0x1_opcode_0x59,
	e0m0x1_opcode_0x5A,
	e0m0x1_opcode_0x5B,
	e0m0x1_opcode_0x5C,
	e0m0x1_opcode_0x5D,
	e0m0x1_opcode_0x5E,
	e0m0x1_opcode_0x5F,
	e0m0x1_opcode_0x60,
	e0m0x1_opcode_0x61,
	e0m0x1_opcode_0x62,
	e0m0x1_opcode_0x63,
	e0m0x1_opcode_0x64,
	e0m0x1_opcode_0x65,
	e0m0x1_opcode_0x66,
	e0m0x1_opcode_0x67,
	e0m0x1_opcode_0x68,
	e0m0x1_opcode_0x69,
	e0m0x1_opcode_0x6A,
	e0m0x1_opcode_0x6B,
	e0m0x1_opcode_0x6C,
	e0m0x1_opcode_0x6D,
	e0m0x1_opcode_0x6E,
	e0m0x1_opcode_0x6F,
	e0m0x1_opcode_0x70,
	e0m0x1_opcode_0x71,
	e0m0x1_opcode_0x72,
	e0m0x1_opcode_0x73,
	e0m0x1_opcode_0x74,
	e0m0x1_opcode_0x75,
	e0m0x1_opcode_0x76,
	e0m0x1_opcode_0x77,
	e0m0x1_opcode_0x78,
	e0m0x1_opcode_0x79,
	e0m0x1_opcode_0x7A,
	e0m0x1_opcode_0x7B,
	e0m0x1_opcode_0x7C,
	e0m0x1_opcode_0x7D,
	e0m0x1_opcode_0x7E,
	e0m0x1_opcode_0x7F,
	e0m0x1_opcode_0x80,
	e0m0x1_opcode_0x81,
	e0m0x1_opcode_0x82,
	e0m0x1_opcode_0x83,
	e0m0x1_opcode_0x84,
	e0m0x1_opcode_0x85,
	e0m0x1_opcode_0x86,
	e0m0x1_opcode_0x87,
	e0m0x1_opcode_0x88,
	e0m0x1_opcode_0x89,
	e0m0x1_opcode_0x8A,
	e0m0x1_opcode_0x8B,
	e0m0x1_opcode_0x8C,
	e0m0x1_opcode_0x8D,
	e0m0x1_opcode_0x8E,
	e0m0x1_opcode_0x8F,
	e0m0x1_opcode_0x90,
	e0m0x1_opcode_0x91,
	e0m0x1_opcode_0x92,
	e0m0x1_opcode_0x93,
	e0m0x1_opcode_0x94,
	e0m0x1_opcode_0x95,
	e0m0x1_opcode_0x96,
	e0m0x1_opcode_0x97,
	e0m0x1_opcode_0x98,
	e0m0x1_opcode_0x99,
	e0m0x1_opcode_0x9A,
	e0m0x1_opcode_0x9B,
	e0m0x1_opcode_0x9C,
	e0m0x1_opcode_0x9D,
	e0m0x1_opcode_0x9E,
	e0m0x1_opcode_0x9F,
	e0m0x1_opcode_0xA0,
	e0m0x1_opcode_0xA1,
	e0m0x1_opcode_0xA2,
	e0m0x1_opcode_0xA3,
	e0m0x1_opcode_0xA4,
	e0m0x1_opcode_0xA5,
	e0m0x1_opcode_0xA6,
	e0m0x1_opcode_0xA7,
	e0m0x1_opcode_0xA8,
	e0m0x1_opcode_0xA9,
	e0m0x1_opcode_0xAA,
	e0m0x1_opcode_0xAB,
	e0m0x1_opcode_0xAC,
	e0m0x1_opcode_0xAD,
	e0m0x1_opcode_0xAE,
	e0m0x1_opcode_0xAF,
	e0m0x1_opcode_0xB0,
	e0m0x1_opcode_0xB1,
	e0m0x1_opcode_0xB2,
	e0m0x1_opcode_0xB3,
	e0m0x1_opcode_0xB4,
	e0m0x1_opcode_0xB5,
	e0m0x1_opcode_0xB6,
	e0m0x1_opcode_0xB7,
	e0m0x1_opcode_0xB8,
	e0m0x1_opcode_0xB9,
	e0m0x1_opcode_0xBA,
	e0m0x1_opcode_0xBB,
	e0m0x1_opcode_0xBC,
	e0m0x1_opcode_0xBD,
	e0m0x1_opcode_0xBE,
	e0m0x1_opcode_0xBF,
	e0m0x1_opcode_0xC0,
	e0m0x1_opcode_0xC1,
	e0m0x1_opcode_0xC2,
	e0m0x1_opcode_0xC3,
	e0m0x1_opcode_0xC4,
	e0m0x1_opcode_0xC5,
	e0m0x1_opcode_0xC6,
	e0m0x1_opcode_0xC7,
	e0m0x1_opcode_0xC8,
	e0m0x1_opcode_0xC9,
	e0m0x1_opcode_0xCA,
	e0m0x1_opcode_0xCB,
	e0m0x1_opcode_0xCC,
	e0m0x1_opcode_0xCD,
	e0m0x1_opcode_0xCE,
	e0m0x1_opcode_0xCF,
	e0m0x1_opcode_0xD0,
	e0m0x1_opcode_0xD1,
	e0m0x1_opcode_0xD2,
	e0m0x1_opcode_0xD3,
	e0m0x1_opcode_0xD4,
	e0m0x1_opcode_0xD5,
	e0m0x1_opcode_0xD6,
	e0m0x1_opcode_0xD7,
	e0m0x1_opcode_0xD8,
	e0m0x1_opcode_0xD9,
	e0m0x1_opcode_0xDA,
	e0m0x1_opcode_0xDB,
	e0m0x1_opcode_0xDC,
	e0m0x1_opcode_0xDD,
	e0m0x1_opcode_0xDE,
	e0m0x1_opcode_0xDF,
	e0m0x1_opcode_0xE0,
	e0m0x1_opcode_0xE1,
	e0m0x1_opcode_0xE2,
	e0m0x1_opcode_0xE3,
	e0m0x1_opcode_0xE4,
	e0m0x1_opcode_0xE5,
	e0m0x1_opcode_0xE6,
	e0m0x1_opcode_0xE7,
	e0m0x1_opcode_0xE8,
	e0m0x1_opcode_0xE9,
	e0m0x1_opcode_0xEA,
	e0m0x1_opcode_0xEB,
	e0m0x1_opcode_0xEC,
	e0m0x1_opcode_0xED,
	e0m0x1_opcode_0xEE,
	e0m0x1_opcode_0xEF,
	e0m0x1_opcode_0xF0,
	e0m0x1_opcode_0xF1,
	e0m0x1_opcode_0xF2,
	e0m0x1_opcode_0xF3,
	e0m0x1_opcode_0xF4,
	e0m0x1_opcode_0xF5,
	e0m0x1_opcode_0xF6,
	e0m0x1_opcode_0xF7,
	e0m0x1_opcode_0xF8,
	e0m0x1_opcode_0xF9,
	e0m0x1_opcode_0xFA,
	e0m0x1_opcode_0xFB,
	e0m0x1_opcode_0xFC,
	e0m0x1_opcode_0xFD,
	e0m0x1_opcode_0xFE,
	e0m0x1_opcode_0xFF,
	e0m0x1_reset,
	e0m0x1_abort,
	e0m0x1_nmi,
	e0m0x1_irq,
	e0m0x0_opcode_0x00,
	e0m0x0_opcode_0x01,
	e0m0x0_opcode_0x02,
	e0m0x0_opcode_0x03,
	e0m0x0_opcode_0x04,
	e0m0x0_opcode_0x05,
	e0m0x0_opcode_0x06,
	e0m0x0_opcode_0x07,
	e0m0x0_opcode_0x08,
	e0m0x0_opcode_0x09,
	e0m0x0_opcode_0x0A,
	e0m0x0_opcode_0x0B,
	e0m0x0_opcode_0x0C,
	e0m0x0_opcode_0x0D,
	e0m0x0_opcode_0x0E,
	e0m0x0_opcode_0x0F,
	e0m0x0_opcode_0x10,
	e0m0x0_opcode_0x11,
	e0m0x0_opcode_0x12,
	e0m0x0_opcode_0x13,
	e0m0x0_opcode_0x14,
	e0m0x0_opcode_0x15,
	e0m0x0_opcode_0x16,
	e0m0x0_opcode_0x17,
	e0m0x0_opcode_0x18,
	e0m0x0_opcode_0x19,
	e0m0x0_opcode_0x1A,
	e0m0x0_opcode_0x1B,
	e0m0x0_opcode_0x1C,
	e0m0x0_opcode_0x1D,
	e0m0x0_opcode_0x1E,
	e0m0x0_opcode_0x1F,
	e0m0x0_opcode_0x20,
	e0m0x0_opcode_0x21,
	e0m0x0_opcode_0x22,
	e0m0x0_opcode_0x23,
	e0m0x0_opcode_0x24,
	e0m0x0_opcode_0x25,
	e0m0x0_opcode_0x26,
	e0m0x0_opcode_0x27,
	e0m0x0_opcode_0x28,
	e0m0x0_opcode_0x29,
	e0m0x0_opcode_0x2A,
	e0m0x0_opcode_0x2B,
	e0m0x0_opcode_0x2C,
	e0m0x0_opcode_0x2D,
	e0m0x0_opcode_0x2E,
	e0m0x0_opcode_0x2F,
	e0m0x0_opcode_0x30,
	e0m0x0_opcode_0x31,
	e0m0x0_opcode_0x32,
	e0m0x0_opcode_0x33,
	e0m0x0_opcode_0x34,
	e0m0x0_opcode_0x35,
	e0m0x0_opcode_0x36,
	e0m0x0_opcode_0x37,
	e0m0x0_opcode_0x38,
	e0m0x0_opcode_0x39,
	e0m0x0_opcode_0x3A,
	e0m0x0_opcode_0x3B,
	e0m0x0_opcode_0x3C,
	e0m0x0_opcode_0x3D,
	e0m0x0_opcode_0x3E,
	e0m0x0_opcode_0x3F,
	e0m0x0_opcode_0x40,
	e0m0x0_opcode_0x41,
	e0m0x0_opcode_0x42,
	e0m0x0_opcode_0x43,
	e0m0x0_opcode_0x44,
	e0m0x0_opcode_0x45,
	e0m0x0_opcode_0x46,
	e0m0x0_opcode_0x47,
	e0m0x0_opcode_0x48,
	e0m0x0_opcode_0x49,
	e0m0x0_opcode_0x4A,
	e0m0x0_opcode_0x4B,
	e0m0x0_opcode_0x4C,
	e0m0x0_opcode_0x4D,
	e0m0x0_opcode_0x4E,
	e0m0x0_opcode_0x4F,
	e0m0x0_opcode_0x50,
	e0m0x0_opcode_0x51,
	e0m0x0_opcode_0x52,
	e0m0x0_opcode_0x53,
	e0m0x0_opcode_0x54,
	e0m0x0_opcode_0x55,
	e0m0x0_opcode_0x56,
	e0m0x0_opcode_0x57,
	e0m0x0_opcode_0x58,
	e0m0x0_opcode_0x59,
	e0m0x0_opcode_0x5A,
	e0m0x0_opcode_0x5B,
	e0m0x0_opcode_0x5C,
	e0m0x0_opcode_0x5D,
	e0m0x0_opcode_0x5E,
	e0m0x0_opcode_0x5F,
	e0m0x0_opcode_0x60,
	e0m0x0_opcode_0x61,
	e0m0x0_opcode_0x62,
	e0m0x0_opcode_0x63,
	e0m0x0_opcode_0x64,
	e0m0x0_opcode_0x65,
	e0m0x0_opcode_0x66,
	e0m0x0_opcode_0x67,
	e0m0x0_opcode_0x68,
	e0m0x0_opcode_0x69,
	e0m0x0_opcode_0x6A,
	e0m0x0_opcode_0x6B,
	e0m0x0_opcode_0x6C,
	e0m0x0_opcode_0x6D,
	e0m0x0_opcode_0x6E,
	e0m0x0_opcode_0x6F,
	e0m0x0_opcode_0x70,
	e0m0x0_opcode_0x71,
	e0m0x0_opcode_0x72,
	e0m0x0_opcode_0x73,
	e0m0x0_opcode_0x74,
	e0m0x0_opcode_0x75,
	e0m0x0_opcode_0x76,
	e0m0x0_opcode_0x77,
	e0m0x0_opcode_0x78,
	e0m0x0_opcode_0x79,
	e0m0x0_opcode_0x7A,
	e0m0x0_opcode_0x7B,
	e0m0x0_opcode_0x7C,
	e0m0x0_opcode_0x7D,
	e0m0x0_opcode_0x7E,
	e0m0x0_opcode_0x7F,
	e0m0x0_opcode_0x80,
	e0m0x0_opcode_0x81,
	e0m0x0_opcode_0x82,
	e0m0x0_opcode_0x83,
	e0m0x0_opcode_0x84,
	e0m0x0_opcode_0x85,
	e0m0x0_opcode_0x86,
	e0m0x0_opcode_0x87,
	e0m0x0_opcode_0x88,
	e0m0x0_opcode_0x89,
	e0m0x0_opcode_0x8A,
	e0m0x0_opcode_0x8B,
	e0m0x0_opcode_0x8C,
	e0m0x0_opcode_0x8D,
	e0m0x0_opcode_0x8E,
	e0m0x0_opcode_0x8F,
	e0m0x0_opcode_0x90,
	e0m0x0_opcode_0x91,
	e0m0x0_opcode_0x92,
	e0m0x0_opcode_0x93,
	e0m0x0_opcode_0x94,
	e0m0x0_opcode_0x95,
	e0m0x0_opcode_0x96,
	e0m0x0_opcode_0x97,
	e0m0x0_opcode_0x98,
	e0m0x0_opcode_0x99,
	e0m0x0_opcode_0x9A,
	e0m0x0_opcode_0x9B,
	e0m0x0_opcode_0x9C,
	e0m0x0_opcode_0x9D,
	e0m0x0_opcode_0x9E,
	e0m0x0_opcode_0x9F,
	e0m0x0_opcode_0xA0,
	e0m0x0_opcode_0xA1,
	e0m0x0_opcode_0xA2,
	e0m0x0_opcode_0xA3,
	e0m0x0_opcode_0xA4,
	e0m0x0_opcode_0xA5,
	e0m0x0_opcode_0xA6,
	e0m0x0_opcode_0xA7,
	e0m0x0_opcode_0xA8,
	e0m0x0_opcode_0xA9,
	e0m0x0_opcode_0xAA,
	e0m0x0_opcode_0xAB,
	e0m0x0_opcode_0xAC,
	e0m0x0_opcode_0xAD,
	e0m0x0_opcode_0xAE,
	e0m0x0_opcode_0xAF,
	e0m0x0_opcode_0xB0,
	e0m0x0_opcode_0xB1,
	e0m0x0_opcode_0xB2,
	e0m0x0_opcode_0xB3,
	e0m0x0_opcode_0xB4,
	e0m0x0_opcode_0xB5,
	e0m0x0_opcode_0xB6,
	e0m0x0_opcode_0xB7,
	e0m0x0_opcode_0xB8,
	e0m0x0_opcode_0xB9,
	e0m0x0_opcode_0xBA,
	e0m0x0_opcode_0xBB,
	e0m0x0_opcode_0xBC,
	e0m0x0_opcode_0xBD,
	e0m0x0_opcode_0xBE,
	e0m0x0_opcode_0xBF,
	e0m0x0_opcode_0xC0,
	e0m0x0_opcode_0xC1,
	e0m0x0_opcode_0xC2,
	e0m0x0_opcode_0xC3,
	e0m0x0_opcode_0xC4,
	e0m0x0_opcode_0xC5,
	e0m0x0_opcode_0xC6,
	e0m0x0_opcode_0xC7,
	e0m0x0_opcode_0xC8,
	e0m0x0_opcode_0xC9,
	e0m0x0_opcode_0xCA,
	e0m0x0_opcode_0xCB,
	e0m0x0_opcode_0xCC,
	e0m0x0_opcode_0xCD,
	e0m0x0_opcode_0xCE,
	e0m0x0_opcode_0xCF,
	e0m0x0_opcode_0xD0,
	e0m0x0_opcode_0xD1,
	e0m0x0_opcode_0xD2,
	e0m0x0_opcode_0xD3,
	e0m0x0_opcode_0xD4,
	e0m0x0_opcode_0xD5,
	e0m0x0_opcode_0xD6,
	e0m0x0_opcode_0xD7,
	e0m0x0_opcode_0xD8,
	e0m0x0_opcode_0xD9,
	e0m0x0_opcode_0xDA,
	e0m0x0_opcode_0xDB,
	e0m0x0_opcode_0xDC,
	e0m0x0_opcode_0xDD,
	e0m0x0_opcode_0xDE,
	e0m0x0_opcode_0xDF,
	e0m0x0_opcode_0xE0,
	e0m0x0_opcode_0xE1,
	e0m0x0_opcode_0xE2,
	e0m0x0_opcode_0xE3,
	e0m0x0_opcode_0xE4,
	e0m0x0_opcode_0xE5,
	e0m0x0_opcode_0xE6,
	e0m0x0_opcode_0xE7,
	e0m0x0_opcode_0xE8,
	e0m0x0_opcode_0xE9,
	e0m0x0_opcode_0xEA,
	e0m0x0_opcode_0xEB,
	e0m0x0_opcode_0xEC,
	e0m0x0_opcode_0xED,
	e0m0x0_opcode_0xEE,
	e0m0x0_opcode_0xEF,
	e0m0x0_opcode_0xF0,
	e0m0x0_opcode_0xF1,
	e0m0x0_opcode_0xF2,
	e0m0x0_opcode_0xF3,
	e0m0x0_opcode_0xF4,
	e0m0x0_opcode_0xF5,
	e0m0x0_opcode_0xF6,
	e0m0x0_opcode_0xF7,
	e0m0x0_opcode_0xF8,
	e0m0x0_opcode_0xF9,
	e0m0x0_opcode_0xFA,
	e0m0x0_opcode_0xFB,
	e0m0x0_opcode_0xFC,
	e0m0x0_opcode_0xFD,
	e0m0x0_opcode_0xFE,
	e0m0x0_opcode_0xFF,
	e0m0x0_reset,
	e0m0x0_abort,
	e0m0x0_nmi,
	e0m0x0_irq,
	e1m1x1_opcode_0x00,
	e1m1x1_opcode_0x01,
	e1m1x1_opcode_0x02,
	e1m1x1_opcode_0x03,
	e1m1x1_opcode_0x04,
	e1m1x1_opcode_0x05,
	e1m1x1_opcode_0x06,
	e1m1x1_opcode_0x07,
	e1m1x1_opcode_0x08,
	e1m1x1_opcode_0x09,
	e1m1x1_opcode_0x0A,
	e1m1x1_opcode_0x0B,
	e1m1x1_opcode_0x0C,
	e1m1x1_opcode_0x0D,
	e1m1x1_opcode_0x0E,
	e1m1x1_opcode_0x0F,
	e1m1x1_opcode_0x10,
	e1m1x1_opcode_0x11,
	e1m1x1_opcode_0x12,
	e1m1x1_opcode_0x13,
	e1m1x1_opcode_0x14,
	e1m1x1_opcode_0x15,
	e1m1x1_opcode_0x16,
	e1m1x1_opcode_0x17,
	e1m1x1_opcode_0x18,
	e1m1x1_opcode_0x19,
	e1m1x1_opcode_0x1A,
	e1m1x1_opcode_0x1B,
	e1m1x1_opcode_0x1C,
	e1m1x1_opcode_0x1D,
	e1m1x1_opcode_0x1E,
	e1m1x1_opcode_0x1F,
	e1m1x1_opcode_0x20,
	e1m1x1_opcode_0x21,
	e1m1x1_opcode_0x22,
	e1m1x1_opcode_0x23,
	e1m1x1_opcode_0x24,
	e1m1x1_opcode_0x25,
	e1m1x1_opcode_0x26,
	e1m1x1_opcode_0x27,
	e1m1x1_opcode_0x28,
	e1m1x1_opcode_0x29,
	e1m1x1_opcode_0x2A,
	e1m1x1_opcode_0x2B,
	e1m1x1_opcode_0x2C,
	e1m1x1_opcode_0x2D,
	e1m1x1_opcode_0x2E,
	e1m1x1_opcode_0x2F,
	e1m1x1_opcode_0x30,
	e1m1x1_opcode_0x31,
	e1m1x1_opcode_0x32,
	e1m1x1_opcode_0x33,
	e1m1x1_opcode_0x34,
	e1m1x1_opcode_0x35,
	e1m1x1_opcode_0x36,
	e1m1x1_opcode_0x37,
	e1m1x1_opcode_0x38,
	e1m1x1_opcode_0x39,
	e1m1x1_opcode_0x3A,
	e1m1x1_opcode_0x3B,
	e1m1x1_opcode_0x3C,
	e1m1x1_opcode_0x3D,
	e1m1x1_opcode_0x3E,
	e1m1x1_opcode_0x3F,
	e1m1x1_opcode_0x40,
	e1m1x1_opcode_0x41,
	e1m1x1_opcode_0x42,
	e1m1x1_opcode_0x43,
	e1m1x1_opcode_0x44,
	e1m1x1_opcode_0x45,
	e1m1x1_opcode_0x46,
	e1m1x1_opcode_0x47,
	e1m1x1_opcode_0x48,
	e1m1x1_opcode_0x49,
	e1m1x1_opcode_0x4A,
	e1m1x1_opcode_0x4B,
	e1m1x1_opcode_0x4C,
	e1m1x1_opcode_0x4D,
	e1m1x1_opcode_0x4E,
	e1m1x1_opcode_0x4F,
	e1m1x1_opcode_0x50,
	e1m1x1_opcode_0x51,
	e1m1x1_opcode_0x52,
	e1m1x1_opcode_0x53,
	e1m1x1_opcode_0x54,
	e1m1x1_opcode_0x55,
	e1m1x1_opcode_0x56,
	e1m1x1_opcode_0x57,
	e1m1x1_opcode_0x58,
	e1m1x1_opcode_0x59,
	e1m1x1_opcode_0x5A,
	e1m1x1_opcode_0x5B,
	e1m1x1_opcode_0x5C,
	e1m1x1_opcode_0x5D,
	e1m1x1_opcode_0x5E,
	e1m1x1_opcode_0x5F,
	e1m1x1_opcode_0x60,
	e1m1x1_opcode_0x61,
	e1m1x1_opcode_0x62,
	e1m1x1_opcode_0x63,
	e1m1x1_opcode_0x64,
	e1m1x1_opcode_0x65,
	e1m1x1_opcode_0x66,
	e1m1x1_opcode_0x67,
	e1m1x1_opcode_0x68,
	e1m1x1_opcode_0x69,
	e1m1x1_opcode_0x6A,
	e1m1x1_opcode_0x6B,
	e1m1x1_opcode_0x6C,
	e1m1x1_opcode_0x6D,
	e1m1x1_opcode_0x6E,
	e1m1x1_opcode_0x6F,
	e1m1x1_opcode_0x70,
	e1m1x1_opcode_0x71,
	e1m1x1_opcode_0x72,
	e1m1x1_opcode_0x73,
	e1m1x1_opcode_0x74,
	e1m1x1_opcode_0x75,
	e1m1x1_opcode_0x76,
	e1m1x1_opcode_0x77,
	e1m1x1_opcode_0x78,
	e1m1x1_opcode_0x79,
	e1m1x1_opcode_0x7A,
	e1m1x1_opcode_0x7B,
	e1m1x1_opcode_0x7C,
	e1m1x1_opcode_0x7D,
	e1m1x1_opcode_0x7E,
	e1m1x1_opcode_0x7F,
	e1m1x1_opcode_0x80,
	e1m1x1_opcode_0x81,
	e1m1x1_opcode_0x82,
	e1m1x1_opcode_0x83,
	e1m1x1_opcode_0x84,
	e1m1x1_opcode_0x85,
	e1m1x1_opcode_0x86,
	e1m1x1_opcode_0x87,
	e1m1x1_opcode_0x88,
	e1m1x1_opcode_0x89,
	e1m1x1_opcode_0x8A,
	e1m1x1_opcode_0x8B,
	e1m1x1_opcode_0x8C,
	e1m1x1_opcode_0x8D,
	e1m1x1_opcode_0x8E,
	e1m1x1_opcode_0x8F,
	e1m1x1_opcode_0x90,
	e1m1x1_opcode_0x91,
	e1m1x1_opcode_0x92,
	e1m1x1_opcode_0x93,
	e1m1x1_opcode_0x94,
	e1m1x1_opcode_0x95,
	e1m1x1_opcode_0x96,
	e1m1x1_opcode_0x97,
	e1m1x1_opcode_0x98,
	e1m1x1_opcode_0x99,
	e1m1x1_opcode_0x9A,
	e1m1x1_opcode_0x9B,
	e1m1x1_opcode_0x9C,
	e1m1x1_opcode_0x9D,
	e1m1x1_opcode_0x9E,
	e1m1x1_opcode_0x9F,
	e1m1x1_opcode_0xA0,
	e1m1x1_opcode_0xA1,
	e1m1x1_opcode_0xA2,
	e1m1x1_opcode_0xA3,
	e1m1x1_opcode_0xA4,
	e1m1x1_opcode_0xA5,
	e1m1x1_opcode_0xA6,
	e1m1x1_opcode_0xA7,
	e1m1x1_opcode_0xA8,
	e1m1x1_opcode_0xA9,
	e1m1x1_opcode_0xAA,
	e1m1x1_opcode_0xAB,
	e1m1x1_opcode_0xAC,
	e1m1x1_opcode_0xAD,
	e1m1x1_opcode_0xAE,
	e1m1x1_opcode_0xAF,
	e1m1x1_opcode_0xB0,
	e1m1x1_opcode_0xB1,
	e1m1x1_opcode_0xB2,
	e1m1x1_opcode_0xB3,
	e1m1x1_opcode_0xB4,
	e1m1x1_opcode_0xB5,
	e1m1x1_opcode_0xB6,
	e1m1x1_opcode_0xB7,
	e1m1x1_opcode_0xB8,
	e1m1x1_opcode_0xB9,
	e1m1x1_opcode_0xBA,
	e1m1x1_opcode_0xBB,
	e1m1x1_opcode_0xBC,
	e1m1x1_opcode_0xBD,
	e1m1x1_opcode_0xBE,
	e1m1x1_opcode_0xBF,
	e1m1x1_opcode_0xC0,
	e1m1x1_opcode_0xC1,
	e1m1x1_opcode_0xC2,
	e1m1x1_opcode_0xC3,
	e1m1x1_opcode_0xC4,
	e1m1x1_opcode_0xC5,
	e1m1x1_opcode_0xC6,
	e1m1x1_opcode_0xC7,
	e1m1x1_opcode_0xC8,
	e1m1x1_opcode_0xC9,
	e1m1x1_opcode_0xCA,
	e1m1x1_opcode_0xCB,
	e1m1x1_opcode_0xCC,
	e1m1x1_opcode_0xCD,
	e1m1x1_opcode_0xCE,
	e1m1x1_opcode_0xCF,
	e1m1x1_opcode_0xD0,
	e1m1x1_opcode_0xD1,
	e1m1x1_opcode_0xD2,
	e1m1x1_opcode_0xD3,
	e1m1x1_opcode_0xD4,
	e1m1x1_opcode_0xD5,
	e1m1x1_opcode_0xD6,
	e1m1x1_opcode_0xD7,
	e1m1x1_opcode_0xD8,
	e1m1x1_opcode_0xD9,
	e1m1x1_opcode_0xDA,
	e1m1x1_opcode_0xDB,
	e1m1x1_opcode_0xDC,
	e1m1x1_opcode_0xDD,
	e1m1x1_opcode_0xDE,
	e1m1x1_opcode_0xDF,
	e1m1x1_opcode_0xE0,
	e1m1x1_opcode_0xE1,
	e1m1x1_opcode_0xE2,
	e1m1x1_opcode_0xE3,
	e1m1x1_opcode_0xE4,
	e1m1x1_opcode_0xE5,
	e1m1x1_opcode_0xE6,
	e1m1x1_opcode_0xE7,
	e1m1x1_opcode_0xE8,
	e1m1x1_opcode_0xE9,
	e1m1x1_opcode_0xEA,
	e1m1x1_opcode_0xEB,
	e1m1x1_opcode_0xEC,
	e1m1x1_opcode_0xED,
	e1m1x1_opcode_0xEE,
	e1m1x1_opcode_0xEF,
	e1m1x1_opcode_0xF0,
	e1m1x1_opcode_0xF1,
	e1m1x1_opcode_0xF2,
	e1m1x1_opcode_0xF3,
	e1m1x1_opcode_0xF4,
	e1m1x1_opcode_0xF5,
	e1m1x1_opcode_0xF6,
	e1m1x1_opcode_0xF7,
	e1m1x1_opcode_0xF8,
	e1m1x1_opcode_0xF9,
	e1m1x1_opcode_0xFA,
	e1m1x1_opcode_0xFB,
	e1m1x1_opcode_0xFC,
	e1m1x1_opcode_0xFD,
	e1m1x1_opcode_0xFE,
	e1m1x1_opcode_0xFF,
	e1m1x1_reset,
	e1m1x1_abort,
	e1m1x1_nmi,
	e1m1x1_irq
};
