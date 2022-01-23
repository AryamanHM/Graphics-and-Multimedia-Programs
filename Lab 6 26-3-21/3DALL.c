#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int maxx,maxy,midx,midy;
void axis()
{
 getch();
 cleardevice();
 line(midx,0,midx,maxy);
 line(0,midy,maxx,midy);
}
void main()
{
 int gd,gm,x,y,z,o,x1,x2,y1,y2;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm," ");
 setfillstyle(0,getmaxcolor());
 maxx=getmaxx();
 maxy=getmaxy();
 midx=maxx/2;
 midy=maxy/2;
 axis(); 
 bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
 printf("Enter Translation Factor");
 scanf("%d%d%d",&x,&y,&z);
 axis();
 printf("after translation");
 bar3d(midx+(x+50),midy-(y+100),midx+x+60,midy-(y+90),5,1);
 axis();
 bar3d(midx+50,midy+100,midx+60,midy-90,5,1);
 printf("Enter Scaling Factor");
 scanf("%d%d%d",&x,&y,&z);
 axis();
 printf("After Scaling");
 bar3d(midx+(x*50),midy-(y*100),midx+(x*60),midy-(y*90),5*z,1);
 axis();
 bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
 printf("Enter Rotating Angle");
 scanf("%d",&o);
 x1=50*cos(o*3.14/180)-100*sin(o*3.14/180);
 y1=50*cos(o*3.14/180)+100*sin(o*3.14/180);
 x2=60*sin(o*3.14/180)-90*cos(o*3.14/180);
 y2=60*sin(o*3.14/180)+90*cos(o*3.14/180);
 axis();
 printf("After Rotation about Z Axis");
 bar3d(midx+x1,midy-y1,midx+x2,midy-y2,5,1);
 axis(); 
 printf("After Rotation about X Axis");
 bar3d(midx+50,midy-x1,midx+60,midy-x2,5,1);
 axis();
 printf("After Rotation about Y Axis");
 bar3d(midx+x1,midy-100,midx+x2,midy-90,5,1);
 getch();
 closegraph();
} 
