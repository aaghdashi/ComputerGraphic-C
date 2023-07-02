#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<graphics.h>
#include<math.h>
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







void main()
{
  int gd,gm;
  gd=0;
  initgraph(&gd,&gm,"c:\\tc\\bgi\\egavga.bgi");
   //-- dayere

  int xc,yc,x,y,r=50,rad=0;
  xc=yc=100;
  x=y=200;


for(x=xc-r;x<=xc+r;x++)
   {
   rad=sqrt(r*r-(x-xc)*(x-xc));
//   bresline(xc,yc,x,yc+rad,2);
  //  bresline(xc,yc,x,yc-rad,2);

    bresline(x,yc+rad,x,yc-rad,2);

   delay(25);
   }

/*   for(y=200;y>=100;y--)
   {
    x--;
    bresline(y,200,y,y,2);
   }
	  */

   //-----mostatil ofoghi
 /*  int x1,y1,x2,y2;
  x1=y1=100;
  x2=y2=200;
  for(int x=100;x<=x2;x++)
   {
    bresline(x,y1,x,y2,2);
    delay(100);
   }
	*/
   //--mostatil amudi
    /*
    int x1,y1,x2,y2;
  x1=y1=100;
  x2=y2=200;
  //mosalas
for(int y=y1;y<=y2;y++)
   {
    bresline(x1,y,x2,y,2);
    delay(100);
   } */
  //por kardan mosalas
  /* int x1,y1,x2,y2;
  x1=y1=100;
  x2=y2=200;  */
  //mosalas
/*for(int x=x1;x<=x2;x++)
   {
    bresline(x1,y1,x,y2,2);
    delay(30);
   } */
 /*  for(x=x2;x>=x1;x--)
   {
    bresline(x,y1,x2,y2,2);
    delay(30);
     }     */


  getch();
}