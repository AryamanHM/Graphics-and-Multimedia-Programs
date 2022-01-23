
#include<stdio.h>
#include<graphics.h>
#include<conio.h> 
int main() 
{ 
    
    int gd = DETECT, gm; 
  
    int left = 150, top = 150; 
    int right = 450, bottom = 450; 
   
    initgraph(&gd, &gm, "c:\\turboc3\\bgi"); 
   
    rectangle(left, top, right, bottom); 
  
    getch(); 
  
    closegraph(); 
  
    return 0; 
} 
