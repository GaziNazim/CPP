#include<iostream>
#include<cstdio>
#include<string>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    map <int,float>res;
    int input;
    cin>>input;
    getchar();
    while(input--)
    {
         int n=0;
        string s;
        getline(cin,s);
        string s2;
        getline(cin,s2);
        stringstream ss(s);
        stringstream ss2(s2);
        vector<int>arr1;
        int arr;
        float arr3;
       while(ss>>arr)
       {
           n++;
           arr1.push_back(arr);
       }

        for(int i=0;ss2>>arr3;i++)
        {
            res[arr1[i]]=arr3;
        }
        for(int i=1;i<=n;i++)
    cout<<res[i]<<endl;



    }

}

