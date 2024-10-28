#include<iostream>
using namespace std;

bool unique(int arr[], int sz){
    for(int i=0; i<sz; i++){
        if(arr[0]!=arr[i]){
            return false;
        }
        return i;
    }
    return true;
}

int main(){

    int arr[]={1,2,1,2,5};
    int sz=5;

    // int a;
    // a=unique(arr, sz);

    cout<<unique(arr,sz)<<endl;

    return 0;
}