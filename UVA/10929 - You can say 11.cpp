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
//        int len=s.size();
        num=0;
        for(int i=0;i<len;i++)
        {

            num=num*10+(s[i]-'0');
            if(num<11)
                continue;
            num=num%11;
        }
        if(!num)
            cout<<s<<" is a multiple of 11.\n";

        else
        cout<<s<<" is not a multiple of 11.\n";

    }

}
