// #include<iostream>
// using namespace std;

// int count_prime(int n){
//     int count = 0;
//     for (int i=0; i<=n; i++){
//          for(int j=0; j*j<=n; j++){
//             if(n%j==0){
//                 break;
//             }else{
//                 count++;
//             }
//          }  
//     }
//     return count;
// }

// int main(){
//     int n=10;
//     cout<<count_prime(n)<<endl;
//     return 0;
// }




// digits in a number 

#include<iostream>
using namespace std;

void last_digit(int n){
    int sum =0;
   while(n !=0){
    cout<<n%10<<endl;
    sum =n%10;
    n=n/10;
   }
   cout<<sum;
}

bool is_armstrong (int n){
    int copyN =n;
    int num =0 ;
   while(n !=0){
    int r =n%10;
    num += (r*r*r);
    n=n/10;
   }
    if(num==copyN){
        return true;
    }
    return false;
}



int gcd(int a, int b){
  int hcf = 1;
  for(int i=1; i<=min(a, b); i++){
    if(a%i==0 && b%i==0){
        hcf=i;
    }
  }
  if(a==b){
    hcf = a;
}
return hcf;
}



int main(){
    // int n = 2345;
    // last_digit(n);

    // int x= 153;
    // cout<<is_armstrong(x);

    cout<<gcd(20,28)<<endl;
    return 0;
}