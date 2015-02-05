#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    for(double i=1;i<100;i++)
    {
        for(double j=1;j<100;j++)
            for(double k=max(i,j);k<100;k++)
        {
            for(int p=3;p<=50;p++)
            {
                double a=pow(i,p);
                double b=pow(j,p);
                double c=pow(k,p);
                if(a+b==c)
                    {
                        cout<<a<<"  "<<b<<"  "<<c<<"   "<<p;
                        return 0;
                    }

            }
        }

    }
    return 0;
}
