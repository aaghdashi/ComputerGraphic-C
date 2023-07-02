#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int ellips(int xc,int yc,int rx,int ry,int color1,int i)
{
int teta;
int xf=320;
int yf=240;
float x,y,xp,yp,i1;
for(teta=0;teta<=360;teta++)
{
x=rx*cos(teta*3.14/180);
y=ry*sin(teta*3.14/180);
i1=i*3.14/180;
yp=((x+xc-xf)*sin(i1)+(y+yc-yf)*cos(i1)+yf) ;
xp=((x+xc-xf)*cos(i1)-(y+yc-yf)*sin(i1)+xf);
putpixel(xp,yp,color1);

}
return(0);
}
int main(void)
{
int i,x,gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
x=300;
int color1;
color1=5;
int xf=320;
int yf=240;
while(!kbhit()){
for(int i=0;i<=360;i=i+10){
{
ellips(200,200,10,50,color1,i);
delay(100);
ellips(200,200,10,50,0,i);
}
  }
}
getch();
closegraph();
return(0);
}