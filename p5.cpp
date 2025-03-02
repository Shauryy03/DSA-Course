// linear search algorithm

#include<iostream>
using namespace std;

int findvalue(int arr[], int size,int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
           // cout<<"index = "<<i<<endl;
            return i;
        }
        return -1;
    }
}

int main(){
   int arr[]={4,2,7,8,1,2,5};
   int size = sizeof(arr)/sizeof(int);
   int target = 80;

  cout<<"index = "<< findvalue(arr,size,target);

    return 0;
}