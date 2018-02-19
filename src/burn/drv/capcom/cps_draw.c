#include "cps.h"
#include <retro_inline.h>
// CPS - Draw

UINT8 CpsRecalcPal = 0;			// Flag - If it is 1, recalc the whole palette

static INT32 LayerCont;
INT32 nStartline, nEndline;
INT32 nRasterline[MAX_RASTER + 2];

INT32 nCpsLcReg = 0;						// Address of layer controller register
INT32 CpsLayEn[6] = {0, 0, 0, 0, 0, 0};	// bits for layer enable
INT32 MaskAddr[4] = {0, 0, 0, 0};

INT32 CpsLayer1XOffs = 0;
INT32 CpsLayer2XOffs = 0;
INT32 CpsLayer3XOffs = 0;
INT32 CpsLayer1YOffs = 0;
INT32 CpsLayer2YOffs = 0;
INT32 CpsLayer3YOffs = 0;

INT32 CpsDisableRowScroll = 0;

// CPS Scroll (Background Layers)

// Base = 0x4000 long tile map
// sx=Scroll X value, sy=Scroll Y value,
INT32 Ssf2t=0;
INT32 Xmcota=0;

INT32 Scroll1TileMask = 0;
INT32 Scroll2TileMask = 0;
INT32 Scroll3TileMask = 0;

void DrawFnInit(void)
{
}

static INT32 Cps2Scr1Draw(UINT8 *Base, INT32 sx, INT32 sy)
{
	INT32 x, y;
	INT32 iy;
	INT32 nFirstY, nLastY;
	INT32 nKnowBlank = -1; // The tile we know is blank
	INT32 ix = (sx >> 3) + 1;
	sx &= 7;
	sx = 8 - sx;

	iy = (sy >> 3) + 1;
	sy &= 7;

	nLastY = (nEndline + sy) >> 3;
	nFirstY = (nStartline + sy) >> 3;

	sy = 8 - sy;

	for (y = nFirstY - 1; y < nLastY; y++)
   {
      INT32 nClipY = ((y << 3) < nStartline) | (((y << 3) + 8) >= nEndline);
      for (x = -1; x < 48; x++)
      {
         INT32 a;
         INT32 fx = ix + x;
         INT32 fy = iy + y;								// 0 <= fx/fy <= 63

         // Find tile address
         INT32     p = (((fy & 0x20) << 8) | ((fx & 0x3F) << 7) | ((fy & 0x1F) << 2)) & 0x3FFF;
         UINT16 *pst = (UINT16 *)(Base + p);
         INT32     t = (BURN_ENDIAN_SWAP_INT16(pst[0])) << 6; /* Get real tile address */

         t += nCpsGfxScroll[1];							// add on offset to scroll tiles

         /* Draw tile */
         if (t == nKnowBlank)
            continue;

         a = BURN_ENDIAN_SWAP_INT16(pst[1]);

         CpstSetPal(0x20 | (a & 0x1F));

         nCpstX    = sx + (x << 3);
         nCpstY    = sy + (y << 3);
         nCpstTile = t;
         nCpstFlip = (a >> 5) & 3;

         nCpstType = CTT_8X8;

         // Don't need to clip except around the border
         if (x < 0 || x >= 48 - 1 || nClipY)
            nCpstType |= CTT_CARE;

         if (Cps2tOne())
            nKnowBlank = t;
      }
   }
	return 0;
}

static INT32 DrawScroll1(INT32 i)
{
   // Draw Scroll 1
   UINT8 *Find;
   INT32 nOff = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x02)));

   // Get scroll coordinates
   INT32 nScrX = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x0c))); // Scroll 1 X
   INT32 nScrY = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x0e))); // Scroll 1 Y

   nScrX += 0x40;

   //	bprintf(PRINT_NORMAL, _T("1 %x, %x, %x\n"), nOff, nScrX, nScrY);

   nScrX += CpsLayer1XOffs;
   nScrY += 0x10;
   nScrY += CpsLayer1YOffs;
   nOff <<= 8;
   nOff &= 0xffc000;
   Find = CpsFindGfxRam(nOff, 0x4000);
   if (Find == NULL)
      return 1;
   Cps2Scr1Draw(Find, nScrX, nScrY);
   return 0;
}

