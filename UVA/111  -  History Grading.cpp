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
#define MAX 25
///////////////////////********************////////////////////////


/*Code start from here*/
int dp[MAX][MAX];
int a[MAX],b[MAX];
 int n;
int lcs(int i,int j)
{
    if(i==n||n==j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(a[i]==b[j])
        return dp[i][j]=(1+lcs(i+1,j+1));
    else
        return dp[i][j]=max(lcs(i,j+1),lcs(i+1,j));
}

int main()
{

    ri(n);
    rep(i,n)
    ri(a[i]);
    while(ri(b[0])!=EOF)
    {
        mem(dp,-1);
        REP(i,1,n-1)
        ri(b[i]);
        cout<<lcs(0,0)<<endl;
    }
    return 0;
}
