
#include "peg.hpp"
/*----------------------------------------------------------------------------*/
ROMDATA UCHAR ucGraphIconBitmap[398] = {
0x3b,0xff,0x3b,0xff,0x17,0xff,0x0a,0x00,0x18,0xff,0x11,0xff,0x16,0x00,0x12,0xff,
0x0d,0xff,0x15,0x00,0x80,0x0a,0x07,0x00,0x0e,0xff,0x0b,0xff,0x03,0x00,0x80,0x0a,
0x11,0x00,0x81,0x0a,0x0a,0x05,0x00,0x80,0x0a,0x02,0x00,0x0c,0xff,0x09,0xff,0x04,
0x00,0x81,0x0a,0x0a,0x11,0x00,0x82,0x0a,0x00,0x0a,0x03,0x00,0x81,0x0a,0x0a,0x04,
0x00,0x0a,0xff,0x07,0xff,0x06,0x00,0x82,0x0a,0x00,0x0a,0x0f,0x00,0x83,0x0a,0x00,
0x00,0x0a,0x02,0x00,0x83,0x0a,0x00,0x00,0x0a,0x05,0x00,0x08,0xff,0x06,0xff,0x06,
0x00,0x83,0x0a,0x00,0x00,0x0a,0x0f,0x00,0x86,0x0a,0x00,0x00,0x0a,0x00,0x00,0x0a,
0x02,0x00,0x80,0x0a,0x06,0x00,0x07,0xff,0x05,0xff,0x07,0x00,0x83,0x0a,0x00,0x00,
0x0a,0x0e,0x00,0x80,0x0a,0x03,0x00,0x81,0x0a,0x0a,0x03,0x00,0x80,0x0a,0x07,0x00,
0x06,0xff,0x04,0xff,0x07,0x00,0x80,0x0a,0x02,0x00,0x80,0x0a,0x0e,0x00,0x80,0x0a,
0x03,0x00,0x80,0x0a,0x04,0x00,0x80,0x0a,0x07,0x00,0x06,0xff,0x04,0xff,0x06,0x00,
0x80,0x0a,0x04,0x00,0x80,0x0a,0x0c,0x00,0x80,0x0a,0x0b,0x00,0x80,0x0a,0x07,0x00,
0x05,0xff,0x04,0xff,0x06,0x00,0x80,0x0a,0x04,0x00,0x80,0x0a,0x0b,0x00,0x80,0x0a,
0x0c,0x00,0x80,0x0a,0x07,0x00,0x05,0xff,0x04,0xff,0x05,0x00,0x80,0x0a,0x05,0x00,
0x80,0x0a,0x03,0x00,0x80,0x0a,0x06,0x00,0x80,0x0a,0x0c,0x00,0x80,0x0a,0x07,0x00,
0x05,0xff,0x04,0xff,0x05,0x00,0x80,0x0a,0x06,0x00,0x85,0x0a,0x00,0x00,0x0a,0x00,
0x0a,0x04,0x00,0x80,0x0a,0x0d,0x00,0x80,0x0a,0x06,0x00,0x06,0xff,0x05,0xff,0x03,
0x00,0x80,0x0a,0x07,0x00,0x85,0x0a,0x00,0x00,0x0a,0x00,0x0a,0x04,0x00,0x80,0x0a,
0x0e,0x00,0x80,0x0a,0x05,0x00,0x06,0xff,0x06,0xff,0x0b,0x00,0x82,0x0a,0x00,0x0a,
0x02,0x00,0x80,0x0a,0x02,0x00,0x80,0x0a,0x0f,0x00,0x80,0x0a,0x04,0x00,0x07,0xff,
0x07,0xff,0x0a,0x00,0x82,0x0a,0x00,0x0a,0x02,0x00,0x80,0x0a,0x02,0x00,0x80,0x0a,
0x14,0x00,0x08,0xff,0x09,0xff,0x09,0x00,0x80,0x0a,0x04,0x00,0x82,0x0a,0x00,0x0a,
0x13,0x00,0x0a,0xff,0x0b,0xff,0x07,0x00,0x80,0x0a,0x04,0x00,0x82,0x0a,0x00,0x0a,
0x11,0x00,0x0c,0xff,0x0d,0xff,0x0c,0x00,0x80,0x0a,0x10,0x00,0x0e,0xff,0x11,0xff,
0x16,0x00,0x12,0xff,0x17,0xff,0x0a,0x00,0x18,0xff,0x3b,0xff,0x3b,0xff,};
PegBitmap gbGraphIconBitmap = { 0x11, 8, 60, 25, 0x000000ff, (UCHAR *) ucGraphIconBitmap};


/*----------------------------------------------------------------------------*/

#if PEG_NUM_COLORS > 16

