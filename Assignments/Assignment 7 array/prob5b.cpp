#include<iostream>
using namespace std;

int missing(int arr[], int n){

    int sum=0;
    int missing=1;
    
    for(int i=0; i<n; i++){
        sum+=arr[i];
    
    }

    int range=(n)*(n+1)/2;
    missing =range-sum;

    return missing;
}

int max(int arr[], int n){
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){

    int arr[]={5,2,0,4,3};
    int n=5;
    int a=max(arr,n);

    cout<<"Range : [0,"<<a<<"]"<<endl;
    cout<<missing(arr, n)<<endl;

    return 0;
}