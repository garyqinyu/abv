/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/
// 1375scr4.hpp - Linear screen driver for 4-bpp (16 color) operation.
//
// Author: Kenneth G. Maxwell
//
// Copyright (c) 1997-2000 Swell Software 
//              All Rights Reserved.
//
// Unauthorized redistribution of this source code, in whole or part,
// without the express written permission of Swell Software
// is strictly prohibited.
//
// Notes:
//
//  This screen driver is intended for use with 16-color systems that support
//  a linear frame buffer.
//
//  This driver can be tested under Win32 by turning on the definition
//  PEGWIN32. You can safely delete all code bracketed by the PEGWIN32
//  definition when moving to your target.
//
/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/

#ifndef _1375SCR4_
#define _1375SCR4_

/*--------------------------------------------------------------------------*/
// X86_REAL_MODE 
//
// Turn this on if running an x86 processor in real mode.
/*--------------------------------------------------------------------------*/
#define X86_REAL_MODE


/*--------------------------------------------------------------------------*/
// DOUBLE_BUFFER 
//
// When this is turned on, PEG does all drawing to an offscreen buffer, 
// and then transfers the buffer into the visible frame buffer.
/*--------------------------------------------------------------------------*/
#define DOUBLE_BUFFER


/*--------------------------------------------------------------------------*/
// Default LCD resolution. Since there is only 80k of memory on the 
// SED1375, 320x240 is a resonable resolution at 4bpp.
/*--------------------------------------------------------------------------*/
#define PEG_VIRTUAL_XSIZE 320
#define PEG_VIRTUAL_YSIZE 240


/*--------------------------------------------------------------------------*/
// Where do we map to video memory and registers
/*--------------------------------------------------------------------------*/

#define VID_MEM_BASE    0xF00000L    
#define VID_REG_BASE    VID_MEM_BASE + 0x1FFE0    

/*--------------------------------------------------------------------------*/
// VID_MEM_SIZE- how much video memory is installed on your system?
/*--------------------------------------------------------------------------*/

#define VID_MEM_SIZE    0x14000     // default to 80k video RAM

/*--------------------------------------------------------------------------*/
// ID of the SED1375 card
/*--------------------------------------------------------------------------*/
#define SED1375ID		0x24

/*--------------------------------------------------------------------------*/
#define PlotPointView(x, y, c)\
{\
    UCHAR PEGFAR *_Put = mpScanPointers[y] + (x >> 1);\
    UCHAR PEGFAR _uVal = *_Put;\
    if (x & 1)\
    {\
        _uVal &= 0xf0;\
        _uVal |= c;\
    }\
    else\
    {\
        _uVal &= 0x0f;\
        _uVal |= c << 4;\
    }\
    *_Put = _uVal;\
}


/*--------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------*/
class SED1375Screen4 : public PegScreen
{
    public:
       #ifndef PEGWIN32
        SED1375Screen4(PegRect &);
       #else
        SED1375Screen4(HWND hwnd, PegRect &);
        SIGNED mwWinRectXOffset;
        SIGNED mwWinRectYOffset;
       #endif

        virtual ~SED1375Screen4();

        //---------------------------------------------------------
        // Public pure virtual functions in PegScreen:
        //---------------------------------------------------------

        void BeginDraw(PegThing *);
        void BeginDraw(PegThing *, PegBitmap *);
        void EndDraw(void);
        void EndDraw(PegBitmap *);
        void SetPointerType(UCHAR bType);
        void SetPointer(PegPoint);
        void Capture(PegCapture *Info, PegRect &Rect);
        COLORVAL GetPixelView(SIGNED x, SIGNED y)
        {
            UCHAR PEGFAR *_Get = mpScanPointers[y] + (x >> 1);
            UCHAR _uVal = *_Get;
            if (x & 1)
            {
                _uVal &= 0x0f;
            }
            else
            {
                _uVal >>= 4;
            }
            return ((COLORVAL) _uVal);
        }

        #ifdef PEG_IMAGE_SCALING

