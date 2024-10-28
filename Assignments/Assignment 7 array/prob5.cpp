#include<iostream>
using namespace std;

int max(int arr[], int sz){
    int max=INT_MIN;
    for(int i=0; i<sz; i++){
        if(arr[i]>max){
            max==arr[i];
        }
    }
    return max;
}

int min(int arr[], int sz){
    int min=INT_MAX;
    for(int i=0; i<sz; i++){
        if(arr[i]<min){
            min==arr[i];
        }
    }
    return min;
}

int main(){

    int arr[]={1,2,3,4,5};
    int sz=5;
    int a=max(arr, sz);
    int b=min(arr,sz);

    for(int i=a; i<b; i++){
        if(arr[i]==)
    }
    return 0;
}