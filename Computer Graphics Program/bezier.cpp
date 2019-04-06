#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void bez(int x[], int y[])
{
  double u;
  for(u=0.0;u<1.0;u+=0.0005)
   {
       double x1=pow(1-u,3)*x[0]+3*u*pow(1-u,2)*x[1]+3*pow(u,2)*(1-u)*x[2]+pow(u,3)*x[3];
       double y1=pow(1-u,3)*y[0]+3*u*pow(1-u,2)*y[1]+3*pow(u,2)*(1-u)*y[2]+pow(u,3)*y[3];
       putpixel(x1,y1,WHITE);
   }
   
    for(int i=0;i<4;i++)
      {
         putpixel(x[i],y[i],YELLOW);
         setcolor(RED);
         circle(x[i],y[i],10);
      }
    for(int i=0;i<3;i++)
      {
         setcolor(BLUE);
         line(x[i],y[i],x[i+1],y[i+1]);
      }
}
int main()
 
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);
  int x[]={50,100,140,200};
  int y[]={200,50,60,200};
  bez(x,y);
  delay(1600);
return 0;
}
