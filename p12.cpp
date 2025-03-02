// problem called "single number"
// we have to print that elements in array , whos copy does not exist

#include<iostream>
#include<vector>
using namespace std;

int singlenumber(vector<int> vec){
    int ans=0;
    for(int val : vec){
        ans = ans^val;
    }
    return ans;
}

int main(){

    vector<int> vec={4,1,2,3,1,2,3};
    cout<<singlenumber(vec);
    
    return 0;
}
