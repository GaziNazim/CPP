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
///////////////////////********************////////////////////////


/*Code start from here*/
int main()
{
    map<char,int> ct;
    ct['B']=1;
    ct['P']=1;
    ct['F']=1;
    ct['V']=1;
    ct['C']=2;
    ct['S']=2;
    ct['K']=2;
    ct['G']=2;
    ct['J']=2;
    ct['Q']=2;
    ct['X']=2;
    ct['Z']=2;
    ct['D']=3;
    ct['T']=3;
    ct['L']=4;
    ct['M']=5;
    ct['N']=5;
    ct['R']=6;
    string s;
    char c=' ';
    pf("%9c",c);
    cout.width(25);
    cout<<left<<"NAME";
    cout<<"SOUNDEX CODE\n";
    while(getline(cin,s))
    {
        pf("%9c",c);
        cout.width(25);
        cout<<left<<s;
        pf("%c",s[0]);
        int n=0;
        int ime=ct[s[0]];
        for(int i=1;s[i]!='\0';i++)
        {           if(ct[s[i]]!=0&&ct[s[i]]!=ime)
           {
               ime=ct[s[i]];
               cout<<ime;
               n++;
               if(n==3)
                break;
           }
           else
           ime=ct[s[i]];
        }
        for(;n<3;n++)
            cout<<"0";
        cout<<endl;

    }
    pf("%19cEND OF OUTPUT\n",c);
    return 0;
}
