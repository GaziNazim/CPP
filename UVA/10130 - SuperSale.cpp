#include<bits/stdc++.h>
#define MAX 100000000
#define ll long long
#define rep(i,a) for(int i=0;i<int(a);i++)
#define pb push_back
#define sc scanf
#define pf printf
#define Max_n 1010
using namespace std;
int weight[Max_n],price[Max_n],dp[Max_n][35];;
int cap,n;
int calc(int i,int w)
{
    if(i==n+1)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
        int profit1=0,profit2=0;
    if(cap>=w+weight[i])
         profit1=price[i]+calc(i+1,w+weight[i]);
     profit2=calc(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}
int main()
{
    int t,people,pr,wei;
    sc("%d",&t);
    while(t--)
    {
        int sum=0;
        sc("%d",&n);
        for(int i=1;i<=n;i++)
            sc("%d %d",&price[i],&weight[i]);
        sc("%d",&people);

        while(people--)
        {
            scanf("%d",&cap);
         for(int i=0;i<=n;i++)
            for(int j=0;j<=cap;j++)
            dp[i][j]=-1;
            sum+=calc(1,0);

        }
  cout<<sum<<endl;
    }
    return 0;
}
