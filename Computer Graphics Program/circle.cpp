#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void plotpoint(int x, int y, int c1, int c2)
{
     putpixel(c1+x,c2+y,RED);
     putpixel(c1+x,c2-y,RED);
     putpixel(c1-x,c2-y,RED);
     putpixel(c1-x,c2+y,RED);
     putpixel(c1+y,c2+x,RED);
     putpixel(c1+y,c2-x,RED);
     putpixel(c1-y,c2-x,RED);
     putpixel(c1-y,c2+x,RED);
   delay(30);
}
void circlealgo(int r, int c1, int c2)
{
  int pk=1-r;
  int x=0,y=r;
  while(x < y)
   {
     cout<<x<<" "<<y<<endl;
     plotpoint(x,y,c1,c2);
      x++;
      if(pk >=0)
        { 
           y--;
           pk+=2*(x-y)+1;
         }
       else
         {
           pk+=2*x+1;
         }
     }
}
void boundaryfill(int x, int y, int f, int b)
{
   int c=getpixel(x,y);
   if(c!=b && c!=f)
    {
       putpixel(x,y,f);
       boundaryfill(x+1,y,f,b);
       boundaryfill(x,y-1,f,b);
       boundaryfill(x-1,y,f,b);
       boundaryfill(x,y+1,f,b);
       delay(40);
    }

  }
void dda(int x1, int y1, int x2, int y2)
{
    int dx=x2-x1;
    int dy=y2-y1;
   
     float xinc,yinc,x,y;
     int step;
     if(abs(dx) > abs(dy))
      step=abs(dx);
     else
      step=abs(dy);
     
     xinc=dx/(float)step;
     yinc=dy/(float)step;  
     x=x1;
     y=y1;
    
 
     for(int i=0;i<step;i++)
      {
         cout<<x<<" "<<y<<endl;
          putpixel(round(x),round(y),WHITE);
          x=x+xinc;
          y=y+yinc;
          delay(30);
      }
      
}
void floodfill(int x, int y, int f, int o)
{
  if(getpixel(x,y)==o)
   {
     putpixel(x,y,f);
     delay(1);
     floodfill(x+1,y,f,o);
     floodfill(x,y+1,f,o);
     floodfill(x-1,y,f,o);
     floodfill(x,y-1,f,o);
     
    }
}
int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);
  int r=100;
   circlealgo(r,200,200);
   int b=RED;
   int fill=WHITE;
  // boundaryfill(350,200,fill,b);
   outtextxy(200,200,"(x1,y1)");
   //outtextxy(271,271,"(x2,y2)");
   dda(200,200,300,200); 
   dda(200,200,100,200);
   dda(200,200,200,100);
   dda(200,200,200,300);
    int f=CYAN;
    int o=getpixel(225,250);
    floodfill(222,117,YELLOW,o);
    floodfill(225,250,f,o);
     //floodfill(222,117,f,o);
      //floodfill(222,117,f,o);
   closegraph();
 return 0;
}



