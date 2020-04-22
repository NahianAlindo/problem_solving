#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

bool isDivisible(int weight){
    if(weight == 2 || weight % 2 !=0 ){
        return false;
    }
    else{
        return true;
    }
}


int main(){

    int weight, answer;
    scanf("%d",&weight);
    answer = isDivisible(weight);
    if(answer) printf("YES");
    else printf("NO\n");

return 0;

}
