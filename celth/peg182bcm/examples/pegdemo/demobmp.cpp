
#include "peg.hpp"

UCHAR PEGFAR ucAppleBitmap[] = {
0x1f,0x0f,
0x1f,0x0f,
0x04,0x0f,0x03,0x02,0x16,0x0f,
0x81,0x0f,0x0f,0x02,0x02,0x84,0x0a,0x02,0x08,0x08,0x00,0x15,0x0f,
0x02,0x0f,0x80,0x02,0x02,0x0a,0x83,0x02,0x08,0x02,0x00,0x14,0x0f,
0x03,0x0f,0x02,0x02,0x84,0x0a,0x0a,0x02,0x02,0x00,0x13,0x0f,
0x04,0x0f,0x86,0x02,0x02,0x0a,0x02,0x08,0x08,0x00,0x02,0x0f,0x81,0x03,0x00,0x0e,0x0f,
0x06,0x0f,0x89,0x02,0x0a,0x08,0x08,0x02,0x00,0x0f,0x03,0x0b,0x00,0x0e,0x0f,
0x07,0x0f,0x87,0x02,0x02,0x0a,0x02,0x00,0x00,0x0b,0x00,0x0f,0x0f,
0x09,0x0f,0x02,0x02,0x82,0x03,0x07,0x00,0x04,0x01,0x0a,0x0f,
0x07,0x0f,0x87,0x01,0x01,0x09,0x09,0x01,0x03,0x07,0x00,0x02,0x09,0x03,0x01,0x08,0x0f,
0x06,0x0f,0x90,0x01,0x09,0x0f,0x07,0x09,0x01,0x01,0x00,0x00,0x0d,0x0d,0x07,0x09,0x09,0x01,0x01,0x00,0x07,0x0f,
0x05,0x0f,0x82,0x01,0x09,0x0f,0x02,0x07,0x06,0x0d,0x85,0x07,0x07,0x09,0x01,0x01,0x00,0x06,0x0f,
0x04,0x0f,0x81,0x01,0x09,0x02,0x0f,0x81,0x09,0x09,0x06,0x07,0x03,0x09,0x82,0x01,0x01,0x00,0x05,0x0f,
0x04,0x0f,0x85,0x01,0x09,0x0f,0x09,0x0f,0x07,0x0c,0x09,0x81,0x01,0x00,0x05,0x0f,
0x04,0x0f,0x84,0x01,0x09,0x0f,0x09,0x09,0x02,0x07,0x0a,0x09,0x81,0x01,0x00,0x05,0x0f,
0x05,0x0f,0x02,0x01,0x0e,0x09,0x82,0x01,0x01,0x00,0x04,0x0f,
0x05,0x0f,0x84,0x03,0x07,0x0f,0x01,0x01,0x0c,0x09,0x82,0x01,0x01,0x00,0x04,0x0f,
0x06,0x0f,0x84,0x03,0x07,0x0f,0x0b,0x01,0x0b,0x09,0x82,0x01,0x01,0x00,0x04,0x0f,
0x06,0x0f,0x84,0x03,0x07,0x0b,0x07,0x01,0x0b,0x09,0x82,0x01,0x01,0x00,0x04,0x0f,
0x07,0x0f,0x84,0x03,0x07,0x0f,0x07,0x01,0x0a,0x09,0x82,0x01,0x01,0x00,0x04,0x0f,
0x07,0x0f,0x84,0x03,0x07,0x0b,0x07,0x01,0x0a,0x09,0x82,0x01,0x01,0x00,0x04,0x0f,
0x07,0x0f,0x84,0x03,0x07,0x0f,0x07,0x01,0x0a,0x09,0x82,0x01,0x01,0x00,0x04,0x0f,
0x07,0x0f,0x84,0x03,0x07,0x0b,0x07,0x01,0x0a,0x09,0x81,0x01,0x00,0x05,0x0f,
0x06,0x0f,0x84,0x03,0x07,0x0f,0x07,0x01,0x0b,0x09,0x81,0x01,0x00,0x05,0x0f,
0x05,0x0f,0x80,0x03,0x02,0x07,0x80,0x01,0x0b,0x09,0x81,0x01,0x00,0x06,0x0f,
0x05,0x0f,0x03,0x01,0x0c,0x09,0x81,0x01,0x00,0x06,0x0f,
0x06,0x0f,0x80,0x01,0x0d,0x09,0x81,0x01,0x00,0x07,0x0f,
0x07,0x0f,0x80,0x01,0x0a,0x09,0x82,0x01,0x01,0x00,0x08,0x0f,
0x08,0x0f,0x81,0x01,0x01,0x07,0x09,0x82,0x01,0x00,0x00,0x09,0x0f,
0x0a,0x0f,0x08,0x00,0x0b,0x0f,
0x1f,0x0f,
};
PegBitmap gbAppleBitmap = {0x01, 8, 32, 32, 0, ucAppleBitmap};

#include "peg.hpp"

UCHAR PEGFAR ucDynamiteBitmap[] = {
0x03,0x0f,0x09,0x03,0x11,0x0f,
0x02,0x0f,0x81,0x03,0x03,0x07,0x0b,0x81,0x03,0x00,0x10,0x0f,
0x03,0x0f,0x03,0x00,0x81,0x0b,0x03,0x03,0x00,0x11,0x0f,
0x06,0x0f,0x83,0x03,0x0b,0x03,0x00,0x14,0x0f,
0x06,0x0f,0x83,0x03,0x0b,0x03,0x00,0x14,0x0f,
0x06,0x0f,0x83,0x03,0x0b,0x03,0x00,0x14,0x0f,
0x06,0x0f,0x83,0x03,0x0b,0x03,0x00,0x14,0x0f,
0x03,0x0f,0x02,0x08,0x83,0x03,0x0b,0x03,0x00,0x04,0x08,0x0f,0x0f,
0x02,0x0f,0x80,0x08,0x02,0x07,0x03,0x00,0x02,0x08,0x81,0x0f,0x00,0x0f,0x0f,
0x82,0x0f,0x0f,0x08,0x09,0x07,0x82,0x0f,0x08,0x00,0x0f,0x0f,
0x81,0x0f,0x08,0x0a,0x0f,0x82,0x08,0x08,0x00,0x0f,0x0f,
0x81,0x0f,0x08,0x09,0x07,0x02,0x08,0x80,0x00,0x0f,0x0f,
0x81,0x0f,0x08,0x09,0x07,0x02,0x08,0x80,0x00,0x08,0x0f,0x81,0x01,0x01,0x04,0x0f,
0x81,0x0f,0x08,0x09,0x07,0x02,0x08,0x80,0x00,0x07,0x0f,0x87,0x01,0x09,0x09,0x00,0x01,0x01,0x0f,0x0f,
0x81,0x0f,0x08,0x03,0x07,0x81,0x08,0x08,0x03,0x07,0x02,0x08,0x80,0x00,0x06,0x0f,0x88,0x01,0x09,0x09,0x01,0x00,0x09,0x09,0x00,0x0f,
0x81,0x0f,0x08,0x03,0x07,0x81,0x00,0x08,0x03,0x07,0x02,0x08,0x80,0x00,0x05,0x0f,0x89,0x01,0x09,0x09,0x01,0x00,0x09,0x09,0x01,0x00,0x0f,
0x81,0x0f,0x08,0x03,0x07,0x80,0x00,0x04,0x07,0x02,0x08,0x80,0x00,0x04,0x07,0x86,0x08,0x00,0x09,0x01,0x00,0x09,0x09,0x02,0x01,0x80,0x0f,
0x81,0x0f,0x08,0x02,0x07,0x80,0x00,0x05,0x07,0x82,0x08,0x08,0x00,0x04,0x07,0x8b,0x08,0x07,0x0f,0x00,0x00,0x09,0x09,0x01,0x00,0x09,0x09,0x00,
0x80,0x0f,0x03,0x08,0x80,0x00,0x06,0x08,0x80,0x00,0x04,0x07,0x8c,0x08,0x07,0x0f,0x07,0x07,0x08,0x00,0x01,0x00,0x09,0x09,0x01,0x00,
0x80,0x0f,0x0b,0x00,0x04,0x07,0x81,0x01,0x01,0x02,0x00,0x02,0x08,0x85,0x00,0x09,0x09,0x01,0x00,0x07,
0x03,0x0f,0x81,0x00,0x08,0x0a,0x0f,0x80,0x01,0x02,0x09,0x8a,0x00,0x09,0x00,0x08,0x08,0x00,0x09,0x01,0x00,0x07,0x07,
0x03,0x0f,0x02,0x00,0x08,0x0f,0x8f,0x01,0x01,0x09,0x01,0x00,0x09,0x09,0x01,0x00,0x08,0x08,0x00,0x00,0x07,0x07,0x0f,
0x02,0x0f,0x84,0x00,0x00,0x0f,0x08,0x00,0x06,0x0f,0x82,0x01,0x09,0x09,0x02,0x00,0x8a,0x09,0x01,0x00,0x00,0x08,0x08,0x00,0x07,0x07,0x0f,0x0f,
0x02,0x0f,0x84,0x00,0x08,0x00,0x00,0x07,0x05,0x0f,0x86,0x01,0x01,0x09,0x01,0x00,0x09,0x09,0x03,0x00,0x83,0x08,0x00,0x07,0x07,0x02,0x0f,
0x02,0x0f,0x81,0x00,0x07,0x07,0x0f,0x82,0x01,0x09,0x09,0x02,0x00,0x88,0x09,0x01,0x00,0x09,0x09,0x01,0x00,0x07,0x07,0x03,0x0f,
0x02,0x0f,0x83,0x00,0x08,0x00,0x00,0x05,0x0f,0x85,0x01,0x09,0x01,0x00,0x09,0x09,0x02,0x00,0x84,0x01,0x01,0x00,0x07,0x07,0x04,0x0f,
0x03,0x0f,0x83,0x00,0x0f,0x08,0x00,0x05,0x0f,0x02,0x00,0x88,0x01,0x01,0x00,0x09,0x09,0x00,0x00,0x07,0x07,0x05,0x0f,
0x03,0x0f,0x02,0x00,0x82,0x0f,0x0f,0x00,0x03,0x0f,0x82,0x01,0x09,0x09,0x02,0x00,0x84,0x01,0x01,0x00,0x07,0x07,0x06,0x0f,
0x03,0x0f,0x86,0x00,0x08,0x07,0x0f,0x00,0x08,0x00,0x02,0x0f,0x02,0x01,0x86,0x00,0x09,0x09,0x00,0x00,0x07,0x07,0x07,0x0f,
0x04,0x0f,0x89,0x00,0x00,0x07,0x00,0x0f,0x00,0x0f,0x0f,0x07,0x08,0x02,0x00,0x84,0x01,0x01,0x00,0x07,0x07,0x08,0x0f,
0x06,0x0f,0x02,0x00,0x84,0x08,0x07,0x08,0x00,0x00,0x02,0x0f,0x83,0x00,0x00,0x07,0x07,0x09,0x0f,
0x09,0x0f,0x02,0x00,0x12,0x0f,
};
PegBitmap gbDynamiteBitmap = {0x01, 8, 32, 32, 0, ucDynamiteBitmap};

