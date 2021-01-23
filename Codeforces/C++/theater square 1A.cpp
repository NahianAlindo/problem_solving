#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<cmath>
using namespace std;

int main(){

    double width, breadth, side;
    cin >> width >> breadth >> side;
    cout <<(long long) ceil(width/side) * (long long) ceil(breadth / side);

return 0;

}
