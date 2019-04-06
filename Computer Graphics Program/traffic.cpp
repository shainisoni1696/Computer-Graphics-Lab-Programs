#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void dda(int x1, int y1, int x2, int y2)
{
    float xinc,yinc,x,y;
    int dx,dy;
    dx=x2-x1;
    dy=y2-y1;
   
     int step;

     if(abs(dx) > abs(dy))
      step=abs(dx);
     else
       step=abs(dy);
  
       xinc=dx/(float)step;
       yinc=dy/(float)step;
      
     x=x1;
     y=y1;
    for(int k=0;k<step;k++)
     {
        putpixel(round(x),round(y),WHITE);
        delay(2);
        x+=xinc;
        y+=yinc;
      }

}
void plotpixel(int x, int y, int c1, int c2)
{
  putpixel(c1+x,c2+y,WHITE);
  putpixel(c1-x,c2+y,WHITE);
  putpixel(c1-x,c2-y,WHITE);
  putpixel(c1+x,c2-y,WHITE);
  putpixel(c1+y,c2+x,WHITE);
  putpixel(c1-y,c2+x,WHITE);
  putpixel(c1-y,c2-x,WHITE);
  putpixel(c1+y,c2-x,WHITE);
  delay(15);
}
void circlealgo(int c1, int c2, int r)
{
   int p=1-r;
   int x=0,y=r;
    while(x <=y)
     {
        plotpixel(x,y,c1,c2);
        if(p >=0)
            {
               y--;
               x++;
               p=p+2*(x-y)+1;
             }
          else
            {
              x++;
              p=p+2*x+1;
            }
        
       }
}
void floodfill4(int x, int y, int f, int o)
{
    if(getpixel(x,y)==o)
     {
        putpixel(x,y,f);
        floodfill4(x+1,y,f,o);
        floodfill4(x,y+1,f,o);
        floodfill4(x-1,y,f,o);
        floodfill4(x,y-1,f,o);
      }

}
int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);
  outtextxy(200,100,"(x1,y1)");
  outtextxy(300,100,"(x2,y2)");
  dda(200,100,300,100);
  dda(200,100,200,400);
  dda(200,400,300,400);
  dda(300,400,300,100);
  circlealgo(250,150,40);
  circlealgo(250,235,40);
  circlealgo(250,320,40);
  dda(250,400,270,400);
  dda(250,400,250,450);
  dda(250,450,270,450);
  dda(270,450,270,400);
  floodfill4(243,143,RED,getpixel(243,143));
   floodfill4(243,223,YELLOW,getpixel(243,223));
    floodfill4(243,303,GREEN,getpixel(243,303));
  
  return 0;
}
