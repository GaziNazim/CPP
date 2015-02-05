#include<bits/stdc++.h>
#include<string>
#include<sstream>
#include<algorithm>
#include<cstdio>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<vector <int > >node1,node;
map<char,int>idx;
map<int,char>name;
stringstream ss;
int n,ans[50];
bool taken[50];
void DFS(int cn)
{

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
        node1.resize(50);
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
            node[idx[x]].push_back(idx[y]);
            node1[idx[y]].push_back(idx[x]);
        }
        for(int i=0;i<idx.size();i++)
        {
             if(node[idx[i].size()==0)
                DFS(i);
        }




    }
    return 0;
}
