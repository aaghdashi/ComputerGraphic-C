#include"iostream.h"
#include"conio.h"
#include"math.h"
#include"graphics.h"
#include"dos.h"
circlepar(int xc,int yc,int r,int color)
{
int teta;
int x,y,gd=0,gm;
initgraph(&gd,&gm,"");
while(!kbhit()){
for(teta=180;teta<=360;teta++)
{
x=r*cos(teta*3.14159/180)*-1;
y=r*sin(teta*3.14159/180)*-1;
setcolor(4);
circle(x+xc,y+yc,50);
line(320,0,xc+x,yc+y);
setcolor(0);
circle(x+xc,y+yc,50);
line(320,0,xc+x,yc+y);
delay(0);
}
for(teta=360;teta>=180;teta--)
{
x=r*cos(teta*3.14159/180)*-1;
y=r*sin(teta*3.14159/180)*-1;
setcolor(4);
circle(x+xc,y+yc,50);
line(320,0,xc+x,yc+y);
setcolor(0);
circle(x+xc,y+yc,50);
line(320,0,xc+x,yc+y);
delay(20);
}               }
}
main()
{
clrscr();
int x,y,r,c;
cin>>x>>y>>r>>c;
circlepar(x,y,r,c);
getch();
return 0;
 }