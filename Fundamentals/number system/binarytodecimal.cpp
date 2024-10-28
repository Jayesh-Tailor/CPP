#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int s=0;
    int p=1;

    while(n>0){
        s+=(n%10)*p;
        p*=2;
        n/=10;
    }
     
    cout<<s<<endl;

    return 0;
}