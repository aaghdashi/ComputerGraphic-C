#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
show_cos()
{
int x,y;
for(x=0;x<=960;x++)
{
y=240-240*cos((x*3.14159)/180*(360.0/960));
putpixel((x*640.0)/960,y,14);
}
}
main(void)
{
int i,gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
show_cos();
getch();
closegraph();
return(0);
}