static INT32 DrawScroll2Init(INT32 i)
{
   // Draw Scroll 2
   INT32 n;
   INT32 nScr2Off = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x04)));

   // Get scroll coordinates
   nCpsrScrX= BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x10))); // Scroll 2 X
   nCpsrScrY= BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x12))); // Scroll 2 Ytess

   // Get row scroll information
   n = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x22)));

   nScr2Off <<= 8;

   nCpsrScrX += 0x40;

   //	bprintf(PRINT_NORMAL, _T("2 %x, %x, %x\n"), nScr2Off, nCpsrScrX, nCpsrScrY);

   nCpsrScrX += CpsLayer2XOffs;
   nCpsrScrX &= 0x03FF;

   nCpsrScrY += 0x10;
   nCpsrScrY += CpsLayer2YOffs;
   nCpsrScrY &= 0x03FF;

   nScr2Off &= 0xFFC000;
   CpsrBase = CpsFindGfxRam(nScr2Off, 0x4000);
   if (CpsrBase == NULL) {
      return 1;
   }

   CpsrRows = NULL;

   if ((n & 1) && !CpsDisableRowScroll)
   {
      // Find row scroll table:
      INT32 nTab = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x08)));
      INT32 nStart = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x20)));

      nTab <<= 8;
      nTab &= 0xFFF800; // Vampire - Row scroll effect in VS screen background

      CpsrRows = (UINT16 *)CpsFindGfxRam(nTab, 0x0800);

      // Find start offset
      nCpsrRowStart = nStart + 16;
   }

   Cps2rPrepare();
   return 0;
}

static INLINE INT32 DrawScroll2Exit(void)
{
	CpsrBase = NULL;
	nCpsrScrX = 0;
	nCpsrScrY = 0;
	CpsrRows = NULL;
	return 0;
}

static INLINE INT32 DrawScroll2Do()
{
	if (!CpsrBase)
		return 1;
	Cps2rRender();
	return 0;
}

static INT32 Cps2Scr3Draw(UINT8 *Base, INT32 sx, INT32 sy)
{
	INT32 x, y;
	INT32 iy;
	INT32 nFirstY, nLastY;
	INT32 nKnowBlank = -1; // The tile we know is blank
	INT32 ix = (sx >> 5) + 1;
	sx &= 31;
	sx = 32 - sx;

	iy = (sy >> 5) + 1;
	sy &= 31;

	nLastY = (nEndline + sy) >> 5;
	nFirstY = (nStartline + sy) >> 5;

	sy = 32 - sy;

	for (y = nFirstY - 1; y < nLastY; y++)
   {
      INT32 nClipY = ((y << 5) < nStartline) | (((y << 5) + 32) >= nEndline);
      for (x = -1; x < 12; x++)
      {
         INT32 t, a;
         UINT16 *pst;
         INT32 fx, fy, p;
         fx = ix + x;
         fy = iy + y;									// 0 <= fx/fy <= 63

         // Find tile address
         p = ((fy & 0x38) << 8) | ((fx & 0x3F) << 5) | ((fy & 0x07) << 2);
         p &= 0x3FFF;
         pst = (UINT16 *)(Base + p);

         t = BURN_ENDIAN_SWAP_INT16(pst[0]);

         if(Xmcota && t>=0x5800)      t-=0x4000;
         else if(Ssf2t && t<0x5600)   t+=0x4000;
         t <<= 9;										// Get real tile address
         t += nCpsGfxScroll[3];							// add on offset to scroll tiles

         if (t == nKnowBlank) 
            continue;

         /* Draw tile */

         a = BURN_ENDIAN_SWAP_INT16(pst[1]);

         CpstSetPal(0x60 | (a & 0x1F));

         nCpstX    = sx + (x << 5);
         nCpstY    = sy + (y << 5);
         nCpstTile = t;
         nCpstFlip = (a >> 5) & 3;
         nCpstType = CTT_32X32;

         // Don't need to clip except around the border
         if (x < 0 || x >= 12 - 1 || nClipY)
            nCpstType |= CTT_CARE;

         if (Cps2tOne())
            nKnowBlank = t;
      }
   }
	return 0;
}

