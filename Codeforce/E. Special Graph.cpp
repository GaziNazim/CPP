#include<bits/stdc++.h>
using namespace std;
vector<char> graph[10000];
char color[4]={'1','2','3','4'};
int n,m;
void show()
{
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<graph[i][j];

        }
        cout<<endl;
    }
}
int dfs(int i,int j)
{

    if((i==n)&&(j>m))
    {

        show();
        return 2;
    }
    for(;i<=n;i++)
    {

        for(;j<=m;j++)
        {
            if(graph[i][j]!='0')
            {

                char c=graph[i][j];
                if((graph[i][j+1]==c)||(graph[i][j-1]==c)||(graph[i+1][j]==c)||(graph[i-1][j]==c)||(graph[i+1][j+1]==c)||(graph[i+1][j-1]==c)||
                   (graph[i-1][j+1]==c)||(graph[i-1][j-1]==c))
                    return 1;
                    else if(i==n&&j==m)
                    {
                        show();
                        return 2;
                    }
            }
            else
            {
                for(int k=0;k<4;k++)
                {
                     if((graph[i][j+1]==color[k])||(graph[i][j-1]==color[k])||(graph[i+1][j]==color[k])||(graph[i-1][j]==color[k])||(graph[i+1][j+1]==color[k])||(graph[i+1][j-1]==color[k])||
                   (graph[i-1][j+1]==color[k])||(graph[i-1][j-1]==color[k]))
                   continue;
                   else
                   {

                       graph[i][j]=color[k];
                       int cond = dfs(i,j+1);
                       if(cond==2||cond==1)
                        return cond;
                   }
                }
                graph[i][j]='0';
                return 0;
            }
        }
        j=1;
    }
    return 1;
}
int main()
{
    int node;
    string s;
    cin>>n>>m;
    for(int i=0;i<=n+1;i++)
    {
        graph[i].push_back(0);
    }
    for(int i=0;i<=m+1;i++)
    {
        graph[0].push_back(0);
        graph[n+1].push_back(0);
    }

    for(int i=1;i<=n;i++)
    {
        cin>>s;
        for(int j=1;j<=m;j++)
        {

             graph[i].push_back(s[j-1]);
        }
    }
    for(int i=0;i<=n+1;i++)
    {
        graph[i].push_back(0);
    }

    if(dfs(1,1)!=2)
        cout<<"0";
        return 0;

}
