#include <dos.h>
#include <math.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;
   int x,y,t,i;
   float pi;
   int userfont;
   int rc,rx,ry;
   struct palettetype pal;
   int ht,xmax;

   pi=4*atan(1)/180;
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

      /* grab a copy of the palette */
   getpalette(&pal);

   /* create gray scale */
   for (i=0; i<pal.size; i++)
      setrgbpalette(pal.colors[i], i*10, i*4, i*2);

   /* display the gray scale */
   ht = getmaxy() / 16;
   xmax = getmaxx();






   userfont = installuserfont("lcom.CHR");

   /* select the user font */
   settextstyle(userfont, HORIZ_DIR, 1);

   while(!kbhit())
   {
     rc=rand()%15;
     rx=rand()%639;
     ry=rand()%479;
     y = 0;
   for (i=0; i<pal.size; i++)
   {
      setfillstyle(SOLID_FILL, i);
      bar(0, y, xmax, y+ht);
      y += ht;
   }

     setcolor(rc);
     outtextxy(rx,ry,"Abdoreza Rahimi");
     delay(rc*20);
     setcolor(0);
     outtextxy(rx,ry,"Abdoreza Rahimi");

   }
   /* clean up */

   closegraph();
   return 0;
}

