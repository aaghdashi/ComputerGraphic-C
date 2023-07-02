#include <conio.h>
#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <dos.h>
#define n 20
struct tpoint{
int x,y;}points[n];

void bresline(int x1,int y1,int x2,int y2,int color)
 {
    int xinc=0,yinc=0,lenx=0,leny=0,dx,dy,i,len,x,y;
    dx=x2-x1;
    if (dx>0)
	xinc=1;
    else if(dx<0)
	xinc=-1;
	dy=y2-y1;
    if (dy>0)
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
	 lenx+=dx;
	 leny+=dy;
	 if(lenx>=len)
	  { lenx-=len;
	   x+=xinc;
	   }
	 if(leny>=len)
	  { leny-=len;
	   y+=yinc;
	   }
	   putpixel(x,y,color);
	  }
 }

void mydrawpoly(int npoint,struct tpoint[n],int color)
  {
    int i;
    for(i=0;i<=npoint-2;++i)
       bresline(points[i].x,points[i].y,points[i+1].x,points[i+1].y,color);
  }
void main(void)
  {
    int gd = DETECT, gm,i,numpoint,color;
    cout<<"\nEnter Noghteh:";
    cin>>numpoint;
    cout<<"\nEnter Shomareh Rang:";
    cin>>color;
      for(i=0;i<=numpoint-1;++i)
       {
	  cout<<"\nEnter Noghteh["<<i<<"].x :";
	  cin>>points[i].x;
	  cout<<"\nEnter Noghteh["<<i<<"].y :";
	  cin>>points[i].y ;
	}
      initgraph(&gd, &gm, "");
      mydrawpoly(numpoint,points,color);
      getch();
    }