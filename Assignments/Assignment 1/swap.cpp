#include <iostream>
using namespace std;

int main(){

    int a=2;
    int b=3;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    int c;
    c=b;
    b=a;
    a=c;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    return 0;
}
