#include<bits/stdc++.h>
using namespace std;
bool check_l(long long num)
{
    while(num)
    {
        if((num%10)==8)
            return true;
        else
            num=num/10;

    }
    return false;
}
int main()
{
    long long num;
    while(scanf("%I64d",&num)!=EOF)
    {

            for(int i=0;i<=100;i++)
        {
            num++;
            if(check_l(abs(num)))
            {
                cout<<(i+1)<<endl;
                break;
            }

        }
    }
    return 0;
}
