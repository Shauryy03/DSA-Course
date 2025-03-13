
// leet code ques 50 pow(x,n)
// compute x^n using binary exponentiotion

#include<iostream>
#include<vector>
using namespace std;
   
  double myPow( double x, int n){
     if (n==0) return 1;
     if (x==0) return 0;
     
     long binary_form=n;
     double answer = 1;
     if (n<0){
        x= 1/x;
       binary_form = -binary_form;
     }

     while(binary_form > 0){
        if(binary_form%2 == 1){
            answer = answer*x;
        }
          x=x*x;
          binary_form = binary_form/2;
     }
     return answer;
  }

int main(){

    double x=3;
    int n=5;

    cout<<"product = "<< myPow(x,n);
    
    return 0;
}