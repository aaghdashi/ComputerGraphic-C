#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>



///*********************** programer  Hosien Abdollahi  *******************
//***********************     ocl.haker @ gmail.com    *********************

int circle_rad(int xc,int yc,int ra)
{
int x,RAD;
for(x=xc-ra;x<=xc+ra;x++)
{
 RAD=sqrt(ra*ra-(x-xc)*(x-xc));
 putpixel(x,yc+RAD,7);
 putpixel(x,yc-RAD,7);
}
return(0);
}
int circle_par1(int xc,int yc,int r)
{
int teta;
float x,y;
for(teta=0;teta<=360;teta++)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
putpixel(xc+x,yc+y,7);

}
return(0);
}
int circle_par4(int xc,int yc,int r)
{
int teta;
float x,y;
for(teta=0;teta<90;teta++)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
putpixel(xc+x,yc+y,7);
putpixel(xc+x,yc-y,7);
putpixel(xc-x,yc+y,7);
putpixel(xc-x,yc-y,7);
}
return(0);
}
int circle_par8(int xc,int yc,int r)
{
int teta;
float x,y;
for(teta=0;teta<45;teta++)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
putpixel(xc+x,yc+y,7);
putpixel(xc-x,yc+y,7);
putpixel(xc+x,yc-y,7);
putpixel(xc-x,yc-y,7);
putpixel(xc+y,yc+x,7);
putpixel(xc-y,yc+x,7);
putpixel(xc+y,yc-x,7);
putpixel(xc-y,yc-x,7);

}
return(0);
}

//*******************************8
/////////

int circleradh(int xc,int yc,int ra)
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
int circlepar1h(int xc,int yc,int r)
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
int circlepar4h(int xc,int yc,int r)
{
float teta;
float incteta;
incteta=180/(3.14*r);

float x,y;
for(teta=0;teta<90;teta+=incteta)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
putpixel(xc+x,yc+y,7);
putpixel(xc+x,yc-y,7);
putpixel(xc-x,yc+y,7);
putpixel(xc-x,yc-y,7);
}
return(0);
}
int circlepar8h(int xc,int yc,int r)
{
float teta;
float incteta;
incteta=180/(3.14*r);

float x,y;
for(teta=0;teta<45;teta+=incteta)
{
x=r*cos(teta*3.14/180);
y=r*sin(teta*3.14/180);
putpixel(xc+x,yc+y,7);
putpixel(xc-x,yc+y,7);
putpixel(xc+x,yc-y,7);
putpixel(xc-x,yc-y,7);
putpixel(xc+y,yc+x,7);
putpixel(xc-y,yc+x,7);
putpixel(xc+y,yc-x,7);
putpixel(xc-y,yc-x,7);

}
return(0);
}

