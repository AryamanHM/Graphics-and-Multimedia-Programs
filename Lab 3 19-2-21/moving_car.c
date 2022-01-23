#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(WHITE);
for(i=150;i<400;i++)
{
clrscr();
line(i-150,250,i-100,200);
line(i,200,i+50,250);
line(i,200,i-100,200);
rectangle(i+150,300,i-150,250);
circle(i-100,325,25);
circle(i+100,325,25);
delay(100);
}
getch();
closegraph();
}


