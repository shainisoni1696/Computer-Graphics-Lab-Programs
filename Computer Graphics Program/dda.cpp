#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
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
          putpixel(round(x),round(y),WHITE);
          x=x+xinc;
          y=y+yinc;
          delay(30);
      }
      
}
int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);
  int x1=100,y1=150,x2=300,y2=400;
   outtextxy(x1,y1,"(x1,y1)");
   outtextxy(x2,y2,"(x2,y2)");
  dda(x1,y1,x2,y2);
  closegraph();
  return 0;
}

