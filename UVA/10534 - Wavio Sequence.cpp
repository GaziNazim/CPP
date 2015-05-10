
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
#define MAX 10010
///////////////////////********************////////////////////////


/*Code start from here*/

int seq[MAX];
int I[MAX],L[MAX],F[MAX],B[MAX],maxil,la,lb,m,D[MAX];
int _backward(int n)
{
    for(int i=0;i<=n;i++)
    {
        I[i]=INF;

    }
    I[0]=-INF;
    int mid,high,low;
    maxil=0;
    for(int i=n-1;i>=0;i--)
    {
        high=maxil;
        low=0;
        while(high>=low)
        {
            mid=(high+low)/2;
            if(seq[i]>I[mid])
                low=mid+1;
            else
                high=mid-1;
        }

        I[low]=seq[i];
        if(low>maxil)
            maxil=low;
        D[i]=low;
    }

}
int _forward(int n)
{
    for(int i=0;i<=n;i++)
    {
        I[i]=INF;
    }
    I[0]=-INF;
    int mid,high,low;
    maxil=0;
    for(int i=0;i<n;i++)
    {
        high=maxil;
        low=0;
        while(high>=low)
        {
            mid=(high+low)/2;
            if(seq[i]>I[mid])
                low=mid+1;
            else
                high=mid-1;
        }

        I[low]=seq[i];
        if(low>maxil)
            maxil=low;
//            cout<<"i  "<<i<<"  low99  "<<low<<endl;
        L[i]=low;
    }

}
int main()
{
    fin;
    int t,n;
    while(ri(n)==1)
    {
        if(n<=0)
            continue;

        for(int i=0;i<n;i++)
        {
            ri(seq[i]);
        }
       _forward(n);
        _backward(n);
//          for(int i=0;i<n;i++)
//            cout<<seq[i]<<" ";
//        cout<<endl;
//        for(int i=0;i<n;i++)
//            cout<<L[i]<<" ";
//        cout<<endl;
//          for(int i=0;i<n;i++)
//            cout<<D[i]<<" ";
//        cout<<endl;
       m=0;
       for(int i=0;i<n;i++)
        m=max(m,min(L[i],D[i]));
       cout<<(2*m-1)<<endl;


    }
    return 0;
}

