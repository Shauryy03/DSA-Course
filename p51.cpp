// recursive binary search

#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> arr, int tar, int st, int end){
    if(st<=end){
        int mid = (st+end) /2;
        if(tar==arr[mid]){
            return mid;
        }
        if(tar>arr[mid]){
            return binarysearch(arr,tar,mid+1,end);
        }
        if(tar<arr[mid]){
            return binarysearch(arr,tar,st,mid-1);
        }
    }
    return -1;
}

int main(){
    vector<int> arr={2,4,6,8,10,34,55};
    cout<<binarysearch(arr,34,0,6);
    return 0;
}