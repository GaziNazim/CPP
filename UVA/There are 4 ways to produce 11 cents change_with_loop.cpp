#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#define MAX 100000000
#define ll long long
#define rep(i,a) for(int i=0;i<int(a);i++)
#define pb push_back
#define sc scanf
#define pf printf
#define Max_n 1010
#define ull unsigned long long
#define ll long long
#define fin freopen("in.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
#define pi acos(-1);
using namespace std;
int coin[]={1,5,10,25,50};
ll dp[30100];
int main()
{
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=0;i<5;i++)
        for(int j=coin[i];j<30005;j++)
    {
        dp[j]+=dp[j-coin[i]];
    }
   // cout<<dp[4];
    int n;
    while(sc("%d",&n)!=EOF)
    {
        if(dp[n]==1)
            pf("There is only 1 way to produce %d cents change.\n",n);
        else
            pf("There are %lld ways to produce %d cents change.\n",dp[n],n);
    }
    return 0;
}
