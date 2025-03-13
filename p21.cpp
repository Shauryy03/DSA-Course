// brute force approach for ques 11 of leet code

#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int max_area = 0;

    for (int i= 0; i<height.size(); i++){
       for (int j= i+1; j<height.size(); j++){
         int curr_area = min(height[i],height[j])*(j-i);
          max_area = max(max_area,curr_area);
       }
    }
    return max_area;
}

int main(){
     vector<int> vec={1,8,6,2,5,4,8,3,7};
      cout<<"max area = "<<maxArea(vec);
    
    return 0;
}