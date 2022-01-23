#include stdio.h
#include graphics.h
#include math.h
void scale();
//these are left,top,right,bottom parameters for bar3d function
int maxx,maxy,midx,midy;
int main()
{
            int ch;
            int gd=DETECT,gm;
            detectgraph(&gd,&gm);
            initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
            scale();
return 0;
}
//function for scaling of a 3d object
void scale()
{
            int x,y,z,o,x1,x2,y1,y2;
            midx=200;
            midy=200;
            bar3d(midx+50,midy-100,midx+100,midy-50,20,0);
            printf("before scaling\n");
            printf("Enter scaling factors\n");
            scanf("%d %d %d", &x,&y,&z);
            printf("After scaling\n");
            bar3d(midx+(x*50),midy-(y*100),midx+(x*100),midy-(y*50),20*z,1);
}
