#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
using namespace std;
#define rep(i,n) for(__typeof(n) i=0;i<(n);i++)
#define REP(i,a,b) for(__typeof(b) i=(a);i<=(b);i++)
#define INF (1<<25)
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
#define MAX 5010
///////////////////////********************////////////////////////


/*Code start from here*/

vector<int>seq,L,I;
int len;
int LCS()
{
    I[0]=-INF;
   // cout<<I[0]<<I[1]<<endl;
    int maxlength=0;
    for(int i=0;i<len;i++)
    {
        int low=0,high=maxlength;
        int mid;
        while(low<=high)
        {

            mid=(high+low)/2;
            if(I[mid]<seq[i])
                low=mid+1;
            else
                high=mid-1;
        }
        I[low]=seq[i];
        L[i]=low;
        if(maxlength<low)
            maxlength=low;
    }
    return maxlength;
}
vector<int>sub;
void find_()
{
    int i=0,j=0;
    for(;j<len;j++)
    {
        if(L[i]<L[j])
            i=j;
    }
    sub.pb(seq[i]);
    int ii=i;
    i--;
    for(;i>=0;i--)
    {
        if(L[i]+1==L[ii]&&seq[i]<seq[ii])
        {
            sub.pb(seq[i]);
            ii=i;
        }
    }
    int vv=sub.sz;
    for(i=vv-1;i>=0;i--)
        cout<<sub[i]<<endl;
}


int main()
{
    //fin;
    len=0;
    int n;
    while(ri(n)==1)
    {
        seq.pb(n);
        len++;
    }
//    for(int i=0;i<len;i++)
//        cout<<seq[i]<<endl;
    L.resize(len,-1);
    I.resize(len+1,INF);
    I[0]=-INF;
    pf("%d\n-\n",LCS());
    find_();
    return 0;
}
