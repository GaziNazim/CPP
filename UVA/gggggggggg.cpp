/*  Ali Akber
    KUET, CSE 2k10
    Email - mail2aliakber@gmail.com  */
#include <bits/stdc++.h>
using namespace std;

typedef long long int           ll;
typedef unsigned long long int  ull;
const double pi=acos(-1.0);
ll inf=1000000007;
//int row[]={1,0,-1,0};int col[]={0,1,0,-1}; //4 Direction
//int row[]={1,1,0,-1,-1,-1,0,1};int col[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int row[]={2,1,-1,-2,-2,-1,1,2};int col[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int row[]={-1,-1,+0,+1,+1,+0};int col[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction

#define nl              printf("\n")
#define ri(N)           scanf("%d",&N)
#define rll(N)          cin>>N
#define rs(N)           scanf("%s",N)
#define fill(v,val)     memset(v, val, sizeof v)
#define fill(v,sz,val)  fill_n(v,sz,val)
#define sz(v)           v.size()
#define eps             1e-9
#define REVERSE(x)      reverse(x.begin(),x.end())
#define tonum(c)        (c>='A'&&c<='Z'?c-'A' : c-'a'+26)
#define all(X)          X.begin(),X.end()
#define UNIQUE(X)       X.resize(unique(all(X))-X.begin())
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
//////////////////////////////////////////////////////////////////////
template<class T> inline int print(vector<T>v)
{
    int sz=v.size();
    for(int i=0;i<sz;i++)
      cout<<v[i]<<" ";
    nl;
}

// Numberic Functions
ll day(ll d,ll m,ll y)
{
    if(m<3) {y--; m+=12;}
    return 365*y+y/4 - y/100+y/400+(153*m - 457)/5+d - 306;
}
ll leap(ll x)
{
    if((x%4==0&&x%100!=0)||x%400==0) return 1;
    return 0;
}
ll josephus(ll x) // If the 2nd person is killed always then the last man
{
    return 2*(x-pow(2,(ll)log2(x)))+1;
}
ll josephus(ll n,ll x) // If the 2nd person is killed always then the x'th man
{
    if(n==1&&x==1) return 1;
    if(n>1&&x==1) return 2;
    ll res=josephus(n-1,x-1);
    if(res==n-1) return 1;
    if(res<=n-2) return res+2;
}
ll survivor(ll n,ll k) // If the k'th person is killed always then the last man
{
    ll i,s;
    for(s=0,i=1;i<=n;i++) s=(s+k)%i;
    return (s+1);
}
ll mod(ll N,ll M)  // n%mod
{
    if(N<0) N+=(ceil(-N*1.00/M)*M);
    return N%M;
}
ll bigmod(ll a,ll b,ll mod)  //(a^b)%mod
{
    if(b==0) return 1;
    if(b%2==0) {ll ret=bigmod(a,b/2,mod); return ((ret%mod)*(ret%mod))%mod;}
    else return ((a%mod)*(bigmod(a,b-1,mod)%mod))%mod;
}
ll modular_inverse(ll a, ll b)  // a*x=1(mod b)
{
    ll b0=b,t,q;ll x0=0,x1=1;
    if(b==1) return 1;
    while(a>1) {q=a/b;t=b,b=a%b,a=t;t=x0,x0=x1-q*x0,x1=t;}
    if(x1<0) x1+=b0;
    return x1;
}
ll nCr(ll n, ll r)
{
    if(r==0) return 1;
    else return nCr(n-1,r-1)*n/r;
}
template<class T> inline double distance_point(pair<T,T>P,pair<T,T>Q)
{
    T X1,X2,Y1,Y2;
    X1=P.first,Y1=P.second;X2=Q.first,Y2=Q.second;
    return sqrt((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2));
}

// String conversion
ll stoi(string str){stringstream ss(str);ll N;ss>>N;return N;}
string itos(ll N){stringstream ss;ss<<N;string str;str=ss.str();return str;}
vector<ll>vstoi(string str){stringstream ss(str);vector<ll>A;for(ll N;ss>>N;A.push_back(N));return A;}
vector<string>split(string str,string Separator)
{
    vector<string>answer;string temp;
    int len=str.size();
    for(int i=0;i<len;i++){
        bool isSeparator=false;
        for(int j=0;j<Separator.length();j++)
          if(str[i]==Separator[j]) isSeparator=true;
        if(!isSeparator) {temp+=str[i];continue;}
        if(temp!="") answer.push_back(temp);temp=""; }
    if(temp!="") answer.push_back(temp);
    return answer;
}

// Working with bit
#define count_bit(x)    __builtin_popcountll(x)
ll check_bit(ll N,ll POS){return (N & (1LL<<POS));}
ll on_bit(ll N,ll POS){return N | (1LL<<POS);}
ll off_bit(ll N,ll POS){return N & ~(1LL<<POS);}

string from_decimal_to(ll n, int b)  // Upto base 20
{
    if(n==0)return "0";
    string chars="0123456789ABCDEFGHIJ";
    string result="";
    while(n>0){result=chars[n%b]+result;n/=b;}
    return result;
}

#define pb          push_back
#define ff          first
#define ss          second
#define MP          make_pair
#define ii          pair<int,int>
#define pp1         pair<int,pair<int,int> >
#define pp2         pair<pair<int,int>,int >
#define pq(xx)      priority_queue<xx,vector<xx>,greater<xx> >
#define maxn        1000000
//////////////////////////////////////////////////////////////////////

int main()
{
   // freopen("E:/cooking_the_books.txt","r",stdin);
   // freopen("E:/cooking_the_books1.txt","w",stdout);
    //double st=clock();
    int i,j,k,l,m,n,t,kase=1;
    ri(t);
    while(t--)
    {
        string str;
        cin>>str;
        sort(all(str));
        string str1(str.rbegin(),str.rend());
        cout<<str<<endl<<str1<<endl;
        for(i=0;str[i];i++)
        {
            if(str[i]!='0')
            {
                swap(str[i],str[0]);
                break;
            }
        }
        printf("Case #%d: %s %s\n",kase++,str.c_str(),str1.c_str());
    }
    //cerr<<(double)(clock()-st)/CLOCKS_PER_SEC<<endl;
return 0;
}
