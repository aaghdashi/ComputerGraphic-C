#include "stdio.h"
#include "graphics.h"
#include "conio.h"


void main()
{
 int gd, gm;
 gd=DETECT;

 initgraph(&gd, &gm, "");

 //for(int i=1;i<11;i++ )
	putpixel(320,240, 4);


 getch();
 closegraph();

}