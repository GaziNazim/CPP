
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
#define MAX 2000010
///////////////////////********************////////////////////////


/*Code start from here*/

int people[MAX];



int main()
{
    fin;
    int n;
    while(ri(n))
    {
        if(n==0)
            break;
        for(int i=0;i<n;i++)
            ri(people[i]);
        sort(people,people+n);
        pf("%d",people[0]);
        for(int i=1;i<n;i++)
        {
            pf(" %d",people[i]);
        }
        NL;
    }
    return 0;
}
