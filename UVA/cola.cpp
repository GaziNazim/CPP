#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t=0;
    while(scanf("%d",&n)==1)
    {
        int p=n;
        if(n==1)
           {
             cout<<n;
             continue;
           }

            while(n>=2)
        {
            t++;
            if(n==2)
                n++;
            p+=n/3;
            n=n/3+n%3;

        }
        cout<<p<<endl<<t<<endl;
    }
    return 0;
}
