#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,NULL);
   float x1=200,y1=200,x2=300,y2=200,x3=300,y3=300,x4=200,y4=300;
   float x=50,y=50;
  float xx1=200+x,yy1=200+y,xx2=300+x,yy2=200+y,xx3=300+x,yy3=300+y,xx4=200+x,yy4=300+y;
  
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
  
   /* x=x1,y=y1;
    float angle=45;
    angle=angle*3.14/180.0;
    
    float xn1=x+(x1-x)*cos(angle)-(y1-y)*sin(angle);
    float yn1=y+(x1-x)*sin(angle)+(y1-y)*sin(angle);
    float xn2=x+(x2-x)*cos(angle)-(y2-y)*sin(angle);
    float yn2=y+(x2-x)*sin(angle)+(y2-y)*sin(angle);
    float xn3=x+(x3-x)*cos(angle)-(y3-y)*sin(angle);
    float yn3=y+(x3-x)*sin(angle)+(y3-y)*sin(angle);
    float xn4=x+(x4-x)*cos(angle)-(y4-y)*sin(angle);
    float yn4=y+(x4-x)*sin(angle)+(y4-y)*sin(angle);

    float xxn1=x+(xx1-x)*cos(angle)-(yy1-y)*sin(angle);
    float yyn1=y+(xx1-x)*sin(angle)+(yy1-y)*sin(angle);
    float xxn2=x+(xx2-x)*cos(angle)-(yy2-y)*sin(angle);
    float yyn2=y+(xx2-x)*sin(angle)+(yy2-y)*sin(angle);
    float xxn3=x+(xx3-x)*cos(angle)-(yy3-y)*sin(angle);
    float yyn3=y+(xx3-x)*sin(angle)+(yy3-y)*sin(angle);
    float xxn4=x+(xx4-x)*cos(angle)-(yy4-y)*sin(angle);
    float yyn4=y+(xx4-x)*sin(angle)+(yy4-y)*sin(angle);
     
        line(xn1,yn1,xn2,yn2);
	line(xn2,yn2,xn3,yn3);
	line(xn3,yn3,xn4,yn4);
	line(xn4,yn4,xn1,yn1);
	
	line(xxn1,yyn1,xxn2,yyn2);
	line(xxn2,yyn2,xxn3,yyn3);
	line(xxn3,yyn3,xxn4,yyn4);
	line(xxn4,yyn4,xxn1,yyn1);
	
	line(xn1,yn1,xxn1,yyn1);
	line(xn2,yn2,xxn2,yyn2);
	line(xn3,yn3,xxn3,yyn3);
	line(xn4,yn4,xxn4,yyn4);
	 
	delay(1000);
       cleardevice()*/
    
  cout<<"Rotation about y axis"<<endl;
    
        
    x=x2,y=y2;
    float angle=45;
    angle=angle*3.14/180.0;
    
    float xn1=x+(x1-x)*cos(angle)-(y1-y)*sin(angle);
    float yn1=y+(x1-x)*sin(angle)+(y1-y)*cos(angle);
    float xn2=x+(x2-x)*cos(angle)-(y2-y)*sin(angle);
    float yn2=y+(x2-x)*sin(angle)+(y2-y)*cos(angle);
    float xn3=x+(x3-x)*cos(angle)-(y3-y)*sin(angle);
    float yn3=y+(x3-x)*sin(angle)+(y3-y)*cos(angle);
    float xn4=x+(x4-x)*cos(angle)-(y4-y)*sin(angle);
    float yn4=y+(x4-x)*sin(angle)+(y4-y)*cos(angle);

    float xxn1=x+(xx1-x)*cos(angle)-(yy1-y)*sin(angle);
    float yyn1=y+(xx1-x)*sin(angle)+(yy1-y)*cos(angle);
    float xxn2=x+(xx2-x)*cos(angle)-(yy2-y)*sin(angle);
    float yyn2=y+(xx2-x)*sin(angle)+(yy2-y)*cos(angle);
    float xxn3=x+(xx3-x)*cos(angle)-(yy3-y)*sin(angle);
    float yyn3=y+(xx3-x)*sin(angle)+(yy3-y)*cos(angle);
    float xxn4=x+(xx4-x)*cos(angle)-(yy4-y)*sin(angle);
    float yyn4=y+(xx4-x)*sin(angle)+(yy4-y)*cos(angle);
     
        line(xn1,yn1,xn2,yn2);
	line(xn2,yn2,xn3,yn3);
	line(xn3,yn3,xn4,yn4);
	line(xn4,yn4,xn1,yn1);
	
	line(xxn1,yyn1,xxn2,yyn2);
	line(xxn2,yyn2,xxn3,yyn3);
	line(xxn3,yyn3,xxn4,yyn4);
	line(xxn4,yyn4,xxn1,yyn1);
	
	line(xn1,yn1,xxn1,yyn1);
	line(xn2,yn2,xxn2,yyn2);
	line(xn3,yn3,xxn3,yyn3);
	line(xn4,yn4,xxn4,yyn4);
	 
	delay(1000);

 
return 0;
}
