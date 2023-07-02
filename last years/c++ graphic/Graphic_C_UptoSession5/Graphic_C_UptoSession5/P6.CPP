#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <values.h>
#include <time.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
void ddline(int x1, int y1, int x2, int y2, int color)
{ int dx, dy, len, i;
  float xinc, yinc, x,y;

  dx=x2-x1;dy=y2-y1;
  if(abs(dx)>abs(dy))
	len=abs(dx);
  else
  len=abs(dy);
  if(len!=0)
  {
   xinc=(dx*1.0)/len;
   yinc=(dy*1.0)/len;
  }
  x=x1;y=y1;
  for(i=0;i<=len;i++)
  {
   putpixel(x,y,color);
   x+=xinc;
   y+=yinc;
  }
}
bresline (int x1 , int y1 , int x2 , int y2 ,int  color)
{
int xinc=0 , yinc =0 , lenx=0 , leny=0, dx , dy , i , len , x , y;
dx= x2-1;
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
putpixel(x, y , color);
}
}
void main()
{
int gd=0, gm ;
long int msec_s=1,msec_e=1, bresresult,ddlresult, lineresult;
struct  time tstart, tend;

 initgraph(&gd, &gm ,"");
//-------------Bres
gettime(&tstart);
for(int j=0;j<100;j++)
 bresline(0,0,100,100,4);
gettime(&tend);

msec_s= tstart.ti_hour*360000*msec_s+ tstart.ti_min*6000*msec_s+ tstart.ti_sec*100+ tstart.ti_hund;
msec_e= tend.ti_hour*360000*msec_e+ tend.ti_min*6000*msec_e+ tend.ti_sec*100+ tend.ti_hund;
bresresult=msec_e-msec_s;
//cout<<"bresLine:"<<result;
//cout<<'\n';

//-------------ddline
msec_s=1;msec_e=1;
gettime(&tstart);
for( j=0;j<100;j++)
 ddline(0,0,100,100,4);
gettime(&tend);

msec_s= tstart.ti_hour*360000*msec_s+ tstart.ti_min*6000*msec_s+ tstart.ti_sec*100+ tstart.ti_hund;
msec_e= tend.ti_hour*360000*msec_e+ tend.ti_min*6000*msec_e+ tend.ti_sec*100+ tend.ti_hund;
ddlresult=msec_e-msec_s;
//cout<<"ddLine:"<<result;
//cout<<'\n';

//--------------Line
msec_s=1;msec_e=1;

gettime(&tstart);
for( j=0;j<100;j++)
 line(0,0,100,100);
gettime(&tend);

msec_s= tstart.ti_hour*360000*msec_s+ tstart.ti_min*6000*msec_s+ tstart.ti_sec*100+ tstart.ti_hund;
msec_e= tend.ti_hour*360000*msec_e+ tend.ti_min*6000*msec_e+ tend.ti_sec*100+ tend.ti_hund;
lineresult=msec_e-msec_s;
//cout<<"Line:"<<result;

for(int k=0;k<10;k++)
cout<<'\n';

cout<<"Bres:"<<bresresult<<'\n'<<"DDL:"<<ddlresult<<'\n'<<"Line:"<<lineresult;
 getch();
closegraph();

}



