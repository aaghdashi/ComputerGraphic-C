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
   int radius = 100;
   int x,y;
   float t,pi;

   pi=4*atan(1)/180;
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
   setcolor(getmaxcolor());

   /* draw the circle */
   //circle(midx, midy, radius);
   for (t=180;t<360;t+=2)
	{
	x=radius*cos(t*pi);
	y=radius*sin(t*pi);
//	putpixel(x+midx,y+midy,14);
	setcolor(15);
	rectangle(midx-100,midy-100,midx+100,midy+100);
	line(midx,midy-100,midx,midy+100);
	setcolor(14);
	line(x+midx,y+midy-100,midx,midy-100);
	line(x+midx,y+midy-100,x+midx,y+midy+100);
	line(x+midx,y+midy+100,midx,midy+100);
	line(midx,midy-100,midx,midy+100);
	delay(25);
	setcolor(0);
	line(x+midx,y+midy-100,midx,midy-100);
	line(x+midx,y+midy-100,x+midx,y+midy+100);
	line(x+midx,y+midy+100,midx,midy+100);
	line(midx,midy-100,midx,midy+100);
	delay(25);
	if(kbhit())break;
	}
	setcolor(15);
	rectangle(midx-100,midy-100,midx+100,midy+100);
	line(midx,midy-100,midx,midy+100);

   /* clean up */
   getch();
   closegraph();
   return 0;
}

