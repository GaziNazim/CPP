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
#define MAX 6010
///////////////////////********************////////////////////////


/*Code start from here*/

//ekhane last box dhore total weiht 3000 hote
//pare tai MAX 3010 dhora hoeche.s

struct node
{
    int w,c;
};

node box[MAX];
int n;
int dp[MAX][MAX];

int calc(int i,int w)
{
  if(i==n||w>3000)
  {
       return 0;
  }

  if(dp[i][w]!=-1)
    return dp[i][w];
  int h1=0,h2=0;
  if(w<=box[i].c)
    h1=1+calc(i+1,w+box[i].w);
    h2=calc(i+1,w);
  return dp[i][w]=max(h1,h2);

}

int main()
{
    //fin;
    //fout;
   while(ri(n)==1)
   {
       if(n==0)
        break;
    for(int i=n-1;i>=0;i--)
        {
            ri(box[i].w);
            ri(box[i].c);


       }
       n=n;
    mem(dp,-1);
    cout<<calc(0,0)<<endl;
   }
    return 0;
}
