#include<bits/stdc++.h>
//#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
int xc,yc,r,x=0,y=0;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
setcolor(2);
line(320,100,280,260);
circle(280,280,20);
for(x=250,y=230;x<330,y<310;x=x+10,y=y+10)
{
line(320,100,x,y);
circle(x,y,20);
sleep(1);
cleardevice();
}
for(x=330,y=290;x>390,y>230;x=x+10,y=y-10)
{
line(320,100,x,y);
circle(x,y,20);
sleep(1);
cleardevice();
}
//return
for(x=390,y=230;x>320,y<300;x=x-10,y=y+10)
{
line(320,100,x,y);
circle(x,y,20);
sleep(1);
cleardevice();
}

for(x=310,y=290;x>250,y>230;x=x-10,y=y-10)
{
line(320,100,x,y);
circle(x,y,20);
sleep(1);
cleardevice();
}


getch();
}
