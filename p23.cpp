// leet code ques no 238. Product of Array Except Self
//  brute force approach

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> ans;
    for(int i=0; i<nums.size();i++){
        int curr_product =1;
        for(int j=0; j<nums.size();j++){
              if(i!=j){
                curr_product *= nums[j]; 
              }
            }
            ans.push_back(curr_product);
    }

    return ans;
}

int main(){
    vector<int> vec ={1,2,3,4};
    // cout<<productExceptSelf(vec);
     vector<int> a = productExceptSelf(vec);
     for(int i :a){
        cout<<i<<" ";
     }
    
    return 0;
}