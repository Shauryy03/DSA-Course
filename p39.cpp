// String

#include<iostream>
#include<string>     // string ko include krna optional h because iostream humne include kiya 
using namespace std;
int main(){
    string str = "apna college";
    cout<<str<<endl;


    //operator in string
    string s1= "hellow";
    string s2= "world";
    string s3 = s1+" "+s2;  // concatenation 
    cout<<s3<<endl;
    cout<<(s1==s2)<<endl; // return 1 if string 1 equals to string 2
    cout<<str.length()<<endl; // return length 

//    loops in strings

   for(int i =0; i<str.length(); i++){
    cout<<str[i]<<" ";
   }

   for(char c: str){
    cout<<c<<" ";
   }

    return 0;
}