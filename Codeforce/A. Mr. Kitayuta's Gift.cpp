
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
    string s,s1,s2;
    cin>>s;
    int len =s.sz;
    int l=len-1;
    int c=0;
    bool is =true;
    rep(i,ceil(len/2)+1)
    {
       // cout<<i<<l<<endl;
        if(i>=l)
        {
            //cout<<"dfj";
            if(i==l)
                s1+=s[i];
            break;

        }

        if(s[i]==s[l])
        {
            s1+=s[i];
            s2+=s[l];
            l--;
        }
        else
        {
            //cout<<"not\n";
            c++;
        if(c==2)
        {
            is=false;
            break;
        }
            s1+=s[i];
            s2+=s[i];
        }
    }
    if(c==0)
        s1+='a';
        if(c<=1)
        {
             cout<<s1;
    for(int i=s2.sz-1;i>=0;i--)
        cout<<s2[i];
    cout<<endl;

        }
        else
            cout<<"NA\n";

    return 0;
}
