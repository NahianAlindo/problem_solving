#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,x,k,rem,sum=0;
    cin>>t;
    int arr[t];
    for(int i=0;i < t; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<t; i++){

        for(k=2;k<=31; k++){
            sum = pow(2,k) - 1;
            if( (arr[i] % sum) ==0)
            {
                x = arr[i]/sum;
                cout<<x<<"\n";
                break;
            }


        }

    }

    return 0;
}
