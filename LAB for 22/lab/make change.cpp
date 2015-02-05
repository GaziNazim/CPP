#include<iostream>
using namespace std;
int main()
{
    int n,c,C[1],s[1];
    cout<<"Enter coin no :";
    cin>>c;
    C[c];
    s[c];
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

        if(sum>=sum+C[i])
        {
            sum=sum+C[i];
            s[i]++;
        }
        else
        {
            i++;
        }
        if(i>=c)
        break;
    }
        for(int i=0;i<c;i++)
    {
        cin>>s[i];

    }
return 0;
}
