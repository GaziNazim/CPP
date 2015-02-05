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
int dp[8000][5];

int c_change(int amount,int i)
{


    if(i>=5)
    {

        if(amount==0)
            return 1;
        else return 0;
    }
    int n1=0,n2=0;
    if(dp[amount][i]!=-1)
        return dp[amount][i];
    if(amount-coin[i]>=0)
    n1=c_change(amount-coin[i],i);
    n2=c_change(amount,i+1);
    return dp[amount][i]=n1+n2;

}
int main()
{
    //c_change(7000,0);
     memset(dp,-1,sizeof(dp));
    dp[0][0]=1;
dp[0][1]=1;
dp[0][2]=1;
dp[0][3]=1;
dp[0][4]=1;
    int n;
   // cout<<dp[1][1];
    while(sc("%d",&n)!=EOF)
        printf("%d\n",c_change(n,0));
    return 0;
}
