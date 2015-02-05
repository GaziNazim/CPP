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
    int h,m;
    double hm,mm;
    while(1)
    {
        sc("%d:%d",&h,&m);
        if(h==0&&m==0)
            break;
            hm=(double)m/12+h*5;
            hm=abs(hm-m);
            hm*=6;
//       hm=60*h+m;
//        hm=(double)hm/2;
//    hm=abs(hm-6*m);
    if(hm>180)
        hm=360-hm;
        pf("%.3lf\n",hm);
    }
    return 0;
}

