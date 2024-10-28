#include<iostream>
using namespace std;

void inter(int arr1[], int arr2[], int sz1, int sz2){
    for(int i=0; i<sz1 ; i++){
        for(int j=0; j<sz2; j++){
            if(arr1[i]==arr2[j]){
                cout<< arr2[j];
            }
        }
    }
}
