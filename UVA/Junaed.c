#include<stdio.h>
int main()
{
    int num[100],n,des,total=0,i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter Your desire number:  ");
    scanf("%d",&des);
    printf("Position : ");
    for( i=0;i<n;i++)
    {

        if(des==num[i])
        {
            printf("%d  ",i+1);
            total++;
        }
    }
     printf("\nTotal:   %d  ",total);


    return 0;
}
