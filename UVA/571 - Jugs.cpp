#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(__typeof(n) i=0;i<n;i++)
#define arry_size 1010
#define inf 10000
#define filla 0
#define fillb 1
#define emptya 2
#define emptyb 3
#define pourab 4
#define pourba 5
struct sta
{
    int a,b;

};
string s[]={"fill A","fill B","empty A","empty B","pour A B","pour B A"};
int work[1010][1010];
sta parent[1010][1010];
int cost[1010][1010];
void print(int a,int b)
{
    if(cost[a][b]!=0)
    {print(parent[a][b].a,parent[a][b].b);
    cout<<s[work[a][b]]<<endl;}

}
int main()
{

    int ua,ub,n;
    sta u,v;
    int t;
    stack<sta>q;
    while(scanf("%d %d %d",&ua,&ub,&n)==3)
    {


        REP(i,arry_size) REP(j,arry_size) cost[i][j]=inf;
        u.a=0;u.b=0;
        q.push(u);


        cost[0][0]=0;
        for(;!q.empty();)
        {
            u=q.top();
            if(u.b==n)
            break;
             q.pop();
            t=cost[u.a][u.b]+1;
        //fill a;
        v.a=ua;
        v.b=u.b;
        if(cost[v.a][v.b]>t)
        {
            cost[v.a][v.b]=t;
            parent[v.a][v.b]=u;
            work[v.a][v.b]=filla;
            q.push(v);
        }
        //felling b
        v.a=u.a;
        v.b=ub;
        if(cost[v.a][v.b]>t)
        {
            cost[v.a][v.b]=t;
            parent[v.a][v.b]=u;
            work[v.a][v.b]=fillb;
            q.push(v);
        }
        //empty a
        v.a=0;
        v.b=u.b;
        if(cost[v.a][v.b]>t)
        {
            cost[v.a][v.b]=t;
            parent[v.a][v.b]=u;
            work[v.a][v.b]=emptya;
            q.push(v);
        }
        //empty b
        v.a=u.a;
        v.b=0;
        if(cost[v.a][v.b]>t)
        {
            cost[v.a][v.b]=t;
            parent[v.a][v.b]=u;
            work[v.a][v.b]=emptyb;
            q.push(v);
        }
      //pour AB
        if(u.b+u.a<=ub)
        {
            v.b=u.b+u.a;
            v.a=0;
        }
        else
        {
            v.b=ub;
            v.a=u.a-(ub-u.b);
        }
        if(cost[v.a][v.b]>t)
        {
            cost[v.a][v.b]=t;
            parent[v.a][v.b]=u;
            work[v.a][v.b]=pourab;
            q.push(v);
        }
        //pour BA
        if(u.a+u.b<=ua)
        {
            v.a=u.a+u.b;
            v.b=0;
        }
        else
        {
            v.a=ua;
            v.b=u.b-(ua-u.a);
        }
        if(cost[v.a][v.b]>t)
        {
            cost[v.a][v.b]=t;
            parent[v.a][v.b]=u;
            work[v.a][v.b]=pourba;
            q.push(v);
        }




        }
        print(u.a,u.b);
        cout<<"success\n";


    }
    return 0;
}


