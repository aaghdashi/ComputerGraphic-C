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
   int midx, midy,x,y;
   int stangle = 0, endangle = 360, radius = 150;
   int i,j,r2,r3,r4,r8;
   float n,m,r,s,t,u,l,a,pi;
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

   /* set fill style and draw a pie slice */
//   setfillstyle(EMPTY_FILL, getmaxcolor());
//   pieslice(midx, midy, stangle, endangle, radius);
   r4=radius/4;
   r2=radius/2;
   r3=3.0/4*radius;
   r8=radius/8;
   setcolor(14);
   setbkcolor(0);
   cleardevice();
   r=102;
   s=48;
   t=30;
   u=3.6;
   n=-5;
   m=19;
   l=1000;
   for(a=0;a<360;a+=.0001)
	{
	x=r*cos(a*pi)+s*cos(n*a*pi)+t*cos(m*a*pi)+u*cos(l*a*pi);
	y=r*sin(a*pi)+s*sin(n*a*pi)+t*sin(m*a*pi)+u*sin(l*a*pi);
	putpixel(midx+x,midy+y,14);

	}

   /*setcolor(5);
   outtextxy(midx-r4-5,midy+radius+10,"Abdoreza Rahimi");
   /* clean up */
   getch();
   closegraph();
   return 0;
}

