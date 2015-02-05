#include<bits/stdc++.h>
using namespace std;
int killed[1025][1025];
bool check(int i,int j)
{
    return i>=0&&j>=0&&i<=1024&&j<=1024;
}
int main()
{
    int t,n,x,y,d,p,k;
    scanf("%d",&t);
    while(t--)
    {
        memset(killed,0,sizeof killed);
        scanf("%d %d",&d,&n);
        while(n--)
        {
            scanf("%d %d %d",&x,&y,&p);
//           k=max(max(k,x),max(k,y));
            for(int i=x-d; i<=x+d; i++)
                for(int j=y-d; j<=y+d; j++)
                    if(check(i,j))
                        killed[i][j]+=p;
        }
        p=-1;
        k=max(x,y);
        for(int i=0; i<=k; i++)
            for(int j=0; j<=k; j++)
            {

                if(killed[i][j]>p)
                {
                    x=i;
                    y=j;
                    p=killed[i][j];
                }

            }
        printf("%d %d %d\n",x,y,killed[x][y]);
//        getchar();
//        getchar();
    }
    return 0;
}
