#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    string num1;
    char num2[150];
    int i,j,k,l,r=0,c;
    string s;
    int num[150];
    for(i=0;i<150;i++)
    {
        num[i]=0;
    }
    while(1)
    {
        getline(cin,num1);
        j=0;
      if(num1=="0")
        break;
      i=num1.size();
        while(i>0||r>0)
        {
            if(i>0)
            {
                c=(num[j]+(num1[i-1]-48)+r)/10;
                num[j]=(num[j]+(num1[i-1]-48)+r)%10;

                r=c;
                i--;

            }
            else if(r>0)
            {
                num[j]=(num[j]+r)%10;
                r=r/10;
            }
            j++;

        }



    }
    for( i=149;i>=0;i--)
    {
        if(num[i]!=0)
            break;
    }
    for(j=0;i>=0;i--)
    {
        num2[j]=num[i]+48;
        j++;
    }
    num2[j]='\0';
    printf("%s\n",num2);
    return 0;
}
