// #include<iostream>
// using namespace std;
// void reachHome(int src, int dest){
//     cout<<"source "<<src<<" destination "<<dest<<endl;
//     //base case
//     if(src==dest){
//         cout<<"reached "<<endl;
//         return;
//     }
//     src++;
//     //recursive call
//     reachHome(src,dest);
// }

// int main(){
//     int dest=10;
//     int src=1;
//     cout<<endl;

//     reachHome(src,dest);

//     return 0;
// }



// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n==0)
//         return 0;
//     if(n==1)
//         return 1;

//     int ans = fib(n-1)+fib(n-2);
//     return ans;
// }
// int main(){
//     int n, i=0;
//     cin>>n;
//     cout<<"fibonacci series: "<<endl;
//     while(i<n){
//         cout<<fib(i)<<" ";
//         i++;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int countDistinctWayToClimbStair(long long nStairs){
//     //base case
//     if(nStairs < 0)
//         return 0;
//     if(nStairs == 0)
//         return 1;

//     //recursive call
//     int ans = countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);
//     return ans;
// }

// int main(){
//     int s = 5;
//     cout<<"number of ways: "<<countDistinctWayToClimbStair(s);
//     return 0;
// }


#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main() {

    string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
}