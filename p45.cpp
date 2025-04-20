// palindrome Number

#include<iostream>
using namespace std;

int reverse(int a){
    int ans=0;
    while(a!=0){
      int lastdigits = a%10;
      ans = (ans*10) + lastdigits;
      a=a/10;
    }
    return ans;
}

bool is_palindrome(int n){
    if(n<0) return false;
    if(n==0) return true;
    
     if(n==reverse(n)){
        return true;
     }
     return false;
}
int main(){
    
cout<<is_palindrome(313);
    return 0;
}