#include "peg.hpp"

UCHAR PEGFAR ucLightBitmap[] = {
0x0b,0x0f,0x05,0x08,0x0c,0x0f,
0x09,0x0f,0x81,0x08,0x08,0x04,0x0f,0x82,0x07,0x08,0x00,0x0a,0x0f,
0x08,0x0f,0x81,0x08,0x07,0x02,0x0b,0x03,0x0f,0x82,0x07,0x08,0x00,0x09,0x0f,
0x07,0x0f,0x83,0x08,0x07,0x0b,0x0b,0x06,0x0f,0x82,0x07,0x08,0x00,0x08,0x0f,
0x06,0x0f,0x82,0x08,0x07,0x0b,0x08,0x0f,0x83,0x07,0x08,0x08,0x00,0x07,0x0f,
0x05,0x0f,0x85,0x08,0x07,0x0b,0x0f,0x0b,0x0b,0x06,0x0f,0x84,0x0b,0x07,0x08,0x08,0x00,0x06,0x0f,
0x05,0x0f,0x85,0x08,0x07,0x0b,0x0f,0x0b,0x0b,0x07,0x0f,0x84,0x0b,0x07,0x08,0x00,0x08,0x05,0x0f,
0x04,0x0f,0x84,0x08,0x07,0x0f,0x0b,0x0f,0x05,0x0b,0x03,0x0f,0x84,0x0b,0x07,0x08,0x08,0x00,0x05,0x0f,
0x04,0x0f,0x81,0x08,0x07,0x02,0x0b,0x81,0x0f,0x0b,0x07,0x0f,0x84,0x0b,0x07,0x08,0x08,0x00,0x05,0x0f,
0x04,0x0f,0x84,0x08,0x07,0x0b,0x0f,0x0b,0x09,0x0f,0x84,0x0b,0x07,0x08,0x08,0x00,0x05,0x0f,
0x04,0x0f,0x84,0x08,0x07,0x0b,0x0f,0x0b,0x0a,0x0f,0x83,0x07,0x08,0x08,0x00,0x05,0x0f,
0x04,0x0f,0x84,0x08,0x07,0x0b,0x0f,0x0b,0x0a,0x0f,0x83,0x07,0x08,0x08,0x00,0x05,0x0f,
0x04,0x0f,0x84,0x08,0x07,0x0f,0x0f,0x0b,0x0a,0x0f,0x83,0x07,0x08,0x08,0x00,0x05,0x0f,
0x04,0x0f,0x87,0x08,0x07,0x0f,0x0f,0x0b,0x07,0x07,0x08,0x04,0x0f,0x86,0x08,0x0f,0x0f,0x07,0x08,0x08,0x00,0x05,0x0f,
0x05,0x0f,0x87,0x08,0x07,0x0f,0x0b,0x08,0x0f,0x0f,0x08,0x02,0x0f,0x86,0x08,0x08,0x0f,0x07,0x08,0x08,0x00,0x06,0x0f,
0x06,0x0f,0x86,0x08,0x07,0x0f,0x08,0x0f,0x0b,0x08,0x02,0x0f,0x86,0x08,0x08,0x0f,0x07,0x08,0x00,0x08,0x06,0x0f,
0x06,0x0f,0x86,0x08,0x07,0x0f,0x08,0x0f,0x0b,0x08,0x02,0x0f,0x85,0x07,0x08,0x07,0x08,0x08,0x00,0x07,0x0f,
0x07,0x0f,0x8d,0x08,0x07,0x07,0x08,0x08,0x0f,0x07,0x08,0x07,0x08,0x0f,0x07,0x08,0x00,0x08,0x0f,
0x08,0x0f,0x81,0x08,0x07,0x02,0x0f,0x86,0x08,0x0f,0x08,0x0f,0x07,0x08,0x00,0x09,0x0f,
0x09,0x0f,0x89,0x08,0x07,0x0f,0x08,0x08,0x0f,0x0f,0x07,0x08,0x00,0x0a,0x0f,
0x09,0x0f,0x89,0x08,0x07,0x0f,0x0f,0x07,0x08,0x0f,0x07,0x08,0x00,0x0a,0x0f,
0x0a,0x0f,0x87,0x08,0x07,0x0f,0x08,0x0f,0x07,0x08,0x00,0x0b,0x0f,
0x0a,0x0f,0x87,0x08,0x07,0x0f,0x08,0x0f,0x07,0x08,0x00,0x0b,0x0f,
0x0a,0x0f,0x87,0x08,0x07,0x0f,0x08,0x0f,0x07,0x08,0x00,0x0b,0x0f,
0x0a,0x0f,0x87,0x08,0x07,0x0f,0x08,0x0f,0x07,0x08,0x00,0x0b,0x0f,
0x0a,0x0f,0x87,0x03,0x07,0x0f,0x08,0x0f,0x07,0x08,0x00,0x0b,0x0f,
0x0a,0x0f,0x02,0x03,0x84,0x0f,0x0f,0x07,0x00,0x00,0x0b,0x0f,
0x0a,0x0f,0x82,0x03,0x0f,0x0b,0x02,0x00,0x81,0x03,0x00,0x0b,0x0f,
0x0a,0x0f,0x87,0x03,0x0b,0x03,0x0b,0x07,0x03,0x00,0x00,0x0b,0x0f,
0x0a,0x0f,0x87,0x03,0x0f,0x0b,0x03,0x00,0x00,0x03,0x00,0x0b,0x0f,
0x0b,0x0f,0x85,0x00,0x03,0x0b,0x07,0x03,0x00,0x0c,0x0f,
0x0c,0x0f,0x03,0x00,0x0d,0x0f,
};
PegBitmap gbLightBitmap = {0x01, 8, 31, 32, 0, ucLightBitmap};


