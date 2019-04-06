#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void algo(int x1, int y1, int x2, int y2)
{
 int i,f,px;
      int dx,dy;
       dx=abs(x2-x1);
       dy=abs(y2-y1);
      
       int x,y,temp,s1,s2;
      
      x=x1;y=y1;
        
       if(x2-x1 > 0)  // coordinate setting
          s1=1;
        else
           s1=-1;
        if(y2-y1 > 0)
           s2=1;
         else
           s2=-1;

           if(dy > dx) // m >1 exchange x and y
               {
                  swap(dx,dy);
                  f=1;
                } 
             else
                 f=0; // m <= 1
 
              cout<<dx<<" "<<dy<<endl;
                px=2*dy-dx;
               
               cout<<px<<endl;
               outtextxy(x1,y1,"(x1,y1)");
               outtextxy(x2,y2,"(x2,y2)");
             
              i=1;
              do {
                      putpixel(x,y,3);
                      delay(30);
                       if(px >=0)
                         {
                             if(f)
                               x+=s1;
                             else
                               y+=s2;
                           px=px-2*dx;
                           cout<<px<<" "<<x<<" "<<y<<endl;
                         }
                      if(f)// m >1
                       y=y+s2;
                      else
                       x=x+s1;
                     px=px+2*dy;
                     cout<<"new="<<px<<endl;
                     i++;
                  }while(i<=dx);
             //   getch();
            
           cout<<"done"<<endl;
}
int main()
{
    int gd=DETECT,gm;
     int x1,x2,y1,y2;
      
     
      // clrscr();
  
       cout<<"Enter the value of x1 y1: ";
       cin>>x1>>y1;
       cout<<"Enter the value of x2 y2: ";
       cin>>x2>>y2;
     
       initgraph(&gd,&gm,NULL);
     //  algo(x1,y1,x2,y2);
       algo(50,90,200,90);
       algo(50,90,50,200);
       algo(50,200,200,200);
       algo(200,200,200,90);
       algo(50,90,200,200);
       algo(50,200,200,90);
         closegraph();
      
   return 0;
}
                           
                                
          
              
             
