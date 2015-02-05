#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#include<string>
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
#define ull unsigned long long
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
    int t,n;
    bool ch=false;
    double num;
    string s,s1;
    sc("%d",&t);
    getchar();
    while(t--)
    {
        getchar();
           map<int,string>ans;
           vector<int>v;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>n)
            v.push_back(n);
            getline(cin,s);

        stringstream sss(s);
        int i;

        if(ch)
            pf("\n");
        else
            ch=true;
       for(i=0;sss>>s1;i++)
        {
            ans[v[i]]=s1;
        }
        for(int j=1;j<=i;j++)
            cout<<ans[j]<<endl;
    }
    return 0;
}
