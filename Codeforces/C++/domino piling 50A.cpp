#include<iostream>

using namespace std;

int main(){
    int width, breadth;
    cin >> width >>breadth;
    if(width == 1 && breadth == 1){
        cout<< 0 <<"\n";
    }
    else{
        cout << (width*breadth)/2<< "\n";
    }
return 0;
}
