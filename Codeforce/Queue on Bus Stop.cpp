#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,tb=0,tp;
    int p;
    vector<int>a;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {

        cin>>p;
        a.push_back(p);
    }
    while(1)
    {


        tp=0;
        for(int i=0;i<n;i++)
        {
            if(tp+a[i]>m)
                break;
            else if (tp+a[i]==m)
            {
                tp+=a[i];
                a[i]=0;

                break;
            }
            else if((tp+a[i]<m)&&a[i]!=0)
            {

                tp+=a[i];
                a[i]=0;
            }
        }
        if(tp==0)
        {
            break;
        }
        tb++;
    }
    cout<<tb;
    return 0;
}
