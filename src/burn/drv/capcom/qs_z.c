#include "cps.h"
// QSound - Z80

static INT32 nQsndZBank = 0;

// Map in the memory for the current 0x8000-0xc000 music bank
static INT32 QsndZBankMap()
{
   UINT8* Bank;
   UINT32 nOff = (nQsndZBank << 14) + 0x8000;

   // End of bank is out of range
   if (nOff + 0x4000 > nCpsZRomLen)
      nOff = 0;
   Bank = CpsZRom + nOff;

   // Read and fetch the bank
   ZetMapArea(0x8000, 0xbfff, 0, Bank);
   ZetMapArea2(0x8000, 0xbfff, 2, Bank, CpsZRom + nOff);

   return 0;
}

static UINT8 QscCmd[2] = {0, 0};

void __fastcall QsndZWrite(UINT16 a, UINT8 d)
{
   switch (a)
   {
      case 0xd000:
         QscCmd[0] = d;
         break;
      case 0xd001:
         QscCmd[1] = d;
         break;
      case 0xd002:
         QscWrite(d, (QscCmd[0] << 8) | QscCmd[1]);
#if 0
         bprintf(PRINT_NORMAL, _T("QSound command %02X %04X sent.\n"), d, (QscCmd[0] << 8) | QscCmd[1]);
#endif
         break;
      case 0xd003:
         {
            INT32 nNewBank = d & 0x0f;
            if (nQsndZBank != nNewBank)
            {
               nQsndZBank = nNewBank;
               QsndZBankMap();
            }
         }
         break;
   }
}

UINT8 __fastcall QsndZRead(UINT16 a)
{
   if (a == 0xd007) // return ready all the time
      return 0x80;
   return 0;
}

INT32 QsndZInit(void)
{
   if (nCpsZRomLen < 0x8000) // Not enough Z80 Data
      return 1;
   if (CpsZRom == NULL)
      return 1;

   ZetInit(0);
   ZetOpen(0);

   ZetSetReadHandler(QsndZRead);
   ZetSetWriteHandler(QsndZWrite);

   // Read and fetch first 0x8000 of Rom
   ZetMapArea(0x0000, 0x7FFF, 0 ,CpsZRom);
   ZetMapArea(0x0000, 0x7FFF, 2, CpsZRom);

   // Map first Bank of Rom
   nQsndZBank = 0;
   QsndZBankMap();

   ZetMapArea(0xC000, 0xCFFF, 0, CpsZRamC0);
   ZetMapArea(0xC000, 0xCFFF, 1, CpsZRamC0);
   ZetMapArea(0xC000, 0xCFFF, 2, CpsZRamC0);

   ZetMemCallback(0xD000, 0xEFFF, 0);
   ZetMemCallback(0xD000, 0xEFFF, 1);

   ZetMapArea(0xD000, 0xEFFF, 2, CpsZRom);

   ZetMapArea(0xF000, 0xFFFF, 0, CpsZRamF0);
   ZetMapArea(0xF000, 0xFFFF, 1, CpsZRamF0);
   ZetMapArea(0xF000, 0xFFFF, 2, CpsZRamF0);

   ZetClose();

   return 0;
}

INT32 QsndZExit(void)
{
	ZetExit();
	return 0;
}

// Scan the current QSound z80 state
INT32 QsndZScan(INT32 nAction)
{
   ZetScan(nAction);					// Scan Z80
   SCAN_VAR(nQsndZBank);

   // If write, bank could have changed
   if (nAction & ACB_WRITE)
   {			
      ZetOpen(0);
      QsndZBankMap();
      ZetClose();
   }

   return 0;
}
