#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,a;
    long long sum;
    scanf("%d %d",&n,&s);
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum<=s)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
