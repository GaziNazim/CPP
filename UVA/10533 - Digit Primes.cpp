#include<bits/stdc++.h>
#define pf printf
#define sc scanf
#define MAX 1000005
using namespace std;
bool seive[MAX];
int total[MAX];

void prime()
{
    for(int i=3; i<=MAX; i+=2)
        seive[i]=true;
    seive[1]=false;
    seive[2]=true;
    seive[3]=true;
    for(int i=3; i<sqrt(MAX); i=i+2)
    {

        if(seive[i])
            for(int j=i*i; j<=MAX; j+=i*2)
            {

                seive[j]=false;
            }
    }

}
int sum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum=sum+n%10;
        n/=10;
    }

    return sum;
}

void total_d()
{
    total[2]=1;
    for(int i=3;i<MAX;i++)
    {
        if(seive[i])
        {
            if(seive[sum(i)])
                total[i]=total[i-1]+1;
                else
            total[i]=total[i-1];
        }
        else
            total[i]=total[i-1];
    }

}
int main()
{

    prime();
    total_d();
    int t,num1,num2,num,p;
    sc("%d",&t);
    while(t--)
    {
        p=0;
        sc("%d %d",&num1,&num2);

        pf("%d\n",total[num2]-total[num1-1]);



    }

    return 0;
}
