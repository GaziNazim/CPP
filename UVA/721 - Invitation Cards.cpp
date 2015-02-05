#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(__typeof(n) i=0;i<(n);i++)
#define inf 1000000000
#define rep2(i,a,b)  for(__typeof(b) i=(a);i<=(b);i++)
#define pb push_back
int total;
int cgo[1000000],cret[1000000];   // cgo  going cost and cret for return cost.
vector < vector < int > > node,cost,rnode,rcost;
struct state
{
    int a,cost;
     bool operator < (const state& a)const
    {
        return cost>a.cost;
    }

};
void intialize_all(int p)
{
       node.clear();
       cost.clear();
       rnode.clear();
       rcost.clear();
       node.resize(p);
       rnode.resize(p);
       cost.resize(p);
       rcost.resize(p);
}
int bfs(int n)
{
    rep(i,n+1) cgo[i]=inf;
    priority_queue<state> q;
    cgo[1]=0;
    state u,v;
    u.a=1;
    u.cost=0;
    q.push(u);
    int vnode,ucost,vcost,tcost=0;
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        rep(i,node[u.a].size())
        {
           vnode=node[u.a][i];
           ucost=u.cost;
           vcost=ucost+cost[u.a][i];
           if(cgo[vnode]>=vcost)
           {
               cgo[vnode]=vcost;
               v.a=vnode;
               v.cost=vcost;
               q.push(v);
           }
        }
    }
    rep2(i,2,n) {tcost  = tcost+ cgo[i];}
   return tcost;

}
int rbfs(int n)
{
    rep(i,n+1) cret[i]=inf;
    priority_queue<state> q;
    cret[1]=0;
    state u,v;
    u.a=1;
    u.cost=0;
    q.push(u);
    int vnode,ucost,vcost,tcost=0;
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        rep(i,rnode[u.a].size())
        {
           vnode=rnode[u.a][i];
           ucost=u.cost;
           vcost=ucost+rcost[u.a][i];
           if(cret[vnode]>=vcost)
           {
               cret[vnode]=vcost;
               v.a=vnode;
               v.cost=vcost;
               q.push(v);
           }
        }
    }
    rep2(i,2,n) {tcost  = tcost+ cret[i];}
   return tcost;

}

int main()
{
   int t,p,q,x,y,c;
   cin>>t;
   while(t--)
   {
       total=0;
       cin>>p>>q;
       intialize_all(p+1);
       rep(i,q)
       {
          cin>>x>>y>>c;
          node[x].pb(y);
          rnode[y].pb(x);
          cost[x].pb(c);
          rcost[y].pb(c);
       }
       total =total + bfs(p);
        total  = total + rbfs(p);
      cout<< total<<endl;

   }
    return 0;
}
