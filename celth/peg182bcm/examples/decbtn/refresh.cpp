
#include "peg.hpp"
/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/

ROMDATA UCHAR ucrefreshBitmap[129] = {
0x0f,0xff,0x04,0xff,0x04,0x09,0x05,0xff,0x03,0xff,0x80,0x09,0x04,0xff,0x80,0x09,
0x04,0xff,0x02,0xff,0x80,0x09,0x06,0xff,0x84,0x09,0xff,0x09,0xff,0xff,0x82,0xff,
0xff,0x09,0x06,0xff,0x02,0x09,0x02,0xff,0x82,0xff,0xff,0x09,0x08,0xff,0x80,0x09,
0x02,0xff,0x81,0xff,0x09,0x0a,0xff,0x82,0x0c,0xff,0xff,0x81,0xff,0x09,0x0a,0xff,
0x82,0x0c,0xff,0xff,0x81,0xff,0x09,0x0a,0xff,0x82,0x0c,0xff,0xff,0x82,0xff,0xff,
0x0c,0x08,0xff,0x80,0x0c,0x02,0xff,0x81,0xff,0xff,0x02,0x0c,0x06,0xff,0x80,0x0c,
0x02,0xff,0x83,0xff,0x0c,0xff,0x0c,0x06,0xff,0x80,0x0c,0x03,0xff,0x03,0xff,0x80,
0x0c,0x04,0xff,0x80,0x0c,0x04,0xff,0x04,0xff,0x04,0x0c,0x05,0xff,0x0f,0xff,0x0f,
0xff,};
PegBitmap gbRefreshBitmap = { 0x11, 8, 16, 16, 0x000000ff, (UCHAR *) ucrefreshBitmap};

