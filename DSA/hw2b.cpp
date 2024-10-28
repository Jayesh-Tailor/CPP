#include<iostream>
using namespace std;

int largest(int arr[], int sz){
    int largest=INT_MIN;
    for(int i=0; i<sz; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int minimum(int arr[], int sz){
    int min=INT_MAX;
    for(int i=0; i<sz; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[]={1,2,-3,8,9,6};
    int sz=6;

    int a,b,c;

    a=largest(arr, sz);
    b=minimum(arr, sz);

    c=a;
    a=b;
    b=c;

    cout<<"Max : "<<a<<endl;
    cout<<"Min : "<<b<<endl;
}