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
#define pi acos(-1)
using namespace std;
int main()
{
    int t;
    ull n,k;
    int a,b;
    ull sum,p;
    cin>>t;
    while(t--)
    {
        sum=0;
        vector<int>time,pro;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            time.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            cin>>b;
            p=b*((int)k/time[i]);
            if(sum<p)
                sum=p;
        }
        cout<<sum<<endl;

    }
    return 0;
}
