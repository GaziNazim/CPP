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
#define Sort(v) sort(v.begin(),v.end())
#define sz size()
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define mp make_pair
#define ff first
#define ss second
#define ri(N) scanf("%d",&N)
#define rs(S) scanf("%s",&S)
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define piii pair<int,pair<int,int> >
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define fin freopen("input.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
#define pi acos(-1)
#define MAX 1100
///////////////////////********************////////////////////////


/*Code start from here*/
typedef pair<ll,pii > edge;
vector<edge> e;
vector<ll>ans;
int par[MAX];
void init(int n)
{
    rep(i,n+1)
    par[i]=i;
}
int f_set(int a)
{
    if(par[a]==a)
        return a;
    return par[a]=f_set(par[a]);
}
bool MST(int n)
{
    ans.clear();
    init(n);
    n--;
    int total=0;
    edge ed;
    Sort(e);
    int len=e.sz;
    rep(i,len)
    {
        ed=e[i];
        int a=f_set(ed.ss.ff);
        int b=f_set(ed.ss.ss);
        if(a!=b)
        {
            par[a]=b;
            total++;
            if(total==n)
            {
                for(i+=1; i<len; i++)
                {
                    ans.pb(e[i].ff);
                }
                break;
            }
        }
            else
            {
                ans.pb(ed.ff);
            }

        }
        if(ans.sz>0)
            return true;
        return false;
}
int main()
{
        fin;
        int n,m,a,b;
        ll cost;
        edge ed;
        while(1)
        {
            e.clear();
            ri(n);
            ri(m);
            if(n==0&&m==0)
                break;
            rep(i,m)
            {
                ri(a);
                ri(b);
                sc("%lld",&cost);
                ed= {cost,{a,b}};
                e.pb(ed);
            }
            m++;
            if(MST(n))
            {
                int len=ans.sz;
                pf("%lld",ans[0]);
                for(int i=1; i<len; i++)
                    pf(" %lld",ans[i]);
            }
            else
                pf("forest");
            pf("\n");
        }
        return 0;
    }
