// reverse an array

#include<iostream>
using namespace std;

void reverse_array(int arr[], int size){
    int start = 0, end = size-1;

    while(start<end){
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
}

int main(){
    int arr[]={4,2,7,8,1,3,5};
    int size = sizeof(arr)/sizeof(int);
    // int start = 0;
    // int end = size-1;
    for(int i=1; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse_array(arr,size);
    for(int i=1; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}