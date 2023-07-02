#include <dos.h>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;
   float x,y;
   float pi;
   pi=4*atan(1)/180;
   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
 }
    midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   for(x=0;x<960;x++)
	{
	if(x*pi*360.0/960==0)goto l;
	if(x*pi*360.0/960==180)goto l;
	y=240-240*(cos(x*pi*360.0/960)/sin(x*pi*360.0/960));
	putpixel(x*640.0/960,y,14);
	l:
	}
   getch();
   closegraph();
   return 0;
}

