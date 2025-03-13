// leet code ques 852. Peak index in mountain array

#include<iostream>
#include<vector>
using namespace std;


        int peakIndexInMountainArray(vector<int>& arr) {
            int st=1, end=arr.size()-2;
            while(st<=end){
                int mid = st + (end-st)/2;
                if (arr[mid -1]<arr[mid] && arr[mid]>arr[mid+1]){
                    return mid;
                }
                else if (arr[mid -1]<arr[mid] ){
                     st = mid+1;
                }else{
                    end = mid-1;
                }
            }
            return {};
        }


int main(){

    vector<int> v={0,3,8,9,5,2};
    int  p = peakIndexInMountainArray(v);
     cout<< p;
    return 0;
}