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
    ll q,p,l,d,a,s,ans,t;
    sc("%lld",&t);
    REP(i,1,t)
    {
        sc("%lld %lld %lld %lld %lld",&q,&p,&d,&a,&s);
        ans=p*a;
        if((ans<s)||-(d*a)<s)
        {
            pf("Case %d: Review needed\n",i);
            continue;
        }

        ans-=s;
        l=p+d;
        if(l==0)
        {
            if(p*a==s)
            {
                pf("Case %d: It may happen\n",i);
            }
            else
                pf("Case %d: Review needed\n",i);

        }
        else
        {
            if((ans%l)==0)
                pf("Case %d: It may happen\n",i);
            else
                pf("Case %d: Review needed\n",i);
        }

    }
    return 0;
}
