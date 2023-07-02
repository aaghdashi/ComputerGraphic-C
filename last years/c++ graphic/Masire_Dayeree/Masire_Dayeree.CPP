#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int circle_par1(int xc,int yc,int r,int cc)
{
float teta;
float incteta;
incteta=180/(3.14*r);
float x,y;
for(teta=0;teta<=360;teta+=incteta)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
putpixel(xc+x,yc+y,cc);

}
return(0);
}

main()
{

int i,gdriver = DETECT, gmode, errorcode;
float x1,y1;
initgraph(&gdriver, &gmode, "");

while(!kbhit())
{
for (i=0;i<=360;i++)
{
x1=100*cos(i*3.14/180);
y1=100*sin(i*3.14/180);
setcolor(2);
circle_par1(x1+240,y1+320,10,15);
delay(10);
setcolor(0);
circle_par1(x1+240,y1+320,10,0);
}
}
getch();

}