
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
#define MAX 150
///////////////////////********************////////////////////////


/*Code start from here*/


int tower1[MAX],tower2[MAX];
int len1,len2;
int dp[MAX][MAX];
int LCS(int i,int j)
{
    if(i==len1||j==len2)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(tower1[i]==tower2[j])
    {
        return dp[i][j]=1+LCS(i+1,j+1);
    }
    return dp[i][j]=max(LCS(i+1,j),LCS(i,j+1));
}

int main()
{
    //fin;
    int t=1;
    while(1)
    {
        ri(len1);
        ri(len2);
        if(len1==0&&len2==0)
            break;
            for(int i=0;i<len1;i++)
                ri(tower1[i]);
            for(int i=0;i<len2;i++)
                ri(tower2[i]);
            mem(dp,-1);
        pf("Twin Towers #%d\n",t);
        pf("Number of Tiles : %d\n\n",LCS(0,0));
        t++;
    }
    return 0;
}
