//harkate pandoly
//hassan omidi
//*************************************************************
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
//******************************cirlce par8***********************
 void circlepar8(int xc,int yc,int r,int color )
{
 int teta ;
 float x,y;
 for(teta =0 ;teta <45 ;teta++)
 {
  x=r*cos(teta*3.14/180);
    y=r*sin(teta*3.14/180);
    putpixel(xc+x,yc+y,color);
    putpixel(xc+x,yc-y,color);
    putpixel(xc-x,yc+y,color);
    putpixel(xc-x,yc-y,color);
     putpixel(xc+y,yc+x,color);
    putpixel(xc-y,yc+x,color);
    putpixel(xc+y,yc-x,color);
    putpixel(xc-y,yc-x,color);

  }
 }
//***************************main************************
void main(void)
{
  int gd=DETECT,gm,i,teta,r,x,y;
  initgraph(&gd,&gm,"");
   r=100;
//   teta=60;
       while(!kbhit())
	{
	      for(teta=60;teta<120;teta++)
		{  x=r*cos(teta*3.14/180);
		   y=r*sin(teta*3.14/180);
		   bresline(320,0,320+x,100+y,15);
		   circlepar8(320+x,100+y,10,4);
		  delay(15);
		  bresline(320,0,320+x,100+y,0);
		    circlepar8(320+x,100+y,10,0);
		}//end for
	      for(teta=120;teta>60;teta--)
		{  x=r*cos(teta*3.14/180);
		   y=r*sin(teta*3.14/180);
		   bresline(320,0,320+x,100+y,15);
		   circlepar8(320+x,100+y,10,4);
		   delay(15);
		   bresline(320,0,320+x,100+y,0);
		   circlepar8(320+x,100+y,10,0);
		}//end for


       }//end while
  getch();
  }//end main
