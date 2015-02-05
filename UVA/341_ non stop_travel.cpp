#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(__typeof(b) i=a;i<=b;i++)
#define inf 100000
#define pb push_back
vector< vector < int > > node,cost;
int delay[100000];
int par[100000];
struct state
{
    int a,cost;
    bool operator <( const state& u ) const
    {
        return cost>u.cost;
    }
};
int bfs(int n,int s,int d)
{
    rep(i,1,n) delay[i]=inf;
    state u,v;
    u.a=s;
    u.cost=0;
    priority_queue<state>q;
    q.push(u);
    par[s]=s;
    int ucost,unode,vcost,vnode;
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        ucost=u.cost;
        unode=u.a;

        rep(i,0,node[unode].size()-1)
        {
            cout<<"fjdj";
            vnode=node[unode][i];
            vcost=ucost+cost[unode][i];
            cout<<vcost<<"  "<<delay[vnode];
            if(vcost<=delay[vnode])
            {
                cout<<"fjdj";
                v.a=vnode;
                v.cost=vcost;
                q.push(v);
                delay[vnode]=vcost;
                par[vnode]=unode;
            }
        }

    }

}
int main()
{
    int inters,y,c,street,s,d;
    while(scanf("%d",&inters)==1)
    {
       if(!inters)
        break;
        node.clear();
        cost.clear();
        node.resize(10);
        cost.resize(10);
       rep(i,1,inters)
       {
           cin>>street;
           rep(i,1,street)
           {
                scanf("%d %d",&y,&c);
                node[i].pb(y);
                cost[i].pb(c);
           }

       }
       cin>>s>>d;
       cout<<bfs(inters,s,d);
    }
    return 0;
}

