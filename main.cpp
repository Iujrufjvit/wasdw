#include "TXLib.h"

struct Amogus
{
    int x;
    int y;
    HDC image_left;
    HDC image_right;
    HDC image;
    int vx;
    int vy;
};
struct Bullet
{
    int x;
    int y;
    bool visible;
    int vx;
    int vy;

    void draw()
    {
       txSetColor (TX_WHITE);
       txSetFillColor (TX_BLACK);
       txCircle(x, y, 5);
    }
};



int main()
{
    txCreateWindow (800, 600);
    HDC background = txLoadImage ("Foncik.bmp");
     int xFon = -960;
     int yFon = 0;
     int yAmogus = 550;








    Amogus amogus = {930, 841, txLoadImage ("AmogusLeft.bmp"), txLoadImage ("AmogusRight.bmp"), amogus.image_right};

    Bullet bullet = {0, 0, false, 5, 200};








    while(!GetAsyncKeyState (VK_ESCAPE))
    {
        txSetColor (TX_WHITE);
        txSetFillColor(TX_BLACK);
        txClear();

        txBegin();

        txBitBlt (txDC(), xFon, yFon, 1920, 900, background);

        txTransparentBlt (txDC(), amogus.x, amogus.y, 58, 90, amogus.image, 0, 0, TX_WHITE);
        //рисование
       if(bullet.visible)
        {
            bullet.draw();
            bullet.y -= bullet.vy;
        }


        if(GetAsyncKeyState (VK_DOWN))
        {
            bullet.x -= bullet.vx;
            bullet.x = amogus.x+10;
            bullet.y = amogus.y+40;
            bullet .visible = true;

        }


        if(GetAsyncKeyState (VK_UP))
        {
            amogus.y -= 10;
        }

        if(GetAsyncKeyState (VK_RIGHT))
        {
            if(amogus.x > 700)
           {
                amogus.x = amogus.x;
                xFon-=10;


            }
            else
            {
                amogus.x += 10;
                amogus.image = amogus.image_right;
            }
        }

        if(GetAsyncKeyState (VK_LEFT))
        {
            if(amogus.x < 100)
            {
                amogus.x = amogus.x;
                xFon+=10;
            }
            else
            {
                amogus.x-= 10;
                amogus.image = amogus.image_left;
            }
        }

        //условие гравитации
        amogus.y +=20;
        //условия земли
        if(amogus.y > yAmogus-90)
        {
            amogus.y = yAmogus-90;
        }
        if(GetAsyncKeyState (VK_SPACE))
        {
            amogus.y -= 80;
        }


        txEnd();
        txSleep(10);
      }



    txDeleteDC (background);
    txDeleteDC (amogus.image_right);
    txDeleteDC (amogus.image_left);
    txDeleteDC (amogus.image);

    txTextCursor (false);
    return 0;
}

