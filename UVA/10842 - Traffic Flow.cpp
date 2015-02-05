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

int par[MAX];
void init(int n)
{
    rep(i,n)
     par[i]=i;
}
int f_set(int a)
{
    if(par[a]==a)
        return a;
    return par[a]=f_set(par[a]);
}



int main()
{
    int t,n,r,a,b,c;
    ri(t);
    piii ed;
    REP(i,1,t)
    {
       priority_queue<piii>e;
        ri(n);ri(r);
        rep(i,r)
        {
            ri(a);ri(b);ri(c);
            ed={c,{a,b}};
            e.push(ed);
        }
       init(n);
     n--;
    int len =e.sz;
    int t_e=0,t_c=0;
    rep(i,len)
    {
        ed=e.top();
        e.pop();
        a=f_set(ed.ss.ff);
        b=f_set(ed.ss.ss);

        if(a!=b)
        {

            par[a]=b;
            t_e++;
            if(t_e==n)
                break;
        }

    }
    pf("Case #%d: %d\n",i,ed.ff);
    }
    return 0;
}
