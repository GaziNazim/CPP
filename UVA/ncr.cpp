#include<bits/stdc++.h>
using namespace std;
int dp[10009][10];
int ncr(int n,int  r)
{
    if(n==1||n==r)
        return  1;
    if(r==1)
        return n;
        if(dp[n][r]==-1)
    dp[n][r]=ncr(n-1,r-1)+ncr(n-1,r);

        return  dp[n][r];;
}
int main()
{
    for(int i=0;i<10002;i++)
        for(int j=1;j<4;j++)
        dp[i][j]=-1;
    cout<<ncr(10000,2);
    return 0;
}
