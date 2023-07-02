#include <graphics.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
 ddaline(int x1,int y1,int x2,int y2,int color)
  {
    int dx,dy,len,i;
    float xinc,yinc,y,x;
    dx=x2-x1;
    dy=y2-y1;
    if(abs(dx)>abs(dy))
	len=abs(dx);
    else
	len=abs(dy);
    if(len!=0)
       {
	 xinc=(dx*1.0)/len;
	 yinc=(dy*1.0)/len;
       }
     x=x1;
     y=y1;
     for(i=0;i<=len;i++)
	{
	 putpixel(x,y,color);
	 x=x+xinc;
	 y=y+yinc;
	 }
  }
void bresline(int x1,int y1,int x2,int y2,int color)
 {
    int xinc=0,yinc=0,lenx=0,leny=0,dx,dy,i,len,x,y;
    dx=x2-x1;
    if (dx>0)
	xinc=1;
    else if(dx<0)
	xinc=-1;
	dy=y2-y1;
    if (dy>0)
	yinc=1;
    else if(dy<0)
	yinc=-1;
     dx=abs(dx);
     dy=abs(dy);
     if(dx>dy)
	len=dx;
     else
	  len=dy;
      x=x1;
      y=y1;
     for(i=0;i<=len;i++)
       {
	 lenx+=dx;
	 leny+=dy;
	 if(lenx>=len)
	  { lenx-=len;
	   x+=xinc;
	   }
	 if(leny>=len)
	  { leny-=len;
	   y+=yinc;
	   }
	   putpixel(x,y,color);
	  }//end for
 }//end bresline

//*********************************main**********************
int main(void)
  {
    int gd = DETECT, gm,i;
    long int l1=1,l2=1;
    struct time t1,t2;
    initgraph(&gd, &gm, "");
 //****************************call bresline**************************
     gettime(&t1);
     for(i=0;i<=100;++i)
	bresline(1,1,640,480,4);
     gettime(&t2);
     l1=t1.ti_hour*360000*l1+t1.ti_min*6000*l1+t1.ti_sec*100+t1.ti_hund;
     l2=t2.ti_hour*360000*l2+t2.ti_min*6000*l2+t2.ti_sec*100+t2.ti_hund;
     cout<<"\n\t\t\tbresline time:"<<l2-l1;
//******************************call ddaline**********************
l1=1;
l2=1;
     gettime(&t1);
     for(i=0;i<=100;++i)
	ddaline(1,1,640,480,4);
     gettime(&t2);
     l1=t1.ti_hour*360000*l1+t1.ti_min*6000*l1+t1.ti_sec*100+t1.ti_hund;
     l2=t2.ti_hour*360000*l2+t2.ti_min*6000*l2+t2.ti_sec*100+t2.ti_hund;
     cout<<"\n\t\t\tddaline time :"<<l2-l1;
//******************************call line**********************
l1=1;
l2=1;
     gettime(&t1);
     for(i=0;i<=100;++i)
	line(1,1,640,480);
     gettime(&t2);
     l1=t1.ti_hour*360000*l1+t1.ti_min*6000*l1+t1.ti_sec*100+t1.ti_hund;
     l2=t2.ti_hour*360000*l2+t2.ti_min*6000*l2+t2.ti_sec*100+t2.ti_hund;
     cout<<"\n\t\t\tline time :"<<l2-l1;







   getch();
   closegraph();
   return 0;
}

