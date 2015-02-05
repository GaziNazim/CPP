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
#define MAX 800
///////////////////////********************////////////////////////


/*Code start from here*/

typedef pair <double,pii > edge;
vector<edge>e;
int par[MAX];
void init(int n)
{
    REP(i,0,n)
    par[i]=i;
}
int f_set(int a)
{
    if(par[a]==a)
        return a;
    par[a]=f_set(par[a]);
    return par[a];
}
double MST(int n)
{
    n--;
    Sort(e);
    int len=e.sz;
    double cost=0;
    int total=0;
    edge ed;
    int a,b;
    rep(i,len)
    {
        ed=e[i];
        a=f_set(ed.ss.ff);
        b=f_set(ed.ss.ss);
        //cout<<ed.ss.ff<<"  "<<ed.ss.ss<<endl;
        if(a!=b)
        {
            //cout<<"Total   :"<<total<<endl;
            cost+=ed.ff;
            total++;
            par[a]=b;
            if(total==n)
                return cost;
        }
    }
    return cost;
}

int main()
{
    double x[MAX],y[MAX],len;
    int n,m,a,b;
    edge ed;
    while(ri(n)!=EOF)
    {
        e.clear();
        REP(i,1,n)
        {
            sc("%lf %lf",&x[i],&y[i]);
        }
        double cost;
        REP(i,1,n-1)
        REP(j,i+1,n)
        {
            cost=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            ed={cost,{i,j}};
            e.pb(ed);
            //cout<<ed.ss.ff<<"  "<<ed.ss.ss<<"  "<<ed.ff<<endl;
        }
        init(n);
        ri(m);
        rep(i,m)
        {
            ri(a);ri(b);
            a=f_set(a);
            b=f_set(b);
            if(a!=b)
            {
                par[a]=b;
                n--;
            }
        }
        //cout<<n;
        len=MST(n);
        pf("%.2lf\n",len);


    }
    return 0;
}
