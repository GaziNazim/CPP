#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int fibonacci(int ,int , int , int );
int main()
{

    int Number,before,present,after,temp,complexcity=0;
    cout<<"Your Input.\n";
    cin>>Number;
    before=1,after=1;
    cout<<before<<"  "<<after<<"  ";
    for(int i=0;i<Number-2;i++)
    {
        temp=before+after;
        before=after;
        after=temp;
        cout<<after<<"  ";
        complexcity++;

    }
    cout<<endl<<"Complexity "<<complexcity<<endl;
    complexcity=0;

    cin>>Number;
    before=1,after=1;
    cout<<before<<"  "<<after<<"  ";
   complexcity=  fibonacci( Number-2,before, after ,complexcity);
    cout<<endl<<"Complexity "<<complexcity<<endl;


    return 0;

}



int fibonacci(int Number,int before, int after , int complexcity)
{
    int temp;
    temp=before+after;
        before=after;
        after=temp;
        cout<<after<<"   ";
        complexcity++;
        Number--;
        if(Number!=0)
        complexcity= fibonacci( Number, before,  after , complexcity);

        return complexcity;
}
