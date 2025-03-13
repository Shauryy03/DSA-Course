// leet code ques no 33. search in rotated sorted array 

#include<iostream>
#include<vector>
using namespace std;

int Search(vector<int> A , int tar){
    int st=0, end = A.size()-1;
   while(st<=end){
     int mid = st + (end-mid)/2;
     
      if(tar==A[mid]){
        return mid;
      }
      
      if(A[st]<=A[mid]){
         if(A[st]<=tar && tar<=A[mid]){
          end = mid-1;
         }else{
           st = mid+1;
         }
      }else{
         if(A[mid]<=tar && tar<=A[end]){
            st= mid+1;
         }else{
            end = mid-1;
         }
      }
   }
   return -1;
}

int main(){

    vector<int> v ={4,5,6,8,9,0,1,2,3};
    int t = 0;

    int z=Search(v,t);
    cout<<z;
    
    return 0;
}