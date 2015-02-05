#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    int n,cola=0,p,a=3,b=1;
    while(scanf("%d",&n)==1)
    {
        p=n;
        if(n==1)
            cout<<b;
            else if(n==2)
                cout<<a;
            else
            {
                cola=0;
                for(;;)
                {
                    t++;
                    n=n-3;
                    if(n==0)
                        break;
                    cola++;
                    n=n+1;
                    if(n==2)
                        n++;

                }
                cout<<(p+cola+1)<<endl<<t<<endl;
            }
    }
    return 0;
}
