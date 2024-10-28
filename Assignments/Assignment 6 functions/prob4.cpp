#include<iostream>
using namespace std;

int odd(int n){
    if(n%2==0){
        return false;
    }
    return true;
}

int main(){

    int a,b;
    cin>>a>>b;

    for(int i=a; i<=b; i++){
        if(odd(i)){
            cout<<i<<" ";
        }
    }

    cout<<endl;
    
    return 0;
}