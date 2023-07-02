#include <conio.h>
#include <stdio.h>
#include   <dos.h>
#include   <math.h>
#include   <graphics.h>
#include   <iostream.h>

void circlePar8(int xc, int yc, int r, int color)
{
int teta;
 float x,y;
 for(teta=0;teta<45;teta++)
 {
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  putpixel(xc+x,yc+y,color);
  putpixel(xc-x,yc+y,color);
  putpixel(xc+x,yc-y,color);
  putpixel(xc-x,yc-y,color);

    putpixel(xc+y,yc+x,color);
  putpixel(xc-y,yc+x,color);
  putpixel(xc+y,yc-x,color);
  putpixel(xc-y,yc-x,color);
   }
}

void circlePar4(int xc, int yc, int r, int color)
{
int teta;
 float x,y;
 for(teta=0;teta<90;teta++)
 {
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  putpixel(xc+x,yc+y,color);
  putpixel(xc+x,yc-y,color);
  putpixel(xc-x,yc+y,color);
  putpixel(xc-x,yc-y,color);
   }
}

void circlePar1(int xc, int yc, int r, int color)
{
int teta;
 float x,y;
 for(teta=0;teta<360;teta++)
 {
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  putpixel(xc+x,yc+y,color);
 }
}


void circleRad(int xc, int yc, int r, int color)
   {
    int x,y ,rad;
    for(x=xc-r; x<=xc+r; x++)
    {
     rad=sqrt(r*r-(x-xc)*(x-xc));
     putpixel(x,yc+rad,color);
     putpixel(x,yc-rad,color);
    }
   }




void IcirclePar8(int xc, int yc, int r, int color)
{
 float teta,incteta=180/(3.14*r);
 float x,y;
 for(teta=0;teta<45;teta=teta+incteta)
 {
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  putpixel(xc+x,yc+y,color);
  putpixel(xc-x,yc+y,color);
  putpixel(xc+x,yc-y,color);
  putpixel(xc-x,yc-y,color);

    putpixel(xc+y,yc+x,color);
  putpixel(xc-y,yc+x,color);
  putpixel(xc+y,yc-x,color);
  putpixel(xc-y,yc-x,color);
   }
}

void IcirclePar4(int xc, int yc, int r, int color)
{
float teta,incteta=180/(3.14*r);
 float x,y;
 for(teta=0;teta<90;teta=teta+incteta)
 {
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  putpixel(xc+x,yc+y,color);
  putpixel(xc+x,yc-y,color);
  putpixel(xc-x,yc+y,color);
  putpixel(xc-x,yc-y,color);
   }
}

void IcirclePar1(int xc, int yc, int r, int color)
{
float teta,incteta=180/(3.14*r);
 float x,y;

 for(teta=0;teta<360;teta=teta+incteta)
 {
  x=r*cos(teta*3.14/180);
  y=r*sin(teta*3.14/180);
  putpixel(xc+x,yc+y,color);
 }
}


void IcircleRad(int xc, int yc, int r, int color)
   {
    int x,y ,rad;
    for(x=xc-r; x<=xc+r; x++)
    {
     rad=sqrt(r*r-(x-xc)*(x-xc));
     putpixel(x,yc+rad,color);
     putpixel(x,yc-rad,color);
    }
   }



