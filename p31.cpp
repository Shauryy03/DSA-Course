// leetcode 75. sort color
// dutch national flag algorithm

#include<iostream>
using namespace std;

void sortArray(int arr[],int n){
    int mid=0, low=0, high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}



void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
 
    int arr[]={2,0,2,1,1,0,1,2,0,0};
    int n=10;

    sortArray(arr,n);
    print(arr,10);
    
    return 0;
}