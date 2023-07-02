#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

void ddaline(int x1,int y1,int x2,int y2,int color)
{
int dx,dy,len,i;
float xinc,yinc,x,y;
dx=x2-x1;
dy=y2-y1;
if (abs(dx)>abs(dy))
  len=abs(dx);
  else
   len=abs(dy);
      if (len!=0)
	{
	xinc=((dx*1.0)/(len));
	yinc=((dy*1.0)/(len));
	 }
	 x=x1;
	 y=y1;
	  for(i=0;i<=len;i++)
	  {
	  putpixel(x,y,color);
	  x=x+xinc;
	  y=y+yinc;
	  }

 }

void bresline(int x1,int y1, int x2,int y2,int color)
{

int xinc=0,yinc=0,lenx=0,leny=0,i,dx,dy,x,y,len;
dx=x2-x1;
if(dx>0)
xinc=1;
else
  xinc=-1;
  dy=y2-y1;

  if(dy>0)
yinc=1;
else
  yinc=-1;
  dx=abs(dx);
  dy=abs(dy);
  if (dx>dy)
    len=dx;
    else
    len=dy;
     x=x1;
     y=y1;
     for(i=0;i<=len;i++)
     {
     len=lenx+dx;
     len=leny+dy;
     if(lenx>=len)
     {
      lenx=lenx-len;
      x=x+xinc;
      }
      if (leny>=len)
      {
      leny=leny-len;
      y=y+yinc;
      }
      putpixel(x,y,color);
      }
   }
void    main(void)
      {

	 int gn=0,gd,j,x0,y0,xc,yc;

 initgraph(&gn,&gd," ");

 setcolor(15);
 x0=1;
 y0=1;
 xc=640;
 yc=1;
 for (j=1;j<=200;j++)
 {
ddaline(x0+(j*4)  ,y0+(j*3) ,xc-(j*4) ,yc+(j*3),15);
 }
 getch();
 }