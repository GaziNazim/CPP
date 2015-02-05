#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
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
vector<int>fac[1010];
void itochar(int n,char *c)
{
    while(n!=0)
    {
        *c=(char)(n%10);
        n=n/10;
        c++;
    }
}
void fact()
{
    int temp;
    fac[0].pb(1);
    fac[1].pb(1);
    for(int i=2; i<1001; i++)
    {
        temp=0;
        int len=fac[i-1].size();
        for(int j=0; j<len; j++)
        {
            temp=i*(fac[i-1][j])+temp;
            fac[i].pb(temp%10);
            temp=temp/10;
        }

        if(temp)
        {
            while(temp)
            {
                fac[i].pb(temp%10);
                temp=temp/10;
            }
        }
    }
}


int main()
{

    fact();
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%d!\n",n);
        int len=fac[n].size();
        for(int i=len-1;i>=0;i--)
            printf("%d",fac[n][i]);
        printf("\n");
    }


    return 0;
}
