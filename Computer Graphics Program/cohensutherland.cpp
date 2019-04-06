#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
#define left 1
#define right 2
#define bottom 4
#define top 8
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
void cohens(int rec[],double x1,double y1, double x2, double y2)
{
   int code1=getcode(rec,x1,y1);
   int code2=getcode(rec,x2,y2);
   bool accept=false;
   
   while(true)
     {
         if(code1==0 && code2==0)
            {
               accept=true;
                break;
             }
         else
             {
                 if(code1 & code2)
                      break;
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
                           
                           if(code_out == code1)
                              {
                                     x1=x;
                                      y1=y;
                                     code1=getcode(rec,x1,y1);
                               }
                            else
                               {
                                    x2=x;
                                     y2=y;
                                     code2=getcode(rec,x2,y2);
                                }
                          } //end else
                  }
            }//end of while
               if(accept)
                  {
                      line(x1,y1,x2,y2);
                  }                  
               delay(300);
}
int main()
{
  int gd=DETECT,gm;
     initgraph(&gd,&gm,NULL);

   int rec[]={200,200,400,350};
   rectangle(200,200,400,350);
   line(100,250,100,340);
   line(250,300,270,400);
   line(240,240,240,315);
   line(300,100,450,300);
    delay(600);
    cleardevice();
   rectangle(200,200,400,350);
   cohens(rec,100,250,100,340);
   cohens(rec,250,300,270,400);
   cohens(rec,240,240,240,315);
   cohens(rec,300,100,450,300);
    
     delay(500);
return 0;
}

