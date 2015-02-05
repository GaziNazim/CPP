#include<iostream>
#include<queue>
#include<vector>
#include<fstream>
#define infinity 100000;
using namespace std;
int cost[10][10];
int w(int src,int dis,int n)
{

    for(int k=0;k<n;k++)
    {
        for(int j=0;j<n;j++)
            for(int i=0;i<n;i++)
        {
            if(cost[i][j]>(cost[i][k]+cost[k][j]))
                cost[i][j]=cost[i][k]+cost[k][j];
        }
    }
    return cost[src][dis];
}
int main()
{
     ifstream in;
   in.open("graph.txt");
   int n=8;
   //cin>>n;
   cost[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cost[i][j]=1000;
   for(int i=0;i<n;i++)
   {
       int x,y, c;
      in>>x>>y>>c;
    cost[x][y]=c;
    cost[y][x]=c;
   }
   cout<<w(1,4,n);
}

