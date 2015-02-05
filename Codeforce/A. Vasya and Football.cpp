#include<bits/stdc++.h>
using namespace std;
struct team
{
    int n,t,c=0;
};
int main()
{
    int n,t,num,tt=0;
    char p,c;
    vector<int>home,away;
    team h[105],a[105];
    string team1,team2;
    cin>>team1>>team2;
    cin>>n;
    while(n--)
    {
        cin>>t>>p>>num>>c;
        if(t==tt)
            continue;
        if(p=='h')
        {
            if(c=='y')
           h[num].c++;
           else
           {
               //cout<<h[num].c<<endl;
               if(h[num].c<2)
                h[num].c=2;
               else
                h[num].c+=2;
           }

           h[num].t=t;
           h[num].n=num;
                if(h[num].c==2)
        {
            cout<<team1<<" "<<h[num].n<<" "<<h[num].t<<endl;
        }
           home.push_back(num);
        }
        else
        {
              if(c=='y')
           a[num].c++;
           else
            {
                if(a[num].c<2)
                a[num].c=2;
               else
                a[num].c+=2;
            }
             a[num].t=t;
             a[num].n=num;

        if(a[num].c==2)
        {
            cout<<team2<<" "<<a[num].n<<" "<<a[num].t<<endl;
        }
             away.push_back(num);

        }
        tt=t;

    }


    return 0;
}
