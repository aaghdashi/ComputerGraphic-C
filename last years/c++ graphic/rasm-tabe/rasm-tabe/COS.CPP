//showsin()
//{
//int x;float y;
//for(x=0;x<960;x++)
//{
//y=240-240*sin(x*3.14/180*360.0/960);
//putpixel(x*640.0/960,y,4);
//}
//}
#include<dos.h>
#include <iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(void)
{
 int i;float y;
  int gd,gm;
  gd=0;
  initgraph(&gd,&gm,"");
  int x,r,c;
  //circlerad(30,20,10,4);
  for(x=0;x<960;x++)
{
y=240+240*sin(x*3.14/180*360.0/960);
putpixel(x*640.0/960,y,4);
}
  getch();
  closegraph();
  return 0;
}