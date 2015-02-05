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
#define pi acos(-1);

/*Code start from here*/


using namespace std;
int main()
{
   // fin;
    int n,child;
    vi group;
    cin>>n;
    rep(i,n)
    {
        scanf("%d",&child);
        group.pb(child);
    }
    sort(group.begin(),group.end());
    int len =group.sz;
  //  rep(i,len)
   // cout<<group[i]<<"  \n";

    int l=len-1;
    int total=1;
    int c=0;
    int i=0;
   // cout<<i<<l<<endl;
        for(;i<=l;)
        {
            //cout<<"I  "<<i<<"  L  "<<l<<c<<"  in  \n";
            if(group[i]+group[l]+c<=4)
            {
              //  cout<<"in i and l\n";
               // cin>>n;
                c=group[i]+group[l]+c;
                i++;l--;

            }
              else if(group[l]+c<=4)
            {
              //  cout<<"in l\n";
               // cin>>n;
                c=group[l]+c;
                l--;
            }
           else if(group[i]+c<=4)
            {
               // cout<<"in i\n";
               // cin>>n;
                c=group[i]+c;
                i++;
            }
            else
            {
                //cout<<"in else\n";
               // cin>>n;
                c=0;//i++;l--;
                total++;
            }


        }
    cout<<total<<endl;
    //cout<<len;


    return 0;
}
