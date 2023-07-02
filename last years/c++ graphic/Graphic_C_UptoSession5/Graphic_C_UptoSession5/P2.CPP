#include <stdlib.h>
#include <stdio.h>
#include <values.h>
#include <time.h>
#include <graphics.h>
#include <conio.h>
int main(void)
{
   int gd, gm;
   gd=DETECT;
   initgraph(&gd, &gm, "");
   for(int x=0; x<640;x++)
	putpixel(x,(3.0/4)*x,4);

	getch();
   return 0;
}