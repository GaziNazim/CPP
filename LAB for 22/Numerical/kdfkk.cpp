#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    stack<int>s;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
            if(n==0)
            {
                cout<<"0\n";
                continue;
            }
        while(n!=0)
        {
                s.push(n%3);
            n=n/3;
        }
        while(s.size()!=0)
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;
    }
    return 0;
}
