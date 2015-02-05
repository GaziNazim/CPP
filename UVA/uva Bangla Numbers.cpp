#include<bits/stdc++.h>
using namespace std;
int p[]={10,100,100,100};
string s[]={"shata","hajar","lakh","kuti"};
int bangla(long long num,int pos)
{
    if(num==0)
        return 0;
    else
        bangla(num/p[pos],(pos+1)%4);
    if(num%p[pos])
        cout<<" "<<num%p[pos]<<" "<<s[pos];
    else if(pos==3)
        cout<<" "<<s[pos];
    return 0;
}
int main()
{
    long long num;
    int t=0;

    while(scanf("%lld",&num)!=EOF)
    {

    t++;
    printf("%4d.",t);
    bangla(num/100,0);
    if(!(num/100)||(num%100))
    cout<<" "<<(num%100);
    cout<<endl;
    }
    return 0;
}
