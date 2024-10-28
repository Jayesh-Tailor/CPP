#include<iostream>
using namespace std;

int reversearray(int arr[], int sz){
    int start=0,end=sz-1;

    // for(int i=0; i<sz; i++){
        // if(start<end){
            // swap(arr[start], arr[end]);
            // start++, end--;
        // }
    // }

    while(start<end){
        swap(arr[start], arr[end]);
        start++, end--;
    }

    return 1;
    
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int sz=6;

    reversearray(arr, sz);

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}