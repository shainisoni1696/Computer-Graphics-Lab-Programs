#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
#define left 1
#define right 2
#define bottom 4
#define top 8
vector<double>v;
int getcode(int rec[],double x1, double y1)
{
   int code=0;
    if(x1 < rec[0])
      code|=left;
    if(x1 > rec[2])
      code|=right;
    if(y1 < rec[1])
       code|=top;
    if(y1 > rec[3])
       code|=bottom;
 return code;
}
void sutherpoly(int rec[], double poly[], int n)
{
  for(int i=0;i<=n-4;i=i+2)
     {
        int code1=getcode(rec,poly[i],poly[i+1]);
        int code2=getcode(rec,poly[i+2],poly[i+3]);
       double x1=poly[i],y1=poly[i+1],x2=poly[i+2],y2=poly[i+3];
       cout<<i<<" "<<code1<<" "<<code2<<endl;
       if(code1==0 && code2==0)  // both are inside
           {       
                   v.push_back(x1);
                   v.push_back(y1);
                   v.push_back(x2); //save 2nd point
                   v.push_back(y2);
           }
        else
          {
             if(code1 & code2) // both are outside
                  continue;
             else
               {
                           
		     int code_out;
                      double x,y;
		     if(code1!=0)
		          code_out=code1;
		     else
		          code_out=code2;
                    
                        if(code_out & top) //rec[1]=y_min
                             {
                                 x=x1 + (x2-x1)*(rec[1]-y1)/(y2-y1);
                                 y=rec[1];
                              }
                          else if(code_out & bottom) //rec[3]=y_max
                             {
                                 x=x1 + (x2-x1)*(rec[3]-y1)/(y2-y1);
                                 y=rec[3];   
                             }
                           else if(code_out & left)
                             {
                                x=rec[0];
                                y=y1+(y2-y1)*(rec[0]-x1)/(x2-x1);
                              }
                            else if(code_out & right)
                             {
                                x=rec[2];
                                y=y1+(y2-y1)*(rec[2]-x1)/(x2-x1);
                              } 
                         
                       if(code_out==code1)
                           {
                                  v.push_back(x);
                                  v.push_back(y);
                                  v.push_back(x2);
                                  v.push_back(y2);
                                  x1=x;
                                  y1=y;
                           }
                       else
                          {
                                  v.push_back(x);
                                  v.push_back(y);
                                  v.push_back(x1);
                                  v.push_back(y1);
                                x2=x;
                                y2=y;
                          }

                      } // end of 1st else
                 }//end of 2nd else
      }//end of loop
}
int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,NULL);
   int rec[]={150,50,500,400};
   rectangle(150,50,500,400);
   delay(600);
   double poly[]={100,300,200,250,50,100,200,60,520,300,100,300};
   int poly2[]={100,300,200,250,50,100,200,60,520,300,100,300};
   int n=12;
    drawpoly(6,poly2);
    delay(600);
   cleardevice();
  sutherpoly(rec,poly,n);
   rectangle(150,50,500,400);
   setcolor(BLUE);
   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i=i+4)
       {
            cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<" "<<v[i+3]<<endl;
             line(v[i],v[i+1],v[i+2],v[i+3]);
       }
     delay(600);
return 0;
}
