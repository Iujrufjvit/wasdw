

#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);
    HDC background = txLoadImage ("Foncik.bmp");
    HDC AmogusRight = txLoadImage ("AmogusRight.bmp");
    HDC AmogusLeft = txLoadImage ("AmogusLeft.bmp");
    HDC Amogus = AmogusRight;
  int  xAmogus = 100;

  int  yAmogus = 140;

    while(!GetAsyncKeyState (VK_ESCAPE))
    {txBegin();
        txSetColor (TX_WHITE);
        txSetFillColor(TX_BLACK);
        txClear();
        txBitBlt (txDC(), 0, 0, 800, 600, background);




txTransparentBlt (txDC(), xAmogus, yAmogus, 50, 92, Amogus, TX_BLACK);
   if(GetAsyncKeyState (VK_UP))
     {
      yAmogus -= 10;
     }
     if(GetAsyncKeyState (VK_DOWN))
     {
      yAmogus= 10;
     }
     if(GetAsyncKeyState (VK_RIGHT))
     {
      xAmogus += 10;
      Amogus = AmogusRight;
     }
     if(GetAsyncKeyState (VK_LEFT))
     {
       xAmogus-= 10;
       Amogus = AmogusLeft;
     }
     txTransparentBlt (txDC(), xAmogus, yAmogus, 50, 92, Amogus, 0, 0 (RGB(254, 114, 181));
     Amogus = Amogus + vAmogus;
     {
     if(Amogus > 800 - 50 || Amogus < 0)


     if(vAmogus > 0)
     {
      Amogus = AmogusRight;
     }
     else Amogus = AmogusLeft;
     }
      Amogsu = AmogusLeft;
     }
     }
      txEnd();




















    }
     txDeleteDC (background);
     txDeleteDC (AmogusRight);
     txDeleteDC (AmogusLeft);







    txTextCursor (false);
    return 0;
    }

