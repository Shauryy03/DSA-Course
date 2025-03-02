// kadane's alogithm 

#include<iostream>
using namespace std;
int main(){
    int A[]={3,-4,5,4,-1,7,-8};
     int n=7;
     int max_sum = INT8_MIN; 
     int curr_sum =0;
     for (int i = 0; i < n; i++){
        curr_sum += A[i];
        max_sum=max(max_sum,curr_sum);
        if(curr_sum<0){
          curr_sum=0;
        }
     }

     cout<<"max sum = "<<max_sum;
     
    return 0;
}