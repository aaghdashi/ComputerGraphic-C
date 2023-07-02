#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void circlepar1(int xc,int yc,int r,int color )
{
 int teta ;
 float x,y;
 for(teta =0 ;teta <360 ;teta++)
 {
  x=r*cos(teta*3.14/180);
    y=r*sin(teta*3.14/180);
  putpixel(xc+x,yc+y,color);
  }
 }
void circlepar4(int xc,int yc,int r,int color )
{
 int teta ;
 float x,y;
 for(teta =0 ;teta <90 ;teta++)
 {
  x=r*cos(teta*3.14/180);
    y=r*sin(teta*3.14/180);
    putpixel(xc+x,yc+y,color);
    putpixel(xc+x,yc-y,color);
    putpixel(xc-x,yc+y,color);
    putpixel(xc-x,yc-y,color);
  }
 }
void circlepar8(int xc,int yc,int r,int color )
{
 int teta ;
 float x,y;
 for(teta =0 ;teta <45 ;teta++)
 {
  x=r*cos(teta*3.14/180);
    y=r*sin(teta*3.14/180);
    putpixel(xc+x,yc+y,color);
    putpixel(xc+x,yc-y,color);
    putpixel(xc-x,yc+y,color);
    putpixel(xc-x,yc-y,color);
     putpixel(xc+y,yc+x,color);
    putpixel(xc-y,yc+x,color);
    putpixel(xc+y,yc-x,color);
    putpixel(xc-y,yc-x,color);

  }
 }
void  circlerad(int xc,int yc,int r,int color)
   {
   int x;
   float rad;
   for(x=xc-r;x<=xc+r;x++)
   {
   rad=sqrt(r*r-(x-xc)*(x-xc));
   putpixel(x,yc+rad,color);
    putpixel(x,yc-rad,color);
   }
 }

 void circlepar1b(int xc,int yc,int r,int color )
{
 float teta ;
 float x,y,incteta;
 incteta=180/(3.14*r);
 for(teta =0 ;teta <360 ;teta=teta+incteta)
 {
  x=r*cos(teta*3.14/180);
    y=r*sin(teta*3.14/180);
  putpixel(xc+x,yc+y,color);
  }
 }
void circlepar4b(int xc,int yc,int r,int color )
{

  float teta ;
 float x,y,incteta;
 incteta=180/(3.14*r);

 for(teta =0 ;teta <90 ;teta=teta+incteta)
 {
  x=r*cos(teta*3.14/180);
    y=r*sin(teta*3.14/180);
    putpixel(xc+x,yc+y,color);
    putpixel(xc+x,yc-y,color);
    putpixel(xc-x,yc+y,color);
    putpixel(xc-x,yc-y,color);
  }
 }
void circlepar8b(int xc,int yc,int r,int color )
{
  float teta ;
 float x,y,incteta;
 incteta=180/(3.14*r);

 for(teta =0 ;teta <45 ;teta=teta+incteta)
 {
  x=r*cos(teta*3.14/180);
    y=r*sin(teta*3.14/180);
    putpixel(xc+x,yc+y,color);
    putpixel(xc+x,yc-y,color);
    putpixel(xc-x,yc+y,color);
    putpixel(xc-x,yc-y,color);
     putpixel(xc+y,yc+x,color);
    putpixel(xc-y,yc+x,color);
    putpixel(xc+y,yc-x,color);
    putpixel(xc-y,yc-x,color);

  }
 }
void  circleradb(int xc,int yc,int r,int color)
   {
   float x;
   float rad,xinc;
   xinc=(2*r+1)/(3.14*r);
   for(x=xc-r;x<=xc+r;x=x+xinc)
   {
   rad=sqrt(r*r-(x-xc)*(x-xc));
   putpixel(x,yc+rad,color);
    putpixel(x,yc-rad,color);
   }
 }

