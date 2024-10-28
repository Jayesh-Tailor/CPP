#include<iostream>
using namespace std;

int a(int arr1[], int sz1){
    int a;
    for(int i=0; i<sz1; i++){
        if(arr1[i]!=a){
            return false;
        }
    }
    return a;
}

int b(int arr2[], int sz2){
    int b;
    for(int i=0; i<sz2; i++){
        if(arr2[i]!=b){
            return false;
        }
    }
    return b;
}

int main(){

    int arr1[]= {1,2,3,4,5,6};
    int sz1=6;

    int arr2[]={2,3,9,-4,4,0,8};
    int sz2=7;

    int A=a(arr1, sz1);
    int B=b(arr2, sz2);


    if(A!=B){
        
    }
    // for(int i=0; i<sz1; i++){
        // for(int j=0; i<sz2; j++){
            // if(A=B){
                // 
            // }
        // }
    // }

    return 0;
}