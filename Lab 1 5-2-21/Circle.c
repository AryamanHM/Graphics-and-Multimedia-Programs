
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main() 
{  
    int gd = DETECT, gm; 
  initgraph(&gd, &gm, "c:\\turboc3\\bgi"); 
  circle(250, 200, 50); 
  getch(); 
   closegraph(); 
  return 0; 
} 
