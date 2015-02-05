#include<bits/stdc++.h>
using namespace std;
#define MAX 1000009
#define ull unsigned  long  long
bool prime[MAX];
void save()
{
    prime[0]=false;
    prime[1]=false;
    prime[2]=true;
    for(ull i=3;i<=MAX;i+=2)
        prime[i]=true;
    for(ull i=3;i<=sqrt(MAX);i+=2)
    {
           if(prime[i])
            for(ull j=i*i;j<=MAX;j+=(i*2))
            prime[j]=false;
    }

}
int main()
{
    save();

    for(ull i=0;i<=100;i++)
        if(prime[i])
        cout<<i<<endl;
    cout<<"Prime End\n\n\n";

    return 0;
}
