#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 int  main()
   {
    int gdriver = DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");
 setfillstyle(SOLID_FILL,RED);
 circle(200,200,50);
 floodfill(202,202,15);
 getch();
  }
