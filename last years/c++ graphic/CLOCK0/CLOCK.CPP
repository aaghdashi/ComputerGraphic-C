#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdio.h>
#include <alloc.h>

void clock()
{

int xc=320,yc=240;
float tetas,tetam,tetah;
int rh=80,rm=90,rs=98,xh,yh,xm,ym,xs,ys;
float teta;
int x,y,x1,y1;
setcolor(1);
for(int i=106;i<=109;i++)
circle(xc,yc,i);
//int x,y;
for(teta=0;teta<=360;teta+=6)
{
x=100*cos(teta*3.14/180);
y=100*sin(teta*3.14/180);
setcolor(10);
circle(xc+x,yc+y,1);
//circle(xc+x,yc+y,10);

 }
 x=0;
 y=0;
 for(teta=0;teta<=360;teta+=30)
{

x=100*cos(teta*3.14/180);
y=100*sin(teta*3.14/180);
setcolor(15);
circle(xc+x,yc+y,3);
//circle(xc+x,yc+y,20);

x1=115*cos(teta*3.14/180);
y1=115*sin(teta*3.14/180);

 }

while(!kbhit())
{
xh=rh*cos(tetah*3.14/180);
yh=rh*sin(tetah*3.14/180);
xm=rm*cos(tetam*3.14/180);
ym=rm*sin(tetam*3.14/180);
xs=rs*cos(tetas*3.14/180);
ys=rs*sin(tetas*3.14/180);
setcolor(4);
line(xc,yc,xc+xh,yc+yh);
setcolor(5);
line(xc,yc,xc+xm,yc+ym);
setcolor(6);
line(xc,yc,xc+xs,yc+ys);
//circle(xc+xs,yc+ys,20);
delay(1000);
setcolor(0);
line(xc,yc,xc+xh,yc+yh);
line(xc,yc,xc+xm,yc+ym);
line(xc,yc,xc+xs,yc+ys);
tetas+=6;
tetam+=0.1;
tetah+=1.0/120;
}
//end while
}
  main()
  {
   int gdriver = DETECT, gmode,x1,x2,y1,y2,color,n;
    initgraph(&gdriver, &gmode, "");

   clock();

getch();
return(0);
}