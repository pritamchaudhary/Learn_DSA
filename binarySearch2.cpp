//first and last occurrence

#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start = 0; 
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        else if(arr[mid]<key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int even[10] ={1,2,3,3,3,3,3,3,3,5};
    cout<<"first occurrence of 3 is at index "<<firstOcc(even, 10, 3)<<endl;
    cout<<"last occurrence of 3 is at index "<<lastOcc(even, 10, 3)<<endl;

    int totalOcc = (lastOcc(even, 10, 3) - firstOcc(even, 10, 3)) + 1;
    cout<<"total Occurrence of 3 is "<<totalOcc<<endl;
    
    return 0;
}