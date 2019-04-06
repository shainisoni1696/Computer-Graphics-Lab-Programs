#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
 int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
 int x1=50,y1=100,x2=250,y2=100,x3=250,y3=200,x4=50,y4=200;
   
    for(int i=0;i<600;i+=20)
     {
        setcolor(RED);
        line(x1+i,y1,x2+i,y2);
        line(x2+i,y2,x3+i,y3);
        line(x3+i,y3,x4+i,y4);
        line(x4+i,y4,x1+i,y1);
        setcolor(WHITE);
        circle(80+i,200,20);
        circle(200+i,200,20);
         floodfill(80+i,200,WHITE);
         floodfill(200+i,200,WHITE);
        delay(300);
        cleardevice();
      }
return 0;
}


