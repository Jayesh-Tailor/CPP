#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a =0;
    int p=1;

    // decimal to binary
    while(n>0){
        a +=(n%2)*p;
        p*=10;
        n/=2;
    }
    // cout<<a<<endl;

    // couting the numbers
    int b=0;
    while(a>0){
        // int b;
        // b += (a%10);
        a/=10;
        b++;
    }

    cout<<b<<endl;

    return 0;
}