#include<bits/stdc++.h>
using namespace std;
int main()
{

    int ind[110],ans[110],x,y,n,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        vector<int>node[110];
        if(n==0&&m==0)
            break;
            for(int i=0;i<110;i++)
                ind[i]=0;
       for(int i=0;i<m;i++)
       {
           cin>>x>>y;
           node[x].push_back(y);
           ind[y]++;
       }
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=n;j++)
           {
               if(ind[j]==0)
               {
                   ans[i]=j;
                   ind[j]=-1;
                   for(int k=0;k<node[j].size();k++)
                   {
                       ind[node[j][k]]--;
                   }
                   break;
               }
           }
       }
       for(int i=1;i<=n;i++)
       {
           cout<<ans[i]<<" ";
       }
       cout<<endl;

    }

    return 0;
}
