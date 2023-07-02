#include <stdlib.h>
#include <stdio.h>
#include <values.h>
#include <time.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
   int gd, gm;

   gd=DETECT;
   initgraph(&gd, &gm, "");
   for(int x=0; x<640;x++)
   {
	putpixel(x,200,4);
	delay(10);
	putpixel(x, 200, 0);
    }
	getch();
   return 0;
}