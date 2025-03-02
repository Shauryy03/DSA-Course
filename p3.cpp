// print index value of largest and smallest value in array

#include<iostream>
using namespace std;
int main(){
    int nums[] = {5,15,22,1,-15,24};
    int size = 6;
    
    int smallest = INT8_MAX;  
    int largest = INT8_MIN;

    for(int i=0; i<size; i++){
        smallest = min(nums[i],smallest);  
        largest = max(nums[i],largest);
    }
    cout<<" smallest value is : "<<smallest<<endl;
    cout<<" largest  value is : "<<largest<<endl;

    for(int j=0; j<size; j++){
        if(nums[j]==largest){
            cout<<"largest value ["<<largest<<"] is at index : "<<j<<endl;
        }
        if(nums[j]==smallest){
            cout<<"smallest value ["<<smallest<<"] is at index : "<<j<<endl;
        }
    }
    return 0;
}
