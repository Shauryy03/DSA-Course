//  sorting
//    bubble sort
//    selection sort
//    insertion sort

#include<iostream>
using namespace std;


void bubbleSort(int arr[],int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


void selectionSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int smallestIdx =i;
         for(int j =i+1; j<n; j++){
           if (arr[smallestIdx]>arr[j]){
            smallestIdx=j;
           }
         }
         swap(arr[i],arr[smallestIdx]);
    }
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}




void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){

    int arr[]={4,1,5,2,3};
    int n=5;

    insertionSort(arr,n);
    print(arr,5);
 
    return 0;
}