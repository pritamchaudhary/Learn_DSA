//calculator

// #include<iostream>
// using namespace std;
// int main(){
//     int a, b;
//     cout<<"Enter first number:"<<endl;
//     cin>>a;

//     cout<<"Enter second number:"<<endl;
//     cin>>b;

//     char op;
//     cout<<"Enter the operand which you want to perform:"<<endl;
//     cin>>op;

//     switch (op)
//     {
//     case '+': cout<<a+b;
//         break;
//     case '-': cout<<a-b;
//         break;
//     case '*': cout<<a*b;
//         break;
//     case '/': cout<<a/b;
//         break;
    
//     default: cout<<"Invalid operation";
//         break;
//     }


//     return 0;
// }


//power (a,b)

// #include <iostream>
// using namespace std;
// int power(int a, int b){
//     int ans = 1;
//     for(int i=1; i<=b; i++){
//         ans = ans * a;
//     }
//     return ans;
// }


// int main(){
//     int a, b;
//     cin>>a>>b;

//     int ans = power(a, b);
//     cout<<"Answer is "<<ans<<endl;

//     return 0;
// }



//nCr
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int num = factorial(n);

//     int den = (factorial(r))* (factorial(n-r));

//     return num/den;
// }

// int main(){
//     int n, r;
//     cin>>n>>r;
//     int ans = nCr(n, r);
//     cout<<"Answer is "<<ans<<endl;

//     return 0;
// }


//counting

// #include<iostream>
// using namespace std;
// void printCounting(int n){
//     for(int i=1; i<=n; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     int n;
//     cin>>n;
//     printCounting(n);

//     return 0;
// }


// //prime number

// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
    
//     int n;
//     cin>>n;

//     if(isPrime(n)){
//         cout<<"is a prime number"<<endl;
//     }else{
//         cout<<"not a prime number"<<endl;
//     }
    

//     return 0;
// }


#include<iostream>
using namespace std;
int update(int a){
    a=a/2;
    return a;
}
int main(){
    int a=10;
    update(a);
    cout<<a<<endl;
}