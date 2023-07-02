#include <iostream.h>
#include <values.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bresline(int x1,int y1,int x2,int y2,int color)
{
int xinc=0,yinc=0,lenx=0,leny=0,dx,dy,x,y,len;
dx=x2-x1;
if(dx>1)
xinc=0;
else
if(dx<1)
xinc=-1;
dy=y2-y1;
if(dy>1)
yinc=1;
else
if(dy<1)
yinc=-1;
dx=abs(dx);
dy=abs(dy);
if(dx>dy)
len=dx;
else
len=dy;
x=x1;
y=y1;
for(int i=0;i<=len;i++)
{
lenx=lenx+dx;
leny=leny+dy;
if(lenx>=len)
{
lenx=lenx-len;
x=x+xinc;
}
if(leny>=len)
{
leny=leny-len;
y=y+yinc;
}
putpixel(x,y,color);
}
}//end bresline

void circlepar4(int xc, int yc,int r,int color)
{
int teta;
float x,y;
for(teta=0;teta<=90;teta++)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
putpixel(xc+x,yc+y,color);
putpixel(xc-x,yc+y,color);
putpixel(xc+x,yc-y,color);
putpixel(xc-x,yc-y,color);
}
}//end circlepar4

main()
{
clrscr();
int gd=0,gm,r,x,y,teta,incteta;
initgraph(&gd,&gm," ");
r=60;
int xc=320;
int yc=240;
circlepar4(320,240,r,4);
for(teta=0;teta<90;teta++)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
bresline(xc+x,yc-y,xc+x,yc+y,7);
bresline(xc-x,yc-y,xc+x,yc+y,8);
delay(30);
}
circlepar4(90,90,50,4);
for(teta=270;teta<=480;teta++)
{
x=50*cos(teta*3.14/180);
y=50*sin(teta*3.14/180);
bresline(90+x,90+y,90-x,90+y,6);
delay(20);
}


circlepar4(550,400,50,4);
for(teta=0;teta<=90;teta++)
{
x=50*cos(teta*3.14/180);
y=50*sin(teta*3.14/180);
bresline(550+x,400+y,550-x,400-y,12);
delay(20);
}


r=50;
for(int i=1;i<=r;i++)
{
circlepar4(550,90,50,4);
circlepar4(550,90,i,3);
delay(20);
}
circlepar4(90,400,50,4);
for(teta=0;teta<=360;teta++)
{
x=50*cos(teta*3.14/180);
y=50*sin(teta*3.14/180);
bresline(90,400,90+x,400+y,2);
bresline(90+x,400+y,90,400,2);
delay(20);
}
getch();
closegraph();
}