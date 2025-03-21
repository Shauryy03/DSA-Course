// leet code ques no 238. Product of Array Except Self
//  optimized opproach


#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    
    for(int i=1; i<n; i++){
       prefix[i]=prefix[i-1]*nums[i-1];
    };

    for(int i=n-2; i>=0; i--){
       suffix[i]=suffix[i+1]*nums[i+1];
    };

    for(int i=0; i<n; i++){
       ans[i]=prefix[i]*suffix[i];
    };
   

    return ans;
}

int main(){

    vector<int> vec ={1,2,3,4};
  
     vector<int> a = productExceptSelf(vec);
     for(int i :a){
        cout<<i<<" ";
     }
    
    return 0;
}