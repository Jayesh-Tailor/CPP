#include <iostream>
using namespace std;
int main(){

    int a,b;
    cin>>a>>b;

    int r=1;

    for(int i=1; i<=b; i++){
        r*=a;
    }

    cout<<r<<endl;

    return 0;
}