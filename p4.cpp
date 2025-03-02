// pass by reference

#include<iostream>
using namespace std;

int change_array(int a[], int s){
  for(int i=0 ; i<s; i++){
     a[i]=a[i]*3;
  }
}

int main(){
    int arr[] ={2,4,6}; 
    int size = 3;
    
    change_array(arr,size);
    
    for(int i=0 ; i<size; i++){
       cout<<arr[i]<<" ";
     }
    
    
    return 0;
}