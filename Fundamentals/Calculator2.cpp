#include<iostream>
using namespace std;
int main(){ 
    int a,b;
    char opr;

    cout<<"Enter operation "<<opr;
    cin>>opr;
    
    cout<<"Enter a ";
    cin>>a;

    cout<<"Enter b ";
    cin>>b;

    switch(opr){
        case '+':
        cout<<(a+b);
        break;

        case '-':
        cout<<(a-b);
        break;

        case '*':
        cout<<(a*b);
        break;

        case '/':
        cout<<(a/b);
        break;

        default:
        cout<<"This is invalid "<<endl;
        
    }

    return 0;
}
