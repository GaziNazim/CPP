
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define rep(i,n) for(__typeof(n) i=0;i<(n);i++)
#define REP(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define INF (1<<20)
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

int cost[110][110];
int main()
{
    //fin;
    int n,r,q,a,b,c,t=0;
    bool is=false;
    while(sc("%d %d %d",&n,&r,&q))
    {

        if(n==0&&r==0&&q==0)
            break;
            rep(i,n+5)
        rep(j,n+5)
        {
            if(i==j)
                cost[i][j]=0;
            else
             cost[i][j]=INF;
        }
        if(is)
            pf("\n");
        else
            is=true;

        rep(i,r)
        {
            ri(a);ri(b);
            ri(c);
            cost[a][b]=c;
            cost[b][a]=c;
        }


        REP(i,1,n) REP(j,1,n) REP(k,1,n)
        cost[j][k]=min(cost[j][k],max(cost[j][i],cost[i][k]));
        t++;
        pf("Case #%d\n",t);
        rep(i,q)
        {
            ri(a);ri(b);
          if(cost[a][b]==INF)
                pf("no path\n");
          else
            pf("%d\n",cost[a][b]);
        }

    }

    return 0;
}
