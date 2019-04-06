#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
 int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
int cx=200,cy=100;

  for(int i=0;i<200;i+=10)
    {
	setcolor(WHITE);
       ellipse(cx+i,cy,0,360,150,50);
       circle(240+i,80,20);
       setcolor(RED);
       floodfill(243+i,83,15);
       setcolor(YELLOW);
       floodfill(cx+i,cy,15);
       setcolor(WHITE);
       int arr[]={50+i,100,20+i,150,20+i,50,50+i,100};
       drawpoly(4,arr);
       setcolor(BLUE);
       floodfill(21+i,100,15);
       setcolor(WHITE);
       delay(500);
       cleardevice();
    }
return 0;
}
