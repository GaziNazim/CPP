#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,MIN,MAX,nod;
    int a[1010];
    cin>>n;
    cin>>a[1]>>a[2]>>a[3];
    MIN=a[3]-a[1];
    nod =2;
    bool tt=true;;
   // cout<<MIN;
    //getchar();
    MAX = a[2]-a[1];
    if(a[3]-a[2])
        MAX=a[3]-a[2];

        if(n==3)
        {
            if(a[3]-a[1]>MAX)
            MAX=a[3]-a[1];

        }
        //MAX=a[3]-a[1];
    for(int i=4;i<=n;i++)
    {
        cin>>a[i];
        if((a[i]-a[i-2])<MIN)
        {
            tt=false;
            //cout<<"I  "<<i<<endl;
            MIN=a[i]-a[i-2];
            //cout<<MIN<<endl;
            nod=i-1;
            if(a[nod-1]-a[nod+1]>MAX)
            MAX=a[nod-1]-a[nod+1];
        }
        if(a[i]-a[i-1]>MAX)
        MAX=a[i]-a[i-1];


    }
    if(a[n]-a[n-1]>MAX)
        MAX=a[n]-a[n-1];
        if(tt&&MAX<a[3]-a[1])
            MAX=a[3]-a[1];
//    cout<<nod<<endl;
//    a[nod+1]+=a[nod];
//    MAX = a[2]-a[1];
//    for(int i=2;i<n;i++)
//        {
//            if(a[i+1]-a[i]>MAX)
//            {
//               cout<<MAX;
//                MAX=a[i+1]-a[i];
//            }
//
//        }
        cout<<MAX<<endl;
    return 0;
}
