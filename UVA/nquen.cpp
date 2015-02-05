#include<bits/stdc++.h>
using namespace std;
int row[9],x,y,line;
bool che(int  r,int c)
{
    for(int  i=1;i<c;i++)
    {
        if((row[i]==r)||(abs(row[i]-r)==abs(c-i)))
            return false;
    }
    return true;
}
void nquen(int c)
{
    if(c>8&&row[y]==x)
    {
        line++;
        printf("%2d      %d",line,row[1]);
        for(int i=2;i<9;i++)
            printf(" %d",row[i]);
        printf("\n");
    }
    for(int i=1;i<9;i++)
    {
        if(che(i,c))
        {
            row[c]=i;
            nquen(c+1);
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        memset(row,0,sizeof row);
        line=0;
        scanf("%d %d",&x,&y);
        printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");
        nquen(1);
        if(t)
            printf("\n");
    }
}
