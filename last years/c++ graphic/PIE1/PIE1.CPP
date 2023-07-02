#include <math.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int stangle = 90, endangle = 360, radius = 150,i;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(14);
   /* set fill style and draw a pie slice */
   setfillstyle(EMPTY_FILL, getmaxcolor());

   for(i=0 ;i<radius-50;i+=6)
	pieslice(midx-i, midy+i, stangle, endangle, radius-i);
   outtextxy(midx+10,midy-10,"Abdoreza Rahimi");

   /* clean up */
   getch();
   closegraph();
   return 0;
}

