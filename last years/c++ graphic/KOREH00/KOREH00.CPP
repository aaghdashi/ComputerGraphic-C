#include <dos.h>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(void)
{
   int radius = 60,radius4,r8,r2;
   int x,y,xc,yc,t,xf,yf,xe,ye;
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   float pi;
   int userfont;
   int i;
   pi=4*atan(1)/180;
   radius4=radius/4;
   r8=radius/8;
   r2=radius/2;
   initgraph(&gdriver, &gmode, "");
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   yc=midy;
   t=-45;
   while(!kbhit())
  {
   for(xc=radius;xc<640-radius;xc++)
	{
	setcolor(15);
	circle(xc,yc,radius);
	 for(i=5; i<radius;i+=20)
		{
		ellipse(xc,yc,0,360,radius,i);
		ellipse(xc,yc,0,360,i,radius);
		}
		delay(5);
	setcolor(0);
	circle(xc,yc,radius);
	for(i=5; i<radius;i+=20)
		{
		ellipse(xc,yc,0,360,radius,i);
		ellipse(xc,yc,0,360,i,radius);
		}
	if(kbhit())break;
	}
  }
    getch();
   closegraph();
   return 0;
}

