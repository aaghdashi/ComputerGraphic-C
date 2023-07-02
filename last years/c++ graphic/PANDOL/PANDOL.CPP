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
circle_par(int xc,int yc,int r,int color)
{
int teta;
float x,y;
for(teta=0;teta<=360;teta++)
{
 x=r*cos(teta*(3.14/180));
 y=r*sin(teta*(3.14/180));
 putpixel(xc+x,yc+y,color);
}
}
void pandol()
{
int teta,r=100;
float x,y;
while(!kbhit()){
for(teta=60;teta<=120;teta++)
{
 x=r*cos(teta*(3.14/180));
 y=r*sin(teta*(3.14/180));
 bresline(300,0,300+x,250+y,15);
 circle_par(300+x,250+y,50,15);
 delay(10);
 bresline(300,0,300+x,250+y,0);
 circle_par(300+x,250+y,50,0);
}
for(teta=120;teta>=60;teta--)
{
 x=r*cos(teta*(3.14/180));
 y=r*sin(teta*(3.14/180));
 bresline(300,0,300+x,250+y,15);
 circle_par(300+x,250+y,50,15);
 delay(10);
 bresline(300,0,300+x,250+y,0);
 circle_par(300+x,250+y,50,0);
}
}
}
int main(void)
{
int gdriver = DETECT, gmode, errorcode;

/* initialize graphics mode */
initgraph(&gdriver, &gmode, "");
pandol();
getch();
return(0);
}