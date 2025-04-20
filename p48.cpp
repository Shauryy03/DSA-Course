
// recusion
// this recursive code
#include<iostream>
using namespace std;

void print_num(int n){  
    if(n==1){              //this is base case 
        cout<<n;
        return ;
    }
    cout<<n<<" ";
    print_num(n-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    // print_num(6);
    cout<<factorial(5);
    return 0;
}