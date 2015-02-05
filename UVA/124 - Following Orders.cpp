#include<bits/stdc++.h>
#include<string>
#include<sstream>
#include<algorithm>
#include<cstdio>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<vector <int > >node;
map<char,int>idx;
map<int,char>name;
stringstream ss;
int n,ans[50];
bool taken[50];

bool isvalid(int ii)
{
    for(int i=0;i<node[ii].size();i++)
    {

        if(!taken[node[ii][i]])
            {
               return false;}

    }

    return true;
}

void order(int len )
{
    if(len==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<name[ans[i]];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(isvalid(i)&&!taken[i])
        {
            ans[len]=i;
            taken[i]=true;
            order(len+1);
            taken[i]=false;
        }
    }

}


int main()
{
    string line;
    char c,x,y;
    bool t=false;
    while(getline(cin,line))
    {

        n=0;
        ss.clear();
        ss.str(line);
        idx.clear();
        name.clear();
        node.clear();
        node.resize(50);
        for(int i=0;ss >> c;i++)
        {
            n++;
            idx[c]=i;
            name[i]=c;
            taken[i]=false;

        }
        taken[n]=false;
        ss.clear();
        getline(cin,line);
        ss.str(line);
        while(ss >> x >> y)
        {
            node[idx[y]].push_back(idx[x]);
        }
        order(0);


    }
    return 0;
}
