#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int s=0;
    int p=1;

    while(n>0){
        s+=(n%2)*p;
        p*=10;
        n/=2;
    }

    cout<<s<<endl;
     
    return 0;
}