int main(void)
{
struct time t1,t2,t3,t4,t5,t6,t7,t8;
int xc,yc,r;
long int l1=1,l2=1;

int i,gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
gettime(&t1);
for(i=1;i<=300;i++)
circle(340,280,100);
   gettime(&t2);
   l1= (t1.ti_hour*3600000*l1) +(t1.ti_min*6000*l1)+(t1.ti_sec*60*l1)+ (t1.ti_hund*l1);
   l2= (t2.ti_hour*3600000*l2) +(t2.ti_min*6000*l2)+(t2.ti_sec*60*l2)+ (t2.ti_hund*l2);
cout<<"Time of Circle c++ for 300 circle:"<<l2-l1<<"\n";
l1=1;
l2=1;
//////////////////
gettime(&t3);
for(i=1;i<=300;i++)
   circleradh(340,280,100);
   gettime(&t4);
   l1= (t3.ti_hour*3600000*l1) +(t3.ti_min*6000*l1)+(t3.ti_sec*60*l1)+ (t3.ti_hund*l1);
   l2= (t4.ti_hour*3600000*l2) +(t4.ti_min*6000*l2)+(t4.ti_sec*60*l2)+ (t4.ti_hund*l2);
cout<<endl<<"Time of CircleRAD hosh for 300 circle:"<<l2-l1<<"\n";
l1=1;
l2=1;
/////////////
gettime(&t5);
for(i=1;i<=300;i++)
   circlepar1h(340,280,100);
   gettime(&t6);
   l1= (t5.ti_hour*3600000*l1) +(t5.ti_min*6000*l1)+(t5.ti_sec*60*l1)+ (t5.ti_hund*l1);
   l2= (t6.ti_hour*3600000*l2) +(t6.ti_min*6000*l2)+(t6.ti_sec*60*l2)+ (t6.ti_hund*l2);
cout<<endl<<"Time of CirclePAR1 hosh for 300 circle:"<<l2-l1<<"\n";
l1=1;
l2=1;
//////////////////
gettime(&t7);
for(i=1;i<=300;i++)
   circlepar4h(340,280,100);
   gettime(&t8);
   l1= (t7.ti_hour*3600000*l1) +(t7.ti_min*6000*l1)+(t7.ti_sec*60*l1)+ (t7.ti_hund*l1);
   l2= (t8.ti_hour*3600000*l2) +(t8.ti_min*6000*l2)+(t8.ti_sec*60*l2)+ (t8.ti_hund*l2);
cout<<endl<<"Time of CirclePAR4 hosh for 300 circle:"<<l2-l1<<"\n";
l1=1;
l2=1;
//////////
gettime(&t7);
for(i=1;i<=300;i++)
   circlepar8h(340,280,100);
   gettime(&t8);
   l1= (t7.ti_hour*3600000*l1) +(t7.ti_min*6000*l1)+(t7.ti_sec*60*l1)+ (t7.ti_hund*l1);
   l2= (t8.ti_hour*3600000*l2) +(t8.ti_min*6000*l2)+(t8.ti_sec*60*l2)+ (t8.ti_hund*l2);
cout<<endl<<"Time of CirclePAR8 hosh for 300 circle:"<<l2-l1<<"\n";
////////////////
l1=1;
l2=1;
gettime(&t7);
for(i=1;i<=300;i++)
   circleradh(340,280,100);
   gettime(&t8);
   l1= (t7.ti_hour*3600000*l1) +(t7.ti_min*6000*l1)+(t7.ti_sec*60*l1)+ (t7.ti_hund*l1);
   l2= (t8.ti_hour*3600000*l2) +(t8.ti_min*6000*l2)+(t8.ti_sec*60*l2)+ (t8.ti_hund*l2);
cout<<endl<<"Time of RAD for 300 circle:"<<l2-l1<<"\n";
//
l1=1;
l2=1;
gettime(&t7);
for(i=1;i<=300;i++)
   circle_par1(340,280,100);
   gettime(&t8);
   l1= (t7.ti_hour*3600000*l1) +(t7.ti_min*6000*l1)+(t7.ti_sec*60*l1)+ (t7.ti_hund*l1);
   l2= (t8.ti_hour*3600000*l2) +(t8.ti_min*6000*l2)+(t8.ti_sec*60*l2)+ (t8.ti_hund*l2);
cout<<endl<<"Time of PAR1 for 300 circle:"<<l2-l1<<"\n";
//
l1=1;
l2=1;
gettime(&t7);
for(i=1;i<=300;i++)
   circle_par8(340,280,100);
   gettime(&t8);
   l1= (t7.ti_hour*3600000*l1) +(t7.ti_min*6000*l1)+(t7.ti_sec*60*l1)+ (t7.ti_hund*l1);
   l2= (t8.ti_hour*3600000*l2) +(t8.ti_min*6000*l2)+(t8.ti_sec*60*l2)+ (t8.ti_hund*l2);
cout<<endl<<"Time of PAR8 for 300 circle:"<<l2-l1<<"\n";
//
l1=1;
l2=1;
gettime(&t7);
for(i=1;i<=300;i++)
   circle_par4(340,280,100);
   gettime(&t8);
   l1= (t7.ti_hour*3600000*l1) +(t7.ti_min*6000*l1)+(t7.ti_sec*60*l1)+ (t7.ti_hund*l1);
   l2= (t8.ti_hour*3600000*l2) +(t8.ti_min*6000*l2)+(t8.ti_sec*60*l2)+ (t8.ti_hund*l2);
cout<<endl<<"Time of PAR4 for 300 circle:"<<l2-l1<<"\n";

//
getch();
closegraph();
return(0);
}