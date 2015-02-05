#include<iostream>
#include<queue>
using namespace std;
struct data {
    int city, dist;
    bool operator < ( const data& p ) const {
        cout<<endl<<dist<<"    "<<p.dist<<endl;
        return dist > p.dist;
    }
};
int main()
{
    priority_queue<data>q;
    for(int i=0;i<2;i++)
    {
        int n;
        cin>>n;
        data d;
        d.dist=n;
        q.push(d);
    }
    cout<<"Q   ";
      for(int i=0;i<2;i++)
    {
       cout<<q.top().dist;
       q.pop();
    }
    return 0;
}
