#include<iostream>
#include<cmath>
using namespace std;

float area(float r){
    float area= (M_PI*r*r);
    return area;
}

float circumference(float r){
    float circumference =(2*M_PI*r);
    return circumference;
}

int main(){
    float r;
    cout<<"Enter radius : ";
    cin>>r;

    cout<<"Area : "<<area(r)<<endl;
    cout<<"Circumference :"<<circumference(r)<<endl;

    return 0;
}