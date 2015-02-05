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
#define MAX 110
///////////////////////********************////////////////////////


/*Code start from here*/

typedef pair<double,pii > edge;
int par[MAX];
vector<edge>e;
int f_set(int a)
{
    if(par[a]==a)
        return a;
    else return par[a]=f_set(par[a]);
}
void init(int n)
{
    rep(i,n+5)
    par[i]=i;
}
double MST(int n)
{
    init(n);
    n--;
    int total=0;
    Sort(e);
    int len=e.sz;
    edge ed;
    double cost=0;
    rep(i,len)
    {
        ed=e[i];
        int a=f_set(ed.ss.ff);
        int b=f_set(ed.ss.ss);
        if(a!=b)
        {
            //cout<<"cost  "<<cost<<endl;
            par[a]=b;
            cost+=ed.ff;
            total++;
            if(total==n)
                break;
        }
    }
    return cost;
}


double x[MAX],y[MAX];
int main()
{
    int t,n;
    ri(t);
    while(t--)
    {
        e.clear();
        ri(n);
        rep(i,n)
        {
            sc("%lf %lf",&x[i],&y[i]);
        }
        double len;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                len=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
                e.pb(mp(len,mp(i+1,j+1)));
               // cout<<e[0].ff<<"  "<<e[0].ss.ff<<endl;
            }
        }
        len=MST(n);
        //cout<<len;
        pf("%.2lf\n",len);
        if(t)
            pf("\n");
    }
    return 0;
}
