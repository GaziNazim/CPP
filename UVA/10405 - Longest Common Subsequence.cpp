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
#define MAX 1100
///////////////////////********************////////////////////////


/*Code start from here*/
int dp[MAX][MAX];
string a,b;
int lena,lenb;
int lcm(int i,int j)
{
    if(a[i]=='\0'||b[j]=='\0')
    {
        return 0;
    }
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(a[i]==b[j])
        return 1+lcm(i+1,j+1);
    else
    {
        return dp[i][j]=max(lcm(i+1,j),lcm(i,j+1));
    }
}
int main()
{
   // fin;

    while(getline(cin,a),getline(cin,b))
    {
         mem(dp,-1);
         lena=a.sz;
         lenb=b.sz;
         cout<<lcm(0,0)<<endl;
    }
    return 0;
}
