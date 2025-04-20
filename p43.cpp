
// Lcm

#include<iostream>
using namespace std;

int gcd(int a, int b){
    int hcf=0;
    for(int i=2; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}

int lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
cout<<lcm(20,8)<<endl;
return 0;
}