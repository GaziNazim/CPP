#include<iostream>
#include<cmath>
using namespace std;
int x[5];
void show(int n)
{

    for(int i=1;i<=n;i++)
    {
        //cout<<x[i]<<"  ";
        for(int j=1;j<=n;j++)
        {
            if(j==x[i])
            {
                cout<<x[i]<<" ";
                continue;
            }
             else
            cout<<"* ";
        }
        cout<<"\n";
    }
    cout<<endl;
    cout<<endl;cout<<endl;
    cout<<endl;

}
bool place(int k,int i)
{
    for(int j=1;j<k;j++)
    {
        if(x[j]==i)
            return false;
           else if(abs(k-j)==abs(x[j]-i))
            return false;
           if(((abs(k-j)==1)&&(abs(x[j]-i)==2))||((abs(k-j)==2)&&(abs(x[j]-i)==1)))

             return false;




    }
    return true;
}
void dfs(int k,int n)
{
    for(int i=1;i<=n;i++)
    {
        if(k==1&&i>n/2)
            break;
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
            show(n);
            else
            dfs(k+1,n);

        }
    }

}

int main()
{
    dfs(1,10);
    return 0;
}
