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
   int i,j,r2,r3,r4;
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

   for(i=1;i<200;i+=10)
	{

	ellipse(midx,midy,stangle, endangle,100+i,100-i);
	}
   setcolor(5);
   outtextxy(midx-r4-5,midy+radius+10,"Abdoreza Rahimi");
   /* clean up */
   getch();
   closegraph();
   return 0;
}

