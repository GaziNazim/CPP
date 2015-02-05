
#include<bits/stdc++.h>

using namespace std;
vector<int> edge[100], cost[100];
const int infinity = 1000000000;


struct data {
    int city, dist;
    bool operator < ( const data& p ) const {
        return dist > p.dist;
    }
};

int dijkstra(int source, int destination) {

    int d[100];
    for(int i=0; i<100; i++) d[i] = infinity;

    priority_queue<data> q;
    data u, v;
    u.city = source, u.dist = 0;
    q.push( u );
    d[ source ] = 0;

    while( !q.empty() ) {
        u = q.top(); q.pop();
        int ucost = d[ u.city ];

        for(int i=0; i<edge[u.city].size(); i++) {
            v.city = edge[u.city][i], v.dist = cost[u.city][i] + ucost;
            // relaxing :)
            if( d[v.city] > v.dist ) {
                d[v.city] = v.dist;
                cout<<v.dist;
                q.push( v );
            }
        }
    }

    return d[ destination ];
}

int main()
{
   ifstream in;
   in.open("graph.txt");
   int n;
   n=8;
   for(int i=0;i<n;i++)
   {
       int x,y, c;
      in>>x>>y>>c;
      //cout<<x<<"  "<<y<<"  "<<c<<endl;
      edge[x].push_back(y);
      edge[y].push_back(x);
      cost[x].push_back(c);
      cost[y].push_back(c);
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<edge[i].size();j++)
       {
           cout<<edge[i][j]<<"   "<<cost[i][j]<<endl;
       }
       cout<<endl;
   }
  // for(int i=0;i<cost[0].size();i++)
   // cout<<cost[0][i];
   cout<<endl<<dijkstra(0,4);
}
