#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define rep(i,n) for(__typeof(n) i=0;i<(n);i++)
#define REP(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define INF (1<<30)
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

vector<int>seq,I;
int len;
int LCS()
{
    int mid,maxilcs=0,high,low;
    for(int i=0;i<len;i++)
    {
        high=maxilcs;
        low=0;
        while(high>=low)
        {

            mid=(high+low)/2;
            if(I[mid]>seq[i])
            {

                low=mid+1;
            }

            else high=mid-1;
        }

        I[low]=seq[i];
        if(low>maxilcs)
            maxilcs=low;

    }
    return maxilcs;
}

int main()
{
   fin;
    int l=0;
    int n;
    while(ri(n)==1)
    {
        len=0;
        if(n==-1)
            break;
            if(l)
                NL;
            l++;
            seq.clear();
            seq.pb(n);
            for(len++;ri(n);len++)
            {
                seq.pb(n);
              if(n==-1)
                    break;
            }
        I.resize(len+1,-INF);
        I[0]=INF;
        pf("Test #%d:\n  maximum possible interceptions: %d\n",l,LCS());
    }
    return 0;
}
