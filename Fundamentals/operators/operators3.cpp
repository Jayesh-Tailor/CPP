#include<iostream>
using namespace std;
int main(){
    int num1 =5; //0101

    cout<<(num1<<1)<<endl;
    cout<<(num1>>1)<<endl;

    int num2 =8; //1000
    cout<<(num1&num2)<<endl; //0000
    cout<<(num1|num2)<<endl; //1101
    
    return 0;
}