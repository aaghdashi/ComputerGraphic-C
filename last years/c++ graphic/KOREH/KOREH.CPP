#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int ellips(int xc,int yc,int rx,int ry,int color1)
{
int teta;
float x,y;
for(teta=0;teta<=360;teta++)
{
x=rx*cos(teta*3.14/180);
y=ry*sin(teta*3.14/180);
putpixel(xc+x,yc+y,color1);
}
return(0);
}
///////////////////////////  abdollahi  //////////////////////
///////////////////////////  ocl.haker@gmail.com  ///////////////
int main(void)
{
int i,x,gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
x=0;
int color1;
float d;

cout<<"enter color";
cin>>color1;
while(!kbhit()){
for (i=1;i<=100;i+=10){
ellips(x,200,100,i*sin(x),color1);
ellips(x,200,i*sin(x),100,color1);
}
delay(20);
for (i=1;i<=100;i+=10){
ellips(x,200,100,i*sin(x),0);
ellips(x,200,i*sin(x),100,0);
}

/////////////////////////////////

x+=5;
}
getch();
closegraph();
return(0);
}