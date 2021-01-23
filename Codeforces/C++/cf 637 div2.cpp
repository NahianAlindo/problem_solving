#include<iostream>
using namespace std;
int main()
{
    int t, n, a, b, c, d;
    cin>> t;
    for(int i=0;i<t;i++)
    {
       cin>>n>>a>>b>>c>>d;
       if( (a+b)*n < (c-d)) cout<<"NO\n";
       else if( (a-b)*n >(c+d)) cout<<"NO\n";
       else cout<<"YES\n";
    }
    return 0;
}
