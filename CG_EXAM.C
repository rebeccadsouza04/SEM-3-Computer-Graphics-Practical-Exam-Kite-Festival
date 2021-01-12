#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(){
   int gdriver = DETECT, gmode;
   int t = 1, x= 300, y=100, z = 350, i=150, j=250, l=50,m=390,n=50, r=50, c=0, co=0, cu=0;

   initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

   while(1){

   rectangle(1,1,getmaxx()-1,getmaxy()-1);
   setcolor(MAGENTA);
   outtextxy(290,10,"KITE FESTIVAL");
   setcolor(WHITE);


   if(t==1){
   setfillstyle(LINE_FILL,MAGENTA);
   line(50,50,30,90);
   line(50,50,90,80);
   line(30,90,70,130);
   line(90,80,70,130);
   line(50,50,70,130);
   line(30,90,90,80);
   floodfill(40,80,WHITE);
   setfillstyle(HATCH_FILL,BLUE);
   floodfill(60,70,WHITE);
   setfillstyle(WIDE_DOT_FILL,GREEN);
   floodfill(35,91,WHITE);
   setfillstyle(CLOSE_DOT_FILL,CYAN);
   floodfill(71,90,WHITE);

   setfillstyle(SOLID_FILL,YELLOW);
   pieslice(70,130,270,285,50);

   setcolor(RED);
   line(70,130,230,290);
   setcolor(WHITE);

   setfillstyle(SOLID_FILL,BROWN);
   rectangle(200,300,230,305);
   floodfill(210,302,WHITE);
   setfillstyle(BKSLASH_FILL,RED);
   rectangle(230,290,270,315);
   floodfill(240,300,WHITE);
   setfillstyle(SOLID_FILL,BROWN);
   rectangle(270,300,300,305);
   floodfill(280,302,WHITE);

   t = 0;
   }
   else{
   setfillstyle(LINE_FILL,MAGENTA);
   line(60,60,40,100);
   line(60,60,100,90);
   line(40,100,80,140);
   line(100,90,80,140);
   line(60,60,80,140);
   line(40,100,100,90);
   floodfill(59,70,WHITE);
   setfillstyle(HATCH_FILL,BLUE);
   floodfill(80,89,WHITE);
   setfillstyle(WIDE_DOT_FILL,GREEN);
   floodfill(70,103,WHITE);
   setfillstyle(CLOSE_DOT_FILL,CYAN);
   floodfill(90,103,WHITE);

   setfillstyle(SOLID_FILL,YELLOW);

   pieslice(80,140,280,295,50);

   setcolor(RED);
   line(80,140,230,290);
   setcolor(WHITE);

   setfillstyle(SOLID_FILL,BROWN);
   rectangle(200,295,230,300);
   floodfill(210,299,WHITE);
   setfillstyle(BKSLASH_FILL,RED);
   rectangle(230,285,270,310);
   floodfill(240,300,WHITE);
   setfillstyle(SOLID_FILL,BROWN);
   rectangle(270,295,300,300);
   floodfill(280,299,WHITE);

   t = 1;
   }
   if(co<9 && cu!=11){
   setfillstyle(SOLID_FILL,CYAN);
   line(x,y,z,i);
   line(x,y,j,i);
   line(j,i,x,j);
   line(z,i,x,j);
   line(x,j,400,400);
   floodfill(x+10,y+30,WHITE);
   x-=10;
   y-=10;
   z-=10;
   i-=10;
   j-=10;
   co++;
   }
   if(co>=9 && cu!=11){
    setfillstyle(SOLID_FILL,CYAN);
   line(x,y,z,i);
   line(x,y,j,i);
   line(j,i,x,j);
   line(z,i,x,j);
   line(x,j,400,400);
   floodfill(x+10,y+30,WHITE);
   x-=10;
  // y-=10;
   z-=10;
 //  i-=10;
   j-=10;

   cu++;
   }



   while(c!=4){
   setfillstyle(SOLID_FILL,WHITE);
		arc(n,m,45,135,r);
		arc(l+50,m,45,135,r);
		arc(n+100,m,45,135,r);
		arc(n,m,135,225,r);
		arc(n+50,m,135+90,225+90,r);
		arc(n,m,135+90,225+90,r);
		arc(n+100,m,135+90,225+90,r);
		arc(n+100,m,315,45,r);
		floodfill(n+1,m+1,WHITE);

		n+=5;
		c++;
		n=50;
		}
		c=0;

		setfillstyle(SOLID_FILL,YELLOW);
		circle(500,100,50);
		floodfill(500,100,WHITE);
		setcolor(YELLOW);
		outtextxy(500,30,"|");
		outtextxy(560,100,"-");
		outtextxy(430,100,"-");
		outtextxy(500,160,"|");
		setcolor(WHITE);



   delay(1000);
    cleardevice();


   if(kbhit())
{
exit(0);
}
    }
   getch();
	closegraph();
	return 0;
    }
