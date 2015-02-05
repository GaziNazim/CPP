#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,rem;

    string s;
      vector<string>st;

        cin>>n;
        for(int j=0;j<n;j++)
        {

            cin>>s;
            st.push_back(s);

        }

        int j;


        rem=3;
        for(j=0;j<n;j++)
        {
            if(st[j]=="W")
                rem=3;
            else rem--;
            if(rem==0)
                break;
        }

        if(j==n&&rem!=0)
            printf("Case %d: Yay! Mighty Rafa persists!\n",i);
        else
            printf("Case %d: %d\n",i,j+1);

    }
    return 0;
}