ROMDATA UCHAR ucDialBitmap[3638] = {
0x72,0xff,0x2e,0xff,0x82,0x91,0x91,0xbc,0x02,0x0f,0x80,0xbc,0x0a,0x0f,0x81,0xbc,
0xbc,0x2f,0xff,0x2a,0xff,0x81,0x91,0xbc,0x04,0x0f,0x0f,0xbc,0x03,0x0f,0x80,0xbc,
0x2b,0xff,0x27,0xff,0x80,0x91,0x03,0x0f,0x18,0xbc,0x03,0x0f,0x80,0x91,0x27,0xff,
0x24,0xff,0x80,0x91,0x03,0x0f,0x05,0xbc,0x02,0x91,0x0c,0x00,0x02,0x91,0x05,0xbc,
0x03,0x0f,0x80,0x91,0x24,0xff,0x22,0xff,0x80,0x91,0x02,0x0f,0x04,0xbc,0x80,0x91,
0x0b,0x00,0x81,0xbc,0xbc,0x0a,0x00,0x80,0x91,0x04,0xbc,0x03,0x0f,0x22,0xff,0x20,
0xff,0x80,0x91,0x02,0x0f,0x02,0xbc,0x80,0x91,0x0f,0x00,0x81,0x0f,0x0f,0x0e,0x00,
0x80,0x91,0x02,0xbc,0x03,0x0f,0x80,0x91,0x1f,0xff,0x1f,0xff,0x81,0x0f,0x0f,0x03,
0xbc,0x12,0x00,0x81,0x0f,0x0f,0x10,0x00,0x80,0x91,0x02,0xbc,0x84,0x0f,0x0f,0xbc,
0x0f,0x91,0x1d,0xff,0x1d,0xff,0x81,0x0f,0x0f,0x02,0xbc,0x80,0x91,0x05,0x00,0x81,
0xbc,0xbc,0x0c,0x00,0x81,0xbc,0xbc,0x0e,0x00,0x81,0x91,0x91,0x02,0x00,0x87,0x91,
0xbc,0xbc,0x0f,0x0f,0xbc,0x0f,0x91,0x1b,0xff,0x1b,0xff,0x85,0xbc,0x0f,0x0f,0xbc,
0xbc,0x91,0x07,0x00,0x82,0xbc,0xbc,0x91,0x1a,0x00,0x82,0xbc,0xbc,0x91,0x05,0x00,
0x82,0x91,0xbc,0xbc,0x02,0x0f,0x80,0xbc,0x1a,0xff,0x1a,0xff,0x84,0x0f,0x0f,0xbc,
0xbc,0x91,0x09,0x00,0x82,0x91,0xbc,0x91,0x1a,0x00,0x02,0x0f,0x07,0x00,0x86,0x91,
0xbc,0x0f,0x0f,0xbc,0x0f,0xbc,0x18,0xff,0x18,0xff,0x84,0x91,0x0f,0x0f,0xbc,0xbc,
0x0c,0x00,0x81,0xbc,0xbc,0x1a,0x00,0x02,0x0f,0x09,0x00,0x85,0xbc,0xbc,0x0f,0x0f,
0xbc,0xbc,0x17,0xff,0x17,0xff,0x84,0xbc,0x0f,0xbc,0xbc,0x91,0x0d,0x00,0x81,0xbc,
0xbc,0x19,0x00,0x83,0xbc,0x0f,0x0f,0x91,0x0a,0x00,0x81,0x91,0xbc,0x03,0x0f,0x16,
0xff,0x15,0xff,0x84,0x91,0x0f,0x0f,0xbc,0xbc,0x2b,0x00,0x82,0xbc,0x0f,0x0f,0x0d,
0x00,0x81,0xbc,0xbc,0x02,0x0f,0x15,0xff,0x14,0xff,0x84,0x91,0x0f,0x0f,0xbc,0x91,
0x3e,0x00,0x85,0x91,0xbc,0x0f,0x0f,0xbc,0x91,0x13,0xff,0x13,0xff,0x83,0xbc,0x0f,
0x0f,0xbc,0x0d,0x00,0x84,0x91,0xbc,0x0f,0x0f,0x91,0x02,0x00,0x83,0x91,0x0f,0x0f,
0xbc,0x0c,0x00,0x80,0xbc,0x02,0x0f,0x80,0xbc,0x02,0x00,0x03,0x0f,0x80,0x91,0x0e,
0x00,0x02,0x0f,0x81,0xbc,0xbc,0x12,0xff,0x12,0xff,0x83,0xbc,0x0f,0x0f,0xbc,0x02,
0x00,0x81,0xbc,0xbc,0x08,0x00,0x80,0x91,0x05,0x0f,0x81,0x00,0xbc,0x04,0x0f,0x80,
0x91,0x09,0x00,0x80,0xbc,0x05,0x0f,0x80,0x00,0x05,0x0f,0x80,0x91,0x09,0x00,0x80,
0x91,0x03,0x00,0x03,0x0f,0x80,0x91,0x11,0xff,0x10,0xff,0x84,0x00,0xbc,0x0f,0x0f,
0xbc,0x03,0x00,0x02,0xbc,0x07,0x00,0x02,0x0f,0x80,0x91,0x02,0x0f,0x87,0x91,0x0f,
0x0f,0xbc,0x91,0x0f,0x0f,0xbc,0x08,0x00,0x80,0x91,0x02,0x0f,0x80,0x00,0x02,0x0f,
0x87,0x91,0x0f,0x0f,0xbc,0x00,0xbc,0x0f,0xbc,0x08,0x00,0x82,0x91,0x0f,0x0f,0x03,
0x00,0x80,0xbc,0x02,0x0f,0x80,0xbc,0x10,0xff,0x10,0xff,0x83,0xbc,0x0f,0x0f,0x91,
0x05,0x00,0x02,0xbc,0x05,0x00,0x83,0x91,0x0f,0x0f,0xbc,0x03,0x00,0x87,0xbc,0x0f,
0x0f,0x91,0x00,0x91,0x0f,0x0f,0x09,0x00,0x02,0x0f,0x80,0x00,0x02,0x0f,0x87,0xbc,
0x0f,0x0f,0x91,0x00,0xbc,0x0f,0x0f,0x08,0x00,0x82,0xbc,0x0f,0x91,0x04,0x00,0x80,
0x91,0x02,0x0f,0x80,0xbc,0x0f,0xff,0x0f,0xff,0x83,0xbc,0x0f,0x0f,0x91,0x07,0x00,
0x81,0xbc,0xbc,0x05,0x00,0x80,0x91,0x05,0x0f,0x88,0x91,0xbc,0x0f,0x0f,0x91,0x00,
0x91,0x0f,0x0f,0x09,0x00,0x80,0xbc,0x04,0x0f,0x88,0xbc,0xbc,0x0f,0x0f,0x91,0x00,
0xbc,0x0f,0x0f,0x07,0x00,0x82,0x91,0x0f,0xbc,0x06,0x00,0x84,0x91,0x0f,0x0f,0xbc,
0xbc,0x0e,0xff,0x0e,0xff,0x83,0xbc,0x0f,0x0f,0x91,0x10,0x00,0x80,0xbc,0x06,0x0f,
0x87,0xbc,0x0f,0x0f,0x91,0x00,0x91,0x0f,0x0f,0x09,0x00,0x80,0xbc,0x04,0x0f,0x89,
0xbc,0xbc,0x0f,0x0f,0x91,0x00,0xbc,0x0f,0x0f,0x91,0x11,0x00,0x83,0x91,0x0f,0x0f,
0xbc,0x0e,0xff,0x0d,0xff,0x83,0x91,0x0f,0x0f,0xbc,0x11,0x00,0x84,0xbc,0x0f,0x0f,
0xbc,0x00,0x02,0x0f,0x87,0xbc,0x0f,0x0f,0x91,0x00,0x91,0x0f,0x0f,0x08,0x00,0x80,
0x91,0x02,0x0f,0x80,0x91,0x02,0x0f,0x87,0xbc,0x0f,0x0f,0x91,0x00,0xbc,0x0f,0x0f,
0x13,0x00,0x83,0xbc,0x0f,0x0f,0xbc,0x0d,0xff,0x0c,0xff,0x83,0x91,0x0f,0x0f,0xbc,
0x12,0x00,0x8f,0x91,0x0f,0x0f,0x91,0x00,0x91,0x0f,0x0f,0xbc,0x0f,0x0f,0x91,0x00,
0x91,0x0f,0x0f,0x08,0x00,0x8f,0xbc,0x0f,0x0f,0x91,0x00,0xbc,0x0f,0x0f,0x91,0x0f,
0x0f,0x91,0x00,0xbc,0x0f,0x0f,0x14,0x00,0x83,0xbc,0x0f,0x0f,0xbc,0x0c,0xff,0x0c,
0xff,0x02,0x0f,0x13,0x00,0x8a,0x91,0x0f,0x0f,0xbc,0x91,0xbc,0x0f,0x0f,0xbc,0x0f,
0x0f,0x02,0x91,0x81,0x0f,0x0f,0x08,0x00,0x80,0x91,0x02,0x0f,0x80,0x91,0x02,0x0f,
0x87,0xbc,0x0f,0x0f,0xbc,0x91,0xbc,0x0f,0xbc,0x15,0x00,0x03,0x0f,0x0b,0xff,0x0b,
0xff,0x82,0xbc,0x0f,0x0f,0x15,0x00,0x80,0xbc,0x05,0x0f,0x80,0x91,0x05,0x0f,0x80,
0x91,0x09,0x00,0x80,0xbc,0x04,0x0f,0x81,0xbc,0x00,0x05,0x0f,0x80,0x91,0x16,0x00,
0x83,0x0f,0x0f,0xbc,0xbc,0x0a,0xff,0x0a,0xff,0x83,0x91,0x0f,0x0f,0x91,0x15,0x00,
0x81,0x91,0xbc,0x03,0x0f,0x82,0x91,0x00,0x91,0x03,0x0f,0x80,0xbc,0x0b,0x00,0x03,
0x0f,0x83,0xbc,0x00,0x00,0x91,0x03,0x0f,0x80,0x91,0x17,0x00,0x84,0x91,0xbc,0x0f,
0xbc,0x91,0x09,0xff,0x0a,0xff,0x02,0x0f,0x82,0x00,0xbc,0x0f,0x15,0x00,0x02,0x91,
0x04,0x00,0x02,0x91,0x32,0x00,0x83,0xbc,0xbc,0x0f,0xbc,0x09,0xff,0x09,0xff,0x88,
0xbc,0x0f,0x0f,0x00,0x00,0xbc,0x0f,0xbc,0xbc,0x4e,0x00,0x80,0x91,0x02,0x00,0x83,
0xbc,0x0f,0x0f,0xbc,0x08,0xff,0x08,0xff,0x83,0x91,0x0f,0x0f,0x91,0x02,0x00,0x80,
0xbc,0x02,0x0f,0x4c,0x00,0x89,0x91,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xbc,0x91,
0x07,0xff,0x08,0xff,0x02,0x0f,0x04,0x00,0x87,0x91,0x0f,0x91,0x00,0x00,0xbc,0x0f,
0x91,0x02,0x00,0x83,0x91,0xbc,0xbc,0x91,0x28,0x00,0x02,0x91,0x03,0x00,0x02,0x91,
0x04,0x00,0x81,0x91,0x91,0x05,0x00,0x82,0xbc,0x0f,0x0f,0x03,0x00,0x83,0x91,0xbc,
0x0f,0xbc,0x07,0xff,0x07,0xff,0x82,0xbc,0x0f,0x0f,0x09,0x00,0x80,0x91,0x02,0x0f,
0x81,0x00,0x00,0x05,0x0f,0x26,0x00,0x80,0xbc,0x02,0x0f,0x02,0x00,0x80,0xbc,0x03,
0x0f,0x83,0x91,0x00,0x91,0xbc,0x02,0x0f,0x80,0xbc,0x02,0x00,0x02,0x0f,0x05,0x00,
0x83,0xbc,0x0f,0xbc,0x91,0x06,0xff,0x07,0xff,0x82,0x0f,0x0f,0xbc,0x08,0x00,0x80,
0x91,0x03,0x0f,0x81,0x00,0x91,0x05,0x0f,0x80,0x91,0x24,0x00,0x80,0xbc,0x03,0x0f,
0x82,0x00,0x00,0x91,0x05,0x0f,0x81,0x91,0x91,0x04,0x0f,0x84,0xbc,0x00,0x00,0x0f,
0x0f,0x03,0x00,0x86,0x91,0x00,0x00,0x91,0xbc,0x0f,0xbc,0x06,0xff,0x06,0xff,0x82,
0xbc,0x0f,0x0f,0x09,0x00,0x04,0x0f,0x88,0x00,0xbc,0x0f,0x0f,0x00,0x91,0x0f,0x0f,
0xbc,0x24,0x00,0x04,0x0f,0x90,0x00,0x00,0x0f,0x0f,0xbc,0x91,0xbc,0x0f,0x0f,0xbc,
0x0f,0x0f,0xbc,0x91,0xbc,0x0f,0xbc,0x06,0x00,0x88,0xbc,0x0f,0x91,0x00,0x00,0xbc,
0x0f,0xbc,0x91,0x05,0xff,0x06,0xff,0x82,0x0f,0x0f,0xbc,0x08,0x00,0x80,0x91,0x04,
0x0f,0x88,0x00,0xbc,0x0f,0x0f,0x00,0x91,0x0f,0x0f,0xbc,0x24,0x00,0x81,0x91,0x91,
0x02,0x0f,0x90,0x00,0x00,0x0f,0x0f,0xbc,0x00,0x91,0xbc,0x0f,0xbc,0x0f,0x0f,0x91,
0x00,0xbc,0x0f,0x0f,0x06,0x00,0x89,0x91,0xbc,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xbc,
0x91,0x04,0xff,0x05,0xff,0x82,0xbc,0x0f,0x0f,0x09,0x00,0x82,0x0f,0x0f,0x91,0x02,
0x0f,0x88,0x00,0xbc,0x0f,0x0f,0x00,0x00,0x0f,0x0f,0xbc,0x26,0x00,0x02,0x0f,0x90,
0x00,0x00,0x0f,0x0f,0xbc,0x00,0x91,0xbc,0x0f,0xbc,0x0f,0x0f,0x91,0x00,0xbc,0x0f,
0x0f,0x07,0x00,0x88,0x91,0x0f,0x91,0x00,0x00,0xbc,0x0f,0xbc,0x91,0x04,0xff,0x05,
0xff,0x82,0x0f,0x0f,0xbc,0x08,0x00,0x83,0xbc,0x0f,0x0f,0x00,0x02,0x0f,0x88,0x00,
0xbc,0x0f,0x0f,0x00,0x00,0x0f,0x0f,0xbc,0x26,0x00,0x02,0x0f,0x90,0x00,0x00,0x0f,
0x0f,0xbc,0x00,0x91,0xbc,0x0f,0xbc,0x0f,0x0f,0x91,0x00,0xbc,0x0f,0x0f,0x08,0x00,
0x87,0xbc,0x0f,0x00,0x00,0x91,0xbc,0x0f,0x0f,0x04,0xff,0x04,0xff,0x82,0x91,0x0f,
0x0f,0x09,0x00,0x07,0x0f,0x87,0xbc,0x0f,0x0f,0x00,0x91,0x0f,0x0f,0xbc,0x26,0x00,
0x02,0x0f,0x90,0x00,0x00,0x0f,0x0f,0xbc,0x00,0x91,0xbc,0x0f,0xbc,0x0f,0x0f,0x91,
0x00,0xbc,0x0f,0x0f,0x08,0x00,0x81,0x91,0x0f,0x02,0x00,0x83,0xbc,0x0f,0xbc,0x91,
0x03,0xff,0x04,0xff,0x82,0x0f,0x0f,0xbc,0x09,0x00,0x07,0x0f,0x87,0xbc,0x0f,0x0f,
0x00,0x91,0x0f,0x0f,0xbc,0x26,0x00,0x02,0x0f,0x90,0x00,0x00,0x0f,0x0f,0xbc,0x00,
0x91,0xbc,0x0f,0xbc,0x0f,0x0f,0x91,0x00,0xbc,0x0f,0x0f,0x09,0x00,0x87,0xbc,0x0f,
0x00,0x00,0x91,0x0f,0xbc,0xbc,0x03,0xff,0x03,0xff,0x83,0x91,0x0f,0x0f,0x91,0x0d,
0x00,0x02,0x0f,0x81,0x00,0x91,0x05,0x0f,0x80,0x91,0x26,0x00,0x02,0x0f,0x81,0x00,
0x00,0x02,0x0f,0x8b,0x91,0x91,0x0f,0x0f,0xbc,0x0f,0x0f,0xbc,0x00,0xbc,0x0f,0xbc,
0x09,0x00,0x81,0xbc,0x0f,0x02,0x00,0x83,0xbc,0x0f,0xbc,0x91,0x02,0xff,0x03,0xff,
0x82,0xbc,0x0f,0x0f,0x0e,0x00,0x02,0x0f,0x81,0x00,0x00,0x04,0x0f,0x80,0xbc,0x27,
0x00,0x02,0x0f,0x82,0x00,0x00,0x91,0x04,0x0f,0x82,0xbc,0x00,0xbc,0x04,0x0f,0x80,
0x91,0x09,0x00,0x87,0x91,0x0f,0xbc,0x00,0x00,0xbc,0x0f,0xbc,0x03,0xff,0x03,0xff,
0x82,0x0f,0x0f,0xbc,0x14,0x00,0x82,0x91,0xbc,0xbc,0x29,0x00,0x02,0x91,0x02,0x00,
0x80,0x91,0x02,0x0f,0x80,0x91,0x02,0x00,0x80,0xbc,0x02,0x0f,0x80,0x91,0x0b,0x00,
0x87,0xbc,0x0f,0x00,0x00,0x91,0x0f,0x0f,0xbc,0x02,0xff,0x02,0xff,0x87,0x91,0x0f,
0x0f,0x91,0x00,0x00,0xbc,0x91,0x5c,0x00,0x87,0x91,0x0f,0x91,0x00,0x00,0xbc,0x0f,
0xbc,0x02,0xff,0x02,0xff,0x82,0xbc,0x0f,0xbc,0x02,0x00,0x03,0xbc,0x80,0x91,0x5a,
0x00,0x89,0x0f,0xbc,0x00,0x00,0xbc,0x0f,0xbc,0x91,0xff,0xff,0x02,0xff,0x82,0x0f,
0x0f,0xbc,0x03,0x00,0x80,0x91,0x02,0xbc,0x58,0x00,0x8b,0x91,0x0f,0xbc,0x0f,0x00,
0x00,0x91,0x0f,0xbc,0xbc,0xff,0xff,0x02,0xff,0x82,0x0f,0x0f,0xbc,0x06,0x00,0x80,
0x91,0x57,0x00,0x8c,0x91,0xbc,0xbc,0x91,0x0f,0x91,0x00,0x91,0xbc,0x0f,0xbc,0xff,
0xff,0x85,0xff,0xff,0x91,0x0f,0xbc,0x91,0x62,0x00,0x89,0x91,0x0f,0xbc,0x00,0x00,
0xbc,0x0f,0xbc,0x91,0xff,0x84,0xff,0xff,0xbc,0x0f,0xbc,0x64,0x00,0x88,0x0f,0xbc,
0x00,0x00,0xbc,0x0f,0xbc,0xff,0xff,0x84,0xff,0xff,0x0f,0x0f,0xbc,0x64,0x00,0x88,
0x0f,0xbc,0x00,0x00,0x91,0x0f,0xbc,0x91,0xff,0x84,0xff,0xff,0x0f,0x0f,0xbc,0x64,
0x00,0x88,0xbc,0x0f,0x00,0x00,0x91,0xbc,0x0f,0xbc,0xff,0x84,0xff,0xff,0x0f,0xbc,
0xbc,0x64,0x00,0x88,0x91,0x0f,0x91,0x00,0x91,0xbc,0x0f,0xbc,0xff,0x84,0xff,0xff,
0x0f,0xbc,0x91,0x65,0x00,0x87,0x0f,0x91,0x00,0x00,0xbc,0x0f,0xbc,0xff,0x83,0xff,
0xbc,0x0f,0xbc,0x66,0x00,0x87,0x0f,0xbc,0x00,0x00,0xbc,0x0f,0xbc,0xff,0x83,0xff,
0xbc,0x0f,0xbc,0x08,0x00,0x8b,0x91,0xbc,0x0f,0x0f,0x91,0x91,0x00,0x00,0xbc,0xbc,
0x0f,0xbc,0x51,0x00,0x87,0x0f,0xbc,0x00,0x00,0x91,0x0f,0xbc,0xff,0x83,0xff,0x0f,
0x0f,0xbc,0x07,0x00,0x80,0x91,0x04,0x0f,0x81,0xbc,0x00,0x04,0x0f,0x80,0xbc,0x50,
0x00,0x87,0x0f,0xbc,0x00,0x00,0x91,0xbc,0xbc,0xff,0x83,0xff,0x0f,0x0f,0xbc,0x07,
0x00,0x06,0x0f,0x80,0xbc,0x02,0x0f,0x83,0xbc,0x0f,0x0f,0x91,0x4f,0x00,0x87,0x0f,
0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,0x83,0xff,0x0f,0x0f,0xbc,0x06,0x00,0x80,0x91,
0x02,0x0f,0x8b,0x00,0x91,0x0f,0x0f,0xbc,0x0f,0x0f,0x91,0x00,0x0f,0x0f,0xbc,0x4f,
0x00,0x87,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,0x83,0xff,0x0f,0x0f,0xbc,0x07,
0x00,0x8e,0x91,0x91,0x00,0x00,0xbc,0x0f,0x0f,0xbc,0x0f,0x0f,0x00,0x00,0x0f,0x0f,
0xbc,0x4f,0x00,0x87,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,0x84,0xff,0x0f,0x0f,
0xbc,0x00,0x04,0x0f,0x80,0x91,0x03,0x00,0x80,0xbc,0x02,0x0f,0x87,0xbc,0x0f,0x0f,
0x00,0x00,0x0f,0x0f,0xbc,0x4f,0x00,0x87,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,
0x84,0xff,0x0f,0x0f,0xbc,0x00,0x04,0x0f,0x80,0x91,0x02,0x00,0x80,0xbc,0x02,0x0f,
0x88,0x91,0xbc,0x0f,0x0f,0x00,0x00,0x0f,0x0f,0xbc,0x4b,0x00,0x80,0x91,0x02,0xbc,
0x87,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,0x83,0xff,0x0f,0x0f,0xbc,0x08,0x00,
0x03,0x0f,0x89,0x91,0x00,0xbc,0x0f,0x0f,0x91,0x00,0x0f,0x0f,0xbc,0x4b,0x00,0x80,
0x91,0x02,0xbc,0x87,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,0x83,0xff,0x0f,0x0f,
0xbc,0x07,0x00,0x80,0xbc,0x02,0x0f,0x8a,0x91,0x00,0x00,0xbc,0x0f,0x0f,0x91,0x00,
0x0f,0x0f,0xbc,0x4e,0x00,0x88,0x91,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,0x83,
0xff,0x0f,0x0f,0xbc,0x06,0x00,0x80,0x91,0x06,0x0f,0x80,0xbc,0x05,0x0f,0x80,0x91,
0x4e,0x00,0x88,0x91,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,0x83,0xff,0x91,0x0f,
0xbc,0x06,0x00,0x80,0x91,0x06,0x0f,0x81,0x91,0xbc,0x03,0x0f,0x80,0xbc,0x4f,0x00,
0x88,0x91,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,0x83,0xff,0x91,0x0f,0xbc,0x10,
0x00,0x02,0x91,0x51,0x00,0x88,0x91,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xff,0x84,
0xff,0x91,0x0f,0xbc,0xbc,0x64,0x00,0x88,0x91,0x0f,0x91,0x00,0x00,0x91,0xbc,0x0f,
0xff,0x84,0xff,0x91,0x0f,0xbc,0xbc,0x64,0x00,0x88,0x91,0x0f,0x91,0x00,0x91,0xbc,
0xbc,0x0f,0xff,0x84,0xff,0xff,0x0f,0xbc,0xbc,0x64,0x00,0x88,0x91,0x0f,0x91,0x00,
0x91,0xbc,0xbc,0x0f,0xff,0x84,0xff,0xff,0x0f,0xbc,0xbc,0x64,0x00,0x84,0xbc,0xbc,
0x00,0x00,0x91,0x02,0xbc,0x80,0xff,0x84,0xff,0xff,0x0f,0x0f,0xbc,0x64,0x00,0x88,
0xbc,0xbc,0x00,0x00,0x91,0xbc,0x0f,0xbc,0xff,0x84,0xff,0xff,0x0f,0x0f,0xbc,0x64,
0x00,0x88,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0x91,0xff,0x85,0xff,0xff,0x91,0x0f,
0xbc,0xbc,0x62,0x00,0x89,0x91,0x0f,0x91,0x00,0x91,0x91,0xbc,0x0f,0x91,0xff,0x85,
0xff,0xff,0x91,0x0f,0xbc,0xbc,0x06,0x00,0x80,0x91,0x5a,0x00,0x83,0x91,0x0f,0x00,
0x00,0x03,0xbc,0x81,0xff,0xff,0x02,0xff,0x82,0x0f,0x0f,0xbc,0x03,0x00,0x80,0x91,
0x02,0xbc,0x5a,0x00,0x89,0xbc,0x0f,0x00,0x00,0x91,0xbc,0x0f,0xbc,0xff,0xff,0x02,
0xff,0x82,0xbc,0x0f,0xbc,0x02,0x00,0x03,0xbc,0x80,0x91,0x57,0x00,0x8c,0x0f,0x91,
0x91,0x0f,0xbc,0x00,0x00,0x91,0xbc,0x0f,0x91,0xff,0xff,0x02,0xff,0x87,0x91,0x0f,
0xbc,0xbc,0x00,0x00,0xbc,0x91,0x5a,0x00,0x80,0xbc,0x02,0x0f,0x88,0x91,0x00,0x91,
0x91,0xbc,0x0f,0x91,0xff,0xff,0x03,0xff,0x82,0x0f,0xbc,0xbc,0x5e,0x00,0x8c,0x91,
0x91,0xbc,0x0f,0x00,0x00,0x91,0xbc,0x0f,0xbc,0x91,0xff,0xff,0x03,0xff,0x83,0x0f,
0x0f,0xbc,0x91,0x0e,0x00,0x03,0x91,0x4c,0x00,0x8a,0xbc,0xbc,0x00,0x00,0x91,0xbc,
0x0f,0x91,0x91,0xff,0xff,0x03,0xff,0x83,0x91,0x0f,0xbc,0xbc,0x0d,0x00,0x80,0x91,
0x03,0x0f,0x80,0x91,0x4a,0x00,0x88,0x91,0x0f,0x00,0x00,0xbc,0x91,0x0f,0xbc,0x91,
0x02,0xff,0x04,0xff,0x82,0x0f,0x0f,0xbc,0x0c,0x00,0x80,0x91,0x05,0x0f,0x80,0x91,
0x49,0x00,0x88,0xbc,0x0f,0x00,0x00,0x91,0xbc,0x0f,0x91,0x91,0x02,0xff,0x04,0xff,
0x83,0x0f,0x0f,0x91,0xbc,0x0b,0x00,0x87,0xbc,0x0f,0x0f,0x00,0x91,0x0f,0x0f,0x91,
0x49,0x00,0x88,0x0f,0xbc,0x00,0x91,0x91,0x0f,0x0f,0x91,0x91,0x02,0xff,0x04,0xff,
0x83,0x91,0x0f,0xbc,0xbc,0x0b,0x00,0x02,0x0f,0x84,0x00,0x00,0x0f,0x0f,0xbc,0x48,
0x00,0x88,0xbc,0x0f,0x00,0x00,0x91,0xbc,0x0f,0xbc,0x91,0x03,0xff,0x05,0xff,0x83,
0x0f,0x0f,0xbc,0xbc,0x0a,0x00,0x02,0x0f,0x81,0x00,0x00,0x02,0x0f,0x48,0x00,0x88,
0x0f,0xbc,0x00,0x91,0x91,0x0f,0xbc,0x91,0x91,0x03,0xff,0x05,0xff,0x83,0x91,0x0f,
0xbc,0xbc,0x0a,0x00,0x02,0x0f,0x81,0x00,0x00,0x02,0x0f,0x47,0x00,0x88,0xbc,0x0f,
0x00,0x00,0x91,0x0f,0xbc,0xbc,0x91,0x04,0xff,0x06,0xff,0x83,0x0f,0x0f,0xbc,0xbc,
0x09,0x00,0x02,0x0f,0x81,0x00,0x00,0x02,0x0f,0x46,0x00,0x89,0x91,0x0f,0x91,0x00,
0x91,0x91,0x0f,0xbc,0x91,0x91,0x04,0xff,0x06,0xff,0x83,0x91,0x0f,0xbc,0xbc,0x05,
0x00,0x83,0x91,0x0f,0xbc,0x00,0x02,0x0f,0x84,0x00,0x00,0x0f,0x0f,0xbc,0x46,0x00,
0x88,0xbc,0x0f,0x00,0x00,0x91,0x0f,0xbc,0xbc,0x91,0x05,0xff,0x07,0xff,0x83,0xbc,
0x0f,0x91,0xbc,0x03,0x00,0x8c,0xbc,0x0f,0x0f,0xbc,0x00,0xbc,0x0f,0x0f,0xbc,0xbc,
0x0f,0x0f,0x91,0x45,0x00,0x89,0x91,0x0f,0x91,0x00,0xbc,0xbc,0x0f,0xbc,0x91,0x91,
0x05,0xff,0x07,0xff,0x86,0x91,0x0f,0xbc,0xbc,0x91,0x00,0x00,0x02,0x0f,0x03,0x00,
0x05,0x0f,0x19,0x00,0x80,0xbc,0x02,0x0f,0x85,0xbc,0x00,0x00,0xbc,0x0f,0xbc,0x1d,
0x00,0x80,0x91,0x03,0x00,0x88,0xbc,0xbc,0x00,0x91,0x91,0x0f,0xbc,0x91,0x91,0x06,
0xff,0x08,0xff,0x83,0xbc,0x0f,0xbc,0xbc,0x02,0x00,0x80,0xbc,0x04,0x00,0x84,0x91,
0xbc,0x0f,0x0f,0xbc,0x19,0x00,0x81,0xbc,0x0f,0x02,0x00,0x85,0x0f,0xbc,0x0f,0xbc,
0x00,0x0f,0x1d,0x00,0x8c,0xbc,0xbc,0x00,0x00,0xbc,0x0f,0x91,0x00,0xbc,0x0f,0xbc,
0xbc,0x91,0x07,0xff,0x08,0xff,0x84,0x91,0x0f,0x0f,0xbc,0xbc,0x26,0x00,0x8a,0x0f,
0x00,0x00,0x0f,0x00,0x00,0x0f,0xbc,0x00,0x00,0xbc,0x1e,0x00,0x8b,0x91,0x00,0xbc,
0x0f,0x00,0x00,0xbc,0xbc,0x0f,0xbc,0x91,0x91,0x07,0xff,0x09,0xff,0x84,0x91,0x0f,
0xbc,0xbc,0x91,0x25,0x00,0x89,0x0f,0x00,0x00,0x0f,0x00,0x00,0xbc,0x00,0x00,0xbc,
0x20,0x00,0x89,0xbc,0x0f,0x00,0x00,0x91,0xbc,0x0f,0xbc,0x91,0x91,0x08,0xff,0x0a,
0xff,0x84,0xbc,0x0f,0xbc,0xbc,0x91,0x24,0x00,0x81,0xbc,0x0f,0x02,0x00,0x83,0x0f,
0x00,0x00,0x0f,0x21,0x00,0x89,0x0f,0x00,0x00,0x91,0xbc,0x0f,0xbc,0xbc,0x91,0x91,
0x08,0xff,0x0a,0xff,0x84,0x91,0xbc,0x0f,0x91,0xbc,0x25,0x00,0x80,0xbc,0x02,0x0f,
0x83,0x00,0x00,0x0f,0xbc,0x22,0x00,0x87,0x91,0x00,0xbc,0x0f,0xbc,0xbc,0x91,0x91,
0x09,0xff,0x0b,0xff,0x84,0x91,0x0f,0x0f,0xbc,0xbc,0x25,0x00,0x83,0xbc,0x0f,0x00,
0x00,0x02,0x0f,0x80,0xbc,0x22,0x00,0x80,0x0f,0x02,0xbc,0x81,0x91,0x91,0x0a,0xff,
0x0c,0xff,0x84,0x91,0x0f,0x0f,0xbc,0xbc,0x24,0x00,0x83,0x0f,0x00,0x00,0x0f,0x02,
0x00,0x81,0x0f,0xbc,0x20,0x00,0x85,0xbc,0xbc,0x0f,0xbc,0x91,0x91,0x0b,0xff,0x0d,
0xff,0x84,0x91,0x0f,0xbc,0xbc,0x91,0x22,0x00,0x89,0x0f,0x00,0x00,0x0f,0x00,0x00,
0x0f,0x00,0x00,0x0f,0x1f,0x00,0x83,0x91,0xbc,0x0f,0xbc,0x02,0x91,0x0b,0xff,0x0d,
0xff,0x85,0x91,0x91,0x0f,0xbc,0xbc,0x91,0x20,0x00,0x8a,0x0f,0x00,0x00,0x0f,0xbc,
0x00,0x00,0x0f,0x00,0x00,0x0f,0x1e,0x00,0x86,0x91,0xbc,0x0f,0xbc,0xbc,0x91,0x91,
0x0c,0xff,0x0e,0xff,0x85,0x91,0x91,0x0f,0xbc,0xbc,0x91,0x1f,0x00,0x85,0x0f,0x00,
0xbc,0xbc,0x00,0x0f,0x02,0x00,0x81,0x0f,0xbc,0x1d,0x00,0x86,0x91,0xbc,0x0f,0xbc,
0xbc,0x91,0x91,0x0d,0xff,0x0f,0xff,0x82,0x91,0x91,0x0f,0x02,0xbc,0x1e,0x00,0x85,
0xbc,0x0f,0xbc,0x00,0x00,0xbc,0x02,0x0f,0x80,0xbc,0x1d,0x00,0x86,0xbc,0xbc,0x0f,
0xbc,0xbc,0x91,0x91,0x0e,0xff,0x10,0xff,0x82,0x91,0x91,0x0f,0x02,0xbc,0x44,0x00,
0x86,0xbc,0xbc,0x0f,0xbc,0xbc,0x91,0x91,0x0f,0xff,0x11,0xff,0x82,0x91,0x91,0x0f,
0x02,0xbc,0x80,0x91,0x41,0x00,0x86,0xbc,0xbc,0x0f,0xbc,0xbc,0x91,0x91,0x10,0xff,
0x12,0xff,0x86,0x91,0x91,0xbc,0x0f,0xbc,0xbc,0x91,0x3e,0x00,0x87,0x91,0xbc,0xbc,
0x0f,0xbc,0xbc,0x91,0x91,0x11,0xff,0x13,0xff,0x02,0x91,0x83,0x0f,0x91,0xbc,0xbc,
0x3c,0x00,0x85,0xbc,0x91,0xbc,0x0f,0x0f,0xbc,0x02,0x91,0x11,0xff,0x14,0xff,0x02,
0x91,0x80,0x0f,0x02,0xbc,0x80,0x91,0x38,0x00,0x85,0x91,0xbc,0x91,0xbc,0x0f,0xbc,
0x03,0x91,0x12,0xff,0x16,0xff,0x81,0x91,0x91,0x04,0xbc,0x36,0x00,0x85,0xbc,0xbc,
0x91,0x0f,0x0f,0xbc,0x03,0x91,0x13,0xff,0x17,0xff,0x02,0x91,0x03,0xbc,0x80,0x91,
0x32,0x00,0x86,0x91,0xbc,0x91,0xbc,0x0f,0x0f,0xbc,0x03,0x91,0x14,0xff,0x18,0xff,
0x02,0x91,0x85,0xbc,0xbc,0x91,0xbc,0xbc,0x91,0x2e,0x00,0x86,0x91,0xbc,0x91,0xbc,
0xbc,0x0f,0xbc,0x03,0x91,0x16,0xff,0x1a,0xff,0x82,0x91,0xbc,0x91,0x04,0xbc,0x80,
0x91,0x2a,0x00,0x87,0x91,0xbc,0x91,0xbc,0xbc,0x0f,0x0f,0xbc,0x03,0x91,0x17,0xff,
0x1b,0xff,0x83,0x91,0xbc,0xbc,0x91,0x05,0xbc,0x80,0x91,0x25,0x00,0x82,0xbc,0xbc,
0x91,0x02,0xbc,0x81,0x0f,0xbc,0x04,0x91,0x18,0xff,0x1d,0xff,0x86,0x91,0x91,0xbc,
0x91,0xbc,0xbc,0x91,0x02,0xbc,0x81,0x91,0x91,0x1f,0x00,0x88,0x91,0xbc,0xbc,0x91,
0xbc,0xbc,0x0f,0x0f,0xbc,0x04,0x91,0x1a,0xff,0x1f,0xff,0x04,0x91,0x06,0xbc,0x81,
0x91,0x91,0x17,0x00,0x80,0x91,0x02,0xbc,0x80,0x91,0x02,0xbc,0x82,0x0f,0xbc,0xbc,
0x04,0x91,0x1c,0xff,0x21,0xff,0x84,0x91,0x91,0xbc,0x91,0x91,0x08,0xbc,0x02,0x91,
0x0d,0x00,0x81,0x91,0x91,0x02,0xbc,0x80,0x91,0x03,0xbc,0x82,0x0f,0xbc,0xbc,0x05,
0x91,0x1e,0xff,0x23,0xff,0x02,0x91,0x82,0xbc,0x91,0x91,0x1d,0xbc,0x82,0x0f,0xbc,
0xbc,0x06,0x91,0x20,0xff,0x26,0xff,0x02,0x91,0x80,0xbc,0x02,0x91,0x14,0xbc,0x81,
0x0f,0x0f,0x02,0xbc,0x07,0x91,0x22,0xff,0x29,0xff,0x03,0x91,0x80,0xbc,0x04,0x91,
0x02,0xbc,0x05,0x0f,0x05,0xbc,0x08,0x91,0x26,0xff,0x2d,0xff,0x19,0x91,0x2a,0xff,
0x33,0xff,0x0e,0x91,0x2f,0xff,};
PegBitmap gbDialBitmap = { 0x11, 8, 115, 116, 0x000000ff, (UCHAR *) ucDialBitmap};

