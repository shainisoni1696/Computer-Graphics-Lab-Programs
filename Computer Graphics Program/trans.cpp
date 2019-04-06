#include<iostream>
#include<graphics.h>
#include<bits/stdc++.h>
#define PI 3.14
using namespace std;
void draw(vector<pair<int,int> >&v, int color)
{
        for(int i=0;i<4;i++)
                {
                    if(i==3)
                      {
                         setcolor(color);
                         line(v[i].first,v[i].second,v[0].first,v[0].second);
                         continue;
                       }
                        setcolor(color);
                      line(v[i].first,v[i].second,v[i+1].first,v[i+1].second);
                }
}
void transform(vector<pair<int,int> >&v)
{
          int sx= 2;
          int sy= 2;         
                 for(int i=0;i<4;i++)
                    {
                         v[i].first=v[i].first * sx;
                         v[i].second = v[i].second * sy;
                    }
                    
          draw(v,6); //scaling
            delay(600);
            
   int tx=150,ty=50;
  for(int i=0;i<4;i++)
     {
         v[i].first=v[i].first+tx;
         v[i].second=v[i].second+ty;
     }
  
    draw(v,9); //translation
      delay(500);  
       
         
      double angle,rad,val1,val2;
        angle=25;
        rad=(PI/180)*angle;
        val1=sin(rad);
        val2=cos(rad);
        
        vector<vector<double> >m(2,vector<double>(2));
        m[0][0]=val2;
        m[0][1]=-val1;
        m[1][0]=val1;
        m[1][1]=val2;
   
        for(int i=0;i<4;i++)
          {
                     v[i].first=m[0][0]*v[i].first +m[0][1]*v[i].second;
                    v[i].second= m[1][0]*v[i].first +m[1][1]*v[i].second;
           }
                           
      draw(v,4); // roatation
      delay(600);
}
int main()
{
  int gd=DETECT, gm;
  initgraph(&gd,&gm,NULL);
   vector<pair<int,int> >v(4);
    
      v[0]=make_pair(50,50);
      v[1]=make_pair(100,50);
      v[2]=make_pair(100,200);
       v[3]=make_pair(50,200);
             
        draw(v,7);  
        delay(100);      
      transform(v);
      return 0;
      }
      
