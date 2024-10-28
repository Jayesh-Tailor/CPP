#include<iostream>
using namespace std;

// This is just to check wether a number is prime or not.

bool prime (int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true ;
}


int main(){
    int n;
    cin>>n;

    if(prime(n)){
        cout<<n<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }


    // for(int i=2; i<n-1; i++){
        // if(n%i!=0){
            // cout<<i<<endl;
        // }
    // }
    //for(int i=1; i<=n; i++){
    //    for(int j=1; j<=(n-i+1); j++){
    //        cout<<" ";
    //    }
    //    for(int j=1; j<=i; j++){
    //        cout<<"*";
    //    }
    //    for(int j=0; j<=(i-1); j++){
    //        cout<<" ";
    //    }
    //    cout<<endl;
    //}

    //for(int i=1; i<=sqrt(n); i++){
    //    if(n%i!=0){
    //        cout<<i;
    //    }
    //    //else{
    //    //    cout<<"yes";
    //    //}
    //}
    return 0;
}