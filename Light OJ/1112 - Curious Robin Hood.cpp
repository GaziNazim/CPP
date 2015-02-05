#include<bits/stdc++.h>
#define rep(i,a)  for(int i=0;i<int(a);i++)
#define Max 100010
using namespace std;
int arr[Max],tree[3*Max],f,l,up_node,up_value;
void create_node(int n,int b,int e)
{
    if(b==e)
    {
        tree[n]=arr[b];
        return;
    }
    int lef= n*2;
    int rig=lef+1;
    int mid=(b+e)/2;
    create_node(lef,b,mid);
    create_node(rig,mid+1,e);
    tree[n]=tree[lef]+tree[rig];
}
int query(int n,int b,int e)
{
    if(f>e||l<b)
        return 0;
    if(f<=b&&l>=e)
        return tree[n];
    int lef=n*2;
    int rig=lef+1;
    int mid=(b+e)/2;
    return query(lef,b,mid)+query(rig,mid+1,e);
}
void update(int n,int b,int e)
{
    if(e<up_node||b>up_node)
        return;
    if(b==up_node&&e==up_node)
    {
        tree[n]+=up_value;
        arr[up_node]+=up_value;
        return;
    }
    int lef=n*2;
    int rig=lef+1;
    int mid=(b+e)/2;
    update(lef,b,mid);
    update(rig,mid+1,e);
    tree[n]=tree[lef]+tree[rig];
}
int main()
{
    int t,n,q,rule;
    cin>>t;
    rep(c,t)
    {
        scanf("%d %d",&n,&q);
        rep(i,n)
        scanf("%d",arr+i);
        create_node(1,0,n-1);
        printf("Case %d:\n",c+1);
        rep(i,q)
        {
            scanf("%d",&rule);
            if(rule==1)
            {
                scanf("%d",&up_node);
                up_value=-arr[up_node];
                printf("%d\n",arr[up_node]);
                update(1,0,n-1);
            }
            else if(rule==2)
            {
                scanf("%d %d",&up_node,&up_value);
                update(1,0,n-1);
            }

            if(rule==3)
            {
                scanf("%d %d",&f,&l);
                printf("%d\n",query(1,0,n-1));
            }
        }
    }
    return 0;
}
