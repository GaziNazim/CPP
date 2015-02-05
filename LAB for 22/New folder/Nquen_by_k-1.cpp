#include<iostream>
using namespace std;
bool place(int k,int i)
{

}
void dfs(int k,int n)
{
    if(k<1)
        return 0;
      if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            show(n);
            else
            dfs(k+1,n);

        }
}
int main()
{
    return 0;
}
