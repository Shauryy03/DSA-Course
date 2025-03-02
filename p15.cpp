//brute force algorithm

#include<iostream>
using namespace std;
int main(){
    
    int A[]={3,-4,5,4,-1,7,-8};
     int n=7;
     int max_sum = INT8_MIN;

     for(int st=0; st<n; st++){
         int curr_sum=0;
        for(int end=st; end<n; end++){
               curr_sum = curr_sum + A[end];
                max_sum = max(curr_sum,max_sum);

               /* 
               // for this we can write if else also
                   if(int max_sum < curr_sum){
                      max_sum=curr_sum;
                    }
               */
        }
     }
      cout<<"max sum = "<<max_sum;


    return 0;
}