// linear search in 2D arrays 
#include<iostream>
using namespace std;

pair<int,int> linearsearch(int matrix[][4], int rows , int cols, int target){
    pair<int, int> p;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j]==target){
               p={i,j};
               return p;
            }
        }
    }
    return {};
}



int maxrowsum(int matrix[][4], int rows , int cols){
    int maxsum= INT8_MIN;
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
         sum += matrix[i][j];
        }
        maxsum = max(maxsum,sum);
    }
    return maxsum;
} 

int maxcolumsum(int matrix[][4], int rows , int cols){
    int maxsum= INT8_MIN;
    for(int i=0; i<cols; i++){
        int sum = 0;
        for(int j=0; j<rows; j++){
         sum += matrix[j][i];
        }
        maxsum = max(maxsum,sum);
    }
    return maxsum;
}


int diagonalsum(int matrix[][4], int rows , int cols){
         int sum = 0;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(i==j){
            sum +=matrix[i][j];
            }else if(j==cols-1-i){
            sum+=matrix[i][j];
            }
        }
    }
    return sum;
} 




int main(){
    int matrix[4][4] = {{1,2,3,4}, {4,5,6,7}, {7,8,9,10},{10,11,12,13}};  // 2D Array
    int rows=4;
    int cols=3;

    int target = 8;
    
     pair<int, int> x = linearsearch(matrix,rows,cols,target);
     cout<<x.first<<" "<<x.second<<endl;

    cout<<maxrowsum(matrix,rows,cols)<<endl;

    cout<<maxcolumsum(matrix,rows,cols)<<endl;

    cout<<diagonalsum(matrix,rows,cols);

    return 0;
}