#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#define n 50
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
	  }//end for
 }//end bresline


void mydrawpoly(int npoint,struct tpoint[n],int color)
  {
    int i;
    for(i=0;i<=npoint-2;++i)
       bresline(points[i].x,points[i].y,points[i+1].x,points[i+1].y,color);
  }

  filltriangle(int x1,int y1,int x2,int y2,int x3,int y3,int color)
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
	  bresline(x,y,x3,y3,color);

   }

   }
void main(void)
  {
    int gd = DETECT, gm,i,numpoint,color;
    cout<<"\nEnter Number Of Point:";
    cin>>numpoint;
    cout<<"\nEnter Color Number:";
    cin>>color;
      for(i=0;i<=numpoint-1;++i)
       {
	  cout<<"\nEnter point["<<i<<"].x :";
	  cin>>points[i].x;
	  cout<<"\nEnter point["<<i<<"].y :";
	  cin>>points[i].y ;
	}
      initgraph(&gd, &gm, "");

      filltriangle(points[0].x,points[0].y,points[1].x,points[1].y,points[2].x,points[2].y,color);
      getch();
    }