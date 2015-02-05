#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>word;
    string s1,s2;
    int n,m;
    scanf("%d %d",&n,&m);
    while(m--)
    {
        cin>>s1>>s2;
        word[s1]=s2;
    }
    while(n--)
    {
        cin>>s1;
        s2=word[s1];
        if(s1.size()>s2.size())
            cout<<s2<<" ";
           else
            cout<<s1<<" ";
    }
    cout<<endl;
    return 0;
}
