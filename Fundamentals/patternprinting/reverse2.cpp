#include<iostream>
using namespace std;
int main (){

    int n,r;
    cin>>n;

    int a=0;

    while(n>0){
        r=(n%10);
        a=10*a+r;
        n/=10;
    }

    cout<<a<<endl;
    
    return 0;
}