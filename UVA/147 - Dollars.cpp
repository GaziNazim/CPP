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
#define fin freopen("in.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
#define pi acos(-1);
using namespace std;

int coin[]= {10000,5000,2000,1000,500,200,100,50,20,10,5};
ll dp[30109][11];

ll c_change(int amount,int i)
{


    if(i>=11)
    {

        if(amount==0)
            return 1;
        else return 0;
    }
    ll n1=0,n2=0;
    if(dp[amount][i]!=-1)
        return dp[amount][i];
    if(amount-coin[i]>=0)
        n1=c_change(amount-coin[i],i);
    n2=c_change(amount,i+1);
    return dp[amount][i]=n1+n2;

}
int main()
{

    memset(dp,-1,sizeof(dp));
    dp[0][0]=1;
    dp[0][1]=1;
    dp[0][2]=1;
    dp[0][3]=1;
    dp[0][4]=1;
    dp[0][5]=1;
    dp[0][6]=1;
    dp[0][7]=1;
    dp[0][8]=1;
    dp[0][9]=1;
    dp[0][10]=1;

    ll a=0,b=0,n;
    while(sc("%lld.%lld",&a,&b))
    {
//        cout<<a<<endl<<b;
  n=a*100+b;
//        cout<<endl<<n<<endl;
        if(n==0)
            break;
        printf("%3lld.%.2lld%17lld\n",a,b,c_change(n,0));
    }


    return 0;
}
