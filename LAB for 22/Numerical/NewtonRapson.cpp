#include<iostream>
#include<cmath>
using namespace std;
double fun(double x)
{
    return(x*x-3*x+2);
}
double dif(double x)
{
    return (2*x-3);
}
int main()
{
    double x,f[2];
    x=0;
    while(1)
    {
        f[0]=fun(x);
        f[1]=dif(x);
        if(f[0]<.000001)
        {
            cout<<x;
            break;
        }
        else
        {
            x=x-f[0]/f[1];
        }
    }
    return 0;
}
