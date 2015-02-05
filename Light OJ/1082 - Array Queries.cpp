#include<bits/stdc++.h>
#define MAX 100010
using namespace std;
int arr[MAX];
int tree[MAX*3];
int i,j;
int bal=0;
int create_tree(int n,int b,int e)
{
    bal++;
    if(b==e)
    {
        tree[n]=arr[b];
        return tree[n];
    }
    int left=n*2;
    int right=left+1;
    int mid=(b+e)/2;
    tree[n]=min(create_tree(left,b,mid),create_tree(right,mid+1,e));
    return tree[n];
}
int query(int n,int b,int e)
{
    if(b>j||e<i)
        return MAX;
    if(b>=i&&e<=j)
        return tree[n];
    int left = n*2;
    int right = left+1;
    int mid=(b+e)/2;
    return min(query(left,b,mid),query(right,mid+1,e));
}
int main()
{
    int t,n,q;
    cin>>t;
    for(int k=1;k<=t;k++)
    {

        scanf("%d %d",&n,&q);
        for(int l=1;l<=n;l++)
        {
            scanf("%d",&arr[l]);
        }
        tree[1]=create_tree(1,1,n);
        printf("Case %d:\n",k);
        for(int l=0;l<q;l++)
        {
            scanf("%d %d",&i,&j);
            printf("%d\n",query(1,1,n));
        }
    }
   // cout<<bal;
  return 0;
}
