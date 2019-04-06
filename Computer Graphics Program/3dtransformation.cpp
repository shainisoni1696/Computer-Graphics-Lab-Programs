#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int maxx,maxy,midx,midy;
void axis()
{
  cleardevice();
  line(midx,0,midx,maxy);
  line(0,midy,maxx,midy);
}
int main()
{
   int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    maxx=getmaxx();
    maxy=getmaxy();
    midx=maxx/2;
    midy=maxy/2;
    cout<<midx<<" "<<midy<<endl;
  outtextxy(100,100,"ORIGINAL OBJECT");
    line(midx,0,midx,maxy);
    line(0,midy,maxx,midy);
    bar3d(midx+60,midy-90,midx+100,midy-20,20,5);
    axis();
    delay(300);
  outtextxy(100,20,"TRANSLATION");
    cout<<"\n\n Enter the Translation vector:50,50 "<<endl;
    int x=65,y=70;
    bar3d(midx+60,midy-90,midx+100,midy-20,20,5);
    bar3d(midx+(x+60),midy-(y+90),midx+(x+100),midy-(y+20),20,5);
    delay(300);
    axis();
    
  outtextxy(100,20,"SCALING");
     cout<<"\n Enter the Scaling Factor: "<<endl;
      int z=2;
      x=2;y=2;
      bar3d(midx+60,midy-90,midx+100,midy-20,20,5);
      bar3d(midx+(x*60),midy-(y*90),midx+(x*100),midy-(y*20),20*z,5);
      delay(300);
      axis();
  /*outtextxy(100,20,"ROTATION");
     cout<<"\n Enter the Rotation angle: 100";
     double ang=100;
    int x1=100*cos(ang*3.14/180)-20*sin(ang*3.14/180);
  int y1=100*sin(ang*3.14/180)+20*cos(ang*3.14/180);
  int x2=60*cos(ang*3.14/180)-90*sin(ang*3.14/180);
  int y2=60*sin(ang*3.14/180)+90*cos(ang*3.14/180);
  axis();
  cout<<"\n After rotating about z-axis\n";
   cout<<midx+x1<<" "<<midy-y1<<" "<<midx+x2<<" "<<midy-y2<<endl;
   bar3d(midx+60,midy-90,midx+100,midy-20,20,5);
  bar3d(midx+x2,midy-y1,midx+x1,midy-y2,20,5);
  delay(1300);
  axis();
  cout<<"\n After rotating about x-axis\n";
   bar3d(midx+60,midy-90,midx+100,midy-20,20,5);
  bar3d(midx+60,midy-x1,midx+100,midy-x2,20,5);
  delay(1300);
  axis();
  cout<<"\n After rotating about y-axis\n";
    bar3d(midx+60,midy-90,midx+100,midy-20,20,5);
  bar3d(midx-x2,midy+90,midx-x1,midy+20,20,5);
  delay(1300);*/
return 0;
}

