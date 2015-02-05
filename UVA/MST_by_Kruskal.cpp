#include<bits/stdc++.h>
using namespace std;
struct edge
{
    int u,v;
    double cost;
    bool operator < (const edge& a)const
    {
        return cost<a.cost;
    }
};
vector<edge>ed;
int pr[100];
int findset(int r)
{
    if(pr[r]==r)
        return r;
    else findset(pr[r]);
}
int mst(int n)
{
    for(int i=0;i<=n;i++)
        pr[i]=i;
        int total=0,coun=0;
    sort(ed.begin(),ed.end());
    for(int i=0;i<ed.size();i++)
    {
        int u=findset(ed[i].u);
        int v=findset(ed[i].v);
        cout<<u<<"   "<<v<<endl;
        if(u!=v)
        {
            coun++;
            pr[ed[i].u]=ed[i].v;
            total=total+ed[i].cost;
            if(coun==n-1)
                return total;

        }
    }
}
int main()
{
     int n,x,y,c;
    ifstream in;
    cin>>n;
    in.open("input.txt");
    edge e;
    for(int i=0;i<n;i++)
    {
        in>>x>>y>>c;
        e.u=x;e.v=y;e.cost=c;
        ed.push_back(e);
    }
    cout<<mst(n);
    return 0;
}
