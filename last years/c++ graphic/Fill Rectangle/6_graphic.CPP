#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <values.h>
#include <time.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

#define n 50
struct tpoint{int x,y;}p[n];

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
}
}
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
}
}
void FillPoly(int numPoint, struct tpoint point[n], int color)
{
 for(int i=0; i<numPoint-3;i++)
 {
  Filltriangle(point[0].x, point[0].y, point[i+1].x, point[i+1].y,point[i+2].x, point[i+2].y, 4);
 }
}
void CircleRad(int xc, int yc, int r, int color )
{
 int x;
 float rad;
 for( x=xc-r;x<=xc+r;x++)
 {
  rad=sqrt(r*r-(x-xc)*(x-xc));
  bresline(x,yc+rad,x,yc-rad, color);
 }
}
FillRec(int x1 , int y1 , int x2 , int y2,int x3, int y3 ,int x4, int y4, int color)
{
 Filltriangle(x1,y1,x2,y2,x3,y3,color);

 Filltriangle(x3,y3,x4,y4,x1,y1,color);

}
main ()
{
int gd=0, gm, numpoint ;
 initgraph(&gd, &gm ,"");

 int x1 , y1 , x2 , y2;

 FillRec(100,100,300,100,300,50,100,50,8);

 getch();
 closegraph();
}
//Arman.aghdashy@gmail.com