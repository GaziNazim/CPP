
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define rep(i,n) for(__typeof(n) i=0;i<(n);i++)
#define REP(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define INF (1<<31)
#define pb push_back
#define sz size()
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define fin freopen("input.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
#define pi acos(-1)
///////////////////////********************////////////////////////


/*Code start from here*/

struct edge
{
    int a,b,cost;
    bool operator <(const edge& e)const
    {
        return cost<e.cost;
    }
};
int par[60],n;
vector<edge>e;
int find_p(int a)
{
    if(par[a]==a)
        return a;
     par[a]= find_p(par[a]);
     return par[a];

}
int mst(int sum)
{
    sort(e.begin(),e.end());
    for(int i=0;i<=n;i++)
        par[i]=i;
        edge u;
    int a,b;
    int len=e.sz;
    int total=0;
    for(int i=0;i<len;i++)
    {
        u=e[i];
        a=find_p(u.a);
        b=find_p(u.b);
        if(a!=b)
        {
            par[a]=b;
            sum-=u.cost;
            total++;
            if(total==n-1)
                break;
        }
    }
    if(total==n-1)
        return sum;
    else
        return -1;
}


int main()
{
    int t;
    sc("%d",&t);
    int sum,cost;
    edge u;
    for(int c=1;c<=t;c++)
    {
        e.clear();
        sum=0;
        sc("%d",&n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sc("%d",&cost);
                if(i==j)
                {
                    sum+=cost;
                }
                else if(cost>0)
                {
                    u.a=i;
                    u.b=j;
                    u.cost=cost;
                    e.pb(u);
                    sum+=cost;
                }
            }
        }
        pf("Case %d: %d\n",c,mst(sum));
    }
    return 0;
}
