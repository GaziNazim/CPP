#include<bits/stdc++.h>
using namespace std;
vector<int>ans;
int len;
string s;
int main()
{
    bool t=true;
    long long sum;
    while(cin>>s)
    {
        t=true;
        ans.clear();
        len =s.size();
        sum=0;
        for(int i=len-1; i>=0; i--)
        {
            if(s[i]==')')
                sum++;
            else if(s[i]=='#')
            {
                t=true;
                 break;
            }

            else
                sum--;
            if(sum<0)
            {
                t=false;
                break;
            }

        }
        sum =0;
        if(t)
        {
            for(int i=0; i<len; i++)
        {
              if(s[i]=='#')
              {
                  sum--;
                  ans.push_back(1);
              }
              else if(s[i]==')')
                sum--;
              else if(s[i]=='(')
                sum++;

                if(sum<0)
                {
                    t=false;
                    break;
                }
        }
        len = ans.size()-1;
        if(sum>=0)
        {
            ans[len]+=sum;
            for(int i=0;i<=len;i++)
            cout<<ans[i]<<endl;

        }
        else cout<<"-1\n";

        }

        else
            cout<<"-1\n";
    }

    return 0;
}
