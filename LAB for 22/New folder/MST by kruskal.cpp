#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
struct edge
{
    int u,v,w;
    bool operator <(const edge& b)const
    {
        return w<b.w;
    }
};
vector<edge>e;
int par[100];
int find_p(int u)
{
    if(par[u]==u)
        return u;
    else
        return find_p(par[u]);
}
int mst(int n)
{
    sort(e.begin(),e.end());
    for(int i=0;i<n;i++)
    {
        par[i]=i;
    }
    int cou=0,s=0;
    for(int i=0;i<e.size();i++)
    {
        int u=find_p(e[i].u);
        int v=find_p(e[i].v);
        if(u!=v)
        {
            par[u]=v;
            s+=e[i].w;
            cou++;
            if(cou-1==n)
              break;
        }
    }
      return s;

}
int main()
{
    int n,m,u,v,w;
    cin>>n>>m;
    ifstream in;
    in.open("Input_for_mst.txt");
    while(in>>u>>v>>w)
    {
cout<<u<<"  "<<v<<" "<<w<<endl;
        edge ed;
        ed.u=u;
        ed.v=v;
        ed.w=w;
        e.push_back(ed);
    }
    cout<<mst(n);

}
