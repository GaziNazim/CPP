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
#define MAX 3010
///////////////////////********************////////////////////////


/*Code start from here*/


struct node
{
    int w,c;
};

node box[MAX];
int n;
int dp[MAX][MAX];

int calc(int i,int c)
{
    if(dp[i][c]!=-1)
        return dp[i][c];

    if(i==n||c<0)
    {
        return 0;
    }

    if(box[i].w>c)
    {
        dp[i][c]=calc(i+1,c);
    }
    else
    {
        dp[i][c]=max(calc(i+1,c),1+calc(i+1,min(c-box[i].w,box[i].c)));
    }
    return dp[i][c];
}

int main()
{
    fin;
    while(1)
    {
        ri(n);
        if(n==0)
            break;
        for(int i=0;i<n;i++)
        {
            ri(box[i].w);
            ri(box[i].c);
        }
        mem(dp,-1);
        pf("%d\n",calc(0,4002));
    }
    return 0;
}
