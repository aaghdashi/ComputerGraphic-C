#include"graphics.h"
#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"dos.h"
main()
{
clrscr();
int gd,gm,x1=0,y1=0,x2=6,y2=4,i;
int a1[200],a2[200],b1[200],b2[200];
gd=0;
initgraph(&gd,&gm,"");

for(i=0;i<200;i++)
{
	setcolor(random(16));
	line(x1*random(i),y1*random(i),x2*random(i),y2*random(i));
	delay(50);
	a1[i]=x1;a2[i]=x2;b1[i]=y1;b2[i]=y2;
	x1=x2;
	y1=y2;

}
for(i=9;i>=0;i--)
{
	setcolor(0);
	line(a1[i],b1[i],a2[i],b2[i]);
	delay(10);
}

getch();
closegraph();
}
