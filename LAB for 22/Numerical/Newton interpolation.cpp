#include<iostream>
#include<cmath>
#include<fstream>
#include<algorithm>
using namespace std;
double ff[10][10],aa,b,f[10],a[10],x[10];
double rec(int i ,int j)
{
    if(i==j)
        return f[i];
    else
    {
        if(ff[i+1][j]==0)
           ff[i+1][j]=rec(i+1,j);
        if(ff[i][j-1]==0)
            ff[i][j-1]=rec(i,j-1);
            double ans=ff[i+1][j]- ff[i][j-1];
            return (ans/(x[j]-x[i]));

    }
}
int main()
{
    ifstream in;
    double xx,p;
    int n=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        ff[i][j]=0;
    }
    in.open("Newton.txt");
    while(in>>aa>>b)
    {
        x[n]=aa;
        f[n]=b;
        n++;
    }
    //na;
  /*  for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" "<<f[i]<<endl;
    }*/
a[0]=f[0];
for(int i=1;i<n-1;i++)
{
    a[i]=rec(0,i);
   // cout<<a[i]<<endl;
}
cin>>xx;
p=0;
for(int i=0;i<n-1;i++)
{
    double temp=1;
    for(int j=0;j<i;j++)
    {
        temp=temp*(xx-x[j]);
    }
    p=p+temp*a[i];
}
cout<<p;
    return 0;
}
