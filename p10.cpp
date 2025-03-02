#include<iostream>
#include<vector>  // vectors
using namespace std;

int main(){
     vector<char> vec={'a','b','c','d'};    
     vector<int> vec1={2,3,5,6}; 
     vector<int> vec2(3,1);
     cout<<vec2[1]<<endl; 

    for(int i : vec1){   // for each loop
        cout<<i<<" ";
    }cout<<endl;
    for(char i : vec){   // for each loop
        cout<<i<<" ";
    }cout<<endl;

    cout<<"size = "<<vec.size()<<endl;
    cout<<"size = "<<vec1.size()<<endl;

    vec1.push_back(7);
    for(int i : vec1){   
        cout<<i<<" ";
       }cout<<endl;
       
    vec1.pop_back();
    for(int i : vec1){   
        cout<<i<<" ";
       }cout<<endl;

       cout<<vec1.front()<<endl;
       cout<<vec1.back()<<endl;
       cout<<vec1.at(1)<<endl;

    return 0;
}