#include<bits/stdc++.h>
using namespace std;
int num[]={2,7,2,3,3,4,2,5,1,2};
int main()
{
    string s;
    while(cin>>s)
    {
        cout<<num[s[0]-'0']*num[s[1]-'0']<<endl;
    }
    return 0;
}
