#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>

struct time t1,t2;


//codded by Arman.aghdashy@gmail.com

void bresline(int x1,int y1,int x2,int y2,int color)
{
int xinc=0,yinc=0,lenx=0,leny=0;
int dx,dy,i,x,y,len;
dx=x2-x1;
  if(dx>0)
  {
   xinc=1;
  }else if(dx<0)
  {
   xinc=-1;
  }
  dy=y2-y1;
  if(dy>0)
  yinc=1;
  else if(dy<0)
  yinc=-1;
  dx=abs(dx);
  dy=abs(dy);
  if(dx>dy)
  len=dx;
  else
  len=dy;
  x=x1;
  y=y1;
  for(i=0;i<=len;i++)
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
       }

void circlerad(int xc,int yc,int r,int color)
{
 int x;
 float rad;
 for(x=xc-r;x<=xc+r;x++)
 {
  rad=sqrt(r*r-(x-xc)*(x-xc));
  putpixel(x,yc+rad,color);
  putpixel(x,yc-rad,color);
 }
}
void _circlerad(int xc,int yc,int r,int color)
{
 float x;
 float rad;
     float incteta=((2*r)+1)/(3.14*r);
 for(x=xc-r;x<=xc+r;x=x+incteta)
 {
  rad=sqrt(r*r-(x-xc)*(x-xc));
  putpixel(x,yc+rad,color);
  putpixel(x,yc-rad,color);
 }
}




     void circlepar1(int xc,int yc,int r,int color)
    {
     float teta=0;
     float x,y;

	  for(teta=0;teta<360;teta++)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     putpixel(xc+x,yc+y,color);

    }
    }
      void _circlepar1(int xc,int yc,int r,int color)
    {
     float teta=0;
     float x,y;
     float incteta=180/(3.14*r);
	  for(teta=0;teta<360;teta=teta+incteta)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     putpixel(xc+x,yc+y,color);

    }
    }


     void circlepar4(int xc,int yc,int r,int color)
    {
     int teta=0;
     float x,y;

     for(teta=0;teta<90;teta++)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     putpixel(xc+x,yc+y,color);
     putpixel(xc+x,yc-y,color);
     putpixel(xc-x,yc+y,color);
     putpixel(xc-x,yc-y,color);
    }
    }
     void _circlepar4(int xc,int yc,int r,int color)
    {
     float teta=0;
     float x,y;
      float incteta=180/(3.14*r);
     for(teta=0;teta<90;teta=teta+incteta)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     putpixel(xc+x,yc+y,color);
     putpixel(xc+x,yc-y,color);
     putpixel(xc-x,yc+y,color);
     putpixel(xc-x,yc-y,color);
    }
    }
    //-----------
   void	circlepar8(int xc,int yc,int r,int color)
    {
     int teta=0;
     float x,y;

     for(teta=0;teta<45;teta++)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     putpixel(xc+x,yc+y,color);
     putpixel(xc-x,yc+y,color);
     putpixel(xc+x,yc-y,color);
     putpixel(xc-x,yc-y,color);
     putpixel(xc+y,yc+x,color);
     putpixel(xc-y,yc+x,color);
     putpixel(xc+y,yc-x,color);
     putpixel(xc-y,yc-x,color);
    }
    }
      void     _circlepar8(int xc,int yc,int r,int color)
    {
     float teta=0;
     float x,y;
       float incteta=180/(3.14*r);
     for(teta=0;teta<45;teta=teta+incteta)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     putpixel(xc+x,yc+y,color);
     putpixel(xc-x,yc+y,color);
     putpixel(xc+x,yc-y,color);
     putpixel(xc-x,yc-y,color);
     putpixel(xc+y,yc+x,color);
     putpixel(xc-y,yc+x,color);
     putpixel(xc+y,yc-x,color);
     putpixel(xc-y,yc-x,color);
    }
    }
 //------------------------------
 void ana_c(int xc,int yc,int r,int color)
 {
 while(!kbhit())
 {
 circle(xc,yc,r);
 int rh=25,rm=30,rs=40;
  float xh,yh,xm,ym,xs,ys,tetas,tetam,tetah;
  xh=rh*cos(tetah*3.14/180);
  yh=rh*sin(tetah*3.14/180);
  xm=rm*cos(tetam*3.14/180);
  ym=rm*sin(tetam*3.14/180);
  xs=rs*cos(tetas*3.14/180);
  ys=rs*sin(tetas*3.14/180);
  bresline(xc,yc,xc+xh,yc+yh,color);
  bresline(xc,yc,xc+xm,yc+ym,color);
  bresline(xc,yc,xc+xs,yc+ys,color);
  delay(10);
  bresline(xc,yc,xc+xh,yc+yh,0);
  bresline(xc,yc,xc+xm,yc+ym,0);
  bresline(xc,yc,xc+xs,yc+ys,0);
  tetas+=6;
  tetam+=0.1;
  tetah+=1.0/120;
  if(tetas>360)
   tetas=0;
  }
 }
 //----------por kardan ghotri
 void fill_c_a(int xc,int yc,int r,int color)
 {
 int teta,x,y;
  for(teta=0;teta<180;teta+=10)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     bresline(xc+x,yc+y,xc-x,yc-y,color);
     delay(50);

    }
 }
 void fill_c_a2(int xc,int yc,int r,int color)
 {
 int teta,x,y;
 while(!kbhit())
 {
  for(teta=30;teta>-30;teta--)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     bresline(xc+x,yc+y,xc-x,yc-y,color);
     delay(50);
      bresline(xc+x,yc+y,xc-x,yc-y,0);
	 }
	 for(teta=-30;teta<30;teta++)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     bresline(xc+x,yc+y,xc-x,yc-y,color);
     delay(50);
      bresline(xc+x,yc+y,xc-x,yc-y,0);
	 }
      }
 }



 void ellipserad(int xc,int yc,int rx,int ry,int color)
 {
  int x;float rad;

  for(x=xc-rx;x<=x+rx;x++)
   {
    rad=(ry/(rx*1.0))*sqrt(rx*rx-(x-xc)*(x-xc));
    putpixel(x,yc+rad,color);
    putpixel(x,yc-rad,color);
   }
 }


 //----------------

  void aval(int xc,int yc,int r,int color)
 {
 int teta,teta2,x,y;



  for(teta=0,teta2=90;teta<360,teta2<360;teta++,teta2++)
    {
     x=r*cos(teta*3.14/180);
     y=r*sin(teta*3.14/180);
     bresline(xc+x,yc+y,xc-x,yc-y,color);
     delay(2);
      bresline(xc+x,yc+y,xc-x,yc-y,0);

       x=r*cos(teta2*3.14/180);
     y=r*sin(teta2*3.14/180);
     bresline(xc+x,yc+y,xc-x,yc-y,color);
     delay(2);
      bresline(xc+x,yc+y,xc-x,yc-y,0);
	 }
 }



void main()
{
long int f=1,e=1;
  int gd,gm;
  gd=0;
  int i=0;

  initgraph(&gd,&gm,"c:\\tc\\bgi\\egavga.bgi");
  //--------------------

	for(i=100;i<500;i++)
	{
	_circlerad(i,100,52,3);
	delay(1);
	aval(i,100,50,2);
	delay(1);
	       _circlerad(i,100,52,0);


	}
getch();
}