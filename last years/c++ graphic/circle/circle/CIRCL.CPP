#include<dos.h>
#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
/*******************************************/
circlerad(int xc,int yc,int r,int c)
{
int x;
float rad;
for(x=xc-r;x<=xc+r;x++)
{
rad=sqrt(r*r-(x-xc)*(x-xc));
putpixel(x,yc+rad,c);
putpixel(x,yc-rad,c);
}
}
/*******************************************/
circlepar1(int xc,int yc,int r,int c)
{
int t;
float x,y;
for(t=0;t<360;t++)
{
x=r*cos(t*3.14/180);
y=r*sin(t*3.14/180);
putpixel(xc+x,yc+y,c);
}
}
/*******************************************/
circlepar4(int xc,int yc,int r,int c)
{
int t;
float x,y;
for(t=0;t<90;t++)
{
x=r*cos(t*3.14/180);
y=r*sin(t*3.14/180);
putpixel(xc+x,yc+y,c);
putpixel(xc+x,yc-y,c);
putpixel(xc-x,yc-y,c);
putpixel(xc-x,yc+y,c);
}
}
/*******************************************/
circlepar8(int xc,int yc,int r,int c)
{
int t;
float x,y;
for(t=0;t<45;t++)
{
x=r*cos(t*3.14/180);
y=r*sin(t*3.14/180);
putpixel(xc+x,yc+y,c);
putpixel(xc+x,yc-y,c);
putpixel(xc-x,yc-y,c);
putpixel(xc-x,yc+y,c);
putpixel(xc+y,yc+x,c);
putpixel(xc+y,yc-x,c);
putpixel(xc-y,yc-x,c);
putpixel(xc-y,yc+x,c);

}
}

/***************************************************/
int main(void)
{
  struct time t1,t2,t3,t4;
  long int l1=1,l2=1,l3=1,l4=1;
  int i;

  int gd,gm;
  gd=0;
  initgraph(&gd,&gm,"");
  int x,y,r,c;
  gettime(&t1);
 /********************************************/
  for(i=0;i<100;i++)
  circle(320,240,100);
  gettime(&t2);
  l1=t1.ti_hour*360000*l1+t1.ti_min*6000*l1+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*360000*l2+t2.ti_min*6000*l2+t2.ti_sec*100+t2.ti_hund;

  cout<<"circle---"<<l2-l1<<endl;
 /********************************************/
  l1=1;
  l2=1;
  gettime(&t1);
  for(i=0;i<100;i++)
  circlerad(320,240,100,4);
  gettime(&t2);
  l1=t1.ti_hour*360000*l1+t1.ti_min*6000*l1+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*360000*l2+t2.ti_min*6000*l2+t2.ti_sec*100+t2.ti_hund;
  cout<<"circlerad-----"<<l2-l1<<endl;
/*************************************************/
  l1=1;
  l2=1;
  gettime(&t1);
  for(i=0;i<100;i++)
  circlepar1(320,240,100,6);
  gettime(&t2);
  l1=t1.ti_hour*360000*l1+t1.ti_min*6000*l1+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*360000*l2+t2.ti_min*6000*l2+t2.ti_sec*100+t2.ti_hund;
  cout<<"cirpar1------"<<l2-l1<<endl;

/*************************************************/
  l1=1;
  l2=1;
  gettime(&t1);
  for(i=0;i<100;i++)
  circlepar4(320,240,100,6);
  gettime(&t2);
  l1=t1.ti_hour*360000*l1+t1.ti_min*6000*l1+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*360000*l2+t2.ti_min*6000*l2+t2.ti_sec*100+t2.ti_hund;
  cout<<"cirpar4---------"<<l2-l1<<endl;
/*************************************************/
  l1=1;
  l2=1;
  gettime(&t1);
  for(i=0;i<100;i++)
  circlepar8(320,240,100,6);
  gettime(&t2);
  l1=t1.ti_hour*360000*l1+t1.ti_min*6000*l1+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*360000*l2+t2.ti_min*6000*l2+t2.ti_sec*100+t2.ti_hund;
  cout<<"cirpar8---------"<<l2-l1<<endl;


  getch();
  closegraph();
   return 0;
}

