#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int Mergesort(int arr[],int down,int up);
int MRG(int arr[], int a, int b, int c);

int complx;
int main()
{
    complx=0;
    int input;
    cout<<"Number of inputs"<<endl;
    cin>>input;
    int arr[input];
    cout<<"Your inputs are \n";
    for(int j=0;j<input;j++)
    cin>>arr[j];


    int i;
    Mergesort(arr, 0, input-1);

    printf("Sorted array:");

    for(i = 0; i < input; i++)
        printf("%d  ", arr[i]);


    return 0;
}

int Mergesort(int arr[],int down,int up)
{

    int mid;

    if(down < up)
    {
        mid = (down + up) / 2;

        Mergesort(arr, down, mid);

        Mergesort(arr, mid + 1, up);

        MRG(arr, down, mid, up);
    }

    return 0;
}

int MRG(int arr[], int a, int b, int c)
{
    complx++;
    int arr1[10], arr2[10];
    int n1, n2, i, j, k;
    n1 = b - a + 1;
    n2 = c - b;

    for(i = 0; i < n1; i++)
        arr1[i] = arr[a + i];

    for(j = 0; j < n2; j++)
        arr2[j] = arr[b + j + 1];

    arr1[i] = 9999;
    arr2[j] = 9999;

    i = 0;
    j = 0;

    for(k = a; k <= c; k++)
    {
        if(arr1[i] <= arr2[j])
            arr[k] = arr1[i++];
        else
            arr[k] = arr2[j++];
    }

    return 0;
}