UCHAR PEGFAR ucGlobeBitmap[] = {
0x2b,0x04,
0x2b,0x04,
0x0a,0x04,0x03,0x09,0x03,0x04,0x06,0x00,0x11,0x04,
0x09,0x04,0x06,0x09,0x8b,0x00,0x06,0x08,0x0e,0x06,0x0e,0x07,0x0e,0x08,0x06,0x00,0x00,0x0e,0x04,
0x09,0x04,0x82,0x09,0x04,0x04,0x04,0x09,0x06,0x08,0x85,0x00,0x07,0x06,0x06,0x00,0x00,0x0c,0x04,
0x09,0x04,0x83,0x09,0x04,0x04,0x00,0x04,0x09,0x8c,0x00,0x00,0x01,0x00,0x00,0x08,0x07,0x08,0x06,0x0e,0x08,0x06,0x00,0x0b,0x04,
0x09,0x04,0x84,0x09,0x04,0x00,0x0e,0x0f,0x04,0x09,0x8c,0x00,0x09,0x00,0x00,0x06,0x06,0x00,0x08,0x06,0x0e,0x08,0x06,0x00,0x0a,0x04,
0x0a,0x04,0x84,0x00,0x0e,0x0f,0x0e,0x0f,0x05,0x09,0x05,0x00,0x85,0x08,0x07,0x0e,0x08,0x06,0x00,0x09,0x04,
0x09,0x04,0x86,0x00,0x0e,0x0f,0x0e,0x0f,0x0e,0x08,0x04,0x09,0x05,0x00,0x86,0x08,0x08,0x06,0x0e,0x08,0x06,0x00,0x08,0x04,
0x08,0x04,0x88,0x00,0x08,0x0f,0x0e,0x0f,0x0e,0x0f,0x00,0x00,0x03,0x09,0x05,0x00,0x87,0x08,0x06,0x0e,0x06,0x06,0x08,0x06,0x00,0x07,0x04,
0x08,0x04,0x87,0x00,0x0f,0x0e,0x0f,0x0e,0x0f,0x08,0x01,0x04,0x09,0x03,0x00,0x89,0x08,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x06,0x08,0x00,0x07,0x04,
0x07,0x04,0x87,0x00,0x08,0x0e,0x0f,0x0e,0x0f,0x0e,0x08,0x09,0x00,0x8a,0x07,0x07,0x0e,0x06,0x0e,0x06,0x06,0x08,0x06,0x08,0x00,0x06,0x04,
0x07,0x04,0x87,0x00,0x0e,0x0f,0x0e,0x0f,0x0e,0x0f,0x07,0x07,0x00,0x8c,0x08,0x08,0x07,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x06,0x08,0x06,0x00,0x06,0x04,
0x07,0x04,0x88,0x06,0x07,0x0e,0x0f,0x0e,0x0f,0x0e,0x0f,0x0e,0x03,0x00,0x89,0x07,0x08,0x00,0x08,0x07,0x0e,0x07,0x0e,0x06,0x0e,0x03,0x06,0x81,0x08,0x06,0x06,0x04,
0x06,0x04,0x9e,0x00,0x08,0x0e,0x07,0x0e,0x0f,0x0e,0x0f,0x0e,0x0f,0x08,0x00,0x00,0x0f,0x0e,0x0f,0x00,0x07,0x0e,0x07,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x06,0x08,0x06,0x08,0x00,0x05,0x04,
0x06,0x04,0x97,0x00,0x0e,0x07,0x0e,0x0f,0x0e,0x0f,0x0e,0x0f,0x0e,0x07,0x00,0x00,0x08,0x00,0x07,0x07,0x0e,0x07,0x0e,0x06,0x0e,0x06,0x0e,0x03,0x06,0x82,0x08,0x06,0x00,0x05,0x04,
0x06,0x04,0x8b,0x00,0x07,0x0e,0x07,0x0e,0x0f,0x0e,0x0f,0x0e,0x0f,0x0e,0x08,0x02,0x00,0x8f,0x08,0x0e,0x07,0x0e,0x07,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x06,0x08,0x06,0x08,0x00,0x05,0x04,
0x06,0x04,0x97,0x00,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x0f,0x0e,0x0f,0x0e,0x0f,0x0e,0x07,0x00,0x08,0x0e,0x08,0x00,0x07,0x07,0x06,0x0e,0x03,0x06,0x82,0x08,0x06,0x00,0x05,0x04,
0x06,0x04,0x90,0x00,0x06,0x0e,0x07,0x0e,0x07,0x0e,0x0f,0x0e,0x0f,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x08,0x04,0x00,0x81,0x08,0x07,0x02,0x06,0x83,0x08,0x06,0x08,0x00,0x05,0x04,
0x06,0x04,0x90,0x00,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x06,0x00,0x80,0x08,0x02,0x06,0x82,0x08,0x06,0x00,0x05,0x04,
0x06,0x04,0x8f,0x00,0x06,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x08,0x00,0x85,0x08,0x06,0x08,0x06,0x08,0x00,0x05,0x04,
0x07,0x04,0x8e,0x06,0x06,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x07,0x09,0x00,0x83,0x08,0x06,0x08,0x06,0x06,0x04,
0x07,0x04,0x8f,0x00,0x0e,0x06,0x0e,0x06,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x06,0x0e,0x06,0x07,0x04,0x00,0x87,0x01,0x09,0x00,0x00,0x06,0x08,0x06,0x00,0x06,0x04,
0x07,0x04,0x8f,0x00,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x03,0x00,0x80,0x01,0x02,0x09,0x84,0x06,0x08,0x06,0x08,0x00,0x06,0x04,
0x08,0x04,0x8f,0x00,0x08,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x08,0x02,0x00,0x04,0x09,0x82,0x06,0x08,0x00,0x07,0x04,
0x08,0x04,0x90,0x00,0x06,0x08,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x07,0x02,0x00,0x04,0x09,0x81,0x06,0x00,0x07,0x04,
0x09,0x04,0x8f,0x00,0x06,0x08,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x02,0x00,0x80,0x08,0x04,0x09,0x08,0x04,
0x0a,0x04,0x8b,0x00,0x06,0x08,0x06,0x08,0x0e,0x06,0x0e,0x06,0x0e,0x06,0x0e,0x02,0x06,0x02,0x00,0x81,0x08,0x06,0x03,0x09,0x08,0x04,
0x0b,0x04,0x86,0x00,0x06,0x08,0x06,0x08,0x06,0x08,0x05,0x06,0x86,0x08,0x00,0x00,0x07,0x06,0x08,0x06,0x03,0x09,0x07,0x04,
0x0c,0x04,0x93,0x00,0x06,0x08,0x06,0x08,0x06,0x08,0x06,0x08,0x06,0x08,0x06,0x00,0x00,0x08,0x06,0x08,0x06,0x00,0x04,0x02,0x09,0x07,0x04,
0x0d,0x04,0x90,0x00,0x00,0x06,0x06,0x08,0x06,0x08,0x06,0x08,0x06,0x08,0x00,0x07,0x06,0x08,0x00,0x00,0x02,0x04,0x81,0x09,0x09,0x07,0x04,
0x0f,0x04,0x81,0x00,0x00,0x02,0x06,0x89,0x08,0x06,0x08,0x00,0x08,0x06,0x00,0x00,0x04,0x04,0x03,0x09,0x08,0x04,
0x12,0x04,0x06,0x00,0x11,0x04,
0x2b,0x04,
};
PegBitmap gbGlobeBitmap = {0x01, 8, 44, 34, 0, ucGlobeBitmap};


