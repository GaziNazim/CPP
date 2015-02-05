#include<bits/stdc++.h>
#define pf printf
#define sc scanf
using namespace std;
int main()
{
    long long num;
    int ter[100],ind;
    while(sc("%lld",&num))
    {
        ind=0;
        if(num<0)
            break;
        if(num==0)
        {
            pf("0\n");
            continue;
        }
        while(num>0)
        {
            ter[ind]=num%3;
            num=num/3;
            ind++;
        }
        for(int i=ind-1;i>=0;i--)
            pf("%d",ter[i]);
        pf("\n");
    }

    return 0;
}

