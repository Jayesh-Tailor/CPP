#include<iostream>
using namespace std;

int index(int arr[], int sz){
    int largest = INT_MIN;
    for(int i=0; i<sz; i++){
        if(arr[i]>largest){
            largest=arr[i];
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[]={1,2,3,4,5};
    int sz=5;
    
    cout<<index(arr, sz)<<endl;//2

    return 0;
}