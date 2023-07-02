#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>

void CPconnect(int,int,int,int);
void ddaline(int x1,int y1,int x2,int y2,int color);
void ex1(int,int,int,int);

void main()
{
  int gd,gm;
  gd=DETECT;
  initgraph(&gd,&gm,"");
  randomize();

  int midx, midy,x,y;
  float ts=0,tm=0,th=0;

  midx = getmaxx() / 2;
  midy = getmaxy() / 2;

//  CPconnect(midx,midy,150,15);

int x1,x2,y1,y2;

while(!kbhit())
{
for(int tet=-20;tet<20;tet++)
{
	x1=150*cos(tet*(3.14/180));
	y1=150*sin(tet*(3.14/180));
	x2=-x1;
	y2=-y1;
	ddaline(x1+midx,y1+midy,x2+midx,y2+midy,15);
	delay(50);
	ddaline(x1+midx,y1+midy,x2+midx,y2+midy,0);
}//for
for(tet=20;tet>-20;tet--)
{
	x1=150*cos(tet*(3.14/180));
	y1=150*sin(tet*(3.14/180));
	x2=-x1;
	y2=-y1;
	ddaline(x1+midx,y1+midy,x2+midx,y2+midy,15);
	delay(50);
	ddaline(x1+midx,y1+midy,x2+midx,y2+midy,0);
}//for
}//while

  //CPconnect(midx,midy,100,10);
  //CPconnect(midx,midy,50,5);


  getch();
  closegraph();
}
void ddaline(int x1,int y1,int x2,int y2,int color)
{
int dx,dy,len,i;
float xinc,yinc,x,y;

dx=x2-x1;
dy=y2-y1;

if(abs(dx)>abs(dy))
	len=abs(dx);
else
	len=abs(dy);

	x=x1;
	y=y1;
if (len!=0)
{
	xinc=dx/(len*1.0);
	yinc=dy/(len*1.0);
}

for( i=0;i<=len;i++)
{
	putpixel(x,y,color);
	x+=xinc;
	y+=yinc;
}}


void CPconnect(int xc,int yc,int R,int color)
{

float x,y,tinc,tet;
tinc=180/(3.14*R);

for(tet=0;tet<45;tet+=tinc)
{
	x=R*cos(tet*(3.14/180));
	y=R*sin(tet*(3.14/180));
	putpixel(xc+x,yc+y,color);
	putpixel(xc-x,yc+y,color);
	putpixel(xc+x,yc-y,color);
	putpixel(xc-x,yc-y,color);
	putpixel(xc+y,yc+x,color);
	putpixel(xc-y,yc+x,color);
	putpixel(xc+y,yc-x,color);
	putpixel(xc-y,yc-x,color);
}//for
}

void ex1(int xc,int yc,int R,int color)
{
float x,y,tinc,tet;
tinc=180/(3.14*R);

while(!kbhit())
{
for(tet=0;tet<360;tet+=tinc)
{
	x=R*cos(tet*(3.14/180));
	y=R*sin(tet*(3.14/180));
	CPconnect(xc+x,yc+y,20,10);
	delay(3);
	CPconnect(xc+x,yc+y,20,0);
}//for
}//while

}