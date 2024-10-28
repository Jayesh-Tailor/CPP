#include<iostream>
using namespace std;

bool prime(int n);

int main(){

    int n;
    cin>>n;

    // if(prime(n)){
        // cout<<n<<endl;
    // }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int j=1; j<=(2*i-1); j++){
            while(!prime(n)){
                n++;
            }
            cout<<n;
            n++;
        }
        cout<<endl;
    }


    return 0;
}

bool prime(int n){
    if(n<=1){
        return false;
    }

    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}