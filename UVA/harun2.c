#include<stdio.h>

int main()
{
    float a[4],b[4],c[4],d[4],y[4],x[4];
    float u[4][4],l[4][4],A[4][4];
    int i;
    for( i=1;i<=3;i++)
    {
        scanf("%f %f %f %f",&a[i],&b[i],&c[i],&d[i]);
    }
    printf("\nThis is total matrix: \n");
    for( i=1;i<=3;i++)
    {
        printf("%f %f %f %f\n",a[i],b[i],c[i],d[i]);
    }
    for(i=1;i<4;i++)
    {
        A[i][1]=a[i];

    }
    for(i=1;i<4;i++)
    {
        A[i][2]=b[i];
    }
    for(i=1;i<4;i++)
    {
        A[i][3]=c[i];
    }

   int j;
   printf( "\n\n\nThis is A matrix:\n");
   for(i=1;i<4;i++)
   {
       for(j=1;j<4;j++)
   {
       printf("%f ",A[i][j]);

   }
   printf("\n");

   }


  for(i=1;i<4;i++)
    u[1][i]=A[1][i];

  l[2][1]=A[2][1]/u[1][1];
  u[2][2]=A[2][2]-u[1][2]*l[2][1];
  u[2][3]=A[2][3]-u[1][3]*l[2][1];
  l[3][1]=A[3][1]/u[1][1];
  l[3][2]=(A[3][2]-u[1][2]*l[3][1])/u[2][2];
  u[3][3]=A[3][3]-(u[1][3]*l[3][1])-(u[2][3]*l[3][2]);

  for(i=1;i<4;i++)
    for(j=1;j<4;j++)
  {
      if(i==j)
        l[i][j]=1;
      if(i<j)
        l[i][j]=0;
      if(i>j)
        u[i][j]=0;
  }
printf("\n\n\nThis is L matrix:\n");
    for(i=1;i<4;i++)
   {
       for(j=1;j<4;j++)
   {
       printf("%.2f ",l[i][j]);

   }
   printf("\n");

   }

   printf("\n\n\nThis is U matrix:\n");
    for(i=1;i<4;i++)
   {
       for(j=1;j<4;j++)
   {
       printf("%.2f ",u[i][j]);

   }
   printf("\n");

   }


   y[1]=d[1];
   y[2]=(d[2]-l[2][1]*y[1])/l[2][2];
   y[3]=(d[3]-l[3][1]*y[1]-l[3][2]*y[2])/l[3][3];
   printf("\n\n\nThis is Y mattrix:\n%f\n%f\n%f\n",y[1],y[2],y[3]);

   x[3]=y[3]/u[3][3];
   x[2]=(y[2]-u[2][3]*x[3])/u[2][2];
   x[1]=(y[1]-u[1][2]*x[2]-u[1][3]*x[3])/u[1][1];

    printf("\n\n\nANS is:\nX=%f\nY=%f\nZ=%f",x[1],x[2],x[3]);
    return 0;
}
