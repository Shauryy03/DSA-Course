// permutation of a string

#include<iostream>
using namespace std;

void allper(string s, int indx){
    if(indx==s.length()){
        cout<<s<<endl;
        return;
    }
    for(int i =indx; i<s.length(); i++){
        swap(s[i],s[indx]);
        allper(s,indx+1);
        swap(s[i],s[indx]);
    }
}

int main(){
    string s="abc";
    allper(s,0);
    return 0;
}