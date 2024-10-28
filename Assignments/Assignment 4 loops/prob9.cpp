#include<iostream>
using namespace std;

bool prime(int n);

int main(){

    int n;
    cin>>n;
    bool flag= false;

    for(int i=2; i<=n/2; i++){
        if(prime(i)){
            if(prime(n-i)){
                cout<<n<<" = "<<i<<" + "<<(n-i)<<endl;
                flag =true;
            }
        }
    }

    if(!flag){
        cout<<n<<" cannot be expressed as a sum of two prime numbers"<<endl;
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
    return n;
}