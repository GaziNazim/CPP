#include<bits/stdc++.h>
using namespace std;
struct edge
{
    int u,v,cost;
    bool operator <(const edge& p) const
    {
        return cost<p.cost;
    }
};
int pr[1000005];

int mst(int,vector<edge>vk);
int findset(int);
int main()
{
    int g=0;
    vector<edge>vv,vm,vk;
    int u,v,n,cost,oc,nc,c1,mc,k,m,f=1;
    edge e;
    while(scanf("%d",&n)==1)
    {
        g++;
        vk.clear();
        vv.clear();
        vm.clear();
        oc=0;
        for(int i=0;i<n-1;i++)
        {
            cin>>e.u>>e.v>>e.cost;
            oc+=cost;
            vv.push_back(e);
        }
        cin>>k;
        for(int i=0;i<k;i++)
        {
            cin>>e.u>>e.v>>e.cost;
            vk.push_back(e);
        }
        cin>>m;
        for(int i=0;i<m;i++)
        {
            cin>>e.u>>e.v>>e.cost;
            vm.push_back(e);
        }
        c1=mst(n,vv);
        mc=mst(n,vm);
        if(c1<mc)
        {
            oc=c1;
            for(int i=0;i<vv.size();i++)
        {

            vk.push_back(vv[i]);
        }
        }
        else
        {
            oc=mc;
            for(int i=0;i<vm.size();i++)
        {

            vk.push_back(vm[i]);
        }
        }
   nc=mst(n,vk);
cout<<oc<<endl<<nc<<endl;
    }
    return 0;
}
int findset(int r)
{
    if(pr[r]==r)
        return r;
    else
        findset(pr[r]);
}
int mst(int n,vector<edge>vk)
{
    int tcost=0,node=0;
    for(int i=0;i<=n;i++)
    {
        pr[i]=i;
    }
    sort(vk.begin(),vk.end());
    for(int i=0;i<vk.size();i++)
    {
        int u=findset(vk[i].u);
        int v=findset(vk[i].v);
        if(u!=v)
        {
            tcost+=vk[i].cost;
            pr[vk[i].u]=v;
            node++;
        }
        if(node==n-1)
            return tcost;
    }
    return tcost;
}

