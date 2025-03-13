// pointer


#include<iostream>
using namespace std;
int main(){
    
    int a= 10;
    int* ptr = &a;
    int** ptr2=&ptr;

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;

// dereference
    cout<<*(&a)<<endl;
// address of a pr jo value store h ye usko nikal kr dega
    cout<<*(ptr)<<endl;
    return 0;
}