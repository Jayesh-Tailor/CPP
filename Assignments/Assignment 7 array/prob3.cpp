#include<iostream>
using namespace std;

void reversearray(int arr[], int sz){
    int start=0; int end=sz-1;
    for(int i=0; i<sz;i++){
        if(start<end){
            swap(arr[start],arr[end]);
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int sz=5;

    reversearray(arr,sz);

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    return 0;
}