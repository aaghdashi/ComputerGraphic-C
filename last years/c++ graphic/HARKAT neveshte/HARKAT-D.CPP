#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
main()
{
////////////////////////////////// abdollahi  /////////////////////
int gd=DETECT,gmod ,x=0;
initgraph(&gd,&gmod,"");
putpixel(320,220,12);
int maxx,maxy,length=50,radius=15;
maxx=getmaxx();
maxy=getmaxy();
int i=radius;
int j=radius;
x=(maxx-length)/2;
int dx=1,dy=1;
setfillstyle(1,2);
setcolor(4);
int col;
col=2;
while(!kbhit())
{
  i+=dx;
  j+=dy;
  setcolor(col);

  outtextxy(i,j,"GRAPHIC");
  delay(13);
  setcolor(0);
   outtextxy(i,j,"GRAPHIC");

  if((i>maxx-radius)||(i<=radius))
  {col=col+1;
   dx=-dx;     }
  if((j<=radius)||(j>=maxy-radius))
  { dy=-dy;
  col=col+1;}
}
getch();
return 0;
closegraph();
}