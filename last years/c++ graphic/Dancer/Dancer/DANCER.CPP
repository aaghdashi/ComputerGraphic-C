#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

#define TIME_TIME	200

void 	pic(int, int);
void 	figur(int, int);

void main(void){
	int driver=DETECT,mode, i;
	initgraph(&driver,&mode,"");
	setcolor(WHITE);
	setbkcolor(BLACK);

	line(1,1,280,1);
	line(1,1,1,281);
	line(639,1,360,1);
	line(639,1,639,281);
	arc(1,1,270,0,280);
	arc(639,1,180,270, 280);
	arc(320,1,200,340,43);
	arc(639,260,177,270,120);
	arc(1,260,270,3,120);
	setfillstyle(BKSLASH_FILL, RED);
	floodfill(2 , 2 , WHITE);
	floodfill(321 , 2 , WHITE);
	floodfill(637 , 2 , WHITE);
	floodfill(637 , 285 , WHITE);
	floodfill(2 , 285 , WHITE);
	arc(320, 1,235,305,430);
	line(215, 180, 425, 180);
	setfillstyle(SOLID_FILL, BROWN);
	floodfill(210 , 210 , WHITE);
	setcolor(DARKGRAY);
	arc(30, 480,0,180,20);
	arc(110, 480,0,180,20);
	arc(200,480,0,180,20);
	arc(320,480,0,180,20);
	arc(395,480,0,180,20);
	arc(460,480,0,180,20);
	arc(540,480,0,180,20);
	arc(610,480,0,180,20);
	line(1, 479, 639, 479);
	setfillstyle(SOLID_FILL, DARKGRAY);
	floodfill(30  , 476 , DARKGRAY);
	floodfill(112 , 476 , DARKGRAY);
	floodfill(202 , 476 , DARKGRAY);
	floodfill(322 , 476 , DARKGRAY);
	floodfill(392 , 476 , DARKGRAY);
	floodfill(462 , 476 , DARKGRAY);
	floodfill(542 , 476 , DARKGRAY);
	floodfill(612 , 476 , DARKGRAY);
	setcolor(WHITE);
	figur(3, 4);
	figur(1, 5);
	figur(2, 5);
	figur(3, 4);
	figur(1, 5);
	figur(3, 4);
	clearviewport();
	closegraph();
	return;
}
void figur(int number, int repeat){
	int i;
	int xc=320,yc=240,r=50,r2,r4;
	int userfont;
	r2=r/2;r4=r/4;

	switch(number){
		case 1:
			for(i=0;i<repeat;i++){
				/*---------------------------- FRAME 1*/
				pic(1, 1);
				delay(TIME_TIME);
				pic(1, 0);
				/*---------------------------- FRAME 2*/
				pic(2, 1);
				delay(TIME_TIME);
				pic(2, 0);
				/*---------------------------- FRAME 3*/
				pic(3, 1);
				delay(TIME_TIME);
				pic(3, 0);
				/*---------------------------- FRAME 4*/
				pic(4, 1);
				delay(TIME_TIME);
				pic(4, 0);
			}
			break;
		case 2:
			for(i=0;i<repeat;i++){
				/*---------------------------- FRAME 5*/
				pic(5, 1);
				delay(TIME_TIME);
				pic(5, 0);
				/*---------------------------- FRAME 5*/
				pic(6, 1);
				delay(TIME_TIME);
				pic(6, 0);
			}
			break;
		case 3:
			for(i=0;i<repeat;i++){
				/*---------------------------- FRAME 7*/
				pic(7, 1);
				delay(TIME_TIME);
				pic(7, 0);
				/*---------------------------- FRAME 8*/
				pic(8, 1);
				delay(TIME_TIME);
				pic(8, 0);
			}
			break;
	}
	/************/

   /* install a user defined font file */
   userfont = installuserfont("trip.CHR");
   /* select the user font */
   settextstyle(userfont, HORIZ_DIR, 4);
   setcolor(1);
   /* output some text */
   outtextxy(xc-125, yc+110, "Abdoreza Rahimi");




}
void pic(int number, int color){
	int cc=RED;

	if(color==0){
		setcolor(BROWN);
		cc=BROWN;
	}
	switch(number){
/*---------------------------- FRAME 1*/
		case 1:
			line(290,195,342,195);
			setfillstyle(SOLID_FILL , cc);
			bar(300,185,332,195);
			rectangle(300,185,332,195);
			arc(316,195,180,0,20);
			putpixel(304,200, WHITE);
			putpixel(328,200, WHITE);
			putpixel(304,202, WHITE);
			putpixel(328,202, WHITE);
			putpixel(304,204, WHITE);
			putpixel(328,204, WHITE);
			arc(316,200,240,300,10);
			line(316,215,316,275);
			//--------------------this part is for right hand
			line(316,275,285,295);
			line(285,295,300,315);
			line(300,315,290,315);
			line(316,275,350,280);
			line(350,280,365,299);
			line(365,299,375,297);
			//--------------------part right hand
			line(316,235,352,255);
			line(352,255,362,235);
			line(362,235,375,235);
			//--------------------part left hand
			line(316,235,290,255);
			line(290,255,270,230);
			line(270,230,255,230);

			break;
/*---------------------------- FRAME 2*/
		case 2:
			line(290,195,342,195);
			setfillstyle(SOLID_FILL , cc);
			bar(300,185,332,195);
			rectangle(300,185,332,195);
			arc(316,195,180,0,20);
			putpixel(304,200, WHITE);
			putpixel(328,200, WHITE);
			putpixel(304,202, WHITE);
			putpixel(328,202, WHITE);
			putpixel(304,204, WHITE);
			putpixel(328,204, WHITE);
			arc(316,200,240,300,10);
			line(316,215,316,275);
			//--------------------part body andfoot
			line(316,275,285,295);
			line(285,295,270,304);
			line(270,304,260,295);
			line(316,275,350,280);
			line(350,280,345,295);
			line(345,295,353,297);
			//--------------------part right hand
			line(316,235,352,225);
			line(352,225,362,245);
			line(362,245,375,245);
			//--------------------part left hand
			line(316,235,290,255);
			line(290,255,270,230);
			line(270,230,255,230);
			break;
/*---------------------------- FRAME 3*/
		case 3:
			line(290,195,342,195);
			setfillstyle(SOLID_FILL , cc);
			bar(300,185,332,195);
			rectangle(300,185,332,195);
			arc(316,195,180,0,20);
			putpixel(304,200, WHITE);
			putpixel(328,200, WHITE);
			putpixel(304,202, WHITE);
			putpixel(328,202, WHITE);
			putpixel(304,204, WHITE);
			putpixel(328,204, WHITE);
			arc(316,200,240,300,10);
			line(316,215,316,275);
			//--------------------this part is for right hand
			line(316,275,285,295);
			line(285,295,300,315);
			line(300,315,290,315);
			line(316,275,350,280);
			line(350,280,365,299);
			line(365,299,375,297);
			//--------------------part right hand
			line(316,235,352,225);
			line(352,225,362,245);
			line(362,245,375,245);
			//--------------------part left hand
			line(316,235,290,255);
			line(290,255,270,230);
			line(270,230,255,230);
			break;
/*---------------------------- FRAME 4*/
		case 4:
			line(290,195,342,195);
			setfillstyle(SOLID_FILL , cc);
			bar(300,185,332,195);
			rectangle(300,185,332,195);
			arc(316,195,180,0,20);
			putpixel(304,200, WHITE);
			putpixel(328,200, WHITE);
			putpixel(304,202, WHITE);
			putpixel(328,202, WHITE);
			putpixel(304,204, WHITE);
			putpixel(328,204, WHITE);
			arc(316,200,240,300,10);
			line(316,215,316,275);
			//--------------------this part is for right hand
			line(316,275,285,295);
			line(285,295,300,315);
			line(300,315,290,315);
			line(316,275,350,280);
			line(350,280,345,299);
			line(345,299,355,297);
			//--------------------part right hand
			line(316,235,352,225);
			line(352,225,362,245);
			line(362,245,375,245);
			//--------------------part left hand
			line(316,235,290,215);
			line(290,215,270,230);
			line(270,230,255,230);
			break;
/*---------------------------- FRAME 5*/
		case 5:
			line(290,195,342,195);
			setfillstyle(SOLID_FILL , cc);
			bar(300,185,332,195);
			rectangle(300,185,332,195);
			arc(316,195,180,0,20);
			putpixel(304,200, WHITE);
			putpixel(328,200, WHITE);
			putpixel(304,202, WHITE);
			putpixel(328,202, WHITE);
			putpixel(304,204, WHITE);
			putpixel(328,204, WHITE);
			arc(316,200,240,300,10);
			line(316,215,316,275);
			//--------------------this part is for right hand
			line(316,275,285,295);
			line(285,295,300,315);
			line(300,315,290,315);
			line(316,275,350,280);
			line(350,280,365,299);
			line(365,299,375,297);
			//--------------------part right hand
			line(316,235,352,255);
			line(352,255,362,235);
			line(362,235,375,235);
			//--------------------part left hand
			line(316,235,345,265);
			line(345,265,355,235);
			line(355,235,365,245);
			break;
/*---------------------------- FRAME 6*/
		case 6:
			line(290,195,342,195);
			setfillstyle(SOLID_FILL , cc);
			bar(300,185,332,195);
			rectangle(300,185,332,195);
			arc(316,195,180,0,20);
			putpixel(304,200, WHITE);
			putpixel(328,200, WHITE);
			putpixel(304,202, WHITE);
			putpixel(328,202, WHITE);
			putpixel(304,204, WHITE);
			putpixel(328,204, WHITE);
			arc(316,200,240,300,10);
			line(316,215,316,275);
			//--------------------part body andfoot
			line(316,275,285,295);
			line(285,295,270,304);
			line(270,304,260,295);
			line(316,275,350,280);
			line(350,280,345,295);
			line(345,295,353,297);
			//--------------------part right hand
			line(316,235,275,255);
			line(275,255,270,230);
			line(270,230,255,230);
			//--------------------part left hand
			line(316,235,290,255);
			line(290,255,270,220);
			line(270,220,255,235);
			break;
/*---------------------------- FRAME 7*/
		case 7:
			line(290,195,342,195);
			setfillstyle(SOLID_FILL , cc);
			bar(300,185,332,195);
			rectangle(300,185,332,195);
			arc(316,195,180,0,20);
			putpixel(304,200, WHITE);
			putpixel(328,200, WHITE);
			putpixel(304,202, WHITE);
			putpixel(328,202, WHITE);
			putpixel(304,204, WHITE);
			putpixel(328,204, WHITE);
			arc(316,200,240,300,10);
			line(316,215,316,275);
			//--------------------part body andfoot
			line(316,275,285,295);
			line(285,295,270,304);
			line(270,304,260,295);
			line(316,275,350,280);
			line(350,280,345,295);
			line(345,295,353,297);
			//--------------------part right hand
			line(316,235,275,255);
			line(275,255,270,230);
			line(270,230,255,230);
			//--------------------part left hand
			line(316,235,290,255);
			line(290,255,270,220);
			line(270,220,255,235);
			break;
/*---------------------------- FRAME 8*/
		case 8:
			line(290,200,342,200);
			setfillstyle(SOLID_FILL , cc);
			bar(300,190,332,200);
			rectangle(300,190,332,200);
			arc(316,171,230,310,40);
			putpixel(304,200, WHITE);
			putpixel(328,200, WHITE);
			putpixel(304,202, WHITE);
			putpixel(328,202, WHITE);
			putpixel(304,204, WHITE);
			putpixel(328,204, WHITE);
			arc(316,198,240,300,10);
			line(316,212,316,275);
			//--------------------part body andfoot
			line(316,275,285,295);
			line(285,295,270,304);
			line(270,304,260,295);
			line(316,275,350,280);
			line(350,280,345,295);
			line(345,295,353,297);
			//--------------------part right hand
			line(316,235,275,255);
			line(275,255,270,230);
			line(270,230,255,230);
			//--------------------part left hand
			line(316,235,290,255);
			line(290,255,270,220);
			line(270,220,255,235);
			break;
	}
	setcolor(WHITE);
	return ;
}
/*void	clearpic(void){
	clearviewport();

	size=imagesize(240,185,375,320);
	buf=(void *)malloc(size);
	getimage(240,185,375,320,buf);
	clearviewport();
	delay(150);
	putimage(240,185,buf,COPY_PUT);
	return ;
}*/