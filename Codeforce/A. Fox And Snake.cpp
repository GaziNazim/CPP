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
    int n,m;
    cin>>n>>m;
    string s="#";
    rep(i,m-1)
    s+="#";
    string s2=".";
    rep(i,m-2)
    s2+=".";
    cout<<s<<endl;
    bool is=false;
    rep(i,n/2)
    {
        if(is)
        {
            cout<<"#";
           cout<<s2<<endl;
           is=false;
        }
        else
        {
            cout<<s2;
            cout<<"#\n";
            is=true;
        }
        cout<<s<<endl;

    }
    return 0;
}
