// C++ STL
// vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.insert(vec.begin()+8,10);

    vec.pop_back();
    vec.erase(vec.begin()+7,vec.end()-2);

    for(int i : vec){
        cout<<i<<" ";
    }

    cout<<endl;
    // iterator

    vector<int>:: iterator itr; // forward loop using iterator
    for(itr=vec.begin(); itr!=vec.end();itr++){
        cout<<*(itr)<<" ";
    }
    cout<<endl;
    for( auto itr=vec.rbegin(); itr!=vec.rend();itr++){   //backword loop using iterator
        cout<<*(itr)<<" ";
    }
    

    return 0;
}