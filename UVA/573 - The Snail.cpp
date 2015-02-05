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
    int h,u,d,f;
    double total_h,factor,height,inc;
    int n;
    bool is;
    while(sc("%d %d %d %d",&h,&u,&d,&f))
    {
        if(h==0)
            break;
            factor=(double)u*f/100;
            n=0;
            total_h=0;
            height=h;
            inc=u;
        for(;1;)
        {
            n++;

            if(inc>0)
                total_h=total_h+inc;
            if(total_h>height)
            {
               is=true;
                break;
            }
               total_h-=d;
             if(total_h<0)
            {
                is=false;
                break;
            }
            inc-=factor;
        }
        if(is)
        {
            pf("success on day %d\n",n);
        }
        else
        {
            pf("failure on day %d\n",n);
        }
    }
    return 0;
}
