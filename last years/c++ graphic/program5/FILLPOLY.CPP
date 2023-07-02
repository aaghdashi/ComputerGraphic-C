//Fillpoly
//hassan omidi
//***************************************************
#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#define n 50
struct tpoint{int x,y;}p[n];
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
//******************************filltriangle********************
void Filltriangle (int x1 , int y1 , int x2 , int y2,int x3, int y3 , int color)
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
	bresline(x,y,x3,y3,color);
	delay(5);
   }//end for
}//end filltriangle
//**************************Fill Poly****************************
void FillPoly(int numPoint, struct tpoint point[n], int color)
{
 for(int i=0; i<numPoint-2;i++)
 {
  Filltriangle(point[0].x, point[0].y, point[i+1].x, point[i+1].y,point[i+2].x, point[i+2].y, 4);
 }//end for
}//end fillpoly
//*******************************main***********************************
void main ()
{
 int gd=0, gm, numpoint ;

 cout<<"Enter N Point:";
 cin>>numpoint;
 for(int i=0; i<=numpoint-1;i++)
  {
     cout<<'\n'<<"x["<<i<<"]:";
     cin>>p[i].x;
     cout<<'\n'<<"y["<<i<<"]:";
     cin>>p[i].y;
  }
  initgraph(&gd, &gm ,"");
  FillPoly(numpoint,p,4);
  getch();
  closegraph();
}