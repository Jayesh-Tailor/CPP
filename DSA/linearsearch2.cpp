#include<iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target){

    for(int i=0; i<sz; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){

    int arr[]={1,2,3,4};
    int sz=4;
    int target=3;

    cout<<linearsearch(arr, sz, target)<<endl;

    return 0;
}