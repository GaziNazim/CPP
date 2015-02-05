#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,x,sum;
    while(scanf("%I64d %I64d",&a,&b)==2)
    {
        if(a-b==0)
        {
            cout<<"infinity\n";
            continue;
        }
        sum=0;
        a-=b;
        if(a<=b)
        {
            cout<<"0\n";
            continue;
        }
        x=sqrt(a);
        for(int i=1;i<=x;i++)
        {

            if((a%i==0)&&(i>b))
            {
                //cout<<i<<endl;
                 sum++;
            }

               if((a%i)==0&&(a/i)>b&&i*i<a)
               {
                  // cout<<(a/i)<<endl;
                      sum++;
               }

        }
        cout<<sum<<endl;
    }
    return 0;
}
