//WAP to calculate sum and product of all numbers in an array

#include<iostream>
using namespace std;

int sum_of_array(int arr[], int size){
    int sum = 0;
    for (int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int product_of_array(int arr[], int size){
    int product = 1;
    for (int i=0; i<size; i++){
        product = product * arr[i];
    }
    return product;
}

int main(){
    int arr[]={2,6,8,9,5,7};
    int size = sizeof(arr)/sizeof(int);
    cout<<"sum = "<<sum_of_array(arr,size)<<endl;
    cout<<"product = "<<product_of_array(arr,size)<<endl;
    return 0;
}