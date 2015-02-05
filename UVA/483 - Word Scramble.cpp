
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
    string input;
    string s;
    int len;
    while(getline(cin,input))
    {
        stringstream ss(input);
        bool is=false;
        while(ss>>s)
        {
            if(is)
                pf(" ");
            else is=true;
            len=s.sz-1;
            for(;len>=0;len--)
            {
                pf("%c",s[len]);
            }
        }
        pf("\n");
    }
    return 0;
}
