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
    string s;
    cin>>s;
    int len=s.sz;
    int ind=len;
    len--;
    int t=0;
    int i;
    bool is = false;
   for(i=0;i<=len;i++)
    {
        if((s[i]-'0')%2==0)
        {
            is = true;
            if(s[i]<s[len])
            {
                swap(s[i],s[len]);
                break;
            }
            ind =i;
        }

    }
    if(is)
    {
        if(i==len+1)
            swap(s[ind],s[len]);
        cout<<s<<endl;
    }
    else cout<<"-1\n";
    return 0;
}

