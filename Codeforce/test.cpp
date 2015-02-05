#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,x,n,sum=0,t=0;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&l,&r);
        if((l-t)%x)
            sum+=(l-t)%x-1;
        sum+=r-l+1;
        t=r;

    }
    printf("%d\n",sum);
}
