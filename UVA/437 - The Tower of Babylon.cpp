
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
#define MAX 40
///////////////////////********************////////////////////////


/*Code start from here*/
int dp[MAX][4];
struct data
{
    int x,y,z;
};
int LCS(int b,int w, int h)
{
    for(int i=0;i<n;i++)
    {
        if(dp[i][1]!=-1)
        {
            if(d[i].x)
        }
    }
}

int main()
{
    data d[MAX];
    int mh,n,l=0;
    while(ri(n)==1)
    {
        mim(dp,-1);
        mh=0;
        if(!n)
            break;
        for(int i=0;i<n;i++)
        {
            ri(d[i].x);
            ri(d[i].y);
            ri(d[i].z);
        }

        for(int i=0;i<n;i++)
        {
            int ans1=LCS(d[i].x,d[i].y,d[i].z);
            int ans1=LCS(d[i].x,d[i].y,d[i].z);
            int ans1=LCS(d[i].x,d[i].y,d[i].z);
            mh=max(mh,max(ans1,max(ans2,ans3)));
        }
    }
    return 0;
}
