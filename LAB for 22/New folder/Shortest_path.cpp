#include<iostream>
#include<queue>
#include<vector>
#include<cstdio>
#include<fstream>
#define infinity 1000
using namespace std;
vector<int> edege[100],cost[100];
struct data{
int city,cost;
bool operator < (const data& d) const
{
    return cost>d.cost;
}
};
int dijkstra(int source ,int des)
{

    int d[100];
    for(int i=0;i<100;i++)
        d[i]=10000;
    data u,v;
    u.city=source;
    u.cost=0;
    d[source]=0;
    priority_queue<data>q;
    q.push(u);
    while(!q.empty())
    {
       // cout<<"ok";
        u=q.top();
        q.pop();
        int ucost=u.cost;

        for(int i=0;i<edege[u.city].size();i++)
        {
            v.cost=ucost + cost[u.city][i];
            v.city=edege[u.city][i];
            if (d[v.city]>v.cost)
            {
                d[v.city]= v.cost;
                q.push(v);
            }
        }
    }
    return d[des];
}
int main()
{
   ifstream in;
   in.open("graph.txt");
   int n;
   n=8;
   for(int i=0;i<n;i++)
   {
       int x,y, c;
      in>>x>>y>>c;
      edege[x].push_back(y);
      edege[y].push_back(x);
      cost[x].push_back(c);
      cost[y].push_back(c);
   }
   cout<<endl<<dijkstra(0,4);
}
