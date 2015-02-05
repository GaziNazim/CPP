#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int m,n,c,arr[25],cap[25];
    bool is;
    int test =0;
    int Max;
    while(scanf("%d %d %d",&n,&m,&c)!=EOF)
    {
        test++;
        is=false;
        if(!n&&!m&&!c)
            break;
            Max=0;

        for(int i=0;i<n+4;i++)
            arr[i]=0;

        for(int i=1;i<=n;i++)
        {
            scanf("%d",&cap[i]);
        }
        int sum=0;
        for(int i=1;i<=m;i++)
        {
            scanf("%d",&n);
            if(arr[n])
            {
                sum=sum-cap[n];
                arr[n]=0;
            }
            else
            {

                sum=sum+cap[n];
                arr[n]=1;
            }
            if(Max<sum)
                Max=sum;
            if(sum>c)
            {
                is=true;
            }
        }
         if(sum>c)
            {
                is=true;
            }
            printf("Sequence %d\n",test);
            if(is)
                printf("Fuse was blown.\n\n");
            else
                printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n",Max);

    }
    return 0;
}
