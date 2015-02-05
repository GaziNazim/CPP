#include<bits/stdc++.h>
using namespace std;
 int c[10][10];
int lcs(string x,int i,int j)
{
    if(i==0||j==0)
        return 0;

    else if(c[i][j]==c[i-1][j])
    {
        lcs(x,i-1,j);

    }
    else if(c[i][j]==c[i-1][j-1]+1)
    {
        lcs(x,i-1,j-1);
        cout<<x[i];
    }
else
    {
        lcs(x,i,j-1);

    }
       return 0;
}
int main()
{
    string x,y;
    ifstream in;
    in.open("lcs.txt");
    getline(in,x);
    getline(in,y);
    x='0'+x;
    y='1'+y;
    int m,n;
    m=x.length();
    n=y.length();

    for(int i=0;i<=m;i++)
        c[i][0]=0;
    for(int j=0;j<n;j++)
        c[0][j]=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
          if(x[i]==y[j])
            c[i][j]=c[i-1][j-1]+1;
          else
          c[i][j]=max(c[i-1][j],c[i][j-1]);
        }
    }
for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
         cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    lcs(x,m-1,n-1);
    return 0;

}
