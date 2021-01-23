#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    if(fabs(x-y)<3){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}