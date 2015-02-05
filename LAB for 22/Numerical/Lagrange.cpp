#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
int main()
{
    ifstream in;
    double a,b,x[10],f[10];
    int n=0;
    in.open("lagrange.txt");
    while(in>>a>>b)
    {
        x[n]=a;
        f[n]=b;
        n++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<x[i];
    }
    return 0;
}
