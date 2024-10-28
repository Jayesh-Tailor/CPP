#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=2;

    
    cout<<(a+b)<<endl; //6
    cout<<(a-b)<<endl; //2
    cout<<(a%b)<<endl; //0
    cout<<(++a)<<endl<<endl; //5
    cout<<(a==b)<<endl; //0
    cout<<(a!=b)<<endl; //1
    cout<<(a>b)<<endl; //1
    cout<<(a<b)<<endl; //0
    cout<<(a>=b)<<endl; //1
    cout<<(a<=b)<<endl<<endl; //0

    bool c=true;
    bool d=false;

    cout<<(c&&d)<<endl; //0
    cout<<(c||d)<<endl; //1
    cout<<(!c)<<endl; //0
    
    return 0;
}