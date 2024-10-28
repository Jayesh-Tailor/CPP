#include<iostream>
using namespace std;
int main (){
    int n;

    cin>>n;

    if(n%2==0&&n%3==0){
        cout<<"Number is even and divisible by 3 also "<<endl;
    }
    else{
        cout<<"Number is neither even nor divisible by 3 "<<endl;
    }
    
    return 0;
}