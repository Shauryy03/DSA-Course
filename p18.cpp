// Pair sum 
// this is one approach , this approach is not optimized

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum (vector<int>& vec,int target){
   vector<int> ans;
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            if(vec[i]+vec[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
        return { };
    }

}

int main(){
    vector <int> arr={2,7,11,15};
    int target=9;

     vector<int> ans = pairsum(arr,target);
    cout<<ans[0]<<","<<ans[1];
    
    return 0;
}