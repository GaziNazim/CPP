
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
#define sz size()
#define mem(x,y) memset(x,y,sizeof(x))
#define sc scanf
#define pf printf
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define fin freopen("input.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
#define pi acos(-1)

/*Code start from here*/

int main()
{
    string s;
    double time,total,t,sp;
    char c;
    getline(cin,s);
    cout<<s.sz;
    stringstream s1(s);

       s1>>t;
       time+=t;
       s1>>c;
       s1>>t;
       time+=t/60;
       s1>>c;
       s1>>t;
       time+=t/3600;
    if(s.sz>8)
    {

    }


    return 0;
}
