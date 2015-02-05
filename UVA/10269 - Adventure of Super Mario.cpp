#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(__typeof(n) i=0;i<(n);i++)
#define inf 10000
vector< vector < int > > node,cost;
int t,a,b,m,l,k;
int dis[110][510][110];

struct state
{
    int a,l,k,cost;
    bool tt;
     bool operator < (const state& c)const
    {
        return cost>c.cost;
    }

};
state par[110][510][110];
void path(int x,int y,int z)
{
    //cout<<dis[x][y][z];
    if(dis[x][y][z]!=0)
    path(par[x][y][z].a,par[x][y][z].l,par[x][y][z].k);
    printf("%d %d %d     ",x,y,z);

}

int bfs(int s)
{
    REP(i,a+b+1)REP(j,l+1)REP(z,k+1) dis[i][j][z]=inf;
    state u,v;
    u.a=s;
    u.cost=0;
    u.k=k;
    u.l=0;
    int ucost;
    priority_queue<state>q;
    q.push(u);
    dis[s][0][k]=0;
    while(!q.empty())
    {

        u=q.top();
        q.pop();
      //  if(u.a==1)
          //  return u.cost;
        ucost=u.cost;


        REP(i,node[u.a].size())
        {
             v.a=node[u.a][i];

           if(ucost+cost[u.a][i]<dis[node[u.a][i]][0][u.k])
           {

              v.cost=ucost+cost[u.a][i];
              v.k=u.k;

                v.l=0;
              q.push(v);
              par[node[u.a][i]][v.l][v.k]=u;
              dis[node[u.a][i]][v.l][u.k]=ucost+cost[u.a][i];

           }


{

              v.cost=ucost;

    if(u.l>0&&cost[u.a][i]<=u.l)
           {

              v.k=u.k;
               if(node[u.a][i]>a||cost[u.a][i]==u.l)
              {
                 v.l=0;
              }
              else
              {

                  v.l=u.l-cost[u.a][i];
              }
              if(dis[node[u.a][i]][v.l][v.k]>ucost)
              {

                  dis[node[u.a][i]][v.l][v.k]=ucost;
              q.push(v);
                 par[node[u.a][i]][v.l][v.k]=u;

              }

           }
            if(u.k>0&&cost[u.a][i]<=l)
           {
              if(node[u.a][i]>a||cost[u.a][i]==l)
              {
                  v.k=u.k-1;
                   v.l=0;
              }
              else
              {
                  v.k=u.k-1;
                  v.l=l-cost[u.a][i];
              }
                if(dis[node[u.a][i]][v.l][v.k]>ucost)
              {

                  dis[node[u.a][i]][v.l][v.k]=ucost;
              q.push(v);
                   par[node[u.a][i]][v.l][v.k]=u;
              }

           }

}

        }
    }
    int ans=inf;
    REP(i,l+1) REP(j,k+1)
    {

        ans=min(ans,dis[1][i][j]);

    }
  REP(i,l+1) REP(j,k+1)
    {

        if(dis[1][i][j]==ans)
        {
            cout<<"Path : ";
            path(1,i,j);
            cout<<endl;
            break;
        }

    }
    return ans;
}
int main()
{
    int x,y,w;

    cin>>t;
    while(t--)
    {
        node.clear();
        node.resize(110);
        cost.clear();
        cost.resize(110);
        cin>>a>>b>>m>>l>>k;
        REP(i,m)
        {
            cin>>x>>y>>w;
            node[x].push_back(y);
            node[y].push_back(x);
            cost[x].push_back(w);
            cost[y].push_back(w);
        }
        cout<<bfs(a+b)<<endl;



    }

    return 0;
}
