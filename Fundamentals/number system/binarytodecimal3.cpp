#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int sum=0;
    int p=1;
    
    while(n>0){
        int r=(n%10);
        sum+=(r*p);
        p*=2;
        n/=10;
    }

    cout<<sum<<endl;

    return 0;
}