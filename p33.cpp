#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);

    l.pop_back();
    l.pop_front();

    for(int i : l ){
        cout<<i<<" ";
    }
    cout<<endl;

    
    list<int> l2 ={1,2,3,4,5};
    for(int i : l2 ){
        cout<<i<<" ";
    }

    return 0;
}