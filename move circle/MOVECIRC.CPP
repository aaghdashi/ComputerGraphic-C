#include"stdio.h"
#include"math.h"
#include"stdlib.h"
#include"dos.h"
#include"conio.h"
#include"graphics.h"
#include"iostream.h"
ddaline(int x1,int y1,int x2,int y2,int color)
{
int dx,dy,i,r=150,len,teta1,teta2,teta3,teta4;
float xc,yc,xinc,yinc,x,y;int gd=0,gm; initgraph(&gd,&gm,"");
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
len=abs(dx);
else
len=abs(dy) ;
x=x1;
y=y1;
if(len!=0)
{
xinc=(dx*1.0)/len;
yinc=(dy*1.0)/len ;
}
for(i=0;i<=len;i++)
{setcolor(5);
putpixel(x,y,color);
circle(x,y,r);
line(x,y,r*cos(teta1*3.14159/180),r*sin(teta1*3.14159/180));
delay(100);
setcolor(0);
putpixel(x,y,color);
circle(x,y,r);
line(x,y,r*cos(teta1*3.141592653/180),r*sin(teta1*3.141592653/180));
x=x+xinc;
y=y+yinc;
teta1+=6;
}
}
main()
{
int x,y,z,k,c;
cin>>x;
cin>>y;
cin>>z;
cin>>k;
cin>>c;
ddaline(x,y,z,k,c);
getch();
}