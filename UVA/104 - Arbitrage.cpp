#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(__typeof(b) i=a;i<=b;i++)
vector<double>currency[25];
struct state
{
    int start,next;
    double p_con;
};
int taken[25];
int main()
{
    int n;
    double x;
    while(scanf("%d",&n)!=EOF)
    {

        rep(i,1,n)
        rep(j,1,n-1)
        {
            cin>>x;
            currency[i].push_back(x);
        }
    }


    return 0;
}
