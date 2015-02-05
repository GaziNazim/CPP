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
int main()
{
    cout<<asin(1);
        int t;
    double a,b,sq;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf",&a,&b);
        sq=sqrt(a*a+b*b);
        if(a==0&&b==0)
            printf("0.00 0.00\n");
       else if(a>=0&&b>=0)
        printf("%.2lf %.2lf\n",asin(abs(b)/sq),sq);
        else if(a>=0&&b<=0)
            printf("%.2lf %.2lf\n",pi-asin(abs(b)/sq),sq);
        else if(a<=0&&b>=0)
            printf("%.2lf %.2lf\n",2*pi-asin(abs(b)/sq),sq);
        else if(a<=0&&b<=0)
            printf("%.2lf %.2lf\n",pi+asin(abs(b)/sq),sq);


    }
    return 0;
}
