
#include<stdio.h>

int main()
{
    float a[4],b[4],c[4],d[4],y[4],x[4];
    float u[4][4],l[4][4],A[4][4];
    int i,j;



   char  eq[3][30];

    gets(eq[0]);
    gets(eq[1]);
    gets(eq[2]);
    float num;
    int flag ;
    for( i=0;i<3;i++)
    {
        flag =0;
        for( j=0;eq[i][j]!='\0';j++)
        {

            if(eq[i][j]=='-')
            {
                flag=1;
                continue;
            }
              if(eq[i][j]=='+')
                    flag=0;

            if(eq[i][j]>=48&&eq[i][j]<=57)
                while(1)
            {
                if(eq[i][j]>=48&&eq[i][j]<=57)
                {
                    printf("%c  ",eq[i][j]);
                    num=num*10+eq[i][j]-48;
                    j++;
                }

                else
                    break;

            }
            if(num==0)
                num=1;
            if(flag)
                num=num*(-1);
            if(eq[i][j]=='x')
                a[i+1]=num;
            else if(eq[i][j]='y')
                b[i+1]=num;
            else if(eq[i][j]=='z')
                c[i+1]=num;
            else
                d[i+1]=num;
                printf("Num : %f\n",num);
                num=0;

        }
    }






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

    for(i=1;i<4;i++)
   {
       for(j=1;j<4;j++)
   {
       printf("%.2f ",l[i][j]);

   }
   printf("\n");

   }

   printf("U   :\n");
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
   printf("%f   %f    %f\n",y[1],y[2],y[3]);

   x[3]=y[3]/u[3][3];
   x[2]=(y[2]-u[2][3]*x[3])/u[2][2];
   x[1]=(y[1]-u[1][2]*x[2]-u[1][3]*x[3])/u[1][1];

    printf("%f   %f    %f",x[1],x[2],x[3]);
    return 0;
}
