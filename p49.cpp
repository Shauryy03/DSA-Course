// nth fibonaccii term

#include<iostream>
using namespace std;

int fibo(int n){
    if(n==1){
        return 1;
    }else if(n==0){
        return 0;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    cout<<fibo(6);
    return 0;
}