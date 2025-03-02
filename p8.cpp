// WAP to swap maximum or minimum value of array


#include<iostream>
using namespace std;
int main(){
    int arr[]={4,71,8,99,45};
    int size = 5;
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    
    int start,end;

    for(int i=0; i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
            start = i; 
        }
    }
    for(int j=0; j<size;j++){
        if(arr[j]<smallest){
            smallest = arr[j];
            end = j; 
        }
    }

    cout<<"array before swaping "<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     swap(arr[start],arr[end]);

    // cout<<"largest = "<<largest<<endl;
    // cout<<"smallest = "<<smallest<<endl;

   cout<<"array after swaping "<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}