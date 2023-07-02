#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream.h>
#include<math.h>
#include<dos.h>
///--------------------------------------------------------
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
///------------------------------------------------------
    void b(int x1, int y1, int x2, int y2,int color)
	{
	  int xinc=0,yinc=0,len,lenx=0,leny=0,dx,dy,i,x,y;
	  dx=x2-x1;
	  if(dx>0)
	  xinc=1;
	  else
	  if (dx<0)
	  xinc=-1;
	  dy=y2-y1;
	  if(dy>0)
	  yinc=1;
	  else
	  if(dy<0)
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
	  lenx=lenx+dx;
	  leny=leny+dy;
	  if(lenx>=len)
	  {
	  lenx=lenx-len;
	  x=x+xinc;
	  }
	  if(leny>=len)
	  {
	  leny=leny-len;
	  y=y+yinc;
	  }
	  putpixel(x,y,color);
	    }}
///--------------------------------------------------------
    main()
    {
      struct  time t1,t2;
      long int l1=1,l2=1;
    int gdriver = DETECT, gmode,x1,x2,y1,y2,color,n;
    initgraph(&gdriver, &gmode, "");
    cout<<"enter X1 :";
    cin>>x1;
    cout<<"enter Y1 :";
    cin>>y1;
    cout<<"enter X2 :";
    cin>>x2;
    cout<<"enter y2 :";
    cin>>y2;
    cout<<"enter color :";
    cin>>color;
    cout<<"enter num of line in *BRESLINE* and *DDALINE* and *LINE* for comper time :";
    cin>>n;
    gettime(&t1);
    for(int j=0;j<=n;j++){
     b(x1, y1, x2, y2,color); }
     gettime(&t2);
     l1= (t1.ti_hour*3600000*l1) +(t1.ti_min*6000*l1)+(t1.ti_sec*60*l1)+ (t1.ti_hund*l1);
     l2= (t2.ti_hour*3600000*l2) +(t2.ti_min*6000*l2)+(t2.ti_sec*60*l2)+ (t1.ti_hund*l2);
     cout<<"time of ** BRES ** algoritm for: "<<n<<"line: "<<l2-l1;
     l1=1;
     l2=1;
     ///--------------------------------------------------------------
     gettime(&t1);
      for(j=0;j<=n;j++){
     dda(x1, y1, x2, y2,color); }
     gettime(&t2);
     l1= (t1.ti_hour*3600000*l1) +(t1.ti_min*6000*l1)+(t1.ti_sec*60*l1)+ (t1.ti_hund*l1);
     l2= (t2.ti_hour*3600000*l2) +(t2.ti_min*6000*l2)+(t2.ti_sec*60*l2)+ (t1.ti_hund*l2);
      cout<<"\n";
      cout<<"time of ** DDA ** algoritm for: "<<n<<"line: "<<l2-l1;
     l1=1;
     l2=1;
     ///-----------------------------------------------------------
      gettime(&t1);
   for(int t=0;t<=n;t++){
     line(x1, y1, x2, y2); }
     gettime(&t2);
     l1= (t1.ti_hour*3600000*l1) +(t1.ti_min*6000*l1)+(t1.ti_sec*60*l1)+ (t1.ti_hund*l1);
     l2= (t2.ti_hour*3600000*l2) +(t2.ti_min*6000*l2)+(t2.ti_sec*60*l2)+ (t1.ti_hund*l2);
      cout<<"\n";
      cout<<"time of ** LINE ** algoritm for: "<<n<<"line: "<<l2-l1;
       getch();
	closegraph();
     cout<<"time of DDA algoritm for: "<<n<<"line: "<<l2-l1;
       return(0);
}
