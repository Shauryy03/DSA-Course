
// question for reverse a string
#include<iostream>
using namespace std;
int main(){
    
   string s ="saurabh patel";
   int st=0, end = s.length()-1;
    while(st<=end){
    swap(s[st],s[end]);
    st++;
    end--;
   }
   for(int i=0; i<s.length(); i++){
    cout<<s[i]<<" ";
   }
    return 0;
}