void main(void)
{
  struct time t1,t2;
  long int l=1,l1,l2;
  int gd=DETECT,gm,i;
  initgraph(&gd,&gm,"");
  gettime(&t1);
  for(i=0;i<100;i++)
	circlepar1(320,240,100,4);
    gettime(&t2);
  l1=t1.ti_hour*3600000*l+t1.ti_min*6000*l+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*3600000*l+t2.ti_min*6000*l+t2.ti_sec*100+t2.ti_hund;
  cout<<"\ntime circlepar1 is:"<<l2-l1;
  //*****************************************
  l=1;
    gettime(&t1);
  for(i=0;i<100;i++)
	circlepar4(320,240,100,4);
    gettime(&t2);
  l1=t1.ti_hour*3600000*l+t1.ti_min*6000*l+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*3600000*l+t2.ti_min*6000*l+t2.ti_sec*100+t2.ti_hund;
  cout<<"\ntime circlepar4 is:"<<l2-l1;
    //*****************************************
  l=1;
  gettime(&t1);
  for(i=0;i<100;i++)
	circlepar8(320,240,100,4);
    gettime(&t2);
  l1=t1.ti_hour*3600000*l+t1.ti_min*6000*l+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*3600000*l+t2.ti_min*6000*l+t2.ti_sec*100+t2.ti_hund;
  cout<<"\ntime circlepar8 is:"<<l2-l1;
   //*****************************************
l=1;
  l1=0;
  l2=0;
  setcolor(6);
   gettime(&t1);
  for(i=0;i<100;i++)
	circle(320,240,100);
    gettime(&t2);
  l1=t1.ti_hour*3600000*l+t1.ti_min*6000*l+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*3600000*l+t2.ti_min*6000*l+t2.ti_sec*100+t2.ti_hund;
  cout<<"\ntime circle is:"<<l2-l1;

//****************************
l=1;
  l1=0;
  l2=0;
    gettime(&t1);
  for(i=0;i<100;i++)
	circlerad(320,240,100,4);
    gettime(&t2);
  l1=t1.ti_hour*3600000*l+t1.ti_min*6000*l+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*3600000*l+t2.ti_min*6000*l+t2.ti_sec*100+t2.ti_hund;
  cout<<"\ntime circlerad is:"<<l2-l1;

 //*********
   cout<<"\n********************";
   gettime(&t1);
  for(i=0;i<100;i++)
	circlepar1b(320,240,100,4);
    gettime(&t2);
  l1=t1.ti_hour*3600000*l+t1.ti_min*6000*l+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*3600000*l+t2.ti_min*6000*l+t2.ti_sec*100+t2.ti_hund;
  cout<<"\ntime circlepar1b is:"<<l2-l1;
  //*****************************************
  l=1;
    gettime(&t1);
  for(i=0;i<100;i++)
	circlepar4b(320,240,100,4);
    gettime(&t2);
  l1=t1.ti_hour*3600000*l+t1.ti_min*6000*l+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*3600000*l+t2.ti_min*6000*l+t2.ti_sec*100+t2.ti_hund;
  cout<<"\ntime circlepar4 is:"<<l2-l1;
    //*****************************************
  l=1;
    gettime(&t1);
  for(i=0;i<100;i++)
	circlepar8b(320,240,100,4);
    gettime(&t2);
  l1=t1.ti_hour*3600000*l+t1.ti_min*6000*l+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*3600000*l+t2.ti_min*6000*l+t2.ti_sec*100+t2.ti_hund;
  cout<<"\ntime circlepar8 is:"<<l2-l1;
   //*****************************************


//****************************
l=1;
  l1=0;
  l2=0;
gettime(&t1);
  for(i=0;i<100;i++)
	circleradb(320,240,100,4);
    gettime(&t2);
  l1=t1.ti_hour*3600000*l+t1.ti_min*6000*l+t1.ti_sec*100+t1.ti_hund;
  l2=t2.ti_hour*3600000*l+t2.ti_min*6000*l+t2.ti_sec*100+t2.ti_hund;
  cout<<"\ntime circlerad is:"<<l2-l1;


  getch();

  closegraph();
}