#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long n1,n2,num,total,i,n;
    while(scanf("%lld %lld",&n1,&n2)==2)
    {

        total = 0 ;
        if(n1==0||n2==0)
            break;
            if(n1>n2)
                swap(n1,n2);
                long long nnn=n2;
        for(;n2>=n1;n2--)
        {
            n=n2;
            if(n%2==0)
                    n=n/2;
                else
                    n=3*n+1;
                    i=1;
            for(;n!=1;i++)
            {
                if(n%2==0)
                    n=n/2;
                else
                    n=3*n+1;

            }
            if(i>=total)
            {
                total=i;
                num=n2;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",n1,nnn,num,total);
    }
}
