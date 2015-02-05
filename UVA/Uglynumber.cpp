#include<bits/stdc++.h>
using namespace std;
int k=0;
int minmum(int a,int b,int c)
{

    if(a<=b&&a<=c)
        return a;
    else if(b<=a&&b<=c)
        return b;
        else
        return c;
}
int main()
{
    unsigned long res, next2,next3,next5,i2,i3,i5,ans[1505];
    i2=0;
    i3=0;
    i5=0;
    next2=2;
    next3=3;
    next5=5;
    for(int i=1;i<1500;i++)
    {
        res=minmum(next2,next3,next5);

        ans[i]=res;
        if(res==next2)
        {
            i2++;
            next2=ans[i2]*2;
        }
         if(res==next3)
        {
            i3++;
            next3=ans[i3]*3;
        }
         if(res==next5)
        {
            i5++;
            next5=ans[i5]*5;
        }
    }
    cout<<"The 1500'th ugly number is "<<res<<".\n";


    return 0;
}
