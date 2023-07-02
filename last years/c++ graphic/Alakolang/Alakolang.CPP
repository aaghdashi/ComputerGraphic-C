#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <complex.h>
#include <string.h>
#include <stdio.h>
#include <alloc.h>

void circlepar4( int xc, int yc, int r , int color)
{
     int teta;
     float x,y;
     line(xc,yc,xc-100,yc+100);
     line(xc,yc,xc+100,yc+100);
     line(xc-100,yc+100,xc+100,yc+100);
	 while(!kbhit())
     {

for ( teta=-30;teta<30; teta++)
{
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  setcolor(5);
  line(xc,yc,xc+x,yc+y);
  delay(25);
  setcolor(0);
  line(xc,yc,xc+x,yc+y);
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  setcolor(5);
  line(xc,yc,xc-x,yc-y);

  delay(25);
  setcolor(0);
  line(xc,yc,xc-x,yc-y);

  }
  if (teta>=30){
for ( teta=30;teta>-30; teta--)
{
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  setcolor(5);
  line(xc,yc,xc+x,yc+y);

  delay(25);
setcolor(0);

  line(xc,yc,xc+x,yc+y);
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  setcolor(5);
  line(xc,yc,xc-x,yc-y);
  delay(25);
  setcolor(0);
line(xc,yc,xc-x,yc-y);
      }
     }
    }
  }

  main()
  {
   int gdriver = DETECT, gmode,x1,x2,y1,y2,color,n;
    initgraph(&gdriver, &gmode, "");

   circlepar4(400 , 300, 200, 5);

getch();
return(0);
}
