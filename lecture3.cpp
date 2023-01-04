#include <iostream>
using namespace std;

// int main(){
//     int a = 2;
//     int b = a+1;
//     if((a=3)==b) {
//         cout<<a;
//     } else{
//         cout<<a+1;
//     }

// }

// int main() {
//     int a = 24;
//     if(a>20){
//         cout<<"Love";
//     } else if(a==24){
//         cout<<"Lovely";
//     } else{
//         cout<<"Babbar";
//     }
//     cout<<a;
// }

// int main(){
//     int n, sum=0, i=1;
//     cin>>n;
//     while(i<=n){
//         sum += i;
//         i += 1;
//     }
//     cout<<sum<<" ";
// }


// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<"even";
//     } else{
//         cout<<"odd";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     int sum = 0;
//     while(i<=n){
//         if(i%2==0){
//             sum = sum+i;
//         }
//         i = i+1;
//     }
//     cout<<sum<<" ";
// }

// int main(){
//     int n;
//     cin>>n;
//     int i=0, sum=0;
//     while(i<=n){
//         sum = sum+i;
//         i= i+2;
//     }
//     cout<<sum;
// }

//prime or not 

int main(){
    int n;
    cin>>n;
    int i =2;
    while(i<n){
        if(n%i==0){
            cout<<"not prime for "<<i<<endl;
        } else{
            cout<<"prime for "<<i<<endl;
        }
        i++;
    }
}

