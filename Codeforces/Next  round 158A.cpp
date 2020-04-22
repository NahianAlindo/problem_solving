#include<iostream>
using namespace std;
int main(){
    int tests, kthFinisher;
    cin >> tests >> kthFinisher;
    int arr[tests];
    int counter = 0;
    int iter;
    for( iter = 1; iter <= tests; iter++ ){

        cin >> arr[iter];
    }

    for( iter = 1; iter <= tests; iter++ ){

        if ( arr[iter] < 1 ) continue;
        else if(arr[iter] >= arr[kthFinisher] ) counter++;

    }

    cout << counter << "\n";
}