static INT32 DrawScroll3(INT32 i)
{
   // Draw Scroll 3
   UINT8 *Find;

   INT32 nOff = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x06)));

   // Get scroll coordinates
   INT32 nScrX = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x14))); // Scroll 3 X
   INT32 nScrY = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[i] + 0x16))); // Scroll 3 Y

   nScrX += 0x40;

   //	bprintf(PRINT_NORMAL, _T("3 %x, %x, %x\n"), nOff, nScrX, nScrY);

   nScrX += CpsLayer3XOffs;
   nScrY += 0x10;
   nScrY += CpsLayer3YOffs;

   nOff <<= 8;
   nOff &= 0xffc000;
   Find=CpsFindGfxRam(nOff, 0x4000);

   if (!Find)
      return 1;

   Cps2Scr3Draw(Find, nScrX, nScrY);
   return 0;
}

static INT32 DrawStar(INT32 nLayer)
{
   INT32 i;
   UINT8* pStar = CpsStar + (nLayer << 12);

   for (i = 0; i < 0x1000; i++)
   {
      INT32 nStarXPos, nStarYPos;
      INT32 nStarColour = pStar[i];

      if (nStarColour == 0x0F)
         continue;

      nStarXPos = (((i >> 8) << 5) - *((INT16*)(CpsSaveReg[0] + 0x18 + (nLayer << 2))) + (nStarColour & 0x1F) - 64) & 0x01FF;
      nStarYPos = ((i & 0xFF) - *((INT16*)(CpsSaveReg[0] + 0x1A + (nLayer << 2))) - 16) & 0xFF;

      if (nStarXPos < 384 && nStarYPos < 224)
      {
         nStarColour = ((nStarColour & 0xE0) >> 1) + ((GetCurrentFrame() >> 4) & 0x0F);
         PutPix(pBurnDraw + (nBurnPitch * nStarYPos) + (nBurnBpp * nStarXPos), CpsPal[0x0800 + (nLayer << 9) + nStarColour]);
      }
   }

   return 0;
}

