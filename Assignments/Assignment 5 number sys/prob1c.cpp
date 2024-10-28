#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a=n*(n+1)/2;

    int sum=0;
    int p=1;

    while(a>0){
        sum+=(a%2)*p;
        p*=10;
        a/=2;
    }

    cout<<sum<<endl;

    return 0;
}