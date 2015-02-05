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
ll dp[30100][5];
ll c_change(ll a,int i)
{
    if(i>=5)
    {
        if(a==0)
            return 1;
            else return 0;
    }
    if(dp[a][i]!=-1)
        return dp[a][i];
        ll n1=0,n2=0;
    if(a-coin[i]>=0)
        n1=c_change(a-coin[i],i);
    n2=c_change(a,i+1);
    return dp[a][i]=n1+n2;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    ll num;
    while(sc("%d",&n)!=EOF)
    {
        num=c_change(n,0);
        if(num==1)
            pf("There is only 1 way to produce %d cents change.\n",n);
        else
        pf("There are %lld ways to produce %d cents change.\n",num,n);
    }

}
