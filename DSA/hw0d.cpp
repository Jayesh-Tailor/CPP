#include<iostream>
using namespace std;

int max(int arr[], int sz){
    int max=INT_MIN;
    for(int i=0; i<sz; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int min(int arr[], int sz){
    int min=INT_MAX;
    for(int i=0; i<sz; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){

    int arr[]={9,2,38,-4,5};
    int sz=5;

    cout<<"min : "<<min(arr, sz)<<endl;

    for(int i=0; i<sz; i++){
        if(arr[i]==min(arr, sz)){
            cout<<"Index of min : "<<i<<endl;
        }
    }
    cout<<endl;

    cout<<"max : "<<max(arr, sz)<<endl;

    for(int i=0; i<sz; i++){
        if(arr[i]==max(arr, sz)){
            cout<<"Index of max : "<<i<<endl;
        }
    }
    cout<<endl;
    
    return 0;
}