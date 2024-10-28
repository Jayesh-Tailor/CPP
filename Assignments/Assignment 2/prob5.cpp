#include <iostream>
using namespace std;

int main(){

    int n,first,second,third;

    cout<<"Enter a three digit number ";
    cin>>n;

    first = n/100; //1
    n=n%100;
    second = n/10; //2
    third = n%10; //3

    cout<<"Sum of three your three digit number is "<<first+second+third<<endl;

    return 0;
}
