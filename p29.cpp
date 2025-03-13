// leet code 540. single array in sorted array
#include<iostream>
#include<vector>
using namespace std;

            int singleNonDuplicate(vector<int>& nums) {
                int st=0, end= nums.size()-1;
           
           if (nums.size()-1==0){
            return nums[0];
           }
        
                while(st<=end){
                    int mid = st + (end-st)/2;
        
                     if(mid==0 && nums[0]!=nums[1]){ 
                        return nums[mid];
                     }
                     if( mid== nums.size()-1 && nums[nums.size()-1]!=nums[nums.size()-2]){
                          return nums[nums.size()-1];
                    }
        
                    if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid] ){
                        return nums[mid];
                    }
                    else if (mid%2==0){
                        if(nums[mid]==nums[mid-1]){
                            end= mid-1;
                        }else{
                            st = mid +1;
                        }
                    }else{
                        if(nums[mid]==nums[mid-1]){
                            st=mid+1;
                        }else{
                             end=mid-1;
                        }
                   }
                }
                return {};
            }

        int main(){

            vector<int> v={1,1,2,2,3,3,4,5,5};
            int  p = singleNonDuplicate(v);
             cout<< p;
            return 0;
    return 0;
}