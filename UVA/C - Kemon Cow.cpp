#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x[3],y[3],xx,yy;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x[1]>>y[1]>>x[2]>>y[2];
        cin>>n;
        cout<<"Case "<<i<<":\n";
        for(int i=0;i<n;i++)
        {
            cin>>xx>>yy;
            if((xx>=x[1]&&xx<=x[2])&&(yy>=y[1]&&yy<=y[2]))
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }

    }
    return 0;
}
