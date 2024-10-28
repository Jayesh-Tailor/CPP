#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char opr;

    cout<<"Enter operation ";
    cin>>opr;

    cout<<"Enter two numbers "<<endl;
    cin>>num1>>num2;

    switch(opr){
        case '+':
        cout<<(num1+num2)<<endl;
        break;

        case '-':
        cout<<(num1-num2)<<endl;
        break;

        case '*':
        cout<<(num1*num2)<<endl;
        break;

        case '/':
        cout<<(num1/num2)<<endl;
        break;

        default:
        cout<<"This is invalid "<<endl;

    }
    
    return 0;
}