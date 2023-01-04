#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    // int mid = (start+end)/2;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        } else{
            end = mid-1;
        }
        // mid=(start+end)/2;
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int evenArr[6] = {2,5,6,12,23,34};
    int oddArr[5] = {4,5,7,8,13};

    int evenIndex = binarySearch(evenArr, 6, 12);
    int oddIndex = binarySearch(oddArr, 5, 8);

    cout<<"Index of 12 is "<<evenIndex<<endl;
    cout<<"Index of 8 is "<<oddIndex<<endl;
    
    return 0;
}