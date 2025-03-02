// program for linear search in vector
// reverse a vector

#include<iostream>
#include<vector>
using namespace std;

int find_value(vector<int> vec,int target){
    for(int i=0;i<vec.size();i++){
        if(vec.at(i)==target){
            return i;
        }
    }
    return -1;
}

int reverse(vector<int>& vec){
    int start = 0;
    int end = vec.size()-1;

    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
     }
}

int printarr(vector<int> vec){
    for(int i : vec){
        cout<<i<<" ";
    }
}



int main(){
    vector<int> vec={2,6,4,9,0,8,1,5,3};
    int target = 3;
    cout<<find_value(vec,target)<<endl;
    
     reverse(vec);

    cout<<printarr(vec)<<endl;
    return 0;
}