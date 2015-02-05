#include<iostream>
#include<queue>
#include<vector>
#include<fstream>
#define infinity 100000;
using namespace std;
vector <int> edge[100],cost[100];
struct data
{
    int city,cost;


    bool operator <(data b) const{
        cout<<city<<cost<<"   "<<b.city<<b.cost<<endl;
    return cost<b.cost;
    }
};
int bfs(int src,int dis)
{
    int d[100];
    for(int i=0;i<100;i++)
        d[i]=infinity;
    data u,v;
    d[src]=0;
    u.city=src;
    u.cost=0;
    priority_queue<data>q;
    q.push(u);
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        cout<<u.cost<<endl;
        int ucost=u.cost;
        for(int i=0;i<edge[u.city].size();i++)
        {
            v.city=edge[u.city][i];
            v.cost=ucost+cost[u.city][i];
            if(d[v.city]>v.cost)
            {
                d[v.city]=v.cost;
                //cout<<v.cost;
                q.push(v);
            }
        }
    }
    return d[dis];
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
      //cout<<x<<"  "<<y<<"  "<<c<<endl;
      edge[x].push_back(y);
      edge[y].push_back(x);
      cost[x].push_back(c);
      cost[y].push_back(c);
   }
   cout<<endl<<bfs(0,4);
}
