
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
#define MAX 110
///////////////////////********************////////////////////////


/*Code start from here*/
int dp[MAX][MAX];
string s1 , s2;
set<char>city;
int len1,len2;
int LCS(int i,int j)
{

    if(i==len1||j==len2)
        return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
    if(s1[i]==s2[j])
    {
        return dp[i][j]=(1+LCS(i+1,j+1));
    }
    else
    {
        return dp[i][j]=max(LCS(i+1,j),LCS(i,j+1));
    }

}

int main()
{

    int i=1;
    while(1)
    {
        getline(cin,s1);
        if(s1[0]=='#')
            break;
        getline(cin,s2);
        len1=s1.sz;
        len2=s2.sz;
       // cout<<"len 1"<<len1<<"len2 "<<len2<<endl;
        mem(dp,-1);
        pf("Case #%d: you can visit at most %d cities.\n",i,LCS(0,0));
        i++;
    }
    return 0;
}
