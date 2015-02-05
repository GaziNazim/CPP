#include<bits/stdc++.h>
using namespace std;
int main()
{

    string alco_name,name1,name2;
    int n,e,indeg[110],ans[110],c=0;
    while(scanf("%d",&n)!=EOF)
    {
        c++;
        if(n==0)
            break;
            for(int i=0;i<n;i++)
                indeg[i]=0;
             map<string,int>nodindex;
    map<int,string>nodename;
    vector<int>node[110];
        for(int i=0;i<n;i++)
        {
            cin>>alco_name;
            nodindex[alco_name]=i;
            nodename[i]=alco_name;

        }
        cin>>e;
        for(int i=0;i<e;i++)
        {
            cin>>name1>>name2;
            node[nodindex[name1]].push_back(nodindex[name2]);
            indeg[nodindex[name2]]++;

        }
          for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(indeg[j]==0)
               {
                   ans[i]=j;
                   indeg[j]=-1;
                   for(int k=0;k<node[j].size();k++)
                   {
                       indeg[node[j][k]]--;
                   }
                   break;
               }
           }
       }
       printf("Case #%d: Dilbert should drink beverages in this order:",c);
              for(int i=0;i<n;i++)
       {
           cout<<" "<<nodename[ans[i]];
       }
       cout<<".\n\n";
    }

    return 0;
}
