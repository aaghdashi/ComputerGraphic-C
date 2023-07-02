#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
# include <math.h>
#include <complex.h>
#include <string.h>
#include <stdio.h>
#include <alloc.h>



void boundaryfill4 (int x, int y, int fill, int boundary)
{
int current;
current = getpixel (x,y);
if ((current != boundary)&&( current !=fill))
 {
setcolor(fill);
putpixel(x,y,1);
boundaryfill4 (x-1, y, fill, boundary);
delay(1);
malloc(4000);
boundaryfill4 (x+1, y, fill, boundary);
delay(1);
malloc(4000);
boundaryfill4(x, y-1, fill, boundary);
delay(1);
malloc(4000);
boundaryfill4(x, y+1, fill, boundary);
malloc(4000);

}
}

void main(void)
  {
      int gd = DETECT, gm,i,numpoint,color;
      initgraph(&gd, &gm, "");
  circle(200,200,40);
  circle(150,175,50);
 circle(175,200,30);

  boundaryfill4(200,200,1,15);
      getch();
      closegraph();
    }