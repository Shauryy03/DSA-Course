#include<iostream>
using namespace std;

// int main(){
//     int marks[5] = {99,100,54,36,88};
//     double prize[] = {28.8,77.0,98.9};

//     cout<<sizeof(marks)/sizeof(int)<<endl;   // size of array / size of int = length of array

//     int size = 5;
//     int marks[size];

//     // cout<<marks[0]<<endl;
//     // cout<<marks[1]<<endl;
//     // cout<<marks[2]<<endl;
//     // cout<<marks[3]<<endl;
//     // cout<<marks[4]<<endl;

//     // loop : 0 to size-1
//     for(int i = 0; i < size; i++){
//         cout<<marks[i]<<endl;
//     }
//     return 0;
// }




int main(){
    int size = 5;
    int marks[size];

    for(int i = 0; i < size; i++){
        cout<<"enter "<<i+1<<" marks  ";
        cin>>marks[i];
   }

    for(int i = 0; i < size; i++){
         cout<<marks[i]<<endl;
    }

    return 0;
}