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
#define sz size()
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define fin freopen("input.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
#define pi acos(-1)

/*Code start from here*/
int main()
{
   // fin;
    ull a,b,n,temp;
    int t;
    sc("%d",&t);
    REP(c,1,t)
    {
        scanf("%llu %llu",&a,&b);
        int i=60;
        n=b;
        for(; i>=0; i--)
        {
            if((b&(1LL<<i)))
                break;
        }

        for(; i>=0; i--)
        {
            if((a&(1LL<<i))==(b&(1LL<<i)))
                continue;
            else
                break;
        }
        for(; i>=0; i--)
        {
            b=b|(1LL<<i);
        }
        i=64;
        temp=b;
        b=n;
        for(; i>=0; i--)
        {
            if((b&(1LL<<i)))
                break;
        }
        if(!(a&(1LL<<i)))
            b=0;
        else
        {
            for(; i>=0; i--)
            {
                if((a&(1LL<<i))==(b&(1LL<<i)))
                    continue;
                else
                    break;
            }
          for(; i>=0; i--)
        {
            b&=~(1LL<<i);
        }
        }
       pf("Case %d: %llu %llu\n",c,temp,b);

    }
    return 0;
}
