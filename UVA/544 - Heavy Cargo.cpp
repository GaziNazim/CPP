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
#define MAX 210
///////////////////////********************////////////////////////


/*Code start from here*/

////////////////////////

vi node[MAX];

vi cost[MAX];
int dij(int s,int des)
{
    int d[MAX];
    mem(d,0);
    priority_queue<pii> q;
    pii u,v;
    u= {INF,s};
    q.push(u);
    int ans=INF;
    while(!q.empty())
    {
        u=q.top();
        q.pop();
        ans=min(ans,u.ff);
        if(u.ss==des)
            return ans;
        for(int i=0; i<node[u.ss].size(); i++)
        {
            if(cost[u.ss][i]>d[node[u.ss][i]])
            {
                d[node[u.ss][i]]=cost[u.ss][i];
                v= {d[node[u.ss][i]],node[u.ss][i]};
                q.push(v);
            }
        }

    }
    return 0;

}

int main()
{
    // fin;
    // fout;
    int n,r,t=0,ind,w;
    string s1,s2;
    bool is=false;
    while(1)
    {
        cin>>n>>r;
        if(n==0&&r==0)
            break;

        msi c_ind;
        rep(i,n+5)
        {
            cost[i].clear();
            node[i].clear();
        }

        ind=1;
        rep(i,r)
        {
            cin>>s1>>s2>>w;
            if(!c_ind[s1])
            {
                c_ind[s1]=ind;
                ind++;
            }
            if(!c_ind[s2])
            {
                c_ind[s2]=ind;
                ind++;
            }
            node[c_ind[s1]].pb(c_ind[s2]);
            node[c_ind[s2]].pb(c_ind[s1]);
            cost[c_ind[s1]].pb(w);
            cost[c_ind[s2]].pb(w);


        }
        cin>>s1>>s2;
        t++;
        if(r==0)
        {
            pf("Scenario #%d\n0 tons\n",t);
        }
        else
        {
            pf("Scenario #%d\n%d tons\n",t,dij(c_ind[s1],c_ind[s2]));
        }

        cout<<endl;
    }
    return 0;
}
