 // program for reversing a number 
#include<iostream>
using namespace std;
int reverse(int x){
    int val;
    int num = 0;
    while(x!=0){
        val = x%10;
        x = x/10;
        num = num*10+val; 
    }
    return num;
}
int main(){

    cout<<reverse(123);
    
    return 0;
}