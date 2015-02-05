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
#define MAX 410
///////////////////////********************////////////////////////


/*Code start from here*/
int par[MAX];
vector<piii>e;
int t_cost;
int f_set(int a)
{
    if(par[a]==a)
        return a;
    else return par[a]=f_set(par[a]);
}
void init(int n)
{
    REP(i,0,n+1)
    par[i]=i;
}
bool mst(int n)
{
    int total=0;
    t_cost=0;
    init(n);
    n--;
    Sort(e);
    piii ed;
    int len=e.sz;
    rep(i,len)
    {
        //cout<<"Bal koro";
        ed=e[i];
        int a=f_set(ed.ss.ff);
        int b=f_set(ed.ss.ss);
        if(a!=b)
        {
            //cout<<"Bal koro";
            par[a]=b;
            t_cost+=ed.ff;
            total++;
            if(total==n)
                return true;
        }
    }
    if(total==n)
    {
         return true;
    }
     else
     {
          return false;
     }

}

int main()
{
    //fin;
    int n,r,a,b,c,t;
    char s1[15],s2[15];
    piii ed;
    while(1)
    {
        e.clear();
                t=1;
        msi n_ind;
        ri(n);ri(r);
        if(n==0&&r==0)
            break;

        rep(i,n)
        {
            sc("%s",&s1);
             if(n_ind[s1]==0)
            {
                n_ind[s1]=t;
                t++;
            }

        }
        rep(i,r)
        {
            sc("%s %s",&s1,&s2);
            ri(c);
           // cout<<c;
            ed={c,{n_ind[s1],n_ind[s2]}};
            e.pb(ed);
          //cout<<endl<<ed.ss.ff<<"  "<<ed.ss.ss<<"  "<<ed.ff<<endl;
        }
        cin>>s1;
        if(mst(n))
            cout<<t_cost<<endl;
        else
            cout<<"Impossible\n";
    }
    return 0;
}
