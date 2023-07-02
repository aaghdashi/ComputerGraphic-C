#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
#include <graphics.h>
void clock_(int x,int y,int r,int c,int b);
void setgraph (void);
void main()
{
	clrscr();
	setgraph();
	while(!kbhit())
	{
		clock_(getmaxx()/2,getmaxy()/2,150,8,12);

	}
}
void setgraph (void)
{
   int gd=DETECT, gm;
   initgraph (&gd,&gm,"././bgi");
}
void clock_(int x,int y,int r,int c,int b)
{
   struct  dostime_t t;
   double p=3.1415;
   setcolor(b);
   setlinestyle(0,0,5);
   circle(x,y,r);
   settextstyle(2,0,9);
   outtextxy(x-5,y-r+1,"XII");
   outtextxy(x+r-10,y-5,"III");
   outtextxy(x-3,y+r-13,"VI");
   outtextxy(x-r+5,y-5,"IX");
   _dos_gettime(&t);
   setcolor(c);
   setlinestyle(1,0,7);
   setfillstyle(1,c);
   pieslice(x,y,0,360,r-11);
   setcolor(b-13);
   line(x,y,x+(r-25)*(cos((t.hour*6-90)*p/180)),y+(r-25)*sin((t.hour*6-90)*p/180));
   line(x,y,x+(r-16)*(cos((t.minute*6-90)*p/180)),y+(r-16)*sin((t.minute*6-90)*p/180));
   setcolor(b);
   setlinestyle(0,0,1);
   line(x-(10)*(cos((t.second*6-90)*p/180)),y-(10)*sin((t.second*6-90)*p/180),x+(r-12)*(cos((t.second*6-90)*p/180)),y+(r-12)*sin((t.second*6-90)*p/180));

   char s[10];
   setcolor(13);
   circle(x,y,2);
}