int main(void)
{
   struct  time tC_b,tC_a,tRad_b,tRad_a,tPar1_b,tPar1_a,tPar4_b,tPar4_a,tPar8_b,tPar8_a;
   int gd=0, gm,i;
   long int tC_b_ms,tC_a_ms,tRad_b_ms,tRad_a_ms,tPar1_b_ms,tPar1_a_ms,tPar4_b_ms,tPar4_a_ms,tPar8_b_ms,tPar8_a_ms;
      initgraph(&gd, &gm,"");

    gettime(&tC_b);
    for(i=0;i<100;i++)
     circle(320,240,100);
    gettime(&tC_a);
    tC_b_ms=(long)tC_b.ti_hour*360000+(long) tC_b.ti_min*6000+ (long)tC_b.ti_sec*100+ tC_b.ti_hund;
    tC_a_ms=(long)tC_a.ti_hour*360000+(long) tC_a.ti_min*6000+ (long)tC_a.ti_sec*100+ tC_a.ti_hund;

//    printf("%d %d",&tC_b_ms,&tC_a_ms);
    cout<<"C Time: "<<tC_a_ms-tC_b_ms;

    gettime(&tRad_b);
    for(i=0;i<100;i++)
     circleRad(320,240,100,4);
    gettime(&tRad_a);
    tRad_b_ms=(long)tRad_b.ti_hour*360000+(long) tRad_b.ti_min*6000+ (long)tRad_b.ti_sec*100+ tRad_b.ti_hund;
    tRad_a_ms=(long)tRad_a.ti_hour*360000+(long) tRad_a.ti_min*6000+ (long)tRad_a.ti_sec*100+ tRad_a.ti_hund;

    cout<<'\n'<<"Circle Rad Time: "<<tRad_a_ms-tRad_b_ms;

	gettime(&tPar1_b);
    for(i=0;i<100;i++)
     circlePar1(320,240,100,4);
    gettime(&tPar1_a);
    tPar1_b_ms=(long)tPar1_b.ti_hour*360000+(long) tPar1_b.ti_min*6000+ (long)tPar1_b.ti_sec*100+ tPar1_b.ti_hund;
    tPar1_a_ms=(long)tPar1_a.ti_hour*360000+(long) tPar1_a.ti_min*6000+ (long)tPar1_a.ti_sec*100+ tPar1_a.ti_hund;

    cout<<'\n'<<"Circle Par1 Time: "<<tPar1_a_ms-tPar1_b_ms;


	gettime(&tPar4_b);
    for(i=0;i<100;i++)
     circlePar4(320,240,100,4);
    gettime(&tPar4_a);
    tPar4_b_ms=(long)tPar4_b.ti_hour*360000+(long) tPar4_b.ti_min*6000+ (long)tPar4_b.ti_sec*100+ tPar4_b.ti_hund;
    tPar4_a_ms=(long)tPar4_a.ti_hour*360000+(long) tPar4_a.ti_min*6000+ (long)tPar4_a.ti_sec*100+ tPar4_a.ti_hund;

    cout<<'\n'<<"Circle Par4 Time: "<<tPar4_a_ms-tPar4_b_ms;


	gettime(&tPar8_b);
    for(i=0;i<100;i++)
     circlePar8(320,240,100,4);
    gettime(&tPar8_a);
    tPar8_b_ms=(long)tPar8_b.ti_hour*360000+(long) tPar8_b.ti_min*6000+ (long)tPar8_b.ti_sec*100+ tPar8_b.ti_hund;
    tPar8_a_ms=(long)tPar8_a.ti_hour*360000+(long) tPar8_a.ti_min*6000+ (long)tPar8_a.ti_sec*100+ tPar8_a.ti_hund;

    cout<<'\n'<<"Circle Par8 Time: "<<tPar8_a_ms-tPar8_b_ms;

	gettime(&tPar8_b);
    for(i=0;i<100;i++)
     IcirclePar1(320,240,100,4);
    gettime(&tPar8_a);
    tPar8_b_ms=(long)tPar8_b.ti_hour*360000+(long) tPar8_b.ti_min*6000+ (long)tPar8_b.ti_sec*100+ tPar8_b.ti_hund;
    tPar8_a_ms=(long)tPar8_a.ti_hour*360000+(long) tPar8_a.ti_min*6000+ (long)tPar8_a.ti_sec*100+ tPar8_a.ti_hund;

   cout<<'\n'<<"Circle I_Par1 Time: "<<tPar8_a_ms-tPar8_b_ms;

	gettime(&tPar4_b);
    for(i=0;i<100;i++)
     IcirclePar4(320,240,100,4);
    gettime(&tPar4_a);
    tPar4_b_ms=(long)tPar4_b.ti_hour*360000+(long) tPar4_b.ti_min*6000+ (long)tPar4_b.ti_sec*100+ tPar4_b.ti_hund;
    tPar4_a_ms=(long)tPar4_a.ti_hour*360000+(long) tPar4_a.ti_min*6000+ (long)tPar4_a.ti_sec*100+ tPar4_a.ti_hund;

   cout<<'\n'<<"Circle I_Par4 Time: "<<tPar4_a_ms-tPar4_b_ms;

	gettime(&tPar1_b);
    for(i=0;i<100;i++)
     IcirclePar8(320,240,100,4);
    gettime(&tPar1_a);
    tPar1_b_ms=(long)tPar1_b.ti_hour*360000+(long) tPar1_b.ti_min*6000+ (long)tPar1_b.ti_sec*100+ tPar1_b.ti_hund;
    tPar1_a_ms=(long)tPar1_a.ti_hour*360000+(long) tPar1_a.ti_min*6000+ (long)tPar1_a.ti_sec*100+ tPar1_a.ti_hund;

   cout<<'\n'<<"Circle I_Par8 Time: "<<tPar1_a_ms-tPar1_b_ms;
   getch();

   closegraph();
}