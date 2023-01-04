//print factorial of the given number

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     //base case
//     if(n==0){
//         return 1;
//     }
//     //recursive relation
//     int smallerProblem = factorial(n-1);
//     int biggerProblem = n*smallerProblem;

//     return biggerProblem;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = factorial(n);
//     cout<<ans<<endl;

//     return 0;
// }

//print power of the number
// #include<iostream>
// using namespace std;
// int power(int n){
//     if(n==0){
//         return 1;
//     }
//     int smallerProblem = power(n-1);
//     int biggerProblem = 2*smallerProblem;
//     return biggerProblem;
// }

// int main(){
//     int n;
//     cin>>n;

//     int ans = power(n);
//     cout<<ans<<endl;

//     return 0;
// }



#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}