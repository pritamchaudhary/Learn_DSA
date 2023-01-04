#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {12, 112, 23, 0, -3, 25, -45, 94, 9, 1};

    int key;
    cout<<"Enter the element you want to find: "<<endl;
    cin>>key;

    bool found = linearSearch(arr, 10, key);
    if(found){
        cout<<"key is present"<<endl; 
    } else{
        cout<<"key is absent"<<endl;
    }
    
    
    return 0;
}