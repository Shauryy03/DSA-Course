// Pair sum 
// this is 2nd approach, two pointer approach , this approach is more optimized

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum (vector<int>& vec,int target){
    int i=0;
    int j=vec.size();
    vector<int> ans;

     while(i<j){
      int ps=vec[i]+vec[j];
      if(ps>target){
        j--;
      }else if(ps<target){
        i++;
      }else{
          ans.push_back(i);
          ans.push_back(j);

          return ans;
      }
     }
}

int main(){
    vector <int> arr={2,7,11,15};
    int target=9;

     vector<int> ans = pairsum(arr,target);
     cout<<ans[0]<<","<<ans[1];
    
    return 0;
}