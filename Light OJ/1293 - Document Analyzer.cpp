#include<bits/stdc++.h>
using namespace std;
set<string>all;
class heap
{
    public:
    vector<string>word;
    bool taken[100];
    vector<int>num;
    int p,q,n;
    heap()
    {
        word.push_back("ZZZZZZ");
        num.push_back(10);
        n=0;

        p=0;
        q=1000000;
    }
    void ins(string s,int nn)
    {
        word.push_back(s);
        num.push_back(nn);
        all.insert(s);
        n++;
        int cur=n;
        while(cur>1)
        {
            int pa=cur/2;
            if(word[pa]>word[cur])
            {
                swap(word[pa],word[cur]);
                swap(num[pa],num[cur]);
            }
            else break;
            cur=pa;

        }
    }
    int find_heap(set<string>::iterator it,int i,int maxi,int mini)
    {
        set<string>::iterator itt;
        itt=it;
         if(it==all.end()++)
         {
             //cout<<"\n\nFinal: "<<maxi<<"  MINI "<<mini<<endl;
            // cout<<"\nP and Q: "<<p<<q<<endl;
             if((q-p)>(maxi-mini))
             {
                 p=mini;
                 q=maxi;

             }
              // cout<<"\nP and Q: "<<p<<q<<endl<<endl<<endl;
             return 0;
         }
         //cout<<"I  "<<i<<"    it   "<<*it<<"  Word  "<<word[i]<<endl;
             if(word[i]==*it&&!taken[i])
             {
                 //mini=min(mini,num[i]);
                 //maxi=max(maxi,num[i]);
                 it++;
               //  cout<<"\nMaxi :"<<maxi<<"  maini :"<<mini<<endl;
                 taken[i]=true;
                 find_heap(it,1,max(maxi,num[i]),min(mini,num[i]));
                 taken[i]=false;
             }
             int ch=i*2;
             //cout<<word[ch];

             if((ch<=n)&&word[ch]<=*it)
             {
                find_heap(itt,ch,maxi,mini);
             }

             ch++;
             if((ch<=n)&&word[ch]<=*it)
             {
                find_heap(itt,ch,maxi,mini);
             }
             return 0;
         }

          void print() { // printing the heap
        printf("Number of elements: %d\n", n);
        for( int i = 1; i <= n; i++ ) cout<<word[i]<<"  ";
        printf("\n");
    }


};


int main()
{

   int t;
   cin>>t;
   string s;
   string c;
   c.resize(15);
   s=c;
   int number;
   for(int l=1;l<=t;l++)
   {
       all.clear();
       heap a;
       int j;
       number=0;
       while(1)
       {

            getline(cin,s);
            if(s=="END")
                break;
                j=0;
       for(int i=0;s[i]!='\0';i++)
       {
           //cout<<"bal";
           if(s[i]>=97&&s[i]<=122)
           {
               //cout<<"alpa";
               c[j]=s[i];
               j++;
           }

           else if(j>0)
           {

               number++;
               c[j]='\0';
               c.resize(j);
               a.ins(c,number);
               c.resize(15);
               j=0;
           }




       }
        if(j>0)
           {

               number++;
               c[j]='\0';
               c.resize(j);
               a.ins(c,number);
               c.resize(15);
               j=0;
           }

       }
        set<string>::iterator it;
    it=all.begin();
    a.find_heap(it,1,0,10000);
    cout<<"Case "<<l<<": "<<a.p<<" "<<a.q<<endl;

   }

    return 0;
}
