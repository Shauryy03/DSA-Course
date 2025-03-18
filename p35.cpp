// stack  (last in first out)

#include<iostream>
#include<stack>
using namespace std;
int main(){
 
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    cout<<"top element = "<<s.top()<<endl;  // top me jo element hai top function usko print krta h
    s.pop(); // top mein jo element h use delete krta h pop functiom 


    while( !s.empty()){  // empty funtion check krta h ki stack empty hai ya nhi
      cout<<s.top()<<" ";
      s.pop();
    }
     cout<<endl;
    stack<int> s2;
    s2.push(1);
    s2.push(2);
    s2.push(3);
    stack<int> s3;
    s3.swap(s2);
    cout<<"size of s2 after swapping = "<<s2.size()<<endl;
    cout<<"size of s3 after swapping = "<<s3.size()<<endl;
    return 0;
}