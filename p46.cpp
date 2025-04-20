// 2D arrays matrixs
#include<iostream>
using namespace std;
int main(){
    int arr[4]= {1,2,3,4};  // array

    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};  // 2D Array
    int rows=4;
    int cols=3;
    // cout<<matrix[0][0]<<endl;
    // matrix[0][0]=10;
    // cout<<matrix[0][0]<<endl;


    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin>>matrix[i][j];
    //     }
    // }

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}