UCHAR PEGFAR ucPegGlobeBitmap[] = {
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x0f,0x00,0x0e,0x09,0x08,0x00,0x12,0x09,0x0d,0x00,0x09,0x09,0x83,0x00,0x00,0x09,0x09,0x09,0x00,
0x11,0x00,0x05,0x09,0x03,0x00,0x03,0x09,0x09,0x00,0x05,0x09,0x06,0x00,0x03,0x09,0x08,0x00,0x04,0x09,0x06,0x00,0x06,0x09,0x09,0x00,
0x12,0x00,0x03,0x09,0x06,0x00,0x02,0x09,0x09,0x00,0x03,0x09,0x08,0x00,0x02,0x09,0x07,0x00,0x03,0x09,0x0a,0x00,0x04,0x09,0x09,0x00,
0x11,0x00,0x03,0x09,0x08,0x00,0x02,0x09,0x07,0x00,0x03,0x09,0x0a,0x00,0x80,0x09,0x06,0x00,0x03,0x09,0x0d,0x00,0x02,0x09,0x0a,0x00,
0x11,0x00,0x03,0x09,0x08,0x00,0x02,0x09,0x07,0x00,0x03,0x09,0x11,0x00,0x03,0x09,0x0f,0x00,0x81,0x09,0x09,0x0a,0x00,
0x10,0x00,0x03,0x09,0x08,0x00,0x03,0x09,0x06,0x00,0x03,0x09,0x07,0x00,0x80,0x09,0x08,0x00,0x03,0x09,0x10,0x00,0x80,0x09,0x0b,0x00,
0x10,0x00,0x03,0x09,0x08,0x00,0x02,0x09,0x07,0x00,0x03,0x09,0x06,0x00,0x80,0x09,0x08,0x00,0x03,0x09,0x1e,0x00,
0x0f,0x00,0x03,0x09,0x07,0x00,0x03,0x09,0x07,0x00,0x04,0x09,0x04,0x00,0x02,0x09,0x08,0x00,0x02,0x09,0x1f,0x00,
0x0f,0x00,0x04,0x09,0x04,0x00,0x04,0x09,0x08,0x00,0x0c,0x09,0x07,0x00,0x03,0x09,0x1f,0x00,
0x0e,0x00,0x0d,0x09,0x09,0x00,0x04,0x09,0x04,0x00,0x03,0x09,0x07,0x00,0x02,0x09,0x0d,0x00,0x09,0x09,0x08,0x00,
0x0e,0x00,0x03,0x09,0x13,0x00,0x03,0x09,0x06,0x00,0x81,0x09,0x09,0x08,0x00,0x02,0x09,0x0f,0x00,0x05,0x09,0x0a,0x00,
0x0e,0x00,0x03,0x09,0x13,0x00,0x03,0x09,0x06,0x00,0x80,0x09,0x09,0x00,0x02,0x09,0x10,0x00,0x03,0x09,0x0b,0x00,
0x0d,0x00,0x03,0x09,0x13,0x00,0x03,0x09,0x12,0x00,0x03,0x09,0x0e,0x00,0x03,0x09,0x0c,0x00,
0x0d,0x00,0x03,0x09,0x13,0x00,0x03,0x09,0x13,0x00,0x02,0x09,0x0e,0x00,0x03,0x09,0x0c,0x00,
0x0c,0x00,0x03,0x09,0x13,0x00,0x03,0x09,0x0c,0x00,0x81,0x09,0x09,0x06,0x00,0x02,0x09,0x0c,0x00,0x03,0x09,0x0d,0x00,
0x0c,0x00,0x03,0x09,0x13,0x00,0x03,0x09,0x0a,0x00,0x02,0x09,0x08,0x00,0x03,0x09,0x0a,0x00,0x03,0x09,0x0d,0x00,
0x0a,0x00,0x05,0x09,0x11,0x00,0x05,0x09,0x08,0x00,0x03,0x09,0x0a,0x00,0x04,0x09,0x07,0x00,0x03,0x09,0x0e,0x00,
0x08,0x00,0x09,0x09,0x0d,0x00,0x05,0x09,0x81,0x08,0x06,0x02,0x04,0x0a,0x0c,0x81,0x04,0x04,0x09,0x00,0x0d,0x09,0x0f,0x00,
0x22,0x00,0x82,0x08,0x08,0x07,0x05,0x0c,0x0a,0x07,0x80,0x0c,0x04,0x04,0x23,0x00,
0x1d,0x00,0x82,0x04,0x06,0x06,0x02,0x04,0x80,0x0c,0x02,0x07,0x02,0x0c,0x09,0x07,0x82,0x0f,0x0f,0x07,0x03,0x0c,0x05,0x04,0x1e,0x00,
0x1a,0x00,0x81,0x04,0x08,0x08,0x0c,0x80,0x07,0x0d,0x0c,0x03,0x07,0x07,0x0c,0x02,0x04,0x1c,0x00,
0x18,0x00,0x81,0x04,0x04,0x03,0x0c,0x81,0x07,0x07,0x09,0x0c,0x02,0x0e,0x0c,0x0c,0x80,0x0e,0x06,0x0c,0x03,0x04,0x19,0x00,
0x16,0x00,0x85,0x04,0x04,0x0c,0x07,0x0c,0x0e,0x03,0x07,0x0a,0x0c,0x87,0x0e,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0c,0x82,0x0e,0x0c,0x07,0x06,0x0c,0x81,0x04,0x04,0x18,0x00,
0x14,0x00,0x83,0x04,0x04,0x0c,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x84,0x0e,0x07,0x07,0x0e,0x0e,0x07,0x0c,0x83,0x07,0x0e,0x0e,0x0c,0x02,0x0e,0x89,0x0c,0x06,0x0e,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x09,0x0c,0x81,0x04,0x04,0x16,0x00,
0x13,0x00,0x80,0x08,0x02,0x0c,0x08,0x07,0x02,0x0c,0x80,0x07,0x06,0x0c,0x02,0x0e,0x05,0x0c,0x81,0x06,0x06,0x02,0x0c,0x86,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x0e,0x03,0x0c,0x81,0x04,0x04,0x15,0x00,
0x12,0x00,0x80,0x0c,0x02,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x82,0x0e,0x07,0x07,0x02,0x0c,0x83,0x07,0x07,0x0c,0x04,0x02,0x0c,0x82,0x0e,0x0e,0x07,0x03,0x0c,0x85,0x06,0x0e,0x07,0x07,0x0c,0x04,0x04,0x0c,0x82,0x0e,0x0c,0x0e,0x0a,0x0c,0x81,0x04,0x04,0x13,0x00,
0x11,0x00,0x81,0x0c,0x0c,0x0d,0x07,0x03,0x0c,0x88,0x04,0x06,0x07,0x0e,0x0c,0x0c,0x0e,0x07,0x07,0x03,0x0c,0x80,0x08,0x02,0x07,0x81,0x06,0x04,0x06,0x0c,0x82,0x07,0x0c,0x07,0x02,0x0c,0x80,0x07,0x04,0x0c,0x81,0x04,0x04,0x12,0x00,
0x0f,0x00,0x81,0x04,0x0c,0x10,0x07,0x03,0x0c,0x02,0x07,0x02,0x0c,0x02,0x07,0x84,0x0e,0x08,0x0c,0x08,0x0a,0x02,0x07,0x83,0x04,0x0c,0x07,0x07,0x11,0x0c,0x80,0x04,0x11,0x00,
0x0e,0x00,0x82,0x04,0x0c,0x0c,0x0a,0x07,0x08,0x0c,0x81,0x08,0x08,0x05,0x0c,0x85,0x07,0x07,0x08,0x06,0x06,0x08,0x02,0x07,0x85,0x08,0x06,0x06,0x07,0x07,0x08,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x09,0x0c,0x80,0x04,0x10,0x00,
0x0d,0x00,0x84,0x04,0x0c,0x07,0x07,0x0e,0x02,0x07,0x80,0x0e,0x05,0x07,0x05,0x0c,0x89,0x04,0x0c,0x0c,0x07,0x06,0x04,0x04,0x0c,0x0c,0x07,0x03,0x0c,0x81,0x06,0x06,0x02,0x07,0x82,0x0a,0x0e,0x0a,0x02,0x0e,0x13,0x0c,0x80,0x04,0x0f,0x00,
0x0c,0x00,0x82,0x04,0x0c,0x0c,0x04,0x07,0x80,0x0e,0x05,0x0c,0x81,0x0e,0x0e,0x04,0x0c,0x80,0x08,0x04,0x07,0x80,0x08,0x07,0x0c,0x81,0x06,0x08,0x04,0x07,0x81,0x0e,0x0e,0x04,0x0c,0x82,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x05,0x0c,0x80,0x04,0x0e,0x00,
0x0b,0x00,0x81,0x0c,0x0c,0x05,0x07,0x82,0x0c,0x06,0x0c,0x03,0x07,0x04,0x0c,0x81,0x0e,0x0c,0x0b,0x07,0x04,0x0c,0x81,0x08,0x0a,0x02,0x07,0x81,0x0a,0x08,0x04,0x0c,0x80,0x0e,0x11,0x0c,0x80,0x04,0x0d,0x00,
0x0a,0x00,0x82,0x04,0x0c,0x0c,0x04,0x07,0x84,0x0c,0x0c,0x08,0x07,0x0f,0x04,0x07,0x80,0x0e,0x04,0x07,0x80,0x0f,0x0a,0x07,0x83,0x0e,0x07,0x0c,0x0e,0x05,0x07,0x80,0x08,0x05,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x0e,0x09,0x0c,0x80,0x04,0x0c,0x00,
0x09,0x00,0x84,0x04,0x04,0x0c,0x0e,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x02,0x0f,0x80,0x07,0x02,0x0f,0x14,0x07,0x80,0x0e,0x02,0x07,0x80,0x0a,0x02,0x07,0x04,0x0c,0x80,0x07,0x13,0x0c,0x80,0x04,0x0b,0x00,
0x09,0x00,0x85,0x04,0x04,0x0c,0x0e,0x07,0x0e,0x04,0x07,0x08,0x0f,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x0e,0x07,0x82,0x0c,0x0c,0x06,0x03,0x0c,0x82,0x07,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x05,0x0c,0x80,0x04,0x0a,0x00,
0x08,0x00,0x03,0x04,0x83,0x0e,0x07,0x0c,0x0c,0x04,0x07,0x02,0x0f,0x80,0x07,0x02,0x0f,0x16,0x07,0x80,0x08,0x02,0x07,0x83,0x08,0x0c,0x08,0x0e,0x02,0x0c,0x80,0x0e,0x15,0x0c,0x80,0x04,0x09,0x00,
0x07,0x00,0x80,0x04,0x06,0x0c,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x0c,0x07,0x82,0x0e,0x07,0x0c,0x02,0x06,0x85,0x08,0x08,0x0c,0x0c,0x08,0x08,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x0c,0x0c,0x81,0x04,0x04,0x08,0x00,
0x06,0x00,0x87,0x04,0x04,0x0c,0x0e,0x07,0x07,0x0c,0x0c,0x02,0x07,0x02,0x0f,0x80,0x07,0x02,0x0f,0x80,0x07,0x02,0x0f,0x80,0x07,0x02,0x0f,0x0e,0x07,0x04,0x0c,0x86,0x04,0x04,0x0c,0x0c,0x06,0x06,0x08,0x02,0x0c,0x80,0x0e,0x16,0x0c,0x80,0x04,0x08,0x00,
0x06,0x00,0x82,0x04,0x0c,0x0c,0x02,0x07,0x83,0x0c,0x04,0x0e,0x07,0x10,0x0f,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x05,0x07,0x07,0x0c,0x84,0x06,0x06,0x07,0x06,0x04,0x02,0x0c,0x82,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x0b,0x0c,0x81,0x04,0x04,0x07,0x00,
0x05,0x00,0x82,0x04,0x04,0x0e,0x03,0x07,0x81,0x0c,0x0c,0x02,0x07,0x81,0x0f,0x0f,0x03,0x07,0x08,0x0f,0x11,0x07,0x87,0x0c,0x0c,0x08,0x0c,0x06,0x06,0x07,0x07,0x03,0x0c,0x80,0x0e,0x17,0x0c,0x80,0x04,0x07,0x00,
0x05,0x00,0x81,0x08,0x0c,0x02,0x07,0x02,0x0c,0x81,0x07,0x0f,0x03,0x07,0x02,0x0c,0x05,0x07,0x02,0x0f,0x02,0x07,0x80,0x0f,0x0e,0x07,0x81,0x0c,0x0c,0x02,0x08,0x02,0x07,0x02,0x0c,0x82,0x07,0x0c,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x0e,0x0c,0x81,0x04,0x04,0x06,0x00,
0x04,0x00,0x81,0x04,0x0c,0x02,0x07,0x02,0x0c,0x05,0x07,0x81,0x0c,0x0c,0x02,0x07,0x80,0x0e,0x03,0x0c,0x80,0x07,0x02,0x0f,0x10,0x07,0x84,0x08,0x06,0x07,0x07,0x0a,0x02,0x07,0x80,0x08,0x03,0x0c,0x80,0x07,0x18,0x0c,0x80,0x04,0x06,0x00,
0x04,0x00,0x81,0x04,0x0c,0x03,0x07,0x02,0x0c,0x88,0x07,0x0e,0x07,0x07,0x0c,0x0c,0x07,0x07,0x0f,0x03,0x07,0x02,0x0c,0x80,0x07,0x02,0x0f,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x10,0x07,0x81,0x06,0x04,0x02,0x0c,0x82,0x07,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x09,0x0c,0x81,0x04,0x04,0x05,0x00,
0x03,0x00,0x81,0x04,0x0c,0x04,0x07,0x05,0x0c,0x0b,0x07,0x81,0x0c,0x0c,0x18,0x07,0x80,0x0a,0x02,0x07,0x02,0x0c,0x80,0x0e,0x19,0x0c,0x80,0x04,0x05,0x00,
0x03,0x00,0x81,0x08,0x0c,0x02,0x07,0x06,0x0c,0x02,0x07,0x80,0x0f,0x06,0x07,0x81,0x0f,0x07,0x03,0x0c,0x82,0x0e,0x07,0x0f,0x17,0x07,0x80,0x08,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x14,0x0c,0x81,0x04,0x04,0x04,0x00,
0x03,0x00,0x02,0x0c,0x81,0x07,0x07,0x02,0x0c,0x82,0x07,0x07,0x0e,0x0f,0x07,0x02,0x0c,0x0f,0x07,0x80,0x0a,0x02,0x07,0x80,0x0a,0x02,0x07,0x83,0x0a,0x07,0x08,0x04,0x1c,0x0c,0x80,0x04,0x04,0x00,
0x02,0x00,0x81,0x04,0x04,0x06,0x0c,0x04,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x02,0x07,0x81,0x0f,0x07,0x02,0x0c,0x02,0x07,0x80,0x0f,0x02,0x07,0x80,0x0f,0x11,0x07,0x80,0x08,0x04,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x0f,0x0c,0x80,0x04,0x04,0x00,
0x02,0x00,0x80,0x08,0x05,0x0c,0x82,0x07,0x07,0x0e,0x12,0x07,0x80,0x0c,0x16,0x07,0x80,0x0a,0x02,0x07,0x81,0x08,0x08,0x1c,0x0c,0x81,0x04,0x04,0x03,0x00,
0x02,0x00,0x81,0x0c,0x0e,0x02,0x0c,0x81,0x07,0x0e,0x14,0x07,0x84,0x0c,0x0c,0x08,0x07,0x0f,0x14,0x07,0x80,0x08,0x09,0x0c,0x80,0x0e,0x16,0x0c,0x80,0x04,0x03,0x00,
0x02,0x00,0x83,0x04,0x0e,0x07,0x0c,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x86,0x0e,0x0e,0x0c,0x0c,0x07,0x07,0x0f,0x0c,0x07,0x80,0x0a,0x02,0x07,0x82,0x0e,0x07,0x07,0x10,0x0c,0x80,0x04,0x10,0x0c,0x80,0x04,0x03,0x00,
0x02,0x00,0x81,0x04,0x0e,0x1b,0x07,0x02,0x0c,0x81,0x07,0x0f,0x02,0x07,0x80,0x0f,0x0c,0x07,0x04,0x0c,0x80,0x07,0x08,0x0c,0x84,0x04,0x0c,0x0c,0x04,0x06,0x02,0x0c,0x80,0x0e,0x0c,0x0c,0x80,0x04,0x03,0x00,
0x84,0x00,0x00,0x04,0x04,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x14,0x07,0x81,0x0c,0x0c,0x0f,0x07,0x81,0x0e,0x0e,0x04,0x0c,0x80,0x0e,0x08,0x0c,0x02,0x04,0x82,0x0c,0x0c,0x04,0x10,0x0c,0x80,0x04,0x03,0x00,
0x84,0x00,0x00,0x06,0x0c,0x0e,0x1c,0x07,0x81,0x0e,0x0c,0x10,0x07,0x02,0x0c,0x84,0x07,0x0c,0x0e,0x0c,0x07,0x08,0x0c,0x80,0x04,0x14,0x0c,0x81,0x04,0x04,0x02,0x00,
0x8a,0x00,0x00,0x04,0x0e,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x02,0x07,0x80,0x0c,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0c,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0c,0x02,0x07,0x81,0x0e,0x0c,0x09,0x07,0x80,0x0a,0x02,0x07,0x80,0x0a,0x02,0x07,0x02,0x0c,0x82,0x0e,0x0c,0x0e,0x06,0x0c,0x80,0x04,0x18,0x0c,0x80,0x04,0x02,0x00,
0x87,0x00,0x00,0x04,0x0c,0x07,0x0e,0x07,0x0e,0x1a,0x07,0x82,0x0c,0x0c,0x0e,0x06,0x07,0x80,0x08,0x06,0x07,0x80,0x08,0x0b,0x0c,0x02,0x04,0x04,0x0c,0x80,0x07,0x11,0x0c,0x80,0x04,0x02,0x00,
0x88,0x00,0x00,0x04,0x0c,0x0c,0x07,0x0e,0x07,0x0c,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x83,0x0e,0x0e,0x0c,0x0c,0x03,0x07,0x81,0x0c,0x0c,0x05,0x07,0x81,0x0a,0x08,0x0c,0x0c,0x80,0x04,0x18,0x0c,0x80,0x04,0x02,0x00,
0x87,0x00,0x00,0x04,0x0c,0x07,0x0e,0x07,0x0e,0x1c,0x07,0x80,0x0e,0x02,0x0c,0x82,0x0e,0x07,0x07,0x03,0x0c,0x05,0x07,0x82,0x0e,0x0c,0x04,0x02,0x0c,0x80,0x08,0x02,0x0c,0x80,0x04,0x06,0x0c,0x80,0x0e,0x13,0x0c,0x80,0x04,0x02,0x00,
0x8e,0x00,0x00,0x04,0x0e,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x02,0x07,0x84,0x0c,0x07,0x0e,0x07,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0c,0x02,0x07,0x87,0x0c,0x07,0x0e,0x07,0x0c,0x0e,0x0e,0x0c,0x02,0x07,0x85,0x0c,0x0c,0x04,0x0c,0x08,0x08,0x02,0x07,0x84,0x0e,0x08,0x06,0x06,0x0c,0x02,0x08,0x83,0x06,0x08,0x06,0x04,0x0a,0x0c,0x80,0x04,0x0e,0x0c,0x80,0x04,0x02,0x00,
0x83,0x00,0x00,0x04,0x0c,0x23,0x07,0x80,0x0e,0x04,0x0c,0x86,0x06,0x06,0x04,0x0c,0x06,0x06,0x07,0x03,0x08,0x81,0x06,0x08,0x04,0x0c,0x82,0x08,0x04,0x04,0x06,0x0c,0x85,0x04,0x04,0x06,0x06,0x08,0x0c,0x02,0x04,0x09,0x0c,0x80,0x04,0x02,0x00,
0x84,0x00,0x00,0x04,0x0c,0x0c,0x02,0x07,0x80,0x0c,0x02,0x07,0x80,0x0c,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0e,0x02,0x07,0x80,0x0c,0x02,0x07,0x80,0x0c,0x02,0x07,0x83,0x0c,0x0e,0x0e,0x06,0x05,0x0c,0x80,0x06,0x09,0x0c,0x02,0x04,0x04,0x0c,0x02,0x06,0x02,0x0a,0x84,0x08,0x0a,0x06,0x06,0x04,0x08,0x0c,0x80,0x04,0x02,0x00,
0x83,0x00,0x00,0x04,0x0c,0x28,0x07,0x81,0x0e,0x0e,0x0c,0x0c,0x80,0x07,0x04,0x0c,0x80,0x04,0x04,0x0c,0x80,0x08,0x09,0x0a,0x81,0x06,0x06,0x07,0x0c,0x80,0x04,0x02,0x00,
0x92,0x00,0x00,0x04,0x0c,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x02,0x07,0x84,0x0c,0x07,0x0e,0x07,0x0c,0x02,0x07,0x99,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x0e,0x0e,0x0c,0x80,0x06,0x0b,0x0a,0x81,0x06,0x04,0x06,0x0c,0x80,0x04,0x02,0x00,
0x8f,0x00,0x00,0x04,0x0c,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x06,0x07,0x80,0x0e,0x06,0x07,0x80,0x0e,0x04,0x07,0x95,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x08,0x02,0x0a,0x80,0x07,0x09,0x0a,0x82,0x06,0x06,0x04,0x04,0x0c,0x80,0x04,0x02,0x00,
0x90,0x00,0x00,0x04,0x0c,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x02,0x07,0x84,0x0c,0x07,0x0e,0x07,0x0c,0x02,0x07,0x84,0x0c,0x07,0x0e,0x07,0x0c,0x02,0x07,0x93,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0c,0x80,0x04,0x0f,0x0a,0x82,0x02,0x06,0x04,0x03,0x0c,0x80,0x04,0x02,0x00,
0x8f,0x00,0x00,0x04,0x0c,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x04,0x07,0x82,0x0e,0x07,0x0e,0x04,0x07,0x82,0x0e,0x07,0x0e,0x04,0x07,0x93,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x03,0x0c,0x80,0x06,0x11,0x0a,0x81,0x06,0x04,0x02,0x0c,0x80,0x04,0x02,0x00,
0xb7,0x00,0x00,0x04,0x0c,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0c,0x80,0x08,0x11,0x0a,0x81,0x06,0x04,0x02,0x0c,0x80,0x04,0x02,0x00,
0xba,0x00,0x00,0x04,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x0e,0x0c,0x0c,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x84,0x07,0x0c,0x0c,0x08,0x07,0x02,0x0a,0x80,0x07,0x0c,0x0a,0x81,0x02,
0x04,0x02,0x0c,0x80,0x04,0x02,0x00,
0xaf,0x00,0x00,0x04,0x0c,0x0c,0x0e,0x0c,0x0e,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x0e,0x08,0x08,0x04,0x04,0x08,0x08,0x0c,0x07,0x0e,0x07,0x0c,0x07,0x0e,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x14,0x0c,0x80,0x08,0x11,0x0a,0x81,0x02,0x04,0x02,0x0c,0x80,0x04,0x02,0x00,
0x82,0x00,0x00,0x04,0x02,0x0c,0x8e,0x0e,0x0c,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x0c,0x02,0x08,0x98,0x0c,0x04,0x04,0x00,0x00,0x02,0x02,0x08,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0e,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x06,0x0c,0x80,0x08,0x12,0x0a,0x85,0x02,0x04,0x0c,0x0c,0x04,0x04,0x02,0x00,
0x95,0x00,0x00,0x04,0x04,0x0c,0x0e,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x08,0x00,0x02,0x08,0x81,0x00,0x00,0x02,0x04,0x91,0x08,0x08,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x14,0x0c,0x80,0x08,0x11,0x0a,0x84,0x02,0x06,0x0c,0x0c,0x04,0x03,0x00,
0x02,0x00,0x93,0x04,0x0c,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0e,0x07,0x0e,0x0c,0x08,0x08,0x02,0x02,0x80,0x08,0x02,0x0c,0x98,0x08,0x0e,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x04,0x0c,0x82,0x04,0x06,0x0e,0x10,0x0a,0x84,0x02,0x06,0x04,0x0c,0x04,0x03,0x00,
0x02,0x00,0x8d,0x04,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x02,0x0e,0x81,0x0c,0x07,0x03,0x08,0x95,0x0e,0x0e,0x0c,0x07,0x0e,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x13,0x0c,0x81,0x04,0x06,0x11,0x0a,0x81,0x02,0x06,0x02,0x04,0x03,0x00,
0x02,0x00,0x02,0x0c,0x8a,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x02,0x0e,0x84,0x07,0x0e,0x0e,0x0c,0x0c,0x02,0x0e,0x94,0x07,0x0e,0x07,0x0e,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x06,0x0c,0x80,0x0e,0x02,0x0c,0x82,0x04,0x06,0x02,0x10,0x0a,0x80,0x02,0x03,0x04,0x03,0x00,
0x02,0x00,0x80,0x08,0x02,0x0c,0xa8,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x14,0x0c,0x81,0x04,0x06,0x10,0x0a,0x83,0x02,0x04,0x0c,0x04,0x04,0x00,
0x02,0x00,0xaf,0x04,0x0c,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x07,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x07,0x0c,0x10,0x0a,0x80,0x02,0x02,0x04,0x04,0x00,
0x03,0x00,0x80,0x04,0x0f,0x0c,0x8a,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x26,0x0c,0x80,0x06,0x0f,0x0a,0x80,0x02,0x02,0x04,0x04,0x00,
0x03,0x00,0x80,0x04,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x8c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x10,0x0c,0x83,0x04,0x06,0x06,0x02,0x0d,0x0a,0x80,0x02,0x02,0x04,0x04,0x00,
0x03,0x00,0x81,0x04,0x04,0x0e,0x0c,0x8a,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x0c,0x0e,0x26,0x0c,0x83,0x04,0x04,0x06,0x06,0x0c,0x0a,0x82,0x02,0x04,0x04,0x05,0x00,
0x04,0x00,0xa5,0x04,0x0c,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x0e,0x0c,0x81,0x06,0x06,0x0a,0x0a,0x83,0x02,0x06,0x04,0x04,0x05,0x00,
0x04,0x00,0x80,0x04,0x06,0x0c,0x82,0x0e,0x0c,0x0e,0x04,0x0c,0x82,0x0e,0x0c,0x0e,0x04,0x0c,0x82,0x0e,0x0c,0x0e,0x2a,0x0c,0x81,0x04,0x06,0x09,0x0a,0x82,0x02,0x04,0x04,0x06,0x00,
0x05,0x00,0x80,0x04,0x04,0x0c,0x84,0x0e,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x84,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x84,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x0e,0x06,0x0c,0x80,0x0e,0x12,0x0c,0x81,0x06,0x06,0x08,0x0a,0x82,0x02,0x04,0x04,0x06,0x00,
0x05,0x00,0x81,0x04,0x04,0x06,0x0c,0x80,0x0e,0x06,0x0c,0x80,0x0e,0x06,0x0c,0x80,0x0e,0x2c,0x0c,0x81,0x06,0x02,0x07,0x0a,0x82,0x06,0x04,0x04,0x06,0x00,
0x06,0x00,0x83,0x04,0x0c,0x0c,0x07,0x02,0x0c,0x84,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x84,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x84,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x84,0x07,0x0c,0x0e,0x0c,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x15,0x0c,0x81,0x04,0x02,0x06,0x0a,0x82,0x06,0x04,0x04,0x07,0x00,
0x06,0x00,0x81,0x04,0x04,0x43,0x0c,0x81,0x04,0x06,0x06,0x0a,0x81,0x06,0x04,0x08,0x00,
0x07,0x00,0x80,0x04,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x27,0x0c,0x82,0x04,0x06,0x02,0x04,0x0a,0x82,0x06,0x04,0x04,0x08,0x00,
0x08,0x00,0x80,0x04,0x41,0x0c,0x83,0x04,0x06,0x06,0x02,0x03,0x0a,0x82,0x02,0x04,0x04,0x09,0x00,
0x09,0x00,0x80,0x04,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x02,0x0c,0x80,0x0e,0x19,0x0c,0x81,0x04,0x02,0x03,0x0a,0x82,0x02,0x04,0x04,0x0a,0x00,
0x09,0x00,0x81,0x04,0x04,0x40,0x0c,0x81,0x04,0x02,0x02,0x0a,0x82,0x06,0x04,0x04,0x0b,0x00,
0x0a,0x00,0x80,0x04,0x03,0x0c,0x80,0x0e,0x06,0x0c,0x80,0x0e,0x06,0x0c,0x80,0x0e,0x06,0x0c,0x80,0x0e,0x23,0x0c,0x86,0x06,0x02,0x0a,0x0a,0x06,0x04,0x04,0x0c,0x00,
0x0b,0x00,0x80,0x04,0x3e,0x0c,0x86,0x04,0x06,0x0a,0x0a,0x02,0x04,0x04,0x0d,0x00,
0x0c,0x00,0x04,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x07,0x02,0x0c,0x80,0x0e,0x06,0x0c,0x80,0x0e,0x1c,0x0c,0x85,0x06,0x02,0x0a,0x02,0x06,0x04,0x0e,0x00,
0x0d,0x00,0x81,0x04,0x04,0x3a,0x0c,0x85,0x04,0x06,0x0a,0x02,0x02,0x04,0x0f,0x00,
0x0e,0x00,0x81,0x04,0x04,0x39,0x0c,0x84,0x06,0x02,0x02,0x06,0x04,0x10,0x00,
0x10,0x00,0x80,0x04,0x37,0x0c,0x84,0x04,0x06,0x06,0x04,0x04,0x11,0x00,
0x11,0x00,0x81,0x06,0x04,0x05,0x0c,0x80,0x0e,0x06,0x0c,0x80,0x0e,0x26,0x0c,0x83,0x04,0x06,0x04,0x04,0x12,0x00,
0x12,0x00,0x81,0x04,0x04,0x34,0x0c,0x81,0x04,0x04,0x14,0x00,
0x14,0x00,0x81,0x04,0x04,0x2e,0x0c,0x84,0x04,0x0c,0x0c,0x04,0x04,0x15,0x00,
0x15,0x00,0x81,0x04,0x04,0x2b,0x0c,0x05,0x04,0x16,0x00,
0x17,0x00,0x02,0x04,0x27,0x0c,0x03,0x04,0x19,0x00,
0x19,0x00,0x02,0x04,0x24,0x0c,0x02,0x04,0x1b,0x00,
0x1b,0x00,0x03,0x04,0x1d,0x0c,0x04,0x04,0x1d,0x00,
0x1e,0x00,0x03,0x04,0x16,0x0c,0x04,0x04,0x21,0x00,
0x21,0x00,0x07,0x04,0x0b,0x0c,0x04,0x04,0x25,0x00,
0x28,0x00,0x0d,0x04,0x29,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
0x60,0x00,
};
PegBitmap gbPegGlobeBitmap = {0x01, 8, 97, 113, 0, ucPegGlobeBitmap};