#else

ROMDATA UCHAR ucDial16Bitmap[3638] = {
0x72,0xff,0x2e,0xff,0x82,0x08,0x08,0x07,0x02,0x0f,0x80,0x07,0x0a,0x0f,0x81,0x07,
0x07,0x2f,0xff,0x2a,0xff,0x81,0x08,0x07,0x04,0x0f,0x0f,0x07,0x03,0x0f,0x80,0x07,
0x2b,0xff,0x27,0xff,0x80,0x08,0x03,0x0f,0x18,0x07,0x03,0x0f,0x80,0x08,0x27,0xff,
0x24,0xff,0x80,0x08,0x03,0x0f,0x05,0x07,0x02,0x08,0x0c,0x00,0x02,0x08,0x05,0x07,
0x03,0x0f,0x80,0x08,0x24,0xff,0x22,0xff,0x80,0x08,0x02,0x0f,0x04,0x07,0x80,0x08,
0x0b,0x00,0x81,0x07,0x07,0x0a,0x00,0x80,0x08,0x04,0x07,0x03,0x0f,0x22,0xff,0x20,
0xff,0x80,0x08,0x02,0x0f,0x02,0x07,0x80,0x08,0x0f,0x00,0x81,0x0f,0x0f,0x0e,0x00,
0x80,0x08,0x02,0x07,0x03,0x0f,0x80,0x08,0x1f,0xff,0x1f,0xff,0x81,0x0f,0x0f,0x03,
0x07,0x12,0x00,0x81,0x0f,0x0f,0x10,0x00,0x80,0x08,0x02,0x07,0x84,0x0f,0x0f,0x07,
0x0f,0x08,0x1d,0xff,0x1d,0xff,0x81,0x0f,0x0f,0x02,0x07,0x80,0x08,0x05,0x00,0x81,
0x07,0x07,0x0c,0x00,0x81,0x07,0x07,0x0e,0x00,0x81,0x08,0x08,0x02,0x00,0x87,0x08,
0x07,0x07,0x0f,0x0f,0x07,0x0f,0x08,0x1b,0xff,0x1b,0xff,0x85,0x07,0x0f,0x0f,0x07,
0x07,0x08,0x07,0x00,0x82,0x07,0x07,0x08,0x1a,0x00,0x82,0x07,0x07,0x08,0x05,0x00,
0x82,0x08,0x07,0x07,0x02,0x0f,0x80,0x07,0x1a,0xff,0x1a,0xff,0x84,0x0f,0x0f,0x07,
0x07,0x08,0x09,0x00,0x82,0x08,0x07,0x08,0x1a,0x00,0x02,0x0f,0x07,0x00,0x86,0x08,
0x07,0x0f,0x0f,0x07,0x0f,0x07,0x18,0xff,0x18,0xff,0x84,0x08,0x0f,0x0f,0x07,0x07,
0x0c,0x00,0x81,0x07,0x07,0x1a,0x00,0x02,0x0f,0x09,0x00,0x85,0x07,0x07,0x0f,0x0f,
0x07,0x07,0x17,0xff,0x17,0xff,0x84,0x07,0x0f,0x07,0x07,0x08,0x0d,0x00,0x81,0x07,
0x07,0x19,0x00,0x83,0x07,0x0f,0x0f,0x08,0x0a,0x00,0x81,0x08,0x07,0x03,0x0f,0x16,
0xff,0x15,0xff,0x84,0x08,0x0f,0x0f,0x07,0x07,0x2b,0x00,0x82,0x07,0x0f,0x0f,0x0d,
0x00,0x81,0x07,0x07,0x02,0x0f,0x15,0xff,0x14,0xff,0x84,0x08,0x0f,0x0f,0x07,0x08,
0x3e,0x00,0x85,0x08,0x07,0x0f,0x0f,0x07,0x08,0x13,0xff,0x13,0xff,0x83,0x07,0x0f,
0x0f,0x07,0x0d,0x00,0x84,0x08,0x07,0x0f,0x0f,0x08,0x02,0x00,0x83,0x08,0x0f,0x0f,
0x07,0x0c,0x00,0x80,0x07,0x02,0x0f,0x80,0x07,0x02,0x00,0x03,0x0f,0x80,0x08,0x0e,
0x00,0x02,0x0f,0x81,0x07,0x07,0x12,0xff,0x12,0xff,0x83,0x07,0x0f,0x0f,0x07,0x02,
0x00,0x81,0x07,0x07,0x08,0x00,0x80,0x08,0x05,0x0f,0x81,0x00,0x07,0x04,0x0f,0x80,
0x08,0x09,0x00,0x80,0x07,0x05,0x0f,0x80,0x00,0x05,0x0f,0x80,0x08,0x09,0x00,0x80,
0x08,0x03,0x00,0x03,0x0f,0x80,0x08,0x11,0xff,0x10,0xff,0x84,0x00,0x07,0x0f,0x0f,
0x07,0x03,0x00,0x02,0x07,0x07,0x00,0x02,0x0f,0x80,0x08,0x02,0x0f,0x87,0x08,0x0f,
0x0f,0x07,0x08,0x0f,0x0f,0x07,0x08,0x00,0x80,0x08,0x02,0x0f,0x80,0x00,0x02,0x0f,
0x87,0x08,0x0f,0x0f,0x07,0x00,0x07,0x0f,0x07,0x08,0x00,0x82,0x08,0x0f,0x0f,0x03,
0x00,0x80,0x07,0x02,0x0f,0x80,0x07,0x10,0xff,0x10,0xff,0x83,0x07,0x0f,0x0f,0x08,
0x05,0x00,0x02,0x07,0x05,0x00,0x83,0x08,0x0f,0x0f,0x07,0x03,0x00,0x87,0x07,0x0f,
0x0f,0x08,0x00,0x08,0x0f,0x0f,0x09,0x00,0x02,0x0f,0x80,0x00,0x02,0x0f,0x87,0x07,
0x0f,0x0f,0x08,0x00,0x07,0x0f,0x0f,0x08,0x00,0x82,0x07,0x0f,0x08,0x04,0x00,0x80,
0x08,0x02,0x0f,0x80,0x07,0x0f,0xff,0x0f,0xff,0x83,0x07,0x0f,0x0f,0x08,0x07,0x00,
0x81,0x07,0x07,0x05,0x00,0x80,0x08,0x05,0x0f,0x88,0x08,0x07,0x0f,0x0f,0x08,0x00,
0x08,0x0f,0x0f,0x09,0x00,0x80,0x07,0x04,0x0f,0x88,0x07,0x07,0x0f,0x0f,0x08,0x00,
0x07,0x0f,0x0f,0x07,0x00,0x82,0x08,0x0f,0x07,0x06,0x00,0x84,0x08,0x0f,0x0f,0x07,
0x07,0x0e,0xff,0x0e,0xff,0x83,0x07,0x0f,0x0f,0x08,0x10,0x00,0x80,0x07,0x06,0x0f,
0x87,0x07,0x0f,0x0f,0x08,0x00,0x08,0x0f,0x0f,0x09,0x00,0x80,0x07,0x04,0x0f,0x89,
0x07,0x07,0x0f,0x0f,0x08,0x00,0x07,0x0f,0x0f,0x08,0x11,0x00,0x83,0x08,0x0f,0x0f,
0x07,0x0e,0xff,0x0d,0xff,0x83,0x08,0x0f,0x0f,0x07,0x11,0x00,0x84,0x07,0x0f,0x0f,
0x07,0x00,0x02,0x0f,0x87,0x07,0x0f,0x0f,0x08,0x00,0x08,0x0f,0x0f,0x08,0x00,0x80,
0x08,0x02,0x0f,0x80,0x08,0x02,0x0f,0x87,0x07,0x0f,0x0f,0x08,0x00,0x07,0x0f,0x0f,
0x13,0x00,0x83,0x07,0x0f,0x0f,0x07,0x0d,0xff,0x0c,0xff,0x83,0x08,0x0f,0x0f,0x07,
0x12,0x00,0x8f,0x08,0x0f,0x0f,0x08,0x00,0x08,0x0f,0x0f,0x07,0x0f,0x0f,0x08,0x00,
0x08,0x0f,0x0f,0x08,0x00,0x8f,0x07,0x0f,0x0f,0x08,0x00,0x07,0x0f,0x0f,0x08,0x0f,
0x0f,0x08,0x00,0x07,0x0f,0x0f,0x14,0x00,0x83,0x07,0x0f,0x0f,0x07,0x0c,0xff,0x0c,
0xff,0x02,0x0f,0x13,0x00,0x8a,0x08,0x0f,0x0f,0x07,0x08,0x07,0x0f,0x0f,0x07,0x0f,
0x0f,0x02,0x08,0x81,0x0f,0x0f,0x08,0x00,0x80,0x08,0x02,0x0f,0x80,0x08,0x02,0x0f,
0x87,0x07,0x0f,0x0f,0x07,0x08,0x07,0x0f,0x07,0x15,0x00,0x03,0x0f,0x0b,0xff,0x0b,
0xff,0x82,0x07,0x0f,0x0f,0x15,0x00,0x80,0x07,0x05,0x0f,0x80,0x08,0x05,0x0f,0x80,
0x08,0x09,0x00,0x80,0x07,0x04,0x0f,0x81,0x07,0x00,0x05,0x0f,0x80,0x08,0x16,0x00,
0x83,0x0f,0x0f,0x07,0x07,0x0a,0xff,0x0a,0xff,0x83,0x08,0x0f,0x0f,0x08,0x15,0x00,
0x81,0x08,0x07,0x03,0x0f,0x82,0x08,0x00,0x08,0x03,0x0f,0x80,0x07,0x0b,0x00,0x03,
0x0f,0x83,0x07,0x00,0x00,0x08,0x03,0x0f,0x80,0x08,0x17,0x00,0x84,0x08,0x07,0x0f,
0x07,0x08,0x09,0xff,0x0a,0xff,0x02,0x0f,0x82,0x00,0x07,0x0f,0x15,0x00,0x02,0x08,
0x04,0x00,0x02,0x08,0x32,0x00,0x83,0x07,0x07,0x0f,0x07,0x09,0xff,0x09,0xff,0x88,
0x07,0x0f,0x0f,0x00,0x00,0x07,0x0f,0x07,0x07,0x4e,0x00,0x80,0x08,0x02,0x00,0x83,
0x07,0x0f,0x0f,0x07,0x08,0xff,0x08,0xff,0x83,0x08,0x0f,0x0f,0x08,0x02,0x00,0x80,
0x07,0x02,0x0f,0x4c,0x00,0x89,0x08,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0x07,0x08,
0x07,0xff,0x08,0xff,0x02,0x0f,0x04,0x00,0x87,0x08,0x0f,0x08,0x00,0x00,0x07,0x0f,
0x08,0x02,0x00,0x83,0x08,0x07,0x07,0x08,0x28,0x00,0x02,0x08,0x03,0x00,0x02,0x08,
0x04,0x00,0x81,0x08,0x08,0x05,0x00,0x82,0x07,0x0f,0x0f,0x03,0x00,0x83,0x08,0x07,
0x0f,0x07,0x07,0xff,0x07,0xff,0x82,0x07,0x0f,0x0f,0x09,0x00,0x80,0x08,0x02,0x0f,
0x81,0x00,0x00,0x05,0x0f,0x26,0x00,0x80,0x07,0x02,0x0f,0x02,0x00,0x80,0x07,0x03,
0x0f,0x83,0x08,0x00,0x08,0x07,0x02,0x0f,0x80,0x07,0x02,0x00,0x02,0x0f,0x05,0x00,
0x83,0x07,0x0f,0x07,0x08,0x06,0xff,0x07,0xff,0x82,0x0f,0x0f,0x07,0x08,0x00,0x80,
0x08,0x03,0x0f,0x81,0x00,0x08,0x05,0x0f,0x80,0x08,0x24,0x00,0x80,0x07,0x03,0x0f,
0x82,0x00,0x00,0x08,0x05,0x0f,0x81,0x08,0x08,0x04,0x0f,0x84,0x07,0x00,0x00,0x0f,
0x0f,0x03,0x00,0x86,0x08,0x00,0x00,0x08,0x07,0x0f,0x07,0x06,0xff,0x06,0xff,0x82,
0x07,0x0f,0x0f,0x09,0x00,0x04,0x0f,0x88,0x00,0x07,0x0f,0x0f,0x00,0x08,0x0f,0x0f,
0x07,0x24,0x00,0x04,0x0f,0x90,0x00,0x00,0x0f,0x0f,0x07,0x08,0x07,0x0f,0x0f,0x07,
0x0f,0x0f,0x07,0x08,0x07,0x0f,0x07,0x06,0x00,0x88,0x07,0x0f,0x08,0x00,0x00,0x07,
0x0f,0x07,0x08,0x05,0xff,0x06,0xff,0x82,0x0f,0x0f,0x07,0x08,0x00,0x80,0x08,0x04,
0x0f,0x88,0x00,0x07,0x0f,0x0f,0x00,0x08,0x0f,0x0f,0x07,0x24,0x00,0x81,0x08,0x08,
0x02,0x0f,0x90,0x00,0x00,0x0f,0x0f,0x07,0x00,0x08,0x07,0x0f,0x07,0x0f,0x0f,0x08,
0x00,0x07,0x0f,0x0f,0x06,0x00,0x89,0x08,0x07,0x07,0x00,0x00,0x08,0x07,0x0f,0x07,
0x08,0x04,0xff,0x05,0xff,0x82,0x07,0x0f,0x0f,0x09,0x00,0x82,0x0f,0x0f,0x08,0x02,
0x0f,0x88,0x00,0x07,0x0f,0x0f,0x00,0x00,0x0f,0x0f,0x07,0x26,0x00,0x02,0x0f,0x90,
0x00,0x00,0x0f,0x0f,0x07,0x00,0x08,0x07,0x0f,0x07,0x0f,0x0f,0x08,0x00,0x07,0x0f,
0x0f,0x07,0x00,0x88,0x08,0x0f,0x08,0x00,0x00,0x07,0x0f,0x07,0x08,0x04,0xff,0x05,
0xff,0x82,0x0f,0x0f,0x07,0x08,0x00,0x83,0x07,0x0f,0x0f,0x00,0x02,0x0f,0x88,0x00,
0x07,0x0f,0x0f,0x00,0x00,0x0f,0x0f,0x07,0x26,0x00,0x02,0x0f,0x90,0x00,0x00,0x0f,
0x0f,0x07,0x00,0x08,0x07,0x0f,0x07,0x0f,0x0f,0x08,0x00,0x07,0x0f,0x0f,0x08,0x00,
0x87,0x07,0x0f,0x00,0x00,0x08,0x07,0x0f,0x0f,0x04,0xff,0x04,0xff,0x82,0x08,0x0f,
0x0f,0x09,0x00,0x07,0x0f,0x87,0x07,0x0f,0x0f,0x00,0x08,0x0f,0x0f,0x07,0x26,0x00,
0x02,0x0f,0x90,0x00,0x00,0x0f,0x0f,0x07,0x00,0x08,0x07,0x0f,0x07,0x0f,0x0f,0x08,
0x00,0x07,0x0f,0x0f,0x08,0x00,0x81,0x08,0x0f,0x02,0x00,0x83,0x07,0x0f,0x07,0x08,
0x03,0xff,0x04,0xff,0x82,0x0f,0x0f,0x07,0x09,0x00,0x07,0x0f,0x87,0x07,0x0f,0x0f,
0x00,0x08,0x0f,0x0f,0x07,0x26,0x00,0x02,0x0f,0x90,0x00,0x00,0x0f,0x0f,0x07,0x00,
0x08,0x07,0x0f,0x07,0x0f,0x0f,0x08,0x00,0x07,0x0f,0x0f,0x09,0x00,0x87,0x07,0x0f,
0x00,0x00,0x08,0x0f,0x07,0x07,0x03,0xff,0x03,0xff,0x83,0x08,0x0f,0x0f,0x08,0x0d,
0x00,0x02,0x0f,0x81,0x00,0x08,0x05,0x0f,0x80,0x08,0x26,0x00,0x02,0x0f,0x81,0x00,
0x00,0x02,0x0f,0x8b,0x08,0x08,0x0f,0x0f,0x07,0x0f,0x0f,0x07,0x00,0x07,0x0f,0x07,
0x09,0x00,0x81,0x07,0x0f,0x02,0x00,0x83,0x07,0x0f,0x07,0x08,0x02,0xff,0x03,0xff,
0x82,0x07,0x0f,0x0f,0x0e,0x00,0x02,0x0f,0x81,0x00,0x00,0x04,0x0f,0x80,0x07,0x27,
0x00,0x02,0x0f,0x82,0x00,0x00,0x08,0x04,0x0f,0x82,0x07,0x00,0x07,0x04,0x0f,0x80,
0x08,0x09,0x00,0x87,0x08,0x0f,0x07,0x00,0x00,0x07,0x0f,0x07,0x03,0xff,0x03,0xff,
0x82,0x0f,0x0f,0x07,0x14,0x00,0x82,0x08,0x07,0x07,0x29,0x00,0x02,0x08,0x02,0x00,
0x80,0x08,0x02,0x0f,0x80,0x08,0x02,0x00,0x80,0x07,0x02,0x0f,0x80,0x08,0x0b,0x00,
0x87,0x07,0x0f,0x00,0x00,0x08,0x0f,0x0f,0x07,0x02,0xff,0x02,0xff,0x87,0x08,0x0f,
0x0f,0x08,0x00,0x00,0x07,0x08,0x5c,0x00,0x87,0x08,0x0f,0x08,0x00,0x00,0x07,0x0f,
0x07,0x02,0xff,0x02,0xff,0x82,0x07,0x0f,0x07,0x02,0x00,0x03,0x07,0x80,0x08,0x5a,
0x00,0x89,0x0f,0x07,0x00,0x00,0x07,0x0f,0x07,0x08,0xff,0xff,0x02,0xff,0x82,0x0f,
0x0f,0x07,0x03,0x00,0x80,0x08,0x02,0x07,0x58,0x00,0x8b,0x08,0x0f,0x07,0x0f,0x00,
0x00,0x08,0x0f,0x07,0x07,0xff,0xff,0x02,0xff,0x82,0x0f,0x0f,0x07,0x06,0x00,0x80,
0x08,0x57,0x00,0x8c,0x08,0x07,0x07,0x08,0x0f,0x08,0x00,0x08,0x07,0x0f,0x07,0xff,
0xff,0x85,0xff,0xff,0x08,0x0f,0x07,0x08,0x62,0x00,0x89,0x08,0x0f,0x07,0x00,0x00,
0x07,0x0f,0x07,0x08,0xff,0x84,0xff,0xff,0x07,0x0f,0x07,0x64,0x00,0x88,0x0f,0x07,
0x00,0x00,0x07,0x0f,0x07,0xff,0xff,0x84,0xff,0xff,0x0f,0x0f,0x07,0x64,0x00,0x88,
0x0f,0x07,0x00,0x00,0x08,0x0f,0x07,0x08,0xff,0x84,0xff,0xff,0x0f,0x0f,0x07,0x64,
0x00,0x88,0x07,0x0f,0x00,0x00,0x08,0x07,0x0f,0x07,0xff,0x84,0xff,0xff,0x0f,0x07,
0x07,0x64,0x00,0x88,0x08,0x0f,0x08,0x00,0x08,0x07,0x0f,0x07,0xff,0x84,0xff,0xff,
0x0f,0x07,0x08,0x65,0x00,0x87,0x0f,0x08,0x00,0x00,0x07,0x0f,0x07,0xff,0x83,0xff,
0x07,0x0f,0x07,0x66,0x00,0x87,0x0f,0x07,0x00,0x00,0x07,0x0f,0x07,0xff,0x83,0xff,
0x07,0x0f,0x07,0x08,0x00,0x8b,0x08,0x07,0x0f,0x0f,0x08,0x08,0x00,0x00,0x07,0x07,
0x0f,0x07,0x51,0x00,0x87,0x0f,0x07,0x00,0x00,0x08,0x0f,0x07,0xff,0x83,0xff,0x0f,
0x0f,0x07,0x07,0x00,0x80,0x08,0x04,0x0f,0x81,0x07,0x00,0x04,0x0f,0x80,0x07,0x50,
0x00,0x87,0x0f,0x07,0x00,0x00,0x08,0x07,0x07,0xff,0x83,0xff,0x0f,0x0f,0x07,0x07,
0x00,0x06,0x0f,0x80,0x07,0x02,0x0f,0x83,0x07,0x0f,0x0f,0x08,0x4f,0x00,0x87,0x0f,
0x07,0x00,0x00,0x08,0x07,0x0f,0xff,0x83,0xff,0x0f,0x0f,0x07,0x06,0x00,0x80,0x08,
0x02,0x0f,0x8b,0x00,0x08,0x0f,0x0f,0x07,0x0f,0x0f,0x08,0x00,0x0f,0x0f,0x07,0x4f,
0x00,0x87,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0xff,0x83,0xff,0x0f,0x0f,0x07,0x07,
0x00,0x8e,0x08,0x08,0x00,0x00,0x07,0x0f,0x0f,0x07,0x0f,0x0f,0x00,0x00,0x0f,0x0f,
0x07,0x4f,0x00,0x87,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0xff,0x84,0xff,0x0f,0x0f,
0x07,0x00,0x04,0x0f,0x80,0x08,0x03,0x00,0x80,0x07,0x02,0x0f,0x87,0x07,0x0f,0x0f,
0x00,0x00,0x0f,0x0f,0x07,0x4f,0x00,0x87,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0xff,
0x84,0xff,0x0f,0x0f,0x07,0x00,0x04,0x0f,0x80,0x08,0x02,0x00,0x80,0x07,0x02,0x0f,
0x88,0x08,0x07,0x0f,0x0f,0x00,0x00,0x0f,0x0f,0x07,0x4b,0x00,0x80,0x08,0x02,0x07,
0x87,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0xff,0x83,0xff,0x0f,0x0f,0x07,0x08,0x00,
0x03,0x0f,0x89,0x08,0x00,0x07,0x0f,0x0f,0x08,0x00,0x0f,0x0f,0x07,0x4b,0x00,0x80,
0x08,0x02,0x07,0x87,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0xff,0x83,0xff,0x0f,0x0f,
0x07,0x07,0x00,0x80,0x07,0x02,0x0f,0x8a,0x08,0x00,0x00,0x07,0x0f,0x0f,0x08,0x00,
0x0f,0x0f,0x07,0x4e,0x00,0x88,0x08,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0xff,0x83,
0xff,0x0f,0x0f,0x07,0x06,0x00,0x80,0x08,0x06,0x0f,0x80,0x07,0x05,0x0f,0x80,0x08,
0x4e,0x00,0x88,0x08,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0xff,0x83,0xff,0x08,0x0f,
0x07,0x06,0x00,0x80,0x08,0x06,0x0f,0x81,0x08,0x07,0x03,0x0f,0x80,0x07,0x4f,0x00,
0x88,0x08,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0xff,0x83,0xff,0x08,0x0f,0x07,0x10,
0x00,0x02,0x08,0x51,0x00,0x88,0x08,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0xff,0x84,
0xff,0x08,0x0f,0x07,0x07,0x64,0x00,0x88,0x08,0x0f,0x08,0x00,0x00,0x08,0x07,0x0f,
0xff,0x84,0xff,0x08,0x0f,0x07,0x07,0x64,0x00,0x88,0x08,0x0f,0x08,0x00,0x08,0x07,
0x07,0x0f,0xff,0x84,0xff,0xff,0x0f,0x07,0x07,0x64,0x00,0x88,0x08,0x0f,0x08,0x00,
0x08,0x07,0x07,0x0f,0xff,0x84,0xff,0xff,0x0f,0x07,0x07,0x64,0x00,0x84,0x07,0x07,
0x00,0x00,0x08,0x02,0x07,0x80,0xff,0x84,0xff,0xff,0x0f,0x0f,0x07,0x64,0x00,0x88,
0x07,0x07,0x00,0x00,0x08,0x07,0x0f,0x07,0xff,0x84,0xff,0xff,0x0f,0x0f,0x07,0x64,
0x00,0x88,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0x08,0xff,0x85,0xff,0xff,0x08,0x0f,
0x07,0x07,0x62,0x00,0x89,0x08,0x0f,0x08,0x00,0x08,0x08,0x07,0x0f,0x08,0xff,0x85,
0xff,0xff,0x08,0x0f,0x07,0x07,0x06,0x00,0x80,0x08,0x5a,0x00,0x83,0x08,0x0f,0x00,
0x00,0x03,0x07,0x81,0xff,0xff,0x02,0xff,0x82,0x0f,0x0f,0x07,0x03,0x00,0x80,0x08,
0x02,0x07,0x5a,0x00,0x89,0x07,0x0f,0x00,0x00,0x08,0x07,0x0f,0x07,0xff,0xff,0x02,
0xff,0x82,0x07,0x0f,0x07,0x02,0x00,0x03,0x07,0x80,0x08,0x57,0x00,0x8c,0x0f,0x08,
0x08,0x0f,0x07,0x00,0x00,0x08,0x07,0x0f,0x08,0xff,0xff,0x02,0xff,0x87,0x08,0x0f,
0x07,0x07,0x00,0x00,0x07,0x08,0x5a,0x00,0x80,0x07,0x02,0x0f,0x88,0x08,0x00,0x08,
0x08,0x07,0x0f,0x08,0xff,0xff,0x03,0xff,0x82,0x0f,0x07,0x07,0x5e,0x00,0x8c,0x08,
0x08,0x07,0x0f,0x00,0x00,0x08,0x07,0x0f,0x07,0x08,0xff,0xff,0x03,0xff,0x83,0x0f,
0x0f,0x07,0x08,0x0e,0x00,0x03,0x08,0x4c,0x00,0x8a,0x07,0x07,0x00,0x00,0x08,0x07,
0x0f,0x08,0x08,0xff,0xff,0x03,0xff,0x83,0x08,0x0f,0x07,0x07,0x0d,0x00,0x80,0x08,
0x03,0x0f,0x80,0x08,0x4a,0x00,0x88,0x08,0x0f,0x00,0x00,0x07,0x08,0x0f,0x07,0x08,
0x02,0xff,0x04,0xff,0x82,0x0f,0x0f,0x07,0x0c,0x00,0x80,0x08,0x05,0x0f,0x80,0x08,
0x49,0x00,0x88,0x07,0x0f,0x00,0x00,0x08,0x07,0x0f,0x08,0x08,0x02,0xff,0x04,0xff,
0x83,0x0f,0x0f,0x08,0x07,0x0b,0x00,0x87,0x07,0x0f,0x0f,0x00,0x08,0x0f,0x0f,0x08,
0x49,0x00,0x88,0x0f,0x07,0x00,0x08,0x08,0x0f,0x0f,0x08,0x08,0x02,0xff,0x04,0xff,
0x83,0x08,0x0f,0x07,0x07,0x0b,0x00,0x02,0x0f,0x84,0x00,0x00,0x0f,0x0f,0x07,0x48,
0x00,0x88,0x07,0x0f,0x00,0x00,0x08,0x07,0x0f,0x07,0x08,0x03,0xff,0x05,0xff,0x83,
0x0f,0x0f,0x07,0x07,0x0a,0x00,0x02,0x0f,0x81,0x00,0x00,0x02,0x0f,0x48,0x00,0x88,
0x0f,0x07,0x00,0x08,0x08,0x0f,0x07,0x08,0x08,0x03,0xff,0x05,0xff,0x83,0x08,0x0f,
0x07,0x07,0x0a,0x00,0x02,0x0f,0x81,0x00,0x00,0x02,0x0f,0x47,0x00,0x88,0x07,0x0f,
0x00,0x00,0x08,0x0f,0x07,0x07,0x08,0x04,0xff,0x06,0xff,0x83,0x0f,0x0f,0x07,0x07,
0x09,0x00,0x02,0x0f,0x81,0x00,0x00,0x02,0x0f,0x46,0x00,0x89,0x08,0x0f,0x08,0x00,
0x08,0x08,0x0f,0x07,0x08,0x08,0x04,0xff,0x06,0xff,0x83,0x08,0x0f,0x07,0x07,0x05,
0x00,0x83,0x08,0x0f,0x07,0x00,0x02,0x0f,0x84,0x00,0x00,0x0f,0x0f,0x07,0x46,0x00,
0x88,0x07,0x0f,0x00,0x00,0x08,0x0f,0x07,0x07,0x08,0x05,0xff,0x07,0xff,0x83,0x07,
0x0f,0x08,0x07,0x03,0x00,0x8c,0x07,0x0f,0x0f,0x07,0x00,0x07,0x0f,0x0f,0x07,0x07,
0x0f,0x0f,0x08,0x45,0x00,0x89,0x08,0x0f,0x08,0x00,0x07,0x07,0x0f,0x07,0x08,0x08,
0x05,0xff,0x07,0xff,0x86,0x08,0x0f,0x07,0x07,0x08,0x00,0x00,0x02,0x0f,0x03,0x00,
0x05,0x0f,0x19,0x00,0x80,0x07,0x02,0x0f,0x85,0x07,0x00,0x00,0x07,0x0f,0x07,0x1d,
0x00,0x80,0x08,0x03,0x00,0x88,0x07,0x07,0x00,0x08,0x08,0x0f,0x07,0x08,0x08,0x06,
0xff,0x08,0xff,0x83,0x07,0x0f,0x07,0x07,0x02,0x00,0x80,0x07,0x04,0x00,0x84,0x08,
0x07,0x0f,0x0f,0x07,0x19,0x00,0x81,0x07,0x0f,0x02,0x00,0x85,0x0f,0x07,0x0f,0x07,
0x00,0x0f,0x1d,0x00,0x8c,0x07,0x07,0x00,0x00,0x07,0x0f,0x08,0x00,0x07,0x0f,0x07,
0x07,0x08,0x07,0xff,0x08,0xff,0x84,0x08,0x0f,0x0f,0x07,0x07,0x26,0x00,0x8a,0x0f,
0x00,0x00,0x0f,0x00,0x00,0x0f,0x07,0x00,0x00,0x07,0x1e,0x00,0x8b,0x08,0x00,0x07,
0x0f,0x00,0x00,0x07,0x07,0x0f,0x07,0x08,0x08,0x07,0xff,0x09,0xff,0x84,0x08,0x0f,
0x07,0x07,0x08,0x25,0x00,0x89,0x0f,0x00,0x00,0x0f,0x00,0x00,0x07,0x00,0x00,0x07,
0x20,0x00,0x89,0x07,0x0f,0x00,0x00,0x08,0x07,0x0f,0x07,0x08,0x08,0x08,0xff,0x0a,
0xff,0x84,0x07,0x0f,0x07,0x07,0x08,0x24,0x00,0x81,0x07,0x0f,0x02,0x00,0x83,0x0f,
0x00,0x00,0x0f,0x21,0x00,0x89,0x0f,0x00,0x00,0x08,0x07,0x0f,0x07,0x07,0x08,0x08,
0x08,0xff,0x0a,0xff,0x84,0x08,0x07,0x0f,0x08,0x07,0x25,0x00,0x80,0x07,0x02,0x0f,
0x83,0x00,0x00,0x0f,0x07,0x22,0x00,0x87,0x08,0x00,0x07,0x0f,0x07,0x07,0x08,0x08,
0x09,0xff,0x0b,0xff,0x84,0x08,0x0f,0x0f,0x07,0x07,0x25,0x00,0x83,0x07,0x0f,0x00,
0x00,0x02,0x0f,0x80,0x07,0x22,0x00,0x80,0x0f,0x02,0x07,0x81,0x08,0x08,0x0a,0xff,
0x0c,0xff,0x84,0x08,0x0f,0x0f,0x07,0x07,0x24,0x00,0x83,0x0f,0x00,0x00,0x0f,0x02,
0x00,0x81,0x0f,0x07,0x20,0x00,0x85,0x07,0x07,0x0f,0x07,0x08,0x08,0x0b,0xff,0x0d,
0xff,0x84,0x08,0x0f,0x07,0x07,0x08,0x22,0x00,0x89,0x0f,0x00,0x00,0x0f,0x00,0x00,
0x0f,0x00,0x00,0x0f,0x1f,0x00,0x83,0x08,0x07,0x0f,0x07,0x02,0x08,0x0b,0xff,0x0d,
0xff,0x85,0x08,0x08,0x0f,0x07,0x07,0x08,0x20,0x00,0x8a,0x0f,0x00,0x00,0x0f,0x07,
0x00,0x00,0x0f,0x00,0x00,0x0f,0x1e,0x00,0x86,0x08,0x07,0x0f,0x07,0x07,0x08,0x08,
0x0c,0xff,0x0e,0xff,0x85,0x08,0x08,0x0f,0x07,0x07,0x08,0x1f,0x00,0x85,0x0f,0x00,
0x07,0x07,0x00,0x0f,0x02,0x00,0x81,0x0f,0x07,0x1d,0x00,0x86,0x08,0x07,0x0f,0x07,
0x07,0x08,0x08,0x0d,0xff,0x0f,0xff,0x82,0x08,0x08,0x0f,0x02,0x07,0x1e,0x00,0x85,
0x07,0x0f,0x07,0x00,0x00,0x07,0x02,0x0f,0x80,0x07,0x1d,0x00,0x86,0x07,0x07,0x0f,
0x07,0x07,0x08,0x08,0x0e,0xff,0x10,0xff,0x82,0x08,0x08,0x0f,0x02,0x07,0x44,0x00,
0x86,0x07,0x07,0x0f,0x07,0x07,0x08,0x08,0x0f,0xff,0x11,0xff,0x82,0x08,0x08,0x0f,
0x02,0x07,0x80,0x08,0x41,0x00,0x86,0x07,0x07,0x0f,0x07,0x07,0x08,0x08,0x10,0xff,
0x12,0xff,0x86,0x08,0x08,0x07,0x0f,0x07,0x07,0x08,0x3e,0x00,0x87,0x08,0x07,0x07,
0x0f,0x07,0x07,0x08,0x08,0x11,0xff,0x13,0xff,0x02,0x08,0x83,0x0f,0x08,0x07,0x07,
0x3c,0x00,0x85,0x07,0x08,0x07,0x0f,0x0f,0x07,0x02,0x08,0x11,0xff,0x14,0xff,0x02,
0x08,0x80,0x0f,0x02,0x07,0x80,0x08,0x38,0x00,0x85,0x08,0x07,0x08,0x07,0x0f,0x07,
0x03,0x08,0x12,0xff,0x16,0xff,0x81,0x08,0x08,0x04,0x07,0x36,0x00,0x85,0x07,0x07,
0x08,0x0f,0x0f,0x07,0x03,0x08,0x13,0xff,0x17,0xff,0x02,0x08,0x03,0x07,0x80,0x08,
0x32,0x00,0x86,0x08,0x07,0x08,0x07,0x0f,0x0f,0x07,0x03,0x08,0x14,0xff,0x18,0xff,
0x02,0x08,0x85,0x07,0x07,0x08,0x07,0x07,0x08,0x2e,0x00,0x86,0x08,0x07,0x08,0x07,
0x07,0x0f,0x07,0x03,0x08,0x16,0xff,0x1a,0xff,0x82,0x08,0x07,0x08,0x04,0x07,0x80,
0x08,0x2a,0x00,0x87,0x08,0x07,0x08,0x07,0x07,0x0f,0x0f,0x07,0x03,0x08,0x17,0xff,
0x1b,0xff,0x83,0x08,0x07,0x07,0x08,0x05,0x07,0x80,0x08,0x25,0x00,0x82,0x07,0x07,
0x08,0x02,0x07,0x81,0x0f,0x07,0x04,0x08,0x18,0xff,0x1d,0xff,0x86,0x08,0x08,0x07,
0x08,0x07,0x07,0x08,0x02,0x07,0x81,0x08,0x08,0x1f,0x00,0x88,0x08,0x07,0x07,0x08,
0x07,0x07,0x0f,0x0f,0x07,0x04,0x08,0x1a,0xff,0x1f,0xff,0x04,0x08,0x06,0x07,0x81,
0x08,0x08,0x17,0x00,0x80,0x08,0x02,0x07,0x80,0x08,0x02,0x07,0x82,0x0f,0x07,0x07,
0x04,0x08,0x1c,0xff,0x21,0xff,0x84,0x08,0x08,0x07,0x08,0x08,0x08,0x07,0x02,0x08,
0x0d,0x00,0x81,0x08,0x08,0x02,0x07,0x80,0x08,0x03,0x07,0x82,0x0f,0x07,0x07,0x05,
0x08,0x1e,0xff,0x23,0xff,0x02,0x08,0x82,0x07,0x08,0x08,0x1d,0x07,0x82,0x0f,0x07,
0x07,0x06,0x08,0x20,0xff,0x26,0xff,0x02,0x08,0x80,0x07,0x02,0x08,0x14,0x07,0x81,
0x0f,0x0f,0x02,0x07,0x07,0x08,0x22,0xff,0x29,0xff,0x03,0x08,0x80,0x07,0x04,0x08,
0x02,0x07,0x05,0x0f,0x05,0x07,0x08,0x08,0x26,0xff,0x2d,0xff,0x19,0x08,0x2a,0xff,
0x33,0xff,0x0e,0x08,0x2f,0xff,};
PegBitmap gbDialBitmap = {0x11, 8, 115, 116, 0, (UCHAR *) ucDial16Bitmap};

#endif