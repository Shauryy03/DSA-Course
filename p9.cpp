// WAP to print intersection of two arrays

#include<iostream>
using namespace std;

int main(){
      
    int arr1[]={1,6,8,5,0,7};
    int s1=6;
    int arr2[]={2,98,6,9,0};
    int s2=5;

    for(int i=0; i<s1; i++){
        for(int j=0; j<s2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
  

    return 0;
}