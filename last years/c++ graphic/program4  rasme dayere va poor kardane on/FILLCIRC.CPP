//Fill Circle
//hassan omidi
//***************************************************
#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include<math.h>
//*********************************bresline**********************
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
//*******************************Circlerad************************
void CircleRad(int xc, int yc, int r, int color )
{
 int x;
 float rad;
 for( x=xc-r;x<=xc+r;x++)
 {
  rad=sqrt(r*r-(x-xc)*(x-xc));
  bresline(x,yc+rad,x,yc-rad, color);
  delay(20);
 }
}

//*******************************main***********************************
void main ()
{
 int gd=0, gm,xc,yc,r,color  ;
    cout<<"\nEnter XC:";
  cin>>xc;
  cout<<"\nEnter YC:";
  cin>>yc;
  cout<<"\nEnter R:";
  cin>>r;
  cout<<"\nEnter color:";
  cin>>color;
  initgraph(&gd, &gm ,"");
  CircleRad(xc,yc,r,color);
 getch();
 closegraph();
 }