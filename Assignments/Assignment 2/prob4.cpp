#include<iostream>
using namespace std;
int main(){

    int n,first,secondlast;

    cout<<"Enter a five digit number";
    cin>>n;

    first = n/10000;
    secondlast = (n%100)/10;

    cout<<"Sum of first and second last digit is "<<first+secondlast<<endl;

    return 0;
}