static void Cps2Layers(void)
{
   INT32 Draw[MAX_RASTER][4];
   INT32 Prio[MAX_RASTER][4];
   INT32 nDrawMask[MAX_RASTER];
   INT32 nCurrPrio;
   INT32 nSlice = 0;
   INT32 nPrevPrio = -1;

   CpsObjDrawInit();

   do
   {
      INT32 i;
      INT32 nLayPri;
      INT32 nHighPrio;

      LayerCont = BURN_ENDIAN_SWAP_INT16(*((UINT16 *)(CpsSaveReg[nSlice] + nCpsLcReg)));

      // Determine which layers are enabled
      nDrawMask[nSlice] = 1;								// Sprites always on
      if (LayerCont & CpsLayEn[1]) nDrawMask[nSlice] |= 2;
      if (LayerCont & CpsLayEn[2]) nDrawMask[nSlice] |= 4;
      if (LayerCont & CpsLayEn[3]) nDrawMask[nSlice] |= 8;
      nDrawMask[nSlice] &= nBurnLayer;					// User choice of layers to display

      // Determine layerö priority:
      Draw[nSlice][3] = (LayerCont >> 12) & 3;			// top layer
      Draw[nSlice][2] = (LayerCont >> 10) & 3;
      Draw[nSlice][1] = (LayerCont >> 8) & 3;
      Draw[nSlice][0] = (LayerCont >> 6) & 3;				// bottom layer (most covered up)

      // Determine layer-sprite priority (layer >= sprites -> layer on top)
      nLayPri = (CpsSaveFrg[nSlice][4] << 8) | CpsSaveFrg[nSlice][5];	// Layer priority register at word (400004)
      Prio[nSlice][3] = (nLayPri >> 12) & 7;
      Prio[nSlice][2] = (nLayPri >> 8) & 7;
      Prio[nSlice][1] = (nLayPri >> 4) & 7;
      Prio[nSlice][0] = 0;

      // Check for repeated layers (if found, discard the lower layer)
#define CRP(a, b) if (Draw[nSlice][a] == Draw[nSlice][b]) Draw[nSlice][b] = -1;
      CRP(3, 2) CRP(3, 1) CRP(2, 1) CRP(3, 0) CRP(2, 0) CRP(1, 0)
#undef CRP

         // Pre-process priorities
         // Higher priority layers must have higher layer-sprite priorities
         // N.B. If this is not the case, masking effects may occur (not emulated)
      // Lower sprite priorities of bottom layers if needed
      nHighPrio = 9999;
      for (i = 3; i >= 0; i--)
      {
         if (Draw[nSlice][i] > 0)
         {
            if (Prio[nSlice][Draw[nSlice][i]] > nHighPrio)
               Prio[nSlice][Draw[nSlice][i]] = nHighPrio;
            else
               nHighPrio = Prio[nSlice][Draw[nSlice][i]];
         }
      }
      nSlice++;
   } while (nSlice < MAX_RASTER && nRasterline[nSlice]);

   for (nCurrPrio = 0; nCurrPrio < 8; nCurrPrio++)
   {
      nSlice = 0;
      do
      {
         INT32 i;
         for (i = 0; i < 4; i++)
         {
            if (Prio[nSlice][Draw[nSlice][i]] == nCurrPrio)
            {
               // Render sprites between the previous layer and this one
               if ((nDrawMask[0] & 1) && (nPrevPrio < nCurrPrio))
               {
                  Cps2ObjDraw(nPrevPrio + 1, nCurrPrio);
                  nPrevPrio = nCurrPrio;
               }

               nStartline = nRasterline[nSlice];
               nEndline = nRasterline[nSlice + 1];
               if (!nEndline)
                  nEndline = 224;

               // Render layer
               switch (Draw[nSlice][i])
               {
                  case 1:
                     if (nDrawMask[nSlice] & 2)
                        DrawScroll1(nSlice);
                     break;
                  case 2:
                     if (nDrawMask[nSlice] & 4) {
                        DrawScroll2Init(nSlice);
                        DrawScroll2Do();
                        DrawScroll2Exit();
                     }
                     break;
                  case 3:
                     if (nDrawMask[nSlice] & 8)
                        DrawScroll3(nSlice);
                     break;
               }
            }
         }
         nSlice++;
      }  while (nSlice < MAX_RASTER && nRasterline[nSlice]);
   }

   // Render highest priority sprites
   if ((nDrawMask[0] & 1) && (nPrevPrio < 7))
      Cps2ObjDraw(nPrevPrio + 1, 7);
}

void CpsClearScreen(void)
{
   memset(pBurnDraw, 0, 384 * 224 * nBurnBpp);
}

static void DoDraw(INT32 Recalc)
{
	CtvReady();								// Point to correct tile drawing functions

	if (bCpsUpdatePalEveryFrame)
      GetPalette(0, 6);
	if (Recalc || bCpsUpdatePalEveryFrame)
      CpsPalUpdate(CpsSavePal);		// recalc whole palette if needed
	
   memset(pBurnDraw, 0, 384 * 224 * nBurnBpp);

	Cps2Layers();
}

INT32 CpsDraw(void)
{
	DoDraw(CpsRecalcPal);

	CpsRecalcPal = 0;
	return 0;
}

INT32 CpsRedraw(void)
{
	DoDraw(1);

	CpsRecalcPal = 0;
	return 0;
}

