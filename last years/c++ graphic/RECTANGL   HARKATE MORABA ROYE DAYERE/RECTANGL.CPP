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
   int x,y,xc,yc,x1,y1,xt,yt,xb,yb,x2,y2,x3,x4,y3,y4;
   float t,pi,t2;
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
   xc=midx;
   yc=midy;
   //while(!kbhit)
   xt=100;
   yt=220;
   xb=200;
   yb=260;
   for(t2=0;(t2<360)||!kbhit();t2+=10)
   {



	y1=(xt-xc)*sin(t2*pi)+(yt-yc)*cos(t2*pi)+yc;
	x1=(xt-xc)*cos(t2*pi)-(yt-yc)*sin(t2*pi)+xc;
	y2=(xb-xc)*sin(t2*pi)+(yb-yc)*cos(t2*pi)+yc;
	x2=(xb-xc)*cos(t2*pi)-(yb-yc)*sin(t2*pi)+xc;
	y3=(xb-xc)*sin(t2*pi)+(yt-yc)*cos(t2*pi)+yc;
	x3=(xb-xc)*cos(t2*pi)-(yt-yc)*sin(t2*pi)+xc;
	y4=(xt-xc)*sin(t2*pi)+(yb-yc)*cos(t2*pi)+yc;
	x4=(xt-xc)*cos(t2*pi)-(yb-yc)*sin(t2*pi)+xc;

	setcolor(14);
	line(x1,y1,x3,y3);
	line(x1,y1,x4,y4);
	line(x2,y2,x3,y3);
	line(x2,y2,x4,y4);
	 delay(150);
	 setcolor(0);
	 line(x1,y1,x3,y3);
	line(x1,y1,x4,y4);
	line(x2,y2,x3,y3);
	line(x2,y2,x4,y4);

	 delay(150);
   }

   /* clean up */
   getch();
   closegraph();
   return 0;
}

