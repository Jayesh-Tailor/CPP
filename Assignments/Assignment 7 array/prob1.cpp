w#include<iostream>
using namespace std;

int odd(int arr[], int sz){
    int c1=0;

    for(int i=0; i<sz; i++){
        if(arr[i]%2!=0){
            c1++;
        }
    }
    return c1;
}

int even(int arr[], int sz){
    int c2=0;

    for(int i=0; i<sz; i++){
        if(arr[i]%2==0){
            c2++;
        }
    }
    return c2;
}

int main(){

    int arr[]={1,2,3,4,5};
    int sz=5;

    cout<<"Odd : "<<odd(arr, sz)<<endl;
    // cout<<"Even : "<<(sz-odd(arr, sz))<<endl;
    cout<<"Even : "<<even(arr, sz)<<endl;

    return 0;
}
