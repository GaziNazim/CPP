#include<bits/stdc++.h>
#include<string>
using namespace std;

vector<int>seq,L,I,sub;
int len,maxij,maxil;

//LCS function by binary search
int LCS()
{
    int high,low,mid;
    maxil=0;
    for(int i=0;i<len;i++)
    {
        high=maxil;
        low=0;
        while(low<=high)
        {
            mid=(high+low)/2;
            if(seq[i]<I[mid])
                high=mid-1;

            else
                low=mid+1;
        }
        L[i]=low;
        I[low]=seq[i];
        if(maxil<low)
        {
            maxil=low;
            maxij=i;
        }
    }
    return maxil;
}



int main()
{
    freopen("input.txt","r",stdin);
    int t,n;
   string s;
    scanf("%d",&t);
    cin.ignore();
    cin.ignore();
    bool lll=false;
    while(t--)
    {
        seq.clear();
        I.clear();
        L.clear();
        len=0;
        while(getline(cin,s)&&s.length())
        {
           n=std::atoi(s.c_str());
           seq.push_back(n);
           len++;
        }
        if(lll)
            printf("\n");
        else lll=true;
        I.resize(len,999999999);
        I[0]=-999999999;
        L.resize(len,0);
        sub.resize(len,0);
        printf("Max hits: %d\n",LCS());
        sub[maxil]=seq[maxij];
        int j=maxil;

        for(int i=maxij-1;i>=0&&maxil>0;i--)
        {
            if(L[i]+1==L[maxij]&&seq[i]<seq[maxij])
            {
                maxij=i;
                maxil--;
                sub[maxil]=seq[i];
            }
        }
        for(int i=1;i<=j;i++)
            printf("%d\n",sub[i]);
    }
    return 0;
}