UCHAR PEGFAR ucSateliteBitmap[] = {
0x1f,0x0f,
0x07,0x0f,0x80,0x09,0x16,0x0f,
0x03,0x0f,0x80,0x09,0x02,0x0f,0x80,0x09,0x0c,0x0f,0x03,0x08,0x05,0x0f,
0x04,0x0f,0x83,0x09,0x0f,0x0f,0x09,0x0a,0x0f,0x81,0x08,0x08,0x02,0x0f,0x81,0x07,0x00,0x04,0x0f,
0x02,0x0f,0x83,0x09,0x0f,0x0f,0x09,0x0a,0x0f,0x83,0x08,0x08,0x0f,0x0f,0x02,0x08,0x81,0x0f,0x00,0x04,0x0f,
0x03,0x0f,0x80,0x09,0x02,0x0f,0x81,0x08,0x08,0x06,0x0f,0x82,0x08,0x0f,0x0f,0x04,0x08,0x81,0x0f,0x00,0x04,0x0f,
0x04,0x0f,0x85,0x09,0x0f,0x08,0x08,0x0f,0x00,0x04,0x0f,0x81,0x08,0x0f,0x05,0x08,0x82,0x0f,0x00,0x00,0x04,0x0f,
0x83,0x0f,0x0f,0x09,0x09,0x02,0x0f,0x02,0x08,0x81,0x0f,0x00,0x02,0x0f,0x81,0x08,0x0f,0x06,0x08,0x82,0x0f,0x00,0x00,0x04,0x0f,
0x04,0x0f,0x82,0x09,0x0f,0x0f,0x04,0x00,0x82,0x0f,0x08,0x0f,0x06,0x08,0x83,0x0f,0x00,0x08,0x00,0x04,0x0f,
0x03,0x0f,0x80,0x09,0x06,0x0f,0x82,0x00,0x00,0x0f,0x07,0x08,0x83,0x0f,0x00,0x08,0x00,0x04,0x0f,
0x02,0x0f,0x80,0x09,0x07,0x0f,0x02,0x00,0x06,0x08,0x84,0x0f,0x00,0x08,0x08,0x00,0x04,0x0f,
0x0a,0x0f,0x84,0x08,0x0f,0x08,0x00,0x00,0x05,0x08,0x83,0x0f,0x00,0x08,0x00,0x05,0x0f,
0x09,0x0f,0x81,0x08,0x0f,0x02,0x08,0x81,0x00,0x00,0x03,0x08,0x84,0x0f,0x00,0x08,0x08,0x00,0x05,0x0f,
0x08,0x0f,0x81,0x08,0x0f,0x04,0x08,0x85,0x00,0x00,0x08,0x08,0x0f,0x00,0x02,0x08,0x80,0x00,0x05,0x0f,
0x07,0x0f,0x81,0x08,0x0f,0x06,0x08,0x87,0x00,0x00,0x0f,0x00,0x08,0x07,0x08,0x00,0x06,0x0f,
0x06,0x0f,0x81,0x08,0x0f,0x08,0x08,0x86,0x0f,0x00,0x08,0x07,0x07,0x08,0x00,0x06,0x0f,
0x05,0x0f,0x81,0x08,0x0f,0x08,0x08,0x87,0x0f,0x00,0x08,0x07,0x07,0x08,0x08,0x00,0x06,0x0f,
0x05,0x0f,0x81,0x08,0x0f,0x07,0x08,0x82,0x0f,0x00,0x08,0x02,0x07,0x81,0x08,0x00,0x07,0x0f,
0x04,0x0f,0x81,0x08,0x0f,0x07,0x08,0x82,0x0f,0x00,0x08,0x03,0x07,0x80,0x08,0x02,0x00,0x05,0x0f,
0x03,0x0f,0x81,0x08,0x0f,0x07,0x08,0x82,0x0f,0x00,0x08,0x03,0x07,0x85,0x08,0x00,0x00,0x07,0x08,0x00,0x04,0x0f,
0x03,0x0f,0x81,0x08,0x0f,0x06,0x08,0x82,0x0f,0x00,0x08,0x03,0x07,0x86,0x08,0x00,0x00,0x07,0x07,0x08,0x00,0x04,0x0f,
0x02,0x0f,0x81,0x08,0x0f,0x06,0x08,0x82,0x0f,0x00,0x08,0x03,0x07,0x87,0x08,0x00,0x00,0x07,0x07,0x08,0x08,0x00,0x04,0x0f,
0x02,0x0f,0x81,0x08,0x0f,0x04,0x08,0x83,0x0f,0x0f,0x00,0x08,0x02,0x07,0x80,0x08,0x02,0x00,0x02,0x07,0x81,0x08,0x00,0x05,0x0f,
0x03,0x0f,0x80,0x08,0x04,0x0f,0x84,0x00,0x00,0x07,0x07,0x08,0x03,0x00,0x03,0x07,0x81,0x08,0x00,0x06,0x0f,
0x04,0x0f,0x09,0x00,0x82,0x0f,0x0f,0x00,0x02,0x07,0x82,0x08,0x08,0x00,0x07,0x0f,
0x0f,0x0f,0x82,0x00,0x07,0x07,0x02,0x08,0x80,0x00,0x08,0x0f,
0x0e,0x0f,0x80,0x00,0x04,0x08,0x80,0x00,0x09,0x0f,
0x0d,0x0f,0x80,0x00,0x04,0x08,0x80,0x00,0x0a,0x0f,
0x07,0x0f,0x04,0x08,0x0b,0x00,0x06,0x0f,
0x06,0x0f,0x81,0x08,0x0f,0x0e,0x07,0x81,0x08,0x00,0x05,0x0f,
0x05,0x0f,0x80,0x00,0x12,0x08,0x80,0x00,0x04,0x0f,
0x06,0x0f,0x12,0x00,0x05,0x0f,
};
PegBitmap gbSateliteBitmap = {0x01, 8, 32, 32, 0, ucSateliteBitmap};

