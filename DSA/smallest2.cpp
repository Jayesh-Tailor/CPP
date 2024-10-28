#include<iostream>
using namespace std;
int main(){

    int arr[]={1,9,-3,8};
    int sz=4;
    int smallest=INT_MAX;
    

    for(int i=0;i<sz;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"Smallest number : "<<smallest<<endl;
    cout<<"Smallest index : "<<arr[smallest]<<endl;

    return 0;
}