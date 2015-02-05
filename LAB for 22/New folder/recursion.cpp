#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
        return 1;
    else
    {

        int s =sum(n-1)*n;
        return s;
    }
}
int arra[100];
int fibonacci( int n ) {
    if( n == 1 ) return 1;
    else if(n==0)
        return 0;
    else if( arra[n] == 0 ) // ami oke ekbaro process kori nai - or khub mon kharap! :(
        arra[n] = fibonacci( n-1 ) + fibonacci( n-2 ); // ye! o khushi! :D

    return arra[n];
}
int fib(int n)
{
    if(n==0||n==1)
    {
        return 1;

    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
   //cout<<fib(45);
    cout<<fibonacci(3);
    return 0;
}
