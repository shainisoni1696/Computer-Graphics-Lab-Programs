#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int xwmin,ywmin,xwmax,ywmax;
void (int x1,int y1,int x2,int y2)
{
	float xx1,yy1,xx2,yy2;
	float dx=x2-x1;
	float dy=y2-y1;
	float t1=0,t2=1,p[4],q[4];
	
	p[0]=-dx,p[1]=dx,p[2]=-dy,p[3]=dy;
	q[0]=x1-xwmin;
	q[1]=xwmax-x1;
	q[2]=y1-ywmin;
	q[3]=ywmax-y1;
	
	for(int i=0;i<4;i++)
	{
		if(p[i]<0)
		{
			t1=max(t1,q[i]/p[i]);
		}
		 if(p[i]>0)
		{
			t2=min(t2,q[i]/p[i]);
		}
	}  
	if(t1!=0)
	{
		xx1=x1+t1*dx;
		yy1=y1+t1*dy;
	}
	else
	{
		xx1=x1;
		yy1=y1;
	}
	if(t2!=1)
	{
		xx2=x1+t2*dx;
		yy2=y1+t2*dy;
	}
	else
	{
		xx2=x2;
		yy2=y2;
	}
	cout<<xx1<<" "<<yy1<<" "<<xx2<<" "<<yy2;
	rectangle(xwmin,ywmin,xwmax,ywmax);
	line(xx1,yy1,xx2,yy2);
	//delay(1000);
}

int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,NULL);
  xmin=150;
  ymin=100;
  xmax=250;
  ymax=200;
  rectangle(xwmin,ywmin,xwmax,ywmax);
  
  line(100,140,180,110);
  line(180,110,280,180);
  line(280,180,120,180);
  line(150,155,120,180);
  line(100,140,150,155);
 
  delay(2000);
  cleardevice();
  clip(100,140,180,110);
  clip(180,110,280,180);
  clip(280,180,120,180);
  clip(150,155,120,180);
  clip(100,140,150,155);
  getch();
 
return 0;
}
