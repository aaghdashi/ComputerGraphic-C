#include"iostream.h"
#include"conio.h"
#include"graphics.h"
#include"math.h"
ellipserad(int xc,int yc,int rx,int ry,int color)
{
clrscr();
int gd=0,gm,x;
initgraph(&gd,&gm,"");
float rad;
if(rx==0)
rx=1;
for(x=xc-rx;x<xc+rx;x++)
{
rad=rx*1.0/ry*sqrt(rx*rx-(x-xc)*(x-xc));
putpixel(x,yc+rad,color);
putpixel(x,yc-rad,color);

}
}
main()
{int a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
ellipserad(a,b,c,d,e);
getch();

}
