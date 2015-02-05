#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    vector<int>v;
    cout<<"Enter activity:";
    cin>>n;
    int t[n][2],num=1;
    int j=0;
    v.push_back(j);
    for(int i=0;i<n;i++)
    {
        cout<<"Start time :";
        cin>>t[i][0];
        cout<<"End time:";
        cin>>t[i][1];
    }
    for(int i=1;i<n;i++)
    {
        if(t[j][1]<=t[i][0])
        {
            num++;
            j=i;
            v.push_back(j);
        }
    }
    cout<<num<<endl;
    for(int i=0;i<v.size();i++)
    {
       cout<<"selected item:";
       cout<<t[v[i]][0]<<"   "<<t[v[i]][1]<<endl;
    }
    cout<<num;

    return 0;
}

