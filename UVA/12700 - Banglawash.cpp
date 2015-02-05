
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
#define sz size();
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
    int test;
    sc("%d",&test);
    char c;
    int b,w,a,t,n;
    string s;
    bool is=false;
    for(int l=1;l<=test;l++)
    {

      //  cout<<l<<t;
        cin>>n;
        b=0;w=0;t=0;a=0;
        cin>>s;
//        if(is)
//            pf("\n");
//        else
//            is=true;
        rep(i,n)
        {
            c=s[i];
            if(c=='B')
                b++;
            else if(c=='W')
            w++;
                else if(c=='T')
                t++;
                else if(c=='A')
                a++;
        }
         if(a==n)
            pf("Case %d: ABANDONED",l);
        else if(b==n-a)
            pf("Case %d: BANGLAWASH",l);
        else if(w==n-a)
            pf("Case %d: WHITEWASH",l);
        else if(b==w)
            pf("Case %d: DRAW %d %d",l,b,t);
        else if(b>w)
            pf("Case %d: BANGLADESH %d - %d",l,b,w);
        else if(w>b)
            pf("Case %d: WWW %d - %d",l,w,b);
        else
            pf("Case %d:  DRAWN %d %d",l,b,t);
            pf("\n");

    // cout<<endl<<t<<l;
    }
    return 0;
}
