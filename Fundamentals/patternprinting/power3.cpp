#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int p=1;

    for(int i=1; i<=b;i++){
        p*=a;
    }

    cout<<p<<endl;

    return 0;
}