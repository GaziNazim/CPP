#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;(i<movie[0].size()&&(sum+movie[0][i]<=maxi));i++)
    {
        for(int j=0;j<movie[1].size();j++)
        {
            for(int k=0;k<movie[2].size();k++)
            {
                for(int l=0;l<movie[3].size();k++)
                {
                    if(sum+movie[3][i]<=maxi)
                    {
                        ans=sum+movie[3][i];
                        f=0;
                    }
                }
            }
        }
    }

    return 0;
}