#include "peg.hpp"

UCHAR PEGFAR ucThunderBitmap[] = {
0x09,0x0f,0x02,0x08,0x12,0x0f,
0x08,0x0f,0x80,0x08,0x02,0x0f,0x02,0x08,0x07,0x0f,0x81,0x08,0x08,0x05,0x0f,
0x06,0x0f,0x81,0x08,0x08,0x02,0x0f,0x80,0x07,0x02,0x0f,0x80,0x08,0x05,0x0f,0x83,0x08,0x0f,0x0f,0x08,0x04,0x0f,
0x05,0x0f,0x80,0x08,0x03,0x0f,0x85,0x07,0x08,0x0f,0x07,0x07,0x0f,0x03,0x08,0x81,0x0f,0x08,0x02,0x0f,0x82,0x07,0x08,0x08,0x02,0x0f,
0x05,0x0f,0x87,0x08,0x0f,0x07,0x0f,0x07,0x07,0x0f,0x08,0x02,0x07,0x80,0x08,0x02,0x0f,0x8a,0x08,0x0f,0x07,0x0f,0x07,0x0f,0x07,0x08,0x00,0x0f,0x0f,
0x02,0x0f,0x03,0x08,0x81,0x0f,0x0f,0x02,0x07,0x81,0x0f,0x08,0x02,0x07,0x85,0x08,0x0f,0x07,0x07,0x08,0x0f,0x04,0x07,0x83,0x08,0x00,0x0f,0x0f,
0x02,0x0f,0x80,0x08,0x02,0x0f,0x8a,0x07,0x0f,0x0f,0x07,0x0f,0x07,0x0f,0x08,0x08,0x07,0x0f,0x02,0x07,0x80,0x0f,0x04,0x07,0x84,0x08,0x08,0x00,0x0f,0x0f,
0x82,0x0f,0x0f,0x08,0x02,0x0f,0x83,0x07,0x0f,0x08,0x08,0x0f,0x07,0x02,0x08,0x82,0x00,0x0f,0x0f,
0x84,0x0f,0x0f,0x08,0x0f,0x0f,0x02,0x07,0x82,0x0f,0x0f,0x08,0x03,0x07,0x02,0x08,0x04,0x07,0x85,0x08,0x07,0x07,0x08,0x07,0x00,0x02,0x0f,
0x82,0x0f,0x0f,0x08,0x02,0x0f,0x8b,0x07,0x0f,0x07,0x0f,0x08,0x07,0x07,0x08,0x08,0x07,0x0f,0x0f,0x04,0x08,0x85,0x0f,0x08,0x08,0x0f,0x08,0x00,0x02,0x0f,
0x02,0x0f,0x81,0x00,0x0f,0x02,0x07,0x97,0x08,0x0f,0x08,0x07,0x08,0x0f,0x08,0x0f,0x07,0x07,0x0f,0x07,0x07,0x08,0x0f,0x07,0x0f,0x0f,0x07,0x08,0x08,0x00,0x0f,0x0f,
0x03,0x0f,0x8d,0x00,0x00,0x08,0x08,0x07,0x08,0x08,0x0f,0x0f,0x07,0x0f,0x08,0x08,0x0f,0x02,0x07,0x82,0x08,0x08,0x0f,0x02,0x07,0x84,0x08,0x08,0x00,0x0f,0x0f,
0x05,0x0f,0x02,0x00,0x80,0x08,0x02,0x07,0x03,0x08,0x87,0x07,0x08,0x07,0x08,0x08,0x0f,0x07,0x07,0x03,0x08,0x82,0x00,0x0f,0x0f,
0x07,0x0f,0x81,0x00,0x07,0x07,0x08,0x85,0x07,0x08,0x08,0x07,0x08,0x07,0x03,0x08,0x80,0x00,0x02,0x0f,
0x08,0x0f,0x82,0x00,0x08,0x08,0x03,0x00,0x0a,0x08,0x80,0x00,0x03,0x0f,
0x07,0x0f,0x80,0x03,0x02,0x00,0x83,0x07,0x00,0x07,0x00,0x04,0x08,0x02,0x00,0x02,0x08,0x80,0x00,0x03,0x0f,
0x06,0x0f,0x85,0x03,0x0f,0x0f,0x0b,0x07,0x00,0x02,0x07,0x02,0x00,0x84,0x08,0x08,0x00,0x0f,0x0f,0x02,0x00,0x04,0x0f,
0x05,0x0f,0x84,0x03,0x0f,0x0f,0x0b,0x07,0x04,0x03,0x02,0x0f,0x81,0x00,0x00,0x0a,0x0f,
0x04,0x0f,0x04,0x03,0x84,0x0b,0x0f,0x0b,0x07,0x00,0x10,0x0f,
0x08,0x0f,0x84,0x03,0x0f,0x0b,0x07,0x00,0x11,0x0f,
0x07,0x0f,0x84,0x03,0x0f,0x0b,0x07,0x00,0x12,0x0f,
0x06,0x0f,0x84,0x03,0x0f,0x0b,0x07,0x00,0x13,0x0f,
0x05,0x0f,0x84,0x03,0x0f,0x0b,0x07,0x00,0x14,0x0f,
0x04,0x0f,0x84,0x03,0x0f,0x0b,0x07,0x00,0x15,0x0f,
0x03,0x0f,0x84,0x03,0x0f,0x0b,0x07,0x08,0x03,0x03,0x12,0x0f,
0x02,0x0f,0x04,0x03,0x02,0x0b,0x80,0x00,0x13,0x0f,
0x07,0x0f,0x82,0x03,0x0b,0x00,0x14,0x0f,
0x06,0x0f,0x82,0x03,0x0b,0x00,0x15,0x0f,
0x05,0x0f,0x82,0x03,0x0b,0x00,0x16,0x0f,
0x04,0x0f,0x82,0x03,0x0b,0x00,0x17,0x0f,
0x04,0x0f,0x81,0x03,0x00,0x18,0x0f,
0x03,0x0f,0x81,0x03,0x00,0x19,0x0f,
};
PegBitmap gbThunderBitmap = {0x01, 8, 32, 32, 0, ucThunderBitmap};
