
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


double A[MAX],F[MAX];

int main()
{
    fin;
    //fout;
    int n;
   double MAD,MAPE,MSE,RMSE;
    for(int i=0;i<365;i++)
        cin>>A[i];
       // pf("%f\n",A[2]);
    cin>>n;
    //cout<<n;
    for(int i=0;i<365;i++)
        cin>>F[i];
        cin>>n;
        //cout<<n;
        MAD=0;MAPE=0;MSE=0;
    for(int i=0;i<365;i++)
    {
        MAD+=(double)(abs(A[i]-F[i]))/365;
        MAPE+=(double)(abs(A[i]-F[i]))/A[i];
        MSE+=pow((double)(abs(A[i]-F[i])),2)/365;
    }
    NL;
    printf("MAD: %f\n",MAD);
    printf("MAPE: %f\n",100*MAPE/365);
    printf("MSE: %f\n",MSE);
    printf("RMSE: %f\n",sqrt(MSE));

    return 0;
}
