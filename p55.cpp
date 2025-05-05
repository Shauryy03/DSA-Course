// quick sort
#include<iostream>
using namespace std;
#include<vector>

int partition(vector<int>& arr, int st, int end){
    int pivot = arr[end];
    int idx = st-1;
    for(int j=st; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);

    return idx;
}

void quicksort(vector<int>& arr, int st, int end){
    if(st<end){
        int pivot_idx = partition(arr,st,end);
        quicksort(arr, st, pivot_idx-1);
        quicksort(arr, pivot_idx+1,end);
    }
}

int main(){
     
    vector<int> arr ={5,2,6,4,1,3};
    quicksort(arr,0,arr.size()-1);

    for(auto val: arr){
        cout<<val<<" ";
    }


    return 0;
}