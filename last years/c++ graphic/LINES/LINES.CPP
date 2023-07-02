#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
  void dda(int x1, int y1, int x2, int y2,int color)
	{
	int dx,dy,len,i;
	float xinc,yinc,x,y;
	dx=x2-x1;
	dy=y2-y1;
	if(abs(dx)>abs(dy))
	len=abs(dx);
	else
	len=abs(dy);
	if(len!=0)
	{
	xinc=dx*1.0/len;
	yinc=dy*1.0/len;
	}
	x=x1;
	y=y1;
	for(i=0;i<=len;i++)
	{
	putpixel(x,y,color);
	x+=xinc;
	y+=yinc;}
	}



int bresline(int x1,int y1,int x2,int y2,int color)
{
int xinc=0,yinc=0,lenx=0,leny=0;
int dx,dy,i,len,x,y;
dx=x2-x1;
if(dx>0)
 xinc=1;
 else
 if(dx<0)
  xinc=-1;
  dy=y2-y1;
if(dy>0)
yinc=1;
else
 if(dy<0)
  yinc=-1;
 dx=abs(dx);
 dy=abs(dy);
 if (dx>dy)
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
    {
     lenx-=len;
     x+=xinc;
    }
   if(leny>=len)
   {
   leny-=len;
   y+=yinc;
   }
   putpixel(x,y,color);
  }
return(0);
}
int main(void)
{
struct time t1,t2;
long int l1=1,l2=1;
int i,gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
gettime(&t1);
for(i=1;i<=1000;i++)
   bresline(1,1,640,500,15);
   gettime(&t2);
   l1= (t1.ti_hour*3600000*l1) +(t1.ti_min*6000*l1)+(t1.ti_sec*60*l1)+ (t1.ti_hund*l1);
   l2= (t2.ti_hour*3600000*l2) +(t2.ti_min*6000*l2)+(t2.ti_sec*60*l2)+ (t2.ti_hund*l2);
cout<<"Time of Bresline:"<<l2-l1;
l1=1;
l2=1;
gettime(&t1);
for(i=1;i<=1000;i++)
   dda(1,1,640,500,15);
   gettime(&t2);
   l1= (t1.ti_hour*3600000*l1) +(t1.ti_min*6000*l1)+(t1.ti_sec*60*l1)+ (t1.ti_hund*l1);
   l2= (t2.ti_hour*3600000*l2) +(t2.ti_min*6000*l2)+(t2.ti_sec*60*l2)+ (t2.ti_hund*l2);
cout<<endl<<"Time of DDA:"<<l2-l1;
l1=1;
l2=1;
gettime(&t1);
for(i=1;i<=100;i++)
   line(1,1,640,500);
   gettime(&t2);
   l1= (t1.ti_hour*3600000*l1) +(t1.ti_min*6000*l1)+(t1.ti_sec*60*l1)+ (t1.ti_hund*l1);
   l2= (t2.ti_hour*3600000*l2) +(t2.ti_min*6000*l2)+(t2.ti_sec*60*l2)+ (t2.ti_hund*l2);
cout<<endl<<"Time of Line:"<<l2-l1;

getch();
return(0);
}