#include<dos.h>
#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
void ddline(int x1,int y1,int x2,int y2,int c)
{
int dx,dy,len,i;
float xinc,yinc,x,y;
dx=x2-x1;
dy=y2-y1;
if (abs(dx)>abs(dy))
len=abs(dx);
else
len=abs(dy);
if(len!=0)
{
xinc=(dx+1.0)/len;
yinc=(dy+1.0)/len;
}
x=x1;
y=y1;
for(i=0;i<=len;i++)
{
putpixel(x,y,c);
x=x+xinc;
y=y+yinc;
}

}
int circle_par1(int xc,int yc,int r)
{
int teta;
float x,y;
for(teta=0;teta<=360;teta++)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
putpixel(xc+x,yc+y,7);

}
return(0);
}

int main(void)
{
int i,gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");

int a=0,b=0,a1=0,b1=0;
int x,y,x1,y1;
x=100;
y=100;
 x1=0;
 y1=0;
 while(!kbhit())
 {
 if(x>640)
 a=1;

 if(y>480)
 b=1;

 if(x<0)
 a=0;

 if(y<0)
 b=0;

 if(a==1)
	{
x--;
}//if

if(a==0)
{
x++;
}//if

if(b==0)
{
y++;
 }//if

 if(b==1)
 {
 y--;
 }//if

 if(x1>640)
 a1=1;

 if(y1>480)
 b1=1;

 if(x1<0)
 a1=0;

 if(y1<0)
 b1=0;






    if(a1==1)
{
x1--;
}//if

if(a1==0)
{
x1++;
}//if

if(b1==0)
{
y1++;
 }//if

 if(b1==1)
 {
 y1--;
 }//if
 setcolor(15);
   circle(x1,y1,20);
   putpixel(x1,y1,4);
   circle(x,y,20);
   putpixel(x,y,4);
   delay(10);
    setcolor(0);
   circle(x1,y1,20);

   circle(x,y,20);


   putpixel(x1,y1,0);
   putpixel(x,y,0);




 }//while

getch();
closegraph();

}

