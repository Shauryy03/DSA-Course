// two pointer approach for ques no 11 leetcode
#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    int max_area = 0;
     int left_pointer = 0, right_pointer = height.size()-1;
     while(left_pointer < right_pointer){
        int curr_area = min(height[left_pointer],height[right_pointer])*(right_pointer-left_pointer);
        max_area = max(max_area,curr_area);
        if(height[left_pointer] < height[right_pointer]){
            left_pointer++;
     }else{ 
        right_pointer--;
       }
     }
       return max_area;
}
int main(){
    vector<int> vec={1,8,6,2,5,4,8,3,7};
    cout<<"max area = "<<maxArea(vec);
    
    return 0;
}