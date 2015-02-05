//Just Calculate all difference and print the
//minimum difference country number

#include<bits/stdc++.h>
using namespace  std;
int main()
{
    char city[105][5];
    char c;
    string s;
    int n,dif[101];
    bool t=true;
    while(t)
    {
        memset(dif,0,sizeof dif);
        n=0;
        for(int  i=0;getline(cin,s);i++)
        {
            if(s[0]=='e')
                break;
                if(s[0]=='#')
                {
                    t=false;
                    break;
                }
           stringstream ss(s);
           for(;ss>>c;)
           {
               if(c=='r')
               {
                   ss>>c;
                   ss>>c;
                   city[i][0]=c;
               }
               else if(c=='o')
               {
                   ss>>c;
                   ss>>c;
                   city[i][1]=c;
               }
               else if(c=='y')
               {
                   ss>>c;
                   ss>>c;
                   city[i][2]=c;
               }
               else if(c=='g')
               {
                   ss>>c;
                   ss>>c;
                   city[i][3]=c;
               }
               else if(c=='b')
               {
                   ss>>c;
                   ss>>c;
                   city[i][4]=c;
               }

           }
           n++;
        }

       for(int  i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(i==j)
                continue;
               for(int  k=0;k<5;k++)
               {
                   if(city[i][k]!=city[j][k])
                    dif[j]++;
               }
           }
       }
       int  p=dif[0],ind=0;

       for(int i=1;i<n;i++)
       {
           if(dif[i]<p)
           {
               ind=i;
               p=dif[i];
           }
       }
       if(t)
       cout<<(ind+1)<<endl;

    }
    return 0;
}
