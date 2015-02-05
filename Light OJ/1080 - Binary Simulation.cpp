#include<bits/stdc++.h>
#define rep(i,a)  for(int i=0;i<int(a);i++)
#define Max 100010
using namespace std;
char arr[Max];
int tree[3*Max],f,l,up_node,up_value;
bool prop[Max*3];
void create_node(int n,int b,int e)
{
    if(b==e)
    {
        tree[n]=arr[b]-'0';
        return ;
    }
    int lef=n*2;
    int rig=lef+1;
    int mid=(b+e)/2;
    create_node(lef,b,mid);
    create_node(rig,mid+1,e);
    tree[n]=0;
}
void invert(int n,int b,int e)
{

    if(f>e||l<b)
        return;
    else if(f==b&&l==e)
    {
        tree[n]=(tree[n]+1)%2;
        return;
    }
    else if(f<=b&&l>=e)
    {
        tree[n]+=1;
        return;
    }
     int lef=n*2;
    int rig=lef+1;
    int mid=(b+e)/2;
    invert(lef,b,mid);
    invert(rig,mid+1,e);
}
void query(int n,int b,int e,int carry)
{

    if(f<b||f>e)
        return;
    if(f==b&&f==e)
    {

        printf("%d\n",((tree[n]+carry)%2));
        return;
    }
    carry+=tree[n];
    int lef=n*2;
    int rig=lef+1;
    int mid=(b+e)/2;
    query(lef,b,mid,carry);
    query(rig,mid+1,e,carry);

}
int main()
{
    int t,n,q,s,des;
    char op[5],temp;
    cin>>t;
    rep(tt,t)
    {
        scanf("%s %d",arr,&q);
        n=strlen(arr);
        create_node(1,0,n-1);
        printf("Case %d:\n",tt+1);
        rep(i,q)
        {
          scanf("%s",op);
          if(op[0]=='I')
          {

              scanf("%d %d",&f,&l);
              f--;l--;
              invert(1,0,n-1);

          }
          else if(op[0]=='Q')
          {

              scanf("%d",&f);
              f--;
              query(1,0,n-1,0);


          }
        }

    }
}
