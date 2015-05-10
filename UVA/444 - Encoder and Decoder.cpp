
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




int main()
{
    fin;
    string s,ss;
    int len,asc;

    while(getline(cin,s))
    {
        ss.clear();
        len=s.sz;
        if(len==0)
        {
            NL;
            continue;
        }
        len--;
        if(s[0]>='0'&&s[0]<='9')
        {
          for(int i=0;i<=len;)
          {
              if(s[i+1]>='0'&&s[i+1]<='2')
                asc=(s[i+2]-'0')*100+(s[i+1]-'0')*10+s[i++]-'0';
              else
                asc=(s[i+1]-'0')*10+s[i]-'0';
                i+=2;
              ss+=char(asc);
          }
          for(int i=ss.sz-1;i>=0;i--)
            cout<<ss[i];
        }
        else
        {
            for(int i=len;i>=0;i--)
            {
                asc=int(s[i]);
                while(asc!=0)
                {
                    printf("%d",(asc%10));
                    asc/=10;
                }
            }
        }
        NL;

    }
    return 0;
}
