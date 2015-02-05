#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int F1[100]F2[100],L1[100],L2[100],a1[100],a2[100],t1[100],t2[100],e1,e2;
int line(int n)
{
       for(int i=1;i<=n;i++)
       {
           if(i==1)
           {
               F1=e1+a1[1];
               F2=e2+a2[1];
           }

       }
}
int main()
{
   ifstream in;
   int x,y,u,v;
   int i=1;
   while(in>>x>>y>>u>>v)
   {
       a1[i]=x;
       t1[i]=y;
       t2[i]=u;
       a2[i]=v;

   }
   line(6);
   return 0;
}
