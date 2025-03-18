// queue  (first in first out)

#include<iostream>
#include<queue>
using namespace std;
int main(){
 
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout<<"top element = "<<q.front()<<endl;  // front me jo element hai front function usko print krta h
    q.pop(); // front mein jo element h use delete krta h pop functiom 


    while( !q.empty()){  // empty funtion check krta h ki stack empty hai ya nhi
      cout<<q.front()<<" ";
      q.pop();
    }


    return 0;
}