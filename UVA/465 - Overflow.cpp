
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
#define Sort(v) sort(v.begin(),v.end())
#define sz size()
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define mp make_pair
#define ff first
#define ss second
#define ri(N) scanf("%d",&N)
#define rs(S) scanf("%s",&S)
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define piii pair<int,pair<int,int> >
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define fin freopen("input.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
#define pi acos(-1)
#define MAX 800
///////////////////////********************////////////////////////


/*Code start from here*/




int main()
{
    unsigned a,b;
    char c;
    bool is;
    while(sc("%u %c %u",&a,&c,&b)!=EOF)
    {
        //cout<<a<<endl<<b<<endl;
        pf("%u %c %u\n",a,c,b);
        is=false;
        if(a>=(1<<31))
        {
            pf("first number too big\n");
            is=true;
        }
        if(b>=(1<<31))
        {
            pf("second number too big\n");
            is=true;
        }
        if(c=='+')
        {
            if((a+b>=(1<<31))||is)
        {
            pf("result too big\n");
        }
        }
        else if ((a*b>=(1<<31))||is)
        {
            pf("result too big\n");
        }

    }
    return 0;
}
