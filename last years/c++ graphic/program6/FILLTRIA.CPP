//Fill triangle
//hassan omidi
//****************************************************************
#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <graphics.h>
#include <conio.h>
#include<dos.h>
//********************************bresline********************************
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
//**********************************filltriangle****************************
void Filltriangle (int x1,int y1,int x2,int y2,int x3,int y3,int color)
 {
   int xinc=0,yinc=0,lenx=0,leny=0,dx,dy,i,len,x,y;
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
	    } //end if
	  if(leny>=len)
	    {
		leny= leny-len;
		y=y+yinc;
	    }//end if
	  bresline(x,y,x3,y3,color);
	       delay(20);
     }//end for
 }//end filltriangle
//******************************Main***************************
main ()
{
  int gd=0, gm;
  int x1 , y1 , x2 , y2,x3,y3,color;
  cout<<"\nEnter X1:";
  cin>>x1;
  cout<<"\nEnter Y1:";
  cin>>y1;
  cout<<"\nEnter X2:";
  cin>>x2;
  cout<<"\nEnter Y2:";
  cin>>y2;
  cout<<"\nEnter X3:";
  cin>>x3;
  cout<<"\nEnter Y3:";
  cin>>y3;
  cout<<"\nEnter color:";
  cin>>color;

  initgraph(&gd, &gm ,"");
  Filltriangle(x1,y1,x2,y2,x3,y3,color);
  getch();
  closegraph();
 }