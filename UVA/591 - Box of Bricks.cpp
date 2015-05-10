#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define rep(i,n) for(__typeof(n) i=0;i<(n);i++)
#define REP(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define INF (1<<30)
#define pb push_back
#define Sort(v) sort(v.begin(),v.end())
#define sz size()
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define NL printf("\n")
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
#define MAX 60
///////////////////////********************////////////////////////


/*Code start from here*/

int h[MAX];


int main()
{
    //fin;
    int n,l=0,sum,mov;
    while(ri(n))
    {
        if(n==0)
            break;
             l++;
        sum=0;mov=0;
        for(int i=0;i<n;i++)
           {
                ri(h[i]);
                sum+=h[i];
           }
        sum/=n;
        for(int i=0;i<n;i++)
        {
            if(h[i]>sum)
                mov=mov+(h[i]-sum);
        }
        pf("Set #%d\n",l);
        pf("The minimum number of moves is %d.\n",mov);
        NL;
    }
    return 0;
}

