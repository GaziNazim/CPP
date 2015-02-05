#include<iostream>
#include<queue>
#include<fstream>
using namespace std;
vector<int>v[100],cost[100];
struct node
{
    int city,w;
    bool operator <(const node& b)const
{
    cout<<b.w;
    return w>b.w;
}
};
int dia(int s,int dis)
{
   int d[100];
   for(int i=0;i<100;i++)
    {
    d[i]=10000;
   }
  d[s]=0;
  priority_queue<node>q;
  node u,vv;
  u.city=s;
  u.w=0;
  q.push(u);
  while(q.size()!=0)
  {
      u=q.top();
      q.pop();
      for(int i=0;i<v[u.city].size();i++)
      {

          if(d[v[u.city][i]]>u.w+cost[u.city][i])
          {
              vv.city=v[u.city][i];
              vv.w=u.w+cost[u.city][i];
              q.push(vv);
          }
      }
  }


cout<<d[dis];
}
int main()
{
     ifstream in;
   in.open("input.txt");
   int n;
   n=11;
   for(int i=0;i<n;i++)
   {
       int x,y, c;
      in>>x>>y>>c;
    //  cout<<x<<"  "<<y<<"  "<<c<<endl;
      v[x].push_back(y);
      cost[x].push_back(c);



   }

dia(0,1);
}
