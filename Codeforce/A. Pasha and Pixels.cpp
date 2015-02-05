
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
#define MAX 1010
///////////////////////********************////////////////////////


/*Code start from here*/


int mat[MAX][MAX];

int main()
{

    mem(mat,0);
    int n,m,k,i,j;
    ri(n);
    ri(m);
    ri(k);
    int l;
   bool is=true;
   int ans;
    for(l=1;l<=k;l++)
    {
        ri(i);
        ri(j);
        mat[i][j]=1;
        if((mat[i][j]&&mat[i-1][j+1]&&mat[i-1][j]&&mat[i][j+1])||(mat[i][j]&&mat[i][j+1]&&mat[i+1][j+1]&&mat[i+1][j])||(mat[i][j]&&mat[i][j-1]&&mat[i+1][j-1]&&mat[i+1][j])||(mat[i][j]&&mat[i-1][j]&&mat[i-1][j-1]&&mat[i][j-1]))
        {
            is=false;
            cout<<l;
            return 0;
            ans=l;

        }
    }
    if(is)
    {
        cout<<"0"<<endl;
    }
    else
        cout<<ans<<endl;

    return 0;
}
