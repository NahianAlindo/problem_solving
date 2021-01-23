#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int test_count;
    cin >> test_count;
    for(int iter = 0; iter<test_count; iter++){

        cin >> str;
        int len = str.length();

    if(len>10) cout<<str[0] << len-2 << str[len-1]<<"\n";

    else cout << str << "\n";
    }
}
