//Kono number er power korte gele er last digit er sathe sob somoy
//last digit multiply hoy. tai last digit ber korte ekhane sudhu m er last
//digit nia calculation kora hoice.
//ar power korle last digit cyclic order e aste thake
//EX 2-- 2,4,8,6
//   9-- 9,1
//so n er last 2 digit ke 2 or 4 dia modkre nia seta dia m ke power korle
//amra mder ans pe jabo.

#include<bits/stdc++.h>
#define pf printf
#define sc scanf
#define MAX 1000005
long long num,p;
using namespace std;
int rec()
{
    int n,p4=p%4,p2=p%2;
    if(num==2||num==3||num==7||num==8)
    {
        if(p4)
          num=pow(num,p4);
          else num=pow(num,4);
          n=num%10;
          return n;
    }
    if(num==4||num==9)
    {
        if(p2)
          num=pow(num,p2);
          else num=pow(num,2);
          n=num%10;
          return n;
    }

}
int main()
{
    int len;
    while(scanf("%s %s",&s1,&s2)==2)
    {
        if(s1[0]=='0'&&s2[0]=='0'&&s1[1]=='\0'&&s2[1]=='\0')
            break;
        len=strlen(s1);
        num=s1[len-1]-'0';
        if(num==1||num==5||num==6||num==0)
            pf("%lld\n",num);
        else
        {
             len=strlen(s2);
             p=s2[len-1]-'0';
             if(len-2>=0)
             p=p+(s2[len-2]-'0')*10;
              cout<<rec()<<endl;


        }



    }
    return 0;
}
