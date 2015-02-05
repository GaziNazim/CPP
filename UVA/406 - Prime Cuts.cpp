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
bool p[1010];
int seg[1010];
void seive()
{
   p[0]=0;
   p[1]=true;
   p[2]=true;
   for(int i=3;i<1010;i+=2)
    p[i]=true;
   for(int i=3;i<sqrt(1010)+10;i+=2)
   {
       if(p[i])
        for(int j=i*i;j<1010;j+=2*i)
        p[j]=false;
   }
}
void coun()
{
//   mem(seg,0);
   seg[1]=1;
   REP(i,2,1010)
   if(p[i])
    seg[i]=seg[i-1]+1;
   else
    seg[i]=seg[i-1];

}
int main()
{
    //fin;

    seive();
    coun();
   // cout<<seg[18];
    int num,c;
    int total,mid,l,r;
    bool t=false;
    while(sc("%d %d",&num,&c)!=EOF)
    {
        pf("%d %d:",num,c);
        total=2*c;
        if(seg[num]%2!=0)
            total-=1;
        mid=(seg[num]-total)/2;
        int i=1;
        for(;0<mid;i++)
            if(p[i])
            mid--;
        for(;i<=num&&total!=0;i++)
        {
            if(p[i])
            {
                pf(" %d",i);
                total--;
            }
        }
      pf("\n\n");
        //pf("\n");



    }
    return 0;
}
