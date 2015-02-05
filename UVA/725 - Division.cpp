#include<bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    int arr[10];
    for(int i=0; i<10; i++)
    {

        if(n)
            arr[i]=n%10;
        else
            arr[i] = n;
        n=n/10;
        for(int j=i-1; j>=0; j--)
        {

            if(arr[i]==arr[j])
            {
                return false;
            }

        }
    }

    return true;
}
int main()
{
    long long num,x,y;
    bool ne=false;
    while(1)
    {
        bool c=false;
        cin>>num;
        if(!num)
            break;
        if(ne)
        {
            cout<<endl;
        }
           // cout<<endl;
        x=01234;
        while(x*num<100000)
        {
            y=num*x;
            y=y*100000;
            y=y+x;

            if(check(y))
            {

                c=true;
                printf("%05lld / %05lld = %lld\n",x*num,x,num);
            }

            x++;
        }
        if(!c)
        {
            printf("There are no solutions for %lld.\n",num);

        }

        ne=true;
    }
    return 0;
}
