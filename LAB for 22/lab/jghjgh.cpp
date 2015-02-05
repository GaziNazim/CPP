#include<iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"Enter coin no :";
    cin>>c;
    int C[c];
    int s[c];
    for(int i=0;i<c;i++)
   {
       cin>>C[i];
       s[i]=0;
   }
     cout<<"Enter Dollar :";
    cin>>n;
    int sum=0;
    int i=0,j=0;
    while(sum<n)
    {

        if(n>=sum+C[i])
        {
            sum=sum+C[i];
            s[i]++;
            //cout<<s[i];
        }
        else
        {
            i++;
            if(C[i]==0)
            i++;
        }
        if(i>=c)
        break;
    }
        for(int i=0;i<c;i++)
    {
        if(s[i])
        {
            cout<<C[i]<<"   "<<s[i]<<endl;
        }


    }
   return 0;
}

