
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
#define ull unsigned long long
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


// Disjoint set functions////

int par[MAX];

int f_set(int x)
{
    if(par[x]==x) return x;
    par[x]=f_set(par[x]);
    return par[x];
}
bool isSameSet(int x,int y)
{
    int a=f_set(x);
    int b=f_set(y);
    if(a==b) return true;
    else return false;
}
bool u_set(int x,int y)
{
    if(isSameSet(x,y)) return false;
    par[f_set(x)]=f_set(y);
    return true;
}


////////////////////////
ll  fib[100];
ll c_fib(int n)
{

  if(fib[n]==-1)
        fib[n]=c_fib(n-1)+c_fib(n-2);
       return fib[n];
}
int main()
{

     mem(fib,-1);
     fib[0]=0;
     fib[1]=1;
     fib[2]=1;
     c_fib(50);
     int n;
     while(1)
     {
         ri(n);
         if(n==-1)
            break;
         pf("%lld %lld\n",(fib[n+2]-1),(fib[n+3]-1));
     }
    return 0;
}