        COLORVAL GetBitmapPixel(SIGNED x, SIGNED y, PegBitmap *pMap)
        {
            COLORVAL *_pGet = pMap->pStart;

            if (pMap->uBitsPix == 8)
            {
                _pGet += pMap->wWidth * y;
                _pGet += x;
                return *_pGet;
            }

            WORD wBytesPerLine = (pMap->wWidth + 1) >> 1;
            _pGet += wBytesPerLine * y;
            _pGet += x >> 1;
            UCHAR uVal = *_pGet;
            if (x & 1)
            {
                uVal &= 0x0f;
            }
            else
            {
                uVal >>= 4;
            }
            return (COLORVAL) uVal;
        }
        void PutBitmapPixel(SIGNED x, SIGNED y, PegBitmap *pMap, COLORVAL cVal)
        {
            WORD wBytesPerLine = (pMap->wWidth + 1) >> 1;
            COLORVAL *_pPut = pMap->pStart;
            _pPut += wBytesPerLine * y;
            _pPut += x >> 1;

            UCHAR uVal = *_pPut;
            if (x & 1)
            {
                uVal &= 0xf0;
                uVal |= (UCHAR) cVal;
            }
            else
            {
                uVal &= 0x0f;
                uVal |= (UCHAR) cVal << 4;
            }
            *_pPut = (COLORVAL) uVal;
        }
        #endif

        void SetPalette(SIGNED iFirst, SIGNED iNum, const UCHAR *Get);
        UCHAR *GetPalette(DWORD *pPutSize);
        void ResetPalette(void);

        //---------------------------------------------------------
        // End public pure virtual functions.
        //---------------------------------------------------------

        virtual PegBitmap *CreateBitmap(SIGNED wWidth, SIGNED wHeight, BOOL bHasTrans);

    protected:
        
        void HidePointer(void);
        UCHAR *GetVideoAddress(void);
        void ConfigureController(void);

    private:

        //---------------------------------------------------------
        // Protected pure virtual functions in PegScreen:
        //---------------------------------------------------------

        void DrawTextView(PegPoint Where, const PEGCHAR *Text, PegColor &Color,
            PegFont *Font, SIGNED iCount, PegRect &Rect);
        void LineView(SIGNED xStart, SIGNED yStart, SIGNED xEnd, SIGNED yEnd,
            PegRect &Rect, PegColor Color, SIGNED wWidth);
        void BitmapView(const PegPoint Where, const PegBitmap *Getmap,
            const PegRect &View);
        void RectMoveView(PegThing *Caller, const PegRect &View,
            const SIGNED xMove, const SIGNED yMove);

        void DrawRleBitmap(const PegPoint Where, const PegRect View,
            const PegBitmap *Getmap);
        void HorizontalLine(SIGNED wXStart, SIGNED wXEnd, SIGNED wYPos,
            COLORVAL Color, SIGNED wWidth);
        void VerticalLine(SIGNED wYStart, SIGNED wYEnd, SIGNED wXPos,
            COLORVAL Color, SIGNED wWidth);
        void HorizontalLineXOR(SIGNED wXStart, SIGNED wXEnd, SIGNED wYPos);
        void VerticalLineXOR(SIGNED wYStart, SIGNED wYEnd, SIGNED wXPos);

        //---------------------------------------------------------
        // End protected pure virtual functions.
        //---------------------------------------------------------

        // functions for drawing to off-screen bitmaps, using linear addressing:
        void Draw16ColorBitmap(const PegPoint Where, const PegBitmap *Getmap,
            const PegRect &View);
        void DrawUnaligned16ColorBitmap(const PegPoint Where, const PegBitmap *Getmap,
            const PegRect &View);

       #if defined(PEGWIN32) || defined(DOUBLE_BUFFER)
		void MemoryToScreen(void);
	   #endif

       #ifdef PEGWIN32
        UCHAR  muPalette[16 * 3];
        HWND mHWnd;
        HPALETTE mhPalette;
        HDC  mHdc;
       #endif
};

#endif	// _1375SCR4_


