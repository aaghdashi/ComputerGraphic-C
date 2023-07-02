
#include <math.h>
#include <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void lb(void);
void lt(void);
void rb(void);
void rt(void);
void z(void);
int xc,yc,xmax,ymax,xmin,ymin,rd,td,r=30;

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int radius = 100;
   int userfont;

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
   setcolor(getmaxcolor());

   /* draw the circle */
   //circle(midx, midy, radius);
   xmax=640-r;
   ymax=480-r;
   xmin=r;
   ymin=r;
   xc=rand()%590+r;
   yc=rand()%440+r;
   lb();
   while(!kbhit())
   {

   if(xc==xmax && yc<ymax)
		if(rd==1 && td==0)lb();
		else lt();


   if(xc==xmin && yc<ymax)
		if(rd==0 && td==1)rt();
		else rb();



   if(yc==ymax && xc<xmax)
		if(rd==0 && td==0)lt();
		else rt();

   if(yc==ymin && xc<xmax)
		if(rd==1 && td==1)rb();
		else lb();
   }
   xc=midx;
   yc=midy;
   r=radius;

   int r2,r4;
   r4=r/6;
   r2=r/2-r4;
   setcolor(14);
   circle(xc,yc,r);
   circle(xc-r2,yc-r2,r4);
   circle(xc+r2,yc-r2,r4);
   arc(xc,yc,225,315,r2);

   /* install a user defined font file */
   userfont = installuserfont("trip.CHR");
   /* select the user font */
   settextstyle(userfont, HORIZ_DIR, 4);
   setcolor(3);
   /* output some text */
   outtextxy(midx-125, midy+110, "Abdoreza Rahimi");
   delay(100);
   setcolor(0);
   circle(xc+r2,yc-r2,r4);
   sound(230);
   delay(50);
   nosound();
   delay(25);

   setcolor(14);
   ellipse(xc+r2,yc-r2,0,360,r4,r4/2);
   delay(25);
   sound(330);
   delay(50);
   nosound();
   delay(25);

   setcolor(0);
   ellipse(xc+r2,yc-r2,0,360,r4,r4/2);
   delay(25);
   sound(430);
   delay(50);
   nosound();
   delay(25);

   setcolor(14);
   ellipse(xc+r2,yc-r2,0,360,r4,r4/4);
   delay(25);
   sound(530);
   delay(50);
   nosound();
   delay(25);

   setcolor(0);
   ellipse(xc+r2,yc-r2,0,360,r4,r4/4);
   sound(630);
   delay(50);
   nosound();
   delay(25);

   setcolor(14);
   ellipse(xc+r2,yc-r2,0,360,r4,r4/2);
   delay(25);
   sound(730);
   delay(50);
   nosound();
   delay(25);

   setcolor(0);
   ellipse(xc+r2,yc-r2,0,360,r4,r4/2);
   delay(25);
   sound(830);
   delay(50);
   nosound();
   delay(25);

   setcolor(14);
   circle(xc+r2,yc-r2,r4);


   sleep(1);

   /* clean up */
   getch();
   closegraph();
   return 0;
}
void lb(void)
	{
	rd=0;
	td=0;
	z();
	while(xc>xmin && yc<ymax)
		{
		int r2,r4;

		r4=r/6;
		r2=r/2-r4;
		setcolor(14);
		circle(xc,yc,r);
		circle(xc-r2,yc-r2,r4);
		circle(xc+r2,yc-r2,r4);
		arc(xc,yc,225,315,r2);
		delay(5);
		setcolor(0);
		circle(xc,yc,r);
		circle(xc-r2,yc-r2,r4);
		circle(xc+r2,yc-r2,r4);
		arc(xc,yc,225,315,r2);
		xc--;yc++;


		}
		//xc++;yc--;
	}
void lt(void)
	{
	rd=0;
	td=1;
	z();
	while(xc>xmin && yc>ymin)
		{
		int r2,r4;

		r4=r/6;
		r2=r/2-r4;
		setcolor(14);
		circle(xc,yc,r);
		circle(xc-r2,yc-r2,r4);
		circle(xc+r2,yc-r2,r4);
		arc(xc,yc,225,315,r2);
		delay(5);
		setcolor(0);
		circle(xc,yc,r);
		circle(xc-r2,yc-r2,r4);
		circle(xc+r2,yc-r2,r4);
		arc(xc,yc,225,315,r2);



		xc--;yc--;


		}
		//xc++;yc++;
	}

void rb(void)
	{
	rd=1;
	td=0;
	z();
	while(xc<xmax && yc<ymax)
		{
		int r2,r4;

		r4=r/6;
		r2=r/2-r4;
		setcolor(14);
		circle(xc,yc,r);
		circle(xc-r2,yc-r2,r4);
		circle(xc+r2,yc-r2,r4);
		arc(xc,yc,225,315,r2);
		delay(5);
		setcolor(0);
		circle(xc,yc,r);
		circle(xc-r2,yc-r2,r4);
		circle(xc+r2,yc-r2,r4);
		arc(xc,yc,225,315,r2);


		xc++;yc++;


		}
		//xc--;yc--;
	}

void rt(void)
	{
	rd=1;
	td=1;
	z();
	while(xc<xmax && yc>ymin)
		{
		int r2,r4;

		r4=r/6;
		r2=r/2-r4;
		setcolor(14);
		circle(xc,yc,r);
		circle(xc-r2,yc-r2,r4);
		circle(xc+r2,yc-r2,r4);
		arc(xc,yc,225,315,r2);
		delay(5);
		setcolor(0);
		circle(xc,yc,r);
		circle(xc-r2,yc-r2,r4);
		circle(xc+r2,yc-r2,r4);
		arc(xc,yc,225,315,r2);



		xc++;yc--;


		}
		//xc--;yc++;
	}


void z(void)
	{
	int r2,r4;

	r4=r/6;
	r2=r/2-r4;
	setcolor(4);
	circle(xc,yc,r);
	circle(xc-r2,yc-r2,r4);
	circle(xc+r2,yc-r2,r4);
	circle(xc-r2,yc-r2,r4/2);
	circle(xc+r2,yc-r2,r4/2);
	floodfill(xc-r2,yc-r2,4);
	floodfill(xc+r2,yc-r2,4);

	arc(xc,yc+r2,45,135,r2);
	sound(330);
	delay(50);
	nosound();
	delay(25);
	sound(230);
	delay(50);
	nosound();
	delay(25);
	sound(330);
	delay(50);
	nosound();

	setcolor(0);
	circle(xc,yc,r);
	circle(xc-r2,yc-r2,r4);
	circle(xc+r2,yc-r2,r4);
	circle(xc-r2,yc-r2,r4/2);
	circle(xc+r2,yc-r2,r4/2);
	floodfill(xc-r2,yc-r2,0);
	floodfill(xc+r2,yc-r2,0);

	arc(xc,yc+r2,45,135,r2);


	}