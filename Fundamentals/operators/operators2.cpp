#include<iostream>
using namespace std;
int main(){

    bool exp1=true;
    bool exp2=false;

    cout<<(exp1&&exp2)<<endl; //0
    cout<<(exp1||exp2)<<endl; //1
    cout<<(!exp1)<<endl;  //0

    return 0;
}