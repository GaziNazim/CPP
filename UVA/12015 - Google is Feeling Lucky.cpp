
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define rep(i,n) for(__typeof(n) i=0;i<(n);i++)
#define REP(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define INF (1<<30)
#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define sz size()
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define NL printf("\n")
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
#define MAX 15
///////////////////////********************////////////////////////


/*Code start from here*/

struct key
{
    char s[105];
    int r;
};
key url[MAX];
bool comp(key a,key b)
{
    return a.r>b.r;
}

int main()
{
   // fin;
    int n;
    ri(n);
    for(int l=1;l<=n;l++)
    {
        for(int i=0;i<10;i++)
        {
           sc("%s",&url[i].s);
           ri(url[i].r);
        }
         sort(url,url+10,comp);
    pf("Case #%d:\n",l);
    int maxi=url[0].r;
    for(int i=0;i<10;i++)
        if(maxi==url[i].r)
    pf("%s\n",url[i].s);
    else
    break;

    }

    return 0;
}
