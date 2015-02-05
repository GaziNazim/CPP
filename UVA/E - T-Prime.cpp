#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,num;
    int t;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        t=0;
        cin>>num;
        int con=min((int)sqrt(num)+1,101);
        for(int j=2;j<=con;j++)
        {
            if(num%j==0)
                t++;
            if(t==2)
                break;
        }
        if(t==1)#include<bits/stdc++.h>
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

       unsigned long long  n,num,root;
       cin>>n;
       while(n--)
       {
           cin>>num;
           root=sqrt(num);
           if(prime[root]&&root*root==num)
            cout<<"YES\n";
           else
            cout<<"NO\n";
       }



    return 0;
}

            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}
