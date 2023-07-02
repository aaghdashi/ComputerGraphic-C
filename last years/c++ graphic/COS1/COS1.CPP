#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int bresline(int x1,int y1,int x2,int y2,int color)
{
int xinc=0,yinc=0,lenx=0,leny=0;
int dx,dy,i,len,x,y;
dx=x2-x1;
if(dx>0)
 xinc=1;
 else
 if(dx<0)
  xinc=-1;
  dy=y2-y1;
if(dy>0)
yinc=1;
else
 if(dy<0)
  yinc=-1;
 dx=abs(dx);
 dy=abs(dy);
 if (dx>dy)
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
    {
     lenx-=len;
     x+=xinc;
    }
   if(leny>=len)
   {
   leny-=len;
   y+=yinc;
   }
   putpixel(x,y,color);
  }
return(0);
}

int circle_rad(int xc,int yc,int ra)
{
float x,RAD,incx;
incx=(2*ra+1)/(3.14*ra);
for(x=xc-ra;x<=xc+ra;x+=incx)
{
 RAD=sqrt(ra*ra-(x-xc)*(x-xc));
 putpixel(x,yc+RAD,7);
 putpixel(x,yc-RAD,7);
}
return(0);
}
int circle_par1(int xc,int yc,int r)
{
float teta;
float incteta;
incteta=180/(3.14*r);
float x,y;
for(teta=0;teta<=360;teta+=incteta)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
putpixel(xc+x,yc+y,7);

}
return(0);
}
show_sin()
{
int x,y;
for(x=0;x<=960;x++)
{
y=240+240*sin((x*3.14)/180*(360.0/960));
putpixel((x*640.0)/960,y,14);
}
}
int main(void)
{
int i,gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
show_sin();
getch();
closegraph();
return(0);
}