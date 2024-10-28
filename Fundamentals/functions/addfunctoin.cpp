#include <iostream>
using namespace std;

int add(int a,int b){
    int sum =a+b;
    return sum;
}

int add(int a,int b, int c){
    int sum=a+b+c;
    return sum;
}

float add(float a,float b){
    float sum=a+b;
    return sum;
}

int main(){
    //float a=4.6;
    //float b=5.4;

    //cout<<add(4,6)<<endl;
    //cout<<add(a,b)<<endl;
    cout<<add(4,5)<<endl;
    //cout<<add(4,2,4)<<endl;

    return 0;
}