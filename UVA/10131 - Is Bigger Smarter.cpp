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
#define MAX 1010
///////////////////////********************////////////////////////


/*Code start from here*/

struct node
{
    int w,iq,n;
};

int l[MAX],len,sub[MAX];
node ele[MAX];

bool comparew(node a,node b)
{
    return a.w<b.w;
}
bool compareiq(node a,node b)
{
    return a.iq>b.iq;
}
int pr[MAX];
void find_(int i)
{

    if(pr[i]!=i)
    find_(pr[i]);
    pf("%d\n",ele[i].n);
}
int main()
{
    //fin;
    for(len=0;sc("%d %d",&ele[len].w,&ele[len].iq)==2;len++)
    {
          ele[len].n=len+1;
    }
    for(int i=0;i<=len;i++)
        pr[i]=i;
    sort(ele,ele+len,comparew);
    sort(ele,ele+len,compareiq);
    for(int i=0;i<=len;i++)
        l[i]=1;
    int i=0,j=0;
    for(;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(ele[i].iq>ele[j].iq&&ele[i].w<ele[j].w)
            {
                if(l[i]+1>l[j])
                {
                     l[j]=l[i]+1;
                     pr[j]=i;
                }

            }
        }
    }
    int maxi=0,mi;
    for(i=0;i<len;i++)
    {
        if(maxi<l[i])
        {
            maxi=l[i];
            mi=i;
        }

    }

    cout<<maxi<<endl;
    find_(mi);
    return 0;
}
