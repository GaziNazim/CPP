#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define rep(i,n) for(__typeof(n) i=0;i<(n);i++)
#define REP(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define INF (1<<31)
#define pb push_back
#define sz size();
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define fin freopen("input.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
#define pi acos(-1);

/*Code start from here*/
int main()
{
    unsigned ll n,m,total,a;
    while(sc("%llu %llu",&n,&m))
    {
        if(n==0&&m==0)
            break;
            a=m/10;
        total=0;
        total+=(46*a)+5*a*(a-1);
        a=n/10;
        total-=(46*a)+5*a*(a-1);
        a=m%10;
        int num;
        for(int i=m-a+1;i<=m&&a;i++)
        {
            num=i;
            while(num)
            {
                total+=num%10;
                num/=10;
            }
        }
         a=n%10;
           for(int i=n-a;i<n;i++)
        {
            num=i;
            while(num)
            {
                total-=num%10;
                num/=10;
            }
        }
        cout<<total<<endl;

    }
    return 0;
}
