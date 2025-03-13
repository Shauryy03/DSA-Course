// binary search

#include<iostream>
#include<vector>
using namespace std;

int binary_search (vector<int> vec, int target){
    int st=0, end = vec.size()-1;

    while(st<=end){
       int mid = (st+end) / 2;
        if(target>vec[mid]){
         st = mid+1;
        }
        if(target<vec[mid]){
         end = mid-1;
        }
        if(target==vec[mid]){
         return mid;
        }
    }
    return -1;
}

int main(){
vector<int> vec = {-1,0,3,4,5,9,12};
vector<int> vec1 = {-0,3,4,5,9,12};
int t=12;
cout<<binary_search(vec1,t);
    return 0;
}