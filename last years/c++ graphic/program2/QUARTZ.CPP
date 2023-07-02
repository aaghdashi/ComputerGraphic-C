//quartz
//hassan omidi
//**********************************************************
#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
//**********************************bresline****************************
void bresline (int x1 , int y1 , int x2 , int y2 ,int  color)
 {
   int xinc=0 , yinc =0 , lenx=0 , leny=0, dx , dy , i , len , x , y;
   dx= x2-x1;
   if (dx>0 )
      xinc=1;
   else
   if (dx<0)
     xinc = -1;
     dy = y2-y1;
   if(dy>0)
	yinc =1;
   else
   if (dy<0)
	yinc=-1;
   dx=abs(dx);
   dy = abs(dy);
   if(dx>dy)
	len =dx;
   else
	len =dy;
   x=x1;
   y=y1;
   for(i=0 ; i<=len ; i++)
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
	      leny= leny-len;
	      y=y+yinc;
	  }
	putpixel(x,y,color);
    }//end for
 }//end bresline
//******************************clock**************
void clock()
{
  int xc=320,yc=240;
  float tetas,tetam,tetah;
  int rh=20,rm=25,rs=30,xh,yh,xm,ym,xs,ys;
  float teta;
  int x,y,x1,y1;
  setcolor(15);
  for(int i=35;i<=38;i++)
	circle(xc,yc,i);
  for(teta=0;teta<=360;teta+=30)
    {
     x=32*cos(teta*3.14/180);
     y=32*sin(teta*3.14/180);
     setcolor(14);
     circle(xc+x,yc+y,1);
    }
 }//end clock
//***************************main************************

void main(void)
{
  int gd=DETECT,gm,i,teta,r,x,y;
  initgraph(&gd,&gm,"");
  int  rh,rm,rs,xh,yh,xm,ym,xs,ys;
  float tetah=-30,tetam=0,tetas=0;
  clock();
  rh=20;
  rm=25;
  rs=30;
  while(!kbhit())
  {
	xh=rh*cos(tetah*3.14/180);
	yh=rh*sin(tetah*3.14/180);
	xm=rm*cos(tetam*3.14/180);
	ym=rm*sin(tetam*3.14/180);
	xs=rs*cos(tetas*3.14/180);
	ys=rs*sin(tetas*3.14/180);
	bresline(320,240,320+xh,240+yh,2);
	bresline(320,240,320+xm,240+ym,3);
	bresline(320,240,320+xs,240+ys,4);
	delay(1000);
	bresline(320,240,320+xh,240+yh,0);
	bresline(320,240,320+xm,240+ym,0);
	bresline(320,240,320+xs,240+ys,0);
	tetas+=6;
	tetam+=0.1;
	tetah+=1.0/120;
	if(tetas>360)
		tetas=0;
	if(tetam>360)
		tetam=0;
	if(tetah>360)
		tetah=0;

     }//end while
    closegraph();
}//end main
