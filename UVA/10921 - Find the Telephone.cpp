
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

map < char,char> m;
void ini()
{
    m['A']='2';
    m['B']='2';
    m['C']='2';
    m['D']='3';
    m['E']='3';
    m['F']='3';
    m['G']='4';
    m['H']='4';
    m['I']='4';
    m['J']='5';
    m['K']='5';
    m['L']='5';
    m['M']='6';
    m['N']='6';
    m['O']='6';
    m['P']='7';
    m['Q']='7';
    m['R']='7';
    m['S']='7';
    m['T']='8';
    m['U']='8';
    m['V']='8';
    m['W']='9';
    m['X']='9';
    m['Y']='9';
    m['Z']='9';
}

int main()
{

 ini();
 char s[1000];
 int len;
 while(scanf("%s",s)==1)
 {
     len=strlen(s);
     for(int i=0;i<len;i++)
     {
         if(s[i]>=65&&s[i]<=90)
            cout<<m[s[i]];
         else
            cout<<(s[i]);

     }
     cout<<endl;
 }

    return 0;
}
