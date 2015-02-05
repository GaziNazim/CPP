#include <bits/stdc++.h>

using namespace std;

int flag[100] ;
int givenArray[100] ;
int totalSum ;


int subsetSumOfM(int sumNow, int place , int remainingSum )
{
    flag[place] = 1 ;
    if(sumNow + givenArray[place] == totalSum)
    {
        for(int i = 0 ; i<= place  ; i++ )
        {
            if(flag[i] == 1 )
                cout<< givenArray[i]<<ends;
        }
        cout<<endl;
    }
    else if((sumNow+ givenArray[place] + givenArray[place+1])<=totalSum )
    {
        subsetSumOfM(sumNow+givenArray[place] , place +1 , remainingSum - givenArray[place]);
    }

    if((sumNow + remainingSum - givenArray[place] >= totalSum) && (sumNow+givenArray[place+1]) <= totalSum )
    {
        flag[place] = 0 ;
        subsetSumOfM(sumNow , place +1 , remainingSum - givenArray[place]);
    }

}

int main()
{
    int n ;
    cout<<"Enter the Size of Array (Ctrl+Z  to break) : ";
    while(cin>>n )
    {
        int sum = 0 ;


        cout<<"\nEnter the Array : "<<endl;
        for(int i = 0 ; i< n ; i++ )
        {
            cin>>givenArray[i];
            sum+=givenArray[i];
        }
        cout<<"\nEnter Value of M : ";
        cin>>totalSum;
        cout<<"\nThe Subsets are : "<<endl;
        subsetSumOfM(0,0 , sum) ;
        cout<<"\n\nEnter the Size of Array (Ctrl+Z  to break): ";
    }

    return 0;
}
