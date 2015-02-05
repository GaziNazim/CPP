#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
/*struct data
{
    string name;
    int income;
    bool operator < (const data& b) const
    {
        if(income==b.income)
        {
            return strlen(name) < strlen(b.name);
        }
        else
            return income>b.income;

    }
};*/
struct data {



long long income;



bool operator < (const  data& b ) const {
    cout<<endl<<income<<"   "<<b.income<<endl;
 return income < b.income;



}

};



int main()
{
   vector<data>d;
   for(int i=0;i<2;i++)
   {
       data n;
       cin>>n.income;
       d.push_back(n);
   }
   sort(d.begin(),d.end());
   cout<<"sorted: ";
    for(int i=0;i<2;i++)
   {
     cout<<endl<<d[i].income<<endl;
   }
}
