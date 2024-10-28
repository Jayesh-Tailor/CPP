#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=2;

    cout<<(a+=2)<<endl;//6
    //cout<<(a-=2)<<endl;//2
    cout<<(a/=4)<<endl;//1
    cout<<(a%=3)<<endl;//0
    
    return 0;
}
