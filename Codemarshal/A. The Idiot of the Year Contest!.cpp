#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>

using namespace std;

string f[370]="";

void fact()
{
    int temp;
    char c[50];
    f[1]="1";
    for(int i=2; i<368; i++)
    {
        temp=0;
        for(int j=0; j<f[i-1].size(); j++)
        {
            temp=i*(f[i-1][j]-'0')+temp;
            if(temp)
                itoa(temp%10,c,10);
            else
                itoa(temp,c,10);
            temp=temp/10;
            f[i]+=c;
        }

        if(temp)
        {
            itoa(temp,c,10);
            string s;
            s=s+c;
            reverse(s.begin(),s.end());
            f[i]+=s;
        }
    }
}
int main()
{
    int t,d,n,num;
    fact();
//    for(int i=1;i<=10;i++)
//        cout<<f[i]<<" ";
//    cout<<endl;

    cin>>t;
    while(t--)
    {
        num=0;
        string ss;
        scanf("%d %d",&d,&n);
        ss = f[d];
        int len = ss.size();

        for(int i=0; i<len; i++)
        {
            if(n==(ss[i]-'0'))
                num++;
        }
        cout<<num<<endl;
    }
    return 0;
}
