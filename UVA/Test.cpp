#include <stdio.h>
int main()
{
    int n,num[5],a,i,j,avg;

    scanf("%d",&n);
    for(j=0; j<n; ++j)
    {
        for(a=0,i=0; a<5; a++)
        {

            scanf("%d", &num[a]);
            i+=num[a];
            avg=i/5;
        }

        printf("Average %d\n",avg);
    }

    return 0;
}
