#include  "graphics.h"
#include  "math.h"
#include  "conio.h"
#include  "stdio.h"
#include  "dos.h"
void ellips1(int xc,int yc, int rx, int ry, int color)
{
 int teta;
 float x,y;
 for(teta=0; teta<360; teta++)
 {
  x=rx*cos(teta*3.14/180);
    y=ry*sin(teta*3.14/180);
    putpixel(xc+x,yc+y,color);
 }
}


void main()
{
    int     driver = DETECT,mode;
    int     i,x,y;

    initgraph(&driver,&mode,"c:\\borlandc\\bgi");

    //moveto(0,240);
    //for(x=0;x<360;x++)
    //{
     //y=240-240*sin(x*3.14/180);
     //lineto(x*640.0/360,y);
    //}

//    moveto(0,240);
    for(int j=1;(j<640)&&!kbhit();j+=10)
    {
    for(i=0;i<40;i+=10)
    {
     ellips1(j+10,360,40,i,4);
    }
    for(int l=0;l<40;l+=5)
    {
     ellips1(j+10,360,l,40,4);
    }

    delay(30);

    for(i=0;i<40;i+=5)
    {
     ellips1(j+10,360,40,i,0);
    }
    for(l=0;l<40;l+=5)
    {
     ellips1(j+10,360,l,40,0);
    }
     }
    getch();
    closegraph();
}