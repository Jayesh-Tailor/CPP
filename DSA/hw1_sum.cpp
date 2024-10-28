#include<iostream>
using namespace std;

// int opr(int arr[], int sz){
    // for(int i=0; i<sz; i++){
        // int add=(arr[i+1]+arr[i]);
        // int prdt=(arr[i]*arr[i+1]);
    // }
// }

int add(int arr[], int sz){
    int sum=0;
    for(int i=0; i<sz; i++){
        sum+=arr[i];
    }
    return sum;
}

int product (int arr[], int sz){
    int prdt=1;
    for(int i=0; i<sz; i++){
        prdt*=arr[i];
    }
    return prdt;
}

int main(){
    int arr[]={5,2,3,4,5};
    int sz=5;

    cout<<"Sum is : "<<add(arr, sz)<<endl;
    cout<<"Product is : "<<product(arr, sz)<<endl;

    return 0;
}