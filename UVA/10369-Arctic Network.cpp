#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
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
vector<edge>e;
int T,s,p,P[510][2],pr[510];
void make_set()
{
    for(int i=0;i<=p;i++)
        pr[i]=i;
}
int find_set(int r)
{
    if(r==pr[r])
        return r;
    else
        return find_set(pr[r]);
}
double mst()
{
    double d=0;
    make_set();
    int ee=0;
    sort(e.begin(),e.end());
    for(int i=0;p>s;i++)
    {
        int pu=find_set(e[i].u);
        int pv=find_set(e[i].v);
        if(pu!=pv)
        {
            if(d<e[i].cost)
            d=e[i].cost;
            pr[e[i].u]=pv;
            ee++;

        }
        p--;
    }
    return d;
}
int main()
{
    double d;
    edge ee;
    cin>>T;
    for(int t=1;t<=T;t++ )
    {
        e.clear();
        cin>>s>>p;
        for(int i=0;i<p;i++)
        {
            cin>>P[i][0]>>P[i][1];
        }
        for(int i=0;i<p-1;i++)
        {
            for(int j=i+1;j<p;j++)
            {
                d=sqrt((P[i][0]-P[j][0])*(P[i][0]-P[j][0])+(P[i][1]-P[j][1])*(P[i][1]-P[j][1]));
                ee.u=i;
                ee.v=j;
                ee.cost=d;
                e.push_back(ee);
            }
        }
        d=mst();
        printf("%.2lf\n",d);

    }
    return 0;
}
