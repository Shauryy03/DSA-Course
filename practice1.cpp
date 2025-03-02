#include<iostream>
using namespace std;

// int main(){
//     char c;
//     cout<<"enter a charcter ";
//     cin>>c;

//     if (c>='a' && c<='z'){
//         cout<<"character is lower case"<<endl;
//     } else{
//         cout<<"character is upper case"<<endl;
//     };
//     return 0;
// }

// int main(){
//   int n;
//   cout<<"enter number ";
//   cin>>n;
//   int i = 0;
//   while (i<=n){
//      cout<<i<<" ";
//      i++;
//   };

// for(int i = 1; i<=n; i++){
//     cout<<i<<" ";
// };

// int i=0;
// do{
//  cout<<i<<" ";
//  i++;
// } while (i<=n);

// return 0;
// }


// sum of all odd number

// int main(){
//     int n;
//     cout<<"enter number ";
//     cin>>n;
//     int sum = 0;
//     for(int i = 1; i <= n ; i++){
//         if(i%2 != 0){
//             cout<<i<<" ";
//             sum +=i;  //sum= sum+i
//         }
//     }
//       cout<<endl;
//     cout<<"sum = "<<sum<<endl;

//     return 0;
// }



//  float dollhouse(float l, float b){
//     float parameter = 2*(l+b);
//    float radius = parameter/(2*3.14);
//    return radius;
// };

// int main(){
//     cout<<dollhouse(18,6);
//     return 0;
// }


// min of two 

// int minoftwo(int a , int b){
//     if(a>b){
//         return b;
//     }else{
//         return a;
//     }
// }

// int main(){
//    cout<< minoftwo(617,87);
//     return 0;
// }


// sum of values from 1 to n 

// int sum(int a){
//     int sum = 0;
//     for (int i = 1; i<=a; i++){
//         sum = sum+i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"enter the number : ";
//     cin>>n;

//     cout<<sum(n)<<endl;
//     return 0;
// }



// factorial of n

// int fact(int a){
//     int f= 1;
//     for (int i = 1; i<=a; i++){
//        f=f*i;
//     }
//     return f;
// }
// int main(){
//         int n;
//         cout<<"enter the number : ";
//         cin>>n;
    
//         cout<<fact(n)<<endl;
//         return 0;
//     }


// int digitsum(int a){
//     int sum= 0;
//     while(a>0){
//        int lastdigit = a%10;
//        a = a/10;
//         sum = sum + lastdigit;
       
//     }
//     return sum;
// }

// int main(){
//     int x;
//     cout<<"enter any number :  ";
//     cin>>x;
//     cout<<" sum of digits of "<<x<<" is : "<<digitsum(x)<<endl;

//     return 0;
// }



// int binary(int a){
//     int  power = 1;
//     int ans_binary = 0;
//     while(a>0){
//         int rem = a%2;
//         a = a/2;
//         ans_binary = ans_binary + (rem*power);
//        power = power*10;
//     }
//     return ans_binary;
// }
// int main(){
//         int x;
//         cout<<"enter any number :  ";
//         cin>>x;
//     cout<<"binary coversion of "<<x<<" is : "<<binary(x);
//     return 0;
// }




