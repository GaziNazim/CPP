#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll l,r;
int main()
{
    ll n;
    ll x,t=0;
    ll sum=0;
    scanf("%I64d %I64d ",&n,&x);
    for(ll i=0;i<n;i++)
    {
        scanf("%I64d %I64d",&l,&r);
        if((l-t-1)%x)
        sum+=(l-t-1)%x;
        sum+=r-l+1;
        t=r;
    }
    printf("%I64d\n",sum);
}
