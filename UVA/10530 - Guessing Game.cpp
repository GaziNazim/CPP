#include<bits/stdc++.h>
#define MAX 100
#define ll long long
#define rep(i,a) for(int i=0;i<int(a);i++)
#define pb push_back
#define sc scanf
#define pf printf
#define Max_n 1010
using namespace std;
int main()
{
    char s1[]="too high";
    char s2[]="too low";
    char s3[]="right on";
    int Max=MAX;
    int Min =0;
    int n;
    char s[15];
    while(1)
    {

        scanf("%d",&n);
        if(n==0)
            break;
        scanf(" %[^\n]",s);
        if(!strcmp(s1,s)&&Max>n)
            Max=n;
        else if(!strcmp(s2,s)&&Min<n)
            Min=n;
        if(!strcmp(s,s3))
        {
            if(Max>n&&Min<n)
                pf("Stan may be honest\n");
            else
                pf("Stan is dishonest\n");
                Max=MAX;
                Min=0;
        }

    }
    return 0;
}
