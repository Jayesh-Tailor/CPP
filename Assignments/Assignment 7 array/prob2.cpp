#include<iostream>
using namespace std;

int max(int arr[], int sz){
    int largest=INT_MIN;
    for(int i=0; i<sz; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int min(int arr[], int sz){
    int smallest=INT_MAX;
    for(int i=0; i<sz; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}

int main(){

    int arr[]={1,9,3,4,-5};
    int sz=5;

    cout<<(max(arr,sz)+min(arr,sz))<<endl;

    return 0;
}