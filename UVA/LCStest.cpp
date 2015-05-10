
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
#define MAX 800
///////////////////////********************////////////////////////


/*Code start from here*/

string line,s1[110],s2[110];
int len1,len2;
int dp[MAX][MAX];
queue<string> ans;
void printpath(int i,int j)
{
    if(i==len1||j==len2)
    {
        while(ans.size()>1)
        {
            cout<<ans.front()<<" ";
            ans.pop();
        }
        cout<<ans.front();
        ans.pop();
        NL;
        return;
    }
    if(s1[i]==s2[j])
    {
        ans.push(s1[i]);
        printpath(i+1,j+1);
    }
    else if(dp[i+1][j]>dp[i][j+1])
        printpath(i+1,j);
    else
        printpath(i,j+1);
}

int LCS(int i,int j)
{
    if(i==len1||j==len2)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
        return dp[i][j];
    if(s1[i]==s2[j])
        return dp[i][j]=1+LCS(i+1,j+1);
    else
    {
        return dp[i][j]=max(LCS(i+1,j),LCS(i,j+1));
    }
}

int main()
{
   fin;
   //fout;
   bool test=false;
   while(cin>>s1[0])
   {
       len1=1;len2=0;
       if(s1[0]=="#")
        continue;
       for(;;len1++)
       {
           cin>>s1[len1];
           if(s1[len1]=="#")
            break;
       }
       for(;;len2++)
       {
           cin>>s2[len2];
           if(s2[len2]=="#")
            break;
       }
       mem(dp,-1);
       LCS(0,0);
       for(int i=0;i<3;i++)
       {
           for(int j=0;j<3;j++)
            cout<<dp[i][j]<<" ";
           NL;
       }
       printpath(0,0);


   }

    return 0;
}
