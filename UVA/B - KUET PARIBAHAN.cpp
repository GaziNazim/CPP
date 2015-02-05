#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main()
{
    int n,sta[55],base_cost,seat_cost,maxim,min_cost,cost;
    while(scanf("%d",&n)==1)
    {
     maxim=0l;
     min_cost=1000000;
    for(int i=1;i<=n;i++)
    {
        cin>>sta[i];
        maxim=max(sta[i],maxim);
    }
    cin>>base_cost>>seat_cost;
    for(int i=1;i<=maxim;i++)
    {
        cost=0;
       for(int j=1;j<=n;j++)
       {
           int bus=((float)sta[j]/i+.99);
           cost+=bus*base_cost+bus*i*seat_cost;
       }
       min_cost=min(min_cost,cost);

    }
    cout<<min_cost<<endl;
    }


    return 0;
}
