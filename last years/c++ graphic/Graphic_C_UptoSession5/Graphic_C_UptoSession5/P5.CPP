#include <stdlib.h>
#include <stdio.h>
#include <values.h>
#include <time.h>
#include <graphics.h>
#include <conio.h>
#include <dos.h>
int main(void)
{
   int gd, gm;
   int arx[500],ary[500];
   gd=DETECT;
   initgraph(&gd, &gm, "");
   for(int i=0; i<500;i++)
   {    arx[i]=random(640);
	ary[i]=random(480);
	delay(5);
	putpixel(arx[i], ary[i],random(15));
   }
      for(int j=499; j>=0;j--)
   {
	delay(5);
	putpixel(arx[j], ary[j],0);
   }

	getch();
   return 0;
}