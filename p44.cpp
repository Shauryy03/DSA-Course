// reverse a number
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
int main(){
    cout<<reverse(1234);
    return 0;
}