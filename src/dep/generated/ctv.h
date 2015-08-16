static INT32 CtvDo208____()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;
   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd)
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo208__f_()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
   }

   return nBlank == 0;
}

static INT32 CtvDo208_c__()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo208_cf_()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo216____()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo216__f_()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo216_c__()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo216_cf_()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo216r___()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;


   INT16 *Rows = CpstRowShift;


   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd


         ,Rows++






       )
   {
      pPix = pCtvLine;
      pPix += Rows[0] * nBurnBpp;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo216r_f_()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;


   INT16 *Rows = CpstRowShift;


   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd


         ,Rows++






       )
   {
      pPix = pCtvLine;
      pPix += Rows[0] * nBurnBpp;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
   }

   return nBlank == 0;
}





static INT32 CtvDo216rc__()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;


   INT16 *Rows = CpstRowShift;


   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd


         ,Rows++






       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      pPix += Rows[0] * nBurnBpp;

      rx += Rows[0] * 0x7fff;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo216rcf_()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;


   INT16 *Rows = CpstRowShift;


   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd


         ,Rows++






       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      pPix += Rows[0] * nBurnBpp;

      rx += Rows[0] * 0x7fff;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo232____()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo232__f_()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
   }

   return nBlank == 0;
}





static INT32 CtvDo232_c__()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo232_cf_()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo208___m()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {





      UINT16 *pPixZ;







      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo208__fm()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {





      UINT16 *pPixZ;







      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4;
   }

   return nBlank == 0;
}





static INT32 CtvDo208_c_m()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {

      UINT32 rx = nCtvRollX;



      UINT16 *pPixZ;



      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo208_cfm()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {

      UINT32 rx = nCtvRollX;



      UINT16 *pPixZ;



      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo216___m()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {





      UINT16 *pPixZ;







      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo216__fm()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {





      UINT16 *pPixZ;







      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4;
   }

   return nBlank == 0;
}





static INT32 CtvDo216_c_m()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {

      UINT32 rx = nCtvRollX;



      UINT16 *pPixZ;



      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo216_cfm()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {

      UINT32 rx = nCtvRollX;



      UINT16 *pPixZ;



      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo232___m()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {





      UINT16 *pPixZ;







      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo232__fm()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {





      UINT16 *pPixZ;







      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4;
   }

   return nBlank == 0;
}





static INT32 CtvDo232_c_m()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {

      UINT32 rx = nCtvRollX;



      UINT16 *pPixZ;



      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0xf0000000) { c = ctp[b >> 28]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo232_cfm()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd






         ,pZVal += 384


       )
   {

      UINT32 rx = nCtvRollX;



      UINT16 *pPixZ;



      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;

      pPixZ = pZVal;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { if (b & 0x0000000f) { c = ctp[b & 15]; { if(*pPixZ < ZValue) { *((UINT16 *)pPix)=(UINT16)c; *pPixZ=ZValue; } } } } { pPix+=2; pPixZ++; }; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo208___b()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo208__fb()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
   }

   return nBlank == 0;
}





static INT32 CtvDo208_c_b()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo208_cfb()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (8); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo216___b()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo216__fb()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
   }

   return nBlank == 0;
}





static INT32 CtvDo216_c_b()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo216_cfb()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (16); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+4)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+0)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo232___b()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4;
   }

   return nBlank == 0;
}


static INT32 CtvDo232__fb()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {
      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4;
   }

   return nBlank == 0;
}





static INT32 CtvDo232_c_b()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b >> 28); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b <<= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}


static INT32 CtvDo232_cfb()
{
   INT32 y;
   UINT32 *ctp;
   UINT32 nBlank = 0;

   UINT32 b;
   UINT32 c;
   UINT8 *pPix;





   ctp = CpstPal;

   for (y = 0; y < (32); y++, pCtvLine += nBurnPitch, pCtvTile += nCtvTileAdd
       )
   {

      UINT32 rx = nCtvRollX;







      if (nCtvRollY & 0x20004000) { nCtvRollY += 0x7fff; continue; } else nCtvRollY += 0x7fff;



      pPix = pCtvLine;
      b=*((UINT32 *)(pCtvTile+12)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 8)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 4)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
      b=*((UINT32 *)(pCtvTile+ 0)); nBlank |= b; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff; if ((rx & 0x20004000) == 0) { c = (b & 15); if (c && CpstPmsk & (1 << (c ^ 15))) { c = ctp[c]; { *((UINT16 *)pPix)=(UINT16)c; } } } pPix+=2; b >>= 4; rx += 0x7fff;
   }

   return nBlank == 0;
}
static INT32 CtvDo_______() { return 0; }




static CtvDoFn CtvDo2[0x20]={
   CtvDo208____,CtvDo208__f_,CtvDo208_c__,CtvDo208_cf_,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo216____,CtvDo216__f_,CtvDo216_c__,CtvDo216_cf_,
   CtvDo216r___,CtvDo216r_f_,CtvDo216rc__,CtvDo216rcf_,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo232____,CtvDo232__f_,CtvDo232_c__,CtvDo232_cf_,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
};

static CtvDoFn CtvDo2m[0x20]={
   CtvDo208___m,CtvDo208__fm,CtvDo208_c_m,CtvDo208_cfm,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo216___m,CtvDo216__fm,CtvDo216_c_m,CtvDo216_cfm,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo232___m,CtvDo232__fm,CtvDo232_c_m,CtvDo232_cfm,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
};

static CtvDoFn CtvDo2b[0x20]={
   CtvDo208___b,CtvDo208__fb,CtvDo208_c_b,CtvDo208_cfb,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo216___b,CtvDo216__fb,CtvDo216_c_b,CtvDo216_cfb,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
   CtvDo232___b,CtvDo232__fb,CtvDo232_c_b,CtvDo232_cfb,
   CtvDo_______,CtvDo_______,CtvDo_______,CtvDo_______,
};


CtvDoFn CtvDoX[0x20];
CtvDoFn CtvDoXM[0x20];
CtvDoFn CtvDoXB[0x20];
