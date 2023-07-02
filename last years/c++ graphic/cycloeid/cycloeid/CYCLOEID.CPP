#include <dos.h>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 60,radius4,r8,r2;
   int x,y,xc,yc,t,xf,yf,xe,ye;
   float pi;
   int userfont;
   pi=4*atan(1)/180;
   radius4=radius/4;
   r8=radius/8;
   r2=radius/2;


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
   /* install a user defined font file */
   userfont = installuserfont("trip.CHR");
   /* select the user font */
   settextstyle(userfont, HORIZ_DIR, 4);
   setcolor(3);
   /* output some text */
   outtextxy(midx-125, midy+110, "Abdoreza Rahimi");

   yc=midy;
   t=-45;
   while(!kbhit())
   {

   for(xc=radius;xc<640-radius;xc++)
	{
	x=radius*cos(t*pi);
	y=radius*sin(t*pi);
	setcolor(14);
	circle(xc,yc,radius);
	line(xc-x,yc-y,xc+x,yc+y);
	x=radius*cos((90+t)*pi);
	y=radius*sin((90+t)*pi);
	line(xc-x,yc-y,xc+x,yc+y);

	sound(xc+x);
	xf=(r2)*cos((t+45)*pi);
	yf=(r2)*sin((t+45)*pi);
	circle(xc+xf,yc+yf,radius4);
	xe=r8*cos((t+45+22.5)*pi);
	ye=r8*sin((t+45+22.5)*pi);
	circle(xc+xf+xe,yc+yf+ye,r8/2);
	xe=r8*cos((t+45-22.5)*pi);
	ye=r8*sin((t+45-22.5)*pi);
	circle(xc+xf+xe,yc+yf+ye,r8/2);

	delay(5);
	nosound();
	delay(2);
	setcolor(0);
	circle(xc,yc,radius);
	line(xc-x,yc-y,xc+x,yc+y);
	x=radius*cos(t*pi);
	y=radius*sin(t*pi);

	line(xc-x,yc-y,xc+x,yc+y);
	circle(xc+xf,yc+yf,radius4);
	circle(xc+xf+xe,yc+yf+ye,r8/2);
	xe=r8*cos((t+45+22.5)*pi);
	ye=r8*sin((t+45+22.5)*pi);
	circle(xc+xf+xe,yc+yf+ye,r8/2);


	t++;
	if(kbhit())break;
	}

   for(xc=640-radius;xc>radius;xc--)
	{
	x=radius*cos(t*pi);
	y=radius*sin(t*pi);
	setcolor(14);
	circle(xc,yc,radius);
	line(xc-x,yc-y,xc+x,yc+y);
	x=radius*cos((90+t)*pi);
	y=radius*sin((90+t)*pi);
	line(xc-x,yc-y,xc+x,yc+y);
	sound(xc+x);

	xf=(r2)*cos((t+45)*pi);
	yf=(r2)*sin((t+45)*pi);
	circle(xc+xf,yc+yf,radius4);
	xe=r8*cos((t+45+22.5)*pi);
	ye=r8*sin((t+45+22.5)*pi);
	circle(xc+xf+xe,yc+yf+ye,r8/2);
	xe=r8*cos((t+45-22.5)*pi);
	ye=r8*sin((t+45-22.5)*pi);
	circle(xc+xf+xe,yc+yf+ye,r8/2);


	delay(5);
	nosound();
	delay(2);
	setcolor(0);
	circle(xc,yc,radius);
	line(xc-x,yc-y,xc+x,yc+y);
	x=radius*cos(t*pi);
	y=radius*sin(t*pi);

	line(xc-x,yc-y,xc+x,yc+y);
	circle(xc+xf,yc+yf,radius4);
	circle(xc+xf+xe,yc+yf+ye,r8/2);
	xe=r8*cos((t+45+22.5)*pi);
	ye=r8*sin((t+45+22.5)*pi);
	circle(xc+xf+xe,yc+yf+ye,r8/2);

	t--;
	if(kbhit())break;
	}

    }/*end of while*/
   /* clean up */
   getch();
   closegraph();
   return 0;
}

