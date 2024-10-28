#include<iostream>
using namespace std;

int add(int a, int b=1, int c=2){
    return (a+b+c);
}
int main(){
    cout<<add(5)<<endl;
    cout<<add(5,1)<<endl;
    cout<<add(5,1,1)<<endl;

    return 0;
}