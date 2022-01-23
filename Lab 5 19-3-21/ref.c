#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void refx(int x1,int x2,int x3,int y1,int y2,int y3){
line(320,0,320,430);
line(0,240,640,240);
x1=(320-x1)+320;
x2=(320-x2)+320;
x3=(320-x3)+320;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);

}

void refy(int x1,int x2,int x3,int y1,int y2,int y3){
line(320,0,320,430);
line(0,240,640,240);
y1=(240-y1)+240;
y2=(240-y2)+240;
y3=(240-y3)+240;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
}
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x3,y3;
clrscr();
initgraph(&gd,&gm,"c://turboc3//bgi");
line(320,0,320,430);
line(0,240,640,240);
x1=150;y1=100;
x2=220;y2=220;
x3=220;y3=110;
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
refx(x1,x2,x3,y1,y2,y3);
getch();
refy(x1,x2,x3,y1,y2,y3);
getch();
closegraph();
}
