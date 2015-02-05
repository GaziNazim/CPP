#include<bits/stdc++.h>
#define MAX 100000000
#define ll long long
#define rep(i,a) for(int i=0;i<int(a);i++)
#define pb push_back
#define sc scanf
#define pf printf
#define Max_n 1010
#define ull unsigned long long
#define ll long long
#define fin freopen("in.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
using namespace std;
ull seive[15];
void fact()
{
    seive[1]=1;
    seive[0]=1;
    for(int i=2;i<15;i++)
        seive[i]=seive[i-1]*i;
}
int main()
{
    fact();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n<0)
        {
            if(abs(n)%2)
             printf("Overflow!\n");
            else
            printf("Underflow!\n");


        }
       else if(n<8)
            printf("Underflow!\n");
        else if(n>13)
            printf("Overflow!\n");
        else
            pf("%lld\n",seive[n]);
    }
    return 0;
}


