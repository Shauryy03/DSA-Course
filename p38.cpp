// string data structure

#include<iostream>
using namespace std;
int main(){
    // char str[] ={'a','b','c','d','\0'} ;  // character array
    // cout<<str<<endl;


    // char str1[]="hellow" ; // string literals
    // cout<<str1[0]<<endl;
    // cout<<str1[1]<<endl;
    // cout<<str1[4]<<endl; 


    char str[100];

    cout<<"enter char array : ";
    cin.getline(str,100,'.');

    cout<<"output : "<<str;

    for(char ch : str){
        cout<<ch<<" ";
    }

    return 0;
}