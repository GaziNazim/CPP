#include<bits/stdc++.h>
using namespace std;
struct router
{
    int x,y,r;
};
int main()
{
    int t,n,l,x,y;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        vector<router>rr;
        cin>>n>>l;
        for(int j=0;j<n;j++)
        {
            router rou;
            cin>>rou.x>>rou.y>>rou.r;
            rr.push_back(rou);
        }

        int j;
        cout<<"Case "<<t<<":\n";
        while(l)
        {

            cin>>x>>y;
            for(j=0;j<n;j++)
            {
                if((x>=(rr[j].x-rr[j].r))&&(x<=(rr[j].x+rr[j].r)))
                    if((y>=(rr[j].y-rr[j].r))&&(y<=(rr[j].y+rr[j].r)))
                        break;
            }
            if(j==n)
                cout<<"No\n";
            else
                cout<<"Yes\n";


            l--;
        }

    }


  return 0;

}
