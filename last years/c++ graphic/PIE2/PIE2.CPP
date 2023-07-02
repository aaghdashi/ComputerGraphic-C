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
   int stangle = 0, endangle = 360, radius = 150;
   int i,r2,r3,r4;
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

   /* set fill style and draw a pie slice */
//   setfillstyle(EMPTY_FILL, getmaxcolor());
//   pieslice(midx, midy, stangle, endangle, radius);
   r4=radius/4;
   r2=radius/2;
   r3=3.0/4*radius;
   setcolor(14);
   setbkcolor(0);
   cleardevice();
   for(i=6;i<r4;i+=2)
	circle(midx,midy-i,i);
   for(i=r4;i<r2;i+=2)
	circle(midx,midy-r2+i,i);
   for(i=r2;i<r3;i+=2)
	circle(midx-r2+i,midy,i);
   for(i=r3;i<radius;i+=2)
	circle(midx+radius-i,midy,i);
   setcolor(5);
   outtextxy(midx-r4-5,midy+radius+10,"Abdoreza Rahimi");
   /* clean up */
   getch();
   closegraph();
   return 0;
}

