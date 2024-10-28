#include<iostream>
using namespace std;

int prime(int n){
    if(n<=1) return 0;
    
    for(int i=2; i<n; i++){
        if(n%i==0) return 0;
        
    }
    return 1;
}

int main(){

    // int count =0;
    int num =2;
    int a ;
    cout<<"Enter number of lines : ";
    cin>>a;

    for(int i=1; i<=a; i++){
        for(int j=1; j<=(a-i); j++){
            cout<<" ";
        }
        for(int j=0; j<=(i-1); j++){ // also for(int j=0; j<i; j++)
            while(!prime(num)){
                num++;
            }
            cout<< num<< " ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}