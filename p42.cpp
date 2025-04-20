// gcd using euclids algorithms

#include<iostream>
using namespace std;

int gcd(int a, int b){
    while(a>0 && b>0){
    if(a>b){
        a=a%b;
    }else{
        b=b%a;
    }
  }

  if(a==0) return b;
  return a;
}

int gcd_via_recursion(int a,int b){
    if(b==0) return a;
    return gcd_via_recursion(b, a%b);
}

int main(){
    cout<<gcd(20,28);
    cout<<gcd_via_recursion(20,28);
    return 0;
}