#include<iostream>
using namespace std;

bool age(int n){
    if(n<=18){
        return false;
    }
    return true;
}

int main(){

    int n;
    cin>>n;

    if(age(n)){
        cout<<"Yes"<<endl;
    }

    else{
        cout<<"No"<<endl;
    }
    return 0;
}