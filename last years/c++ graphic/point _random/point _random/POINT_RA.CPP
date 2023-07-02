#include"graphics.h"
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"dos.h"
main()
{
clrscr();
int gd,gm,x[500],y[500],i;
gd=0;
initgraph(&gd,&gm,"");
for(i=0;i<500;i++)
{
	x[i]=random(640);
	y[i]=random(480);
	putpixel(x[i],y[i],random(16));
	delay(5);
}
for(i=499;i>0;i--)
{
	putpixel(x[i],y[i],0);
	delay(5);
}

getch();
}
