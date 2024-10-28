#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,3};
    int sz=3;
    int largest=INT_MIN;
    
    for(int i=0; i<sz; i++){
        while(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<largest<<endl;
    
    return 0;
}