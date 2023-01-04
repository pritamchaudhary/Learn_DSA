#include<iostream>
using namespace std;
int main(){
    // int a = 4;
    // int b = 6;

    // cout<< (a&b) <<endl;
    // cout<<(a|b)<<endl;
    // cout<<(~a)<<endl;
    // cout<<(a^b)<<endl;

    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<1)<<endl;
    // cout<<(19<<2)<<endl;

    // int i = 7;
    // cout<<(++i)<<endl;
    // //8, i=8
    // cout<<(i++)<<endl;
    // //8, i=9
    // cout<<(i--)<<endl;
    // //9, i=8
    // cout<<(--i)<<endl;
    // //7, i=7

    // int c, d = 1;
    // c=10;
    // if(++c){
    //     cout<<d;
    // }else{
    //     cout<<++d;
    // }
    // cout<<endl;

    // int q = 1;
    // int r = q++;
    // int s = ++q;
    // cout<<r<<endl;
    // cout<<s<<endl;

    // int n;
    // cout<<"Enter a number: "<<endl;
    // cin>>n;
    // int sum=0;
    // for(int i = 1; i<=n; i++){
    //     sum += i;
    // }
    // cout<<sum;


    //fibonacci series

    // int a=0, b=1;
    // cout<<a<<" "<<b<<" ";
    // for(int i=1; i<=n; i++){
    //     int nextNumber = a+b;
    //     cout<<nextNumber<<" ";
    //     a = b;
    //     b = nextNumber;
    // }


    //prime number
    // bool isPrime= 1;
    // for(int i=2; i<n; i++){
    //     if(n%i==0){
    //         isPrime=0;
    //         break;
    //     }
    // }
    // if(isPrime==0){
    //     cout<<"Not a prime number"<<endl;
    // } else{
    //     cout<<"is a prime number";
    // }


    //continue

    // for(int i=1; i<=n; i++){
    //     cout<<"hi"<<endl;
    //     cout<<"hello"<<endl;
    //     continue;
    //     cout<<"hi i am pritam"<<endl;
    // }


    // for(int i = 0; i<=n; i++){
    //     cout<<i<<" ";
    //     i++;
    // }

    // for(int i = 0; i<=5; i--){
    //     cout<<i<<" ";
    //     i++;
    // }


    // for(int i=0;i<=15; i++){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }

    for(int i=0; i<5; i++){
        for(int j=i; j<=5; j++){
            cout<<i<<" "<<j<<" "<<endl;
        }
    }

    return 0;
}