#include<bits/stdc++.h>
#define pf printf
#define sc scanf
#define MAX 1000005
using namespace std;
int main()
{
    char s[1010];
    int num,rem;
    while(scanf("%s",&s))
    {
        if(s[0]=='0'&&s[1]=='\0')
            break;
        int len=strlen(s);
        num=0;
        for(int i=0; i<len-1; i+=2)
        {

            num+=s[i]-'0';
            num-=s[i+1]-'0';
        }
        if((len%2)!=0)
          num+=s[len-1]-'0';
        num%=11;
        if(!num)
            pf("%s is a multiple of 11.\n",s);
            else
                pf("%s is not a multiple of 11.\n",s);
    }

}
