#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
double fun(double x)
{
    return (x*x-x-2);
}
int main()
{
    double x1,x2,x,f[3];
    ifstream in;
    in.open("falseposition.txt");
    cin>>x1>>x2;
    while(1)
    {
        f[1]=fun(x1);
        f[2]=fun(x2);
        x=x1-(f[1]*((x2-x1)/(f[2]-f[1])));
        f[0]=fun(x);
        if(abs(f[0])<.00001)
        {
            cout<<x;
            break;
        }
        else
        {
            if(f[0]*f[1]<0)
                x2=x;
            else
                x1=x;
        }
    }
    return 0;
}
