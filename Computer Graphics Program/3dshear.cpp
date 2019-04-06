#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
	int gd=DETECT,gm;
	int ch;
	cout<<"enter 1 to x shear , 2 to y shear and 3 for both\n";
	cin>>ch;
	float shx=0,shy=0;
	if(ch==1)
	{
		cout<<"enter shx value:";
		cin>>shx;
	}
	else if(ch==2)
	{
		cout<<"enter shy value:";
		cin>>shy;
	}
	else
	{
		cout<<"enter shx and shy value:";
		cin>>shx;
                cin>>shy;
	}
	float x1=100,y1=100,x2=200,y2=100,x3=200,y3=200,x4=100,y4=200;
	float x=50,y=50;
	float xx1=100+x,yy1=100+y,xx2=200+x,yy2=100+y,xx3=200+x,yy3=200+y,xx4=100+x,
			yy4=200+y;

	initgraph(&gd,&gm,NULL);
	
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x4,y4,x1,y1);
	
	line(xx1,yy1,xx2,yy2);
	line(xx2,yy2,xx3,yy3);
	line(xx3,yy3,xx4,yy4);
	line(xx4,yy4,xx1,yy1);
	
	line(x1,y1,xx1,yy1);
	line(x2,y2,xx2,yy2);
	line(x3,y3,xx3,yy3);
	line(x4,y4,xx4,yy4);
	
	delay(2000);
	cleardevice();
	
	line(x1+shx*y1,y1+shy*x1,x2+shx*y2,y2+shy*x2);
	line(x2+shx*y2,y2+shy*x2,x3+shx*y3,y3+shy*x3);
	line(x3+shx*y3,y3+shy*x3,x4+shx*y4,y4+shy*x4);
	line(x4+shx*y4,y4+shy*x4,x1+shx*y1,y1+shy*x1);
	
	line(xx1+shx*yy1,yy1+shy*xx1,xx2+shx*yy2,yy2+shy*xx2);
	line(xx2+shx*yy2,yy2+shy*xx2,xx3+shx*yy3,yy3+shy*xx3);
	line(xx3+shx*yy3,yy3+shy*xx3,xx4+shx*yy4,yy4+shy*xx4);
	line(xx4+shx*yy4,yy4+shy*xx4,xx1+shx*yy1,yy1+shy*xx1);
	
	line(x1+shx*y1,y1+shy*x1,xx1+shx*yy1,yy1+shy*xx1);
	line(x2+shx*y2,y2+shy*x2,xx2+shx*yy2,yy2+shy*xx2);
	line(x3+shx*y3,y3+shy*x3,xx3+shx*yy3,yy3+shy*xx3);
	line(x4+shx*y4,y4+shy*x4,xx4+shx*yy4,yy4+shy*xx4);
	delay(2000);
	getch();
	return 0;
	
}
