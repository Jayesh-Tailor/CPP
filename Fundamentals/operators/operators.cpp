#include<iostream>
using namespace std;
int main(){
    
    int a=6;
    int num1=6;
    int num2=3;

    int t1=num1++;
    int t2=num2--;

    cout<<(num1+num2)<<endl; //9
    cout<<(num1-num2)<<endl; //3
    cout<<(num1%num2)<<endl; //0
    cout<<(++num1)<<endl; //7
    cout<<(--a)<<endl; //5
    cout<<(num1==num2)<<endl; //0
    cout<<(num1!=num2)<<endl; //1
    cout<<(num1>=num2)<<endl; //1

    num1+=3; 
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl; 

    return 0;
}