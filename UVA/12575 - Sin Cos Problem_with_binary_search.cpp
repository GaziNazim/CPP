#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstdio>
#define MAX 100000000
#define ll long long
#define rep(i,a) for(int i=0;i<int(a);i++)
#define pb push_back
#define sc scanf
#define pf printf
#define Max_n 1010
#define ull unsigned long long
#define ll long long
#define fin freopen("in.txt","r",stdin)
#define fout freopen("out.txt","w",stdout)
#define pi acos(-1)
using namespace std;
double a,b,ang;
double b_search(double s,double e)
{
    if((e-s)<.00001)
        return s;
    double mid=(double)(s+e)/2;
    double ans1=(double)(a*sin(s)+b*cos(s));
    double ans2=(double)(a*sin(e)+b*cos(e));
    //double ans3=(double)(a*sin(mid)+b*cos(mid));
  //  cout<<s<<"  "<<mid<<"  "<<e<<endl;
    if(ans1>=ans2)
        return  b_search(s,mid);
    else
        return b_search(mid,e);

}
int main()
{
    //cout<<arccos(-1);
    int n;
    cin>>n;
    while(n--)
    {
        sc("%lf %lf",&a,&b);

        if(a>=0&&b>=0)
            ang=0;
        else  if(a<0&&b<0)
            ang=180;
        else if(a>=0&&b<0)
            ang=90;
        else if(a<0&&b>=0)
            ang=270;
            double s=(double)(pi*(ang)/(180));
            double e=(double)(pi*(ang+90)/(180));
            //cout<<"Start "<<s<<"   End  "<<e<<"  ang  "<<ang<<endl;
        double red=b_search(s,e);
        printf("%3.2lf ",red);
        printf("%.2lf\n",sqrt(a*a+b*b));
//          if(!a)
//            printf("%.2lf\n",abs(b));
//        else if(!b)
//            printf("%.2lf\n",abs(a));
//        else
//            printf("%.2lf\n",(double)(a*sin(red)+b*cos(red)));

    }


    return 0;
}
