// find smallest in array
#include<iostream>
using namespace std;
int main(){
    int nums[] = {5,15,22,1,-15,24};
    int size = 6;
    
    int smallest = INT8_MAX;  //+infinity = int8_max

    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }
    cout<<" smallest value is : "<<smallest;
    return 0;
}



// largest in array
// #include<iostream>
// using namespace std;
// int main(){
//     int nums[] = {5,15,22,1,-15,24};
//     int size = 6;
//     int largest = INT8_MIN;  //-infinity = int8_min

//          for(int i=0; i<size; i++){
//              if(nums[i]>largest){   
//              largest = nums[i];
//        }
//      }
//      cout<<"largest = "<<largest;
//     return 0;
// }