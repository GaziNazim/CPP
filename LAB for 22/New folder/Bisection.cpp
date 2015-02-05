#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
double fun(double x)
{
    return (x*x-4*x-10);
}
int main()
{
    int a[3];
    ifstream in;
    in.open("bisection.txt");
    double xmax,x,rem,x1,x2,mid,fo,f1,f2;
    cout<<"Enter the coefficent: ";
    for(int i=0;i<3;i++)
        in>>a[i];
    xmax=sqrt(pow((a[1]/a[0]),2)-2*(a[2]/a[0]));
    cout<<xmax;
    x=-xmax;
    rem=0;
    while(1)
    {
        double f=x*x-4*x-10;
        if(f*rem<0)
        {
            x2=x;
            x1=--x;
            break;
        }
        else
            x++;
            rem=f;
    }
    while(1)
    {
         mid=(x1+x2)/2;
         f1=fun(x1);
         f2=fun(x2);
         fo=fun(mid);
         if(f1*fo<0)
            x2=mid;
         else
            x1=mid;
         if((x2-x1)/2<=.001)
            break;


    }
    cout<<x2<<"  "<<x1<<endl;
    cout<<(x2+x1)/2;
    return 0;
}
