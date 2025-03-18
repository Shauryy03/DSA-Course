// priority_queue 

#include<iostream>
#include<queue>
using namespace std;
int main(){
 
    priority_queue<int> q;
    q.push(10);
    q.push(9);
    q.push(32);
    q.push(3);
    q.push(13);
    q.push(1);


    cout<<"top element = "<<q.top()<<endl;  
    q.pop();

    while( !q.empty()){  
      cout<<q.top()<<" ";
      q.pop();
    }


    return 0;
}